s32 test(s32 arg0, s32 arg1, s32 arg2) {
    *sp = (?32) D_400130;
    sp->unk4 = (s16) D_400130.unk4;
    return ((arg2 + (arg0 * 4))->unk4 + ((*(sp + arg0) * *(arg1 + (arg0 * 4))) + *(&D_410140 + (arg0 * 2))));
}
