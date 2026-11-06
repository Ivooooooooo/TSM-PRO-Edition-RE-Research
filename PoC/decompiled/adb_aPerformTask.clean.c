/*
 * adb_aPerformTask
 * Entry VA: 0xaabee8
 * Cleaned pseudocode from RetDec v5.0 (best-effort names/comments).
 *
 * Known fields (offsets from the object base):
 *   self +0xD8  : task type
 *
 * Key strings observed:
 *   "Qr Code"
 *   "Choose the operation you want to perform:"
 *   "Select Operation"
 *   "default"
 *   "Test Mode selected"
 *   "Enable ADB selected"
 *   "Dialog cancelled"
 *   "Cancelled by the customer"
 *   "Starting adb-server"
 *   "start-server"
 *   "QR Code selected"
 *   "ADB_TRACE=1"
 *   "Shut Down"
 *   "Rebooting Device Into "
 *   "Rebooting Device"
 *   "removed samsung knox cloud successfully"
 *   "failed to connect"
 *   "aPerformTask"
 *
 * `self` is the original object pointer (this).
 * Calls named `sub_<addr>` could not be resolved to a known method.
 */


// Address range: 0xaabee8 - 0xaad27f
int32_t ADB_aPerformTask(int32_t a1) {
    // 0xaabee8
    int32_t self; // 0xaabee8
    int32_t * v2 = (int32_t *)(self + 216); // 0xaabefc [self->task_type]
    int32_t v3 = *v2; // 0xaabefc
    uint32_t v4 = v3 - 57; // 0xaabf02
    int32_t v5; // 0xaabee8
    int32_t v6; // 0xaabee8
    char * v7; // bp-1332, 0xaabee8
    int32_t v8; // bp-1340, 0xaabee8
    int32_t v9; // bp-1348, 0xaabee8
    int32_t v10; // bp-1524, 0xaabee8
    int32_t v11; // bp-1624, 0xaabee8
    int32_t v12; // bp-1648, 0xaabee8
    char * v13; // bp-1672, 0xaabee8
    int32_t v14; // bp-1696, 0xaabee8
    char v15; // bp-1720, 0xaabee8
    char * v16; // bp-1804, 0xaabee8
    if (v4 > 11 == (v3 != 55)) {
        // 0xaabf0a
        v5 = &v9;
        v6 = (int32_t)&v16;
    } else {
        // 0xaabf13
        v16 = "Qr Code";
        sub_13aff24();
        sub_13aff24();
        sub_13aff24();
        sub_13aff24();
        sub_13aff24();
        sub_13aff24();
        v13 = (char *)&g625;
        if ((char)sub_184aadc() == 0) {
            // 0xaac014
            sub_1537700();
        } else {
            // 0xaac00d
            sub_1290290(3);
        }
        // 0xaac019
        int32_t v17; // bp-1832, 0xaabee8
        int32_t v18 = &v17; // 0xaac019
        int32_t v19 = &v9;
        v17 = v19;
        sub_1290534();
        int32_t v20 = &v8; // 0xaabfab
        *(int32_t *)(v18 - 4) = v20;
        sub_1290534();
        int32_t * v21 = (int32_t *)(v18 - 8); // 0xaabfc0
        *v21 = (int32_t)&v7;
        int32_t v22 = sub_1290534(); // 0xaabfc3
        int32_t * v23 = (int32_t *)(v18 - 12); // 0xaabfce
        *v23 = v22;
        sub_b48fc4();
        sub_b48fc4();
        sub_b48fc4();
        *v23 = (int32_t)"Choose the operation you want to perform:";
        sub_13aff24();
        int32_t * v24 = (int32_t *)(v18 - 16); // 0xaac01f
        *v24 = (int32_t)"Select Operation";
        sub_13aff24();
        int32_t v25 = &v10; // 0xaac06b
        *v23 = v25;
        *v21 = v19;
        *v24 = (int32_t)&v13;
        *(int32_t *)(v18 - 20) = (int32_t)&v14;
        sub_ab5f48((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
        qt_?();
        qt_?();
        int32_t v26 = v14; // 0xaac0a0
        v9 = 2;
        v8 = 0;
        v7 = "default";
        *(int32_t *)(v18 - 36) = v19;
        int32_t v27; // 0xaabee8
        switch (v26) {
            case 1: {
                // 0xaac2ed
                sub_167a980();
                *(int32_t *)(v18 - 40) = (int32_t)"Test Mode selected";
                qt_QString();
                int32_t * v28 = (int32_t *)(v18 - 44); // 0xaac30b
                *v28 = v20;
                qt_QString_dtor();
                *v28 = 0;
                sub_d5c814((int32_t)&g2208);
                *(int32_t *)(v18 - 48) = 16;
                int32_t v29 = sub_d37120((int32_t)&g2208); // 0xaac329
                int32_t v30 = v18 - 52; // 0xaac330
                *(int32_t *)v30 = v4;
                if ((char)v29 == 0 || (char)sub_d5737c() == 0) {
                    // 0xaac333
                    sub_d5cf28();
                    // 0xaac437
                    sub_12906ac();
                    return sub_aad626();
                }
                // 0xaac34a
                sub_d5cf28();
                v27 = v30;
                // break -> 0xaac42a
                break;
            }
            case 2: {
                // 0xaac356
                sub_167a980();
                *(int32_t *)(v18 - 40) = (int32_t)"Enable ADB selected";
                qt_QString();
                int32_t v31 = v18 - 44; // 0xaac374
                *(int32_t *)v31 = v20;
                qt_QString_dtor();
                v27 = v31;
                // break -> 0xaac42a
                break;
            }
            default: {
                // 0xaac0f3
                sub_167a980();
                int32_t v32 = v18 - 40;
                int32_t * v33 = (int32_t *)v32;
                if (v26 != 0) {
                    // 0xaac37f
                    *v33 = (int32_t)"Dialog cancelled";
                    qt_QString();
                    int32_t * v34 = (int32_t *)(v18 - 44); // 0xaac39d
                    *v34 = v4;
                    qt_QString_dtor();
                    qt_QVariant();
                    *v34 = (int32_t)"%0";
                    sub_13aff24();
                    int32_t * v35 = (int32_t *)(v18 - 48); // 0xaac3c1
                    *v35 = (int32_t)"Cancelled by the customer";
                    sub_13aff24();
                    *(int16_t *)v32 = 32;
                    *v34 = 0;
                    *v35 = (int32_t)&v11;
                    *(int32_t *)(v18 - 52) = (int32_t)&v12;
                    qt_QString_arg();
                    *(int32_t *)(v18 - 60) = v19;
                    *(int32_t *)(v18 - 64) = 3;
                    *(int32_t *)(v18 - 68) = v25;
                    qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                    qt_?();
                    qt_?();
                    // 0xaac423
                    qt_?();
                    // 0xaac437
                    sub_12906ac();
                    return sub_aad626();
                }
                // 0xaac101
                *v33 = (int32_t)"Starting adb-server";
                int32_t v36 = qt_QString(); // 0xaac114
                int32_t * v37 = (int32_t *)(v18 - 44); // 0xaac11f
                *v37 = v36;
                qt_QString_dtor();
                *v37 = (int32_t)"start-server";
                sub_13aff24();
                int32_t * v38 = (int32_t *)(v18 - 48); // 0xaac136
                *v38 = 0;
                sub_13aff24();
                int32_t * v39 = (int32_t *)(v18 - 52); // 0xaac142
                *v37 = v19;
                int32_t v40 = &v11; // 0xaac14d
                *v38 = v40;
                *v39 = v25;
                sub_117239c((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                sub_a563d4();
                qt_?();
                qt_?();
                *v39 = (int32_t)"start-server";
                sub_13aff24();
                int32_t * v41 = (int32_t *)(v18 - 56); // 0xaac187
                *v41 = 0;
                sub_13aff24();
                int32_t * v42 = (int32_t *)(v18 - 60); // 0xaac199
                *v39 = v25;
                *v41 = v40;
                *v42 = v19;
                sub_117239c((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                sub_a563d4();
                qt_?();
                qt_?();
                *v42 = v19;
                v9 = 2;
                v8 = 0;
                v7 = "default";
                sub_167a980();
                *(int32_t *)(v18 - 64) = (int32_t)"QR Code selected";
                int32_t v43 = qt_QString(); // 0xaac211
                int32_t * v44 = (int32_t *)(v18 - 68); // 0xaac21c
                *v44 = v43;
                qt_QString_dtor();
                *v44 = (int32_t)&g219;
                v15 = 0;
                sub_13aff24();
                *v44 = (int32_t)&v15;
                *(int32_t *)(v18 - 72) = v19;
                int32_t v45 = sub_aabeac((int32_t)&g2208); // 0xaac247
                int32_t v46 = v18 - 76; // 0xaac24c
                *(int32_t *)v46 = v45;
                int32_t v47 = v18 - 80; // 0xaac24d
                int32_t * v48 = (int32_t *)v47; // 0xaac24d
                *v48 = v45;
                qt_?();
                v27 = v47;
                if (v15 == 0) {
                    // 0xaac262
                    qt_QVariant();
                    *v48 = (int32_t)"%0";
                    sub_13aff24();
                    int32_t * v49 = (int32_t *)(v18 - 84); // 0xaac286
                    *v49 = (int32_t)"Cancelled by the customer";
                    sub_13aff24();
                    *(int16_t *)v46 = 32;
                    *v48 = 0;
                    *v49 = v40;
                    *(int32_t *)(v18 - 88) = (int32_t)&v12;
                    qt_QString_arg();
                    *(int32_t *)(v18 - 96) = v19;
                    *(int32_t *)(v18 - 100) = 3;
                    *(int32_t *)(v18 - 104) = v25;
                    qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                    qt_?();
                    qt_?();
                    // 0xaac423
                    qt_?();
                    // 0xaac437
                    sub_12906ac();
                    return sub_aad626();
                }
                // break -> 0xaac42a
                break;
            }
        }
        // 0xaac42a
        sub_12906ac();
        v5 = v19;
        v6 = v27;
    }
    // 0xaac447
    *(int32_t *)v6 = v5;
    v9 = 2;
    v8 = 0;
    v7 = "default";
    sub_167a980();
    int32_t * v50 = (int32_t *)(v6 - 4); // 0xaac48e
    *v50 = 0;
    int32_t v51 = qt_toVariant(); // 0xaac495
    int32_t * v52 = (int32_t *)(v6 - 8); // 0xaac4a0
    *v52 = v51;
    qt_QString_dtor();
    *v52 = (int32_t)"ADB_TRACE=1";
    sub_79d430(0, 0, 0);
    *v52 = (int32_t)&v11;
    *v50 = self + 192;
    qt_QStringList_init();
    int32_t v53; // bp-1556, 0xaabee8
    *v52 = (int32_t)&v53;
    int32_t v54 = sub_12a4e44((int32_t)&g2208); // 0xaac4f7
    int32_t v55 = v6 - 12; // 0xaac4fc
    int32_t * v56 = (int32_t *)v55;
    *v56 = v54;
    char * v57 = (char *)&g594; // bp-1764, 0xaac503
    int32_t * v58 = (int32_t *)(self + 8); // 0xaac517
    int32_t v59 = *v58; // 0xaac517
    int32_t * v60 = v56; // 0xaac51d
    int32_t v61 = v59; // 0xaac51d
    int32_t v62 = v55; // 0xaac51d
    if (*(int32_t *)(self + 12) != v59) {
        // 0xaac51f
        sub_12a19b4();
        v61 = *v58;
        *v56 = self + 16 + 4 * v61;
        int32_t v63 = qt_QString_assign(); // 0xaac540
        v62 = v6 - 16;
        v60 = (int32_t *)v62;
        *v60 = v63;
    }
    // 0xaac546
    sub_115acc4();
    int32_t * v64 = (int32_t *)(v62 + 12); // 0xaac55d
    *v64 = 1;
    int32_t * v65 = (int32_t *)(v62 + 8); // 0xaac565
    *v65 = 1;
    int32_t * v66 = (int32_t *)(v62 + 4); // 0xaac56d
    *v66 = 0;
    char v67; // bp-1516, 0xaabee8
    v10 = &v67;
    v67 = 0;
    int32_t v68 = 0; // bp-1492, 0xaac59c
    int32_t v69 = &v68; // bp-1500, 0xaac5a3
    *v60 = (int32_t)&v10;
    int32_t v70 = sub_1151a3c((int32_t *)v10, 0, 0, (int32_t)&g2208); // 0xaac657
    int32_t v71; // 0xaabee8
    int32_t v72; // 0xaabee8
    int32_t v73; // 0xaabee8
    int32_t v74; // 0xaabee8
    int32_t v75; // 0xaac670
    int32_t * v76; // 0xaac730
    int32_t * v77; // 0xaac731
    int32_t v78; // 0xaac749
    if ((char)v70 == 0) {
        goto lab_0xaad226;
    } else {
        // 0xaac664
        v75 = &v12;
        *v60 = v75;
        *v66 = (int32_t)&v69;
        sub_13aa03c();
        *v64 = 1;
        *v65 = 1;
        *v66 = v75;
        *v60 = v5;
        int32_t v79 = sub_114a268((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208); // 0xaac695
        int32_t v80 = v62 - 16; // 0xaac69a
        qt_?();
        if ((char)v79 != 0) {
            // 0xaac718
            *(int32_t *)(v62 - 12) = 1;
            *(int32_t *)v80 = v5;
            sub_114d848((int32_t)&g2208, (int32_t)&g2208);
            int32_t v81 = v62 - 20; // 0xaac730
            v76 = (int32_t *)v81;
            *v76 = v5;
            int32_t v82 = v62 - 24; // 0xaac731
            v77 = (int32_t *)v82;
            *v77 = v5;
            int32_t v83 = 0; // bp-1712, 0xaac73c
            v15 = &v83;
            v78 = sub_11481d0();
            int32_t v84 = 0; // bp-1688, 0xaac764
            v14 = &v84;
            int32_t v85 = 0; // bp-1664, 0xaac781
            v13 = (char *)&v85;
            int32_t v86 = *v2; // 0xaac78e
            g2200 = v86 - 3;
            v74 = 0;
            v73 = v82;
            int32_t v87; // bp-1736, 0xaabee8
            int32_t v88; // bp-1740, 0xaabee8
            char * v89; // bp-1744, 0xaabee8
            switch (v86) {
                case 3: {
                    // 0xaacdac
                    qt_QVariant();
                    *v77 = (int32_t)"%0";
                    sub_13aff24();
                    int32_t * v90 = (int32_t *)(v62 - 28);
                    int32_t v91; // 0xaabee8
                    if (g595 != NULL) {
                        // 0xaacefc
                        *v90 = (int32_t)"-p";
                        sub_13aff24();
                        *v90 = 1;
                        int32_t v92; // bp-1748, 0xaabee8
                        *(int32_t *)(v62 - 32) = (int32_t)&v92;
                        int32_t v93 = qt_contains(); // 0xaacf3a
                        *(int32_t *)(v62 - 36) = v61;
                        int32_t v94 = v62 - 40; // 0xaacf48
                        int32_t * v95 = (int32_t *)v94;
                        *v95 = v61;
                        int32_t * v96; // 0xaabee8
                        int32_t v97; // 0xaabee8
                        if ((char)v93 == 0) {
                            // 0xaacf5c
                            *(int32_t *)&v89 = (int32_t)v57;
                            qt_QString_ref();
                            v96 = v95;
                            v97 = v94;
                        } else {
                            // 0xaacf4b
                            *v95 = (int32_t)"Shut Down";
                            int32_t v98 = sub_13aff24(); // 0xaacf54
                            int32_t v99 = v62 - 44; // 0xaacf59
                            int32_t * v100 = (int32_t *)v99;
                            *v100 = v98;
                            v96 = v100;
                            v97 = v99;
                        }
                        int32_t * v101 = (int32_t *)(v97 + 8); // 0xaacf73
                        int32_t v102 = (int32_t)&v89; // 0xaacf73
                        *v101 = v102;
                        int32_t * v103 = (int32_t *)(v97 + 4); // 0xaacf77
                        *v103 = (int32_t)"Rebooting Device Into ";
                        int32_t v104 = &v88; // 0xaacf7f
                        *v96 = v104;
                        sub_199e428();
                        *(int16_t *)(v97 + 12) = 32;
                        *v101 = 0;
                        *v103 = v104;
                        int32_t v105; // bp-1752, 0xaabee8
                        *v96 = (int32_t)&v105;
                        qt_QString_arg();
                        *(int32_t *)(v97 - 12) = 0;
                        int32_t v106 = &v87; // 0xaacfc7
                        *(int32_t *)(v97 - 16) = v106;
                        *(int32_t *)(v97 - 8) = v75;
                        qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                        int32_t v107 = v97 - 28; // 0xaacfd3
                        qt_?();
                        qt_?();
                        qt_?();
                        qt_?();
                        qt_?();
                        *(int32_t *)v107 = (int32_t)&v57;
                        int32_t v108 = sub_1158f60(&g2208); // 0xaad014
                        int32_t * v109 = (int32_t *)(v97 - 32); // 0xaad01f
                        *v109 = v108;
                        qt_QVariant();
                        *v109 = (int32_t)"%0";
                        sub_13aff24();
                        int32_t * v110 = (int32_t *)(v97 - 36); // 0xaad03e
                        *v110 = (int32_t)"OK";
                        sub_13aff24();
                        *v110 = v104;
                        *(int16_t *)v107 = 32;
                        *v109 = 0;
                        *(int32_t *)(v97 - 40) = v102;
                        qt_QString_arg();
                        int32_t v111 = v97 - 56; // 0xaad07a
                        *(int32_t *)(v97 - 52) = 7;
                        *(int32_t *)v111 = v106;
                        *(int32_t *)(v97 - 48) = v75;
                        qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                        v91 = v111;
                    } else {
                        // 0xaacdbe
                        *v90 = (int32_t)"Rebooting Device";
                        sub_13aff24();
                        int32_t v112 = &v88; // 0xaacdf5
                        *v90 = v112;
                        *(int16_t *)v81 = 32;
                        *v77 = 0;
                        int32_t v113 = (int32_t)&v89; // 0xaace0e
                        *(int32_t *)(v62 - 32) = v113;
                        qt_QString_arg();
                        *(int32_t *)(v62 - 44) = 0;
                        *(int32_t *)(v62 - 40) = v75;
                        int32_t v114 = &v87; // 0xaace31
                        *(int32_t *)(v62 - 48) = v114;
                        qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                        qt_?();
                        qt_?();
                        qt_?();
                        *(int32_t *)(v62 - 60) = (int32_t)&g219;
                        sub_13aff24();
                        int32_t v115 = v62 - 64; // 0xaace6d
                        *(int32_t *)v115 = v75;
                        int32_t v116 = sub_1158f60(&g2208); // 0xaace73
                        int32_t * v117 = (int32_t *)(v62 - 68); // 0xaace78
                        *v117 = v116;
                        qt_?();
                        qt_QVariant();
                        *v117 = (int32_t)"%0";
                        sub_13aff24();
                        int32_t * v118 = (int32_t *)(v62 - 72); // 0xaacea0
                        *v118 = (int32_t)"OK";
                        sub_13aff24();
                        *v118 = v112;
                        *(int16_t *)v115 = 32;
                        *v117 = 0;
                        *(int32_t *)(v62 - 76) = v113;
                        qt_QString_arg();
                        int32_t v119 = v62 - 92; // 0xaaceda
                        *(int32_t *)(v62 - 84) = v75;
                        *(int32_t *)(v62 - 88) = 7;
                        *(int32_t *)v119 = v114;
                        qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                        v91 = v119;
                    }
                    // 0xaad091
                    qt_?();
                    qt_?();
                    qt_?();
                    *(int32_t *)(self + 224) = 3;
                    v73 = v91 - 12;
                    goto lab_0xaad0bb;
                }
                case 8: {
                    // 0xaac7a7
                    *v77 = 0;
                    sub_13aff24();
                    int32_t v120 = v62 - 28; // 0xaac7b5
                    *v76 = v75;
                    *v77 = 17;
                    *(int32_t *)v120 = v5;
                    sub_aae9f8((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                    v72 = v120;
                    goto lab_0xaacd1d;
                }
                case 15: {
                    // 0xaac7d1
                    *v77 = 0;
                    sub_13aff24();
                    int32_t v121 = v62 - 28; // 0xaac7df
                    *v76 = v75;
                    *v77 = 13;
                    *(int32_t *)v121 = v5;
                    sub_aae9f8((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                    v72 = v121;
                    goto lab_0xaacd1d;
                }
                case 30: {
                    // 0xaac7fb
                    *v77 = 0;
                    sub_13aff24();
                    int32_t v122 = v62 - 28; // 0xaac809
                    *v76 = v75;
                    *v77 = 25;
                    *(int32_t *)v122 = v5;
                    sub_aae9f8((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                    v72 = v122;
                    goto lab_0xaacd1d;
                }
                case 31: {
                    // 0xaac825
                    *v77 = 0;
                    sub_13aff24();
                    int32_t v123 = v62 - 28; // 0xaac833
                    *v76 = v75;
                    *v77 = 23;
                    *(int32_t *)v123 = v5;
                    sub_aae9f8((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                    v72 = v123;
                    goto lab_0xaacd1d;
                }
                case 32: {
                    // 0xaac84f
                    *v77 = 0;
                    sub_13aff24();
                    int32_t v124 = v62 - 28; // 0xaac85d
                    *v76 = v75;
                    *v77 = 24;
                    *(int32_t *)v124 = v5;
                    sub_aae9f8((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                    v72 = v124;
                    goto lab_0xaacd1d;
                }
                case 33: {
                    // 0xaac879
                    *v77 = 0;
                    sub_13aff24();
                    int32_t v125 = v62 - 28; // 0xaac887
                    *v76 = v75;
                    *v77 = 9;
                    *(int32_t *)v125 = v5;
                    sub_aae9f8((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                    v72 = v125;
                    goto lab_0xaacd1d;
                }
                case 34: {
                    // 0xaac8a3
                    *v77 = 0;
                    sub_13aff24();
                    int32_t v126 = v62 - 28; // 0xaac8b1
                    *v76 = v75;
                    *v77 = 8;
                    *(int32_t *)v126 = v5;
                    sub_aae9f8((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                    v72 = v126;
                    goto lab_0xaacd1d;
                }
                case 35: {
                    // 0xaac8cd
                    *v77 = 0;
                    sub_13aff24();
                    int32_t v127 = v62 - 28; // 0xaac8db
                    *v76 = v75;
                    *v77 = 11;
                    *(int32_t *)v127 = v5;
                    sub_aae9f8((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                    v72 = v127;
                    goto lab_0xaacd1d;
                }
                case 36: {
                    // 0xaac8f7
                    *v77 = 0;
                    sub_13aff24();
                    int32_t v128 = v62 - 28; // 0xaac905
                    *v76 = v75;
                    *v77 = 10;
                    *(int32_t *)v128 = v5;
                    sub_aae9f8((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                    v72 = v128;
                    goto lab_0xaacd1d;
                }
                case 37: {
                    // 0xaac921
                    *v77 = 0;
                    sub_13aff24();
                    int32_t v129 = v62 - 28; // 0xaac92f
                    *v76 = v75;
                    *v77 = 12;
                    *(int32_t *)v129 = v5;
                    sub_aae9f8((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                    v72 = v129;
                    goto lab_0xaacd1d;
                }
                case 39: {
                    // 0xaac975
                    *v77 = 0;
                    sub_13aff24();
                    int32_t v130 = v62 - 28; // 0xaac983
                    *v76 = v75;
                    *v77 = 14;
                    *(int32_t *)v130 = v5;
                    sub_aae9f8((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                    v72 = v130;
                    goto lab_0xaacd1d;
                }
                case 40: {
                    // 0xaac94b
                    *v77 = 0;
                    sub_13aff24();
                    int32_t v131 = v62 - 28; // 0xaac959
                    *v76 = v75;
                    *v77 = 15;
                    *(int32_t *)v131 = v5;
                    sub_aae9f8((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                    v72 = v131;
                    goto lab_0xaacd1d;
                }
                case 41: {
                    // 0xaacd27
                    *v77 = v5;
                    sub_aa8058(0x1000000 * v78 >> 24);
                    goto lab_0xaacd83;
                }
                case 42: {
                    // 0xaacd3d
                    *v76 = 2;
                    // 0xaacd6d
                    *v77 = v5;
                    sub_ab6098(0x1000000 * v78 >> 24, (int32_t)&g2208);
                    goto lab_0xaacda5;
                }
                case 43: {
                    // 0xaacd47
                    *v76 = 8;
                    // 0xaacd6d
                    *v77 = v5;
                    sub_ab6098(0x1000000 * v78 >> 24, (int32_t)&g2208);
                    goto lab_0xaacda5;
                }
                case 44: {
                    // 0xaacd65
                    *v76 = 4;
                    // 0xaacd6d
                    *v77 = v5;
                    sub_ab6098(0x1000000 * v78 >> 24, (int32_t)&g2208);
                    goto lab_0xaacda5;
                }
                case 45: {
                    // 0xaacd33
                    *v76 = 0;
                    // 0xaacd6d
                    *v77 = v5;
                    sub_ab6098(0x1000000 * v78 >> 24, (int32_t)&g2208);
                    goto lab_0xaacda5;
                }
                case 46: {
                    // 0xaacd51
                    *v76 = 3;
                    // 0xaacd6d
                    *v77 = v5;
                    sub_ab6098(0x1000000 * v78 >> 24, (int32_t)&g2208);
                    goto lab_0xaacda5;
                }
                case 47: {
                    // 0xaacd79
                    *v77 = v5;
                    sub_aadfe4(0x1000000 * v78 >> 24);
                    goto lab_0xaacd83;
                }
                case 48: {
                    goto lab_0xaacd9b;
                }
                case 49: {
                    // 0xaacd93
                    v74 = 1;
                    goto lab_0xaacd9b;
                }
                case 50: {
                    // 0xaacd5b
                    *v76 = 5;
                    // 0xaacd6d
                    *v77 = v5;
                    sub_ab6098(0x1000000 * v78 >> 24, (int32_t)&g2208);
                    goto lab_0xaacda5;
                }
                case 55: {
                    // 0xaac99f
                    *v77 = 0;
                    sub_13aff24();
                    int32_t v132 = v62 - 28; // 0xaac9ad
                    *v76 = v75;
                    *v77 = 0;
                    *(int32_t *)v132 = v5;
                    sub_aae9f8((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                    v72 = v132;
                    goto lab_0xaacd1d;
                }
                case 56: {
                    // 0xaac9c9
                    *v77 = 0;
                    sub_13aff24();
                    int32_t v133 = v62 - 28; // 0xaac9d7
                    *v76 = v75;
                    *v77 = 7;
                    *(int32_t *)v133 = v5;
                    sub_aae9f8((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                    v72 = v133;
                    goto lab_0xaacd1d;
                }
                case 57: {
                    // 0xaac9f3
                    *v77 = 0;
                    sub_13aff24();
                    int32_t v134 = v62 - 28; // 0xaaca01
                    *v76 = v75;
                    *v77 = 1;
                    *(int32_t *)v134 = v5;
                    sub_aae9f8((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                    v72 = v134;
                    goto lab_0xaacd1d;
                }
                case 58: {
                    // 0xaaca1d
                    *v77 = 0;
                    sub_13aff24();
                    int32_t v135 = v62 - 28; // 0xaaca2b
                    *v76 = v75;
                    *v77 = 2;
                    *(int32_t *)v135 = v5;
                    sub_aae9f8((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                    v72 = v135;
                    goto lab_0xaacd1d;
                }
                case 59: {
                    // 0xaaca47
                    *v77 = 0;
                    sub_13aff24();
                    int32_t v136 = v62 - 28; // 0xaaca55
                    *v76 = v75;
                    *v77 = 3;
                    *(int32_t *)v136 = v5;
                    sub_aae9f8((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                    v72 = v136;
                    goto lab_0xaacd1d;
                }
                case 60: {
                    // 0xaaca71
                    *v77 = 0;
                    sub_13aff24();
                    int32_t v137 = v62 - 28; // 0xaaca7f
                    *v76 = v75;
                    *v77 = 4;
                    *(int32_t *)v137 = v5;
                    sub_aae9f8((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                    v72 = v137;
                    goto lab_0xaacd1d;
                }
                case 61: {
                    // 0xaaca9b
                    *v77 = 0;
                    sub_13aff24();
                    int32_t v138 = v62 - 28; // 0xaacaa9
                    *v76 = v75;
                    *v77 = 5;
                    *(int32_t *)v138 = v5;
                    sub_aae9f8((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                    v72 = v138;
                    goto lab_0xaacd1d;
                }
                case 62: {
                    // 0xaacac5
                    *v77 = 0;
                    sub_13aff24();
                    int32_t v139 = v62 - 28; // 0xaacad3
                    *v76 = v75;
                    *v77 = 6;
                    *(int32_t *)v139 = v5;
                    sub_aae9f8((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                    v72 = v139;
                    goto lab_0xaacd1d;
                }
                case 63: {
                    // 0xaacaef
                    *v77 = 0;
                    sub_13aff24();
                    *v76 = v75;
                    *v77 = 3;
                    *(int32_t *)(v62 - 28) = v5;
                    sub_aae9f8((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                    int32_t v140 = v62 - 40; // 0xaacb14
                    qt_?();
                    *(int32_t *)v140 = 0;
                    int32_t v141 = sub_115369c((int32_t)&g2208); // 0xaacb27
                    int32_t * v142 = (int32_t *)(v62 - 44); // 0xaacb2c
                    *v142 = v141;
                    qt_QVariant();
                    *v142 = (int32_t)"%0";
                    sub_13aff24();
                    int32_t * v143 = (int32_t *)(v62 - 48); // 0xaacb4d
                    *v143 = (int32_t)"removed samsung knox cloud successfully";
                    sub_13aff24();
                    *(int16_t *)v140 = 32;
                    *v142 = 0;
                    *v143 = (int32_t)&v88;
                    *(int32_t *)(v62 - 52) = (int32_t)&v89;
                    qt_QString_arg();
                    int32_t v144 = v62 - 68; // 0xaacb87
                    *(int32_t *)(v62 - 60) = v75;
                    *(int32_t *)(v62 - 64) = 2;
                    *(int32_t *)v144 = (int32_t)&v87;
                    qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                    v71 = v144;
                    goto lab_0xaacc5e;
                }
                case 64: {
                    // 0xaacba9
                    *v77 = 0;
                    sub_13aff24();
                    *v76 = v75;
                    *v77 = 4;
                    *(int32_t *)(v62 - 28) = v5;
                    sub_aae9f8((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                    int32_t v145 = v62 - 40; // 0xaacbce
                    qt_?();
                    *(int32_t *)v145 = 0;
                    sub_115369c((int32_t)&g2208);
                    int32_t * v146 = (int32_t *)(v62 - 44); // 0xaacbe6
                    *v146 = v61;
                    qt_QVariant();
                    *v146 = (int32_t)"%0";
                    sub_13aff24();
                    int32_t * v147 = (int32_t *)(v62 - 48); // 0xaacc07
                    *v147 = (int32_t)"removed samsung knox cloud successfully";
                    sub_13aff24();
                    *(int16_t *)v145 = 32;
                    *v146 = 0;
                    *v147 = (int32_t)&v88;
                    *(int32_t *)(v62 - 52) = (int32_t)&v89;
                    qt_QString_arg();
                    int32_t v148 = v62 - 68; // 0xaacc41
                    *(int32_t *)(v62 - 60) = v75;
                    *(int32_t *)(v62 - 64) = 2;
                    *(int32_t *)v148 = (int32_t)&v87;
                    qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                    v71 = v148;
                    goto lab_0xaacc5e;
                }
                case 65: {
                    // 0xaacc7a
                    *v77 = 0;
                    sub_13aff24();
                    int32_t v149 = v62 - 28; // 0xaacc88
                    *v76 = v75;
                    *v77 = 18;
                    *(int32_t *)v149 = v5;
                    sub_aae9f8((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                    v72 = v149;
                    goto lab_0xaacd1d;
                }
                case 66: {
                    // 0xaacca1
                    *v77 = 0;
                    sub_13aff24();
                    int32_t v150 = v62 - 28; // 0xaaccaf
                    *v76 = v75;
                    *v77 = 19;
                    *(int32_t *)v150 = v5;
                    sub_aae9f8((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                    v72 = v150;
                    goto lab_0xaacd1d;
                }
                case 67: {
                    // 0xaaccc8
                    *v77 = 0;
                    sub_13aff24();
                    int32_t v151 = v62 - 28; // 0xaaccd6
                    *v76 = v75;
                    *v77 = 20;
                    *(int32_t *)v151 = v5;
                    sub_aae9f8((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                    v72 = v151;
                    goto lab_0xaacd1d;
                }
                case 68: {
                    // 0xaaccef
                    *v77 = 0;
                    sub_13aff24();
                    int32_t v152 = v62 - 28; // 0xaaccfd
                    *v76 = v75;
                    *v77 = 21;
                    *(int32_t *)v152 = v5;
                    sub_aae9f8((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                    v72 = v152;
                    goto lab_0xaacd1d;
                }
                default: {
                    goto lab_0xaad0bb;
                }
            }
        } else {
            // 0xaac6b4
            *(int32_t *)v80 = v75;
            v12 = 2;
            sub_167a980();
            *(int32_t *)(v62 - 20) = (int32_t)"failed to connect";
            qt_QString();
            *(int32_t *)(v62 - 24) = v75;
            qt_QString_dtor();
            goto lab_0xaad226;
        }
    }
  lab_0xaad226:
    // 0xaad226
    sub_1140a8c();
    sub_115b040();
    sub_12b0418();
    qt_?();
    qt_?();
    sub_12a5760();
    sub_d29058();
    sub_18d5480();
    return sub_aad626();
  lab_0xaacd9b:
    // 0xaacd9b
    *v76 = v74;
    *v77 = v5;
    sub_aa8d18(0x1000000 * v78 >> 24, (int32_t)&g2208);
    goto lab_0xaacda5;
  lab_0xaad0bb:
    // 0xaad0bb
    v12 = 2;
    *(int32_t *)v73 = v75;
    sub_167a980();
    *(int32_t *)(v73 - 4) = (int32_t)"aPerformTask";
    qt_QString();
    *(int32_t *)(v73 - 8) = 0;
    int32_t v154 = qt_toVariant(); // 0xaad11e
    int32_t * v155 = (int32_t *)(v73 - 12); // 0xaad129
    *v155 = v154;
    qt_QString_dtor();
    *v155 = (int32_t)"sess1";
    sub_18debfc();
    int32_t v156 = &v14; // 0xaad14a
    *v155 = v156;
    *(int32_t *)(v73 - 16) = v75;
    int32_t v157 = sub_114778c((int32_t)&g2208, (int32_t)&g2208); // 0xaad151
    *(int32_t *)(v73 - 20) = v157;
    int32_t * v158 = (int32_t *)(v73 - 24); // 0xaad157
    *v158 = v157;
    sub_18dab44();
    *v158 = (int32_t)"my-phone";
    sub_18debfc();
    *v158 = v156;
    *(int32_t *)(v73 - 28) = v75;
    int32_t v159 = sub_1147b50((int32_t)&g2208, (int32_t)&g2208); // 0xaad17b
    *(int32_t *)(v73 - 32) = v159;
    int32_t * v160 = (int32_t *)(v73 - 36); // 0xaad181
    *v160 = v159;
    sub_18dab44();
    sub_1147f2c();
    sub_114aed4();
    *v160 = v75;
    v12 = 2;
    sub_167a980();
    *(int32_t *)(v73 - 40) = (int32_t)"aPerformTask";
    qt_QString();
    *(int32_t *)(v73 - 44) = 0;
    *(int32_t *)(v73 - 48) = qt_toVariant();
    qt_QString_dtor();
    sub_18dab44();
    sub_18dab44();
    sub_18dab44();
    goto lab_0xaad226;
  lab_0xaacd1d:
    // 0xaacd1d
    qt_?();
    v73 = v72 - 12;
    goto lab_0xaad0bb;
  lab_0xaacd83:
    // 0xaacd83
    v73 = v62 - 28;
    goto lab_0xaad0bb;
  lab_0xaacda5:
    // 0xaacda5
    *(int32_t *)(v62 - 28) = v61;
    int32_t v153 = v62 - 32; // 0xaacda6
    *(int32_t *)v153 = v61;
    v73 = v153;
    goto lab_0xaad0bb;
  lab_0xaacc5e:
    // 0xaacc5e
    qt_?();
    qt_?();
    v72 = v71;
    goto lab_0xaacd1d;
}
