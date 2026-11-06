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
/*
 * exynos_ePerformTask
 * Entry VA: 0x1188f30
 * Cleaned pseudocode from RetDec v5.0 (best-effort names/comments).
 *
 * Known fields (offsets from the object base):
 *   self +0x10  : task type
 *   self +0x167 : read-forbidden flag
 *
 * Key strings observed:
 *   "sPerformTask"
 *   "infoDone"
 *   "FAILED TO READ INFO"
 *   "port_op_wipe_fmfs lock(P1)"
 *   "Reset to factory default (P1-MTP)"
 *   "Reset to factory default (P1-DM)"
 *   "Reading INFO"
 *
 * `self` is the original object pointer (this).
 * Calls named `sub_<addr>` could not be resolved to a known method.
 */


// Address range: 0x1188f30 - 0x118a06c
int32_t Exynos_ePerformTask(void) {
    char * v1 = (char *)2; // bp-412, 0x1188f4c
    sub_167a590();
    int32_t * v2 = (int32_t *)(*(int32_t *)qt_QString() + 12); // 0x1188fa4
    *v2 = *v2 + 1;
    qt_qDebug();
    qt_intToVariant();
    qt_QString_dtor();
    qt_QString_dtor();
    int32_t result = qt_QString_dtor(); // 0x1188ff8
    int32_t self; // 0x1188f30
    int32_t * v4 = (int32_t *)(self + 16); // 0x1188ffd [self->task_type]
    if (*v4 == 22) {
        // 0x118a064
        return result;
    }
    // 0x1189007
    qt_QStringList_init();
    int32_t v5 = *v4; // 0x1189019
    if (v5 == 95 || v5 == 11) {
        if (v5 != 95) {
            // 0x1189070
            sub_118cf20((int32_t)(v5 == 11));
            // 0x118a064
            return sub_d28f10();
        }
        // 0x118903e
        v1 = (char *)self;
        qt_QString_ref();
        sub_11975ec((int32_t *)&v1);
        qt_QString();
        // 0x118a064
        return sub_d28f10();
    }
    if (v5 == 8) {
        // 0x1189070
        sub_118cf20((int32_t)(v5 == 11));
        // 0x118a064
        return sub_d28f10();
    }
    // 0x1189083
    qt_QString();
    int32_t v6 = sub_157e330(); // 0x11890b1
    qt_QString();
    char * v7; // bp-588, 0x1188f30
    char * v8; // bp-708, 0x1188f30
    if ((char)v6 == 0) {
        goto lab_0x11891e8;
    } else {
        // 0x11890d5
        if (*v4 != 8) {
            goto lab_0x11891e8;
        } else {
            // 0x11890df
            if ((char)sub_1151a3c((int32_t *)&v7, 3, 1, 1) == 0) {
                // 0x11891dc
                sub_1140ad0();
                // 0x118a064
                return sub_d28f10();
            }
            // 0x1189114
            sub_115acc4();
            sub_13aed10();
            int32_t v9 = (int32_t)&v1; // 0x1189155
            int32_t v10 = sub_114a268(v9, (int32_t)&v8, 1); // 0x118915a
            qt_QString();
            if ((char)v10 != 0) {
                // 0x1189186
                sub_1157624(180);
                sub_13b8f80();
                if ((char)sub_114d848(v9, 1) != 0) {
                    // 0x11891cf
                    sub_1153fc4();
                    goto lab_0x1189179;
                } else {
                    // 0x11891c3
                    if (*(int32_t *)((int32_t)v1 + 4) != 0) {
                        goto lab_0x1189179;
                    } else {
                        // 0x11891cf
                        sub_1153fc4();
                        goto lab_0x1189179;
                    }
                }
            } else {
                goto lab_0x1189179;
            }
        }
    }
  lab_0x1189555_2:;
    // 0x1189555
    char v11; // 0x1188f30
    unsigned char v12 = v11;
    int32_t v13; // 0x1188ff6
    int32_t * v14; // 0x1188f30
    *v14 = v13;
    v8 = (char *)2;
    sub_167a980();
    int32_t v15; // 0x1188f30
    *(int32_t *)(v15 - 28) = (int32_t)"sPerformTask";
    qt_QString();
    int32_t * v16 = (int32_t *)(v15 - 32); // 0x11895ab
    *v16 = (int32_t)"infoDone";
    int32_t v17 = qt_QString(); // 0x11895b2
    int32_t * v18 = (int32_t *)(v15 - 36); // 0x11895c1
    *v18 = (int32_t)v12;
    qt_intToVariant();
    int32_t * v19 = (int32_t *)(v15 - 40); // 0x11895c9
    *v19 = v17;
    qt_QString_dtor();
    if (v12 != 0) {
        goto lab_0x1189608;
    } else {
        // 0x11895de
        *v19 = 4;
        int32_t v20 = sub_19a6e20(); // 0x11895e5
        *(int32_t *)v20 = (int32_t)"FAILED TO READ INFO";
        *v16 = 0;
        *v18 = (int32_t)&g632;
        *v19 = v20;
        sub_19a75b0();
        goto lab_0x1189608;
    }
  lab_0x11891e8:
    // 0x11891e8
    if ((char)sub_11886a0() == 0) {
        // 0x118a064
        return sub_d28f10();
    }
    // 0x11891f7
    v1 = (char *)2;
    sub_167a590();
    int32_t v21 = *(int32_t *)qt_QString(); // 0x1189249
    v7 = (char *)v21;
    int32_t * v22 = (int32_t *)(v21 + 12); // 0x1189257
    *v22 = *v22 + 1;
    qt_qDebug();
    qt_QString_dtor();
    qt_QString_dtor();
    qt_QString_dtor();
    int32_t v23 = *v4; // 0x118929c
    if (v23 == 1) {
        // 0x118a064
        return sub_d28f10();
    }
    int32_t v24 = (int32_t)&v1; // 0x118921d
    char * v25 = (char *)&g594; // bp-724, 0x11892ab
    if (v23 < 8) {
        // 0x11892ba
        if (*(char *)(self + 359) != 0) { // self->read_forbidden
            // 0x11892c7
            v7 = (char *)&g594;
            sub_14812e0("\n[qPATCH] - VENDOR is not supported for [R/W/E](0)");
            sub_119c87c(v24, (int32_t)&v7, 7);
            qt_QVariant();
            qt_QString();
        }
        // 0x1189e25
        sub_a560c8();
        // 0x118a064
        return sub_d28f10();
    }
    char * v26 = (char *)(self + 8); // 0x1189322
    *v26 = 0;
    int32_t * v27 = (int32_t *)(self + 12); // 0x1189326
    *v27 = 0;
    qt_?();
    int32_t v28 = *v4; // 0x118933a
    char * v29; // bp-840, 0x1188f30
    if (v28 != 8) {
        if (v28 != 11) {
            if (v28 != 95) {
                if (v28 == 15) {
                    // 0x118979e
                    v7 = (char *)&g594;
                    sub_14812e0("port_op_wipe_fmfs lock(P1)");
                    int32_t v30 = (int32_t)&v7; // 0x11897d8
                    sub_119c87c(v24, v30, 3);
                    qt_QVariant();
                    qt_QString();
                    v1 = (char *)2;
                    sub_167a590();
                    qt_QString();
                    qt_toString();
                    qt_QString_dtor();
                    if ((char)sub_1802cb0() == 0) {
                        // 0x11898d6
                        v29 = (char *)v5;
                        if ((char)sub_1802cb0() != 0) {
                            // 0x11898ed
                            v29 = "Reset to factory default (P1-MTP)";
                            v7 = (char *)&g594;
                            sub_14812e0("Reset to factory default (P1-MTP)");
                            v29 = (char *)&v7;
                            sub_119c87c(v24, v30, 3);
                            qt_QVariant();
                            qt_QString();
                            sub_a55e20();
                            sub_b524d4();
                            char * v31; // bp-720, 0x1188f30
                            *(int32_t *)&v31 = (int32_t)v25;
                            sub_a560c8();
                            sub_a560c8();
                            v1 = (char *)2;
                            sub_167a590();
                            qt_QString();
                            sub_1324ac0();
                            qt_QString_dtor();
                            sub_a55e20();
                            sub_b524d4();
                            char * v32; // bp-716, 0x1188f30
                            *(int32_t *)&v32 = (int32_t)v31;
                            sub_a560c8();
                            sub_a560c8();
                            v1 = (char *)2;
                            sub_167a590();
                            qt_QString();
                            sub_1324ac0();
                            qt_QString_dtor();
                            sub_a55e20();
                            sub_b524d4();
                            char * v33; // bp-712, 0x1188f30
                            *(int32_t *)&v33 = (int32_t)v32;
                            sub_a560c8();
                            sub_a560c8();
                            v1 = (char *)2;
                            sub_167a590();
                            qt_QString();
                            sub_1324ac0();
                            qt_QString_dtor();
                            sub_a55e20();
                            sub_b524d4();
                            *(int32_t *)&v8 = (int32_t)v33;
                            sub_a560c8();
                            sub_a560c8();
                            v1 = (char *)2;
                            sub_167a590();
                            qt_QString();
                            sub_1324ac0();
                            qt_QString_dtor();
                            sub_a55e20();
                            sub_b524d4();
                            *(int32_t *)&v7 = (int32_t)v8;
                            sub_a560c8();
                            sub_a560c8();
                            v1 = (char *)2;
                            sub_167a590();
                            qt_QString();
                            sub_1324ac0();
                            qt_QString_dtor();
                            sub_a55e20();
                            sub_b524d4();
                            *(int32_t *)&v25 = (int32_t)v1;
                            *(int32_t *)&v1 = (int32_t)v7;
                            sub_a560c8();
                            sub_a560c8();
                            v1 = (char *)2;
                            sub_167a590();
                            qt_QString();
                            sub_1324ac0();
                            qt_QString_dtor();
                        }
                    } else {
                        // 0x1189872
                        v7 = (char *)&g594;
                        sub_14812e0("Reset to factory default (P1-DM)");
                        v29 = (char *)&v1;
                        sub_119c87c(v24, v30, 3);
                        qt_QVariant();
                        qt_QString();
                        if (*(char *)(self + 61) != 0) {
                            // 0x11898c2
                            sub_1188390(1);
                        }
                    }
                }
                goto lab_0x1189e0f;
            } else {
                // 0x11896ea
                if ((char)sub_1190aa4(1) == 0) {
                    goto lab_0x1189e0f;
                } else {
                    // 0x1189701
                    qt_QVariant();
                    qt_QString();
                    qt_QString();
                    qt_QString_arg();
                    qt_qDebug((int32_t *)&v7, 2, (int32_t *)&v1);
                    goto lab_0x1189774;
                }
            }
        } else {
            // 0x1189652
            if ((char)sub_1190aa4(0) == 0) {
                goto lab_0x1189e0f;
            } else {
                // 0x1189669
                qt_QVariant();
                qt_QString();
                qt_QString();
                qt_QString_arg();
                qt_qDebug((int32_t *)&v7, 2, (int32_t *)&v1);
                goto lab_0x1189774;
            }
        }
    } else {
        // 0x1189346
        v1 = (char *)2;
        sub_167a590();
        qt_QString();
        qt_QString_dtor();
        if ((char)sub_1802cb0() != 0) {
            // 0x11893bd
            if ((char)sub_1190aa4(0) != 0) {
                // 0x11893d4
                if ((char)sub_1151a3c((int32_t *)&v7, 3, 1, 1) != 0) {
                    // 0x1189403
                    sub_115acc4();
                    sub_13aed10();
                    int32_t v34 = sub_114a268(v24, v13, 1); // 0x1189449
                    qt_QString();
                    if ((char)v34 != 0) {
                        // 0x118946c
                        bool v35; // 0x1188f30
                        char v36 = v35; // 0x1189028
                        v29 = (char *)sub_1157624(180);
                        int32_t v37 = v5; // 0x118947b
                        int32_t v38 = 0; // 0x118947b
                        int32_t v39 = (int32_t)&v29; // 0x118947b
                        v15 = v39;
                        int32_t v40 = v38;
                        int32_t v41 = v37;
                        v8 = (char *)2;
                        *(int32_t *)v15 = v13;
                        sub_167a980();
                        *(int32_t *)(v15 - 4) = (int32_t)"sPerformTask";
                        qt_QString();
                        *(int32_t *)(v15 - 8) = (int32_t)"Reading INFO";
                        int32_t v42 = qt_QString(); // 0x11894e0
                        int32_t * v43 = (int32_t *)(v15 - 12); // 0x11894e5
                        *v43 = v40;
                        qt_toVariant();
                        int32_t * v44 = (int32_t *)(v15 - 16); // 0x11894f0
                        *v44 = v42;
                        qt_QString_dtor();
                        *v43 = 1;
                        *v44 = v24;
                        int32_t v45 = sub_114d848((int32_t)&g2208, (int32_t)&g2208); // 0x118950d
                        char v46 = v45;
                        *(int32_t *)(v15 - 20) = v41;
                        int32_t v47 = v15 - 24; // 0x1189515
                        v14 = (int32_t *)v47;
                        *v14 = v41;
                        int32_t v48 = v41; // 0x1189516
                        char * v49; // 0x1189518
                        int32_t v50; // 0x1189518
                        int32_t v51; // 0x118951e
                        if (v46 != 0) {
                            // 0x1189518
                            v49 = v1;
                            v50 = (int32_t)v49;
                            v51 = *(int32_t *)(v50 + 4);
                            v48 = v50;
                            v11 = v46;
                            if (v51 != 0) {
                                goto lab_0x1189555_2;
                            }
                        }
                        int32_t v52 = v48;
                        *v14 = 0x1388;
                        sub_13b8f80();
                        while ((char)sub_1154d2c() != 0) {
                            // 0x1189543
                            v37 = v52;
                            v38 = v40 + 1;
                            v39 = v47;
                            v11 = v36;
                            if (v40 == 4) {
                                goto lab_0x1189555_2;
                            }
                            v15 = v39;
                            v40 = v38;
                            v41 = v37;
                            v8 = (char *)2;
                            *(int32_t *)v15 = v13;
                            sub_167a980();
                            *(int32_t *)(v15 - 4) = (int32_t)"sPerformTask";
                            qt_QString();
                            *(int32_t *)(v15 - 8) = (int32_t)"Reading INFO";
                            v42 = qt_QString();
                            v43 = (int32_t *)(v15 - 12);
                            *v43 = v40;
                            qt_toVariant();
                            v44 = (int32_t *)(v15 - 16);
                            *v44 = v42;
                            qt_QString_dtor();
                            *v43 = 1;
                            *v44 = v24;
                            v45 = sub_114d848((int32_t)&g2208, (int32_t)&g2208);
                            v46 = v45;
                            *(int32_t *)(v15 - 20) = v41;
                            v47 = v15 - 24;
                            v14 = (int32_t *)v47;
                            *v14 = v41;
                            v48 = v41;
                            if (v46 != 0) {
                                // 0x1189518
                                v49 = v1;
                                v50 = (int32_t)v49;
                                v51 = *(int32_t *)(v50 + 4);
                                v48 = v50;
                                v11 = v46;
                                if (v51 != 0) {
                                    goto lab_0x1189555_2;
                                }
                            }
                            // 0x1189524
                            v52 = v48;
                            *v14 = 0x1388;
                            sub_13b8f80();
                        }
                    }
                    // 0x118962e
                    sub_115b040();
                }
                // 0x1189639
                sub_1140ad0();
                // 0x1189e25
                sub_a560c8();
                // 0x118a064
                return sub_d28f10();
            }
        }
        goto lab_0x1189e0f;
    }
  lab_0x1189e0f:
    // 0x1189e0f
    *v26 = 0;
    *v27 = 0;
    qt_?();
    // 0x1189e25
    sub_a560c8();
    // 0x118a064
    return sub_d28f10();
  lab_0x1189179:
    // 0x1189179
    sub_115b040();
    // 0x11891dc
    sub_1140ad0();
    // 0x118a064
    return sub_d28f10();
  lab_0x1189774:
    // 0x1189774
    qt_QString();
    qt_QString();
    qt_QString();
    goto lab_0x1189e0f;
  lab_0x1189608:
    // 0x1189608
    sub_1153fc4();
    sub_115b040();
    sub_1140ad0();
    goto lab_0x1189e0f;
}
/*
 * fastboot_fPerformTask
 * Entry VA: 0xd5e70c
 * Cleaned pseudocode from RetDec v5.0 (best-effort names/comments).
 *
 * Known fields (offsets from the object base):
 *   self +0xD8  : task type
 *   self +0x114 : result/state
 *
 * Key strings observed:
 *   "fPerformTask"
 *   "m_extra_info"
 *   "mubl"
 *   "fastboot"
 *   "Handshake Device"
 *   "please release volume buttons quickly"
 *   "please release volume buttons then press ok"
 *   "Warning"
 *   "already boot slot is "
 *   "failed to detect current slot!"
 *   "HuaweiKey"
 *   "Bootloader is locked not supported"
 *   "%0//**//%1"
 *   "Method"
 *   "Generic"
 *   "Xiaomi"
 *   "Huawei"
 *   "Key ..."
 *
 * `self` is the original object pointer (this).
 * Calls named `sub_<addr>` could not be resolved to a known method.
 */


// Address range: 0xd5e70c - 0xd608c4
int32_t Fastboot_fPerformTask(int32_t a1) {
    // 0xd5e70c
    int32_t self; // 0xd5e70c
    int32_t * v2 = (int32_t *)(self + 216); // 0xd5e718 [self->task_type]
    if (*v2 == 22) {
        // 0xd5e727
        Fastboot_specialTask(self);
        *(int32_t *)(self + 276) = 3; // self->state
        // 0xd608bc
        int32_t result; // 0xd5e70c
        return result;
    }
    // 0xd5e741
    qt_QStringList_init();
    char v3 = 0; // bp-329, 0xd5e766
    int32_t v4; // bp-60, 0xd5e70c
    int32_t v5 = sub_12a4d94(&v4); // 0xd5e770
    int32_t v6; // bp-328, 0xd5e70c
    int32_t v7 = v6; // 0xd5e775
    int32_t v8 = v5; // bp-384, 0xd5e77b
    int32_t v9 = &v8; // 0xd5e77b
    char * v10 = (char *)&g594; // bp-324, 0xd5e77c
    char * v11 = (char *)&g594; // bp-320, 0xd5e786
    int32_t * v12 = &v8; // 0xd5e796
    int32_t v13 = v9; // 0xd5e796
    if (*(int32_t *)(v7 + 12) != *(int32_t *)(v7 + 8)) {
        int32_t v14 = v9; // 0xd5e79f
        if ((char)sub_184aadc() != 0) {
            int32_t v15 = *(int32_t *)(v6 + 4); // 0xd5e7c7
            v8 = v15;
            sub_12a15f0(v15);
            int32_t v16; // bp-388, 0xd5e70c
            v14 = &v16;
        }
        int32_t v17 = v6; // 0xd5e7a1
        *(int32_t *)v14 = v17 + 16 + 4 * *(int32_t *)(v17 + 8);
        qt_QString_assign();
        v13 = v14 - 4;
        v12 = (int32_t *)v13;
    }
    int32_t v18 = 2; // bp-224, 0xd5e7e1
    int32_t v19 = &v18; // 0xd5e7ff
    *v12 = v19;
    sub_167a980();
    int32_t * v20 = (int32_t *)(v13 - 4); // 0xd5e822
    *v20 = (int32_t)"fPerformTask";
    qt_QString();
    int32_t * v21 = (int32_t *)(v13 - 8); // 0xd5e831
    *v21 = (int32_t)"m_extra_info";
    qt_QString();
    int32_t v22 = (int32_t)&v10; // 0xd5e83d
    int32_t * v23 = (int32_t *)(v13 - 12); // 0xd5e846
    *v23 = v22;
    int32_t v24 = qt_toString(); // 0xd5e849
    int32_t * v25 = (int32_t *)(v13 - 16); // 0xd5e84e
    int32_t v26 = *(int32_t *)v24; // 0xd5e84f
    char * v27 = (char *)v26; // bp-240, 0xd5e857
    int32_t * v28 = (int32_t *)(v26 + 12); // 0xd5e85d
    *v28 = *v28 + 1;
    *v21 = (int32_t)&v6;
    int32_t v29 = (int32_t)&v27; // 0xd5e864
    int32_t v30; // bp-252, 0xd5e70c
    int32_t v31 = &v30; // 0xd5e86a
    *v25 = v31;
    *v23 = v29;
    sub_19962cc();
    qt_QString_dtor();
    qt_QString_dtor();
    qt_QString_dtor();
    sub_110a7dc();
    *v20 = 1;
    *v21 = 1;
    *v23 = 1;
    *v25 = v19;
    int32_t v32; // 0xd5e70c
    int32_t v33; // 0xd5e70c
    int32_t v34; // 0xd5e70c
    int32_t v35; // 0xd5e70c
    int32_t v36; // bp-264, 0xd5e70c
    int32_t v37; // bp-276, 0xd5e70c
    int32_t v38; // 0xd5e8e4
    int32_t * v39; // 0xd5e8ea
    int32_t * v40; // 0xd5ecb0
    int32_t * v41; // 0xd5eccd
    int32_t v42; // 0xd5ecce
    int32_t * v43; // 0xd5ecce
    if ((char)sub_10fb640() == 0) {
        goto lab_0xd603e1;
    } else {
        // 0xd5e8c4
        *v25 = (int32_t)"mubl";
        sub_13afeac();
        *v25 = 1;
        *(int32_t *)(v13 - 20) = v29;
        v38 = qt_contains();
        int32_t * v44 = (int32_t *)(v13 - 24); // 0xd5e8e9
        *v44 = v22;
        int32_t v45 = v13 - 28; // 0xd5e8ea
        v39 = (int32_t *)v45;
        *v39 = v22;
        qt_?();
        *v39 = 500;
        sub_13b8f80();
        if (self != 7) {
            // 0xd5eca2
            *v39 = (int32_t)"fastboot";
            sub_13afeac();
            v40 = (int32_t *)(v13 - 32);
            *v39 = 1;
            *v40 = v29;
            int32_t v46 = qt_contains(); // 0xd5ecc2
            v41 = (int32_t *)(v13 - 36);
            *v41 = v31;
            v42 = v13 - 40;
            v43 = (int32_t *)v42;
            *v43 = v31;
            qt_?();
            if ((char)v46 != 0) {
                // 0xd5ecee
                *v41 = 1;
                *v43 = v19;
                if ((char)sub_1112368() != 0) {
                    goto lab_0xd5ece0;
                } else {
                    goto lab_0xd603e1;
                }
            } else {
                goto lab_0xd5ece0;
            }
        } else {
            int32_t v47 = *v2; // 0xd5e916
            *v39 = v19;
            int32_t v48 = v47 & -256 | (int32_t)(v47 == 15); // 0xd5e930
            *v44 = (int32_t)(v47 == 15 | v47 == 8 | v47 == 99);
            v33 = v48;
            v32 = v29;
            v35 = v45;
            v34 = 0;
            if ((char)sub_11115cc() != 0) {
                // 0xd5e94c
                *v39 = 500;
                sub_13b8f80();
                *v39 = (int32_t)"fastboot";
                sub_13afeac();
                int32_t * v49 = (int32_t *)(v13 - 32); // 0xd5e96c
                *v44 = 0;
                *v39 = v29;
                *v49 = v19;
                sub_111ab48();
                qt_?();
                sub_1323910();
                *v49 = (int32_t)"%0";
                sub_13afeac();
                int32_t * v50 = (int32_t *)(v13 - 36); // 0xd5e9a8
                *v50 = (int32_t)"Handshake Device";
                sub_13afeac();
                int32_t v51 = &v36; // 0xd5e9bb
                *(int16_t *)v45 = 32;
                *v49 = 0;
                *v50 = v51;
                int32_t v52 = &v37; // 0xd5e9da
                *(int32_t *)(v13 - 40) = v52;
                qt_QString_arg();
                *(int32_t *)(v13 - 52) = 0;
                *(int32_t *)(v13 - 48) = v29;
                int32_t * v53 = (int32_t *)(v13 - 56); // 0xd5e9fd
                *v53 = v31;
                qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                qt_?();
                qt_?();
                qt_?();
                int32_t * v54 = (int32_t *)(v13 - 68); // 0xd5ea21
                *v54 = 0x1388;
                sub_13b8f80();
                *v53 = 0;
                *(int32_t *)(v13 - 60) = 1;
                int32_t v55 = v13 - 64; // 0xd5ea43
                *(int32_t *)v55 = 1;
                *v54 = v19;
                if ((char)sub_10fb640() == 0) {
                    goto lab_0xd603e1;
                } else {
                    // 0xd5ea5b
                    sub_1323910();
                    *v54 = (int32_t)"%0";
                    sub_13afeac();
                    int32_t * v56 = (int32_t *)(v13 - 72); // 0xd5ea7b
                    *v56 = (int32_t)"OK";
                    sub_13afeac();
                    *(int16_t *)v55 = 32;
                    *v54 = 0;
                    *v56 = v51;
                    *(int32_t *)(v13 - 76) = v52;
                    qt_QString_arg();
                    *(int32_t *)(v13 - 88) = 7;
                    *(int32_t *)(v13 - 84) = v29;
                    int32_t * v57 = (int32_t *)(v13 - 92); // 0xd5eaca
                    *v57 = v31;
                    qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                    int32_t v58 = v13 - 104; // 0xd5ead2
                    qt_?();
                    qt_?();
                    qt_?();
                    *v57 = 0;
                    *(int32_t *)(v13 - 96) = 0;
                    int32_t v59 = v13 - 100; // 0xd5eb04
                    int32_t v60 = &v3; // 0xd5eb04
                    *(int32_t *)v59 = v60;
                    int32_t * v61 = (int32_t *)v58; // 0xd5eb0e
                    *v61 = v19;
                    int32_t v62 = sub_10fee88(); // 0xd5eb11
                    v33 = v48;
                    v32 = v51;
                    v35 = v58;
                    v34 = 0;
                    if ((char)v62 != 0) {
                        goto lab_0xd5ed43;
                    } else {
                        // 0xd5eb20
                        sub_1323910();
                        *v61 = (int32_t)"%0";
                        sub_13afeac();
                        int32_t * v63 = (int32_t *)(v13 - 108); // 0xd5eb40
                        *v63 = (int32_t)"please release volume buttons quickly";
                        sub_13afeac();
                        *(int16_t *)v59 = 32;
                        *v61 = 0;
                        *v63 = v51;
                        *(int32_t *)(v13 - 112) = v52;
                        qt_QString_arg();
                        *(int32_t *)(v13 - 124) = 3;
                        *(int32_t *)(v13 - 120) = v29;
                        *(int32_t *)(v13 - 128) = v31;
                        qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                        qt_?();
                        qt_?();
                        qt_?();
                        int32_t * v64 = (int32_t *)(v13 - 140); // 0xd5ebb9
                        *v64 = (int32_t)"please release volume buttons then press ok";
                        v36 = 0;
                        sub_13afeac();
                        int32_t * v65 = (int32_t *)(v13 - 144); // 0xd5ebd1
                        *v65 = (int32_t)"Warning";
                        sub_13afeac();
                        *v64 = v29;
                        *v65 = v31;
                        *(int32_t *)(v13 - 148) = v51;
                        sub_d64f88((int32_t)&g2208, (int32_t)&g2208);
                        qt_?();
                        qt_?();
                        int32_t * v66 = (int32_t *)(v13 - 160); // 0xd5ec0b
                        *v66 = 4000;
                        sub_13b8f80();
                        *v66 = (int32_t)"fastboot";
                        sub_13afeac();
                        int32_t v67 = v13 - 164; // 0xd5ec2b
                        int32_t * v68 = (int32_t *)v67; // 0xd5ec2b
                        int32_t * v69 = (int32_t *)(v13 - 156); // 0xd5ec2c
                        *v69 = 0;
                        *v66 = v29;
                        *v68 = v19;
                        sub_111ab48();
                        qt_?();
                        *v68 = 4000;
                        sub_13b8f80();
                        int32_t * v70 = (int32_t *)(v13 - 152); // 0xd5ec53
                        *v70 = 0;
                        *v69 = 1;
                        *v66 = 1;
                        *v68 = v19;
                        if ((char)sub_10fb640() == 0) {
                            goto lab_0xd603e1;
                        } else {
                            // 0xd5ec7b
                            *v70 = 0;
                            *v69 = 0;
                            *v68 = v19;
                            *v66 = v60;
                            sub_10fee88();
                            v33 = v48;
                            v32 = v29;
                            v35 = v67;
                            v34 = v62;
                            goto lab_0xd5ed43;
                        }
                    }
                }
            } else {
                goto lab_0xd5ed43;
            }
        }
    }
  lab_0xd603e1:
    // 0xd603e1
    sub_110a8e0();
    qt_?();
    qt_?();
    sub_12a59e8();
    // 0xd608bc
    return sub_d294d4();
  lab_0xd5ece0:
    // 0xd5ece0
    *v39 = 0;
    *v40 = 0;
    *v41 = (int32_t)&v3;
    *v43 = v19;
    if ((char)v38 != 0) {
        // 0xd5ed07
        v33 = v22;
        v32 = v19;
        v35 = v42;
        v34 = sub_1111e18();
    } else {
        // 0xd5ed25
        v33 = v22;
        v32 = v19;
        v35 = v42;
        v34 = sub_10fee88();
    }
    goto lab_0xd5ed43;
  lab_0xd5ed43:;
    uint32_t v71 = *v2; // 0xd5ed4f
    int32_t * v72; // 0xd5e70c
    int32_t * v73; // 0xd5e70c
    int32_t * v74; // 0xd5e70c
    int32_t * v75; // 0xd5e70c
    int32_t * v76; // 0xd5e70c
    int32_t v77; // 0xd5e70c
    int32_t v78; // 0xd5e70c
    int32_t v79; // 0xd5e70c
    int32_t v80; // 0xd5e70c
    int32_t v81; // 0xd5e70c
    char * v82; // bp-288, 0xd5e70c
    char * v83; // bp-300, 0xd5e70c
    char * v84; // bp-304, 0xd5e70c
    char * v85; // bp-308, 0xd5e70c
    int32_t v86; // 0xd5fb2d
    int32_t v87; // 0xd5f66d
    int32_t v88; // 0xd5fa13
    if (v71 == 12) {
        char * v89 = (char *)&g594; // bp-316, 0xd5fa09
        int32_t v90 = v35 + 4;
        int32_t * v91 = (int32_t *)v90;
        v88 = (int32_t)&v89;
        *v91 = v88;
        int32_t * v92 = (int32_t *)v35;
        *v92 = v19;
        if ((char)sub_110e67c((int32_t *)v89) != 0) {
            // 0xd5faf2
            v74 = v91;
            v75 = v92;
            v86 = v35;
            if (g595 == NULL) {
                goto lab_0xd5fbfe;
            } else {
                // 0xd5fb12
                *v91 = 0;
                *v92 = v22;
                int32_t v93 = sub_1800f70(); // 0xd5fb25
                int32_t * v94 = (int32_t *)(v35 - 4); // 0xd5fb2c
                *v94 = v33;
                v86 = v35 - 8;
                int32_t * v95 = (int32_t *)v86;
                *v95 = v33;
                v74 = v94;
                v75 = v95;
                if (v93 != 0) {
                    goto lab_0xd5fbfe;
                } else {
                    // 0xd5fb34
                    sub_1323910();
                    *v95 = (int32_t)"%0";
                    sub_13afeac();
                    int32_t * v96 = (int32_t *)(v35 - 12); // 0xd5fb4f
                    *v94 = v22;
                    *v95 = (int32_t)"already boot slot is ";
                    int32_t v97 = &v36; // 0xd5fb62
                    *v96 = v97;
                    sub_199e428();
                    *(int16_t *)v35 = 32;
                    *v94 = 0;
                    *v96 = (int32_t)&v37;
                    *v95 = v97;
                    qt_QString_arg();
                    *(int32_t *)(v35 - 20) = v29;
                    *(int32_t *)(v35 - 24) = 2;
                    *(int32_t *)(v35 - 28) = v31;
                    qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                    qt_?();
                    qt_?();
                    qt_?();
                    int32_t * v98 = (int32_t *)(v35 - 40); // 0xd5fbce
                    *v98 = (int32_t)&g215;
                    sub_13afeac();
                    *(int32_t *)(v35 - 36) = 1;
                    *v98 = v29;
                    *(int32_t *)(v35 - 44) = v19;
                    sub_111ab48();
                    // 0xd5ff97
                    qt_?();
                    // 0xd603dc
                    qt_?();
                    goto lab_0xd603e1;
                }
            }
        } else {
            // 0xd5fa2d
            sub_1323910();
            *v92 = (int32_t)"%0";
            sub_13afeac();
            int32_t * v99 = (int32_t *)(v35 - 4); // 0xd5fa4d
            *v99 = (int32_t)"failed to detect current slot!";
            sub_13afeac();
            *(int16_t *)v90 = 32;
            *v92 = 0;
            *v99 = (int32_t)&v36;
            *(int32_t *)(v35 - 8) = (int32_t)&v37;
            qt_QString_arg();
            *(int32_t *)(v35 - 16) = v29;
            *(int32_t *)(v35 - 20) = 3;
            *(int32_t *)(v35 - 24) = v31;
            qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
            qt_?();
            qt_?();
            qt_?();
            int32_t * v100 = (int32_t *)(v35 - 36); // 0xd5fac4
            *v100 = (int32_t)&g215;
            sub_13afeac();
            *(int32_t *)(v35 - 32) = 1;
            *v100 = v29;
            *(int32_t *)(v35 - 40) = v19;
            sub_111ab48();
            // 0xd5ff97
            qt_?();
            // 0xd603dc
            qt_?();
            goto lab_0xd603e1;
        }
    } else {
        if (v71 < 13) {
            // 0xd5ed60
            if (v71 == 4) {
                // 0xd5edd2
                *(int32_t *)(self + 276) = (char)v34 == 0 ? 1 : 3; // self->state
                goto lab_0xd603e1;
            } else {
                if (v71 < 5) {
                    if (v71 == 3) {
                        int32_t * v101 = (int32_t *)v35;
                        if (g595 != NULL) {
                            // 0xd60375
                            *v101 = (int32_t)"fastboot";
                            sub_13afeac();
                            int32_t * v102 = (int32_t *)(v35 - 4); // 0xd60383
                            *v101 = 1;
                            *v102 = v29;
                            int32_t v103 = qt_contains(); // 0xd60391
                            int32_t * v104 = (int32_t *)(v35 - 8); // 0xd60396
                            *v104 = v33;
                            int32_t * v105 = (int32_t *)(v35 - 12); // 0xd60397
                            *v105 = v33;
                            qt_?();
                            if ((char)v103 != 0) {
                                goto lab_0xd603e1;
                            } else {
                                // 0xd603af
                                *(int32_t *)&v27 = (int32_t)v10;
                                qt_QString_ref();
                                *v102 = 1;
                                *v104 = v29;
                                *v105 = v19;
                                sub_111ab48();
                                // 0xd603dc
                                qt_?();
                                goto lab_0xd603e1;
                            }
                        } else {
                            // 0xd6034a
                            *v101 = (int32_t)&g215;
                            sub_13afeac();
                            *(int32_t *)(v35 + 4) = 1;
                            *v101 = v29;
                            *(int32_t *)(v35 - 4) = v19;
                            sub_111ab48();
                            // 0xd603dc
                            qt_?();
                            goto lab_0xd603e1;
                        }
                    } else {
                        goto lab_0xd603e1;
                    }
                } else {
                    switch (v71) {
                        case 6: {
                            // 0xd5edbd
                            *(int32_t *)v35 = v19;
                            sub_d608c4((int32_t)&g2208);
                            *(int32_t *)(v35 - 4) = v32;
                            // 0xd5edd2
                            *(int32_t *)(self + 276) = (char)v34 == 0 ? 1 : 3; // self->state
                            goto lab_0xd603e1;
                        }
                        case 8: {
                            int32_t * v106 = (int32_t *)v35; // 0xd5edf5
                            *v106 = (int32_t)"mubl";
                            sub_13afeac();
                            *v106 = 1;
                            *(int32_t *)(v35 - 4) = v29;
                            int32_t v107 = qt_contains(); // 0xd5ee11
                            int32_t v108 = v35 - 8; // 0xd5ee16
                            *(int32_t *)v108 = v33;
                            int32_t v109 = v35 - 12; // 0xd5ee17
                            int32_t * v110 = (int32_t *)v109;
                            *v110 = v33;
                            qt_?();
                            if ((char)v107 == 0) {
                                if (self != 7) {
                                    int32_t * v111 = v110; // 0xd5ef7e
                                    int32_t v112 = v109; // 0xd5ef7e
                                    if (v3 == 0) {
                                        // 0xd5ef80
                                        *v110 = (int32_t)"HuaweiKey";
                                        sub_13afeac();
                                        int32_t * v113 = (int32_t *)(v35 - 16); // 0xd5ef8e
                                        *v110 = 0;
                                        *v113 = v29;
                                        int32_t v114 = qt_contains(); // 0xd5ef9c
                                        int32_t * v115 = (int32_t *)(v35 - 20); // 0xd5efa1
                                        *v115 = v33;
                                        int32_t v116 = v35 - 24; // 0xd5efa2
                                        int32_t * v117 = (int32_t *)v116;
                                        *v117 = v33;
                                        qt_?();
                                        v111 = v117;
                                        v112 = v116;
                                        if ((char)v114 == 0) {
                                            // 0xd5efba
                                            *v117 = 4;
                                            int32_t v118 = sub_19a6e20(); // 0xd5efc1
                                            *(int32_t *)v118 = (int32_t)"Bootloader is locked not supported";
                                            *v113 = 0;
                                            *v115 = (int32_t)&g632;
                                            *v117 = v118;
                                            sub_19a75b0();
                                            v111 = v117;
                                            v112 = v116;
                                        }
                                    }
                                    // 0xd5efe4
                                    sub_1323910();
                                    *v111 = (int32_t)"%0//**//%1";
                                    sub_13afeac();
                                    int32_t * v119 = (int32_t *)(v112 - 4); // 0xd5f006
                                    *v119 = (int32_t)&v37;
                                    int32_t v120 = sub_8eb018(); // 0xd5f009
                                    *v119 = (int32_t)&v82;
                                    *v111 = v22;
                                    sub_15720c0();
                                    *v119 = (int32_t)"Method";
                                    sub_13afeac();
                                    int32_t * v121 = (int32_t *)(v112 - 8); // 0xd5f038
                                    *v119 = (int32_t)&v85;
                                    *v121 = v31;
                                    int32_t v122 = &v36; // 0xd5f046
                                    sub_15720c0();
                                    *(int32_t *)(v112 + 4) = 2;
                                    *v119 = v120;
                                    *v111 = v33;
                                    *v121 = v122;
                                    v83 = (char *)&v30;
                                    *(int32_t *)(v112 + 8) = (int32_t)&v83;
                                    sub_156ee70();
                                    qt_?();
                                    *v111 = v29;
                                    *v119 = 4;
                                    *v121 = v122;
                                    qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                                    qt_?();
                                    qt_?();
                                    int32_t * v123 = (int32_t *)(v112 - 20); // 0xd5f0d5
                                    *v123 = (int32_t)"Generic";
                                    sub_13afeac();
                                    *v123 = 0;
                                    *(int32_t *)(v112 - 24) = v29;
                                    int32_t v124 = qt_contains(); // 0xd5f108
                                    int32_t * v125 = (int32_t *)(v112 - 28); // 0xd5f10d
                                    *v125 = v22;
                                    int32_t v126 = v112 - 32; // 0xd5f10e
                                    int32_t * v127 = (int32_t *)v126;
                                    *v127 = v22;
                                    qt_?();
                                    if ((char)v124 == 0) {
                                        // 0xd5f141
                                        *v127 = (int32_t)"Xiaomi";
                                        sub_13afeac();
                                        *v127 = 0;
                                        *(int32_t *)(v112 - 36) = v29;
                                        int32_t v128 = qt_contains(); // 0xd5f161
                                        *(int32_t *)(v112 - 40) = v29;
                                        int32_t v129 = v112 - 44; // 0xd5f167
                                        int32_t * v130 = (int32_t *)v129;
                                        *v130 = v29;
                                        qt_?();
                                        if ((char)v128 == 0) {
                                            // 0xd5f198
                                            *v130 = (int32_t)"HuaweiKey";
                                            sub_13afeac();
                                            int32_t * v131 = (int32_t *)(v112 - 48); // 0xd5f1a6
                                            *v130 = 0;
                                            *v131 = v29;
                                            int32_t v132 = qt_contains(); // 0xd5f1b8
                                            int32_t * v133 = (int32_t *)(v112 - 52); // 0xd5f1c3
                                            *v133 = v22;
                                            int32_t * v134 = (int32_t *)(v112 - 56); // 0xd5f1c4
                                            *v134 = v22;
                                            qt_?();
                                            if ((char)v132 == 0) {
                                                // 0xd5f2e9
                                                *v134 = (int32_t)"Huawei";
                                                sub_13afeac();
                                                *v134 = 0;
                                                *(int32_t *)(v112 - 60) = v29;
                                                int32_t v135 = qt_contains(); // 0xd5f309
                                                int32_t * v136 = (int32_t *)(v112 - 64); // 0xd5f30e
                                                *v136 = v22;
                                                int32_t v137 = v112 - 68; // 0xd5f30f
                                                int32_t * v138 = (int32_t *)v137;
                                                *v138 = v22;
                                                qt_?();
                                                v72 = v138;
                                                v80 = v137;
                                                if ((char)v135 != 0) {
                                                    // 0xd5f31d
                                                    *v136 = 0;
                                                    *v138 = v19;
                                                    sub_110d358();
                                                    v72 = v138;
                                                    v80 = v137;
                                                }
                                                goto lab_0xd5f333;
                                            } else {
                                                // 0xd5f1e0
                                                *v134 = (int32_t)"Key ...";
                                                sub_13afeac();
                                                int32_t * v139 = (int32_t *)(v112 - 60); // 0xd5f1f7
                                                *v139 = (int32_t)"please paste your frp key then press ok";
                                                sub_13afeac();
                                                int32_t * v140 = (int32_t *)(v112 - 64); // 0xd5f206
                                                *v140 = (int32_t)"Huawei FRP Key";
                                                sub_13afeac();
                                                *v131 = 18;
                                                *v133 = 14;
                                                *v134 = (int32_t)&v11;
                                                *v139 = v29;
                                                *v140 = v31;
                                                *(int32_t *)(v112 - 68) = v122;
                                                sub_d63998((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208);
                                                int32_t v141 = v112 - 92; // 0xd5f243
                                                qt_?();
                                                qt_?();
                                                qt_?();
                                                int32_t v142 = (int32_t)g595; // 0xd5f268
                                                if (g595 == NULL) {
                                                    int32_t * v143 = (int32_t *)v141; // 0xd5f26a
                                                    *v143 = 4;
                                                    int32_t v144 = sub_19a6e20(); // 0xd5f271
                                                    *(int32_t *)v144 = (int32_t)"cancelled operation";
                                                    *(int32_t *)(v112 - 84) = 0;
                                                    *(int32_t *)(v112 - 88) = (int32_t)&g632;
                                                    *v143 = v144;
                                                    v142 = sub_19a75b0();
                                                }
                                                // 0xd5f294
                                                int32_t * v145; // 0xd5e70c
                                                int32_t * v146; // 0xd5e70c
                                                if (v142 > 13) {
                                                    // 0xd5f294
                                                    v146 = (int32_t *)v141;
                                                    v145 = (int32_t *)(v112 - 88);
                                                } else {
                                                    int32_t * v147 = (int32_t *)v141;
                                                    *v147 = 4;
                                                    int32_t v148 = sub_19a6e20(); // 0xd5f2a0
                                                    *(int32_t *)v148 = (int32_t)"invalid key";
                                                    *(int32_t *)(v112 - 84) = 0;
                                                    int32_t * v149 = (int32_t *)(v112 - 88);
                                                    *v149 = (int32_t)&g632;
                                                    *v147 = v148;
                                                    sub_19a75b0();
                                                    v146 = v147;
                                                    v145 = v149;
                                                }
                                                // 0xd5f2c3
                                                *(int32_t *)&v27 = (int32_t)v11;
                                                qt_QString_ref();
                                                *v145 = v29;
                                                *v146 = v19;
                                                sub_11119bc();
                                                v76 = v146;
                                                v79 = v141;
                                                goto lab_0xd5f2e2;
                                            }
                                        } else {
                                            // 0xd5f185
                                            *v130 = v19;
                                            sub_110d9c4();
                                            v72 = v130;
                                            v80 = v129;
                                            goto lab_0xd5f333;
                                        }
                                    } else {
                                        // 0xd5f126
                                        *v125 = 0;
                                        *v127 = v19;
                                        sub_110e00c();
                                        v72 = v127;
                                        v80 = v126;
                                        goto lab_0xd5f333;
                                    }
                                } else {
                                    // 0xd5ee59
                                    sub_1323910();
                                    *v110 = (int32_t)"%0";
                                    sub_13afeac();
                                    int32_t * v150 = (int32_t *)(v35 - 16); // 0xd5ee75
                                    *v150 = (int32_t)"Removing FRP";
                                    sub_13afeac();
                                    *(int16_t *)v108 = 32;
                                    *v110 = 0;
                                    int32_t v151 = &v36; // 0xd5ee9d
                                    *v150 = v151;
                                    int32_t v152 = &v37; // 0xd5eea1
                                    *(int32_t *)(v35 - 20) = v152;
                                    qt_QString_arg();
                                    *(int32_t *)(v35 - 28) = v29;
                                    *(int32_t *)(v35 - 32) = 0;
                                    *(int32_t *)(v35 - 36) = v31;
                                    qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                                    qt_?();
                                    qt_?();
                                    qt_?();
                                    int32_t * v153 = (int32_t *)(v35 - 48); // 0xd5eee2
                                    *v153 = 1000;
                                    sub_13b8f80();
                                    sub_1323910();
                                    *v153 = (int32_t)"%0";
                                    sub_13afeac();
                                    int32_t * v154 = (int32_t *)(v35 - 52); // 0xd5ef0a
                                    *v154 = (int32_t)"OK";
                                    sub_13afeac();
                                    *(int16_t *)(v35 - 44) = 32;
                                    *v153 = 0;
                                    *v154 = v151;
                                    *(int32_t *)(v35 - 56) = v152;
                                    qt_QString_arg();
                                    *(int32_t *)(v35 - 64) = v29;
                                    *(int32_t *)(v35 - 68) = 7;
                                    *(int32_t *)(v35 - 72) = v31;
                                    qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                                    int32_t v155 = v35 - 84; // 0xd5ef61
                                    qt_?();
                                    qt_?();
                                    v76 = (int32_t *)v155;
                                    v79 = v155;
                                    goto lab_0xd5f2e2;
                                }
                            } else {
                                // 0xd5ee2f
                                *v110 = v19;
                                int32_t v156 = sub_d63a3c((int32_t)&g2208); // 0xd5ee3e
                                int32_t v157 = v35 - 16; // 0xd5ee43
                                int32_t * v158 = (int32_t *)v157;
                                *v158 = v156;
                                v72 = v158;
                                v80 = v157;
                                goto lab_0xd5f333;
                            }
                        }
                        default: {
                            goto lab_0xd603e1;
                        }
                    }
                }
            }
        } else {
            if (v71 == 99) {
                if (self != 7) {
                    // 0xd5f756
                    v78 = v35;
                    if (v3 == 0) {
                        goto lab_0xd5f8a5;
                    } else {
                        // 0xd5f763
                        sub_1323910();
                        int32_t * v159 = (int32_t *)v35; // 0xd5f770
                        *v159 = (int32_t)"%0";
                        sub_13afeac();
                        int32_t * v160 = (int32_t *)(v35 - 4); // 0xd5f783
                        *v160 = (int32_t)"locking Bootloader";
                        sub_13afeac();
                        int32_t v161 = &v36; // 0xd5f78f
                        *(int16_t *)(v35 + 4) = 32;
                        *v159 = 0;
                        *v160 = v161;
                        int32_t v162 = &v37; // 0xd5f7b5
                        *(int32_t *)(v35 - 8) = v162;
                        qt_QString_arg();
                        *(int32_t *)(v35 - 16) = v29;
                        *(int32_t *)(v35 - 20) = 0;
                        *(int32_t *)(v35 - 24) = v31;
                        qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                        qt_?();
                        qt_?();
                        qt_?();
                        int32_t v163 = v35 - 32; // 0xd5f7fc
                        *(int32_t *)v163 = 0;
                        *(int32_t *)(v35 - 28) = (int32_t)&v3;
                        int32_t * v164 = (int32_t *)(v35 - 36); // 0xd5f80e
                        *v164 = v19;
                        sub_11073b8();
                        sub_1323910();
                        *v164 = (int32_t)"%0";
                        sub_13afeac();
                        int32_t * v165 = (int32_t *)(v35 - 40); // 0xd5f846
                        *v165 = v3 == 0 ? (int32_t)"Failed" : (int32_t)"Done";
                        sub_13afeac();
                        *(int16_t *)v163 = 32;
                        *v164 = 0;
                        *v165 = v161;
                        *(int32_t *)(v35 - 44) = v162;
                        qt_QString_arg();
                        int32_t v166 = v35 - 60; // 0xd5f872
                        *(int32_t *)(v35 - 52) = v29;
                        *(int32_t *)(v35 - 56) = 7;
                        *(int32_t *)v166 = v31;
                        qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                        v77 = v166;
                        goto lab_0xd5f889;
                    }
                } else {
                    // 0xd5f6da
                    sub_1323910();
                    int32_t * v167 = (int32_t *)v35; // 0xd5f6e7
                    *v167 = (int32_t)"%0";
                    sub_13afeac();
                    int32_t * v168 = (int32_t *)(v35 - 4); // 0xd5f6fa
                    *v168 = (int32_t)"Locked BootLoader done";
                    sub_13afeac();
                    *(int16_t *)(v35 + 4) = 32;
                    *v167 = 0;
                    *v168 = (int32_t)&v36;
                    *(int32_t *)(v35 - 8) = (int32_t)&v37;
                    qt_QString_arg();
                    int32_t v169 = v35 - 24; // 0xd5f73a
                    *(int32_t *)(v35 - 16) = v29;
                    *(int32_t *)(v35 - 20) = 2;
                    *(int32_t *)v169 = v31;
                    qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                    v77 = v169;
                    goto lab_0xd5f889;
                }
            } else {
                if (v71 < 100) {
                    switch (v71) {
                        case 13: {
                            // 0xd5ffa7
                            v84 = (char *)&g594;
                            int32_t v170 = v35 + 4; // 0xd5ffb7
                            *(int32_t *)v170 = (int32_t)&v84;
                            int32_t * v171 = (int32_t *)v35; // 0xd5ffc1
                            *v171 = v19;
                            int32_t v172 = sub_110e67c((int32_t *)v84); // 0xd5ffc4
                            sub_1323910();
                            *v171 = (int32_t)"%0";
                            sub_13afeac();
                            int32_t * v173 = (int32_t *)(v35 - 4);
                            if ((char)v172 != 0) {
                                // 0xd6009c
                                *v173 = (int32_t)"Repairing DM-Verify";
                                sub_13afeac();
                                int32_t v174 = &v36; // 0xd600c8
                                *(int16_t *)v170 = 32;
                                *v171 = 0;
                                *v173 = v174;
                                int32_t v175 = &v37; // 0xd600e8
                                int32_t v176; // 0xd5e70c
                                *(int32_t *)(v176 - 8) = v175;
                                qt_QString_arg();
                                *(int32_t *)(v176 - 20) = 0;
                                *(int32_t *)(v176 - 16) = v29;
                                *(int32_t *)(v176 - 24) = v31;
                                qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                                qt_?();
                                qt_?();
                                qt_?();
                                int32_t * v177 = (int32_t *)(v176 - 36); // 0xd60135
                                *v177 = (int32_t)&g213;
                                v83 = (char *)&g594;
                                v82 = (char *)&g594;
                                int32_t v178 = sub_1802cb0(); // 0xd60150
                                int32_t v179 = v176 - 40; // 0xd60157
                                int32_t v180 = (char)v178 == 0 ? (int32_t)&g213 : (int32_t)&g214; // 0xd60168
                                int32_t * v181 = (int32_t *)v179; // 0xd6016b
                                *v181 = v180;
                                int32_t v182 = qt_?(); // 0xd6016e
                                char * v183 = v83;
                                int32_t * v184 = (int32_t *)(v176 - 44); // 0xd60179
                                *v184 = v182;
                                *(int32_t *)&v27 = (int32_t)v183;
                                qt_QString_ref();
                                *v181 = v29;
                                int32_t v185 = (int32_t)&v82; // 0xd60195
                                *v177 = v185;
                                *v184 = v19;
                                int32_t v186 = sub_11016f8(); // 0xd601a2
                                qt_?();
                                sub_1323910();
                                if ((char)v186 != 0) {
                                    // 0xd6023a
                                    *v184 = (int32_t)"%0";
                                    sub_13afeac();
                                    int32_t * v187 = (int32_t *)(v176 - 48); // 0xd60258
                                    *v187 = (int32_t)"OK";
                                    sub_13afeac();
                                    *(int16_t *)v179 = 32;
                                    *v184 = 0;
                                    *v187 = v174;
                                    *(int32_t *)(v176 - 52) = v175;
                                    qt_QString_arg();
                                    *(int32_t *)(v176 - 64) = 7;
                                    *(int32_t *)(v176 - 60) = v29;
                                    *(int32_t *)(v176 - 68) = v31;
                                    qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                                    qt_?();
                                    qt_?();
                                    qt_?();
                                    int32_t * v188 = (int32_t *)(v176 - 80); // 0xd602d7
                                    *v188 = (int32_t)&g215;
                                    sub_13afeac();
                                    *(int32_t *)(v176 - 76) = 1;
                                    *v188 = v29;
                                    *(int32_t *)(v176 - 84) = v19;
                                    sub_111ab48();
                                    qt_?();
                                    int32_t v189; // 0xd5e70c
                                    *(int32_t *)(v189 + 276) = 3;
                                } else {
                                    // 0xd601c0
                                    *v181 = (int32_t)"failed:";
                                    *v184 = v31;
                                    *v177 = v185;
                                    sub_199e428();
                                    *v181 = 11;
                                    *v184 = v31;
                                    *v177 = v29;
                                    qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                                    qt_?();
                                    int32_t * v190 = (int32_t *)(v176 - 56); // 0xd60205
                                    *v190 = (int32_t)&g215;
                                    sub_13afeac();
                                    *(int32_t *)(v176 - 52) = 1;
                                    *v190 = v29;
                                    *(int32_t *)(v176 - 60) = v19;
                                    sub_111ab48();
                                    qt_?();
                                }
                                // 0xd60317
                                qt_?();
                            } else {
                                // 0xd5ffdd
                                *v173 = (int32_t)"failed to detect current slot!";
                                sub_13afeac();
                                *(int16_t *)v170 = 32;
                                *v171 = 0;
                                *v173 = (int32_t)&v36;
                                *(int32_t *)(v35 - 8) = (int32_t)&v37;
                                qt_QString_arg();
                                *(int32_t *)(v35 - 20) = 3;
                                *(int32_t *)(v35 - 24) = v31;
                                *(int32_t *)(v35 - 16) = v29;
                                qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                                qt_?();
                                qt_?();
                                qt_?();
                                int32_t * v191 = (int32_t *)(v35 - 36); // 0xd6006c
                                *v191 = (int32_t)&g215;
                                sub_13afeac();
                                *(int32_t *)(v35 - 32) = 1;
                                *v191 = v29;
                                *(int32_t *)(v35 - 40) = v19;
                                sub_111ab48();
                            }
                            // 0xd60328
                            qt_?();
                            // 0xd603dc
                            qt_?();
                            goto lab_0xd603e1;
                        }
                        case 15: {
                            int32_t * v192; // 0xd5e70c
                            int32_t v193; // 0xd5e70c
                            if (self != 7) {
                                // 0xd5f40c
                                int32_t * v194; // 0xd5e70c
                                if (v3 == 0) {
                                    // 0xd5f425
                                    *(int32_t *)(v35 + 4) = 1;
                                    *(int32_t *)(v35 + 8) = (int32_t)&v3;
                                    int32_t * v195 = (int32_t *)v35;
                                    *v195 = v19;
                                    sub_11073b8();
                                    v194 = v195;
                                } else {
                                    // 0xd5f40c
                                    v194 = (int32_t *)v35;
                                }
                                // 0xd5f415
                                *v194 = v19;
                                sub_1110234();
                                v192 = v194;
                                v193 = v35;
                            } else {
                                // 0xd5f377
                                sub_1323910();
                                int32_t * v196 = (int32_t *)v35; // 0xd5f384
                                *v196 = (int32_t)"%0";
                                sub_13afeac();
                                int32_t * v197 = (int32_t *)(v35 - 4); // 0xd5f397
                                *v197 = (int32_t)"format device successfully";
                                sub_13afeac();
                                *(int16_t *)(v35 + 4) = 32;
                                *v196 = 0;
                                *v197 = (int32_t)&v36;
                                *(int32_t *)(v35 - 8) = (int32_t)&v37;
                                qt_QString_arg();
                                *(int32_t *)(v35 - 16) = v29;
                                *(int32_t *)(v35 - 20) = 2;
                                *(int32_t *)(v35 - 24) = v31;
                                qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                                int32_t v198 = v35 - 36; // 0xd5f3ee
                                qt_?();
                                qt_?();
                                qt_?();
                                v192 = (int32_t *)v198;
                                v193 = v198;
                            }
                            // 0xd5f447
                            *v192 = (int32_t)&g215;
                            sub_13afeac();
                            *(int32_t *)(v193 + 4) = 1;
                            *v192 = v29;
                            *(int32_t *)(v193 - 4) = v19;
                            sub_111ab48();
                            // 0xd5f9e1
                            qt_?();
                            // 0xd5f9e8
                            *(int32_t *)(self + 276) = 3; // self->state
                            goto lab_0xd603e1;
                        }
                        default: {
                            goto lab_0xd603e1;
                        }
                    }
                } else {
                    switch (v71) {
                        case 100: {
                            int32_t * v199 = (int32_t *)v35; // 0xd5f47b
                            *v199 = (int32_t)"mubl";
                            sub_13afeac();
                            *v199 = 1;
                            *(int32_t *)(v35 - 4) = v29;
                            int32_t v200 = qt_contains(); // 0xd5f497
                            int32_t v201 = v35 - 8; // 0xd5f49c
                            *(int32_t *)v201 = v33;
                            int32_t v202 = v35 - 12; // 0xd5f49d
                            int32_t * v203 = (int32_t *)v202;
                            *v203 = v33;
                            qt_?();
                            if ((char)v200 == 0) {
                                if (self != 7) {
                                    // 0xd5f551
                                    v73 = v203;
                                    v81 = v202;
                                    if (v3 != 0) {
                                        goto lab_0xd5f6a0;
                                    } else {
                                        // 0xd5f55e
                                        sub_1323910();
                                        *v203 = (int32_t)"%0";
                                        sub_13afeac();
                                        int32_t * v204 = (int32_t *)(v35 - 16); // 0xd5f57e
                                        *v204 = (int32_t)"Unlocking Bootloader";
                                        sub_13afeac();
                                        *(int16_t *)v201 = 32;
                                        *v203 = 0;
                                        int32_t v205 = &v36; // 0xd5f5ac
                                        *v204 = v205;
                                        int32_t v206 = &v37; // 0xd5f5b0
                                        *(int32_t *)(v35 - 20) = v206;
                                        qt_QString_arg();
                                        *(int32_t *)(v35 - 28) = v29;
                                        *(int32_t *)(v35 - 32) = 0;
                                        *(int32_t *)(v35 - 36) = v31;
                                        qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                                        qt_?();
                                        qt_?();
                                        qt_?();
                                        int32_t v207 = v35 - 44; // 0xd5f5f7
                                        *(int32_t *)v207 = 1;
                                        *(int32_t *)(v35 - 40) = (int32_t)&v3;
                                        int32_t * v208 = (int32_t *)(v35 - 48); // 0xd5f609
                                        *v208 = v19;
                                        sub_11073b8();
                                        sub_1323910();
                                        *v208 = (int32_t)"%0";
                                        sub_13afeac();
                                        int32_t * v209 = (int32_t *)(v35 - 52); // 0xd5f641
                                        *v209 = v3 == 0 ? (int32_t)"Failed" : (int32_t)"Done";
                                        sub_13afeac();
                                        *(int16_t *)v207 = 32;
                                        *v208 = 0;
                                        *v209 = v205;
                                        *(int32_t *)(v35 - 56) = v206;
                                        qt_QString_arg();
                                        v87 = v35 - 72;
                                        *(int32_t *)(v35 - 64) = v29;
                                        *(int32_t *)(v35 - 68) = 7;
                                        *(int32_t *)v87 = v31;
                                        qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                                        goto lab_0xd5f684;
                                    }
                                } else {
                                    // 0xd5f4d5
                                    sub_1323910();
                                    *v203 = (int32_t)"%0";
                                    sub_13afeac();
                                    int32_t * v210 = (int32_t *)(v35 - 16); // 0xd5f4f5
                                    *v210 = (int32_t)"Unlocked BootLoader done";
                                    sub_13afeac();
                                    *(int16_t *)v201 = 32;
                                    *v203 = 0;
                                    *v210 = (int32_t)&v36;
                                    *(int32_t *)(v35 - 20) = (int32_t)&v37;
                                    qt_QString_arg();
                                    int32_t v211 = v35 - 36; // 0xd5f535
                                    *(int32_t *)(v35 - 28) = v29;
                                    *(int32_t *)(v35 - 32) = 2;
                                    *(int32_t *)v211 = v31;
                                    qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
                                    v87 = v211;
                                    goto lab_0xd5f684;
                                }
                            } else {
                                // 0xd5f4b5
                                *v203 = v19;
                                int32_t v212 = sub_d65000((int32_t)&g2208); // 0xd5f4c4
                                int32_t v213 = v35 - 16; // 0xd5f4c9
                                int32_t * v214 = (int32_t *)v213;
                                *v214 = v212;
                                v73 = v214;
                                v81 = v213;
                                goto lab_0xd5f6a0;
                            }
                        }
                        case 101: {
                            int32_t * v215 = (int32_t *)v35; // 0xd5f8d9
                            *v215 = (int32_t)"mubl";
                            sub_13afeac();
                            int32_t * v216 = (int32_t *)(v35 - 4); // 0xd5f8e7
                            *v215 = 1;
                            *v216 = v29;
                            int32_t v217 = qt_contains(); // 0xd5f8f5
                            int32_t * v218 = (int32_t *)(v35 - 8); // 0xd5f8fa
                            *v218 = v33;
                            int32_t * v219 = (int32_t *)(v35 - 12); // 0xd5f8fb
                            *v219 = v33;
                            qt_?();
                            if ((char)v217 == 0) {
                                // 0xd5f950
                                *(int32_t *)&v27 = (int32_t)v10;
                                qt_QString_ref();
                                *v218 = v29;
                                *v219 = v19;
                                *v216 = (int32_t)&v3;
                                sub_11109cc();
                                qt_?();
                                *v219 = (int32_t)"lock";
                                sub_13afeac();
                                *v219 = 0;
                                *(int32_t *)(v35 - 16) = v29;
                                int32_t v220 = qt_contains(); // 0xd5f9a0
                                int32_t * v221 = (int32_t *)(v35 - 20); // 0xd5f9a5
                                *v221 = v33;
                                int32_t * v222 = (int32_t *)(v35 - 24); // 0xd5f9a6
                                *v222 = v33;
                                qt_?();
                                if ((char)v220 == 0) {
                                    // 0xd5f9e8
                                    *(int32_t *)(self + 276) = 3; // self->state
                                    goto lab_0xd603e1;
                                } else {
                                    // 0xd5f9be
                                    *v222 = (int32_t)&g215;
                                    sub_13afeac();
                                    *v221 = 1;
                                    *v222 = v29;
                                    *(int32_t *)(v35 - 28) = v19;
                                    sub_111ab48();
                                    // 0xd5f9e1
                                    qt_?();
                                    // 0xd5f9e8
                                    *(int32_t *)(self + 276) = 3; // self->state
                                    goto lab_0xd603e1;
                                }
                            } else {
                                // 0xd5f919
                                *v219 = v19;
                                sub_d65000((int32_t)&g2208);
                                int32_t * v223 = (int32_t *)(v35 - 16); // 0xd5f92a
                                *v223 = (int32_t)&g215;
                                sub_13afeac();
                                *v219 = 1;
                                *v223 = v29;
                                *(int32_t *)(v35 - 20) = v19;
                                sub_111ab48();
                                // 0xd5f9e1
                                qt_?();
                                // 0xd5f9e8
                                *(int32_t *)(self + 276) = 3; // self->state
                                goto lab_0xd603e1;
                            }
                        }
                        default: {
                            goto lab_0xd603e1;
                        }
                    }
                }
            }
        }
    }
  lab_0xd5fbfe:;
    char * v224 = (char *)&g594; // bp-312, 0xd5fc06
    v85 = (char *)&g594;
    sub_1323910();
    *v75 = (int32_t)"%0//**//%1";
    sub_13afeac();
    int32_t * v225 = (int32_t *)(v86 - 4); // 0xd5fc34
    *v225 = (int32_t)&v83;
    int32_t v226 = sub_8eb018(); // 0xd5fc3d
    int32_t v227 = &v36; // 0xd5fc4e
    *v225 = v227;
    *v75 = v88;
    sub_15720c0();
    *v225 = (int32_t)"Current Boot Slot";
    sub_13afeac();
    int32_t * v228 = (int32_t *)(v86 - 8); // 0xd5fc74
    *v225 = (int32_t)&v84;
    *v228 = v31;
    sub_15720c0();
    *v74 = 2;
    int32_t v229 = (int32_t)&v82; // 0xd5fc9b
    *v228 = v229;
    v37 = v31;
    int32_t v230 = &v37; // 0xd5fca6
    *(int32_t *)(v86 + 8) = v230;
    *v75 = v33;
    *v225 = 0x1000000 * v226 >> 24;
    sub_156ee70();
    qt_?();
    *v225 = 4;
    *v228 = v229;
    *v75 = v29;
    qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
    qt_?();
    qt_?();
    int32_t * v231 = (int32_t *)(v86 - 20); // 0xd5fd13
    *v231 = v29;
    int32_t * v232 = (int32_t *)(v86 - 16); // 0xd5fd16
    *v232 = v22;
    qt_QString();
    *(int32_t *)&v224 = (int32_t)v27;
    *(int32_t *)&v27 = (int32_t)v224;
    qt_?();
    sub_1323910();
    *v231 = (int32_t)"%0";
    sub_13afeac();
    int32_t * v233 = (int32_t *)(v86 - 24); // 0xd5fd78
    *v232 = (int32_t)&v224;
    *v231 = (int32_t)"Changing Slot into ";
    *v233 = v227;
    sub_199e428();
    *(int16_t *)(v86 - 12) = 32;
    *v232 = 0;
    *v231 = v227;
    *v233 = v230;
    qt_QString_arg();
    *(int32_t *)(v86 - 36) = 0;
    *(int32_t *)(v86 - 32) = v29;
    *(int32_t *)(v86 - 40) = v31;
    qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
    qt_?();
    qt_?();
    qt_?();
    *(int32_t *)&v27 = (int32_t)v224;
    qt_QString_ref();
    int32_t * v234 = (int32_t *)(v86 - 44); // 0xd5fe16
    int32_t v235 = (int32_t)&v85; // 0xd5fe16
    *v234 = v235;
    int32_t v236 = v86 - 48; // 0xd5fe1a
    int32_t * v237 = (int32_t *)v236; // 0xd5fe1a
    *v237 = v29;
    int32_t * v238 = (int32_t *)(v86 - 52); // 0xd5fe1e
    *v238 = v19;
    int32_t v239 = sub_11016f8(); // 0xd5fe21
    qt_?();
    sub_1323910();
    if ((char)v239 != 0) {
        // 0xd5feb3
        *v238 = (int32_t)"%0";
        sub_13afeac();
        int32_t * v240 = (int32_t *)(v86 - 56); // 0xd5fecd
        *v240 = (int32_t)"OK";
        sub_13afeac();
        *(int16_t *)v236 = 32;
        *v238 = 0;
        *v240 = v227;
        *(int32_t *)(v86 - 60) = v230;
        qt_QString_arg();
        *(int32_t *)(v86 - 72) = 7;
        *(int32_t *)(v86 - 68) = v29;
        *(int32_t *)(v86 - 76) = v31;
        qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
        qt_?();
        qt_?();
        qt_?();
        int32_t * v241 = (int32_t *)(v86 - 88); // 0xd5ff46
        *v241 = (int32_t)&g215;
        sub_13afeac();
        *(int32_t *)(v86 - 84) = 1;
        *v241 = v29;
        *(int32_t *)(v86 - 92) = v19;
        sub_111ab48();
        qt_?();
        *(int32_t *)(self + 276) = 3; // self->state
    } else {
        // 0xd5fe3f
        *v234 = v235;
        *v237 = (int32_t)"failed:";
        *v238 = v31;
        sub_199e428();
        *v234 = v29;
        *v237 = 11;
        *v238 = v31;
        qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
        qt_?();
        int32_t * v242 = (int32_t *)(v86 - 64); // 0xd5fe7c
        *v242 = (int32_t)&g215;
        sub_13afeac();
        *(int32_t *)(v86 - 60) = 1;
        *v242 = v29;
        *(int32_t *)(v86 - 68) = v19;
        sub_111ab48();
        qt_?();
    }
    // 0xd5ff8c
    qt_?();
    // 0xd5ff97
    qt_?();
    // 0xd603dc
    qt_?();
    goto lab_0xd603e1;
  lab_0xd5f8a5:;
    int32_t * v243 = (int32_t *)v78; // 0xd5f8a5
    *v243 = (int32_t)&g215;
    sub_13afeac();
    *(int32_t *)(v78 + 4) = 1;
    *v243 = v29;
    *(int32_t *)(v78 - 4) = v19;
    sub_111ab48();
    // 0xd5f9e1
    qt_?();
    // 0xd5f9e8
    *(int32_t *)(self + 276) = 3; // self->state
    goto lab_0xd603e1;
  lab_0xd5f889:
    // 0xd5f889
    qt_?();
    qt_?();
    qt_?();
    v78 = v77 - 12;
    goto lab_0xd5f8a5;
  lab_0xd5f333:
    // 0xd5f333
    *v72 = (int32_t)&g215;
    sub_13afeac();
    *(int32_t *)(v80 + 4) = 1;
    *v72 = v29;
    *(int32_t *)(v80 - 4) = v19;
    sub_111ab48();
    // 0xd5f9e1
    qt_?();
    // 0xd5f9e8
    *(int32_t *)(self + 276) = 3; // self->state
    goto lab_0xd603e1;
  lab_0xd5f6a0:
    // 0xd5f6a0
    *v73 = (int32_t)&g215;
    sub_13afeac();
    *(int32_t *)(v81 + 4) = 1;
    *v73 = v29;
    *(int32_t *)(v81 - 4) = v19;
    sub_111ab48();
    // 0xd5f9e1
    qt_?();
    // 0xd5f9e8
    *(int32_t *)(self + 276) = 3; // self->state
    goto lab_0xd603e1;
  lab_0xd5f2e2:
    // 0xd5f2e2
    qt_?();
    v72 = v76;
    v80 = v79;
    goto lab_0xd5f333;
  lab_0xd5f684:;
    int32_t v244 = v87 - 12; // 0xd5f684
    qt_?();
    qt_?();
    qt_?();
    v73 = (int32_t *)v244;
    v81 = v244;
    goto lab_0xd5f6a0;
}
/*
 * kirin_hPerformTask
 * Entry VA: 0xa0d640
 * Cleaned pseudocode from RetDec v5.0 (best-effort names/comments).
 *
 * Known fields (offsets from the object base):
 *   self +0xDC  : task type
 *
 * `self` is the original object pointer (this).
 * Calls named `sub_<addr>` could not be resolved to a known method.
 */


// Address range: 0xa0d640 - 0xa0d766
int32_t Hisi_hPerformTask(void) {
    // 0xa0d640
    int32_t self; // 0xa0d640
    int32_t result2 = *(int32_t *)(self + 220); // 0xa0d648 [self->task_type]
    if (result2 == 8) {
        int32_t result = Hisi_initOrConnect(0); // 0xa0d6d2
        if ((char)result == 0) {
            // 0xa0d75f
            return result;
        }
        // 0xa0d6df
        sub_110a7dc();
        if ((char)sub_10fb640() != 0) {
            // 0xa0d70d
            sub_10fee88();
            sub_110d358();
        }
        // 0xa0d75f
        return sub_110a8e0();
    }
    if (result2 < 9) {
        // 0xa0d659
        if (result2 != 4) {
            // 0xa0d75f
            return result2;
        }
        // 0xa0d67f
        sub_110a7dc();
        if ((char)sub_10fb640() != 0) {
            // 0xa0d6b1
            sub_10fee88();
        }
        // 0xa0d75f
        return sub_110a8e0();
    }
    if (result2 == 9) {
        // 0xa0d75f
        return sub_a0a864(0);
    }
    int32_t result3 = result2; // 0xa0d66f
    if (result2 == 100) {
        // 0xa0d675
        result3 = Hisi_initOrConnect(0);
    }
    // 0xa0d75f
    return result3;
}
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
/*
 * samsung_sPerformTask
 * Entry VA: 0xd37824
 * Cleaned pseudocode from RetDec v5.0 (best-effort names/comments).
 *
 * Known fields (offsets from the object base):
 *   self +0x10  : task type
 *   self +0x177 : read-forbidden flag
 *
 * Key strings observed:
 *   "SAM_DM"
 *   "Reset to factory default"
 *   "AST_POWERON"
 *   "USB  READY"
 *   "Response!"
 *   "Test Mode"
 *   "OS 16"
 *   "Download Mode"
 *   "SAM_MTP"
 *   "Method 1"
 *   "Method 2"
 *   "-> Please Dial This Code *#0*# or *#*#88#*#*"
 *   "NOT_ALLOWED_BY_AUTOBLOCKER"
 *   "NOT ALLOWED BY AUTOBLOCKER"
 *
 * `self` is the original object pointer (this).
 * Calls named `sub_<addr>` could not be resolved to a known method.
 */


// Address range: 0xd37824 - 0xd38b71
int32_t Samsung_sPerformTask(void) {
    int32_t v1 = 2; // bp-412, 0xd3783e
    sub_167a590();
    int32_t v2 = *(int32_t *)qt_QString(); // 0xd3788c
    int32_t v3 = v2; // bp-592, 0xd3789a
    int32_t * v4 = (int32_t *)(v2 + 12); // 0xd378a0
    *v4 = *v4 + 1;
    qt_qDebug();
    qt_intToVariant();
    qt_QString_dtor();
    qt_QString_dtor();
    qt_QString_dtor();
    int32_t self; // 0xd37824
    int32_t * v6 = (int32_t *)(self + 16); // 0xd378f1 [self->task_type]
    int32_t v7 = *v6; // 0xd378f1
    int32_t result; // 0xd37824
    if (v7 == 22) {
        // 0xd3790e
        result = sub_d4204c();
        *(int32_t *)(self + 12) = 3; // self->state
        // 0xd38b69
        return result;
    }
    if (v7 == 11) {
        // 0xd3790e
        result = sub_d47874();
        *(int32_t *)(self + 12) = 3; // self->state
        // 0xd38b69
        return result;
    }
    // 0xd3791a
    *(int32_t *)(self + 236) = v7 != 6 ? 1000 : 0x88b8;
    if (*(int32_t *)(self + 1312) != 0) {
        // 0xd3793a
        sub_cbb938();
    }
    int32_t result2 = sub_d4193c(); // 0xd37941
    if ((char)result2 == 0) {
        // 0xd38b69
        return result2;
    }
    // 0xd37954
    v1 = 2;
    sub_167a590();
    qt_QString();
    int32_t v8 = qt_toString(); // bp-692, 0xd379bc
    qt_QString_dtor();
    int32_t v9 = *v6; // 0xd379c4
    if (v9 == 6) {
        // 0xd38b69
        return sub_d47d20();
    }
    // 0xd379d8
    if (v9 == 1) {
        // 0xd38b69
        return 0;
    }
    // 0xd379df
    char * v10; // bp-588, 0xd37824
    int32_t v11 = (int32_t)&v10; // 0xd3788e
    int32_t v12 = self + 1308; // 0xd379a6
    char * v13 = (char *)(self + 8); // 0xd379e5
    *v13 = 0;
    int32_t * v14 = (int32_t *)(self + 12); // 0xd379e9 [self->state]
    *v14 = 0;
    qt_?();
    int32_t v15 = *v6; // 0xd37a07
    int32_t v16; // 0xd37824
    int32_t v17; // 0xd37824
    char ** v18; // 0xd37824
    int32_t v19; // 0xd37824
    int32_t v20; // 0xd37824
    int32_t v21; // 0xd37824
    int32_t v22; // bp-600, 0xd37824
    char * v23; // bp-704, 0xd37824
    char * v24; // bp-712, 0xd37824
    char * v25; // bp-716, 0xd37824
    char * v26; // bp-728, 0xd37824
    char * v27; // bp-740, 0xd37824
    int32_t v28; // 0xd37a13
    int32_t v29; // 0xd37b79
    int32_t v30; // 0xd3813a
    if (v15 != 10) {
        // 0xd37b4a
        v17 = v12;
        v16 = v11;
        v21 = &v8;
        if (v15 != 15) {
            goto lab_0xd38386;
        } else {
            // 0xd37b53
            v1 = 2;
            v29 = &v1;
            v8 = v29;
            sub_167a590();
            int32_t v31 = qt_QString(); // 0xd37ba3
            qt_toString();
            v23 = (char *)v31;
            qt_QString_dtor();
            v23 = "SAM_DM";
            int32_t v32; // bp-836, 0xd37824
            if ((char)sub_1802cb0() == 0) {
                int32_t v33 = sub_1802cb0(); // 0xd37f1c
                v24 = (char *)(self + 40);
                v17 = v12;
                v16 = v11;
                v21 = (int32_t)&v24;
                if ((char)v33 == 0) {
                    goto lab_0xd38386;
                } else {
                    // 0xd37f2a
                    v24 = "Reset to factory default";
                    v10 = (char *)&g594;
                    sub_14812e0("Reset to factory default");
                    v24 = (char *)&v10;
                    v25 = (char *)&v1;
                    sub_d5c7cc(&v1, (int32_t *)&v10, 3);
                    qt_QVariant();
                    qt_?();
                    sub_cbb938();
                    v26 = "AT+SWATD=0\r\n";
                    qt_?();
                    v26 = (char *)&v1;
                    sub_cbd264();
                    sub_a56268();
                    qt_?();
                    qt_?();
                    v27 = (char *)1000;
                    sub_cbd264();
                    sub_a56268();
                    qt_?();
                    qt_?();
                    sub_cbd264();
                    sub_a56268();
                    qt_?();
                    qt_?();
                    sub_cbd264();
                    sub_a56268();
                    qt_?();
                    qt_?();
                    sub_cbd264();
                    qt_?();
                    v1 = 2;
                    sub_167a980();
                    qt_QString();
                    v30 = &v22;
                    sub_1324ac0();
                    qt_QString_dtor();
                    int32_t v34 = sub_159b270(); // 0xd38164
                    char * v35 = (char *)&v22; // bp-824, 0xd3816b
                    v20 = (int32_t)&v35;
                    if ((char)v34 != 0) {
                        goto lab_0xd381e5;
                    } else {
                        // 0xd3816e
                        v35 = "OK";
                        int32_t v36 = sub_159b270(); // 0xd3817b
                        char * v37 = (char *)&v22; // bp-828, 0xd38182
                        v19 = (int32_t)&v37;
                        if ((char)v36 == 0) {
                            // 0xd381b7
                            v37 = "AST_POWERON";
                            int32_t v38 = sub_159b270(); // 0xd381c4
                            char * v39 = (char *)&v1; // bp-832, 0xd381cb
                            v19 = (int32_t)&v39;
                            if ((char)v38 != 0) {
                                goto lab_0xd38185;
                            } else {
                                // 0xd381ce
                                v39 = "USB  READY";
                                int32_t v40 = sub_159b270(); // 0xd381db
                                v32 = v30;
                                int32_t v41 = &v32; // 0xd381e2
                                v19 = v41;
                                v20 = v41;
                                if ((char)v40 != 0) {
                                    goto lab_0xd38185;
                                } else {
                                    goto lab_0xd381e5;
                                }
                            }
                        } else {
                            goto lab_0xd38185;
                        }
                    }
                }
            } else {
                // 0xd37bdb
                v10 = (char *)&g594;
                sub_14812e0("Reset to factory default");
                v23 = (char *)3;
                v24 = (char *)&v1;
                sub_d5c7cc(&v1, (int32_t *)&v10, 3);
                qt_QVariant();
                qt_?();
                sub_d42490(0x1000);
                v26 = (char *)&v1;
                *(char *)(self + 232) = 1;
                sub_d340f4();
                v26 = NULL;
                sub_d5807c(0);
                int32_t v42 = sub_d3540c(0); // 0xd37c5e
                qt_QVariant();
                qt_?();
                if ((char)v42 == 0) {
                    // 0xd37c7e
                    v27 = "Response!";
                    qt_?();
                    v27 = (char *)&v3;
                    qt_QString_arg();
                    qt_qDebug((int32_t *)&v10, 7, &v1);
                    qt_?();
                    qt_?();
                    qt_?();
                    qt_QVariant();
                    qt_?();
                    qt_?();
                    qt_QString_arg();
                    qt_qDebug((int32_t *)&v10, 3, &v1);
                    qt_?();
                    qt_?();
                    qt_?();
                    // 0xd38b69
                    return sub_a56268();
                }
                // 0xd37d79
                v27 = "OK";
                qt_?();
                v27 = (char *)&v3;
                qt_QString_arg();
                qt_qDebug((int32_t *)&v10, 7, &v1);
                qt_?();
                qt_?();
                qt_?();
                qt_QVariant();
                qt_?();
                qt_?();
                qt_QString_arg();
                qt_?();
                qt_?();
                qt_QString_arg();
                int32_t v43 = &v22; // 0xd37eb7
                sub_1167854(v43, v11, 4);
                qt_?();
                qt_?();
                qt_?();
                qt_?();
                qt_?();
                qt_?();
                v17 = v12;
                v16 = v43;
                v21 = &v32;
                goto lab_0xd38386;
            }
        }
    } else {
        // 0xd37a13
        v28 = &v1;
        v8 = &g341;
        qt_?();
        v8 = 0;
        int32_t v44 = qt_contains(); // 0xd37a39
        v23 = (char *)&v3;
        qt_?();
        if ((char)v44 == 0) {
            // 0xd37a63
            v23 = "Test Mode";
            qt_?();
            v23 = NULL;
            int32_t v45 = qt_contains(); // 0xd37a83
            char * v46 = (char *)v12; // 0xd37a8e
            v24 = v46;
            v25 = v46;
            qt_?();
            if ((char)v45 == 0) {
                // 0xd37ab0
                v25 = "OS 16";
                qt_?();
                v25 = (char *)1;
                int32_t v47 = qt_contains(); // 0xd37ad0
                v26 = (char *)&v3;
                qt_?();
                if ((char)v47 == 0) {
                    // 0xd37b02
                    v26 = "Download Mode";
                    qt_?();
                    v26 = NULL;
                    uint32_t v48 = qt_contains(); // 0xd37b22
                    v27 = v46;
                    int32_t v49 = (int32_t)&v27; // 0xd37b2e
                    int32_t v50 = v48 % 256 | v28 & -256; // 0xd37b2f
                    qt_?();
                    v17 = v12;
                    v16 = v50;
                    v21 = v49;
                    if ((char)v48 != 0) {
                        // 0xd37b3e
                        sub_d3be10();
                        v17 = v12;
                        v16 = v50;
                        v21 = v49;
                    }
                    goto lab_0xd38386;
                } else {
                    // 0xd37aee
                    v26 = (char *)2;
                    v18 = &v26;
                    goto lab_0xd37af5;
                }
            } else {
                // 0xd37aa7
                v25 = (char *)1;
                v18 = &v25;
                goto lab_0xd37af5;
            }
        } else {
            // 0xd37a57
            v23 = (char *)3;
            v18 = &v23;
            goto lab_0xd37af5;
        }
    }
  lab_0xd38386:;
    int32_t v51 = *v6;
    int32_t v52 = v51; // 0xd3838a
    int32_t v53 = v21; // 0xd3838a
    if (v51 == 8) {
        // 0xd3838c
        *(int32_t *)v21 = (int32_t)"SAM_MTP";
        int32_t v54 = sub_1802cb0(); // 0xd38396
        int32_t v55 = v21 - 4; // 0xd3839d
        *(int32_t *)v55 = v17;
        if ((char)v54 != 0) {
            // 0xd383a0
            *v13 = 0;
            *v14 = 0;
            qt_?();
        }
        // 0xd383b6
        v52 = *v6;
        v53 = v55;
    }
    int32_t v56 = v52; // 0xd383ba
    if (v52 == 51) {
        // 0xd383c8
        sub_d5a5a8();
        v56 = *v6;
    }
    int32_t v57 = v56; // 0xd383c0
    int32_t v58 = v53; // 0xd383c0
    int32_t v59; // bp-596, 0xd37824
    if (v56 == 80) {
        int32_t * v60 = (int32_t *)v53; // 0xd383d7
        *v60 = (int32_t)&g323;
        qt_?();
        int32_t * v61 = (int32_t *)(v53 - 4); // 0xd383e5
        *v60 = 1;
        int32_t v62 = &v3; // 0xd383f4
        *v61 = v62;
        uint32_t v63 = qt_contains(); // 0xd383f7
        int32_t * v64 = (int32_t *)(v53 - 8); // 0xd383fe
        *v64 = v16;
        int32_t * v65 = (int32_t *)(v53 - 12); // 0xd383ff
        *v65 = v16;
        int32_t * v66; // 0xd37824
        int32_t v67; // 0xd37824
        if ((char)v63 == 0) {
            // 0xd3848b
            *v65 = (int32_t)&g299;
            qt_?();
            int32_t v68 = v53 - 16; // 0xd3849d
            int32_t * v69 = (int32_t *)v68;
            *v69 = v63 % 256 | v16 & -256;
            v66 = v69;
            v67 = v68;
        } else {
            // 0xd38408
            *v65 = (int32_t)&g323;
            qt_?();
            *v65 = v11;
            *v61 = 1;
            *v64 = 0;
            *(int32_t *)(v53 - 16) = v12;
            sub_1800b30();
            *(int32_t *)(v53 - 32) = 1;
            int32_t v70 = sub_12a5c74((int32_t)&g2208); // 0xd38460
            int32_t v71 = v53 - 36; // 0xd38465
            int32_t * v72 = (int32_t *)v71;
            *v72 = v17;
            v22 = *(int32_t *)v70;
            qt_QString_ref();
            sub_12a5720();
            qt_?();
            v66 = v72;
            v67 = v71;
        }
        // 0xd3849e
        qt_?();
        *v66 = (int32_t)"Method 1";
        qt_?();
        *v66 = 0;
        *(int32_t *)(v67 - 4) = v11;
        char v73 = qt_contains();
        *(int32_t *)(v67 - 8) = v17;
        int32_t v74 = v67 - 12; // 0xd384da
        int32_t * v75 = (int32_t *)v74; // 0xd384da
        *v75 = v17;
        char v76 = v73; // 0xd384db
        int32_t v77 = v74; // 0xd384db
        if (v73 == 0) {
            // 0xd384dd
            *v75 = (int32_t)"Method 2";
            qt_?();
            *v75 = 0;
            *(int32_t *)(v67 - 16) = (int32_t)&v1;
            int32_t v78 = qt_contains(); // 0xd38507
            *(int32_t *)(v67 - 20) = v17;
            v77 = v67 - 24;
            *(int32_t *)v77 = v17;
            qt_?();
            v76 = v78;
        }
        // 0xd38525
        qt_?();
        int32_t v79; // 0xd37824
        int32_t v80; // 0xd37824
        if (v76 == 0) {
            // 0xd38525
            v79 = &v1;
            v80 = v77;
        } else {
            // 0xd38540
            qt_QVariant();
            int32_t * v81 = (int32_t *)v77; // 0xd38551
            *v81 = (int32_t)"%0";
            qt_?();
            int32_t * v82 = (int32_t *)(v77 - 4); // 0xd38564
            *v82 = (int32_t)"-> Please Dial This Code *#0*# or *#*#88#*#*";
            qt_?();
            *(int16_t *)(v77 + 4) = 32;
            *v81 = 0;
            *v82 = v62;
            *(int32_t *)(v77 - 8) = (int32_t)&v59;
            qt_QString_arg();
            *(int32_t *)(v77 - 20) = 3;
            *(int32_t *)(v77 - 24) = v11;
            int32_t v83 = &v1;
            *(int32_t *)(v77 - 16) = v83;
            qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
            qt_?();
            qt_?();
            qt_?();
            v79 = v83;
            v80 = v77 - 36;
        }
        int32_t * v84 = (int32_t *)v80; // 0xd385d3
        *v84 = (int32_t)"Method 1";
        qt_?();
        *v84 = 0;
        *(int32_t *)(v80 - 4) = v79;
        int32_t v85 = qt_contains(); // 0xd385f3
        *(int32_t *)(v80 - 8) = v17;
        int32_t v86 = v80 - 12; // 0xd385f9
        int32_t * v87 = (int32_t *)v86; // 0xd385f9
        *v87 = v17;
        qt_?();
        int32_t v88; // 0xd37824
        if ((char)v85 == 0) {
            // 0xd3862e
            *v87 = (int32_t)"Method 2";
            qt_?();
            *v87 = 0;
            *(int32_t *)(v80 - 16) = v79;
            int32_t v89 = qt_contains(); // 0xd3864e
            *(int32_t *)(v80 - 20) = v62;
            int32_t v90 = v80 - 24; // 0xd38654
            int32_t * v91 = (int32_t *)v90; // 0xd38654
            *v91 = v62;
            qt_?();
            v1 = v22;
            qt_QString_ref();
            *v91 = v79;
            if ((char)v89 == 0) {
                // 0xd38689
                sub_d374d0((int32_t)&g2208);
                v88 = v90;
            } else {
                // 0xd38678
                sub_d36854((int32_t)&g2208);
                v88 = v90;
            }
        } else {
            // 0xd38611
            v1 = v22;
            qt_QString_ref();
            *v87 = v79;
            v88 = v86;
        }
        // 0xd38698
        qt_?();
        qt_?();
        v57 = *v6;
        v58 = v88 - 4;
    }
    // 0xd386ab
    if (v57 >= 55) {
        // 0xd38b69
        return sub_a56268();
    }
    // 0xd386ba
    sub_11408f8();
    int32_t * v92 = (int32_t *)(v58 + 12); // 0xd386c7
    *v92 = 1;
    int32_t * v93 = (int32_t *)(v58 + 8); // 0xd386cf
    *v93 = 1;
    int32_t * v94 = (int32_t *)(v58 + 4); // 0xd386d7
    *v94 = 0;
    int32_t * v95 = (int32_t *)v58; // 0xd386df
    *v95 = v11;
    int32_t v96 = sub_1151a3c(&g2208, (int32_t)&g2208, (char)&g2208, (int32_t)&g2208); // 0xd386e2
    if ((char)v96 == 0) {
        // 0xd387f6
        sub_1140b14();
        // 0xd38b69
        return sub_a56268();
    }
    // 0xd386ef
    sub_115acc4();
    int32_t v97; // bp-564, 0xd37824
    *v94 = (int32_t)&v97;
    int32_t v98 = &v3; // 0xd3870c
    *v95 = v98;
    sub_13aa03c();
    *v92 = 1;
    *v93 = 1;
    int32_t v99 = &v1; // 0xd3872a
    *v95 = v99;
    *v94 = v98;
    int32_t v100 = sub_114a268((int32_t)&g2208, (int32_t)&g2208, (int32_t)&g2208); // 0xd38733
    qt_?();
    int32_t * v101; // 0xd3876f
    if ((char)v100 == 0) {
        goto lab_0xd387ef;
    } else {
        // 0xd3875a
        *(int32_t *)(v58 - 12) = 1;
        *(int32_t *)(v58 - 16) = v99;
        int32_t v102 = sub_114d848((int32_t)&g2208, (int32_t)&g2208); // 0xd38767
        *(int32_t *)(v58 - 20) = v17;
        v101 = (int32_t *)(v58 - 24);
        *v101 = v17;
        if ((char)v102 != 0) {
            goto lab_0xd3877e;
        } else {
            // 0xd38772
            if (*(int32_t *)(v1 + 4) != 0) {
                goto lab_0xd387ef;
            } else {
                goto lab_0xd3877e;
            }
        }
    }
  lab_0xd387ef:
    // 0xd387ef
    sub_115b040();
    // 0xd387f6
    sub_1140b14();
    // 0xd38b69
    return sub_a56268();
  lab_0xd37af5:
    // 0xd37af5
    sub_d3e058((int32_t)&g2208);
    int32_t v103 = (int32_t)v18 - 4; // 0xd37afc
    *(int32_t *)v103 = v28;
    v17 = v12;
    v16 = v28;
    v21 = v103;
    goto lab_0xd38386;
  lab_0xd3877e:
    // 0xd3877e
    *v101 = 180;
    sub_1157624((int32_t)&g2208);
    int32_t * v104 = (int32_t *)(v58 - 28); // 0xd3878c
    *v104 = v99;
    int32_t v105 = *v6; // 0xd3878d
    if (v105 != 53) {
        if (v105 != 54) {
            goto lab_0xd387ef;
        } else {
            // 0xd387c5
            *v104 = (int32_t)&g311;
            int32_t v106 = sub_1802cb0(); // 0xd387d2
            *(int32_t *)(v58 - 32) = v99;
            if ((char)v106 == 0) {
                // 0xd387e8
                sub_d540e8((int32_t)&g2208);
            } else {
                // 0xd387e1
                sub_d5024c((int32_t)&g2208);
            }
            // 0xd387b6
            goto lab_0xd387ef;
        }
    } else {
        // 0xd38795
        *v104 = (int32_t)&g311;
        int32_t v107 = sub_1802cb0(); // 0xd387a2
        *(int32_t *)(v58 - 32) = v99;
        if ((char)v107 == 0) {
            // 0xd387b9
            sub_d4f420((int32_t)&g2208);
        } else {
            // 0xd387b1
            sub_d468cc((int32_t)&g2208);
        }
        // 0xd387b6
        goto lab_0xd387ef;
    }
  lab_0xd381e5:
    // 0xd381e5
    *(int32_t *)v20 = (int32_t)"NOT_ALLOWED_BY_AUTOBLOCKER";
    int32_t v108 = sub_159b270(); // 0xd381f2
    int32_t * v109 = (int32_t *)(v20 - 4); // 0xd381f9
    *v109 = v30;
    qt_QVariant();
    *v109 = (int32_t)"%0";
    qt_?();
    int32_t * v110 = (int32_t *)(v20 - 8);
    int32_t v111; // 0xd37824
    int32_t v112; // 0xd37824
    if ((char)v108 == 0) {
        // 0xd382de
        *v110 = (int32_t)"Response!";
        qt_?();
        int32_t v113 = &v59; // 0xd38315
        *(int16_t *)v20 = 32;
        *v109 = 0;
        *v110 = (int32_t)&v3;
        *(int32_t *)(v20 - 12) = v113;
        qt_QString_arg();
        int32_t v114 = v20 - 28; // 0xd38348
        *(int32_t *)(v20 - 24) = 7;
        *(int32_t *)(v20 - 20) = v29;
        *(int32_t *)v114 = v11;
        qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
        v111 = v113;
        v112 = v114;
    } else {
        // 0xd38258
        *v110 = (int32_t)"NOT ALLOWED BY AUTOBLOCKER";
        qt_?();
        int32_t v115 = &v59; // 0xd3828f
        *(int16_t *)v20 = 32;
        *v109 = 0;
        *v110 = (int32_t)&v3;
        *(int32_t *)(v20 - 12) = v115;
        qt_QString_arg();
        int32_t v116 = v20 - 28; // 0xd382c2
        *(int32_t *)(v20 - 24) = 3;
        *(int32_t *)(v20 - 20) = v29;
        *(int32_t *)v116 = v11;
        qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
        v111 = v115;
        v112 = v116;
    }
    goto lab_0xd3835f;
  lab_0xd3835f:
    // 0xd3835f
    qt_?();
    qt_?();
    qt_?();
    sub_a56268();
    v17 = v30;
    v16 = v111;
    v21 = v112 - 12;
    goto lab_0xd38386;
  lab_0xd38185:
    // 0xd38185
    qt_QVariant();
    int32_t * v117 = (int32_t *)v19; // 0xd38196
    *v117 = (int32_t)"%0";
    qt_?();
    int32_t * v118 = (int32_t *)(v19 - 4); // 0xd381a2
    *v118 = (int32_t)"OK";
    qt_?();
    int32_t v119 = &v59; // 0xd38202
    *(int16_t *)(v19 + 4) = 32;
    *v117 = 0;
    *v118 = (int32_t)&v3;
    *(int32_t *)(v19 - 8) = v119;
    qt_QString_arg();
    int32_t v120 = v19 - 24; // 0xd3823c
    *(int32_t *)(v19 - 20) = 7;
    *(int32_t *)(v19 - 16) = v29;
    *(int32_t *)v120 = v11;
    qt_qDebug(&g2208, (int32_t)&g2208, &g2208);
    v111 = v119;
    v112 = v120;
    goto lab_0xd3835f;
}
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
/*
 * worker_run
 * Entry VA: 0x136ffcc
 * Cleaned pseudocode from RetDec v5.0 (best-effort names/comments).
 *
 * Known fields (offsets from the object base):
 *   self +0x140 : Qualcomm task
 *   self +0x144 : MTKCommIO task
 *   self +0x14C : SPDCommIO task
 *   self +0x150 : HisiCommIO task
 *   self +0x154 : Fastboot task
 *   self +0x158 : ADB task
 *   self +0x15C : Exynos task
 *   self +0x160 : Samsung task
 *   self +0x170 : context/data
 *
 * Key strings observed:
 *   "MTK pointer is null!"
 *   "Executing MTK task with"
 *   "About to call mPerformTask()..."
 *   "QCOM pointer is null!"
 *   "Executing QCOM task with"
 *   "SPD pointer is null!"
 *   "Executing SPD task with"
 *   "About to call uPerformTask()..."
 *   "KIRIN pointer is null!"
 *   "Executing KIRIN task with"
 *   "adb pointer is null!"
 *   "Executing adb task with"
 *   "fastboot pointer is null!"
 *   "Executing fastboot task with"
 *   "Exynos pointer is null!"
 *   "Executing Exynos task with"
 *   "samsung pointer is null!"
 *   "Executing Samsung task with"
 *
 * `self` is the original object pointer (this).
 * Calls named `sub_<addr>` could not be resolved to a known method.
 */


// Address range: 0x136ffcc - 0x1370d1f
int32_t Worker_run(void) {
    // 0x136ffcc
    int32_t self; // 0x136ffcc
    int32_t v2 = self;
    int32_t v3 = 2; // bp-236, 0x136ffe6
    sub_167a590();
    qt_QString();
    sub_13b8170((int32_t *)qt_QString_append());
    qt_emit_signal();
    qt_QString_dtor();
    qt_QString_dtor();
    qt_QString_dtor();
    v3 = 2;
    sub_167a590();
    qt_QString();
    qt_QString();
    qt_QString_append();
    sub_19964c4();
    qt_QString();
    qt_QString_append();
    sub_199648c();
    qt_QString_dtor();
    qt_QString_dtor();
    qt_QString_dtor();
    qt_QString_dtor();
    qt_QString_dtor();
    int32_t * v4 = (int32_t *)(v2 + 364); // 0x137017e
    int32_t v5 = *v4; // 0x137017e
    g2203 = v5 - 2;
    int32_t v6; // 0x136ffcc
    int32_t v7; // 0x136ffcc
    int32_t v8; // 0x136ffcc
    char * v9; // bp-388, 0x136ffcc
    int32_t v10; // bp-396, 0x136ffcc
    char * v11; // bp-400, 0x136ffcc
    int32_t v12; // bp-412, 0x136ffcc
    switch (v5) {
        case 2: {
            // 0x1370197
            v3 = 2;
            if (sub_16390d0() == 0) {
                // 0x137031b
                sub_167abe0();
                v9 = "MTK pointer is null!";
                v6 = qt_QString();
                goto lab_0x1370a9c;
            } else {
                // 0x13701e1
                sub_167a590();
                v9 = "Executing MTK task with";
                qt_QString();
                qt_QString_append();
                int32_t v13; // bp-240, 0x136ffcc
                v10 = &v13;
                v9 = (char *)sub_16390d0();
                int32_t v14; // bp-304, 0x136ffcc
                v10 = &v14;
                qt_emit_signal();
                qt_QString_dtor();
                qt_QString_dtor();
                qt_QString_dtor();
                *(int32_t *)(sub_16390d0() + 24) = *(int32_t *)(v2 + 368);
                v3 = 2;
                v10 = &v3;
                sub_167a590();
                v11 = "About to call mPerformTask()...";
                qt_QString();
                qt_QString_dtor();
                sub_16390d0();
                MTK_mPerformTask();
                v3 = 2;
                sub_167a590();
                v12 = qt_QString();
                v7 = &v12;
                goto lab_0x1370b39;
            }
        }
        case 3: {
            int32_t * v15 = (int32_t *)(v2 + 320); // 0x13704cd
            v3 = 2;
            if (*v15 == 0) {
                // 0x1370589
                sub_167abe0();
                v9 = "QCOM pointer is null!";
                v6 = qt_QString();
                goto lab_0x1370a9c;
            } else {
                // 0x137050b
                sub_167a590();
                v9 = "Executing QCOM task with";
                qt_QString();
                qt_QString_append();
                int32_t v16; // bp-296, 0x136ffcc
                v10 = &v16;
                v9 = (char *)*v15;
                qt_emit_signal();
                qt_QString_dtor();
                qt_QString_dtor();
                qt_QString_dtor();
                *(int32_t *)(*v15 + 16) = *(int32_t *)(v2 + 368);
                Qualcomm_qPerformTask();
                v8 = &v10;
                goto lab_0x1370b3e;
            }
        }
        case 4: {
            int32_t * v17 = (int32_t *)(v2 + 332); // 0x137033e
            v3 = 2;
            if (*v17 == 0) {
                // 0x13704aa
                sub_167abe0();
                v9 = "SPD pointer is null!";
                v6 = qt_QString();
                goto lab_0x1370a9c;
            } else {
                // 0x1370380
                sub_167a590();
                v9 = "Executing SPD task with";
                qt_QString();
                qt_QString_append();
                v9 = (char *)*v17;
                int32_t v18; // bp-300, 0x136ffcc
                v10 = &v18;
                qt_emit_signal();
                qt_QString_dtor();
                qt_QString_dtor();
                qt_QString_dtor();
                *(int32_t *)(*v17 + 168) = *(int32_t *)(v2 + 368);
                v10 = &v3;
                v3 = 2;
                sub_167a590();
                v11 = "About to call uPerformTask()...";
                qt_QString();
                qt_QString_dtor();
                SPD_uPerformTask();
                v3 = 2;
                sub_167a590();
                v12 = qt_QString();
                v7 = &v12;
                goto lab_0x1370b39;
            }
        }
        case 5: {
            int32_t * v19 = (int32_t *)(v2 + 336); // 0x13705ac
            v3 = 2;
            if (*v19 == 0) {
                // 0x1370678
                sub_167abe0();
                v9 = "KIRIN pointer is null!";
                v6 = qt_QString();
                goto lab_0x1370a9c;
            } else {
                // 0x13705ee
                sub_167a590();
                v9 = "Executing KIRIN task with";
                qt_QString();
                qt_QString_append();
                int32_t v20; // bp-292, 0x136ffcc
                v10 = &v20;
                v9 = (char *)*v19;
                qt_emit_signal();
                qt_QString_dtor();
                qt_QString_dtor();
                qt_QString_dtor();
                int32_t v21 = *(int32_t *)(v2 + 368); // 0x1370653
                v10 = v21;
                v11 = (char *)sub_a108d4(v21);
                Hisi_hPerformTask();
                v8 = (int32_t)&v11;
                goto lab_0x1370b3e;
            }
        }
        case 6: {
            int32_t * v22 = (int32_t *)(v2 + 344); // 0x137078a
            v3 = 2;
            if (*v22 == 0) {
                // 0x13708c0
                sub_167abe0();
                v9 = "adb pointer is null!";
                v6 = qt_QString();
                goto lab_0x1370a9c;
            } else {
                // 0x13707cc
                sub_167a590();
                v9 = "Executing adb task with";
                qt_QString();
                qt_QString_append();
                v9 = (char *)*v22;
                int32_t v23; // bp-284, 0x136ffcc
                v10 = &v23;
                qt_emit_signal();
                qt_QString_dtor();
                qt_QString_dtor();
                qt_QString_dtor();
                int32_t v24 = *(int32_t *)(v2 + 368); // 0x1370835
                v10 = v24;
                int32_t v25 = sub_ab6088(v24); // 0x1370844
                v11 = (char *)v25;
                ADB_aPerformTask(v25);
                v11 = (char *)&v3;
                v3 = 2;
                sub_167a980();
                qt_QString();
                v12 = sub_b29800();
                qt_QVariant();
                v7 = &v12;
                goto lab_0x1370b39;
            }
        }
        case 7: {
            int32_t * v26 = (int32_t *)(v2 + 340); // 0x137069b
            v3 = 2;
            if (*v26 == 0) {
                // 0x1370767
                sub_167abe0();
                v9 = "fastboot pointer is null!";
                v6 = qt_QString();
                goto lab_0x1370a9c;
            } else {
                // 0x13706dd
                sub_167a590();
                v9 = "Executing fastboot task with";
                qt_QString();
                qt_QString_append();
                int32_t v27; // bp-288, 0x136ffcc
                v10 = &v27;
                v9 = (char *)*v26;
                qt_emit_signal();
                qt_QString_dtor();
                qt_QString_dtor();
                qt_QString_dtor();
                int32_t v28 = *(int32_t *)(v2 + 368); // 0x1370742
                v10 = v28;
                int32_t v29 = sub_d66120(v28); // 0x1370751
                v11 = (char *)v29;
                Fastboot_fPerformTask(v29);
                v8 = (int32_t)&v11;
                goto lab_0x1370b3e;
            }
        }
        case 8: {
            int32_t * v30 = (int32_t *)(v2 + 348); // 0x13708e3
            v3 = 2;
            if (*v30 == 0) {
                // 0x137099f
                sub_167abe0();
                v9 = "Exynos pointer is null!";
                v6 = qt_QString();
                goto lab_0x1370a9c;
            } else {
                // 0x1370921
                sub_167a590();
                v9 = "Executing Exynos task with";
                qt_QString();
                qt_QString_append();
                int32_t v31; // bp-280, 0x136ffcc
                v10 = &v31;
                v9 = (char *)*v30;
                qt_emit_signal();
                qt_QString_dtor();
                qt_QString_dtor();
                qt_QString_dtor();
                *(int32_t *)(*v30 + 16) = *(int32_t *)(v2 + 368);
                Exynos_ePerformTask();
                v8 = &v10;
                goto lab_0x1370b3e;
            }
        }
        case 9: {
            int32_t * v32 = (int32_t *)(v2 + 352); // 0x13709c2
            v3 = 2;
            if (*v32 == 0) {
                // 0x1370a7e
                sub_167abe0();
                v9 = "samsung pointer is null!";
                v6 = qt_QString();
                goto lab_0x1370a9c;
            } else {
                // 0x1370a00
                sub_167a590();
                v9 = "Executing Samsung task with";
                qt_QString();
                qt_QString_append();
                int32_t v33; // bp-276, 0x136ffcc
                v10 = &v33;
                v9 = (char *)*v32;
                qt_emit_signal();
                qt_QString_dtor();
                qt_QString_dtor();
                qt_QString_dtor();
                *(int32_t *)(*v32 + 16) = *(int32_t *)(v2 + 368);
                Samsung_sPerformTask();
                v8 = &v10;
                goto lab_0x1370b3e;
            }
        }
        default: {
            // 0x1370aa8
            v3 = 2;
            sub_167abe0();
            v9 = "Unknown task type:";
            qt_QString();
            qt_QString_append();
            int32_t v34; // bp-272, 0x136ffcc
            v10 = &v34;
            v9 = (char *)*v4;
            sub_19964c4();
            qt_QString_dtor();
            qt_QString_dtor();
            v7 = &v10;
            goto lab_0x1370b39;
        }
    }
  lab_0x1370b39:
    // 0x1370b39
    qt_QString_dtor();
    v8 = v7;
    goto lab_0x1370b3e;
  lab_0x1370b3e:
    // 0x1370b3e
    v3 = 2;
    int32_t v35 = &v3; // 0x1370b68
    *(int32_t *)v8 = v35;
    sub_167a980();
    *(int32_t *)(v8 - 4) = (int32_t)&g724;
    qt_QString();
    *(int32_t *)(v8 - 8) = 0;
    int32_t v36 = sub_b29800(); // 0x1370ba3
    int32_t v37 = v8 - 12; // 0x1370ba8
    int32_t * v38 = (int32_t *)v37;
    *v38 = v36;
    qt_QVariant();
    qt_QString_dtor();
    int32_t v39 = *v4; // 0x1370bbb
    g2204 = v39 - 2;
    int32_t * v40 = v38; // 0x1370bd0
    int32_t v41 = v37; // 0x1370bd0
    int32_t v42; // 0x136ffcc
    int32_t v43; // 0x136ffcc
    switch (v39) {
        case 2: {
            // 0x1370bd7
            *(int32_t *)(v2 + 100) = *(int32_t *)(sub_16390d0() + 20);
            v43 = sub_16390d0() + 32;
            goto lab_0x1370c8b;
        }
        case 3: {
            // 0x1370c05
            v42 = v2 + 320;
            goto lab_0x1370c82;
        }
        case 4: {
            int32_t v44 = *(int32_t *)(v2 + 332); // 0x1370c0d
            *(int32_t *)(v2 + 100) = *(int32_t *)(v44 + 144);
            v43 = v44 + 176;
            goto lab_0x1370c8b;
        }
        case 5: {
            int32_t v45 = *(int32_t *)(v2 + 336); // 0x1370c23
            *v38 = v45;
            *(int32_t *)(v2 + 100) = *(int32_t *)(v45 + 228);
            sub_a0b570((int32_t)&g2208);
            goto lab_0x1370c95;
        }
        case 6: {
            int32_t v46 = *(int32_t *)(v2 + 344); // 0x1370c59
            *v38 = v46;
            *(int32_t *)(v2 + 100) = *(int32_t *)(v46 + 224);
            sub_aab3b4((int32_t)&g2208);
            goto lab_0x1370c95;
        }
        case 7: {
            int32_t v47 = *(int32_t *)(v2 + 340); // 0x1370c3e
            *v38 = v47;
            *(int32_t *)(v2 + 100) = *(int32_t *)(v47 + 276);
            sub_d5e0d8((int32_t)&g2208);
            goto lab_0x1370c95;
        }
        case 8: {
            // 0x1370c74
            v42 = v2 + 348;
            goto lab_0x1370c82;
        }
        case 9: {
            // 0x1370c7c
            v42 = v2 + 352;
            goto lab_0x1370c82;
        }
        default: {
            goto lab_0x1370ca8;
        }
    }
  lab_0x1370a9c:;
    int32_t v48 = (int32_t)&v9 - 4; // 0x1370aa2
    *(int32_t *)v48 = v6;
    v7 = v48;
    goto lab_0x1370b39;
  lab_0x1370ca8:
    // 0x1370ca8
    *v40 = v35;
    v3 = 2;
    *(int32_t *)(v2 + 284) = *(int32_t *)(v2 + 100);
    sub_167a590();
    *(int32_t *)(v41 - 4) = (int32_t)"=== Worker::run() COMPLETED ===";
    *(int32_t *)(v41 - 8) = qt_QString();
    qt_QString_dtor();
    return sub_136ff64();
  lab_0x1370c8b:
    // 0x1370c8b
    *v38 = v43;
    sub_1213b44((int32_t)&g2208);
    goto lab_0x1370c95;
  lab_0x1370c82:;
    int32_t v51 = *(int32_t *)v42;
    *(int32_t *)(v2 + 100) = *(int32_t *)(v51 + 12);
    v43 = v51 + 24;
    goto lab_0x1370c8b;
  lab_0x1370c95:
    // 0x1370c95
    *(int32_t *)(v8 - 16) = v35;
    sub_1214c7c((int32_t)&g2208);
    int32_t v49 = v8 - 20; // 0x1370ca0
    int32_t * v50 = (int32_t *)v49;
    *v50 = v2 + 112;
    sub_1214884();
    v40 = v50;
    v41 = v49;
    goto lab_0x1370ca8;
}
