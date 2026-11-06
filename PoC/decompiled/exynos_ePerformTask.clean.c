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
