/*
 * spd_uPerformTask
 * Entry VA: 0x12dc4b8
 * Cleaned pseudocode from RetDec v5.0 (best-effort names/comments).
 *
 * Known fields (offsets from the object base):
 *   self +0xA8  : task type
 *   self +0x1FF : flag
 *   self +0x5A8 : extra info string
 *
 * Key strings observed:
 *   "uPerformTask"
 *   "IMEI1"
 *   "IMEI2"
 *   "reboot2recovery"
 *   "reboot2bootloader"
 *   "FIRMWARE_BACKUP"
 *   "%0/%1/%2"
 *   "mfdl::qPartitionOP..."
 *   "Reset to factory default (AP)[DIAG]"
 *   "ETSRESET::res"
 *   "Reset to factory default (MISC)"
 *   "misc"
 *   "para"
 *   "boot-recovery"
 *   "Huawei"
 *   "VIVO"
 *   "--reason=android"
 *   "--locale=en_US"
 *
 * `self` is the original object pointer (this).
 * Calls named `sub_<addr>` could not be resolved to a known method.
 */


// Address range: 0x12dc4b8 - 0x12dea75
int32_t SPD_uPerformTask(void) {
    // 0x12dc4b8
    SPD_init();
    char * v1 = (char *)2; // bp-172, 0x12dc4de
    sub_167a590();
    qt_QString();
    qt_QString_append();
    qt_qDebug();
    qt_intToVariant();
    qt_toString();
    qt_QString_dtor();
    qt_QString_dtor();
    qt_QString_dtor();
    qt_QString();
    int32_t v2 = qt_contains(); // 0x12dc5d8
    qt_QString_dtor();
    if ((char)v2 != 0) {
        // 0x12dea6d
        return sub_12d3ac4();
    }
    // 0x12dc606
    int32_t self; // 0x12dc4b8
    int32_t * v4 = (int32_t *)(self + 168); // 0x12dc60c [self->task_type]
    int32_t result; // 0x12dc4b8
    if (*v4 == 22) {
        // 0x12dea6d
        return result;
    }
    int32_t result2 = SPD_connect(); // 0x12dc61b
    if ((char)result2 == 0) {
        // 0x12dea6d
        return result2;
    }
    int32_t v5 = self + 1448; // 0x12dc590 [self->extra_info]
    v1 = (char *)2;
    sub_167a590();
    qt_QString();
    qt_QString_append();
    char * v6; // bp-316, 0x12dc4b8
    char * v7 = (char *)&v6; // bp-520, 0x12dc6b3
    qt_qDebug();
    qt_QString_dtor();
    qt_QString_dtor();
    qt_QString_dtor();
    char * v8 = (char *)(self + 514); // 0x12dc6de
    char * v9; // bp-344, 0x12dc4b8
    int32_t v10; // bp-356, 0x12dc4b8
    char * v11; // bp-368, 0x12dc4b8
    char * v12; // bp-372, 0x12dc4b8
    char * v13; // bp-532, 0x12dc4b8
    int32_t v14; // bp-552, 0x12dc4b8
    int32_t v15; // bp-556, 0x12dc4b8
    int32_t v16; // bp-560, 0x12dc4b8
    if (*v8 != 0) {
        // 0x12dc6eb
        v7 = (char *)&g457;
        qt_QString();
        v7 = (char *)1;
        qt_QString();
        v13 = (char *)&v1;
        qt_QString();
        v13 = NULL;
        int32_t v17 = sub_1800c90(); // 0x12dc73b
        char * v18 = (char *)&v6; // bp-540, 0x12dc741
        qt_QString_dtor();
        qt_QString_dtor();
        int32_t result3 = *v4; // 0x12dc75c
        if (result3 == 4) {
            // 0x12dea6d
            return sub_12ee01c();
        }
        int32_t v19 = (int32_t)&v18; // 0x12dc741
        int32_t result4; // 0x12dc4b8
        int32_t v20; // 0x12dc4b8
        if (result3 != 15) {
            if (result3 != 3) {
                if (result3 != 2) {
                    // 0x12dc84e
                    if (result3 != 94) {
                        // 0x12dea6d
                        return result3;
                    }
                    // 0x12dc857
                    v18 = (char *)&g458;
                    v12 = (char *)&g594;
                    v11 = (char *)&g594;
                    qt_QString();
                    v13 = (char *)1;
                    v18 = (char *)&v1;
                    sub_1800b30();
                    char * v21 = v9;
                    int32_t v22 = &v16; // 0x12dc8ae
                    v9 = (char *)&g625;
                    *(int32_t *)&v6 = (int32_t)v21;
                    int32_t v23 = sub_182f554(); // 0x12dc8c1
                    int32_t v24 = sub_182f524(); // 0x12dc8d2
                    sub_12a56a0();
                    qt_QString_dtor();
                    int32_t v25 = (int32_t)&v1;
                    int32_t * v26 = &v16; // 0x12dc905
                    int32_t v27 = v22; // 0x12dc905
                    if (v24 != v23) {
                        int32_t v28 = &v10;
                        int32_t v29 = v22; // 0x12dca8d
                        int32_t v30 = v23; // 0x12dcb30
                        v10 = *(int32_t *)v30;
                        qt_QString_ref();
                        *(int32_t *)v29 = v25;
                        v1 = (char *)2;
                        sub_167a980();
                        int32_t * v31 = (int32_t *)(v29 - 4); // 0x12dc95d
                        *v31 = (int32_t)"uPerformTask";
                        qt_QString();
                        int32_t * v32 = (int32_t *)(v29 - 8); // 0x12dc969
                        *v32 = v28;
                        int32_t v33 = qt_toString(); // 0x12dc975
                        int32_t * v34 = (int32_t *)(v29 - 12); // 0x12dc97a
                        *v34 = v33;
                        qt_QString_dtor();
                        *v34 = (int32_t)&g450;
                        qt_QString();
                        *v31 = 1;
                        *v32 = 0;
                        *v34 = v25;
                        *(int32_t *)(v29 - 16) = v28;
                        sub_1800b30();
                        qt_QString_dtor();
                        int32_t * v35 = (int32_t *)(v29 - 32); // 0x12dc9c3
                        *v35 = (int32_t)"IMEI1";
                        qt_QString();
                        *v35 = 1;
                        *(int32_t *)(v29 - 36) = v25;
                        int32_t v36 = sub_17fad60(); // 0x12dc9e3
                        *(int32_t *)(v29 - 40) = v28;
                        int32_t * v37 = (int32_t *)(v29 - 44);
                        *v37 = v28;
                        int32_t v38 = (char)v36 == 0 ? v28 : (int32_t)v9;
                        qt_QString_dtor();
                        *v37 = (int32_t)"IMEI2";
                        qt_QString();
                        *v37 = 1;
                        *(int32_t *)(v29 - 48) = v25;
                        sub_17fad60();
                        *(int32_t *)(v29 - 52) = v38;
                        v29 -= 56;
                        int32_t * v39 = (int32_t *)v29;
                        *v39 = v38;
                        qt_QString_dtor();
                        sub_12a56a0();
                        qt_QString_dtor();
                        v30 += 4;
                        v26 = v39;
                        v27 = v29;
                        while (v24 != v30) {
                            // 0x12dcb1a
                            v10 = *(int32_t *)v30;
                            qt_QString_ref();
                            *(int32_t *)v29 = v25;
                            v1 = (char *)2;
                            sub_167a980();
                            v31 = (int32_t *)(v29 - 4);
                            *v31 = (int32_t)"uPerformTask";
                            qt_QString();
                            v32 = (int32_t *)(v29 - 8);
                            *v32 = v28;
                            v33 = qt_toString();
                            v34 = (int32_t *)(v29 - 12);
                            *v34 = v33;
                            qt_QString_dtor();
                            *v34 = (int32_t)&g450;
                            qt_QString();
                            *v31 = 1;
                            *v32 = 0;
                            *v34 = v25;
                            *(int32_t *)(v29 - 16) = v28;
                            sub_1800b30();
                            qt_QString_dtor();
                            v35 = (int32_t *)(v29 - 32);
                            *v35 = (int32_t)"IMEI1";
                            qt_QString();
                            *v35 = 1;
                            *(int32_t *)(v29 - 36) = v25;
                            v36 = sub_17fad60();
                            *(int32_t *)(v29 - 40) = v28;
                            v37 = (int32_t *)(v29 - 44);
                            *v37 = v28;
                            v38 = (char)v36 == 0 ? v28 : (int32_t)v9;
                            qt_QString_dtor();
                            *v37 = (int32_t)"IMEI2";
                            qt_QString();
                            *v37 = 1;
                            *(int32_t *)(v29 - 48) = v25;
                            sub_17fad60();
                            *(int32_t *)(v29 - 52) = v38;
                            v29 -= 56;
                            v39 = (int32_t *)v29;
                            *v39 = v38;
                            qt_QString_dtor();
                            sub_12a56a0();
                            qt_QString_dtor();
                            v30 += 4;
                            v26 = v39;
                            v27 = v29;
                        }
                    }
                    // 0x12dcb3c
                    sub_12a56a0();
                    *v26 = v25;
                    v1 = (char *)2;
                    sub_167a980();
                    *(int32_t *)(v27 - 4) = (int32_t)"uPerformTask";
                    qt_QString();
                    *(int32_t *)(v27 - 8) = (int32_t)"IMEI1";
                    qt_QString();
                    int32_t v40 = (int32_t)&v12; // 0x12dcbb2
                    *(int32_t *)(v27 - 12) = v40;
                    qt_toString();
                    int32_t * v41 = (int32_t *)(v27 - 16); // 0x12dcbc0
                    *v41 = v5;
                    qt_QString_dtor();
                    *v41 = v25;
                    v1 = (char *)2;
                    sub_167a980();
                    *(int32_t *)(v27 - 20) = (int32_t)"uPerformTask";
                    qt_QString();
                    *(int32_t *)(v27 - 24) = (int32_t)"IMEI2";
                    qt_QString();
                    int32_t * v42 = (int32_t *)(v27 - 28); // 0x12dcc31
                    int32_t v43 = (int32_t)&v11; // 0x12dcc31
                    *v42 = v43;
                    int32_t v44 = qt_toString(); // 0x12dcc34
                    int32_t * v45 = (int32_t *)(v27 - 32); // 0x12dcc3f
                    *v45 = v44;
                    qt_QString_dtor();
                    *v42 = v43;
                    *v45 = v40;
                    sub_12e4934((int32_t)&g2208, (int32_t)&g2208);
                    *(int32_t *)(v27 - 36) = v5;
                    *(int32_t *)(v27 - 40) = v5;
                    qt_QString_dtor();
                    // 0x12dea6d
                    return qt_QString_dtor();
                }
                // 0x12dc83e
                v18 = (char *)v17;
                result4 = sub_12e4040(v17);
                v20 = v19;
            } else {
                // 0x12dc798
                v18 = "reboot2recovery";
                qt_QString();
                v18 = NULL;
                int32_t v46 = qt_contains(); // 0x12dc7ba
                qt_QString_dtor();
                int32_t * v47 = &v14; // 0x12dc7d6
                if ((char)v46 != 0) {
                    // 0x12dc7d8
                    v14 = v17;
                    v15 = sub_12f9b8c(v17);
                    v47 = &v15;
                }
                int32_t v48 = (int32_t)v47;
                *v47 = (int32_t)"reboot2bootloader";
                qt_QString();
                *v47 = 0;
                *(int32_t *)(v48 - 4) = (int32_t)&v1;
                uint32_t v49 = qt_contains(); // 0x12dc803
                *(int32_t *)(v48 - 8) = v5;
                int32_t v50 = v48 - 12; // 0x12dc809
                int32_t * v51 = (int32_t *)v50; // 0x12dc809
                *v51 = v5;
                result = qt_QString_dtor() & -256 | v49 % 256;
                if ((char)v49 == 0) {
                    // 0x12dea6d
                    return result;
                }
                // 0x12dc825
                *v51 = v17;
                result4 = sub_12fc154((int32_t)&g2208);
                v20 = v50;
            }
        } else {
            // 0x12dc77c
            v18 = (char *)v17;
            result4 = sub_12f7a64(v17);
            v20 = v19;
        }
        // 0x12dc833
        *(int32_t *)(v20 - 4) = v17;
        // 0x12dea6d
        return result4;
    }
    int32_t v52 = *v4; // 0x12dcc6d
    if (v52 == 1) {
        // 0x12dea6d
        return 1;
    }
    char * v53 = (char *)&g594; // bp-404, 0x12dcc7f
    int32_t v54 = (int32_t)&v7; // 0x12dcc89
    int32_t v55 = v5; // 0x12dcc89
    if (v52 == 72) {
        // 0x12dcc8f
        v7 = "FIRMWARE_BACKUP";
        qt_QString();
        v7 = (char *)1;
        int32_t v56 = sub_17fad60(); // 0x12dccc6
        v13 = (char *)self;
        qt_QString_dtor();
        if ((char)v56 == 0) {
            // 0x12dce1b
            v1 = (char *)*(int32_t *)(self + 208);
            qt_QString_ref();
            *(int32_t *)&v1 = (int32_t)v53;
            *(int32_t *)&v53 = (int32_t)v1;
            v54 = (int32_t)&v13;
            v55 = v5;
        } else {
            // 0x12dcce8
            v13 = "%0/%1/%2";
            qt_QString();
            sub_11c5600();
            v13 = (char *)&v1;
            sub_17ffaa0();
            int32_t v57 = (int32_t)&v6; // 0x12dcd3d
            *(int32_t *)&v6 = (int32_t)v53;
            *(int32_t *)&v53 = (int32_t)v6;
            qt_QString_dtor();
            qt_QString_dtor();
            qt_QString_dtor();
            int32_t v58 = (int32_t)&v53; // 0x12dcd6f
            v14 = v58;
            v15 = sub_11c7d50();
            int32_t v59 = sub_17bbb20(); // 0x12dcd7a
            sub_11c8050();
            int32_t * v60 = &v15; // 0x12dcd94
            if ((char)v59 == 0) {
                // 0x12dcd96
                v15 = v57;
                v6 = (char *)&g594;
                sub_11c7d50();
                v16 = v58;
                int32_t v61 = sub_17bbbe0(); // bp-564, 0x12dcdbb
                sub_11c8050();
                qt_QString_dtor();
                v60 = &v61;
            }
            int32_t v62 = (int32_t)&v1; // 0x12dcc95
            int32_t v63 = (int32_t)v60;
            *(int32_t *)(v63 + 8) = (int32_t)&g451;
            *v60 = v57;
            int32_t * v64 = (int32_t *)(v63 + 4); // 0x12dcddb
            *v64 = v58;
            sub_199e5fc();
            *v64 = v57;
            *v60 = v62;
            sub_11c6860();
            *(int32_t *)&v53 = (int32_t)v1;
            *(int32_t *)&v1 = (int32_t)v53;
            qt_QString_dtor();
            v54 = v63;
            v55 = v62;
        }
        // 0x12dce4a
        qt_QString_dtor();
    }
    int32_t v65 = *v4; // 0x12dce64
    char * v66; // bp-332, 0x12dc4b8
    if (*v8 != 0) {
        int32_t v67 = v65; // 0x12dce76
        int32_t v68 = v54; // 0x12dce76
        if (v65 < 8) {
            // 0x12dce7c
            *(char *)(self + 517) = 1;
            v1 = (char *)2;
            *(int32_t *)v54 = (int32_t)&v1;
            sub_167a590();
            int32_t * v69 = (int32_t *)(v54 - 4); // 0x12dcec9
            *v69 = (int32_t)&v6;
            sub_132418c();
            *v69 = (int32_t)"mfdl::qPartitionOP...";
            qt_QString();
            *(int32_t *)(v54 - 8) = *(int32_t *)(self + 392);
            *v69 = *(int32_t *)(self + 396);
            int32_t v70 = qt_QVariant(); // 0x12dceff
            *(int32_t *)(v54 - 12) = v70;
            v68 = v54 - 16;
            *(int32_t *)v68 = v70;
            qt_QString_dtor();
            v67 = *v4;
        }
        // 0x12dcf11
        if (v67 != 15) {
            // 0x12dea6d
            return qt_QString_dtor();
        }
        // 0x12dcf24
        if (*v8 != 0) {
            int32_t * v71 = (int32_t *)v68; // 0x12dcf37
            *v71 = (int32_t)"Reset to factory default (AP)[DIAG]";
            v6 = (char *)&g594;
            sub_14812e0((char *)&g594);
            *(int32_t *)(v68 + 4) = 3;
            int32_t v72 = (int32_t)&v6; // 0x12dcf64
            *v71 = v72;
            int32_t v73 = (int32_t)&v1; // 0x12dcf68
            *(int32_t *)(v68 - 4) = v73;
            sub_12ffe9c(&g2208, &g2208, (int32_t)&g2208);
            qt_QVariant();
            qt_QString_dtor();
            *(int32_t *)(v68 - 12) = -1;
            *(int32_t *)(v68 - 16) = (int32_t)"AT+SPDIAG=\"AT+ETSRESET\"\r\n";
            sub_a55e20();
            *(int32_t *)(v68 - 20) = v73;
            int32_t v74 = sub_12f894c((int32_t)&g2208, (int32_t)&g2208); // 0x12dcfac
            *(int32_t *)(v68 - 28) = v74;
            int32_t * v75 = (int32_t *)(v68 - 32); // 0x12dcfb2
            *v75 = v74;
            sub_a56094();
            *v75 = v73;
            v1 = (char *)2;
            sub_167a590();
            *(int32_t *)(v68 - 36) = (int32_t)"ETSRESET::res";
            qt_QString();
            int32_t v76 = v68 - 40; // 0x12dd005
            *(int32_t *)v76 = (int32_t)&v10;
            int32_t v77 = sub_1324ac0(); // 0x12dd011
            int32_t * v78 = (int32_t *)(v68 - 44); // 0x12dd016
            *v78 = v77;
            qt_QString_dtor();
            qt_QVariant();
            *v78 = (int32_t)"%0";
            qt_QString();
            int32_t * v79 = (int32_t *)(v68 - 48); // 0x12dd03a
            *v79 = (int32_t)"OK";
            qt_QString();
            *(int16_t *)v76 = 32;
            *v78 = 0;
            *v79 = (int32_t)&v66;
            *(int32_t *)(v68 - 52) = (int32_t)&v9;
            qt_QString_arg();
            *(int32_t *)(v68 - 60) = v73;
            *(int32_t *)(v68 - 64) = 7;
            *(int32_t *)(v68 - 68) = v72;
            qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
            qt_QString_dtor();
            qt_QString_dtor();
            qt_QString_dtor();
            sub_a56094();
        }
        // 0x12dea6d
        return qt_QString_dtor();
    }
    char * v80; // 0x12dc4b8
    int32_t v81; // 0x12dc4b8
    int32_t v82; // 0x12dc4b8
    char * v83; // bp-376, 0x12dc4b8
    char * v84; // bp-396, 0x12dc4b8
    int32_t v85; // 0x12ddbe2
    int32_t v86; // 0x12ddbe6
    int32_t v87; // 0x12dd596
    int32_t v88; // 0x12dd5a4
    int32_t v89; // 0x12dd5e8
    if (v65 != 15) {
        uint32_t v90 = v65 - 5; // 0x12dd4ed
        if (v90 < 3) {
            int32_t * v91 = (int32_t *)v54;
            if (*(char *)(self + 511) != 0) { // self->flag1FF
                // 0x12dd504
                *v91 = (int32_t)"\n[qPATCH] - VENDOR is not supported for [R/W/E](0)";
                v6 = (char *)&g594;
                sub_14812e0((char *)&g594);
                *(int32_t *)(v54 + 4) = 7;
                *v91 = (int32_t)&v6;
                *(int32_t *)(v54 - 4) = (int32_t)&v1;
                sub_12ffe9c(&g2208, &g2208, (int32_t)&g2208);
                qt_QVariant();
                qt_QString_dtor();
                // 0x12de20b
                sub_12ee01c();
                // 0x12dea6d
                return qt_QString_dtor();
            }
            // 0x12dd559
            *v91 = v65;
            sub_12d6034();
            *(int32_t *)(v54 - 4) = (int32_t)&v66;
            goto lab_0x12de1f3;
        } else {
            char * v92; // bp-292, 0x12dc4b8
            if (v65 != 8) {
                if (v65 < 19) {
                    int32_t * v93 = (int32_t *)v54; // 0x12ddbb5
                    *v93 = (int32_t)"Reset to factory default (MISC)";
                    v6 = (char *)&g594;
                    sub_14812e0((char *)&g594);
                    *(int32_t *)(v54 + 4) = 3;
                    v85 = (int32_t)&v6;
                    *v93 = v85;
                    v86 = (int32_t)&v1;
                    *(int32_t *)(v54 - 4) = v86;
                    sub_12ffe9c(&g2208, &g2208, (int32_t)&g2208);
                    qt_QVariant();
                    qt_QString_dtor();
                    *(int32_t *)(v54 - 16) = (int32_t)"misc";
                    char * v94 = (char *)&g594; // bp-400, 0x12ddc08
                    qt_QString();
                    *(int32_t *)(v54 - 20) = v86;
                    sub_13d4d88();
                    int32_t * v95 = (int32_t *)(v54 - 24); // 0x12ddc26
                    *v95 = (int32_t)&v94;
                    qt_QString_dtor();
                    *v95 = (int32_t)"para";
                    qt_QString();
                    *(int32_t *)(v54 - 28) = v86;
                    int32_t v96 = sub_13d4d88(); // 0x12ddc46
                    int32_t v97 = v54 - 32; // 0x12ddc4b
                    *(int32_t *)v97 = v96;
                    qt_QString_dtor();
                    v84 = (char *)&g594;
                    int32_t v98 = sub_13d4d5c(); // 0x12ddc63
                    if (0x1000000 * v98 >> 24 == sub_13d4d30()) {
                        // 0x12ddbaf
                        v80 = g595;
                        v82 = v97;
                    } else {
                        int32_t v99 = (int32_t)&v66;
                        int32_t v100 = (int32_t)g595;
                        int32_t v101 = v100 >> 31;
                        int32_t v102 = (int32_t)&v11;
                        int32_t v103 = (int32_t)&v92;
                        int32_t v104 = (int32_t)&v12;
                        uint32_t v105 = v98 % 256;
                        __asm_rep_stosd_memset((char *)&v6, 0, 36);
                        *(int32_t *)v97 = 0;
                        qt_QVariant((int32_t)&g2208);
                        v92 = (char *)&g594;
                        *(int32_t *)(v97 - 4) = 0;
                        qt_QVariant((int32_t)v92);
                        *(int32_t *)(v97 - 8) = 0;
                        qt_QVariant((int32_t)&g2208);
                        int32_t * v106 = (int32_t *)(v97 - 12); // 0x12ddd19
                        *v106 = 0;
                        int32_t v107 = qt_QVariant((int32_t)&g594); // 0x12ddd20
                        int32_t * v108 = (int32_t *)(v97 - 16); // 0x12ddd25
                        *v108 = v107;
                        v66 = (char *)*(int32_t *)v105;
                        qt_QString_ref();
                        *v108 = self + 688;
                        sub_13f5414();
                        int32_t v109 = v97 - 20; // 0x12ddd5a
                        int32_t * v110 = (int32_t *)v109; // 0x12ddd5a
                        *v108 = v99;
                        *v106 = v85;
                        *v110 = v86;
                        int32_t v111 = sub_a1a86c(); // 0x12ddd6c
                        sub_13f5658();
                        qt_QString_dtor();
                        int32_t v112 = v109; // 0x12ddd8d
                        int32_t v113; // 0x12dc4b8
                        int32_t v114; // 0x12dc4b8
                        int32_t v115; // bp-380, 0x12dc4b8
                        int32_t v116; // bp-388, 0x12dc4b8
                        int32_t v117; // 0x12dddfe
                        int32_t * v118; // 0x12dde05
                        int32_t v119; // 0x12dde5e
                        int32_t * v120; // 0x12dde65
                        int32_t v121; // 0x12dde1a
                        int32_t v122; // 0x12dde96
                        int32_t v123; // 0x12dde7a
                        int32_t * v124; // 0x12dde40
                        int32_t * v125; // 0x12ddeb2
                        int32_t * v126; // 0x12ddf15
                        int32_t * v127; // 0x12ddf2e
                        int32_t * v128; // 0x12ddf3a
                        int32_t v129; // 0x12ddf64
                        int32_t * v130; // 0x12ddf80
                        int32_t v131; // 0x12ddf83
                        int32_t * v132; // 0x12ddf88
                        int32_t v133; // 0x12de023
                        int32_t * v134; // 0x12de028
                        int32_t v135; // 0x12de086
                        int32_t * v136; // 0x12dc4b8
                        int32_t v137; // 0x12de0c4
                        bool v138; // 0x12dc4b8
                        if ((char)v111 != 0) {
                            // 0x12ddd93
                            *v110 = (int32_t)"boot-recovery";
                            sub_a51f50();
                            *v110 = 0;
                            *(int32_t *)(v97 - 24) = 64 - v100;
                            sub_a525c0();
                            *(int32_t *)(v97 - 28) = v99;
                            *(int32_t *)(v97 - 32) = (int32_t)"P1";
                            qt_QString();
                            *(int32_t *)(v97 - 36) = (int32_t)"Huawei";
                            v117 = sub_1802cb0();
                            v118 = (int32_t *)(v97 - 40);
                            *v118 = (int32_t)&g594;
                            if ((char)v117 == 0) {
                                // 0x12dde55
                                *v118 = (int32_t)"VIVO";
                                v119 = sub_1802cb0();
                                v120 = (int32_t *)(v97 - 44);
                                *v120 = (int32_t)&g594;
                                if ((char)v119 == 0) {
                                    // 0x12dde84
                                    *v120 = (int32_t)"recovery\n--wipe_data";
                                    sub_a51f50();
                                    v122 = v97 - 48;
                                    *(int32_t *)v122 = (int32_t)"P1";
                                    v113 = v122;
                                } else {
                                    // 0x12dde68
                                    *v120 = (int32_t)"recovery\n--format_data";
                                    sub_a51f50();
                                    v123 = v97 - 48;
                                    *(int32_t *)v123 = (int32_t)&g460;
                                    v113 = v123;
                                }
                            } else {
                                // 0x12dde08
                                *v118 = (int32_t)"recovery\n--wipe_data_factory_lowlevel";
                                sub_a51f50();
                                v121 = v97 - 44;
                                *(int32_t *)v121 = (int32_t)"HW";
                                v113 = v121;
                            }
                            // 0x12dde22
                            v114 = v113;
                            qt_?();
                            *(int32_t *)(v114 - 4) = (int32_t)"--reason=android";
                            sub_a51f50();
                            v124 = (int32_t *)(v114 - 8);
                            *v124 = (int32_t)"--locale=en_US";
                            sub_a51f50();
                            v125 = (int32_t *)(v114 - 12);
                            *v125 = (v138 ? -144 : 144) + v85;
                            *v124 = 0;
                            *v125 = *(int32_t *)(self + 408) - v100;
                            sub_a525c0();
                            *(int32_t *)(v114 - 16) = self + 580;
                            v1 = (char *)2;
                            *(int32_t *)(v114 - 20) = v86;
                            sub_167a980();
                            v126 = (int32_t *)(v114 - 24);
                            *v126 = (int32_t)"uPerformTask";
                            qt_QString();
                            v127 = (int32_t *)(v114 - 28);
                            *v127 = (int32_t)"Write boot_to cmd data to (%0)[%1:%2] ";
                            qt_QString();
                            v128 = (int32_t *)(v114 - 32);
                            v83 = (char *)&g594;
                            *v126 = 16;
                            *v128 = v100;
                            *v127 = v101;
                            v129 = qt_QString((int32_t)v83);
                            v130 = (int32_t *)(v114 - 44);
                            *v130 = (int32_t)&v115;
                            v131 = sub_8eb018();
                            v132 = (int32_t *)(v114 - 40);
                            *v132 = v129;
                            *v130 = v102;
                            sub_15720c0();
                            *v130 = (int32_t)&v10;
                            *v132 = v103;
                            sub_15720c0();
                            *v130 = (int32_t)&v9;
                            *v132 = (int32_t)&v116;
                            sub_15720c0();
                            v66 = (char *)&v9;
                            *v128 = 3;
                            *v132 = v131;
                            *(int32_t *)(v114 - 36) = v101;
                            *v127 = v99;
                            *v130 = v104;
                            sub_156ee70();
                            *v130 = v104;
                            v133 = qt_toString();
                            v134 = (int32_t *)(v114 - 48);
                            *v134 = v133;
                            qt_QString_dtor();
                            qt_QString_dtor();
                            qt_QString_dtor();
                            qt_QString_dtor();
                            *(int32_t *)&v66 = (int32_t)(char *)&g594;
                            qt_QString_ref();
                            *v134 = v99;
                            *(int32_t *)(v114 - 52) = v86;
                            v135 = sub_12ecffc((int32_t)&g2208, (int32_t)&g2208);
                            *(int32_t *)(v114 - 56) = v102;
                            v112 = v114 - 60;
                            v136 = (int32_t *)v112;
                            *v136 = v102;
                            sub_1218038();
                            sub_a56094();
                            if ((char)v135 == 0) {
                                // 0x12de0ab
                                *v136 = self + 552;
                                qt_QString_assign();
                                v137 = v114 - 64;
                                *(int32_t *)v137 = (int32_t)&v84;
                                qt_QString_dtor();
                                sub_a56094();
                                sub_1218038();
                                v80 = g595;
                                v82 = v137;
                                goto lab_0x12de115;
                            }
                            // 0x12de0e8
                            qt_QString_dtor();
                            sub_a56094();
                        }
                        int32_t v139 = v112;
                        sub_1218038();
                        int32_t v140 = v105 + 4; // 0x12de109
                        v80 = g595;
                        v82 = v139;
                        while (0x1000000 * v140 >> 24 != sub_13d4d30()) {
                            int32_t v141 = v139;
                            v105 = v140 % 256;
                            __asm_rep_stosd_memset((char *)&v6, 0, 36);
                            *(int32_t *)v141 = 0;
                            qt_QVariant((int32_t)&g2208);
                            v92 = (char *)&g594;
                            *(int32_t *)(v141 - 4) = 0;
                            qt_QVariant((int32_t)v92);
                            *(int32_t *)(v141 - 8) = 0;
                            qt_QVariant((int32_t)&g2208);
                            v106 = (int32_t *)(v141 - 12);
                            *v106 = 0;
                            v107 = qt_QVariant((int32_t)&g594);
                            v108 = (int32_t *)(v141 - 16);
                            *v108 = v107;
                            v66 = (char *)*(int32_t *)v105;
                            qt_QString_ref();
                            *v108 = self + 688;
                            sub_13f5414();
                            v109 = v141 - 20;
                            v110 = (int32_t *)v109;
                            *v108 = v99;
                            *v106 = v85;
                            *v110 = v86;
                            v111 = sub_a1a86c();
                            sub_13f5658();
                            qt_QString_dtor();
                            v112 = v109;
                            if ((char)v111 != 0) {
                                // 0x12ddd93
                                *v110 = (int32_t)"boot-recovery";
                                sub_a51f50();
                                *v110 = 0;
                                *(int32_t *)(v141 - 24) = 64 - v100;
                                sub_a525c0();
                                *(int32_t *)(v141 - 28) = v99;
                                *(int32_t *)(v141 - 32) = (int32_t)"P1";
                                qt_QString();
                                *(int32_t *)(v141 - 36) = (int32_t)"Huawei";
                                v117 = sub_1802cb0();
                                v118 = (int32_t *)(v141 - 40);
                                *v118 = (int32_t)&g594;
                                if ((char)v117 == 0) {
                                    // 0x12dde55
                                    *v118 = (int32_t)"VIVO";
                                    v119 = sub_1802cb0();
                                    v120 = (int32_t *)(v141 - 44);
                                    *v120 = (int32_t)&g594;
                                    if ((char)v119 == 0) {
                                        // 0x12dde84
                                        *v120 = (int32_t)"recovery\n--wipe_data";
                                        sub_a51f50();
                                        v122 = v141 - 48;
                                        *(int32_t *)v122 = (int32_t)"P1";
                                        v113 = v122;
                                    } else {
                                        // 0x12dde68
                                        *v120 = (int32_t)"recovery\n--format_data";
                                        sub_a51f50();
                                        v123 = v141 - 48;
                                        *(int32_t *)v123 = (int32_t)&g460;
                                        v113 = v123;
                                    }
                                } else {
                                    // 0x12dde08
                                    *v118 = (int32_t)"recovery\n--wipe_data_factory_lowlevel";
                                    sub_a51f50();
                                    v121 = v141 - 44;
                                    *(int32_t *)v121 = (int32_t)"HW";
                                    v113 = v121;
                                }
                                // 0x12dde22
                                v114 = v113;
                                qt_?();
                                *(int32_t *)(v114 - 4) = (int32_t)"--reason=android";
                                sub_a51f50();
                                v124 = (int32_t *)(v114 - 8);
                                *v124 = (int32_t)"--locale=en_US";
                                sub_a51f50();
                                v125 = (int32_t *)(v114 - 12);
                                *v125 = (v138 ? -144 : 144) + v85;
                                *v124 = 0;
                                *v125 = *(int32_t *)(self + 408) - v100;
                                sub_a525c0();
                                *(int32_t *)(v114 - 16) = self + 580;
                                v1 = (char *)2;
                                *(int32_t *)(v114 - 20) = v86;
                                sub_167a980();
                                v126 = (int32_t *)(v114 - 24);
                                *v126 = (int32_t)"uPerformTask";
                                qt_QString();
                                v127 = (int32_t *)(v114 - 28);
                                *v127 = (int32_t)"Write boot_to cmd data to (%0)[%1:%2] ";
                                qt_QString();
                                v128 = (int32_t *)(v114 - 32);
                                v83 = (char *)&g594;
                                *v126 = 16;
                                *v128 = v100;
                                *v127 = v101;
                                v129 = qt_QString((int32_t)v83);
                                v130 = (int32_t *)(v114 - 44);
                                *v130 = (int32_t)&v115;
                                v131 = sub_8eb018();
                                v132 = (int32_t *)(v114 - 40);
                                *v132 = v129;
                                *v130 = v102;
                                sub_15720c0();
                                *v130 = (int32_t)&v10;
                                *v132 = v103;
                                sub_15720c0();
                                *v130 = (int32_t)&v9;
                                *v132 = (int32_t)&v116;
                                sub_15720c0();
                                v66 = (char *)&v9;
                                *v128 = 3;
                                *v132 = v131;
                                *(int32_t *)(v114 - 36) = v101;
                                *v127 = v99;
                                *v130 = v104;
                                sub_156ee70();
                                *v130 = v104;
                                v133 = qt_toString();
                                v134 = (int32_t *)(v114 - 48);
                                *v134 = v133;
                                qt_QString_dtor();
                                qt_QString_dtor();
                                qt_QString_dtor();
                                qt_QString_dtor();
                                *(int32_t *)&v66 = (int32_t)(char *)&g594;
                                qt_QString_ref();
                                *v134 = v99;
                                *(int32_t *)(v114 - 52) = v86;
                                v135 = sub_12ecffc((int32_t)&g2208, (int32_t)&g2208);
                                *(int32_t *)(v114 - 56) = v102;
                                v112 = v114 - 60;
                                v136 = (int32_t *)v112;
                                *v136 = v102;
                                sub_1218038();
                                sub_a56094();
                                if ((char)v135 == 0) {
                                    // 0x12de0ab
                                    *v136 = self + 552;
                                    qt_QString_assign();
                                    v137 = v114 - 64;
                                    *(int32_t *)v137 = (int32_t)&v84;
                                    qt_QString_dtor();
                                    sub_a56094();
                                    sub_1218038();
                                    v80 = g595;
                                    v82 = v137;
                                    goto lab_0x12de115;
                                }
                                // 0x12de0e8
                                qt_QString_dtor();
                                sub_a56094();
                            }
                            // 0x12de0fe
                            v139 = v112;
                            sub_1218038();
                            v140 = v105 + 4;
                            v80 = g595;
                            v82 = v139;
                        }
                    }
                    goto lab_0x12de115;
                } else {
                    goto lab_0x12de1f3;
                }
            } else {
                int32_t * v142 = (int32_t *)v54; // 0x12dd582
                *v142 = (int32_t)"tiger t7300";
                qt_QString();
                v87 = (int32_t)&v1;
                *v142 = 0;
                *(int32_t *)(v54 - 4) = v87;
                v88 = qt_contains();
                int32_t * v143 = (int32_t *)(v54 - 8); // 0x12dd5a9
                *v143 = v90;
                int32_t * v144 = (int32_t *)(v54 - 12); // 0x12dd5aa
                *v144 = v90;
                qt_QString_dtor();
                *v144 = (int32_t)"Removing frp lock";
                v6 = (char *)&g594;
                sub_14812e0((char *)&g594);
                *v143 = 3;
                v89 = (int32_t)&v6;
                *v144 = v89;
                *(int32_t *)(v54 - 16) = v87;
                sub_12ffe9c(&g2208, &g2208, (int32_t)&g2208);
                qt_QVariant();
                qt_QString_dtor();
                *(int32_t *)(v54 - 28) = (int32_t)&g459;
                v83 = (char *)&g594;
                qt_QString();
                *(int32_t *)(v54 - 32) = v87;
                sub_13d4d88();
                int32_t * v145 = (int32_t *)(v54 - 36); // 0x12dd62c
                *v145 = v55;
                qt_QString_dtor();
                *v145 = (int32_t)"persist";
                qt_QString();
                *(int32_t *)(v54 - 40) = v87;
                sub_13d4d88();
                int32_t * v146 = (int32_t *)(v54 - 44); // 0x12dd651
                int32_t v147 = (int32_t)&v83; // 0x12dd651
                *v146 = v147;
                qt_QString_dtor();
                *v146 = (int32_t)"persistent";
                qt_QString();
                *(int32_t *)(v54 - 48) = v87;
                int32_t v148 = sub_13d4d88(); // 0x12dd671
                int32_t v149 = v54 - 52; // 0x12dd676
                int32_t * v150 = (int32_t *)v149; // 0x12dd676
                *v150 = v148;
                qt_QString_dtor();
                int32_t v151 = v149; // 0x12dd685
                if ((char)v88 != 1) {
                    // 0x12dd68b
                    *v150 = (int32_t)"usrdata";
                    qt_QString();
                    *(int32_t *)(v54 - 56) = v87;
                    int32_t v152 = sub_13d4d88(); // 0x12dd6a3
                    int32_t * v153 = (int32_t *)(v54 - 60); // 0x12dd6a8
                    *v153 = v152;
                    qt_QString_dtor();
                    *v153 = (int32_t)"userdata";
                    qt_QString();
                    *(int32_t *)(v54 - 64) = v87;
                    int32_t v154 = sub_13d4d88(); // 0x12dd6c8
                    int32_t * v155 = (int32_t *)(v54 - 68); // 0x12dd6cd
                    *v155 = v154;
                    qt_QString_dtor();
                    *v155 = (int32_t)"metadata";
                    qt_QString();
                    *(int32_t *)(v54 - 72) = v87;
                    sub_13d4d88();
                    int32_t * v156 = (int32_t *)(v54 - 76); // 0x12dd6f2
                    *v156 = v55;
                    qt_QString_dtor();
                    *v156 = (int32_t)"md_udc";
                    qt_QString();
                    *(int32_t *)(v54 - 80) = v87;
                    sub_13d4d88();
                    int32_t * v157 = (int32_t *)(v54 - 84); // 0x12dd717
                    *v157 = v147;
                    qt_QString_dtor();
                    *v157 = (int32_t)"cache";
                    qt_QString();
                    *(int32_t *)(v54 - 88) = v87;
                    int32_t v158 = sub_13d4d88(); // 0x12dd737
                    v151 = v54 - 92;
                    *(int32_t *)v151 = v158;
                    qt_QString_dtor();
                }
                // 0x12dd744
                v11 = (char *)&g594;
                int32_t v159 = sub_13d4d5c(); // 0x12dd754
                v81 = v151;
                if (v159 != sub_13d4d30()) {
                    int32_t v160 = (int32_t)&v66;
                    int32_t v161 = (int32_t)&v92;
                    int32_t v162 = v159; // 0x12dd9d6
                    __asm_rep_stosd_memset((char *)&v6, 0, 36);
                    *(int32_t *)v151 = 0;
                    qt_QVariant((int32_t)&g2208);
                    v92 = (char *)&g594;
                    *(int32_t *)(v151 - 4) = 0;
                    qt_QVariant((int32_t)v92);
                    *(int32_t *)(v151 - 8) = 0;
                    qt_QVariant((int32_t)&g2208);
                    int32_t * v163 = (int32_t *)(v151 - 12); // 0x12dd802
                    *v163 = 0;
                    int32_t v164 = qt_QVariant((int32_t)&g594); // 0x12dd809
                    int32_t * v165 = (int32_t *)(v151 - 16); // 0x12dd80e
                    *v165 = v164;
                    v66 = (char *)*(int32_t *)v162;
                    qt_QString_ref();
                    *v165 = self + 688;
                    sub_13f5414();
                    int32_t v166 = v151 - 20; // 0x12dd837
                    int32_t * v167 = (int32_t *)v166; // 0x12dd837
                    *v163 = v89;
                    *v167 = v87;
                    *v165 = v160;
                    int32_t v168 = sub_a1a86c(); // 0x12dd84f
                    sub_13f5658();
                    qt_QString_dtor();
                    int32_t v169 = v166; // 0x12dd874
                    int32_t v170; // bp-252, 0x12dc4b8
                    int32_t v171; // bp-268, 0x12dc4b8
                    int32_t v172; // 0x12dd8ee
                    int32_t * v173; // 0x12dd8f6
                    int32_t v174; // 0x12dd8f9
                    int32_t * v175; // 0x12dd905
                    int32_t * v176; // 0x12dd915
                    int32_t v177; // 0x12dd98c
                    int32_t * v178; // 0x12dc4b8
                    int32_t v179; // 0x12dd9bd
                    int32_t v180; // 0x12dd9c8
                    if ((char)v168 != 0) {
                        // 0x12dd87a
                        *v167 = v87;
                        v1 = (char *)2;
                        sub_167a590();
                        *(int32_t *)(v151 - 24) = (int32_t)"SERVICE_FLOCK_FRP";
                        qt_QString();
                        *(int32_t *)(v151 - 28) = v161;
                        qt_toString();
                        *(int32_t *)(v151 - 32) = 0;
                        v172 = sub_181ded0();
                        v173 = (int32_t *)(v151 - 36);
                        *v173 = v172;
                        v174 = qt_QVariant_dtor();
                        v175 = (int32_t *)(v151 - 40);
                        *v175 = v174;
                        qt_QString_append();
                        v176 = (int32_t *)(v151 - 44);
                        *v173 = (int32_t)&v171;
                        *v175 = (int32_t)&v9;
                        *v176 = v160;
                        sub_1991340();
                        *v175 = v160;
                        *v173 = (int32_t)&v170;
                        *v176 = (int32_t)&v12;
                        sub_1991340();
                        qt_QString_dtor();
                        qt_QString_dtor();
                        qt_QString_dtor();
                        qt_QString_dtor();
                        *v176 = v89;
                        *(int32_t *)(v151 - 48) = v87;
                        v177 = sub_12ecf0c((int32_t)&g2208);
                        v169 = v151 - 52;
                        v178 = (int32_t *)v169;
                        *v178 = v161;
                        sub_1218038();
                        if ((char)v177 == 0) {
                            // 0x12dd9a9
                            *v178 = self + 552;
                            v179 = qt_QString_assign();
                            v180 = v151 - 56;
                            *(int32_t *)v180 = v179;
                            sub_1218038();
                            v81 = v180;
                            goto lab_0x12dd9e3;
                        }
                    }
                    int32_t v181 = v169;
                    v162 += 4;
                    sub_1218038();
                    v81 = v181;
                    while (v162 != sub_13d4d30()) {
                        int32_t v182 = v181;
                        __asm_rep_stosd_memset((char *)&v6, 0, 36);
                        *(int32_t *)v182 = 0;
                        qt_QVariant((int32_t)&g2208);
                        v92 = (char *)&g594;
                        *(int32_t *)(v182 - 4) = 0;
                        qt_QVariant((int32_t)v92);
                        *(int32_t *)(v182 - 8) = 0;
                        qt_QVariant((int32_t)&g2208);
                        v163 = (int32_t *)(v182 - 12);
                        *v163 = 0;
                        v164 = qt_QVariant((int32_t)&g594);
                        v165 = (int32_t *)(v182 - 16);
                        *v165 = v164;
                        v66 = (char *)*(int32_t *)v162;
                        qt_QString_ref();
                        *v165 = self + 688;
                        sub_13f5414();
                        v166 = v182 - 20;
                        v167 = (int32_t *)v166;
                        *v163 = v89;
                        *v167 = v87;
                        *v165 = v160;
                        v168 = sub_a1a86c();
                        sub_13f5658();
                        qt_QString_dtor();
                        v169 = v166;
                        if ((char)v168 != 0) {
                            // 0x12dd87a
                            *v167 = v87;
                            v1 = (char *)2;
                            sub_167a590();
                            *(int32_t *)(v182 - 24) = (int32_t)"SERVICE_FLOCK_FRP";
                            qt_QString();
                            *(int32_t *)(v182 - 28) = v161;
                            qt_toString();
                            *(int32_t *)(v182 - 32) = 0;
                            v172 = sub_181ded0();
                            v173 = (int32_t *)(v182 - 36);
                            *v173 = v172;
                            v174 = qt_QVariant_dtor();
                            v175 = (int32_t *)(v182 - 40);
                            *v175 = v174;
                            qt_QString_append();
                            v176 = (int32_t *)(v182 - 44);
                            *v173 = (int32_t)&v171;
                            *v175 = (int32_t)&v9;
                            *v176 = v160;
                            sub_1991340();
                            *v175 = v160;
                            *v173 = (int32_t)&v170;
                            *v176 = (int32_t)&v12;
                            sub_1991340();
                            qt_QString_dtor();
                            qt_QString_dtor();
                            qt_QString_dtor();
                            qt_QString_dtor();
                            *v176 = v89;
                            *(int32_t *)(v182 - 48) = v87;
                            v177 = sub_12ecf0c((int32_t)&g2208);
                            v169 = v182 - 52;
                            v178 = (int32_t *)v169;
                            *v178 = v161;
                            sub_1218038();
                            if ((char)v177 == 0) {
                                // 0x12dd9a9
                                *v178 = self + 552;
                                v179 = qt_QString_assign();
                                v180 = v182 - 56;
                                *(int32_t *)v180 = v179;
                                sub_1218038();
                                v81 = v180;
                                goto lab_0x12dd9e3;
                            }
                        }
                        // 0x12dd9d0
                        v181 = v169;
                        v162 += 4;
                        sub_1218038();
                        v81 = v181;
                    }
                }
                goto lab_0x12dd9e3;
            }
        }
    } else {
        int32_t * v183 = (int32_t *)v54; // 0x12dd0bc
        *v183 = (int32_t)"Reset to factory default";
        v6 = (char *)&g594;
        sub_14812e0((char *)&g594);
        *(int32_t *)(v54 + 4) = 3;
        int32_t v184 = (int32_t)&v6; // 0x12dd0e9
        *v183 = v184;
        int32_t v185 = (int32_t)&v1; // 0x12dd0ed
        *(int32_t *)(v54 - 4) = v185;
        sub_12ffe9c(&g2208, &g2208, (int32_t)&g2208);
        qt_QVariant();
        qt_QString_dtor();
        *(int32_t *)(v54 - 16) = (int32_t)"usrdata";
        v11 = (char *)&g594;
        qt_QString();
        *(int32_t *)(v54 - 20) = v185;
        sub_13d4d88();
        int32_t * v186 = (int32_t *)(v54 - 24); // 0x12dd12d
        *v186 = v184;
        qt_QString_dtor();
        *v186 = (int32_t)"userdata";
        qt_QString();
        *(int32_t *)(v54 - 28) = v185;
        sub_13d4d88();
        qt_QString_dtor();
        *(int32_t *)(v54 - 32) = (int32_t)"cache";
        qt_QString();
        *(int32_t *)(v54 - 36) = v185;
        int32_t v187 = sub_13d4d88(); // 0x12dd172
        int32_t v188 = v54 - 40; // 0x12dd177
        *(int32_t *)v188 = v187;
        qt_QString_dtor();
        int32_t v189 = sub_13d4d5c(); // 0x12dd185
        if (0x1000000 * v189 >> 24 != sub_13d4d30()) {
            int32_t v190 = (int32_t)&v66;
            char * v191; // bp-148, 0x12dc4b8
            int32_t v192 = (int32_t)&v191;
            int32_t v193 = (int32_t)&v9;
            int32_t v194 = &v10;
            uint32_t v195 = v189 % 256;
            __asm_rep_stosd_memset((char *)&v1, 0, 36);
            *(int32_t *)v188 = 0;
            qt_QVariant((int32_t)&g2208);
            v191 = (char *)&g594;
            *(int32_t *)(v188 - 4) = 0;
            qt_QVariant((int32_t)v191);
            *(int32_t *)(v188 - 8) = 0;
            qt_QVariant((int32_t)&g2208);
            int32_t * v196 = (int32_t *)(v188 - 12); // 0x12dd229
            *v196 = 0;
            int32_t v197 = qt_QVariant((int32_t)&g594); // 0x12dd230
            int32_t * v198 = (int32_t *)(v188 - 16); // 0x12dd235
            *v198 = v197;
            v66 = (char *)*(int32_t *)v195;
            qt_QString_ref();
            *v198 = self + 688;
            sub_13f5414();
            int32_t v199 = v188 - 20; // 0x12dd26a
            int32_t * v200 = (int32_t *)v199; // 0x12dd26a
            *v196 = v185;
            *v198 = v190;
            *v200 = v184;
            int32_t v201 = sub_a1a86c(); // 0x12dd276
            sub_13f5658();
            qt_QString_dtor();
            int32_t v202 = v199; // 0x12dd297
            int32_t v203; // bp-108, 0x12dc4b8
            int32_t v204; // bp-124, 0x12dc4b8
            int32_t v205; // 0x12dd311
            int32_t v206; // 0x12dd316
            int32_t * v207; // 0x12dd319
            int32_t v208; // 0x12dd31c
            int32_t * v209; // 0x12dd328
            int32_t * v210; // 0x12dd333
            int32_t * v211; // 0x12dd3e6
            int32_t * v212; // 0x12dd44f
            int32_t * v213; // 0x12dd45e
            if ((char)v201 != 0) {
                // 0x12dd29d
                *v200 = v184;
                v6 = (char *)2;
                sub_167a590();
                *(int32_t *)(v188 - 24) = (int32_t)"SERVICE_RESET_FORMAT_DATA";
                qt_QString();
                *(int32_t *)(v188 - 28) = v192;
                qt_toString();
                *(int32_t *)(v188 - 32) = 0;
                v205 = sub_181ded0();
                v206 = v188 - 36;
                v207 = (int32_t *)v206;
                *v207 = v205;
                v208 = qt_QVariant_dtor();
                v209 = (int32_t *)(v188 - 40);
                *v209 = v208;
                qt_QString_append();
                v210 = (int32_t *)(v188 - 44);
                *v207 = (int32_t)&v204;
                *v210 = v190;
                *v209 = v193;
                sub_1991340();
                *v207 = (int32_t)&v203;
                *v209 = v190;
                *v210 = (int32_t)&v83;
                sub_1991340();
                qt_QString_dtor();
                qt_QString_dtor();
                qt_QString_dtor();
                qt_QString_dtor();
                *v210 = (int32_t)"Formatting filesystem (%0)... ";
                v66 = (char *)&g594;
                qt_QString();
                *(int16_t *)v206 = 32;
                *v209 = 0;
                *v210 = v192;
                *(int32_t *)(v188 - 48) = v194;
                qt_QString_arg();
                v211 = (int32_t *)(v188 - 64);
                *v211 = v193;
                qt_QVariant((int32_t)&g2208);
                *(int32_t *)(v188 - 60) = 4;
                *(int32_t *)(v188 - 68) = v184;
                *v211 = v190;
                sub_12ffe9c(&g2208, &g2208, (int32_t)&g2208);
                qt_QVariant();
                qt_QString_dtor();
                qt_QString_dtor();
                qt_QString_dtor();
                qt_QVariant();
                v212 = (int32_t *)(v188 - 80);
                *v212 = (int32_t)"%0";
                qt_QString();
                v213 = (int32_t *)(v188 - 84);
                *v213 = (int32_t)"OK";
                qt_QString();
                *(int16_t *)(v188 - 76) = 32;
                *v212 = 0;
                *v213 = v193;
                *(int32_t *)(v188 - 88) = v194;
                qt_QString_arg();
                *(int32_t *)(v188 - 96) = v184;
                *(int32_t *)(v188 - 100) = 7;
                *(int32_t *)(v188 - 104) = v190;
                qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                qt_QString_dtor();
                qt_QString_dtor();
                qt_QString_dtor();
                v202 = v188 - 116;
            }
            // 0x12dd4cb
            sub_1218038();
            int32_t v214 = v195 + 4; // 0x12dd4d6
            int32_t v215 = v202; // 0x12dd1a1
            while (0x1000000 * v214 >> 24 != sub_13d4d30()) {
                int32_t v216 = v215;
                v195 = v214 % 256;
                __asm_rep_stosd_memset((char *)&v1, 0, 36);
                *(int32_t *)v216 = 0;
                qt_QVariant((int32_t)&g2208);
                v191 = (char *)&g594;
                *(int32_t *)(v216 - 4) = 0;
                qt_QVariant((int32_t)v191);
                *(int32_t *)(v216 - 8) = 0;
                qt_QVariant((int32_t)&g2208);
                v196 = (int32_t *)(v216 - 12);
                *v196 = 0;
                v197 = qt_QVariant((int32_t)&g594);
                v198 = (int32_t *)(v216 - 16);
                *v198 = v197;
                v66 = (char *)*(int32_t *)v195;
                qt_QString_ref();
                *v198 = self + 688;
                sub_13f5414();
                v199 = v216 - 20;
                v200 = (int32_t *)v199;
                *v196 = v185;
                *v198 = v190;
                *v200 = v184;
                v201 = sub_a1a86c();
                sub_13f5658();
                qt_QString_dtor();
                v202 = v199;
                if ((char)v201 != 0) {
                    // 0x12dd29d
                    *v200 = v184;
                    v6 = (char *)2;
                    sub_167a590();
                    *(int32_t *)(v216 - 24) = (int32_t)"SERVICE_RESET_FORMAT_DATA";
                    qt_QString();
                    *(int32_t *)(v216 - 28) = v192;
                    qt_toString();
                    *(int32_t *)(v216 - 32) = 0;
                    v205 = sub_181ded0();
                    v206 = v216 - 36;
                    v207 = (int32_t *)v206;
                    *v207 = v205;
                    v208 = qt_QVariant_dtor();
                    v209 = (int32_t *)(v216 - 40);
                    *v209 = v208;
                    qt_QString_append();
                    v210 = (int32_t *)(v216 - 44);
                    *v207 = (int32_t)&v204;
                    *v210 = v190;
                    *v209 = v193;
                    sub_1991340();
                    *v207 = (int32_t)&v203;
                    *v209 = v190;
                    *v210 = (int32_t)&v83;
                    sub_1991340();
                    qt_QString_dtor();
                    qt_QString_dtor();
                    qt_QString_dtor();
                    qt_QString_dtor();
                    *v210 = (int32_t)"Formatting filesystem (%0)... ";
                    v66 = (char *)&g594;
                    qt_QString();
                    *(int16_t *)v206 = 32;
                    *v209 = 0;
                    *v210 = v192;
                    *(int32_t *)(v216 - 48) = v194;
                    qt_QString_arg();
                    v211 = (int32_t *)(v216 - 64);
                    *v211 = v193;
                    qt_QVariant((int32_t)&g2208);
                    *(int32_t *)(v216 - 60) = 4;
                    *(int32_t *)(v216 - 68) = v184;
                    *v211 = v190;
                    sub_12ffe9c(&g2208, &g2208, (int32_t)&g2208);
                    qt_QVariant();
                    qt_QString_dtor();
                    qt_QString_dtor();
                    qt_QString_dtor();
                    qt_QVariant();
                    v212 = (int32_t *)(v216 - 80);
                    *v212 = (int32_t)"%0";
                    qt_QString();
                    v213 = (int32_t *)(v216 - 84);
                    *v213 = (int32_t)"OK";
                    qt_QString();
                    *(int16_t *)(v216 - 76) = 32;
                    *v212 = 0;
                    *v213 = v193;
                    *(int32_t *)(v216 - 88) = v194;
                    qt_QString_arg();
                    *(int32_t *)(v216 - 96) = v184;
                    *(int32_t *)(v216 - 100) = 7;
                    *(int32_t *)(v216 - 104) = v190;
                    qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                    qt_QString_dtor();
                    qt_QString_dtor();
                    qt_QString_dtor();
                    v202 = v216 - 116;
                }
                // 0x12dd4cb
                sub_1218038();
                v214 = v195 + 4;
                v215 = v202;
            }
        }
        // 0x12de1ee
        sub_13d5650();
        goto lab_0x12de1f3;
    }
  lab_0x12de1f3:
    // 0x12de1f3
    if (*(char *)(self + 213) == 0) {
        // 0x12de202
        if (*v4 != 4) {
            // 0x12dea6d
            return qt_QString_dtor();
        }
    }
    // 0x12de20b
    sub_12ee01c();
    // 0x12dea6d
    return qt_QString_dtor();
  lab_0x12dd9e3:
    // 0x12dd9e3
    qt_QVariant();
    if (g595 == NULL) {
        int32_t * v217 = (int32_t *)v81; // 0x12dda29
        *v217 = (int32_t)"%0";
        qt_QString();
        int32_t * v218 = (int32_t *)(v81 - 4); // 0x12dda3c
        *v218 = (int32_t)"OK";
        qt_QString();
        *(int16_t *)(v81 + 4) = 32;
        *v217 = 0;
        int32_t v219 = (int32_t)&v66; // 0x12dda6a
        *v218 = v219;
        int32_t v220 = (int32_t)&v9; // 0x12dda6e
        *(int32_t *)(v81 - 8) = v220;
        qt_QString_arg();
        *(int32_t *)(v81 - 16) = v87;
        *(int32_t *)(v81 - 20) = 7;
        *(int32_t *)(v81 - 24) = v89;
        qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
        qt_QString_dtor();
        qt_QString_dtor();
        qt_QString_dtor();
        if ((char)v88 != 1) {
            int32_t * v221 = (int32_t *)(v81 - 36); // 0x12ddabc
            *v221 = (int32_t)"Reset to factory default[format]";
            v6 = (char *)&g594;
            sub_14812e0((char *)&g594);
            *(int32_t *)(v81 - 32) = 3;
            *v221 = v89;
            *(int32_t *)(v81 - 40) = v87;
            sub_12ffe9c(&g2208, &g2208, (int32_t)&g2208);
            qt_QVariant();
            qt_QString_dtor();
            qt_QVariant();
            int32_t * v222 = (int32_t *)(v81 - 52); // 0x12ddb0f
            *v222 = (int32_t)"%0";
            qt_QString();
            int32_t * v223 = (int32_t *)(v81 - 56); // 0x12ddb22
            *v223 = (int32_t)"OK";
            qt_QString();
            *(int16_t *)(v81 - 48) = 32;
            *v222 = 0;
            *v223 = v219;
            *(int32_t *)(v81 - 60) = v220;
            qt_QString_arg();
            *(int32_t *)(v81 - 68) = v87;
            *(int32_t *)(v81 - 72) = 7;
            *(int32_t *)(v81 - 76) = v89;
            qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
            qt_QString_dtor();
            qt_QString_dtor();
            qt_QString_dtor();
        }
    } else {
        // 0x12dd9f7
        *(int32_t *)(v81 + 8) = v87;
        *(int32_t *)(v81 + 4) = 11;
        *(int32_t *)v81 = (int32_t)&v11;
        qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
    }
    // 0x12ddb8d
    qt_QString_dtor();
    // 0x12de1ee
    sub_13d5650();
    goto lab_0x12de1f3;
  lab_0x12de115:
    // 0x12de115
    qt_QVariant();
    if (v80 == NULL) {
        int32_t * v224 = (int32_t *)v82; // 0x12de15b
        *v224 = (int32_t)"%0";
        qt_QString();
        int32_t * v225 = (int32_t *)(v82 - 4); // 0x12de170
        *v225 = (int32_t)"OK";
        qt_QString();
        *(int16_t *)(v82 + 4) = 32;
        *v224 = 0;
        *v225 = (int32_t)&v66;
        *(int32_t *)(v82 - 8) = (int32_t)&v9;
        qt_QString_arg();
        *(int32_t *)(v82 - 16) = v86;
        *(int32_t *)(v82 - 20) = 7;
        *(int32_t *)(v82 - 24) = v85;
        qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
        qt_QString_dtor();
        qt_QString_dtor();
        qt_QString_dtor();
    } else {
        // 0x12de129
        *(int32_t *)(v82 + 8) = v86;
        *(int32_t *)(v82 + 4) = 11;
        *(int32_t *)v82 = (int32_t)&v84;
        qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
    }
    // 0x12de1dd
    qt_QString_dtor();
    // 0x12de1ee
    sub_13d5650();
    goto lab_0x12de1f3;
}
