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
