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
