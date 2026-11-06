/*
 * qualcomm_qPerformTask
 * Entry VA: 0x123f904
 * Cleaned pseudocode from RetDec v5.0 (best-effort names/comments).
 *
 * Known fields (offsets from the object base):
 *   self +0x10  : task type
 *   self +0x167 : read-forbidden flag
 *   self +0x170 : context/task data
 *   self +0x189 : connected flag
 *   self +0x1F4 : extra info string
 *
 * Key strings observed:
 *   "emmc"
 *   "Reset to factory default[format-data]"
 *   "misc"
 *   "boot-recovery"
 *   "Huawei"
 *   "--locale=zh-CN"
 *   "Reset to factory default (P2)"
 *   "usrdata"
 *   "userdata"
 *   "cache"
 *   "SERVICE_RESET_BUILD_DATA"
 *   "Building ext4 filesystem (%0)... "
 *   "Reset to factory default"
 *   "SERVICE_RESET_FORMAT_DATA"
 *   "RESET efs data"
 *   "modemst1"
 *   "modemst2"
 *   "SERVICE_FLOCK_FRP"
 *
 * `self` is the original object pointer (this).
 * Calls named `sub_<addr>` could not be resolved to a known method.
 */


// Address range: 0x123f904 - 0x1241a4e
int32_t Qualcomm_qPerformTask(void) {
    int32_t v1 = 2; // bp-172, 0x123f925
    sub_167a590();
    qt_QString();
    qt_QString_append();
    qt_qDebug();
    qt_intToVariant();
    qt_QString_dtor();
    qt_QString_dtor();
    qt_QString_dtor();
    int32_t self; // 0x123f904
    int32_t * v3 = (int32_t *)(self + 16); // 0x123f9ef [self->task_type]
    int32_t * v4; // 0x123f904
    int32_t v5; // 0x123f904
    int32_t v6; // 0x123f904
    int32_t v7; // 0x123f904
    int32_t v8; // 0x123f904
    int32_t v9; // 0x123f904
    int32_t v10; // 0x123f904
    int32_t v11; // 0x123f904
    int32_t v12; // 0x123f904
    char * v13; // bp-316, 0x123f904
    int32_t v14; // bp-620, 0x123f904
    int32_t result3; // 0x123f904
    int32_t v15; // 0x123f904
    char * v16; // 0x1240030
    int32_t * v17; // 0x1240034
    int32_t v18; // 0x124003b
    if (*v3 != 22) {
        // 0x123fa0b
        if ((char)Qualcomm_connect() == 0) {
            // 0x123fa20
            *(int32_t *)(self + 12) = 1; // self->state
            // 0x1241a46
            int32_t result; // 0x123f904
            return result;
        }
        // 0x123fa2c
        *(char *)(self + 393) = 1; // self->connected
        v15 = &v1;
        v14 = v15;
        v1 = 2;
        sub_167a590();
        qt_QString();
        char * v19 = (char *)qt_intToVariant(); // bp-632, 0x123fa96
        qt_QString_dtor();
        int32_t result2 = *v3; // 0x123faa4
        switch (result2) {
            case 3: {
                // 0x1241a46
                return sub_125767c();
            }
            case 4: {
            }
            case 1: {
                // 0x1241a46
                return result2;
            }
        }
        int32_t v20 = (int32_t)&v19; // 0x123fa96
        unsigned char v21 = *(char *)(self + 359); // 0x123face [self->read_forbidden]
        if (result2 < 8) {
            if (v21 != 0) {
                // 0x123fada
                v19 = "\n[qPATCH] - VENDOR is not supported for [R/W/E](0)";
                v13 = (char *)&g594;
                qt_QString();
                v19 = (char *)&v13;
                sub_12579ec(v15, (int32_t)&v13, 7);
                qt_QString_dtor();
                qt_QString_dtor();
                *(int32_t *)(self + 12) = 1; // self->state
                // 0x1241a46
                return sub_125767c();
            }
            // 0x123fb32
            v19 = (char *)result2;
            v5 = v15;
            v8 = v20;
            result3 = sub_123b988(result2);
            goto lab_0x123fb40;
        } else {
            int32_t v22 = self & -256 | (int32_t)v21; // 0x123fb48
            v11 = v20;
            char * v23; // bp-148, 0x123f904
            char * v24; // bp-292, 0x123f904
            char * v25; // bp-460, 0x123f904
            char * v26; // bp-476, 0x123f904
            if (v21 != 0) {
                // 0x123fb4e
                v19 = "emmc";
                if ((char)sub_1802cb0() != 0) {
                    // 0x123fb6b
                    v13 = (char *)&g594;
                    qt_QString();
                    v19 = (char *)7;
                    sub_12579ec(v15, (int32_t)&v13, 7);
                    qt_QString_dtor();
                    qt_QString_dtor();
                    // 0x1241a46
                    return sub_125767c();
                }
                // 0x123fbbf
                __asm_rep_stosd_memset((char *)&v25, 0, 36);
                qt_QVariant(0);
                qt_QVariant(0);
                qt_QVariant(0);
                qt_QVariant(0);
                qt_QVariant(0);
                sub_1925f78();
                qt_QVariant();
                qt_?();
                int32_t * v27 = (int32_t *)(self + 256); // 0x123fcae
                v1 = 0x2188 * *v27;
                sub_1481080(&v1);
                uint32_t v28 = *v27; // 0x123fcd5
                sub_1481e40(4 * v28, 4 * v28 / 0x80000000 | v28 / 0x40000000);
                sub_1925f78();
                qt_QVariant();
                sub_13f44a4();
                __asm_rep_stosd_memset((char *)&v13, 0, 36);
                qt_QVariant(0);
                v24 = (char *)&g594;
                qt_QVariant(0);
                qt_QVariant(0);
                qt_QVariant(0);
                qt_QVariant(0);
                sub_1925f78();
                qt_QVariant();
                qt_?();
                v1 = 0x2008 * *v27;
                sub_1481080(&v1);
                uint32_t v29 = *v27; // 0x123fe4a
                int32_t v30 = 4 * v29 / 0x80000000 | v29 / 0x40000000; // 0x123fe57
                sub_1481e40(4 * v29, v30);
                sub_1925f78();
                qt_QVariant();
                sub_13f44a4();
                int32_t v31 = sub_1802cb0(); // 0x123fead
                int32_t v32 = v30; // bp-720, 0x123feb4
                int32_t v33 = v30; // 0x123feb5
                int32_t * v34 = &v32; // 0x123feb5
                if ((char)v31 != 0) {
                    // 0x123febb
                    __asm_rep_stosd_memset((char *)&v1, 0, 36);
                    v32 = 0;
                    qt_QVariant(0);
                    v23 = (char *)&g594;
                    qt_QVariant(0);
                    qt_QVariant(0);
                    qt_QVariant(0);
                    qt_QVariant(0);
                    sub_1925f78();
                    qt_QVariant();
                    qt_?();
                    v26 = (char *)(0x25dc18 * *v27);
                    sub_1481080((int32_t *)&v26);
                    uint32_t v35 = *v27; // 0x123ffbc
                    v33 = 0x100000 * v35 / 0x80000000 | v35 / 0x1000;
                    sub_1481e40(0x100000 * v35, v33);
                    sub_1925f78();
                    qt_QVariant();
                    int32_t v36 = sub_13f44a4(); // bp-760, 0x124000c
                    sub_1217fd0();
                    v34 = &v36;
                }
                // 0x1240014
                v22 = v33;
                sub_1217fd0();
                sub_1217fd0();
                v11 = (int32_t)v34;
            }
            // 0x124002a
            v16 = (char *)(self + 8);
            *v16 = 0;
            v17 = (int32_t *)(self + 12); // self->state
            *v17 = 3;
            qt_?();
            int32_t v37 = *v3; // 0x1240053
            if (v37 != 82) {
                if (v37 != 83) {
                    if (v37 != 8) {
                        if (v37 != 72) {
                            if (v37 != 74) {
                                if (v37 != 73) {
                                    // 0x1240134
                                    v18 = self + 400;
                                    int32_t v38 = (int32_t)&v13; // 0x1240137
                                    int32_t v39; // bp-108, 0x123f904
                                    int32_t v40; // bp-124, 0x123f904
                                    int32_t v41; // bp-492, 0x123f904
                                    char * v42; // bp-524, 0x123f904
                                    if (v37 != 19) {
                                        bool v43; // 0x123f904
                                        if (v37 != 15) {
                                            if (v37 != 14) {
                                                if (v37 != 18) {
                                                    // 0x1240e33
                                                    v10 = v11;
                                                    if (v37 == 17) {
                                                        int32_t * v44 = (int32_t *)v11; // 0x1240e3c
                                                        *v44 = (int32_t)"Reset to factory default[format-data]";
                                                        v13 = (char *)&g594;
                                                        qt_QString();
                                                        *(int32_t *)(v11 + 4) = 3;
                                                        *v44 = v38;
                                                        *(int32_t *)(v11 - 4) = v15;
                                                        sub_12579ec((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                                                        qt_QString_dtor();
                                                        qt_QString_dtor();
                                                        __asm_rep_stosd_memset((char *)&v1, 0, 36);
                                                        *(int32_t *)(v11 - 16) = 0;
                                                        qt_QVariant((int32_t)&g2208);
                                                        v23 = (char *)&g594;
                                                        *(int32_t *)(v11 - 20) = 0;
                                                        qt_QVariant((int32_t)v23);
                                                        *(int32_t *)(v11 - 24) = 0;
                                                        qt_QVariant((int32_t)&g2208);
                                                        *(int32_t *)(v11 - 28) = 0;
                                                        qt_QVariant((int32_t)&g594);
                                                        int32_t * v45 = (int32_t *)(v11 - 32); // 0x1240f13
                                                        *v45 = (int32_t)"misc";
                                                        qt_QString();
                                                        int32_t * v46 = (int32_t *)(v11 - 36); // 0x1240f1f
                                                        *v46 = self + 536;
                                                        sub_13f5350();
                                                        int32_t v47 = v11 - 40; // 0x1240f39
                                                        int32_t * v48 = (int32_t *)v47; // 0x1240f39
                                                        *v45 = v15;
                                                        *v46 = v38;
                                                        int32_t v49 = (int32_t)&v25; // 0x1240f48
                                                        *v48 = v49;
                                                        int32_t v50 = sub_a1a86c(); // 0x1240f4b
                                                        sub_13f5638();
                                                        qt_QString_dtor();
                                                        int32_t v51 = v47; // 0x1240f6c
                                                        if ((char)v50 != 0) {
                                                            // 0x1240f72
                                                            *v48 = (int32_t)"boot-recovery";
                                                            v42 = (char *)&g594;
                                                            sub_a51f50();
                                                            *v48 = 0;
                                                            int32_t v52 = (int32_t)g595;
                                                            *(int32_t *)(v11 - 44) = 64 - v52;
                                                            sub_a525c0();
                                                            *(int32_t *)(v11 - 48) = v49;
                                                            *(int32_t *)(v11 - 52) = (int32_t)"P0";
                                                            qt_QString();
                                                            *(int32_t *)(v11 - 56) = (int32_t)"Huawei";
                                                            int32_t v53 = sub_1802cb0(); // 0x1240fdb
                                                            int32_t * v54 = (int32_t *)(v11 - 60); // 0x1240fe2
                                                            *v54 = (int32_t)v42;
                                                            int32_t v55; // 0x123f904
                                                            if ((char)v53 == 0) {
                                                                // 0x124104b
                                                                *v54 = (int32_t)"QC";
                                                                qt_?();
                                                                *(int32_t *)(v11 - 64) = (int32_t)"recovery\n--format_data\n";
                                                                sub_a51f50();
                                                                int32_t v56 = v11 - 68; // 0x1241070
                                                                *(int32_t *)v56 = (int32_t)"recovery\n--reason=MasterClearConfirm_udisk\n";
                                                                sub_a51f50();
                                                                v55 = v56;
                                                            } else {
                                                                // 0x1240fe5
                                                                *v54 = (int32_t)"recovery\n--wipe_data_factory_lowlevel";
                                                                sub_a51f50();
                                                                int32_t v57 = v11 - 64; // 0x1240ff7
                                                                *(int32_t *)v57 = (int32_t)"HW";
                                                                qt_?();
                                                                v55 = v57;
                                                            }
                                                            int32_t * v58 = (int32_t *)(v55 - 4); // 0x1241011
                                                            *v58 = (int32_t)"--locale=zh-CN";
                                                            sub_a51f50();
                                                            int32_t * v59 = (int32_t *)(v55 - 8); // 0x124102f
                                                            *v59 = (v43 ? -144 : 144) + v15;
                                                            *v58 = 0;
                                                            *v59 = *(int32_t *)(self + 256) - v52;
                                                            sub_a525c0();
                                                            int32_t * v60 = (int32_t *)(v55 - 12); // 0x1241085
                                                            *v60 = (int32_t)&v42;
                                                            int32_t * v61 = (int32_t *)(v55 - 16); // 0x124108d
                                                            *v61 = 0;
                                                            int32_t v62 = sub_181ded0(); // 0x1241094
                                                            int32_t * v63 = (int32_t *)(v55 - 20); // 0x124109f
                                                            *v63 = (int32_t)v42;
                                                            *(int32_t *)&v25 = (int32_t)v23;
                                                            qt_QString_ref();
                                                            *v63 = (int32_t)&v40;
                                                            int32_t v64 = qt_QVariant((int32_t)&g2208); // 0x12410c8
                                                            int32_t * v65 = (int32_t *)(v55 - 24); // 0x12410d3
                                                            *v65 = v64;
                                                            *(int32_t *)&v26 = (int32_t)v42;
                                                            qt_QString_ref();
                                                            *v59 = v62;
                                                            *v61 = v52;
                                                            *v58 = 0;
                                                            *v60 = v49;
                                                            *v63 = v38;
                                                            int32_t v66 = (int32_t)&v26; // 0x1241109
                                                            *v65 = v66;
                                                            int32_t v67 = sub_122aa44((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208); // 0x124110c
                                                            int32_t v68 = v55 - 48; // 0x1241111
                                                            sub_a56198();
                                                            qt_QVariant();
                                                            qt_QString_dtor();
                                                            qt_QVariant();
                                                            int32_t v69; // 0x123f904
                                                            if ((char)v67 != 0) {
                                                                int32_t * v70 = (int32_t *)v68; // 0x124116f
                                                                *v70 = (int32_t)"%0";
                                                                qt_QString();
                                                                int32_t * v71 = (int32_t *)(v55 - 52); // 0x1241182
                                                                *v71 = (int32_t)"OK";
                                                                qt_QString();
                                                                *(int16_t *)(v55 - 44) = 32;
                                                                *v70 = 0;
                                                                *v71 = v66;
                                                                *(int32_t *)(v55 - 56) = (int32_t)&v41;
                                                                qt_QString_arg();
                                                                *(int32_t *)(v55 - 64) = v38;
                                                                *(int32_t *)(v55 - 68) = 7;
                                                                *(int32_t *)(v55 - 72) = v49;
                                                                qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                                                                qt_QString_dtor();
                                                                qt_QString_dtor();
                                                                qt_QString_dtor();
                                                                v69 = v55 - 84;
                                                            } else {
                                                                // 0x124113d
                                                                *(int32_t *)(v55 - 40) = v38;
                                                                *(int32_t *)(v55 - 44) = 11;
                                                                *(int32_t *)v68 = v18;
                                                                qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                                                                v69 = v55 - 60;
                                                            }
                                                            // 0x12411eb
                                                            qt_QString_dtor();
                                                            sub_a56198();
                                                            v51 = v69;
                                                        }
                                                        // 0x1241201
                                                        sub_1217fd0();
                                                        v10 = v51;
                                                    }
                                                } else {
                                                    // 0x1240e23
                                                    sub_12502ac();
                                                    v10 = v11;
                                                }
                                                goto lab_0x124120c;
                                            } else {
                                                int32_t * v72 = (int32_t *)v11; // 0x1240a18
                                                *v72 = (int32_t)"Reset to factory default (P2)";
                                                v13 = (char *)&g594;
                                                qt_QString();
                                                *(int32_t *)(v11 + 4) = 3;
                                                *v72 = v38;
                                                *(int32_t *)(v11 - 4) = v15;
                                                sub_12579ec((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                                                qt_QString_dtor();
                                                qt_QString_dtor();
                                                *(int32_t *)(v11 - 16) = (int32_t)"usrdata";
                                                v42 = (char *)&g594;
                                                qt_QString();
                                                *(int32_t *)(v11 - 20) = v15;
                                                sub_13d4d88();
                                                int32_t * v73 = (int32_t *)(v11 - 24); // 0x1240a83
                                                *v73 = v38;
                                                qt_QString_dtor();
                                                *v73 = (int32_t)"userdata";
                                                qt_QString();
                                                *(int32_t *)(v11 - 28) = v15;
                                                sub_13d4d88();
                                                int32_t * v74 = (int32_t *)(v11 - 32); // 0x1240aa8
                                                *v74 = v22;
                                                qt_QString_dtor();
                                                *v74 = (int32_t)"cache";
                                                qt_QString();
                                                *(int32_t *)(v11 - 36) = v15;
                                                int32_t v75 = sub_13d4d88(); // 0x1240ac8
                                                int32_t v76 = v11 - 40; // 0x1240acd
                                                *(int32_t *)v76 = v75;
                                                qt_QString_dtor();
                                                int32_t v77 = sub_13d4d5c(); // 0x1240adb
                                                v9 = v76;
                                                if (v77 != sub_13d4d30()) {
                                                    int32_t v78 = (int32_t)&v25;
                                                    int32_t v79 = (int32_t)&v23;
                                                    int32_t v80 = &v41;
                                                    int32_t v81 = (int32_t)&v26;
                                                    int32_t v82 = v77; // 0x1240e02
                                                    __asm_rep_stosd_memset((char *)&v1, 0, 36);
                                                    *(int32_t *)v76 = 0;
                                                    qt_QVariant((int32_t)&g2208);
                                                    v23 = (char *)&g594;
                                                    *(int32_t *)(v76 - 4) = 0;
                                                    qt_QVariant((int32_t)v23);
                                                    *(int32_t *)(v76 - 8) = 0;
                                                    qt_QVariant((int32_t)&g2208);
                                                    int32_t * v83 = (int32_t *)(v76 - 12); // 0x1240b7f
                                                    *v83 = 0;
                                                    int32_t v84 = qt_QVariant((int32_t)&g594); // 0x1240b86
                                                    int32_t * v85 = (int32_t *)(v76 - 16); // 0x1240b8b
                                                    *v85 = v84;
                                                    v25 = (char *)*(int32_t *)v82;
                                                    qt_QString_ref();
                                                    *v85 = self + 536;
                                                    sub_13f5350();
                                                    int32_t v86 = v76 - 20; // 0x1240bc4
                                                    int32_t * v87 = (int32_t *)v86; // 0x1240bc4
                                                    *v83 = v15;
                                                    *v85 = v78;
                                                    *v87 = v38;
                                                    int32_t v88 = sub_a1a86c(); // 0x1240bd6
                                                    sub_13f5638();
                                                    qt_QString_dtor();
                                                    int32_t v89 = v86; // 0x1240bf7
                                                    int32_t v90; // 0x1240c71
                                                    int32_t v91; // 0x1240c76
                                                    int32_t * v92; // 0x1240c79
                                                    int32_t v93; // 0x1240c7c
                                                    int32_t * v94; // 0x1240c8e
                                                    int32_t * v95; // 0x1240c98
                                                    int32_t * v96; // 0x1240d7f
                                                    int32_t * v97; // 0x1240d8e
                                                    if ((char)v88 != 0) {
                                                        // 0x1240bfd
                                                        *v87 = v38;
                                                        v13 = (char *)2;
                                                        sub_167a590();
                                                        *(int32_t *)(v76 - 24) = (int32_t)"SERVICE_RESET_BUILD_DATA";
                                                        qt_QString();
                                                        *(int32_t *)(v76 - 28) = v79;
                                                        qt_toString();
                                                        *(int32_t *)(v76 - 32) = 0;
                                                        v90 = sub_181ded0();
                                                        v91 = v76 - 36;
                                                        v92 = (int32_t *)v91;
                                                        *v92 = v90;
                                                        v93 = qt_QVariant_dtor();
                                                        v94 = (int32_t *)(v76 - 40);
                                                        *v94 = v93;
                                                        qt_QString_append();
                                                        v95 = (int32_t *)(v76 - 44);
                                                        *v94 = v80;
                                                        *v92 = (int32_t)&v40;
                                                        *v95 = v81;
                                                        sub_1991340();
                                                        *v94 = v81;
                                                        *v92 = (int32_t)&v39;
                                                        *v95 = v78;
                                                        sub_1991340();
                                                        qt_QString_dtor();
                                                        qt_QString_dtor();
                                                        qt_QString_dtor();
                                                        qt_QString_dtor();
                                                        *v95 = (int32_t)"Building ext4 filesystem (%0)... ";
                                                        v13 = (char *)&g594;
                                                        qt_QString();
                                                        *(int16_t *)v91 = 32;
                                                        *v94 = 0;
                                                        *v95 = v79;
                                                        *(int32_t *)(v76 - 48) = v81;
                                                        qt_QString_arg();
                                                        *(int32_t *)(v76 - 56) = 4;
                                                        *(int32_t *)(v76 - 60) = v38;
                                                        *(int32_t *)(v76 - 64) = v78;
                                                        sub_12579ec((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                                                        qt_QString_dtor();
                                                        qt_QString_dtor();
                                                        qt_QString_dtor();
                                                        qt_QVariant();
                                                        v96 = (int32_t *)(v76 - 76);
                                                        *v96 = (int32_t)"%0";
                                                        qt_QString();
                                                        v97 = (int32_t *)(v76 - 80);
                                                        *v97 = (int32_t)"OK";
                                                        qt_QString();
                                                        *(int16_t *)(v76 - 72) = 32;
                                                        *v96 = 0;
                                                        *v97 = v81;
                                                        *(int32_t *)(v76 - 84) = v80;
                                                        qt_QString_arg();
                                                        *(int32_t *)(v76 - 96) = 7;
                                                        *(int32_t *)(v76 - 100) = v78;
                                                        *(int32_t *)(v76 - 92) = v38;
                                                        qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                                                        qt_QString_dtor();
                                                        qt_QString_dtor();
                                                        qt_QString_dtor();
                                                        v89 = v76 - 112;
                                                    }
                                                    int32_t v98 = v89;
                                                    sub_1217fd0();
                                                    v82 += 4;
                                                    v9 = v98;
                                                    while (v82 != sub_13d4d30()) {
                                                        int32_t v99 = v98;
                                                        __asm_rep_stosd_memset((char *)&v1, 0, 36);
                                                        *(int32_t *)v99 = 0;
                                                        qt_QVariant((int32_t)&g2208);
                                                        v23 = (char *)&g594;
                                                        *(int32_t *)(v99 - 4) = 0;
                                                        qt_QVariant((int32_t)v23);
                                                        *(int32_t *)(v99 - 8) = 0;
                                                        qt_QVariant((int32_t)&g2208);
                                                        v83 = (int32_t *)(v99 - 12);
                                                        *v83 = 0;
                                                        v84 = qt_QVariant((int32_t)&g594);
                                                        v85 = (int32_t *)(v99 - 16);
                                                        *v85 = v84;
                                                        v25 = (char *)*(int32_t *)v82;
                                                        qt_QString_ref();
                                                        *v85 = self + 536;
                                                        sub_13f5350();
                                                        v86 = v99 - 20;
                                                        v87 = (int32_t *)v86;
                                                        *v83 = v15;
                                                        *v85 = v78;
                                                        *v87 = v38;
                                                        v88 = sub_a1a86c();
                                                        sub_13f5638();
                                                        qt_QString_dtor();
                                                        v89 = v86;
                                                        if ((char)v88 != 0) {
                                                            // 0x1240bfd
                                                            *v87 = v38;
                                                            v13 = (char *)2;
                                                            sub_167a590();
                                                            *(int32_t *)(v99 - 24) = (int32_t)"SERVICE_RESET_BUILD_DATA";
                                                            qt_QString();
                                                            *(int32_t *)(v99 - 28) = v79;
                                                            qt_toString();
                                                            *(int32_t *)(v99 - 32) = 0;
                                                            v90 = sub_181ded0();
                                                            v91 = v99 - 36;
                                                            v92 = (int32_t *)v91;
                                                            *v92 = v90;
                                                            v93 = qt_QVariant_dtor();
                                                            v94 = (int32_t *)(v99 - 40);
                                                            *v94 = v93;
                                                            qt_QString_append();
                                                            v95 = (int32_t *)(v99 - 44);
                                                            *v94 = v80;
                                                            *v92 = (int32_t)&v40;
                                                            *v95 = v81;
                                                            sub_1991340();
                                                            *v94 = v81;
                                                            *v92 = (int32_t)&v39;
                                                            *v95 = v78;
                                                            sub_1991340();
                                                            qt_QString_dtor();
                                                            qt_QString_dtor();
                                                            qt_QString_dtor();
                                                            qt_QString_dtor();
                                                            *v95 = (int32_t)"Building ext4 filesystem (%0)... ";
                                                            v13 = (char *)&g594;
                                                            qt_QString();
                                                            *(int16_t *)v91 = 32;
                                                            *v94 = 0;
                                                            *v95 = v79;
                                                            *(int32_t *)(v99 - 48) = v81;
                                                            qt_QString_arg();
                                                            *(int32_t *)(v99 - 56) = 4;
                                                            *(int32_t *)(v99 - 60) = v38;
                                                            *(int32_t *)(v99 - 64) = v78;
                                                            sub_12579ec((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                                                            qt_QString_dtor();
                                                            qt_QString_dtor();
                                                            qt_QString_dtor();
                                                            qt_QVariant();
                                                            v96 = (int32_t *)(v99 - 76);
                                                            *v96 = (int32_t)"%0";
                                                            qt_QString();
                                                            v97 = (int32_t *)(v99 - 80);
                                                            *v97 = (int32_t)"OK";
                                                            qt_QString();
                                                            *(int16_t *)(v99 - 72) = 32;
                                                            *v96 = 0;
                                                            *v97 = v81;
                                                            *(int32_t *)(v99 - 84) = v80;
                                                            qt_QString_arg();
                                                            *(int32_t *)(v99 - 96) = 7;
                                                            *(int32_t *)(v99 - 100) = v78;
                                                            *(int32_t *)(v99 - 92) = v38;
                                                            qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                                                            qt_QString_dtor();
                                                            qt_QString_dtor();
                                                            qt_QString_dtor();
                                                            v89 = v99 - 112;
                                                        }
                                                        // 0x1240df7
                                                        v98 = v89;
                                                        sub_1217fd0();
                                                        v82 += 4;
                                                        v9 = v98;
                                                    }
                                                }
                                                goto lab_0x1240e0e;
                                            }
                                        } else {
                                            int32_t * v100 = (int32_t *)v11; // 0x12405fe
                                            *v100 = (int32_t)"Reset to factory default";
                                            v13 = (char *)&g594;
                                            qt_QString();
                                            *(int32_t *)(v11 + 4) = 3;
                                            *v100 = v38;
                                            *(int32_t *)(v11 - 4) = v15;
                                            sub_12579ec((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                                            qt_QString_dtor();
                                            qt_QString_dtor();
                                            *(int32_t *)(v11 - 16) = (int32_t)"usrdata";
                                            v42 = (char *)&g594;
                                            qt_QString();
                                            *(int32_t *)(v11 - 20) = v15;
                                            sub_13d4d88();
                                            int32_t * v101 = (int32_t *)(v11 - 24); // 0x1240669
                                            *v101 = (int32_t)&v42;
                                            qt_QString_dtor();
                                            *v101 = (int32_t)"userdata";
                                            qt_QString();
                                            *(int32_t *)(v11 - 28) = v15;
                                            int32_t v102 = sub_13d4d88(); // 0x1240689
                                            int32_t * v103 = (int32_t *)(v11 - 32); // 0x124068e
                                            *v103 = v102;
                                            qt_QString_dtor();
                                            *v103 = (int32_t)"cache";
                                            qt_QString();
                                            *(int32_t *)(v11 - 36) = v15;
                                            int32_t v104 = sub_13d4d88(); // 0x12406ae
                                            int32_t v105 = v11 - 40; // 0x12406b3
                                            int32_t * v106 = (int32_t *)v105;
                                            *v106 = v104;
                                            qt_QString_dtor();
                                            int32_t v107 = sub_13d4d5c(); // 0x12406c1
                                            if (v107 == sub_13d4d30()) {
                                                // 0x1240949
                                                v4 = v106;
                                                v6 = qt_QVariant();
                                                v12 = v105;
                                                goto lab_0x124095a;
                                            } else {
                                                int32_t v108 = (int32_t)&v25;
                                                int32_t v109 = (int32_t)&v24;
                                                int32_t v110 = (int32_t)&v26;
                                                int32_t v111 = v107; // 0x124093d
                                                char v112 = 0;
                                                __asm_rep_stosd_memset((char *)&v13, 0, 36);
                                                *(int32_t *)v105 = 0;
                                                qt_QVariant((int32_t)&g2208);
                                                v24 = (char *)&g594;
                                                *(int32_t *)(v105 - 4) = 0;
                                                qt_QVariant((int32_t)v24);
                                                *(int32_t *)(v105 - 8) = 0;
                                                qt_QVariant((int32_t)&g2208);
                                                int32_t * v113 = (int32_t *)(v105 - 12); // 0x1240783
                                                *v113 = 0;
                                                qt_QVariant((int32_t)&g594);
                                                int32_t * v114 = (int32_t *)(v105 - 16); // 0x1240795
                                                *v114 = (v43 ? -144 : 144) + v38;
                                                v25 = (char *)*(int32_t *)v111;
                                                qt_QString_ref();
                                                *v114 = self + 536;
                                                sub_13f5350();
                                                int32_t v115 = v105 - 20; // 0x12407c4
                                                int32_t * v116 = (int32_t *)v115; // 0x12407c4
                                                *v113 = v38;
                                                *v116 = v15;
                                                *v114 = v108;
                                                int32_t v117 = sub_a1a86c(); // 0x12407d6
                                                sub_13f5638();
                                                qt_QString_dtor();
                                                char v118 = v112; // 0x12407fb
                                                int32_t v119 = v115; // 0x12407fb
                                                int32_t v120; // bp-252, 0x123f904
                                                int32_t v121; // bp-268, 0x123f904
                                                int32_t v122; // 0x1240875
                                                int32_t * v123; // 0x124087d
                                                int32_t v124; // 0x1240880
                                                int32_t * v125; // 0x124088c
                                                int32_t * v126; // 0x124089c
                                                int32_t v127; // 0x124090f
                                                if ((char)v117 != 0) {
                                                    // 0x1240801
                                                    *v116 = v15;
                                                    v1 = 2;
                                                    sub_167a590();
                                                    *(int32_t *)(v105 - 24) = (int32_t)"SERVICE_RESET_FORMAT_DATA";
                                                    qt_QString();
                                                    *(int32_t *)(v105 - 28) = v109;
                                                    qt_toString();
                                                    *(int32_t *)(v105 - 32) = 0;
                                                    v122 = sub_181ded0();
                                                    v123 = (int32_t *)(v105 - 36);
                                                    *v123 = v122;
                                                    v124 = qt_QVariant_dtor();
                                                    v125 = (int32_t *)(v105 - 40);
                                                    *v125 = v124;
                                                    qt_QString_append();
                                                    v126 = (int32_t *)(v105 - 44);
                                                    *v123 = (int32_t)&v121;
                                                    *v125 = (int32_t)&v41;
                                                    *v126 = v110;
                                                    sub_1991340();
                                                    *v125 = v110;
                                                    *v123 = (int32_t)&v120;
                                                    *v126 = v108;
                                                    sub_1991340();
                                                    qt_QString_dtor();
                                                    qt_QString_dtor();
                                                    qt_QString_dtor();
                                                    qt_QString_dtor();
                                                    *v126 = v38;
                                                    *(int32_t *)(v105 - 48) = v15;
                                                    v127 = sub_1225ab4((int32_t)&g2208);
                                                    v119 = v105 - 52;
                                                    *(int32_t *)v119 = v109;
                                                    sub_1217fd0();
                                                    v118 = v112 + (char)((char)v127 != 0);
                                                }
                                                int32_t v128 = v119;
                                                char v129 = v118;
                                                sub_1217fd0();
                                                v111 += 4;
                                                int32_t v130 = v128; // 0x12406ed
                                                char v131 = v129; // 0x12406ed
                                                while (v111 != sub_13d4d30()) {
                                                    // 0x12406f3
                                                    v112 = v131;
                                                    int32_t v132 = v130;
                                                    __asm_rep_stosd_memset((char *)&v13, 0, 36);
                                                    *(int32_t *)v132 = 0;
                                                    qt_QVariant((int32_t)&g2208);
                                                    v24 = (char *)&g594;
                                                    *(int32_t *)(v132 - 4) = 0;
                                                    qt_QVariant((int32_t)v24);
                                                    *(int32_t *)(v132 - 8) = 0;
                                                    qt_QVariant((int32_t)&g2208);
                                                    v113 = (int32_t *)(v132 - 12);
                                                    *v113 = 0;
                                                    qt_QVariant((int32_t)&g594);
                                                    v114 = (int32_t *)(v132 - 16);
                                                    *v114 = (v43 ? -144 : 144) + v38;
                                                    v25 = (char *)*(int32_t *)v111;
                                                    qt_QString_ref();
                                                    *v114 = self + 536;
                                                    sub_13f5350();
                                                    v115 = v132 - 20;
                                                    v116 = (int32_t *)v115;
                                                    *v113 = v38;
                                                    *v116 = v15;
                                                    *v114 = v108;
                                                    v117 = sub_a1a86c();
                                                    sub_13f5638();
                                                    qt_QString_dtor();
                                                    v118 = v112;
                                                    v119 = v115;
                                                    if ((char)v117 != 0) {
                                                        // 0x1240801
                                                        *v116 = v15;
                                                        v1 = 2;
                                                        sub_167a590();
                                                        *(int32_t *)(v132 - 24) = (int32_t)"SERVICE_RESET_FORMAT_DATA";
                                                        qt_QString();
                                                        *(int32_t *)(v132 - 28) = v109;
                                                        qt_toString();
                                                        *(int32_t *)(v132 - 32) = 0;
                                                        v122 = sub_181ded0();
                                                        v123 = (int32_t *)(v132 - 36);
                                                        *v123 = v122;
                                                        v124 = qt_QVariant_dtor();
                                                        v125 = (int32_t *)(v132 - 40);
                                                        *v125 = v124;
                                                        qt_QString_append();
                                                        v126 = (int32_t *)(v132 - 44);
                                                        *v123 = (int32_t)&v121;
                                                        *v125 = (int32_t)&v41;
                                                        *v126 = v110;
                                                        sub_1991340();
                                                        *v125 = v110;
                                                        *v123 = (int32_t)&v120;
                                                        *v126 = v108;
                                                        sub_1991340();
                                                        qt_QString_dtor();
                                                        qt_QString_dtor();
                                                        qt_QString_dtor();
                                                        qt_QString_dtor();
                                                        *v126 = v38;
                                                        *(int32_t *)(v132 - 48) = v15;
                                                        v127 = sub_1225ab4((int32_t)&g2208);
                                                        v119 = v132 - 52;
                                                        *(int32_t *)v119 = v109;
                                                        sub_1217fd0();
                                                        v118 = v112 + (char)((char)v127 != 0);
                                                    }
                                                    // 0x1240932
                                                    v128 = v119;
                                                    v129 = v118;
                                                    sub_1217fd0();
                                                    v111 += 4;
                                                    v130 = v128;
                                                    v131 = v129;
                                                }
                                                int32_t * v133 = (int32_t *)v128;
                                                v4 = v133;
                                                v6 = qt_QVariant();
                                                v12 = v128;
                                                if (v129 != 0) {
                                                    // 0x1240981
                                                    *v133 = (int32_t)"%0";
                                                    qt_QString();
                                                    int32_t * v134 = (int32_t *)(v128 - 4); // 0x124099f
                                                    *v134 = (int32_t)"OK";
                                                    qt_QString();
                                                    *(int16_t *)(v128 + 4) = 32;
                                                    *v133 = 0;
                                                    *v134 = v108;
                                                    *(int32_t *)(v128 - 8) = v110;
                                                    qt_QString_arg();
                                                    *(int32_t *)(v128 - 20) = 7;
                                                    *(int32_t *)(v128 - 24) = v38;
                                                    *(int32_t *)(v128 - 16) = v15;
                                                    qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                                                    qt_QString_dtor();
                                                    qt_QString_dtor();
                                                    qt_QString_dtor();
                                                    v9 = v128 - 36;
                                                    goto lab_0x1240e0e;
                                                } else {
                                                    goto lab_0x124095a;
                                                }
                                            }
                                        }
                                    } else {
                                        int32_t * v135 = (int32_t *)v11; // 0x1240143
                                        *v135 = (int32_t)"RESET efs data";
                                        v13 = (char *)&g594;
                                        qt_QString();
                                        *(int32_t *)(v11 + 4) = 3;
                                        *v135 = v38;
                                        *(int32_t *)(v11 - 4) = v15;
                                        sub_12579ec((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                                        qt_QString_dtor();
                                        qt_QString_dtor();
                                        *(int32_t *)(v11 - 16) = (int32_t)"modemst1";
                                        v42 = (char *)&g594;
                                        qt_QString();
                                        *(int32_t *)(v11 - 20) = v15;
                                        int32_t v136 = sub_13d4d88(); // 0x12401a9
                                        int32_t * v137 = (int32_t *)(v11 - 24); // 0x12401ae
                                        *v137 = v136;
                                        qt_QString_dtor();
                                        *v137 = (int32_t)"modemst2";
                                        qt_QString();
                                        *(int32_t *)(v11 - 28) = v15;
                                        sub_13d4d88();
                                        int32_t * v138 = (int32_t *)(v11 - 32); // 0x12401d3
                                        *v138 = v38;
                                        qt_QString_dtor();
                                        *v138 = (int32_t)&g423;
                                        qt_QString();
                                        *(int32_t *)(v11 - 36) = v15;
                                        sub_13d4d88();
                                        int32_t * v139 = (int32_t *)(v11 - 40); // 0x12401f8
                                        *v139 = v22;
                                        qt_QString_dtor();
                                        *v139 = (int32_t)&g424;
                                        qt_QString();
                                        *(int32_t *)(v11 - 44) = v15;
                                        int32_t v140 = sub_13d4d88(); // 0x1240218
                                        int32_t v141 = v11 - 48; // 0x124021d
                                        *(int32_t *)v141 = v140;
                                        qt_QString_dtor();
                                        int32_t v142 = sub_13d4d5c(); // 0x124022b
                                        v9 = v141;
                                        if (v142 != sub_13d4d30()) {
                                            int32_t v143 = (int32_t)&v25;
                                            int32_t v144 = (int32_t)&v23;
                                            int32_t v145 = &v40;
                                            int32_t v146 = &v41;
                                            int32_t v147 = (int32_t)&v26;
                                            int32_t v148 = &v39;
                                            int32_t v149 = v142; // 0x12405e9
                                            __asm_rep_stosd_memset((char *)&v1, 0, 36);
                                            *(int32_t *)v141 = 0;
                                            qt_QVariant((int32_t)&g2208);
                                            v23 = (char *)&g594;
                                            *(int32_t *)(v141 - 4) = 0;
                                            qt_QVariant((int32_t)v23);
                                            *(int32_t *)(v141 - 8) = 0;
                                            qt_QVariant((int32_t)&g2208);
                                            int32_t * v150 = (int32_t *)(v141 - 12); // 0x12402cf
                                            *v150 = 0;
                                            int32_t v151 = qt_QVariant((int32_t)&g594); // 0x12402d6
                                            int32_t * v152 = (int32_t *)(v141 - 16); // 0x12402db
                                            *v152 = v151;
                                            v25 = (char *)*(int32_t *)v149;
                                            qt_QString_ref();
                                            *v152 = self + 536;
                                            sub_13f5350();
                                            int32_t v153 = v141 - 20; // 0x1240314
                                            int32_t * v154 = (int32_t *)v153; // 0x1240314
                                            *v150 = v15;
                                            *v152 = v143;
                                            *v154 = v38;
                                            int32_t v155 = sub_a1a86c(); // 0x1240326
                                            sub_13f5638();
                                            qt_QString_dtor();
                                            int32_t v156 = v153; // 0x1240347
                                            int32_t v157; // 0x123f904
                                            int32_t v158; // bp-508, 0x123f904
                                            int32_t v159; // 0x12403c1
                                            int32_t * v160; // 0x12403c9
                                            int32_t v161; // 0x12403cc
                                            int32_t * v162; // 0x12403de
                                            int32_t * v163; // 0x12403eb
                                            int32_t v164; // 0x1240443
                                            int32_t * v165; // 0x1240448
                                            int32_t * v166; // 0x124045f
                                            int32_t * v167; // 0x1240467
                                            int32_t v168; // 0x124046e
                                            int32_t * v169; // 0x1240479
                                            int32_t v170; // 0x124049c
                                            int32_t * v171; // 0x12404a7
                                            int32_t v172; // 0x12404e6
                                            int32_t v173; // 0x12404eb
                                            int32_t * v174; // 0x1240547
                                            int32_t * v175; // 0x124055a
                                            if ((char)v155 != 0) {
                                                // 0x124034d
                                                *v154 = v38;
                                                v13 = (char *)2;
                                                sub_167a590();
                                                *(int32_t *)(v141 - 24) = (int32_t)"SERVICE_FLOCK_FRP";
                                                qt_QString();
                                                *(int32_t *)(v141 - 28) = v144;
                                                qt_toString();
                                                *(int32_t *)(v141 - 32) = 0;
                                                v159 = sub_181ded0();
                                                v160 = (int32_t *)(v141 - 36);
                                                *v160 = v159;
                                                v161 = qt_QVariant_dtor();
                                                v162 = (int32_t *)(v141 - 40);
                                                *v162 = v161;
                                                qt_QString_append();
                                                v163 = (int32_t *)(v141 - 44);
                                                *v160 = v145;
                                                *v162 = v146;
                                                *v163 = v147;
                                                sub_1991340();
                                                *v162 = v147;
                                                *v160 = v148;
                                                *v163 = v143;
                                                sub_1991340();
                                                qt_QString_dtor();
                                                qt_QString_dtor();
                                                qt_QString_dtor();
                                                qt_QString_dtor();
                                                *v163 = 0;
                                                v164 = sub_181bf50();
                                                v165 = (int32_t *)(v141 - 48);
                                                *v163 = 0;
                                                *v165 = v164;
                                                sub_a55f60();
                                                v166 = (int32_t *)(v141 - 52);
                                                *v166 = (int32_t)&v158;
                                                v167 = (int32_t *)(v141 - 56);
                                                *v167 = 0;
                                                v168 = sub_181ded0();
                                                v169 = (int32_t *)(v141 - 60);
                                                *v169 = v148;
                                                *(int32_t *)&v25 = (int32_t)v23;
                                                qt_QString_ref();
                                                *v169 = v145;
                                                v170 = qt_QVariant((int32_t)&g2208);
                                                v171 = (int32_t *)(v141 - 64);
                                                *v171 = v170;
                                                v26 = (char *)v158;
                                                qt_QString_ref();
                                                *v165 = v168;
                                                *v167 = *(int32_t *)(v158 + 4);
                                                *v163 = 0;
                                                *v166 = v143;
                                                *v169 = v38;
                                                *v171 = v147;
                                                v172 = sub_122aa44((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                                                v173 = v141 - 88;
                                                sub_a56198();
                                                qt_QVariant();
                                                qt_QString_dtor();
                                                qt_QVariant();
                                                if ((char)v172 != 0) {
                                                    // 0x124053c
                                                    v174 = (int32_t *)v173;
                                                    *v174 = (int32_t)"%0";
                                                    qt_QString();
                                                    v175 = (int32_t *)(v141 - 92);
                                                    *v175 = (int32_t)"OK";
                                                    qt_QString();
                                                    *(int16_t *)(v141 - 84) = 32;
                                                    *v174 = 0;
                                                    *v175 = v147;
                                                    *(int32_t *)(v141 - 96) = v146;
                                                    qt_QString_arg();
                                                    *(int32_t *)(v141 - 108) = 7;
                                                    *(int32_t *)(v141 - 104) = v38;
                                                    *(int32_t *)(v141 - 112) = v143;
                                                    qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                                                    qt_QString_dtor();
                                                    qt_QString_dtor();
                                                    qt_QString_dtor();
                                                    v157 = v141 - 124;
                                                } else {
                                                    // 0x1240515
                                                    *(int32_t *)(v141 - 80) = v38;
                                                    *(int32_t *)(v141 - 84) = 11;
                                                    *(int32_t *)v173 = v18;
                                                    qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                                                    v157 = v141 - 100;
                                                }
                                                // 0x12405d3
                                                sub_a56198();
                                                v156 = v157;
                                            }
                                            int32_t v176 = v156;
                                            sub_1217fd0();
                                            v149 += 4;
                                            v9 = v176;
                                            while (v149 != sub_13d4d30()) {
                                                int32_t v177 = v176;
                                                __asm_rep_stosd_memset((char *)&v1, 0, 36);
                                                *(int32_t *)v177 = 0;
                                                qt_QVariant((int32_t)&g2208);
                                                v23 = (char *)&g594;
                                                *(int32_t *)(v177 - 4) = 0;
                                                qt_QVariant((int32_t)v23);
                                                *(int32_t *)(v177 - 8) = 0;
                                                qt_QVariant((int32_t)&g2208);
                                                v150 = (int32_t *)(v177 - 12);
                                                *v150 = 0;
                                                v151 = qt_QVariant((int32_t)&g594);
                                                v152 = (int32_t *)(v177 - 16);
                                                *v152 = v151;
                                                v25 = (char *)*(int32_t *)v149;
                                                qt_QString_ref();
                                                *v152 = self + 536;
                                                sub_13f5350();
                                                v153 = v177 - 20;
                                                v154 = (int32_t *)v153;
                                                *v150 = v15;
                                                *v152 = v143;
                                                *v154 = v38;
                                                v155 = sub_a1a86c();
                                                sub_13f5638();
                                                qt_QString_dtor();
                                                v156 = v153;
                                                if ((char)v155 != 0) {
                                                    // 0x124034d
                                                    *v154 = v38;
                                                    v13 = (char *)2;
                                                    sub_167a590();
                                                    *(int32_t *)(v177 - 24) = (int32_t)"SERVICE_FLOCK_FRP";
                                                    qt_QString();
                                                    *(int32_t *)(v177 - 28) = v144;
                                                    qt_toString();
                                                    *(int32_t *)(v177 - 32) = 0;
                                                    v159 = sub_181ded0();
                                                    v160 = (int32_t *)(v177 - 36);
                                                    *v160 = v159;
                                                    v161 = qt_QVariant_dtor();
                                                    v162 = (int32_t *)(v177 - 40);
                                                    *v162 = v161;
                                                    qt_QString_append();
                                                    v163 = (int32_t *)(v177 - 44);
                                                    *v160 = v145;
                                                    *v162 = v146;
                                                    *v163 = v147;
                                                    sub_1991340();
                                                    *v162 = v147;
                                                    *v160 = v148;
                                                    *v163 = v143;
                                                    sub_1991340();
                                                    qt_QString_dtor();
                                                    qt_QString_dtor();
                                                    qt_QString_dtor();
                                                    qt_QString_dtor();
                                                    *v163 = 0;
                                                    v164 = sub_181bf50();
                                                    v165 = (int32_t *)(v177 - 48);
                                                    *v163 = 0;
                                                    *v165 = v164;
                                                    sub_a55f60();
                                                    v166 = (int32_t *)(v177 - 52);
                                                    *v166 = (int32_t)&v158;
                                                    v167 = (int32_t *)(v177 - 56);
                                                    *v167 = 0;
                                                    v168 = sub_181ded0();
                                                    v169 = (int32_t *)(v177 - 60);
                                                    *v169 = v148;
                                                    *(int32_t *)&v25 = (int32_t)v23;
                                                    qt_QString_ref();
                                                    *v169 = v145;
                                                    v170 = qt_QVariant((int32_t)&g2208);
                                                    v171 = (int32_t *)(v177 - 64);
                                                    *v171 = v170;
                                                    v26 = (char *)v158;
                                                    qt_QString_ref();
                                                    *v165 = v168;
                                                    *v167 = *(int32_t *)(v158 + 4);
                                                    *v163 = 0;
                                                    *v166 = v143;
                                                    *v169 = v38;
                                                    *v171 = v147;
                                                    v172 = sub_122aa44((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                                                    v173 = v177 - 88;
                                                    sub_a56198();
                                                    qt_QVariant();
                                                    qt_QString_dtor();
                                                    qt_QVariant();
                                                    if ((char)v172 != 0) {
                                                        // 0x124053c
                                                        v174 = (int32_t *)v173;
                                                        *v174 = (int32_t)"%0";
                                                        qt_QString();
                                                        v175 = (int32_t *)(v177 - 92);
                                                        *v175 = (int32_t)"OK";
                                                        qt_QString();
                                                        *(int16_t *)(v177 - 84) = 32;
                                                        *v174 = 0;
                                                        *v175 = v147;
                                                        *(int32_t *)(v177 - 96) = v146;
                                                        qt_QString_arg();
                                                        *(int32_t *)(v177 - 108) = 7;
                                                        *(int32_t *)(v177 - 104) = v38;
                                                        *(int32_t *)(v177 - 112) = v143;
                                                        qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                                                        qt_QString_dtor();
                                                        qt_QString_dtor();
                                                        qt_QString_dtor();
                                                        v157 = v177 - 124;
                                                    } else {
                                                        // 0x1240515
                                                        *(int32_t *)(v177 - 80) = v38;
                                                        *(int32_t *)(v177 - 84) = 11;
                                                        *(int32_t *)v173 = v18;
                                                        qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                                                        v157 = v177 - 100;
                                                    }
                                                    // 0x12405d3
                                                    sub_a56198();
                                                    v156 = v157;
                                                }
                                                // 0x12405de
                                                v176 = v156;
                                                sub_1217fd0();
                                                v149 += 4;
                                                v9 = v176;
                                            }
                                        }
                                        goto lab_0x1240e0e;
                                    }
                                } else {
                                    // 0x12400fc
                                    v1 = *(int32_t *)(self + 56);
                                    qt_QString_ref();
                                    *(int32_t *)(v11 + 4) = v15;
                                    *(int32_t *)v11 = 2;
                                    v7 = sub_12540a4((int32_t)&g2208, (int32_t)&g2208);
                                    goto lab_0x1240126;
                                }
                            } else {
                                // 0x12400cb
                                v1 = *(int32_t *)(self + 56);
                                qt_QString_ref();
                                *(int32_t *)(v11 + 4) = v15;
                                *(int32_t *)v11 = 1;
                                v7 = sub_12540a4((int32_t)&g2208, (int32_t)&g2208);
                                goto lab_0x1240126;
                            }
                        } else {
                            // 0x124009a
                            v1 = *(int32_t *)(self + 56);
                            qt_QString_ref();
                            *(int32_t *)(v11 + 4) = v15;
                            *(int32_t *)v11 = 0;
                            v7 = sub_12540a4((int32_t)&g2208, (int32_t)&g2208);
                            goto lab_0x1240126;
                        }
                    } else {
                        // 0x1240085
                        sub_1229978();
                        v10 = v11;
                        goto lab_0x124120c;
                    }
                } else {
                    // 0x1240070
                    sub_124c7e8();
                    v10 = v11;
                    goto lab_0x124120c;
                }
            } else {
                // 0x124005b
                sub_124d3b0();
                v10 = v11;
                goto lab_0x124120c;
            }
        }
    } else {
        int32_t v178 = self + 56; // 0x123f9fb
        v14 = v178;
        int32_t v179 = Qualcomm_task16(v178); // 0x123fa01
        v5 = &v1;
        v8 = &v14;
        result3 = v179;
        goto lab_0x123fb40;
    }
  lab_0x123fb40:
    // 0x123fb40
    *(int32_t *)(v8 - 4) = v5;
    // 0x1241a46
    return result3;
  lab_0x124120c:
    // 0x124120c
    if (*(char *)(self + 61) != 0) {
        // 0x1241218
        sub_125767c();
    }
    // 0x124121f
    *v16 = 0;
    *v17 = 3;
    qt_?();
    *(int32_t *)v10 = 0;
    sub_12501e0();
    *(int32_t *)(v10 - 4) = (int32_t)&g425;
    qt_QString();
    int32_t * v180 = (int32_t *)(v10 - 8); // 0x124126b
    *v180 = (int32_t)&g425;
    qt_QString();
    *v180 = v15;
    *(int32_t *)(v10 - 12) = (int32_t)&v13;
    int32_t v181 = sub_12482e0((int32_t)&g2208, (int32_t)&g2208); // 0x1241285
    *(int32_t *)(v10 - 16) = v181;
    *(int32_t *)(v10 - 20) = v181;
    qt_QString_dtor();
    // 0x1241a46
    return qt_QString_dtor();
  lab_0x1240126:
    // 0x1240126
    *(int32_t *)(v11 - 4) = v7;
    int32_t v182 = v11 - 8; // 0x1240127
    *(int32_t *)v182 = v7;
    qt_QString_dtor();
    v10 = v182;
    goto lab_0x124120c;
  lab_0x1240e0e:
    // 0x1240e0e
    sub_13d5630();
    v10 = v9;
    goto lab_0x124120c;
  lab_0x124095a:
    // 0x124095a
    *(int32_t *)(v12 + 8) = v6;
    *(int32_t *)(v12 + 4) = 11;
    *v4 = v18;
    qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
    v9 = v12 - 12;
    goto lab_0x1240e0e;
}
