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
