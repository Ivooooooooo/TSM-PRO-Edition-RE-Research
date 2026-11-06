import sys, json, collections
from scapy.all import rdpcap, IP, TCP, UDP, DNS, DNSQR, DNSRR, Raw

pcap = sys.argv[1]
pkts = rdpcap(pcap)
print("packets", len(pkts))

dns_q = collections.Counter()
dns_a = collections.Counter()
syn = collections.Counter()
sni = collections.Counter()
http_host = collections.Counter()

def parse_sni(data):
    # TLS record: 16 03 xx len ; handshake: 01 len3 ; client hello
    try:
        if len(data) < 5 or data[0] != 0x16 or data[1] != 0x03:
            return None
        # skip record header
        rec_len = int.from_bytes(data[3:5], "big")
        hs = data[5:5+rec_len]
        if len(hs) < 4 or hs[0] != 0x01:
            return None
        # client hello
        p = 4 + 2 + 32  # handshake header + version + random
        sid_len = hs[p]; p += 1 + sid_len
        cs_len = int.from_bytes(hs[p:p+2], "big"); p += 2 + cs_len
        cm_len = hs[p]; p += 1 + cm_len
        ext_len = int.from_bytes(hs[p:p+2], "big"); p += 2
        end = p + ext_len
        while p + 4 <= end:
            et = int.from_bytes(hs[p:p+2], "big")
            el = int.from_bytes(hs[p+2:p+4], "big")
            p += 4
            if et == 0:
                # server_name
                q = p + 2
                while q + 3 <= p + el:
                    ntype = hs[q]; nlen = int.from_bytes(hs[q+1:q+3], "big")
                    name = hs[q+3:q+3+nlen].decode("idna", "replace")
                    if ntype == 0:
                        return name
                    q += 3 + nlen
            p += el
    except Exception:
        return None
    return None

for pkt in pkts:
    if IP in pkt and UDP in pkt and DNS in pkt:
        d = pkt[DNS]
        if d.qd and d.qd.qname:
            q = d.qd.qname.decode("idna", "replace").rstrip(".")
            dns_q[q] += 1
        if d.an:
            try:
                for i in range(d.ancount):
                    rr = d.an[i]
                    if rr.type == 1:
                        dns_a[(rr.rrname.decode("idna","replace").rstrip("."), rr.rdata)] += 1
            except Exception:
                pass
    if IP in pkt and TCP in pkt:
        t = pkt[TCP]
        if t.flags & 0x02:  # SYN
            syn[(pkt[IP].dst, t.dport)] += 1
        if Raw in pkt and t.dport in (443, 8443):
            s = parse_sni(bytes(pkt[Raw].load))
            if s:
                sni[s] += 1
        if Raw in pkt and t.dport in (80, 8080):
            try:
                head = bytes(pkt[Raw].load).split(b"\r\n")
                for line in head:
                    if line.lower().startswith(b"host:"):
                        http_host[line.split(b":",1)[1].strip().decode("latin1")] += 1
                        break
            except Exception:
                pass

print("\nDNS queries:")
for k,v in dns_q.most_common(100): print(f"  {v:4} {k}")
print("\nDNS A answers:")
for (n,a),v in dns_a.most_common(100): print(f"  {v:4} {n} -> {a}")
print("\nTCP SYNs:")
for (ip,port),v in syn.most_common(100): print(f"  {v:4} {ip}:{port}")
print("\nTLS SNI:")
for k,v in sni.most_common(100): print(f"  {v:4} {k}")
print("\nHTTP Host:")
for k,v in http_host.most_common(100): print(f"  {v:4} {k}")
