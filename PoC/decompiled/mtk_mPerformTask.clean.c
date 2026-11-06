/*
 * mtk_mPerformTask
 * Entry VA: 0x14c0100
 * Cleaned pseudocode from RetDec v5.0 (best-effort names/comments).
 *
 * Known fields (offsets from the object base):
 *   self +0x18  : task type
 *   self +0x178 : format/flag
 *   self +0x185 : special flag
 *   self +0x186 : flag copied from +0x6A
 *   self +0x1F4 : extra info string
 *
 * Key strings observed:
 *   "boot-recovery"
 *   "Huawei"
 *   "VIVO"
 *   "--reason=android"
 *   "--locale=en_US"
 *   "Write boot_to cmd data to (%0)[%1:%2] "
 *   "data"
 *   "SERVICE_RESET_BUILD_DATA"
 *   "mkext4fs_failed!"
 *   "NORMAL"
 *
 * `self` is the original object pointer (this).
 * Calls named `sub_<addr>` could not be resolved to a known method.
 */


// Address range: 0x14c0100 - 0x14c20ad
int32_t MTK_mPerformTask(void) {
    // 0x14c0100
    int32_t self; // 0x14c0100
    char * v2 = (char *)(self + 376); // 0x14c0114 [self->flag178]
    *v2 = 0;
    char * v3 = (char *)2; // bp-172, 0x14c0124
    sub_167a590();
    qt_QString();
    qt_QString();
    sub_132489c();
    qt_qDebug();
    qt_QString();
    qt_intToVariant();
    qt_QString_dtor();
    qt_QString_dtor();
    qt_QString_dtor();
    int32_t * v4 = (int32_t *)(self + 24); // 0x14c01fa [self->task_type]
    int32_t v5 = *v4; // 0x14c01fa
    if (v5 == 22) {
        // 0x14c0202
        v3 = (char *)*(int32_t *)(self + 64);
        qt_QString_ref();
        MTK_task16((int32_t *)&v3);
        // 0x14c20a5
        return qt_?();
    }
    if (v5 != 21 != v5 != 100) {
        char v6 = *(char *)(self + 106); // 0x14c022a
        *(char *)(self + 390) = v6; // self->flag186
        if (v6 == 0) {
            // 0x14c0237
            *(char *)(self + 389) = 1; // self->flag185
        }
    }
    int32_t result = MTK_connect(); // 0x14c0240
    if (*(int32_t *)(*(int32_t *)(self + 500) + 4) != 0) { // self->extra_info
        // 0x14c0253
        if (*v4 == 21) {
            // 0x14c0259
            sub_11e6620();
            sub_d7c040();
            sub_11e8ec0();
        }
    }
    if ((char)result == 0) {
        // 0x14c027d
        *(int32_t *)(self + 20) = 1;
        // 0x14c20a5
        return result;
    }
    // 0x14c0289
    v3 = (char *)2;
    sub_167a590();
    qt_QString();
    sub_132489c();
    char * v7; // bp-196, 0x14c0100
    char * v8 = (char *)&v7; // bp-368, 0x14c030f
    qt_qDebug();
    qt_QString_dtor();
    qt_QString_dtor();
    qt_QString_dtor();
    int32_t * v9 = (int32_t *)(self + 532); // 0x14c0334
    int32_t v10 = *v9; // 0x14c0334
    if (v10 != (int32_t)&g594) {
        // 0x14c0341
        *v9 = (int32_t)&g594;
        v3 = (char *)v10;
        qt_?();
    }
    int32_t v11 = *v4; // 0x14c0358
    int32_t * v12; // 0x14c0100
    int32_t v13; // 0x14c0100
    int32_t v14; // 0x14c0100
    int32_t result3; // 0x14c03bd
    int32_t v15; // 0x14c0100
    int32_t v16; // 0x14c0100
    int32_t result4; // 0x14c0100
    int32_t v17; // 0x14c0100
    int32_t v18; // 0x14c0100
    int32_t v19; // 0x14c0100
    int32_t v20; // 0x14c0100
    int32_t v21; // 0x14c0100
    int32_t v22; // 0x14c0100
    int32_t v23; // 0x14c0100
    int32_t v24; // 0x14c0100
    int32_t v25; // 0x14c0100
    int32_t v26; // 0x14c0100
    int32_t v27; // 0x14c0100
    int32_t v28; // 0x14c0100
    int32_t v29; // 0x14c0100
    int32_t v30; // 0x14c0100
    int32_t v31; // 0x14c0100
    int32_t v32; // 0x14c0100
    int32_t v33; // 0x14c0100
    int32_t v34; // 0x14c0100
    int32_t v35; // 0x14c0100
    char * v36; // bp-208, 0x14c0100
    int32_t v37; // 0x14c0100
    int32_t v38; // 0x14c0100
    int32_t v39; // 0x14c0100
    int32_t v40; // 0x14c0100
    int32_t v41; // 0x14c0100
    int32_t v42; // 0x14c0100
    int32_t v43; // 0x14c0100
    int32_t v44; // bp-372, 0x14c0100
    int32_t v45; // 0x14c0100
    int32_t v46; // 0x14c0100
    int32_t v47; // 0x14c0100
    int32_t v48; // 0x14c0100
    int32_t v49; // 0x14c0100
    int32_t v50; // 0x14c082e
    int32_t v51; // 0x14c0832
    int32_t v52; // 0x14c0100
    int32_t v53; // 0x14c0100
    int32_t v54; // 0x14c12b4
    int32_t v55; // 0x14c12b8
    if (v11 != 3) {
        int32_t v56 = (int32_t)&v8; // 0x14c02ed
        int32_t v57 = v11; // 0x14c0394
        v29 = v56;
        if (*(int32_t *)(self + 1192) != 6) {
            // 0x14c0396
            v57 = v11;
            v29 = v56;
            if (*(char *)(self + 370) == 0) {
                int32_t result2 = sub_150cdd8(); // 0x14c03a1
                if ((char)result2 == 0) {
                    // 0x14c20a5
                    return result2;
                }
                // 0x14c03ae
                v8 = NULL;
                v44 = sub_14c20b0(0);
                v57 = *v4;
                v29 = &v44;
            }
        }
        // 0x14c03bd
        result3 = v57;
        if (result3 != 1) {
            // 0x14c03ce
            if (result3 == 4) {
                // 0x14c20a5
                return 4;
            }
        } else {
            // 0x14c03d1
            if (*(char *)(self + 370) == 0) {
                // 0x14c20a5
                return result3;
            }
        }
        switch (result3) {
            case 29: {
                goto lab_0x14c03eb;
            }
            case 28: {
                goto lab_0x14c03eb;
            }
            case 27: {
                goto lab_0x14c03eb;
            }
            case 7: {
                goto lab_0x14c03eb;
            }
            case 6: {
                goto lab_0x14c03eb;
            }
            case 5: {
                goto lab_0x14c03eb;
            }
            default: {
                if (result3 != 82) {
                    if (result3 != 12) {
                        if (result3 != 83) {
                            if (result3 != 76) {
                                if (result3 != 21 == (result3 != 100)) {
                                    if (result3 < 27) {
                                        // 0x14c04f4
                                    } else {
                                        if (result3 != 24) {
                                            if (result3 != 23) {
                                                if (result3 != 8) {
                                                    if (result3 < 72) {
                                                        // 0x14c056b
                                                        v3 = (char *)*(int32_t *)(self + 64);
                                                        qt_QString_ref();
                                                        *(int32_t *)(v29 + 4) = (int32_t)&v3;
                                                        *(int32_t *)v29 = *v4;
                                                        sub_149fb3c((int32_t)&g2208, (int32_t)&g2208);
                                                        goto lab_0x14c058a;
                                                    } else {
                                                        if (result3 != 72) {
                                                            if (result3 != 74) {
                                                                if (result3 != 73) {
                                                                    if (result3 < 17) {
                                                                        int32_t v58 = sub_14ffd10(); // 0x14c0628
                                                                    } else {
                                                                        char * v59; // bp-148, 0x14c0100
                                                                        char * v60; // bp-236, 0x14c0100
                                                                        if (result3 != 14) {
                                                                            if (result3 != 18) {
                                                                                if (result3 != 17) {
                                                                                    goto lab_0x14c1aa3;
                                                                                } else {
                                                                                    char v61; // 0x14c0f52
                                                                                    if (v61 == 0) {
                                                                                        int32_t v62; // 0x14c0100
                                                                                        int32_t v63; // 0x14c134a
                                                                                        if (0x1000000 * v62 >> 24 == v63) {
                                                                                            // 0x14c1295
                                                                                            int32_t v64; // bp-220, 0x14c0100
                                                                                            v14 = &v64;
                                                                                        } else {
                                                                                            int32_t v65; // 0x14c0100
                                                                                            int32_t v66; // 0x14c0100
                                                                                            while (true) {
                                                                                              lab_0x14c1361:;
                                                                                                int32_t v67 = v37;
                                                                                                int32_t v68 = v20;
                                                                                                v43 = v42;
                                                                                                __asm_rep_stosd_memset((char *)&v3, 0, 36);
                                                                                                *(int32_t *)v68 = 0;
                                                                                                qt_QVariant((int32_t)&g2208);
                                                                                                v59 = (char *)&g594;
                                                                                                *(int32_t *)(v68 - 4) = 0;
                                                                                                char * v69 = v59; // 0x14c13bf
                                                                                                qt_QVariant((int32_t)v69);
                                                                                                *(int32_t *)(v68 - 8) = 0;
                                                                                                qt_QVariant((int32_t)&g2208);
                                                                                                int32_t * v70 = (int32_t *)(v68 - 12); // 0x14c13df
                                                                                                *v70 = 0;
                                                                                                int32_t v71 = qt_QVariant((int32_t)&g594); // 0x14c13e6
                                                                                                int32_t * v72 = (int32_t *)(v68 - 16); // 0x14c13eb
                                                                                                *v72 = v71;
                                                                                                int32_t v73 = *(int32_t *)v43; // 0x14c13f8
                                                                                                v36 = (char *)v73;
                                                                                                qt_QString_ref();
                                                                                                int32_t v74; // 0x14c0100
                                                                                                *v72 = v74;
                                                                                                sub_13f5104();
                                                                                                int32_t v75 = v68 - 20; // 0x14c1419
                                                                                                int32_t * v76 = (int32_t *)v75; // 0x14c1419
                                                                                                *v70 = v55;
                                                                                                *v72 = v65;
                                                                                                *v76 = v54;
                                                                                                int32_t v77 = sub_a1a86c(); // 0x14c142b
                                                                                                sub_13f5718();
                                                                                                qt_?();
                                                                                                v40 = v67;
                                                                                                v25 = v75;
                                                                                                if ((char)v77 == 0) {
                                                                                                    goto lab_0x14c19b6;
                                                                                                } else {
                                                                                                    // 0x14c1452
                                                                                                    *v76 = (int32_t)"boot-recovery";
                                                                                                    char * v78 = (char *)&g594; // bp-256, 0x14c145f
                                                                                                    sub_a51f50();
                                                                                                    *v76 = 0;
                                                                                                    int32_t v79; // 0x14c0100
                                                                                                    *(int32_t *)(v68 - 24) = v79;
                                                                                                    sub_a525c0();
                                                                                                    *(int32_t *)(v68 - 28) = v54;
                                                                                                    *(int32_t *)(v68 - 32) = (int32_t)"P1";
                                                                                                    qt_QString();
                                                                                                    *(int32_t *)(v68 - 36) = (int32_t)"Huawei";
                                                                                                    int32_t v80 = sub_1802cb0(); // 0x14c14b7
                                                                                                    int32_t * v81 = (int32_t *)(v68 - 40); // 0x14c14be
                                                                                                    *v81 = (int32_t)&g594;
                                                                                                    int32_t v82; // 0x14c0100
                                                                                                    if ((char)v80 == 0) {
                                                                                                        // 0x14c150e
                                                                                                        *v81 = (int32_t)"VIVO";
                                                                                                        int32_t v83 = sub_1802cb0(); // 0x14c1517
                                                                                                        int32_t * v84 = (int32_t *)(v68 - 44); // 0x14c151e
                                                                                                        int32_t v85; // 0x14c0100
                                                                                                        *v84 = v85;
                                                                                                        if ((char)v83 == 0) {
                                                                                                            // 0x14c153d
                                                                                                            *v84 = (int32_t)"recovery\n--wipe_data";
                                                                                                            sub_a51f50();
                                                                                                            int32_t v86 = v68 - 48; // 0x14c154f
                                                                                                            *(int32_t *)v86 = (int32_t)"P1";
                                                                                                            v82 = v86;
                                                                                                        } else {
                                                                                                            // 0x14c1521
                                                                                                            *v84 = (int32_t)"recovery\n--format_data";
                                                                                                            sub_a51f50();
                                                                                                            int32_t v87 = v68 - 48; // 0x14c1533
                                                                                                            *(int32_t *)v87 = (int32_t)&g373;
                                                                                                            v82 = v87;
                                                                                                        }
                                                                                                    } else {
                                                                                                        // 0x14c14c1
                                                                                                        *v81 = (int32_t)"recovery\n--wipe_data_factory_lowlevel";
                                                                                                        sub_a51f50();
                                                                                                        int32_t v88 = v68 - 44; // 0x14c14d3
                                                                                                        *(int32_t *)v88 = (int32_t)"HW";
                                                                                                        v82 = v88;
                                                                                                    }
                                                                                                    int32_t v89 = v82;
                                                                                                    qt_?();
                                                                                                    *(int32_t *)(v89 - 4) = (int32_t)"--reason=android";
                                                                                                    sub_a51f50();
                                                                                                    int32_t * v90 = (int32_t *)(v89 - 8); // 0x14c14f9
                                                                                                    *v90 = (int32_t)"--locale=en_US";
                                                                                                    int32_t v91 = sub_a51f50(); // 0x14c1507
                                                                                                    int32_t * v92 = (int32_t *)(v89 - 12); // 0x14c155f
                                                                                                    *v92 = v91;
                                                                                                    *v90 = 0;
                                                                                                    int32_t * v93; // 0x14c0100
                                                                                                    int32_t v94 = *v93; // 0x14c156e
                                                                                                    int32_t v95; // 0x14c0100
                                                                                                    *v92 = v94 - v95;
                                                                                                    int32_t v96 = sub_a525c0(); // 0x14c157a
                                                                                                    int32_t * v97 = (int32_t *)(v89 - 16); // 0x14c157f
                                                                                                    *v97 = v96;
                                                                                                    int32_t * v98 = (int32_t *)(v89 - 20); // 0x14c1580
                                                                                                    v60 = (char *)&g594;
                                                                                                    *v98 = (int32_t)"Write boot_to cmd data to (%0)[%1:%2] ";
                                                                                                    qt_QString();
                                                                                                    int32_t * v99 = (int32_t *)(v89 - 24); // 0x14c159d
                                                                                                    char * v100 = (char *)&g594; // bp-244, 0x14c15aa
                                                                                                    *v97 = 16;
                                                                                                    *v99 = v95;
                                                                                                    int32_t v101; // 0x14c0100
                                                                                                    *v98 = v101;
                                                                                                    char * v102 = v100; // 0x14c15c7
                                                                                                    int32_t v103 = qt_QString((int32_t)v102); // 0x14c15c7
                                                                                                    int32_t * v104 = (int32_t *)(v89 - 36); // 0x14c15dd
                                                                                                    int32_t v105; // 0x14c0100
                                                                                                    *v104 = v105;
                                                                                                    int32_t v106 = sub_8eb018(); // 0x14c15e0
                                                                                                    int32_t * v107 = (int32_t *)(v89 - 32); // 0x14c15f1
                                                                                                    *v107 = v103;
                                                                                                    int32_t v108; // 0x14c0100
                                                                                                    *v104 = v108;
                                                                                                    sub_15720c0();
                                                                                                    *v104 = v66;
                                                                                                    int32_t v109; // 0x14c0100
                                                                                                    *v107 = v109;
                                                                                                    sub_15720c0();
                                                                                                    *v104 = v65;
                                                                                                    int32_t v110; // 0x14c0100
                                                                                                    *v107 = v110;
                                                                                                    sub_15720c0();
                                                                                                    v7 = (char *)&v36;
                                                                                                    *v99 = 3;
                                                                                                    *v98 = v54;
                                                                                                    *(int32_t *)(v89 - 28) = v101;
                                                                                                    *v107 = 0x1000000 * v106 >> 24;
                                                                                                    int32_t v111; // 0x14c0100
                                                                                                    *v104 = v111;
                                                                                                    sub_156ee70();
                                                                                                    *v104 = v111;
                                                                                                    qt_QVariant((int32_t)&g2208);
                                                                                                    *v107 = 4;
                                                                                                    int32_t v112; // 0x14c0100
                                                                                                    *v104 = v112;
                                                                                                    *(int32_t *)(v89 - 40) = v54;
                                                                                                    sub_1514a78();
                                                                                                    int32_t v113 = v89 - 52; // 0x14c16b0
                                                                                                    qt_QVariant();
                                                                                                    qt_?();
                                                                                                    qt_?();
                                                                                                    qt_?();
                                                                                                    qt_?();
                                                                                                    int32_t * v114; // 0x14c0100
                                                                                                    int32_t v115 = *v114; // 0x14c16e6
                                                                                                    if (v115 != 4) {
                                                                                                        // 0x14c1793
                                                                                                        char * v116; // 0x14c0100
                                                                                                        char v117 = *v116; // 0x14c1793
                                                                                                        if (v117 == 0) {
                                                                                                            if (v115 != 3) {
                                                                                                                // 0x14c18ae
                                                                                                                v39 = v67;
                                                                                                                v24 = v113;
                                                                                                                if (v115 != 2) {
                                                                                                                    goto lab_0x14c1978;
                                                                                                                } else {
                                                                                                                    int32_t * v118 = (int32_t *)v113; // 0x14c18b7
                                                                                                                    *v118 = (int32_t)"data";
                                                                                                                    qt_QString();
                                                                                                                    char * v119 = v78;
                                                                                                                    int32_t * v120 = (int32_t *)(v89 - 56); // 0x14c18cb
                                                                                                                    *v120 = v54;
                                                                                                                    *(int32_t *)&v36 = (int32_t)v119;
                                                                                                                    qt_QString_ref();
                                                                                                                    *v120 = 0;
                                                                                                                    int32_t v121 = sub_181bf50(); // 0x14c18e1
                                                                                                                    int32_t * v122 = (int32_t *)(v89 - 60); // 0x14c18e6
                                                                                                                    *v122 = 0;
                                                                                                                    uint32_t v123 = sub_181ded0(); // 0x14c1900
                                                                                                                    int32_t * v124 = (int32_t *)(v89 - 64); // 0x14c1912
                                                                                                                    *v124 = 0;
                                                                                                                    uint32_t v125 = sub_181ded0(); // 0x14c1919
                                                                                                                    int32_t v126 = v89 - 68; // 0x14c1924
                                                                                                                    *v118 = v65;
                                                                                                                    *(int32_t *)v126 = v125 % 256;
                                                                                                                    *v122 = 0x1000000 * v121 >> 24;
                                                                                                                    *v120 = v101;
                                                                                                                    *(int32_t *)(v89 - 48) = v54;
                                                                                                                    *v124 = v123 % 256;
                                                                                                                    int32_t v127 = sub_14e9720((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208); // 0x14c1959
                                                                                                                    v22 = v126;
                                                                                                                    v49 = v127;
                                                                                                                    goto lab_0x14c195e;
                                                                                                                }
                                                                                                            } else {
                                                                                                                int32_t * v128 = (int32_t *)v113; // 0x14c1802
                                                                                                                *v128 = (int32_t)"data";
                                                                                                                qt_QString();
                                                                                                                char * v129 = v78;
                                                                                                                int32_t * v130 = (int32_t *)(v89 - 56); // 0x14c1816
                                                                                                                *v130 = v54;
                                                                                                                *(int32_t *)&v36 = (int32_t)v129;
                                                                                                                qt_QString_ref();
                                                                                                                *v130 = 0;
                                                                                                                int32_t v131 = sub_181bf50(); // 0x14c182c
                                                                                                                int32_t * v132 = (int32_t *)(v89 - 60); // 0x14c1831
                                                                                                                *v132 = 0;
                                                                                                                uint32_t v133 = sub_181ded0(); // 0x14c184b
                                                                                                                int32_t * v134 = (int32_t *)(v89 - 64); // 0x14c185d
                                                                                                                *v134 = 0;
                                                                                                                uint32_t v135 = sub_181ded0(); // 0x14c1864
                                                                                                                int32_t v136 = v89 - 68; // 0x14c186f
                                                                                                                *(int32_t *)(v89 - 48) = v54;
                                                                                                                *(int32_t *)v136 = v135 % 256;
                                                                                                                *v132 = 0x1000000 * v131 >> 24;
                                                                                                                *v130 = v101;
                                                                                                                *v128 = v65;
                                                                                                                *v134 = v133 % 256;
                                                                                                                int32_t v137 = sub_14e9cec((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208, &g2208); // 0x14c18a4
                                                                                                                v22 = v136;
                                                                                                                v49 = v137;
                                                                                                                goto lab_0x14c195e;
                                                                                                            }
                                                                                                        } else {
                                                                                                            char * v138 = v78;
                                                                                                            *(int32_t *)&v7 = (int32_t)v138;
                                                                                                            qt_QString_ref();
                                                                                                            char * v139 = v59;
                                                                                                            *(int32_t *)&v36 = (int32_t)v139;
                                                                                                            qt_QString_ref();
                                                                                                            *(int32_t *)(v89 - 44) = 0;
                                                                                                            *(int32_t *)(v89 - 48) = v54;
                                                                                                            *(int32_t *)v113 = v65;
                                                                                                            uint32_t v140 = sub_14d52e4((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208); // 0x14c17d5
                                                                                                            qt_?();
                                                                                                            sub_a56540();
                                                                                                            v39 = v140 % 256;
                                                                                                            v24 = v89 - 64;
                                                                                                            goto lab_0x14c1978;
                                                                                                        }
                                                                                                    } else {
                                                                                                        int32_t * v141 = (int32_t *)v113; // 0x14c16f5
                                                                                                        *v141 = (int32_t)"data";
                                                                                                        int32_t v142 = qt_QString(); // 0x14c16fe
                                                                                                        char * v143 = v78;
                                                                                                        int32_t * v144 = (int32_t *)(v89 - 56); // 0x14c1709
                                                                                                        *v144 = v142;
                                                                                                        *(int32_t *)&v36 = (int32_t)v143;
                                                                                                        qt_QString_ref();
                                                                                                        *v144 = 0;
                                                                                                        int32_t v145 = sub_181bf50(); // 0x14c171f
                                                                                                        int32_t * v146 = (int32_t *)(v89 - 60); // 0x14c172a
                                                                                                        int32_t v147; // 0x14c0100
                                                                                                        *v146 = v147;
                                                                                                        sub_181f060();
                                                                                                        *(int32_t *)(v89 - 48) = v54;
                                                                                                        *(int32_t *)(v89 - 64) = v66;
                                                                                                        *v144 = v101;
                                                                                                        *v141 = v65;
                                                                                                        *v146 = v145;
                                                                                                        int32_t v148 = sub_14ea088(&g2208, (int32_t)&g2208, (int32_t)&g2208, &g2208); // 0x14c1769
                                                                                                        qt_?();
                                                                                                        sub_a56540();
                                                                                                        v38 = v148;
                                                                                                        v23 = v89 - 84;
                                                                                                        goto lab_0x14c1973;
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                          lab_0x14c19cd_2:
                                                                                            // 0x14c19cd
                                                                                            v27 = v26;
                                                                                            if (v41 != 0) {
                                                                                                // 0x14c19cd
                                                                                                v14 = v66;
                                                                                                v13 = v65;
                                                                                                v12 = (int32_t *)v26;
                                                                                                v21 = v26;
                                                                                                goto lab_0x14c1a05;
                                                                                            } else {
                                                                                                goto lab_0x14c19d6;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            char v149; // 0x14c063b
                                                                            if (v149 == 0) {
                                                                                int32_t v150; // 0x14c08a9
                                                                                int32_t v151; // 0x14c08ba
                                                                                if (v150 == v151) {
                                                                                    // branch -> 0x14c0e98
                                                                                } else {
                                                                                    while (true) {
                                                                                      lab_0x14c08cb:;
                                                                                        int32_t v152 = v30;
                                                                                        v47 = v46;
                                                                                        __asm_rep_stosd_memset((char *)&v3, 0, 36);
                                                                                        *(int32_t *)v152 = 0;
                                                                                        qt_QVariant((int32_t)&g2208);
                                                                                        v59 = (char *)&g594;
                                                                                        *(int32_t *)(v152 - 4) = 0;
                                                                                        char * v153 = v59; // 0x14c092d
                                                                                        qt_QVariant((int32_t)v153);
                                                                                        *(int32_t *)(v152 - 8) = 0;
                                                                                        qt_QVariant((int32_t)&g2208);
                                                                                        int32_t * v154 = (int32_t *)(v152 - 12); // 0x14c094d
                                                                                        *v154 = 0;
                                                                                        int32_t v155 = qt_QVariant((int32_t)&g594); // 0x14c0954
                                                                                        int32_t * v156 = (int32_t *)(v152 - 16); // 0x14c0959
                                                                                        *v156 = v155;
                                                                                        int32_t v157 = *(int32_t *)v47; // 0x14c0966
                                                                                        v36 = (char *)v157;
                                                                                        qt_QString_ref();
                                                                                        int32_t v158; // 0x14c0100
                                                                                        *v156 = v158;
                                                                                        sub_13f5104();
                                                                                        int32_t v159 = v152 - 20; // 0x14c098d
                                                                                        int32_t * v160 = (int32_t *)v159; // 0x14c098d
                                                                                        *v156 = v52;
                                                                                        *v154 = v51;
                                                                                        *v160 = v50;
                                                                                        int32_t v161 = sub_a1a86c(); // 0x14c099f
                                                                                        sub_13f5718();
                                                                                        qt_?();
                                                                                        v35 = v159;
                                                                                        if ((char)v161 == 0) {
                                                                                            goto lab_0x14c0e81;
                                                                                        } else {
                                                                                            // 0x14c09c6
                                                                                            *v160 = v50;
                                                                                            v7 = (char *)2;
                                                                                            sub_167a590();
                                                                                            *(int32_t *)(v152 - 24) = (int32_t)"SERVICE_RESET_BUILD_DATA";
                                                                                            qt_QString();
                                                                                            int32_t v162; // 0x14c0100
                                                                                            *(int32_t *)(v152 - 28) = v162;
                                                                                            qt_toString();
                                                                                            *(int32_t *)(v152 - 32) = 0;
                                                                                            int32_t v163 = sub_181ded0(); // 0x14c0a3a
                                                                                            int32_t * v164 = (int32_t *)(v152 - 36); // 0x14c0a42
                                                                                            *v164 = v163;
                                                                                            int32_t v165 = qt_QVariant_dtor(); // 0x14c0a45
                                                                                            int32_t * v166 = (int32_t *)(v152 - 40); // 0x14c0a51
                                                                                            *v166 = v165;
                                                                                            sub_132489c();
                                                                                            int32_t v167 = v152 - 44; // 0x14c0a5e
                                                                                            int32_t * v168 = (int32_t *)v167; // 0x14c0a5e
                                                                                            int32_t v169; // 0x14c0100
                                                                                            *v164 = v169;
                                                                                            int32_t v170; // 0x14c0100
                                                                                            *v166 = v170;
                                                                                            *v168 = v53;
                                                                                            sub_1991340();
                                                                                            *v166 = v53;
                                                                                            int32_t v171; // 0x14c0100
                                                                                            *v164 = v171;
                                                                                            *v168 = v52;
                                                                                            sub_1991340();
                                                                                            qt_QString_dtor();
                                                                                            qt_QString_dtor();
                                                                                            qt_QString_dtor();
                                                                                            qt_QString_dtor();
                                                                                            *v168 = 0;
                                                                                            int32_t v172 = sub_181bf50(); // 0x14c0abc
                                                                                            int32_t v173 = v152 - 48; // 0x14c0ac1
                                                                                            int32_t * v174 = (int32_t *)v173;
                                                                                            *v168 = v172;
                                                                                            *v164 = v162;
                                                                                            *v166 = v171;
                                                                                            int32_t v175; // 0x14c0100
                                                                                            *v174 = v175;
                                                                                            sub_1308c50();
                                                                                            int32_t v176; // bp-240, 0x14c0100
                                                                                            int32_t v177 = v176; // 0x14c0ae2
                                                                                            int32_t v178 = *(int32_t *)(v177 + 4); // 0x14c0aee
                                                                                            if (v178 == 0) {
                                                                                                // 0x14c0af8
                                                                                                *v174 = (int32_t)"\n%0";
                                                                                                v36 = (char *)&g594;
                                                                                                qt_QString();
                                                                                                int32_t * v179 = (int32_t *)(v152 - 52); // 0x14c0b1b
                                                                                                *v179 = (int32_t)"mkext4fs_failed!";
                                                                                                qt_QString();
                                                                                                *v179 = v170;
                                                                                                *(int16_t *)v167 = 32;
                                                                                                *v174 = 0;
                                                                                                *(int32_t *)(v152 - 56) = (int32_t)&v60;
                                                                                                qt_QString_arg();
                                                                                                int32_t * v180 = (int32_t *)(v152 - 72); // 0x14c0b56
                                                                                                *v180 = v53;
                                                                                                qt_QVariant((int32_t)&g2208);
                                                                                                *(int32_t *)(v152 - 68) = 6;
                                                                                                *v180 = v52;
                                                                                                *(int32_t *)(v152 - 76) = v50;
                                                                                                sub_1514a78();
                                                                                                qt_QVariant();
                                                                                                qt_?();
                                                                                                qt_?();
                                                                                                qt_?();
                                                                                                qt_?();
                                                                                                sub_a56540();
                                                                                                sub_12181d8();
                                                                                                int32_t v181 = sub_13d5710(); // 0x14c0bce
                                                                                                return result4;
                                                                                            }
                                                                                            // 0x14c0bd3
                                                                                            int32_t * v182; // 0x14c0100
                                                                                            int32_t v183 = *v182; // 0x14c0bd3
                                                                                            if (v183 != 4) {
                                                                                                // 0x14c0c83
                                                                                                char * v184; // 0x14c0100
                                                                                                char v185 = *v184; // 0x14c0c83
                                                                                                if (v185 == 0) {
                                                                                                    if (v183 != 3) {
                                                                                                        // 0x14c0d99
                                                                                                        v31 = v173;
                                                                                                        if (v183 == 2) {
                                                                                                            // 0x14c0dae
                                                                                                            *v174 = (int32_t)"data";
                                                                                                            qt_QString();
                                                                                                            int32_t v186 = v176; // 0x14c0dbc
                                                                                                            int32_t * v187 = (int32_t *)(v152 - 52); // 0x14c0dc2
                                                                                                            *v187 = v50;
                                                                                                            v36 = (char *)v186;
                                                                                                            qt_QString_ref();
                                                                                                            *v187 = 0;
                                                                                                            int32_t v188 = sub_181bf50(); // 0x14c0dd8
                                                                                                            int32_t * v189 = (int32_t *)(v152 - 56); // 0x14c0df0
                                                                                                            *v189 = 0;
                                                                                                            uint32_t v190 = sub_181ded0(); // 0x14c0df7
                                                                                                            int32_t * v191 = (int32_t *)(v152 - 60); // 0x14c0e03
                                                                                                            *v191 = 0;
                                                                                                            uint32_t v192 = sub_181ded0(); // 0x14c0e0a
                                                                                                            int32_t v193 = v152 - 64; // 0x14c0e15
                                                                                                            *v168 = v50;
                                                                                                            *v187 = v171;
                                                                                                            *v174 = v52;
                                                                                                            *v191 = v190 % 256;
                                                                                                            *(int32_t *)v193 = v192 % 256;
                                                                                                            *v189 = 0x1000000 * v188 >> 24;
                                                                                                            int32_t v194 = sub_14e9720((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208); // 0x14c0e44
                                                                                                            v32 = v193;
                                                                                                            v48 = v194;
                                                                                                            goto lab_0x14c0e49;
                                                                                                        } else {
                                                                                                            goto lab_0x14c0d9e;
                                                                                                        }
                                                                                                    } else {
                                                                                                        // 0x14c0cf9
                                                                                                        *v174 = (int32_t)"data";
                                                                                                        qt_QString();
                                                                                                        int32_t v195 = v176; // 0x14c0d07
                                                                                                        int32_t * v196 = (int32_t *)(v152 - 52); // 0x14c0d0d
                                                                                                        *v196 = v53;
                                                                                                        v36 = (char *)v195;
                                                                                                        qt_QString_ref();
                                                                                                        *v196 = 0;
                                                                                                        int32_t v197 = sub_181bf50(); // 0x14c0d23
                                                                                                        int32_t * v198 = (int32_t *)(v152 - 56); // 0x14c0d3b
                                                                                                        *v198 = 0;
                                                                                                        uint32_t v199 = sub_181ded0(); // 0x14c0d42
                                                                                                        int32_t * v200 = (int32_t *)(v152 - 60); // 0x14c0d4e
                                                                                                        *v200 = 0;
                                                                                                        uint32_t v201 = sub_181ded0(); // 0x14c0d55
                                                                                                        int32_t v202 = v152 - 64; // 0x14c0d5a
                                                                                                        *v168 = v50;
                                                                                                        *v196 = v171;
                                                                                                        *v174 = v52;
                                                                                                        *v200 = v199 % 256;
                                                                                                        *(int32_t *)v202 = v201 % 256;
                                                                                                        *v198 = 0x1000000 * v197 >> 24;
                                                                                                        int32_t v203 = sub_14e9cec((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208, &g2208); // 0x14c0d8f
                                                                                                        v32 = v202;
                                                                                                        v48 = v203;
                                                                                                        goto lab_0x14c0e49;
                                                                                                    }
                                                                                                } else {
                                                                                                    // 0x14c0c8c
                                                                                                    *v168 = 0;
                                                                                                    *v174 = v175;
                                                                                                    int32_t v204 = qt_QString(); // 0x14c0c9f
                                                                                                    char * v205 = v59;
                                                                                                    int32_t * v206 = (int32_t *)(v152 - 52); // 0x14c0caa
                                                                                                    *v206 = v204;
                                                                                                    int32_t * v207 = (int32_t *)(v152 - 56); // 0x14c0cab
                                                                                                    *v207 = v204;
                                                                                                    *(int32_t *)&v36 = (int32_t)v205;
                                                                                                    qt_QString_ref();
                                                                                                    *v174 = 0;
                                                                                                    *v206 = v50;
                                                                                                    *v207 = v52;
                                                                                                    int32_t v208 = sub_14d536c((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208); // 0x14c0cce
                                                                                                    qt_?();
                                                                                                    qt_QString();
                                                                                                    v34 = v152 - 68;
                                                                                                    v18 = v208;
                                                                                                    goto lab_0x14c0e61;
                                                                                                }
                                                                                            } else {
                                                                                                // 0x14c0be2
                                                                                                *v174 = (int32_t)"data";
                                                                                                qt_QString();
                                                                                                int32_t v209 = v176; // 0x14c0bf0
                                                                                                int32_t * v210 = (int32_t *)(v152 - 52); // 0x14c0bf6
                                                                                                *v210 = v50;
                                                                                                v36 = (char *)v209;
                                                                                                qt_QString_ref();
                                                                                                *v210 = 0;
                                                                                                int32_t v211 = sub_181bf50(); // 0x14c0c0c
                                                                                                int32_t * v212 = (int32_t *)(v152 - 56); // 0x14c0c2a
                                                                                                int32_t v213; // 0x14c0100
                                                                                                *v212 = v213;
                                                                                                sub_181f060();
                                                                                                *v168 = v50;
                                                                                                *v210 = v171;
                                                                                                *(int32_t *)(v152 - 60) = v53;
                                                                                                *v174 = v52;
                                                                                                *v212 = 0x1000000 * v211 >> 24;
                                                                                                int32_t v214 = sub_14ea088(&g2208, (int32_t)&g2208, (int32_t)&g2208, &g2208); // 0x14c0c66
                                                                                                qt_?();
                                                                                                v33 = v152 - 80;
                                                                                                v17 = v214;
                                                                                                goto lab_0x14c0e51;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            // 0x14c059d
                                                            v3 = (char *)*(int32_t *)(self + 64);
                                                            qt_QString_ref();
                                                            *(int32_t *)(v29 + 4) = (int32_t)&v3;
                                                            *(int32_t *)v29 = 0;
                                                            sub_1510bb4();
                                                            goto lab_0x14c058a;
                                                        }
                                                    }
                                                } else {
                                                    // 0x14c0557
                                                    result4 = sub_15139d0();
                                                    v28 = v29;
                                                    goto lab_0x14c1aa3;
                                                }
                                            } else {
                                                // 0x14c0539
                                                result4 = result3;
                                                v28 = v29;
                                                if (*(char *)(self + 370) != 0) {
                                                    // 0x14c0546
                                                    result4 = sub_1505804();
                                                    v28 = v29;
                                                }
                                                goto lab_0x14c1aa3;
                                            }
                                        } else {
                                            // 0x14c051b
                                            result4 = result3;
                                            v28 = v29;
                                            if (*(char *)(self + 370) != 0) {
                                                // 0x14c0528
                                                result4 = sub_14d15d0();
                                                v28 = v29;
                                            }
                                            goto lab_0x14c1aa3;
                                        }
                                    }
                                } else {
                                    // 0x14c04d2
                                    *(int32_t *)v29 = (int32_t)&v3;
                                    v3 = (char *)&g594;
                                    int32_t v215 = sub_14a1738((int32_t *)&g594); // 0x14c04e1
                                    int32_t v216 = v29 - 4; // 0x14c04e6
                                    *(int32_t *)v216 = v215;
                                    v45 = v216;
                                    goto lab_0x14c058e;
                                }
                            } else {
                                // 0x14c04bc
                                result4 = sub_14f31c4();
                                v28 = v29;
                                goto lab_0x14c1aa3;
                            }
                        } else {
                            // 0x14c04ab
                            result4 = sub_14f1fd0();
                            v28 = v29;
                            goto lab_0x14c1aa3;
                        }
                    } else {
                        // 0x14c0492
                        *(int32_t *)v29 = 1;
                        v16 = sub_14d3140((int32_t)&g2208);
                        goto lab_0x14c04a0;
                    }
                } else {
                    // 0x14c0481
                    result4 = sub_14f6fec();
                    v28 = v29;
                    goto lab_0x14c1aa3;
                }
            }
        }
    } else {
        // 0x14c035e
        v8 = "NORMAL";
        qt_QString();
        v8 = NULL;
        int32_t v217 = (int32_t)&v3; // 0x14c0377
        v44 = v217;
        v15 = sub_14e83dc(v217, 0);
        v19 = &v44;
        goto lab_0x14c037f;
    }
  lab_0x14c0e81:;
    int32_t v218 = v35;
    sub_12181d8();
    int32_t v219 = v47 + 4; // 0x14c0e8c
    v46 = v219;
    v30 = v218;
    int32_t v220 = v53; // 0x14c08c5
    int32_t v221 = v52; // 0x14c08c5
    int32_t v222 = v218; // 0x14c08c5
    if (v219 == sub_13d4d30()) {
        // break -> 0x14c0e98
        goto lab_0x14c0e98_2;
    }
    goto lab_0x14c08cb;
  lab_0x14c0e51:;
    int32_t v223 = v17;
    int32_t v224 = v33;
    sub_a56540();
    qt_?();
    v34 = v224;
    v18 = v223;
    goto lab_0x14c0e61;
  lab_0x14c0e61:;
    uint32_t v225 = v18;
    int32_t v226 = v34;
    v31 = v226;
    if (v225 % 256 == 0) {
        // 0x14c0e69
        sub_a56540();
        sub_12181d8();
        v220 = v53;
        v221 = v52;
        v222 = v226;
        goto lab_0x14c0e98_2;
    }
    goto lab_0x14c0d9e;
  lab_0x14c0d9e:;
    int32_t v227 = v31;
    sub_a56540();
    v35 = v227;
    goto lab_0x14c0e81;
  lab_0x14c0e49:;
    int32_t v228 = v48;
    int32_t v229 = v32;
    v33 = v229 - 24;
    v17 = v228;
    goto lab_0x14c0e51;
  lab_0x14c19b6:
    // 0x14c19b6
    v26 = v25;
    v41 = v40;
    sub_12181d8();
    int32_t v230 = (v43 + 4) % 256;
    v42 = v230;
    v20 = v26;
    v37 = v41;
    if (0x1000000 * v230 >> 24 == sub_13d4d30()) {
        // break -> 0x14c19cd
        goto lab_0x14c19cd_2;
    }
    goto lab_0x14c1361;
  lab_0x14c1973:;
    int32_t v231 = v23;
    uint32_t v232 = v38;
    qt_?();
    v39 = v232 % 256;
    v24 = v231;
    goto lab_0x14c1978;
  lab_0x14c1978:;
    int32_t v233 = v24;
    int32_t v234 = v39;
    qt_?();
    sub_a56540();
    v40 = v234;
    v25 = v233;
    if (v234 == 0) {
        // 0x14c1999
        sub_12181d8();
        v27 = v233;
        goto lab_0x14c19d6;
    }
    goto lab_0x14c19b6;
  lab_0x14c195e:;
    int32_t v235 = v49;
    int32_t v236 = v22;
    sub_a56540();
    v38 = v235;
    v23 = v236 - 24;
    goto lab_0x14c1973;
  lab_0x14c03eb:
    // 0x14c03eb
    if (*(char *)(self + 367) == 0) {
        if (result3 < 8) {
            // 0x14c0469
            *v2 = 1;
        }
        // 0x14c0470
        *(int32_t *)v29 = result3;
        v16 = sub_14b7950();
        goto lab_0x14c04a0;
    } else {
        int32_t * v237 = (int32_t *)v29; // 0x14c03f4
        *v237 = (int32_t)"\n[qPATCH] - VENDOR is not supported for [R/W/E](0)";
        v7 = (char *)&g594;
        sub_14812e0((char *)&g594);
        *(int32_t *)(v29 + 4) = 7;
        *v237 = (int32_t)&v7;
        int32_t v238 = (int32_t)&v3; // 0x14c0421
        *(int32_t *)(v29 - 4) = v238;
        sub_1514a78();
        qt_QVariant();
        qt_?();
        int32_t * v239 = (int32_t *)(v29 - 16); // 0x14c0440
        *v239 = (int32_t)"NORMAL";
        qt_QString();
        int32_t v240 = v29 - 20; // 0x14c044c
        *v239 = 0;
        *(int32_t *)v240 = v238;
        v15 = sub_14e83dc((int32_t)&g2208, (int32_t)&g2208);
        v19 = v240;
        goto lab_0x14c037f;
    }
  lab_0x14c037f:
    // 0x14c037f
    *(int32_t *)(v19 - 4) = v15;
    *(int32_t *)(v19 - 8) = v15;
    // 0x14c20a5
    return qt_?();
  lab_0x14c1aa3:
    // 0x14c1aa3
    if (*(char *)(self + 69) == 0) {
        // 0x14c20a5
        return result4;
    }
    int32_t * v241 = (int32_t *)v28; // 0x14c1ab3
    *v241 = (int32_t)"NORMAL";
    qt_QString();
    int32_t v242 = v28 - 4; // 0x14c1ac1
    *v241 = 0;
    *(int32_t *)v242 = (int32_t)&v3;
    v15 = sub_14e83dc((int32_t)&g2208, (int32_t)&g2208);
    v19 = v242;
    goto lab_0x14c037f;
  lab_0x14c04a0:;
    int32_t v243 = v29 - 4; // 0x14c04a0
    *(int32_t *)v243 = v16;
    result4 = v16;
    v28 = v243;
    goto lab_0x14c1aa3;
  lab_0x14c058e:
    // 0x14c058e
    result4 = qt_?();
    v28 = v45;
    goto lab_0x14c1aa3;
  lab_0x14c058a:;
    int32_t v244 = (int32_t)&v36; // 0x14c058a
    *(int32_t *)(v29 - 4) = v244;
    int32_t v245 = v29 - 8; // 0x14c058b
    *(int32_t *)v245 = v244;
    v45 = v245;
    goto lab_0x14c058e;
  lab_0x14c0e98_2:
    // 0x14c0e98
    sub_1323a30();
    int32_t * v246 = (int32_t *)v222; // 0x14c0ea9
    *v246 = (int32_t)"%0";
    qt_QString();
    int32_t * v247 = (int32_t *)(v222 - 4); // 0x14c0ebe
    *v247 = (int32_t)"OK";
    qt_QString();
    *(int16_t *)(v222 + 4) = 32;
    *v246 = 0;
    *v247 = v221;
    *(int32_t *)(v222 - 8) = v220;
    qt_QString_arg();
    *(int32_t *)(v222 - 20) = 7;
    *(int32_t *)(v222 - 24) = v50;
    *(int32_t *)(v222 - 16) = v51;
    qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
    qt_?();
    qt_?();
    qt_?();
    goto lab_0x14c1a9e;
    // 0x14c125e
    int32_t v256; // 0x14c0100
    int32_t v257 = v256;
    qt_?();
    qt_?();
    qt_?();
    qt_QString();
    result4 = sub_a56540();
    v28 = v257 - 12;
    goto lab_0x14c1aa3;
  lab_0x14c1a9e:
    // 0x14c1a9e
    result4 = sub_13d5710();
    v28 = v222 - 36;
    goto lab_0x14c1aa3;
  lab_0x14c1a05:;
    int32_t v248 = v21;
    int32_t * v249 = v12;
    int32_t v250 = v13;
    int32_t v251 = v14;
    sub_1323a30();
    *v249 = (int32_t)"%0";
    qt_QString();
    int32_t * v252 = (int32_t *)(v248 - 4); // 0x14c1a25
    *v252 = (int32_t)"OK";
    qt_QString();
    *v252 = v250;
    *(int16_t *)(v248 + 4) = 32;
    *v249 = 0;
    *(int32_t *)(v248 - 8) = v251;
    qt_QString_arg();
    *(int32_t *)(v248 - 16) = v55;
    *(int32_t *)(v248 - 20) = 7;
    *(int32_t *)(v248 - 24) = v54;
    qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
    qt_?();
    qt_?();
    qt_?();
    goto lab_0x14c1a9e;
  lab_0x14c19d6:;
    int32_t v253 = v27;
    int32_t v254 = sub_1323a30(); // 0x14c19de
    *(int32_t *)(v253 + 8) = v254;
    *(int32_t *)(v253 + 4) = 11;
    int32_t v255; // 0x14c0100
    *(int32_t *)v253 = v255 + 408;
    qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
    goto lab_0x14c1a9e;
}
