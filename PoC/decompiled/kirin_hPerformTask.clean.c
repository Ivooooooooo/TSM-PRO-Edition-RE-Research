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
