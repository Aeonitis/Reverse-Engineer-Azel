#include "TWN_CAMP.PRG.h"


int FUN_00000260(int param_1, int param_2) {
    code *pcVar1;
    code *pcVar2;
    code *pcVar3;
    code *pcVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int local_24;

    pcVar4 = DAT_000003b8;
    pcVar3 = DAT_000003b4;
    pcVar2 = DAT_000003b0;
    pcVar1 = DAT_000003ac;
    iVar7 = *(int *) (param_1 + 4);
    iVar5 = (int) *(short *) (param_2 + 0x12);
    if (iVar5 != 0) {
        local_24 = iVar5;
        if (*(int *) (param_2 + 0x48) == 0) {
            iVar6 = *(int *) (param_2 + 0x2c);
            do {
                (*pcVar1)(iVar7);
                (*DAT_000003bc)(iVar6, iVar7);
                (*DAT_000003c0)(iVar6 + 0xc, iVar7);
                (*pcVar4)(*(undefined4 *) (iVar6 + 0x18), iVar7);
                (*pcVar3)(*(undefined4 *) (iVar6 + 0x1c), iVar7);
                iVar5 = (*pcVar2)(*(undefined4 *) (iVar6 + 0x20), iVar7);
                iVar6 = iVar6 + DAT_000003aa;
                local_24 = local_24 + -1;
                iVar7 = iVar7 + 0x30;
            } while (local_24 != 0);
        } else {
            iVar6 = *(int *) (param_2 + 0x48);
            do {
                (*pcVar1)(iVar7);
                (*DAT_000003bc)(iVar6, iVar7);
                (*DAT_000003c0)(iVar6 + 0xc, iVar7);
                (*pcVar4)(*(undefined4 *) (iVar6 + 0x18), iVar7);
                (*pcVar3)(*(undefined4 *) (iVar6 + 0x1c), iVar7);
                iVar5 = (*pcVar2)(*(undefined4 *) (iVar6 + 0x20), iVar7);
                iVar6 = iVar6 + 0x48;
                local_24 = local_24 + -1;
                iVar7 = iVar7 + 0x30;
            } while (local_24 != 0);
        }
    }
    return iVar5;
}


void FUN_00000320(undefined4 param_1, int *param_2, undefined4 param_3, int param_4) {
    for (; param_4 != 0; param_4 = param_4 + -1) {
        (*DAT_000003c4)(param_1, *param_2);
        (*DAT_000003c8)(*param_2);
        *param_2 = *param_2 + 100;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000003e6(int *param_1, int *param_2, undefined4 param_3) {
    (*_LAB_000004c4)(-*param_2, param_3);
    (*_LAB_000004c8)(-param_2[1], param_3);
    (*_LAB_000004cc)(-param_2[2], param_3);
    (*_LAB_000004d0)(-param_1[2], param_3);
    (*_LAB_000004d4)(-param_1[1], param_3);
    // WARNING: Could not recover jumptable at 0x00000434. Too many branches
    // WARNING: Treating indirect jump as call
    (*_LAB_000004d8)(-*param_1, param_3);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00000438(int param_1, int param_2, undefined4 param_3) {
    code *pcVar1;
    char **ppcVar2;
    char *pcVar3;
    int iVar4;
    int iVar5;
    char *pcVar6;
    int iVar7;

    pcVar1 = _LAB_000004cc;
    iVar4 = (int) _LAB_000004bc;
    ppcVar2 = (char **) (*_LAB_000004dc * 8 + _LAB_000004e0);
    pcVar6 = *ppcVar2;
    pcVar3 = ppcVar2[1];
    do {
        iVar5 = param_1;
        if (pcVar6[1] != '\0') {
            iVar5 = param_1 + -100;
            (*pcVar1)(-*(int *) (param_1 + -0x44), param_3);
            (*_LAB_000004c4)(-*(int *) (param_1 + -0x4c), param_3);
            (*_LAB_000004c8)(-*(int *) (param_1 + -0x48), param_3);
        }
        iVar7 = *(int *) (param_2 + 0x2c) + *pcVar6 * iVar4;
        FUN_000003e6(iVar7, iVar7 + 0xc, param_3);
        pcVar3 = pcVar3 + -1;
        pcVar6 = pcVar6 + 2;
        param_1 = iVar5;
    } while (pcVar3 != (char *) 0x0);
    return;
}


int FUN_000004e4(int param_1, int param_2, int param_3) {
    undefined4 uVar1;
    int iVar2;
    int iVar3;
    int *piVar4;
    int local_14;
    int iStack16;
    int iStack12;

    iStack12 = 0;
    iStack16 = 0;
    local_14 = 0;
    if (0 < param_2) {
        do {
            param_2 = param_2 + -1;
            piVar4 = (int *) (**(int **) (param_1 + -4) * (int) DAT_00000610 + *(int *) (param_3 + 0x2c));
            local_14 = local_14 + *piVar4;
            iStack16 = iStack16 + piVar4[1];
            iStack12 = iStack12 + piVar4[2];
            param_1 = param_1 + -100;
        } while (param_2 != 0);
    }
    uVar1 = (*DAT_00000614)(&local_14, &local_14);
    iVar2 = (*DAT_00000618)(uVar1);
    iVar3 = iVar2 * DAT_00000612;
    if (DAT_0000061c < iVar2 * DAT_00000612) {
        iVar3 = DAT_0000061c;
    }
    if (iVar3 < DAT_00000620) {
        iVar3 = DAT_00000620;
    }
    return iVar3;
}


void FUN_00000554(int param_1, int param_2) {
    undefined *puVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    for (; 0 < param_2; param_2 = param_2 + -1) {
        iVar3 = (*DAT_00000624)(param_1 + -200, param_1, 3);
        iVar4 = (*DAT_00000624)();
        iVar5 = (*DAT_0000062c)(PTR_LAB_00000628, *(int *) (param_1 + -0x4c) - iVar3);
        pcVar2 = DAT_0000062c;
        puVar1 = PTR_LAB_00000628;
        *(int *) (param_1 + -0x4c) = iVar5 + iVar3;
        iVar3 = (*pcVar2)(puVar1, *(int *) (param_1 + -0x48) - iVar4);
        *(int *) (param_1 + -0x48) = iVar3 + iVar4;
        param_1 = param_1 + -100;
    }
    return;
}


undefined4 FUN_000005ca(int *param_1, int param_2, uint param_3) {
    uint uVar1;
    uint uVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int local_2c;
    uint uStack40;
    int iStack36;

    uVar1 = DAT_00000634;
    iVar8 = *DAT_00000630;
    iVar7 = *DAT_00000630;
    iVar9 = *(char *) (iVar8 + 0x85) * 100 + *(int *) (iVar8 + 0x80);
    uStack40 = *(int *) (iVar9 + 0x1c) - param_1[1];
    if ((DAT_00000634 & uStack40) == 0) {
        uStack40 = DAT_0000072c & uStack40;
    } else {
        uStack40 = DAT_00000638 | uStack40;
    }
    if ((DAT_00000730 < (int) uStack40) || ((int) uStack40 < DAT_00000734)) {
        if ((int) uStack40 < 0) {
            uStack40 = -uStack40;
        }
        if ((int) DAT_00000738 < (int) uStack40) {
            uStack40 = DAT_00000738;
        }
        iVar3 = (*DAT_00000740)(*param_1, DAT_00000738 - uStack40, DAT_0000073c);
        *param_1 = iVar3;
    }
    iVar6 = DAT_00000748;
    iVar3 = DAT_00000744;
    local_2c = *param_1 - *(int *) (iVar9 + 0x18) >> 2;
    uStack40 = param_1[1] - *(int *) (iVar9 + 0x1c) >> 2;
    if (DAT_00000744 < local_2c) {
        local_2c = DAT_00000744;
    }
    if (local_2c < DAT_00000748) {
        local_2c = DAT_00000748;
    }
    if (DAT_00000744 < (int) uStack40) {
        uStack40 = DAT_00000744;
    }
    if ((int) uStack40 < DAT_00000748) {
        uStack40 = DAT_00000748;
    }
    *(int *) (iVar9 + 0x18) = *(int *) (iVar9 + 0x18) + local_2c;
    *(uint * )(iVar9 + 0x1c) = *(int *) (iVar9 + 0x1c) + uStack40;
    if (param_2 == 0) {
        *(int *) (iVar9 + 0x20) = param_1[2];
    } else {
        uVar4 = param_1[2] - *(int *) (iVar9 + 0x20);
        if ((uVar1 & uVar4) == 0) {
            uVar4 = DAT_0000072c & uVar4;
        } else {
            uVar4 = DAT_0000074c | uVar4;
        }
        iStack36 = (int) uVar4 >> 1;
        if (iVar3 < iStack36) {
            iStack36 = iVar3;
        }
        if (iStack36 < iVar6) {
            iStack36 = iVar6;
        }
        *(int *) (iVar9 + 0x20) = *(int *) (iVar9 + 0x20) + iStack36;
    }
    uVar4 = *(uint * )(*(int *) (iVar8 + 0x80) + 0x18);
    if ((uVar1 & uVar4) == 0) {
        uVar4 = DAT_0000072c & uVar4;
    } else {
        uVar4 = DAT_0000074c | uVar4;
    }
    *(uint * )(*(int *) (iVar8 + 0x80) + 0x18) = uVar4;
    uVar4 = *(uint * )(*(int *) (iVar8 + 0x80) + 0x1c);
    if ((uVar1 & uVar4) == 0) {
        uVar4 = DAT_000007f0 & uVar4;
    } else {
        uVar4 = DAT_0000074c | uVar4;
    }
    *(uint * )(*(int *) (iVar8 + 0x80) + 0x1c) = uVar4;
    FUN_00000554(iVar9, *(char *) (iVar8 + 0x85) + -1);
    uVar2 = DAT_000007f8;
    uVar4 = DAT_000007f4;
    iVar9 = (int) *(char *) (iVar8 + 0x85);
    iVar3 = (int) DAT_000007ee;
    iVar8 = *(int *) (iVar8 + 0x80);
    do {
        iVar6 = **(int **) (iVar8 + 0xc4) * iVar3 + *(int *) (iVar7 + 0x54);
        uVar5 = *(int *) (iVar8 + 0x7c) + *(int *) (iVar6 + 0xc);
        if ((uVar1 & uVar5) == 0) {
            uVar5 = uVar5 & DAT_000007f0;
        } else {
            uVar5 = uVar5 | DAT_000007fc;
        }
        if ((int) uVar4 < (int) uVar5) {
            uVar5 = uVar4;
        }
        if ((int) uVar5 < (int) uVar2) {
            uVar5 = uVar2;
        }
        *(uint * )(iVar8 + 0x7c) = uVar5 - *(int *) (iVar6 + 0xc);
        uVar5 = *(int *) (iVar8 + 0x80) + *(int *) (iVar6 + 0x10);
        if ((uVar1 & uVar5) == 0) {
            uVar5 = uVar5 & DAT_000007f0;
        } else {
            uVar5 = uVar5 | DAT_000007fc;
        }
        if ((int) param_3 < (int) uVar5) {
            uVar5 = param_3;
        }
        if ((int) uVar5 < (int) -param_3) {
            uVar5 = -param_3;
        }
        iVar9 = iVar9 + -1;
        *(uint * )(iVar8 + 0x80) = uVar5 - *(int *) (iVar6 + 0x10);
        iVar8 = iVar8 + 100;
    } while (iVar9 != 0);
    return 0x60;
}


void FUN_00000b46(void) {
    int *piVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    undefined4 uVar5;
    undefined *in_r1;
    int iVar6;
    int *unaff_r8;
    int *piVar7;
    int unaff_r9;
    int unaff_r10;
    int unaff_r11;
    int unaff_r12;
    undefined *unaff_r13;
    undefined *unaff_r14;
    int *in_stack_00000000;

    do {
        pcVar2 = DAT_00000bbc;
        if (unaff_r14 < in_r1) {
            *unaff_r14 = (char) unaff_r9;
            unaff_r14[1] = (char) unaff_r12;
            iVar3 = (*pcVar2)();
            pcVar2 = DAT_00000bc0;
            iVar6 = (int) DAT_00000ba4;
            iVar4 = (int) DAT_00000ba2;
            *(int *) (unaff_r14 + 0x7c) = -iVar3;
            *(int *) (unaff_r14 + 0x74) = -iVar3;
            *(int *) (unaff_r14 + 0x88) = iVar3;
            *(int *) (unaff_r14 + 0x80) = iVar3;
            *(int *) (unaff_r14 + iVar4) = iVar3;
            *(int *) (unaff_r14 + 0x78) = -(iVar3 + iVar6);
            (*pcVar2)(unaff_r14 + 0x10, unaff_r14 + 0x74, unaff_r14 + 0x80);
            unaff_r14 = unaff_r14 + DAT_00000b96;
        }
        while (true) {
            unaff_r12 = unaff_r12 + 1;
            unaff_r10 = unaff_r10 + 0x14;
            piVar7 = unaff_r8;
            if (unaff_r8[1] <= unaff_r12) {
                do {
                    unaff_r9 = unaff_r9 + 1;
                    unaff_r8 = piVar7 + 2;
                    if (*in_stack_00000000 <= unaff_r9) {
                        uVar5 = (*DAT_00000c8c)();
                        iVar3 = (int) DAT_00000c7e;
                        *(undefined4 *) (DAT_00000c84 + unaff_r11) = uVar5;
                        *(uint * )(unaff_r11 + DAT_00000c86) = (uint)((int) unaff_r13 - (iVar3 + unaff_r11)) >> 1;
                        return;
                    }
                    piVar1 = piVar7 + 3;
                    piVar7 = unaff_r8;
                } while (*piVar1 == 0);
                unaff_r12 = 0;
                unaff_r10 = *unaff_r8;
            }
            if ((int) DAT_00000b9e < *(int *) (unaff_r10 + 0x10)) break;
            if (unaff_r13 < (undefined *) (DAT_00000c7e + unaff_r11 + 10U)) {
                *unaff_r13 = (char) unaff_r9;
                unaff_r13[1] = (char) unaff_r12;
                unaff_r13 = unaff_r13 + 2;
            }
        }
        in_r1 = (undefined *) (DAT_00000b9a + unaff_r11 + (int) DAT_00000ba0);
    } while (true);
}


void FUN_00000c20(int param_1) {
    code *pcVar1;
    int iVar2;
    int iVar3;
    int *piVar4;
    int iVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    int *piVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    undefined *puVar12;
    undefined *puVar13;
    undefined4 *puVar14;

    puVar14 = (undefined4 *) (((*(uint * )(*DAT_00000c90 + 0xc) & 0xffff) * 0x1c & 0xff) + DAT_00000c98);
    if (puVar14[2] != 0) {
        uVar6 = puVar14[6];
        uVar7 = puVar14[5];
        if (*(short *) (DAT_00000c94 + DAT_00000c88) < 0) {
            uVar6 = puVar14[4];
        }
        if (*(short *) (DAT_00000c94 + DAT_00000c8a) < 0) {
            uVar7 = puVar14[3];
        }
        (*DAT_00000c9c)(puVar14[1], puVar14[2], uVar6, uVar7, *puVar14);
    }
    iVar9 = 0;
    puVar13 = (undefined *) (DAT_00000b9a + param_1);
    puVar12 = (undefined *) (DAT_00000b9c + param_1);
    piVar4 = (int *) (((*(uint * )(*DAT_00000bb4 + 0xc) & 0xffff) * 0x1c & 0xff) + DAT_00000bb8);
    piVar8 = (int *) piVar4[1];
    do {
        if (piVar8[1] != 0) {
            iVar11 = 0;
            iVar10 = *piVar8;
            do {
                pcVar1 = DAT_00000bbc;
                if ((int) DAT_00000b9e < *(int *) (iVar10 + 0x10)) {
                    if (puVar13 < (undefined *) (DAT_00000b9a + param_1 + (int) DAT_00000ba0)) {
                        *puVar13 = (char) iVar9;
                        puVar13[1] = (char) iVar11;
                        iVar2 = (*pcVar1)();
                        pcVar1 = DAT_00000bc0;
                        iVar5 = (int) DAT_00000ba4;
                        iVar3 = (int) DAT_00000ba2;
                        *(int *) (puVar13 + 0x7c) = -iVar2;
                        *(int *) (puVar13 + 0x74) = -iVar2;
                        *(int *) (puVar13 + 0x88) = iVar2;
                        *(int *) (puVar13 + 0x80) = iVar2;
                        *(int *) (puVar13 + iVar3) = iVar2;
                        *(int *) (puVar13 + 0x78) = -(iVar2 + iVar5);
                        (*pcVar1)(puVar13 + 0x10, puVar13 + 0x74, puVar13 + 0x80);
                        puVar13 = puVar13 + DAT_00000b96;
                    }
                } else if (puVar12 < (undefined *) (DAT_00000c7e + param_1 + 10U)) {
                    *puVar12 = (char) iVar9;
                    puVar12[1] = (char) iVar11;
                    puVar12 = puVar12 + 2;
                }
                iVar11 = iVar11 + 1;
                iVar10 = iVar10 + 0x14;
            } while (iVar11 < piVar8[1]);
        }
        iVar9 = iVar9 + 1;
        piVar8 = piVar8 + 2;
    } while (iVar9 < *piVar4);
    uVar6 = (*DAT_00000c8c)();
    iVar9 = (int) DAT_00000c7e;
    *(undefined4 *) (DAT_00000c84 + param_1) = uVar6;
    *(uint * )(param_1 + DAT_00000c86) = (uint)((int) puVar12 - (iVar9 + param_1)) >> 1;
    return;
}


void FUN_00000ca0(int param_1) {
    int iVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    uint uVar5;

    iVar1 = DAT_00000da8;
    iVar4 = *DAT_00000dac;
    uVar5 = *(uint * )(iVar4 + 0xc);
    iVar3 = ((uVar5 & 0xffff) * 0x1c & 0xff) + DAT_00000db0;
    if ((-1 < (int) uVar5) && ((int) uVar5 < 8)) {
        (*DAT_00000db4)(param_1);
        piVar2 = DAT_00000db8;
        *(char *) (param_1 + 0xc) = (char) uVar5;
        *(undefined2 *) (param_1 + 0x14) = 0xffff;
        *(undefined4 *) (param_1 + 0x1c) = *(undefined4 *) ((uVar5 * 2 + 0x14) * 0x10 + *piVar2 + 0xc);
        *(undefined4 *) (param_1 + 0x20) = *(undefined4 *) (uVar5 * 4 + DAT_00000dbc);
        (*DAT_00000dc0)(iVar4 + 0x28, *(undefined4 *) (iVar3 + 4));
        FUN_00000c20(param_1);
    }
    *(undefined4 *) (iVar4 + DAT_00000da0) = 0;
    iVar3 = (int) DAT_00000da2;
    *(undefined2 *) (iVar3 + param_1) = *(undefined2 *) (iVar1 + 0x1a);
    ((undefined2 *) (iVar3 + param_1))[1] = *(undefined2 *) (iVar1 + 0x1c);
    return;
}


void FUN_00000dc8(int param_1, int param_2) {
    int iVar1;
    undefined4 *puVar2;

    iVar1 = DAT_00000fec;
    *(short *) (param_1 + 0x14) = (short) param_2;
    puVar2 = (undefined4 *) (param_2 * 8 + iVar1);
    *(undefined4 *) (param_1 + 0x24) = *puVar2;
    *(undefined4 *) (param_1 + 0x28) = puVar2[1];
    // WARNING: Could not recover jumptable at 0x00000e02. Too many branches
    // WARNING: Treating indirect jump as call
    (*DAT_00000ff4)(*DAT_00000ff0 + 0x28,
                    *(undefined4 *)
                            (**(int **) (param_1 + 0x1c) +
                             (int) *(short *) (param_2 * 2 + *(int *) (param_1 + 0x20))), 0xf);
    return;
}


int FUN_00000e06(int param_1) {
    short sVar1;
    int iVar2;
    int iVar3;
    char *pcVar4;

    sVar1 = (*DAT_00000ff8)(*DAT_00000ff0 + 0x28);
    iVar3 = (int) sVar1;
    pcVar4 = *(char **) (param_1 + 0x24);
    if (pcVar4 != (char *) 0x0) {
        iVar2 = *(int *) (param_1 + 0x28);
        do {
            if (iVar3 == *pcVar4) {
                (*DAT_00000ffc)((int) pcVar4[1]);
                return iVar3;
            }
            iVar2 = iVar2 + -1;
            pcVar4 = pcVar4 + 2;
        } while (iVar2 != 0);
    }
    return iVar3;
}


void FUN_00000e50(int param_1, int param_2) {
    undefined4 uVar1;

    uVar1 = DAT_00001000;
    if (*(short *) (param_1 + 0x14) != param_2) {
        if (*(short *) (param_1 + 0x14) < 10) {
            if ((9 < param_2) && (param_2 != 0x17)) {
                *(byte * )(param_1 + 0xe) = *(byte * )(param_1 + 0xe) | 1;
                *(undefined4 *) (param_1 + 0x34) = uVar1;
                param_2 = 0x17;
            }
        } else if ((param_2 < 10) && (param_2 != 9)) {
            param_2 = 9;
            *(byte * )(param_1 + 0xe) = *(byte * )(param_1 + 0xe) | 1;
            *(undefined4 *) (param_1 + 0x34) = uVar1;
        }
        FUN_00000dc8(param_1, param_2);
    }
    FUN_00000e06(param_1);
    return;
}


int FUN_00000e9c(int param_1) {
    int iVar1;

    do {
        iVar1 = (int) **(short **) (param_1 + 0x34);
        if (iVar1 == -2) {
            *(undefined *) (param_1 + 0x12) = 0;
        } else {
            if (iVar1 != -1) {
                if (iVar1 != 0) {
                    return iVar1;
                }
                *(byte * )(param_1 + 0xe) = *(byte * )(param_1 + 0xe) & 0xfe;
                return 0;
            }
            *(undefined *) (param_1 + 0x12) = 1;
        }
        *(int *) (param_1 + 0x34) = *(int *) (param_1 + 0x34) + 2;
    } while (true);
}


void FUN_00000f24(int param_1, undefined4 param_2) {
    int iVar1;
    undefined4 uVar2;

    *(byte * )(param_1 + 0xe) = *(byte * )(param_1 + 0xe) | 1;
    *(undefined4 *) (param_1 + 0x34) = param_2;
    iVar1 = FUN_00000e9c(param_1);
    if (iVar1 != 0) {
        if (*(short *) (param_1 + 0x14) < 10) {
            if (iVar1 == 9) {
                LAB_00000f5e:
                *(int *) (param_1 + 0x34) = *(int *) (param_1 + 0x34) + 2;
                return;
            }
            if ((9 < iVar1) && (iVar1 != 0x17)) {
                uVar2 = 0x17;
                LAB_00000f76:
                FUN_00000dc8(param_1, uVar2);
                return;
            }
        } else {
            if (iVar1 == 0x17) goto LAB_00000f5e;
            if ((iVar1 < 10) && (iVar1 != 9)) {
                uVar2 = 9;
                goto LAB_00000f76;
            }
        }
        FUN_00000dc8(param_1);
        *(int *) (param_1 + 0x34) = *(int *) (param_1 + 0x34) + 2;
    }
    return;
}


void FUN_00000f8e(int param_1, int param_2) {
    code *pcVar1;
    short sVar3;
    int iVar2;
    undefined4 uVar4;

    if (*(short *) (param_1 + 0x16) != 0) {
        *(short *) (param_1 + 0x16) = *(short *) (param_1 + 0x16) + -1;
        FUN_00000e50(param_1, (int) *(short *) (param_2 + 4));
        return;
    }
    (*DAT_00001004)();
    sVar3 = (*DAT_0000100c)();
    pcVar1 = DAT_00001004;
    *(short *) (param_1 + 0x16) = *(short *) (param_2 + 2) + sVar3;
    (*pcVar1)();
    iVar2 = (*DAT_0000100c)();
    if (*(int *) (param_2 + 8) < iVar2) {
        if (*(int *) (param_2 + 0x10) < iVar2) {
            uVar4 = *(undefined4 *) (param_2 + 0x1c);
        } else {
            uVar4 = *(undefined4 *) (param_2 + 0x14);
        }
        FUN_00000f24(param_1, uVar4);
    } else {
        FUN_00000f24(param_1, *(undefined4 *) (param_2 + 0xc));
    }
    FUN_00000e06(param_1);
    return;
}


undefined4 FUN_0000102c(int *param_1, int *param_2) {
    uint uVar1;

    uVar1 = *param_2 - *param_1;
    if ((uVar1 & DAT_00001100) == 0) {
        uVar1 = uVar1 & DAT_00001108;
    } else {
        uVar1 = uVar1 | DAT_00001104;
    }
    if (((int) uVar1 < DAT_0000110c) && (DAT_00001110 < (int) uVar1)) {
        *param_1 = *param_2;
        return 1;
    }
    if ((int) uVar1 < 1) {
        *param_1 = *param_1 - DAT_0000110c;
    } else {
        *param_1 = *param_1 + DAT_0000110c;
    }
    return 0;
}


void FUN_00001070(int param_1) {
    int iVar1;

    FUN_00000e50(param_1, 0x14);
    if ((*(short *) (param_1 + 0x14) == 0x14) &&
        (iVar1 = FUN_0000102c(param_1 + 0x68, param_1 + 0x38), iVar1 != 0)) {
        *(byte * )(param_1 + 0xe) = *(byte * )(param_1 + 0xe) & 0xfd;
    }
    return;
}


void FUN_000010a8(int param_1) {
    // WARNING: Could not recover jumptable at 0x000010ce. Too many branches
    // WARNING: Treating indirect jump as call
    (*DAT_00001118)(*(int *) (*DAT_00001114 + (int) DAT_000010fc) - *(int *) (param_1 + 0x58),
                    ((int *) (*DAT_00001114 + (int) DAT_000010fc))[2] - *(int *) (param_1 + 0x60));
    return;
}


undefined4 FUN_00001144(int param_1, int param_2, int param_3) {
    int iVar1;
    uint uVar2;

    iVar1 = FUN_000010a8(param_1);
    uVar2 = (param_2 + iVar1) - *(int *) (param_1 + 0x68);
    if ((uVar2 & DAT_00001214) == 0) {
        uVar2 = uVar2 & DAT_00001208;
    } else {
        uVar2 = uVar2 | DAT_00001218;
    }
    if (((int) uVar2 < param_3) && (-param_3 < (int) uVar2)) {
        return 1;
    }
    *(uint * )(param_1 + 0x38) = param_2 + iVar1 & DAT_00001208;
    FUN_00001070(param_1);
    return 0;
}


undefined4 FUN_0000119e(void) {
    int iVar1;
    undefined4 in_r7;
    int iVar2;

    iVar2 = *(int *) (DAT_0000121c + 0x7c);
    iVar1 = (*DAT_00001224)(DAT_00001220, (int) DAT_00001206, 0x20, in_r7, DAT_0000121c);
    iVar2 = iVar2 - iVar1;
    if (iVar2 < -0xf) {
        return 2;
    }
    if (iVar2 < -5) {
        return 3;
    }
    if (0xf < iVar2) {
        return 6;
    }
    if (5 < iVar2) {
        return 5;
    }
    return 4;
}


int FUN_0000135c(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4) {
    byte bVar1;
    int iVar2;
    undefined4 *puVar3;
    code *pcVar4;
    int iVar5;
    undefined4 uVar6;
    int iVar7;
    byte *pbVar8;

    pcVar4 = DAT_00001434;
    puVar3 = DAT_00001430;
    pbVar8 = DAT_0000142c;
    iVar2 = DAT_00001428;
    iVar5 = 0x11;
    iVar7 = DAT_0000141e + DAT_00001428;
    if (*(char *) (param_1 + 0x11) < '\t') {
        if (((*DAT_0000142c & *(byte * )(DAT_00001428 + 1)) == 0) &&
            ((DAT_0000142c[2] & *(byte * )(DAT_00001428 + DAT_00001420)) != 0)) {
            iVar5 = 0x11;
            if (*(char *) (param_1 + 0x11) < '\x05') {
                *(undefined *) (param_1 + 0x10) = 0;
                iVar7 = (*pcVar4)(param_1 + 0x58, *puVar3, 9, param_4, iVar7);
                iVar5 = 0x11;
                if (*(char *) (param_1 + 0x11) < '\x02') {
                    if (iVar7 < DAT_00001422) {
                        *(undefined *) (param_1 + 0x11) = 2;
                        bVar1 = pbVar8[1];
                        iVar5 = (int) (char) bVar1;
                        if ((bVar1 & *(byte * )(iVar2 + DAT_00001420)) == 0) {
                            uVar6 = (*DAT_00001438)();
                            (*DAT_0000143c)(10, uVar6);
                            bVar1 = pbVar8[1];
                            iVar5 = (int) (char) bVar1;
                            pbVar8 = (byte * )(DAT_00001420 + iVar2);
                            *pbVar8 = *pbVar8 | bVar1;
                        }
                    }
                } else {
                    iVar5 = 0x11;
                    if (('\x01' < *(char *) (param_1 + 0x11)) && (DAT_00001424 < iVar7)) {
                        iVar5 = 0x11;
                        *(undefined *) (param_1 + 0x11) = 0;
                    }
                }
            }
        } else {
            *(undefined *) (param_1 + 0x10) = 0;
            iVar5 = 0x11;
            *(undefined *) (param_1 + 0x11) = 9;
        }
    }
    return iVar5;
}


void FUN_000015e2(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4) {
    int iVar1;

    iVar1 = (int) DAT_0000161a;
    *(char *) (param_1 + iVar1) = (char) param_2;
    *(char *) (param_1 + iVar1 + 1) = (char) ((uint) param_2 >> 8);
    *(char *) (param_1 + iVar1 + 2) = (char) ((uint) param_2 >> 0x10);
    *(char *) (param_1 + iVar1 + 3) = (char) param_3;
    *(char *) (param_1 + iVar1 + 4) = (char) ((uint) param_3 >> 8);
    *(char *) (param_1 + iVar1 + 5) = (char) ((uint) param_3 >> 0x10);
    *(undefined4 *) (param_1 + iVar1 + 8) = 0;
    *(undefined4 *) (param_1 + iVar1 + 0xc) = param_4;
    return;
}


int FUN_00001a4c(int param_1) {
    int iVar1;
    int iVar2;

    iVar1 = (int) *(char *) (param_1 + 0x11);
    if (iVar1 == 7) {
        FUN_00000f24(param_1, DAT_00001aa8);
        *(undefined *) (param_1 + 0x12) = 1;
        iVar2 = (int) DAT_00001aa6;
        *(undefined2 *) (param_1 + 0x16) = 0;
        iVar1 = 0x11;
        *(int *) (param_1 + 0x2c) = iVar2;
        *(undefined *) (param_1 + 0x11) = 8;
    } else if (iVar1 == 8) {
        iVar1 = FUN_00001144(param_1, 0, DAT_00001aac);
        if (iVar1 != 0) {
            iVar1 = FUN_00000f8e(param_1, DAT_00001ab0);
        }
        iVar2 = *(int *) (param_1 + 0x2c) + -1;
        *(int *) (param_1 + 0x2c) = iVar2;
        if (iVar2 == 0) {
            iVar1 = 0x11;
            *(undefined *) (param_1 + 0x11) = 0;
        }
    }
    return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_00001ab4(int param_1) {
    code *pcVar1;
    uint uVar2;
    undefined4 uVar3;
    int iVar4;
    int iVar5;
    uint uVar6;
    undefined uVar7;
    undefined4 *puVar8;
    int local_1c;
    int iStack24;
    int iStack20;
    int local_10;

    pcVar1 = DAT_000018d4;
    uVar6 = (uint) * (char *) (param_1 + 0x11);
    switch (uVar6) {
        case 0:
            *(undefined *) (param_1 + 0x12) = 0;
            uVar6 = 0x11;
            *(undefined *) (param_1 + 0x11) = 1;
            break;
        case 1:
            uVar6 = FUN_00000f8e(param_1, DAT_00001bec);
            return uVar6;
        case 2:
            FUN_00000f24(param_1, DAT_00001bf0);
            *(undefined *) (param_1 + 0x12) = 0;
            uVar6 = 0x11;
            *(undefined *) (param_1 + 0x11) = 3;
            break;
        case 3:
            uVar6 = FUN_00000f8e(param_1, DAT_00001bf4);
            return uVar6;
        case 4:
            *(undefined *) (param_1 + 0x12) = 1;
            if (*(short *) (param_1 + 0x14) < 10) {
                uVar6 = FUN_00000e50(param_1, 1);
                return uVar6;
            }
            uVar6 = FUN_00000e50(param_1, 10);
            return uVar6;
        case 5:
            *(undefined *) (param_1 + 0x12) = 1;
            *(undefined4 *) (param_1 + 0x2c) = 0x1e;
            *(undefined4 *) (param_1 + 0x30) = 0;
            uVar7 = 6;
            goto LAB_00001b7e;
        case 6:
            if (*(int *) (param_1 + 0x30) == 0) {
                iVar5 = *(int *) (param_1 + 0x2c) + -1;
                *(int *) (param_1 + 0x2c) = iVar5;
                local_10 = DAT_00001bfc;
                if (iVar5 != 0) {
                    uVar6 = FUN_00000e50(param_1, 10);
                    return uVar6;
                }
                *(undefined *) (param_1 + 0x12) = 0;
                *(undefined4 *) (param_1 + 0x30) = 1;
                iVar5 = FUN_000010a8(param_1);
                uVar6 = (local_10 + iVar5) - *(int *) (param_1 + 0x68);
                if ((uVar6 & DAT_00001100) == 0) {
                    uVar6 = uVar6 & DAT_00001208;
                } else {
                    uVar6 = uVar6 | DAT_00001104;
                }
                uVar2 = 0x68;
                if ((_DAT_0000120c < (int) uVar6) || ((int) uVar6 < DAT_00001210)) {
                    *(uint * )(param_1 + 0x38) = DAT_00001208 & local_10 + iVar5;
                    uVar2 = (int) *(char *) (param_1 + 0xe) | 2;
                    *(char *) (param_1 + 0xe) = (char) uVar2;
                }
                return uVar2;
            }
            FUN_00000f24(param_1, DAT_00001bf8);
            uVar6 = 0x11;
            *(undefined *) (param_1 + 0x11) = 0;
            break;
        case 7:
            *(undefined *) (param_1 + 0x12) = 1;
            uVar7 = 8;
            *(undefined4 *) (param_1 + 0x2c) = 0x5a;
        LAB_00001b7e:
            uVar6 = 0x11;
            *(undefined *) (param_1 + 0x11) = uVar7;
            break;
        case 8:
            uVar6 = FUN_00000e50(param_1, 1);
            iVar5 = *(int *) (param_1 + 0x2c) + -1;
            *(int *) (param_1 + 0x2c) = iVar5;
            if (iVar5 == 0) {
                FUN_00000f24(param_1, DAT_00001c00);
                *(undefined *) (param_1 + 0x12) = 0;
                uVar6 = 0x11;
                *(undefined *) (param_1 + 0x11) = 0;
            }
            break;
        case 9:
            *(undefined *) (param_1 + 0x12) = 0;
            uVar6 = FUN_00000e50(param_1, 0);
            break;
        case 10:
            *(undefined *) (param_1 + 0x12) = 0;
            *(undefined4 *) (param_1 + 0x2c) = 0x28;
            *(undefined4 *) (param_1 + 0x30) = 0;
            puVar8 = (undefined4 *) (DAT_000017a0 + param_1);
            *puVar8 = *(undefined4 *) (param_1 + 0x58);
            puVar8[1] = *(undefined4 *) (param_1 + 0x5c);
            puVar8[2] = *(undefined4 *) (param_1 + 0x60);
            iVar5 = DAT_000017b8;
            iVar4 = *DAT_000017b4;
            puVar8 = (undefined4 *) (DAT_000017a2 + param_1);
            *puVar8 = *(undefined4 *) (iVar4 + 0x44);
            puVar8[1] = *(undefined4 *) (iVar4 + 0x48);
            puVar8[2] = *(undefined4 *) (iVar4 + 0x4c);
            iVar4 = (int) DAT_0000178c;
            *(undefined4 *) (param_1 + iVar4) = *(undefined4 *) (iVar5 + 0x10);
            *(undefined4 *) (param_1 + iVar4 + 4) = *(undefined4 *) (iVar5 + 0x14);
            *(undefined4 *) (param_1 + iVar4 + 8) = *(undefined4 *) (iVar5 + 0x18);
            *(undefined *) (param_1 + 0x11) = 0xb;
            return 0x11;
        case 0xb:
            uVar6 = *(uint * )(param_1 + 0x30);
            if (uVar6 == 0) {
                uVar3 = (*DAT_000018d8)(*(undefined4 *) (param_1 + 0x2c), 0x28);
                local_1c = (*pcVar1)(*(int *) (param_1 + DAT_000018ca + 0xc) - *(int *) (param_1 + DAT_000018ca),
                                     uVar3);
                local_1c = local_1c + *(int *) (DAT_000018ca + param_1);
                iStack24 = (*pcVar1)(*(int *) (param_1 + DAT_000018cc + 0xc) - *(int *) (param_1 + DAT_000018cc),
                                     uVar3);
                iStack24 = iStack24 + *(int *) (DAT_000018cc + param_1);
                iStack20 = (*pcVar1)(*(int *) (param_1 + DAT_000018ce + 0xc) - *(int *) (param_1 + DAT_000018ce),
                                     uVar3);
                iStack20 = iStack20 + *(int *) (DAT_000018ce + param_1);
                uVar6 = (*DAT_000018dc)(&local_1c);
                iVar5 = *(int *) (param_1 + 0x2c);
                *(int *) (param_1 + 0x2c) = iVar5 + -1;
                if (iVar5 == 0) {
                    *(undefined4 *) (param_1 + 0x30) = 1;
                }
            } else if (uVar6 == 1) {
                FUN_00000e50(param_1, 10);
                uVar6 = (uint) * (short *) (param_1 + 0x14);
                if (uVar6 == 10) {
                    iVar5 = (int) DAT_000018d0;
                    *(undefined4 *) (param_1 + iVar5) = DAT_000018e0;
                    *(undefined4 *) (param_1 + iVar5 + 4) = 0x1e;
                    *(undefined4 *) (param_1 + iVar5 + 8) = 0x78;
                    uVar3 = *(undefined4 *) (param_1 + iVar5 + 0xc);
                    uVar6 = FUN_000015e2(param_1, uVar3, uVar3, 0, uVar3);
                    *(undefined4 *) (param_1 + -0xc) = DAT_000018e4;
                    *(undefined4 *) (param_1 + 0x30) = 2;
                }
            } else if (uVar6 == 2) {
                (*DAT_000018e8)(0x6f);
                (*DAT_000018f4)(param_1, DAT_000018f0, param_1 + 0x58, (int) DAT_000018d2, 4, 0x23,
                                PTR_LAB_00007fff_1_000018ec, 1);
                uVar6 = FUN_00000f24(param_1, DAT_000018f8);
                *(undefined4 *) (param_1 + 0x2c) = 0x28;
                *(undefined4 *) (param_1 + 0x30) = 3;
            } else if (uVar6 == 3) {
                iVar5 = *(int *) (param_1 + 0x2c) + -1;
                *(int *) (param_1 + 0x2c) = iVar5;
                if (iVar5 == 0) {
                    uVar6 = 0x11;
                    *(undefined4 *) (param_1 + -0xc) = DAT_00001a38;
                    *(undefined *) (param_1 + 0x11) = 0;
                } else {
                    uVar3 = (*DAT_00001a30)(0x28 - *(int *) (param_1 + 0x2c), 0x28);
                    local_1c = (*pcVar1)(*(int *) (param_1 + DAT_00001a24 + 0xc) -
                                         *(int *) (param_1 + DAT_00001a24), uVar3);
                    local_1c = local_1c + *(int *) (DAT_00001a24 + param_1);
                    iStack24 = (*pcVar1)(*(int *) (param_1 + DAT_00001a26 + 0xc) -
                                         *(int *) (param_1 + DAT_00001a26), uVar3);
                    iStack24 = iStack24 + *(int *) (DAT_00001a26 + param_1);
                    iStack20 = (*pcVar1)(*(int *) (param_1 + DAT_00001a28 + 0xc) -
                                         *(int *) (param_1 + DAT_00001a28), uVar3);
                    iStack20 = iStack20 + *(int *) (DAT_00001a28 + param_1);
                    uVar6 = (*DAT_00001a34)(&local_1c);
                }
            }
            return uVar6;
        case 0xc:
            *(undefined *) (param_1 + 0x12) = 0;
            *(undefined4 *) (param_1 + 0x30) = 0;
            iVar5 = _LAB_00001a3c;
            iVar4 = (int) DAT_00001a2a;
            *(undefined4 *) (param_1 + iVar4) = *(undefined4 *) (_LAB_00001a3c + 0x10);
            *(undefined4 *) (param_1 + iVar4 + 4) = *(undefined4 *) (iVar5 + 0x14);
            *(undefined4 *) (param_1 + iVar4 + 8) = *(undefined4 *) (iVar5 + 0x18);
            *(undefined *) (param_1 + 0x11) = 0xd;
            return 0x11;
        case 0xd:
            uVar6 = *(uint * )(param_1 + 0x30);
            if (uVar6 == 0) {
                FUN_00000e50(param_1, 10);
                uVar6 = (uint) * (short *) (param_1 + 0x14);
                if (uVar6 == 10) {
                    iVar5 = (int) DAT_00001a2e;
                    *(int *) (param_1 + iVar5) = (int) DAT_00001a2c;
                    *(undefined4 *) (param_1 + iVar5 + 4) = 0x1e;
                    *(undefined4 *) (param_1 + iVar5 + 8) = 0x78;
                    local_1c = *(int *) (param_1 + iVar5 + 0xc);
                    FUN_000015e2(param_1, local_1c, local_1c, 0);
                    *(undefined4 *) (param_1 + -0xc) = DAT_00001a40;
                    uVar6 = (*DAT_00001a44)(0x6f);
                    *(int *) (param_1 + 0x30) = *(int *) (param_1 + 0x30) + 1;
                }
            } else if (uVar6 == 1) {
                uVar6 = FUN_00000f24(param_1, DAT_00001a48);
                *(int *) (param_1 + 0x30) = *(int *) (param_1 + 0x30) + 1;
            } else if (uVar6 == 2) {
                *(undefined4 *) (param_1 + -0xc) = DAT_00001a38;
                uVar6 = 0x11;
                *(undefined *) (param_1 + 0x11) = 0;
            }
            return uVar6;
    }
    return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00001c04(int param_1) {
    code *pcVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    undefined4 *puVar5;
    int iStack28;
    int iStack24;
    int iStack20;

    uVar2 = DAT_00001d40;
    pcVar1 = DAT_000018d4;
    iVar4 = (int) *(char *) (param_1 + 0x11);
    switch (iVar4) {
        case 0:
            *(undefined *) (param_1 + 0x12) = 0;
            iVar4 = 0x11;
            *(undefined *) (param_1 + 0x11) = 1;
            break;
        case 1:
            iVar4 = FUN_00000f8e(param_1, DAT_00001d3c);
            return iVar4;
        case 2:
            *(undefined *) (param_1 + 0x12) = 0;
            iVar4 = 0x11;
            *(undefined *) (param_1 + 0x11) = 3;
            break;
        case 3:
            uVar2 = DAT_00001d3c;
        LAB_00001cd4:
            iVar4 = FUN_00000f8e(param_1, uVar2);
            return iVar4;
        case 4:
            *(undefined *) (param_1 + 0x12) = 1;
            if (*(short *) (param_1 + 0x14) < 10) {
                iVar4 = FUN_00000e50(param_1, 1);
                return iVar4;
            }
            iVar4 = FUN_00000e50(param_1, 10);
            return iVar4;
        case 5:
            *(undefined *) (param_1 + 0x12) = 1;
            iVar4 = FUN_00001144(param_1, 0, uVar2);
            if (iVar4 != 0) {
                *(int *) (param_1 + 0x2c) = (int) DAT_00001d36;
                iVar4 = 0x11;
                *(undefined *) (param_1 + 0x11) = 6;
            }
            break;
        case 6:
            iVar4 = *(int *) (param_1 + 0x2c) + -1;
            *(int *) (param_1 + 0x2c) = iVar4;
            uVar2 = DAT_00001d44;
            if (iVar4 != 0) goto LAB_00001cd4;
            FUN_00000f24(param_1, DAT_00001d48);
            *(undefined *) (param_1 + 0x12) = 0;
            iVar4 = 0x11;
            *(undefined *) (param_1 + 0x11) = 0;
            break;
        case 7:
            *(undefined *) (param_1 + 0x12) = 1;
            iVar4 = FUN_00001144(param_1, 0, uVar2);
            if (iVar4 != 0) {
                *(int *) (param_1 + 0x2c) = (int) DAT_00001d38;
                iVar4 = 0x11;
                *(undefined *) (param_1 + 0x11) = 8;
            }
            break;
        case 8:
            iVar4 = *(int *) (param_1 + 0x2c) + -1;
            *(int *) (param_1 + 0x2c) = iVar4;
            uVar2 = DAT_00001d44;
            if (iVar4 != 0) goto LAB_00001cd4;
            FUN_00000f24(param_1, DAT_00001d48);
            *(undefined *) (param_1 + 0x12) = 0;
            iVar4 = 0x11;
            *(undefined *) (param_1 + 0x11) = 0;
            break;
        case 9:
            *(undefined *) (param_1 + 0x12) = 0;
            iVar4 = FUN_00000e50(param_1, 0);
            break;
        case 10:
            *(undefined *) (param_1 + 0x12) = 0;
            *(undefined4 *) (param_1 + 0x2c) = 0x28;
            *(undefined4 *) (param_1 + 0x30) = 0;
            puVar5 = (undefined4 *) (DAT_000017a0 + param_1);
            *puVar5 = *(undefined4 *) (param_1 + 0x58);
            puVar5[1] = *(undefined4 *) (param_1 + 0x5c);
            puVar5[2] = *(undefined4 *) (param_1 + 0x60);
            iVar4 = DAT_000017b8;
            iVar3 = *DAT_000017b4;
            puVar5 = (undefined4 *) (DAT_000017a2 + param_1);
            *puVar5 = *(undefined4 *) (iVar3 + 0x44);
            puVar5[1] = *(undefined4 *) (iVar3 + 0x48);
            puVar5[2] = *(undefined4 *) (iVar3 + 0x4c);
            iVar3 = (int) DAT_0000178c;
            *(undefined4 *) (param_1 + iVar3) = *(undefined4 *) (iVar4 + 0x10);
            *(undefined4 *) (param_1 + iVar3 + 4) = *(undefined4 *) (iVar4 + 0x14);
            *(undefined4 *) (param_1 + iVar3 + 8) = *(undefined4 *) (iVar4 + 0x18);
            *(undefined *) (param_1 + 0x11) = 0xb;
            return 0x11;
        case 0xb:
            iVar4 = *(int *) (param_1 + 0x30);
            if (iVar4 == 0) {
                uVar2 = (*DAT_000018d8)(*(undefined4 *) (param_1 + 0x2c), 0x28);
                iStack28 = (*pcVar1)(*(int *) (param_1 + DAT_000018ca + 0xc) - *(int *) (param_1 + DAT_000018ca),
                                     uVar2);
                iStack28 = iStack28 + *(int *) (DAT_000018ca + param_1);
                iStack24 = (*pcVar1)(*(int *) (param_1 + DAT_000018cc + 0xc) - *(int *) (param_1 + DAT_000018cc),
                                     uVar2);
                iStack24 = iStack24 + *(int *) (DAT_000018cc + param_1);
                iStack20 = (*pcVar1)(*(int *) (param_1 + DAT_000018ce + 0xc) - *(int *) (param_1 + DAT_000018ce),
                                     uVar2);
                iStack20 = iStack20 + *(int *) (DAT_000018ce + param_1);
                iVar4 = (*DAT_000018dc)(&iStack28);
                iVar3 = *(int *) (param_1 + 0x2c);
                *(int *) (param_1 + 0x2c) = iVar3 + -1;
                if (iVar3 == 0) {
                    *(undefined4 *) (param_1 + 0x30) = 1;
                }
            } else if (iVar4 == 1) {
                FUN_00000e50(param_1, 10);
                iVar4 = (int) *(short *) (param_1 + 0x14);
                if (iVar4 == 10) {
                    iVar4 = (int) DAT_000018d0;
                    *(undefined4 *) (param_1 + iVar4) = DAT_000018e0;
                    *(undefined4 *) (param_1 + iVar4 + 4) = 0x1e;
                    *(undefined4 *) (param_1 + iVar4 + 8) = 0x78;
                    uVar2 = *(undefined4 *) (param_1 + iVar4 + 0xc);
                    iVar4 = FUN_000015e2(param_1, uVar2, uVar2, 0, uVar2);
                    *(undefined4 *) (param_1 + -0xc) = DAT_000018e4;
                    *(undefined4 *) (param_1 + 0x30) = 2;
                }
            } else if (iVar4 == 2) {
                (*DAT_000018e8)(0x6f);
                (*DAT_000018f4)(param_1, DAT_000018f0, param_1 + 0x58, (int) DAT_000018d2, 4, 0x23,
                                PTR_LAB_00007fff_1_000018ec, 1);
                iVar4 = FUN_00000f24(param_1, DAT_000018f8);
                *(undefined4 *) (param_1 + 0x2c) = 0x28;
                *(undefined4 *) (param_1 + 0x30) = 3;
            } else if (iVar4 == 3) {
                iVar4 = *(int *) (param_1 + 0x2c) + -1;
                *(int *) (param_1 + 0x2c) = iVar4;
                if (iVar4 == 0) {
                    iVar4 = 0x11;
                    *(undefined4 *) (param_1 + -0xc) = DAT_00001a38;
                    *(undefined *) (param_1 + 0x11) = 0;
                } else {
                    uVar2 = (*DAT_00001a30)(0x28 - *(int *) (param_1 + 0x2c), 0x28);
                    iStack28 = (*pcVar1)(*(int *) (param_1 + DAT_00001a24 + 0xc) -
                                         *(int *) (param_1 + DAT_00001a24), uVar2);
                    iStack28 = iStack28 + *(int *) (DAT_00001a24 + param_1);
                    iStack24 = (*pcVar1)(*(int *) (param_1 + DAT_00001a26 + 0xc) -
                                         *(int *) (param_1 + DAT_00001a26), uVar2);
                    iStack24 = iStack24 + *(int *) (DAT_00001a26 + param_1);
                    iStack20 = (*pcVar1)(*(int *) (param_1 + DAT_00001a28 + 0xc) -
                                         *(int *) (param_1 + DAT_00001a28), uVar2);
                    iStack20 = iStack20 + *(int *) (DAT_00001a28 + param_1);
                    iVar4 = (*DAT_00001a34)(&iStack28);
                }
            }
            return iVar4;
        case 0xc:
            *(undefined *) (param_1 + 0x12) = 0;
            *(undefined4 *) (param_1 + 0x30) = 0;
            iVar4 = _LAB_00001a3c;
            iVar3 = (int) DAT_00001a2a;
            *(undefined4 *) (param_1 + iVar3) = *(undefined4 *) (_LAB_00001a3c + 0x10);
            *(undefined4 *) (param_1 + iVar3 + 4) = *(undefined4 *) (iVar4 + 0x14);
            *(undefined4 *) (param_1 + iVar3 + 8) = *(undefined4 *) (iVar4 + 0x18);
            *(undefined *) (param_1 + 0x11) = 0xd;
            return 0x11;
        case 0xd:
            iVar4 = *(int *) (param_1 + 0x30);
            if (iVar4 == 0) {
                FUN_00000e50(param_1, 10);
                iVar4 = (int) *(short *) (param_1 + 0x14);
                if (iVar4 == 10) {
                    iVar4 = (int) DAT_00001a2e;
                    *(int *) (param_1 + iVar4) = (int) DAT_00001a2c;
                    *(undefined4 *) (param_1 + iVar4 + 4) = 0x1e;
                    *(undefined4 *) (param_1 + iVar4 + 8) = 0x78;
                    iStack28 = *(int *) (param_1 + iVar4 + 0xc);
                    FUN_000015e2(param_1, iStack28, iStack28, 0);
                    *(undefined4 *) (param_1 + -0xc) = DAT_00001a40;
                    iVar4 = (*DAT_00001a44)(0x6f);
                    *(int *) (param_1 + 0x30) = *(int *) (param_1 + 0x30) + 1;
                }
            } else if (iVar4 == 1) {
                iVar4 = FUN_00000f24(param_1, DAT_00001a48);
                *(int *) (param_1 + 0x30) = *(int *) (param_1 + 0x30) + 1;
            } else if (iVar4 == 2) {
                *(undefined4 *) (param_1 + -0xc) = DAT_00001a38;
                iVar4 = 0x11;
                *(undefined *) (param_1 + 0x11) = 0;
            }
            return iVar4;
    }
    return iVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00001d4c(int param_1) {
    code *pcVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    undefined4 *puVar5;
    int iStack28;
    int iStack24;
    int iStack20;

    uVar2 = DAT_00001e88;
    pcVar1 = DAT_000018d4;
    iVar4 = (int) *(char *) (param_1 + 0x11);
    switch (iVar4) {
        case 0:
            *(undefined *) (param_1 + 0x12) = 1;
            iVar4 = 0x11;
            *(undefined *) (param_1 + 0x11) = 1;
            break;
        case 1:
            iVar4 = FUN_00000f8e(param_1, DAT_00001e80);
            return iVar4;
        case 2:
            *(undefined *) (param_1 + 0x12) = 1;
            iVar4 = 0x11;
            *(undefined *) (param_1 + 0x11) = 3;
            break;
        case 3:
            uVar2 = DAT_00001e84;
        LAB_00001e1c:
            iVar4 = FUN_00000f8e(param_1, uVar2);
            return iVar4;
        case 4:
            *(undefined *) (param_1 + 0x12) = 1;
            if (*(short *) (param_1 + 0x14) < 10) {
                iVar4 = FUN_00000e50(param_1, 1);
                return iVar4;
            }
            iVar4 = FUN_00000e50(param_1, 10);
            return iVar4;
        case 5:
            *(undefined *) (param_1 + 0x12) = 1;
            iVar4 = FUN_00001144(param_1, 0, uVar2);
            if (iVar4 != 0) {
                *(int *) (param_1 + 0x2c) = (int) DAT_00001e7e;
                iVar4 = 0x11;
                *(undefined *) (param_1 + 0x11) = 6;
            }
            break;
        case 6:
            iVar4 = *(int *) (param_1 + 0x2c) + -1;
            *(int *) (param_1 + 0x2c) = iVar4;
            uVar2 = DAT_00001e8c;
            if (iVar4 != 0) goto LAB_00001e1c;
            FUN_00000f24(param_1, DAT_00001e90);
            *(undefined *) (param_1 + 0x12) = 0;
            iVar4 = 0x11;
            *(undefined *) (param_1 + 0x11) = 0;
            break;
        case 7:
            *(undefined *) (param_1 + 0x12) = 1;
            iVar4 = FUN_00001144(param_1, 0, uVar2);
            if (iVar4 != 0) {
                *(int *) (param_1 + 0x2c) = (int) DAT_00001e7e;
                iVar4 = 0x11;
                *(undefined *) (param_1 + 0x11) = 8;
            }
            break;
        case 8:
            iVar4 = *(int *) (param_1 + 0x2c) + -1;
            *(int *) (param_1 + 0x2c) = iVar4;
            uVar2 = DAT_00001e94;
            if (iVar4 != 0) goto LAB_00001e1c;
            FUN_00000f24(param_1, DAT_00001e90);
            *(undefined *) (param_1 + 0x12) = 0;
            iVar4 = 0x11;
            *(undefined *) (param_1 + 0x11) = 0;
            break;
        case 9:
            *(undefined *) (param_1 + 0x12) = 0;
            iVar4 = FUN_00000e50(param_1, 0);
            break;
        case 10:
            *(undefined *) (param_1 + 0x12) = 0;
            *(undefined4 *) (param_1 + 0x2c) = 0x28;
            *(undefined4 *) (param_1 + 0x30) = 0;
            puVar5 = (undefined4 *) (DAT_000017a0 + param_1);
            *puVar5 = *(undefined4 *) (param_1 + 0x58);
            puVar5[1] = *(undefined4 *) (param_1 + 0x5c);
            puVar5[2] = *(undefined4 *) (param_1 + 0x60);
            iVar4 = DAT_000017b8;
            iVar3 = *DAT_000017b4;
            puVar5 = (undefined4 *) (DAT_000017a2 + param_1);
            *puVar5 = *(undefined4 *) (iVar3 + 0x44);
            puVar5[1] = *(undefined4 *) (iVar3 + 0x48);
            puVar5[2] = *(undefined4 *) (iVar3 + 0x4c);
            iVar3 = (int) DAT_0000178c;
            *(undefined4 *) (param_1 + iVar3) = *(undefined4 *) (iVar4 + 0x10);
            *(undefined4 *) (param_1 + iVar3 + 4) = *(undefined4 *) (iVar4 + 0x14);
            *(undefined4 *) (param_1 + iVar3 + 8) = *(undefined4 *) (iVar4 + 0x18);
            *(undefined *) (param_1 + 0x11) = 0xb;
            return 0x11;
        case 0xb:
            iVar4 = *(int *) (param_1 + 0x30);
            if (iVar4 == 0) {
                uVar2 = (*DAT_000018d8)(*(undefined4 *) (param_1 + 0x2c), 0x28);
                iStack28 = (*pcVar1)(*(int *) (param_1 + DAT_000018ca + 0xc) - *(int *) (param_1 + DAT_000018ca),
                                     uVar2);
                iStack28 = iStack28 + *(int *) (DAT_000018ca + param_1);
                iStack24 = (*pcVar1)(*(int *) (param_1 + DAT_000018cc + 0xc) - *(int *) (param_1 + DAT_000018cc),
                                     uVar2);
                iStack24 = iStack24 + *(int *) (DAT_000018cc + param_1);
                iStack20 = (*pcVar1)(*(int *) (param_1 + DAT_000018ce + 0xc) - *(int *) (param_1 + DAT_000018ce),
                                     uVar2);
                iStack20 = iStack20 + *(int *) (DAT_000018ce + param_1);
                iVar4 = (*DAT_000018dc)(&iStack28);
                iVar3 = *(int *) (param_1 + 0x2c);
                *(int *) (param_1 + 0x2c) = iVar3 + -1;
                if (iVar3 == 0) {
                    *(undefined4 *) (param_1 + 0x30) = 1;
                }
            } else if (iVar4 == 1) {
                FUN_00000e50(param_1, 10);
                iVar4 = (int) *(short *) (param_1 + 0x14);
                if (iVar4 == 10) {
                    iVar4 = (int) DAT_000018d0;
                    *(undefined4 *) (param_1 + iVar4) = DAT_000018e0;
                    *(undefined4 *) (param_1 + iVar4 + 4) = 0x1e;
                    *(undefined4 *) (param_1 + iVar4 + 8) = 0x78;
                    uVar2 = *(undefined4 *) (param_1 + iVar4 + 0xc);
                    iVar4 = FUN_000015e2(param_1, uVar2, uVar2, 0, uVar2);
                    *(undefined4 *) (param_1 + -0xc) = DAT_000018e4;
                    *(undefined4 *) (param_1 + 0x30) = 2;
                }
            } else if (iVar4 == 2) {
                (*DAT_000018e8)(0x6f);
                (*DAT_000018f4)(param_1, DAT_000018f0, param_1 + 0x58, (int) DAT_000018d2, 4, 0x23,
                                PTR_LAB_00007fff_1_000018ec, 1);
                iVar4 = FUN_00000f24(param_1, DAT_000018f8);
                *(undefined4 *) (param_1 + 0x2c) = 0x28;
                *(undefined4 *) (param_1 + 0x30) = 3;
            } else if (iVar4 == 3) {
                iVar4 = *(int *) (param_1 + 0x2c) + -1;
                *(int *) (param_1 + 0x2c) = iVar4;
                if (iVar4 == 0) {
                    iVar4 = 0x11;
                    *(undefined4 *) (param_1 + -0xc) = DAT_00001a38;
                    *(undefined *) (param_1 + 0x11) = 0;
                } else {
                    uVar2 = (*DAT_00001a30)(0x28 - *(int *) (param_1 + 0x2c), 0x28);
                    iStack28 = (*pcVar1)(*(int *) (param_1 + DAT_00001a24 + 0xc) -
                                         *(int *) (param_1 + DAT_00001a24), uVar2);
                    iStack28 = iStack28 + *(int *) (DAT_00001a24 + param_1);
                    iStack24 = (*pcVar1)(*(int *) (param_1 + DAT_00001a26 + 0xc) -
                                         *(int *) (param_1 + DAT_00001a26), uVar2);
                    iStack24 = iStack24 + *(int *) (DAT_00001a26 + param_1);
                    iStack20 = (*pcVar1)(*(int *) (param_1 + DAT_00001a28 + 0xc) -
                                         *(int *) (param_1 + DAT_00001a28), uVar2);
                    iStack20 = iStack20 + *(int *) (DAT_00001a28 + param_1);
                    iVar4 = (*DAT_00001a34)(&iStack28);
                }
            }
            return iVar4;
        case 0xc:
            *(undefined *) (param_1 + 0x12) = 0;
            *(undefined4 *) (param_1 + 0x30) = 0;
            iVar4 = _LAB_00001a3c;
            iVar3 = (int) DAT_00001a2a;
            *(undefined4 *) (param_1 + iVar3) = *(undefined4 *) (_LAB_00001a3c + 0x10);
            *(undefined4 *) (param_1 + iVar3 + 4) = *(undefined4 *) (iVar4 + 0x14);
            *(undefined4 *) (param_1 + iVar3 + 8) = *(undefined4 *) (iVar4 + 0x18);
            *(undefined *) (param_1 + 0x11) = 0xd;
            return 0x11;
        case 0xd:
            iVar4 = *(int *) (param_1 + 0x30);
            if (iVar4 == 0) {
                FUN_00000e50(param_1, 10);
                iVar4 = (int) *(short *) (param_1 + 0x14);
                if (iVar4 == 10) {
                    iVar4 = (int) DAT_00001a2e;
                    *(int *) (param_1 + iVar4) = (int) DAT_00001a2c;
                    *(undefined4 *) (param_1 + iVar4 + 4) = 0x1e;
                    *(undefined4 *) (param_1 + iVar4 + 8) = 0x78;
                    iStack28 = *(int *) (param_1 + iVar4 + 0xc);
                    FUN_000015e2(param_1, iStack28, iStack28, 0);
                    *(undefined4 *) (param_1 + -0xc) = DAT_00001a40;
                    iVar4 = (*DAT_00001a44)(0x6f);
                    *(int *) (param_1 + 0x30) = *(int *) (param_1 + 0x30) + 1;
                }
            } else if (iVar4 == 1) {
                iVar4 = FUN_00000f24(param_1, DAT_00001a48);
                *(int *) (param_1 + 0x30) = *(int *) (param_1 + 0x30) + 1;
            } else if (iVar4 == 2) {
                *(undefined4 *) (param_1 + -0xc) = DAT_00001a38;
                iVar4 = 0x11;
                *(undefined *) (param_1 + 0x11) = 0;
            }
            return iVar4;
    }
    return iVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00001e98(int param_1) {
    code *pcVar1;
    code *pcVar2;
    undefined4 uVar3;
    int iVar4;
    int iVar5;
    undefined uVar6;
    undefined4 *puVar7;
    int iStack28;
    int iStack24;
    int iStack20;

    pcVar2 = DAT_00001ff4;
    uVar3 = DAT_00001fdc;
    pcVar1 = DAT_000018d4;
    iVar5 = (int) *(char *) (param_1 + 0x11);
    switch (iVar5) {
        case 0:
            *(undefined *) (param_1 + 0x12) = 1;
            iVar5 = 0x11;
            *(undefined *) (param_1 + 0x11) = 1;
            break;
        case 1:
            iVar5 = FUN_00000f8e(param_1, DAT_00001fd8);
            return iVar5;
        case 2:
            *(undefined *) (param_1 + 0x12) = 1;
            iVar5 = FUN_00001144(param_1, 0, uVar3);
            if (iVar5 != 0) {
                *(int *) (param_1 + 0x2c) = (int) DAT_00001fd2;
                iVar5 = 0x11;
                *(undefined *) (param_1 + 0x11) = 3;
            }
            break;
        case 3:
            uVar3 = DAT_00001fd8;
            if (*(int *) (param_1 + 0x2c) != 0) {
                *(int *) (param_1 + 0x2c) = *(int *) (param_1 + 0x2c) + -1;
                uVar3 = DAT_00001fe0;
            }
            iVar5 = FUN_00000f8e(param_1, uVar3);
            return iVar5;
        case 4:
            *(undefined *) (param_1 + 0x12) = 1;
            if (*(short *) (param_1 + 0x14) < 10) {
                iVar5 = FUN_00000e50(param_1, 1);
                return iVar5;
            }
            iVar5 = FUN_00000e50(param_1, 10);
            return iVar5;
        case 5:
            (*DAT_00001fe4)(param_1);
            iVar5 = (int) DAT_00001fd4;
            *(undefined *) (param_1 + 0x12) = 1;
            *(int *) (param_1 + 0x2c) = iVar5;
            uVar6 = 6;
            goto LAB_00001f80;
        case 6:
            iVar5 = FUN_00001144(param_1, 0, DAT_00001fe8);
            if (iVar5 != 0) {
                iVar5 = FUN_00000f8e(param_1, DAT_00001fec);
            }
            iVar4 = *(int *) (param_1 + 0x2c) + -1;
            *(int *) (param_1 + 0x2c) = iVar4;
            if (iVar4 == 0) {
                iVar5 = 0x11;
                *(undefined *) (param_1 + 0x11) = 0;
            }
            break;
        case 7:
            (*DAT_00001fe4)(param_1);
            iVar5 = (int) DAT_00001fd4;
            uVar6 = 8;
            *(undefined *) (param_1 + 0x12) = 1;
            *(int *) (param_1 + 0x2c) = iVar5;
        LAB_00001f80:
            iVar5 = 0x11;
            *(undefined *) (param_1 + 0x11) = uVar6;
            break;
        case 8:
            iVar5 = FUN_00001144(param_1, 0, DAT_00001fe8);
            if (iVar5 != 0) {
                iVar5 = (*DAT_00001ff0)(param_1, DAT_00001fec);
            }
            iVar4 = *(int *) (param_1 + 0x2c) + -1;
            *(int *) (param_1 + 0x2c) = iVar4;
            if (iVar4 == 0) {
                iVar5 = 0x11;
                *(undefined *) (param_1 + 0x11) = 0;
            }
            break;
        case 9:
            *(undefined *) (param_1 + 0x12) = 0;
            iVar5 = (*pcVar2)(param_1, 0);
            break;
        case 10:
            *(undefined *) (param_1 + 0x12) = 0;
            *(undefined4 *) (param_1 + 0x2c) = 0x28;
            *(undefined4 *) (param_1 + 0x30) = 0;
            puVar7 = (undefined4 *) (DAT_000017a0 + param_1);
            *puVar7 = *(undefined4 *) (param_1 + 0x58);
            puVar7[1] = *(undefined4 *) (param_1 + 0x5c);
            puVar7[2] = *(undefined4 *) (param_1 + 0x60);
            iVar5 = DAT_000017b8;
            iVar4 = *DAT_000017b4;
            puVar7 = (undefined4 *) (DAT_000017a2 + param_1);
            *puVar7 = *(undefined4 *) (iVar4 + 0x44);
            puVar7[1] = *(undefined4 *) (iVar4 + 0x48);
            puVar7[2] = *(undefined4 *) (iVar4 + 0x4c);
            iVar4 = (int) DAT_0000178c;
            *(undefined4 *) (param_1 + iVar4) = *(undefined4 *) (iVar5 + 0x10);
            *(undefined4 *) (param_1 + iVar4 + 4) = *(undefined4 *) (iVar5 + 0x14);
            *(undefined4 *) (param_1 + iVar4 + 8) = *(undefined4 *) (iVar5 + 0x18);
            *(undefined *) (param_1 + 0x11) = 0xb;
            return 0x11;
        case 0xb:
            iVar5 = *(int *) (param_1 + 0x30);
            if (iVar5 == 0) {
                uVar3 = (*DAT_000018d8)(*(undefined4 *) (param_1 + 0x2c), 0x28);
                iStack28 = (*pcVar1)(*(int *) (param_1 + DAT_000018ca + 0xc) - *(int *) (param_1 + DAT_000018ca),
                                     uVar3);
                iStack28 = iStack28 + *(int *) (DAT_000018ca + param_1);
                iStack24 = (*pcVar1)(*(int *) (param_1 + DAT_000018cc + 0xc) - *(int *) (param_1 + DAT_000018cc),
                                     uVar3);
                iStack24 = iStack24 + *(int *) (DAT_000018cc + param_1);
                iStack20 = (*pcVar1)(*(int *) (param_1 + DAT_000018ce + 0xc) - *(int *) (param_1 + DAT_000018ce),
                                     uVar3);
                iStack20 = iStack20 + *(int *) (DAT_000018ce + param_1);
                iVar5 = (*DAT_000018dc)(&iStack28);
                iVar4 = *(int *) (param_1 + 0x2c);
                *(int *) (param_1 + 0x2c) = iVar4 + -1;
                if (iVar4 == 0) {
                    *(undefined4 *) (param_1 + 0x30) = 1;
                }
            } else if (iVar5 == 1) {
                FUN_00000e50(param_1, 10);
                iVar5 = (int) *(short *) (param_1 + 0x14);
                if (iVar5 == 10) {
                    iVar5 = (int) DAT_000018d0;
                    *(undefined4 *) (param_1 + iVar5) = DAT_000018e0;
                    *(undefined4 *) (param_1 + iVar5 + 4) = 0x1e;
                    *(undefined4 *) (param_1 + iVar5 + 8) = 0x78;
                    uVar3 = *(undefined4 *) (param_1 + iVar5 + 0xc);
                    iVar5 = FUN_000015e2(param_1, uVar3, uVar3, 0, uVar3);
                    *(undefined4 *) (param_1 + -0xc) = DAT_000018e4;
                    *(undefined4 *) (param_1 + 0x30) = 2;
                }
            } else if (iVar5 == 2) {
                (*DAT_000018e8)(0x6f, DAT_00001ec0);
                (*DAT_000018f4)(param_1, DAT_000018f0, param_1 + 0x58, (int) DAT_000018d2, 4, 0x23,
                                PTR_LAB_00007fff_1_000018ec, 1);
                iVar5 = FUN_00000f24(param_1, DAT_000018f8);
                *(undefined4 *) (param_1 + 0x2c) = 0x28;
                *(undefined4 *) (param_1 + 0x30) = 3;
            } else if (iVar5 == 3) {
                iVar5 = *(int *) (param_1 + 0x2c) + -1;
                *(int *) (param_1 + 0x2c) = iVar5;
                if (iVar5 == 0) {
                    iVar5 = 0x11;
                    *(undefined4 *) (param_1 + -0xc) = DAT_00001a38;
                    *(undefined *) (param_1 + 0x11) = 0;
                } else {
                    uVar3 = (*DAT_00001a30)(0x28 - *(int *) (param_1 + 0x2c), 0x28);
                    iStack28 = (*pcVar1)(*(int *) (param_1 + DAT_00001a24 + 0xc) -
                                         *(int *) (param_1 + DAT_00001a24), uVar3);
                    iStack28 = iStack28 + *(int *) (DAT_00001a24 + param_1);
                    iStack24 = (*pcVar1)(*(int *) (param_1 + DAT_00001a26 + 0xc) -
                                         *(int *) (param_1 + DAT_00001a26), uVar3);
                    iStack24 = iStack24 + *(int *) (DAT_00001a26 + param_1);
                    iStack20 = (*pcVar1)(*(int *) (param_1 + DAT_00001a28 + 0xc) -
                                         *(int *) (param_1 + DAT_00001a28), uVar3);
                    iStack20 = iStack20 + *(int *) (DAT_00001a28 + param_1);
                    iVar5 = (*DAT_00001a34)(&iStack28);
                }
            }
            return iVar5;
        case 0xc:
            *(undefined *) (param_1 + 0x12) = 0;
            *(undefined4 *) (param_1 + 0x30) = 0;
            iVar5 = _LAB_00001a3c;
            iVar4 = (int) DAT_00001a2a;
            *(undefined4 *) (param_1 + iVar4) = *(undefined4 *) (_LAB_00001a3c + 0x10);
            *(undefined4 *) (param_1 + iVar4 + 4) = *(undefined4 *) (iVar5 + 0x14);
            *(undefined4 *) (param_1 + iVar4 + 8) = *(undefined4 *) (iVar5 + 0x18);
            *(undefined *) (param_1 + 0x11) = 0xd;
            return 0x11;
        case 0xd:
            iVar5 = *(int *) (param_1 + 0x30);
            if (iVar5 == 0) {
                FUN_00000e50(param_1, 10);
                iVar5 = (int) *(short *) (param_1 + 0x14);
                if (iVar5 == 10) {
                    iVar5 = (int) DAT_00001a2e;
                    *(int *) (param_1 + iVar5) = (int) DAT_00001a2c;
                    *(undefined4 *) (param_1 + iVar5 + 4) = 0x1e;
                    *(undefined4 *) (param_1 + iVar5 + 8) = 0x78;
                    iStack28 = *(int *) (param_1 + iVar5 + 0xc);
                    FUN_000015e2(param_1, iStack28, iStack28, 0);
                    *(undefined4 *) (param_1 + -0xc) = DAT_00001a40;
                    iVar5 = (*DAT_00001a44)(0x6f);
                    *(int *) (param_1 + 0x30) = *(int *) (param_1 + 0x30) + 1;
                }
            } else if (iVar5 == 1) {
                iVar5 = FUN_00000f24(param_1, DAT_00001a48);
                *(int *) (param_1 + 0x30) = *(int *) (param_1 + 0x30) + 1;
            } else if (iVar5 == 2) {
                *(undefined4 *) (param_1 + -0xc) = DAT_00001a38;
                iVar5 = 0x11;
                *(undefined *) (param_1 + 0x11) = 0;
            }
            return iVar5;
    }
    return iVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00002026(int param_1) {
    code *pcVar1;
    code *pcVar2;
    undefined4 uVar3;
    int iVar4;
    undefined uVar5;
    undefined4 *puVar6;
    int iVar7;
    int iStack28;
    int iStack24;
    int local_14;

    pcVar2 = DAT_00002194;
    uVar3 = DAT_00002054;
    pcVar1 = DAT_000018d4;
    iVar7 = (int) DAT_00002052;
    iVar4 = (int) *(char *) (param_1 + 0x11);
    switch (iVar4) {
        case 0:
            *(undefined *) (param_1 + 0x12) = 1;
            *(int *) (param_1 + 0x2c) = iVar7;
            iVar4 = 0x11;
            *(undefined *) (param_1 + 0x11) = 1;
            break;
        case 1:
            iVar4 = *(int *) (param_1 + 0x2c) + -1;
            *(int *) (param_1 + 0x2c) = iVar4;
            if (iVar4 == 0) {
                *(int *) (param_1 + 0x2c) = iVar7;
                iVar4 = FUN_00001144(param_1, 0, uVar3);
                return iVar4;
            }
            goto LAB_000020be;
        case 2:
            *(undefined *) (param_1 + 0x12) = 1;
            *(int *) (param_1 + 0x2c) = iVar7;
            iVar4 = 0x11;
            *(undefined *) (param_1 + 0x11) = 3;
            break;
        case 3:
            iVar4 = *(int *) (param_1 + 0x2c) + -1;
            *(int *) (param_1 + 0x2c) = iVar4;
            if (iVar4 == 0) {
                *(int *) (param_1 + 0x2c) = iVar7;
                iVar4 = FUN_00001144(param_1, 0, uVar3);
                return iVar4;
            }
        LAB_000020be:
            // WARNING: Could not recover jumptable at 0x000020cc. Too many branches
            // WARNING: Treating indirect jump as call
            iVar4 = (*DAT_00002188)(param_1, DAT_00002184);
            return iVar4;
        case 4:
            *(undefined *) (param_1 + 0x12) = 1;
            if (*(short *) (param_1 + 0x14) < 10) {
                iVar4 = FUN_00000e50(param_1, 1);
                return iVar4;
            }
            iVar4 = FUN_00000e50(param_1, 10);
            return iVar4;
        case 5:
            (*DAT_0000218c)(param_1);
            iVar4 = (int) DAT_00002180;
            *(undefined *) (param_1 + 0x12) = 1;
            *(int *) (param_1 + 0x2c) = iVar4;
            uVar5 = 6;
            goto LAB_0000212a;
        case 6:
            iVar4 = FUN_00001144(param_1, 0, DAT_00002054);
            if (iVar4 != 0) {
                iVar4 = (*DAT_00002188)(param_1, DAT_00002190);
            }
            iVar7 = *(int *) (param_1 + 0x2c) + -1;
            *(int *) (param_1 + 0x2c) = iVar7;
            if (iVar7 == 0) {
                iVar4 = 0x11;
                *(undefined *) (param_1 + 0x11) = 0;
            }
            break;
        case 7:
            (*DAT_0000218c)(param_1);
            iVar4 = (int) DAT_00002180;
            uVar5 = 8;
            *(undefined *) (param_1 + 0x12) = 1;
            *(int *) (param_1 + 0x2c) = iVar4;
        LAB_0000212a:
            iVar4 = 0x11;
            *(undefined *) (param_1 + 0x11) = uVar5;
            break;
        case 8:
            iVar4 = FUN_00001144(param_1, 0, DAT_00002054);
            if (iVar4 != 0) {
                iVar4 = (*DAT_00002188)(param_1, DAT_00002190);
            }
            iVar7 = *(int *) (param_1 + 0x2c) + -1;
            *(int *) (param_1 + 0x2c) = iVar7;
            if (iVar7 == 0) {
                iVar4 = 0x11;
                *(undefined *) (param_1 + 0x11) = 0;
            }
            break;
        case 9:
            *(undefined *) (param_1 + 0x12) = 0;
            iVar4 = (*pcVar2)(param_1, 0);
            break;
        case 10:
            *(undefined *) (param_1 + 0x12) = 0;
            *(undefined4 *) (param_1 + 0x2c) = 0x28;
            *(undefined4 *) (param_1 + 0x30) = 0;
            puVar6 = (undefined4 *) (DAT_000017a0 + param_1);
            *puVar6 = *(undefined4 *) (param_1 + 0x58);
            puVar6[1] = *(undefined4 *) (param_1 + 0x5c);
            puVar6[2] = *(undefined4 *) (param_1 + 0x60);
            iVar4 = DAT_000017b8;
            iVar7 = *DAT_000017b4;
            puVar6 = (undefined4 *) (DAT_000017a2 + param_1);
            *puVar6 = *(undefined4 *) (iVar7 + 0x44);
            puVar6[1] = *(undefined4 *) (iVar7 + 0x48);
            puVar6[2] = *(undefined4 *) (iVar7 + 0x4c);
            iVar7 = (int) DAT_0000178c;
            *(undefined4 *) (param_1 + iVar7) = *(undefined4 *) (iVar4 + 0x10);
            *(undefined4 *) (param_1 + iVar7 + 4) = *(undefined4 *) (iVar4 + 0x14);
            *(undefined4 *) (param_1 + iVar7 + 8) = *(undefined4 *) (iVar4 + 0x18);
            *(undefined *) (param_1 + 0x11) = 0xb;
            return 0x11;
        case 0xb:
            iVar4 = *(int *) (param_1 + 0x30);
            if (iVar4 == 0) {
                uVar3 = (*DAT_000018d8)(*(undefined4 *) (param_1 + 0x2c), 0x28);
                iStack28 = (*pcVar1)(*(int *) (param_1 + DAT_000018ca + 0xc) - *(int *) (param_1 + DAT_000018ca),
                                     uVar3);
                iStack28 = iStack28 + *(int *) (DAT_000018ca + param_1);
                iStack24 = (*pcVar1)(*(int *) (param_1 + DAT_000018cc + 0xc) - *(int *) (param_1 + DAT_000018cc),
                                     uVar3);
                iStack24 = iStack24 + *(int *) (DAT_000018cc + param_1);
                local_14 = (*pcVar1)(*(int *) (param_1 + DAT_000018ce + 0xc) - *(int *) (param_1 + DAT_000018ce),
                                     uVar3);
                local_14 = local_14 + *(int *) (DAT_000018ce + param_1);
                iVar4 = (*DAT_000018dc)(&iStack28);
                iVar7 = *(int *) (param_1 + 0x2c);
                *(int *) (param_1 + 0x2c) = iVar7 + -1;
                if (iVar7 == 0) {
                    *(undefined4 *) (param_1 + 0x30) = 1;
                }
            } else if (iVar4 == 1) {
                FUN_00000e50(param_1, 10);
                iVar4 = (int) *(short *) (param_1 + 0x14);
                if (iVar4 == 10) {
                    iVar4 = (int) DAT_000018d0;
                    *(undefined4 *) (param_1 + iVar4) = DAT_000018e0;
                    *(undefined4 *) (param_1 + iVar4 + 4) = 0x1e;
                    *(undefined4 *) (param_1 + iVar4 + 8) = 0x78;
                    uVar3 = *(undefined4 *) (param_1 + iVar4 + 0xc);
                    iVar4 = FUN_000015e2(param_1, uVar3, uVar3, 0, uVar3);
                    *(undefined4 *) (param_1 + -0xc) = DAT_000018e4;
                    *(undefined4 *) (param_1 + 0x30) = 2;
                }
            } else if (iVar4 == 2) {
                (*DAT_000018e8)(0x6f, DAT_00002058);
                (*DAT_000018f4)(param_1, DAT_000018f0, param_1 + 0x58, (int) DAT_000018d2, 4, 0x23,
                                PTR_LAB_00007fff_1_000018ec, 1);
                iVar4 = FUN_00000f24(param_1, DAT_000018f8);
                *(undefined4 *) (param_1 + 0x2c) = 0x28;
                *(undefined4 *) (param_1 + 0x30) = 3;
            } else if (iVar4 == 3) {
                iVar4 = *(int *) (param_1 + 0x2c) + -1;
                *(int *) (param_1 + 0x2c) = iVar4;
                if (iVar4 == 0) {
                    iVar4 = 0x11;
                    *(undefined4 *) (param_1 + -0xc) = DAT_00001a38;
                    *(undefined *) (param_1 + 0x11) = 0;
                } else {
                    uVar3 = (*DAT_00001a30)(0x28 - *(int *) (param_1 + 0x2c), 0x28);
                    iStack28 = (*pcVar1)(*(int *) (param_1 + DAT_00001a24 + 0xc) -
                                         *(int *) (param_1 + DAT_00001a24), uVar3);
                    iStack28 = iStack28 + *(int *) (DAT_00001a24 + param_1);
                    iStack24 = (*pcVar1)(*(int *) (param_1 + DAT_00001a26 + 0xc) -
                                         *(int *) (param_1 + DAT_00001a26), uVar3);
                    iStack24 = iStack24 + *(int *) (DAT_00001a26 + param_1);
                    local_14 = (*pcVar1)(*(int *) (param_1 + DAT_00001a28 + 0xc) -
                                         *(int *) (param_1 + DAT_00001a28), uVar3);
                    local_14 = local_14 + *(int *) (DAT_00001a28 + param_1);
                    iVar4 = (*DAT_00001a34)(&iStack28);
                }
            }
            return iVar4;
        case 0xc:
            *(undefined *) (param_1 + 0x12) = 0;
            *(undefined4 *) (param_1 + 0x30) = 0;
            iVar4 = _LAB_00001a3c;
            iVar7 = (int) DAT_00001a2a;
            *(undefined4 *) (param_1 + iVar7) = *(undefined4 *) (_LAB_00001a3c + 0x10);
            *(undefined4 *) (param_1 + iVar7 + 4) = *(undefined4 *) (iVar4 + 0x14);
            *(undefined4 *) (param_1 + iVar7 + 8) = *(undefined4 *) (iVar4 + 0x18);
            *(undefined *) (param_1 + 0x11) = 0xd;
            return 0x11;
        case 0xd:
            iVar4 = *(int *) (param_1 + 0x30);
            if (iVar4 == 0) {
                FUN_00000e50(param_1, 10);
                iVar4 = (int) *(short *) (param_1 + 0x14);
                if (iVar4 == 10) {
                    iVar4 = (int) DAT_00001a2e;
                    *(int *) (param_1 + iVar4) = (int) DAT_00001a2c;
                    *(undefined4 *) (param_1 + iVar4 + 4) = 0x1e;
                    *(undefined4 *) (param_1 + iVar4 + 8) = 0x78;
                    iStack28 = *(int *) (param_1 + iVar4 + 0xc);
                    FUN_000015e2(param_1, iStack28, iStack28, 0);
                    *(undefined4 *) (param_1 + -0xc) = DAT_00001a40;
                    iVar4 = (*DAT_00001a44)(0x6f);
                    *(int *) (param_1 + 0x30) = *(int *) (param_1 + 0x30) + 1;
                }
            } else if (iVar4 == 1) {
                iVar4 = FUN_00000f24(param_1, DAT_00001a48);
                *(int *) (param_1 + 0x30) = *(int *) (param_1 + 0x30) + 1;
            } else if (iVar4 == 2) {
                *(undefined4 *) (param_1 + -0xc) = DAT_00001a38;
                iVar4 = 0x11;
                *(undefined *) (param_1 + 0x11) = 0;
            }
            return iVar4;
    }
    return iVar4;
}


void FUN_00002328(int param_1) {
    int *piVar1;
    code *pcVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;

    piVar1 = DAT_00002440;
    iVar4 = *DAT_00002440;
    if ((-1 < *(int *) (iVar4 + 0xc)) && (*(int *) (iVar4 + 0xc) < 8)) {
        iVar5 = iVar4 + 0x78;
        (*DAT_00002444)(iVar5, iVar4 + 0x28);
        (*DAT_00002448)(iVar5);
        (*DAT_0000244c)(iVar5);
        (*DAT_00002450)(*piVar1 + 0x28, *(undefined4 *) (*piVar1 + 0x14), *(undefined4 *) (*piVar1 + 0x18),
                        param_1 + 0x58, param_1 + 100, 0);
        pcVar2 = DAT_00002454;
        if (*(char *) (param_1 + 0xd) != '\0') {
            iVar5 = (int) DAT_0000243e;
            *(undefined *) (param_1 + 0xd) = 0;
            iVar4 = (*pcVar2)(param_1);
            *(int *) (iVar5 + param_1) = *(int *) (iVar5 + param_1) - (iVar4 - *(int *) (param_1 + 0x50));
        }
        pcVar2 = DAT_0000245c;
        if (*DAT_00002458 != 0) {
            (*DAT_0000245c)(1, 0xb);
            pcVar3 = DAT_00002460;
            (*DAT_00002460)();
            (*pcVar2)(1, 0xc);
            (*pcVar3)();
            (*pcVar2)(1, 0xd);
            (*pcVar3)();
        }
    }
    return;
}


void FUN_000031ba(undefined4 *param_1, int param_2) {
    code *pcVar1;
    code *pcVar2;
    uint uVar3;
    undefined4 uVar4;
    undefined2 uVar6;
    int iVar5;

    pcVar2 = DAT_00003264;
    pcVar1 = DAT_00003260;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    uVar3 = (*pcVar2)();
    uVar4 = (*pcVar1)(uVar3 >> 0x10, param_2 + -1);
    param_1[0xc] = uVar4;
    uVar3 = (*pcVar2)();
    uVar6 = (*pcVar1)(uVar3 >> 0x10, 0x32);
    *(undefined2 *) (param_1 + 0xd) = uVar6;
    uVar3 = (*pcVar2)();
    iVar5 = (*pcVar1)(uVar3 >> 0x10, (int) DAT_0000324a);
    param_1[0xb] = -0x28 - iVar5;
    *(undefined2 *) ((int) param_1 + 0x36) = 0;
    return;
}


void FUN_000031f6(void) {
    uint in_r0;
    undefined2 uVar3;
    uint uVar1;
    int iVar2;
    code *unaff_r11;
    code *unaff_r12;
    undefined2 unaff_r13;
    int unaff_r14;

    uVar3 = (*unaff_r11)(in_r0 >> 0x10, 0x32);
    *(undefined2 *) (unaff_r14 + 0x34) = uVar3;
    uVar1 = (*unaff_r12)();
    iVar2 = (*unaff_r11)(uVar1 >> 0x10, (int) DAT_0000324a);
    *(int *) (unaff_r14 + 0x2c) = -0x28 - iVar2;
    *(undefined2 *) (unaff_r14 + 0x36) = unaff_r13;
    return;
}


void FUN_00003226(int *param_1) {
    code *pcVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    pcVar1 = DAT_0000337c;
    if ((*(short *) ((int) param_1 + 0x36) != 0) && (*(short *) ((int) param_1 + 0x36) == 1)) {
        iVar7 = (int) DAT_00003372;
        iVar2 = param_1[7];
        iVar6 = DAT_00003378[1];
        iVar3 = param_1[8];
        iVar5 = DAT_00003378[2];
        iVar4 = (*DAT_0000337c)(*DAT_00003378 - param_1[6], iVar7);
        iVar2 = (*pcVar1)(iVar6 - iVar2, iVar7);
        iVar3 = (*pcVar1)(iVar5 - iVar3, iVar7);
        iVar5 = (int) DAT_00003374;
        *param_1 = *param_1 + iVar4;
        param_1[1] = param_1[1] + iVar2;
        param_1[2] = param_1[2] + iVar3;
        param_1[3] = param_1[3] + *param_1;
        param_1[4] = param_1[4] + param_1[1];
        param_1[5] = param_1[5] + param_1[2];
        iVar2 = (*pcVar1)(param_1[3], iVar5);
        iVar3 = (*pcVar1)(param_1[4], iVar5);
        iVar4 = (*pcVar1)(param_1[5], iVar5);
        param_1[3] = param_1[3] - iVar2;
        param_1[4] = param_1[4] - iVar3;
        param_1[5] = param_1[5] - iVar4;
        param_1[6] = param_1[6] + param_1[3];
        param_1[7] = param_1[7] + param_1[4];
        param_1[8] = param_1[8] + param_1[5];
        param_1[2] = 0;
        param_1[1] = 0;
        *param_1 = 0;
    }
    (*DAT_00003380)(param_1 + 9);
    return;
}


void FUN_000032c6(void) {
    int iVar1;
    int iVar2;
    int iVar3;
    int in_r1;
    int in_r2;
    int *in_r3;
    code *unaff_r13;
    int *unaff_r14;
    int in_stack_00000008;

    *unaff_r14 = in_r2 + *in_r3;
    unaff_r14[1] = unaff_r14[1] + *(int *) (in_r1 + 4);
    unaff_r14[2] = unaff_r14[2] + in_stack_00000008;
    unaff_r14[3] = unaff_r14[3] + *unaff_r14;
    unaff_r14[4] = unaff_r14[4] + unaff_r14[1];
    unaff_r14[5] = unaff_r14[5] + unaff_r14[2];
    iVar1 = (*unaff_r13)(unaff_r14[3]);
    iVar2 = (*unaff_r13)(unaff_r14[4]);
    iVar3 = (*unaff_r13)(unaff_r14[5]);
    unaff_r14[3] = unaff_r14[3] - iVar1;
    unaff_r14[4] = unaff_r14[4] - iVar2;
    unaff_r14[5] = unaff_r14[5] - iVar3;
    unaff_r14[6] = unaff_r14[6] + unaff_r14[3];
    unaff_r14[7] = unaff_r14[7] + unaff_r14[4];
    unaff_r14[8] = unaff_r14[8] + unaff_r14[5];
    unaff_r14[2] = 0;
    unaff_r14[1] = 0;
    *unaff_r14 = 0;
    (*DAT_00003380)(unaff_r14 + 9);
    return;
}


void FUN_00003396(int param_1, int param_2) {
    undefined4 in_r2;
    undefined4 in_r3;

    *(undefined4 *) (param_1 + 0x24) = in_r2;
    *(undefined4 *) (param_1 + 0x28) = *(undefined4 *) (param_2 + 0x18);
    *(undefined4 *) (param_1 + 0x2c) = *(undefined4 *) (param_2 + 0x1c);
    *(undefined4 *) (param_1 + 0x10) = in_r3;
    return;
}


int FUN_0000348e(void) {
    code *pcVar1;
    int iVar2;
    char cVar7;
    uint uVar3;
    int iVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    uint uVar8;
    char *pcVar9;
    uint uVar10;
    uint uVar11;
    char *pcVar12;
    int unaff_r13;
    int unaff_r14;
    undefined uStack00000003;
    undefined uStack00000004;
    undefined uStack00000005;
    undefined uStack00000006;
    undefined4 in_stack_00000004;
    undefined uStack00000007;
    undefined uStack00000008;
    undefined uStack00000009;
    undefined4 in_stack_00000008;

    iVar2 = (int) *(char *) (unaff_r13 + 0xd);
    if (iVar2 != 0) {
        cVar7 = *(char *) (unaff_r13 + 0xc) + '\x01';
        *(char *) (unaff_r13 + 0xc) = cVar7;
        if ('\t' < cVar7) {
            *(undefined *) (unaff_r13 + 0xc) = 0;
        }
        pcVar9 = DAT_000034f4 + 0xc;
        if (*(char *) (unaff_r13 + 0xc) < '\x05') {
            iVar2 = (int) *(char *) (unaff_r13 + 0xc);
            pcVar12 = pcVar9;
            pcVar9 = DAT_000034f4;
        } else {
            iVar2 = *(char *) (unaff_r13 + 0xc) + -5;
            pcVar12 = DAT_000034f4;
        }
        iVar2 = (*DAT_00003650)(iVar2, 5);
        pcVar1 = DAT_00003658;
        uVar11 = (int) (short) ((uint)(PTR_LAB_00007fff_1_00003654 +
                                       ((int) *pcVar12 - (int) *pcVar9) * iVar2) >> 0x10) + (int) *pcVar9;
        uVar10 = (int) (short) ((uint)(PTR_LAB_00007fff_1_00003654 +
                                       ((int) pcVar12[1] - (int) pcVar9[1]) * iVar2) >> 0x10) +
                 (int) pcVar9[1];
        uVar8 = (uint) DAT_00003648;
        uVar3 = (int) (short) ((uint)(PTR_LAB_00007fff_1_00003654 +
                                      ((int) pcVar12[2] - (int) pcVar9[2]) * iVar2) >> 0x10) + (int) pcVar9[2];
        *(uint * )(unaff_r14 + 0x10) = (uVar3 & uVar8) << 0x10 | (uVar10 & uVar8) << 8 | uVar11 & uVar8;
        iVar4 = (*pcVar1)(*(int *) (pcVar12 + 4) - *(int *) (pcVar9 + 4), iVar2);
        pcVar1 = DAT_00003658;
        *(int *) (unaff_r14 + 0x2c) = iVar4 + *(int *) (pcVar9 + 4);
        iVar2 = (*pcVar1)(*(int *) (pcVar12 + 8) - *(int *) (pcVar9 + 8), iVar2);
        *(int *) (unaff_r14 + 0x30) = iVar2 + *(int *) (pcVar9 + 8);
        if ((*DAT_0000365c != '\0') && (*(char *) (*DAT_00003660 + 1) != '\0')) {
            uStack00000004 = (undefined) uVar11;
            uStack00000005 = (undefined) uVar10;
            uStack00000003 = (undefined) uVar3;
            uStack00000006 = uStack00000003;
            uStack00000007 = *(undefined *) (*(int *) (unaff_r14 + 8) + 3);
            uStack00000008 = *(undefined *) (*(int *) (unaff_r14 + 8) + 4);
            uStack00000009 = *(undefined *) (*(int *) (unaff_r14 + 8) + 5);
            uVar5 = (*DAT_00003664)(&stack0x00000004, *(undefined4 *) (unaff_r14 + 0x30));
            uVar6 = (*DAT_00003664)(&stack0x00000004, *(undefined4 *) (unaff_r14 + 0x30), uVar5);
            (*DAT_0000366c)(DAT_00003668, uVar6, uVar5, 1);
        }
        iVar2 = (*DAT_00003670)(unaff_r13 + 0x2c);
    }
    return iVar2;
}


void FUN_00003536(int param_1, undefined4 param_2, int param_3, int param_4, undefined4 param_5,
                  undefined4 param_6, undefined4 param_7) {
    code *pcVar1;
    int in_r0;
    int iVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    uint uVar5;
    short unaff_r8;
    uint unaff_r9;
    int unaff_r10;
    int unaff_r11;
    int unaff_r12;
    int unaff_r13;
    int unaff_r14;

    pcVar1 = DAT_00003658;
    uVar5 = (uint) DAT_00003648;
    param_5 = (int) (short) ((uint)((in_r0 - *(char *) (param_3 + 2)) * unaff_r11 + param_1) >> 0x10) +
              (int) *(char *) (param_3 + 2);
    *(uint * )(unaff_r14 + 0x10) =
            (param_5 & uVar5) << 0x10 | (unaff_r8 + param_4 & uVar5) << 8 | unaff_r9 & uVar5;
    iVar2 = (*pcVar1)(*(int *) (unaff_r10 + 4) - *(int *) (unaff_r12 + 4));
    pcVar1 = DAT_00003658;
    *(int *) (unaff_r14 + 0x2c) = iVar2 + *(int *) (unaff_r12 + 4);
    iVar2 = (*pcVar1)(*(int *) (unaff_r10 + 8) - *(int *) (unaff_r12 + 8));
    *(int *) (unaff_r14 + 0x30) = iVar2 + *(int *) (unaff_r12 + 8);
    if ((*DAT_0000365c != '\0') && (*(char *) (*DAT_00003660 + 1) != '\0')) {
        param_6._0_1_ = (undefined) unaff_r9;
        param_6._1_1_ = (undefined) (unaff_r8 + param_4);
        param_6._2_1_ = (undefined) param_5;
        param_6._3_1_ = *(undefined *) (*(int *) (unaff_r14 + 8) + 3);
        param_7._0_1_ = *(undefined *) (*(int *) (unaff_r14 + 8) + 4);
        param_7._1_1_ = *(undefined *) (*(int *) (unaff_r14 + 8) + 5);
        uVar3 = (*DAT_00003664)(&param_6, *(undefined4 *) (unaff_r14 + 0x30));
        uVar4 = (*DAT_00003664)(&param_6, *(undefined4 *) (unaff_r14 + 0x30), uVar3);
        (*DAT_0000366c)(DAT_00003668, uVar4, uVar3, 1);
    }
    (*DAT_00003670)(unaff_r13 + 0x2c);
    return;
}


void FUN_0000355e(uint param_1) {
    code *pcVar1;
    int iVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    uint in_r2;
    uint in_r3;
    uint unaff_r9;
    int unaff_r10;
    int unaff_r12;
    int unaff_r13;
    int unaff_r14;
    undefined in_stack_00000003;
    undefined uStack00000004;
    undefined uStack00000006;
    undefined4 in_stack_00000004;
    undefined uStack00000007;
    undefined uStack00000008;
    undefined uStack00000009;
    undefined4 in_stack_00000008;

    pcVar1 = DAT_00003658;
    *(uint * )(unaff_r14 + 0x10) = in_r3 | in_r2 | unaff_r9 & param_1;
    iVar2 = (*pcVar1)(*(int *) (unaff_r10 + 4) - *(int *) (unaff_r12 + 4));
    pcVar1 = DAT_00003658;
    *(int *) (unaff_r14 + 0x2c) = iVar2 + *(int *) (unaff_r12 + 4);
    iVar2 = (*pcVar1)(*(int *) (unaff_r10 + 8) - *(int *) (unaff_r12 + 8));
    *(int *) (unaff_r14 + 0x30) = iVar2 + *(int *) (unaff_r12 + 8);
    if ((*DAT_0000365c != '\0') && (*(char *) (*DAT_00003660 + 1) != '\0')) {
        uStack00000004 = (undefined) unaff_r9;
        uStack00000006 = in_stack_00000003;
        uStack00000007 = *(undefined *) (*(int *) (unaff_r14 + 8) + 3);
        uStack00000008 = *(undefined *) (*(int *) (unaff_r14 + 8) + 4);
        uStack00000009 = *(undefined *) (*(int *) (unaff_r14 + 8) + 5);
        uVar3 = (*DAT_00003664)(&stack0x00000004, *(undefined4 *) (unaff_r14 + 0x30));
        uVar4 = (*DAT_00003664)(&stack0x00000004, *(undefined4 *) (unaff_r14 + 0x30), uVar3);
        (*DAT_0000366c)(DAT_00003668, uVar4, uVar3, 1);
    }
    (*DAT_00003670)(unaff_r13 + 0x2c);
    return;
}


void FUN_00003766(int param_1) {
    code *pcVar1;
    int *piVar2;
    int iVar3;

    if (*(int *) (param_1 + 0x18) == 0) {
        return;
    }
    piVar2 = *(int **) (param_1 + 0x18);
    *(int **) (param_1 + 0x18) = piVar2 + 1;
    iVar3 = *piVar2;
    if (iVar3 == 0) {
        if (**(int **) (param_1 + 0x18) == 0) {
            *(undefined4 *) (param_1 + 0x18) = 0;
            return;
        }
        piVar2 = (int *) (*(int *) (param_1 + 0x18) + (**(int **) (param_1 + 0x18) + -1) * 4);
        *(int **) (param_1 + 0x18) = piVar2 + 1;
        iVar3 = *piVar2;
    }
    (*DAT_00003808)(iVar3, DAT_00003804, 0x20, 0);
    pcVar1 = DAT_00003810;
    iVar3 = (int) DAT_000037e0;
    *(int *) (param_1 + DAT_000037de) = *(int *) (param_1 + DAT_000037de) - DAT_0000380c;
    (*pcVar1)(iVar3 + param_1);
    // WARNING: Could not recover jumptable at 0x000037c8. Too many branches
    // WARNING: Treating indirect jump as call
    (*DAT_00003814)(DAT_000037e2 + param_1);
    return;
}


void FUN_00003af2(int param_1) {
    code *pcVar1;
    int iVar2;
    undefined4 uVar3;
    int in_r0;
    int iVar4;
    int in_r3;
    int iVar5;
    undefined4 unaff_r13;
    int unaff_r14;

    pcVar1 = DAT_00003be8;
    *(undefined4 *) (unaff_r14 + in_r0) = *(undefined4 *) (in_r3 + 0x24);
    *(undefined4 *) (unaff_r14 + in_r0 + 4) = unaff_r13;
    (*pcVar1)(param_1 + unaff_r14);
    iVar2 = DAT_00003bec;
    (*DAT_00003bf0)(DAT_00003bce + unaff_r14, DAT_00003bec, DAT_00003bec + 0xc);
    iVar5 = (int) DAT_00003bd6;
    iVar4 = (int) DAT_00003bd2;
    *(int *) (unaff_r14 + iVar4) = DAT_00003bd0 + unaff_r14;
    *(int *) (unaff_r14 + iVar4 + 4) = DAT_00003bd4 + unaff_r14;
    *(int *) (unaff_r14 + iVar4 + 8) = unaff_r14;
    *(undefined4 *) (unaff_r14 + iVar4 + 0xc) = *(undefined4 *) (*(int *) (unaff_r14 + 0xc) + 0x28);
    pcVar1 = DAT_00003be8;
    *(undefined4 *) (unaff_r14 + iVar4 + 0x10) = unaff_r13;
    (*pcVar1)(iVar5 + unaff_r14, 4);
    (*DAT_00003bf0)(DAT_00003bd6 + unaff_r14, iVar2 + 0x18, iVar2 + 0x24);
    uVar3 = DAT_00003bf8;
    *(undefined4 *) (unaff_r14 + -0x10) = DAT_00003bf4;
    *(undefined4 *) (unaff_r14 + -0xc) = uVar3;
    return;
}


void FUN_00003b52(int param_1) {
    undefined4 in_r2;
    undefined4 in_r3;

    *(undefined4 *) (param_1 + 8) = in_r3;
    *(undefined4 *) (param_1 + 0xc) = in_r2;
    return;
}


void FUN_00003d08(void) {
    undefined2 uVar1;
    undefined2 uVar2;
    int iVar3;
    int iVar4;

    iVar3 = DAT_00003e44;
    uVar2 = DAT_00003e38;
    iVar4 = (int) DAT_00003e34;
    *(undefined4 *) (*(int *) (DAT_00003e44 + 4) + 0x10) = DAT_00003e40;
    uVar1 = DAT_00003e32;
    *(undefined4 *) (iVar3 + 0x14) = 1;
    *(undefined2 *) (*(int *) (iVar3 + 4) + iVar4) = uVar1;
    *(undefined2 *) (*(int *) (iVar3 + 4) + iVar4 + 2) = DAT_00003e36;
    *(undefined2 *) (*(int *) (iVar3 + 4) + iVar4 + 4) = uVar2;
    *(undefined2 *) (*(int *) (iVar3 + 4) + iVar4 + 6) = uVar2;
    *(undefined4 *) (iVar3 + 0x14) = 1;
    *(undefined2 *) (*(int *) (iVar3 + 4) + iVar4 + 8) = 5;
    *(undefined2 *) (*(int *) (iVar3 + 4) + iVar4 + 10) = DAT_00003e3a;
    *(undefined2 *) (*(int *) (iVar3 + 4) + iVar4 + 0xc) = 3;
    *(undefined4 *) (iVar3 + 0x14) = 1;
    return;
}


void FUN_00003d42(int param_1, undefined4 param_2) {
    int in_r0;
    int in_r3;

    *(undefined2 *) (in_r3 + in_r0) = DAT_00003e3a;
    *(undefined2 *) (*(int *) (param_1 + 4) + in_r0 + 2) = 3;
    *(undefined4 *) (param_1 + 0x14) = param_2;
    return;
}


void FUN_00003d52(undefined *param_1, int param_2) {
    char cVar1;
    int iVar2;
    int iVar3;
    char *pcVar4;

    iVar2 = 0xc;
    pcVar4 = *(char **) (*DAT_00003e48 + 8);
    do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        iVar3 = cVar1 - param_2;
        if (iVar3 < -0x1f) {
            iVar3 = -0x1f;
        }
        *param_1 = (char) iVar3;
        iVar2 = iVar2 + -1;
        param_1 = param_1 + 1;
    } while (iVar2 != 0);
    return;
}


void FUN_00003d74(undefined4 param_1, char *param_2, undefined4 param_3) {
    int iVar1;
    uint uVar2;

    iVar1 = *DAT_00003e48;
    FUN_00003d52(param_2, param_3);
    uVar2 = (uint) DAT_00003e3c;
    *(uint * )(iVar1 + 0x10) =
            ((int) param_2[2] & uVar2) << 0x10 | ((int) param_2[1] & uVar2) << 8 | (int) *param_2 & uVar2;
    // WARNING: Could not recover jumptable at 0x00003df2. Too many branches
    // WARNING: Treating indirect jump as call
    (*DAT_00003e4c)(((int) param_2[5] & uVar2) << 0x10 | ((int) param_2[4] & uVar2) << 8 |
                    (int) param_2[3] & uVar2,
                    ((int) param_2[8] & uVar2) << 0x10 | ((int) param_2[7] & uVar2) << 8 |
                    (int) param_2[6] & uVar2,
                    ((int) param_2[0xb] & uVar2) << 0x10 | ((int) param_2[10] & uVar2) << 8 |
                    (int) param_2[9] & uVar2);
    return;
}


void FUN_00003dc2(undefined4 param_1, uint param_2) {
    uint unaff_r13;
    int unaff_r14;

    // WARNING: Could not recover jumptable at 0x00003df2. Too many branches
    // WARNING: Treating indirect jump as call
    (*DAT_00003e4c)(((int) *(char *) (unaff_r14 + 5) & unaff_r13) << 0x10 |
                    ((int) *(char *) (unaff_r14 + 4) & unaff_r13) << 8 |
                    (int) *(char *) (unaff_r14 + 3) & unaff_r13,
                    (param_2 & unaff_r13) << 0x10 | ((int) *(char *) (unaff_r14 + 7) & unaff_r13) << 8 |
                    (int) *(char *) (unaff_r14 + 6) & unaff_r13);
    return;
}


undefined4 FUN_00003efa(int param_1, undefined4 param_2, undefined4 param_3) {
    undefined4 uVar1;
    code *in_r2;
    int iVar2;
    uint unaff_r10;
    int unaff_r14;

    uVar1 = (*in_r2)(param_1 + 0x24, param_2, param_3, 0x10);
    *(int *) (unaff_r14 + 4) = *(int *) (unaff_r14 + 4) + 1;
    iVar2 = *(int *) (unaff_r14 + 8) + -1;
    *(int *) (unaff_r14 + 8) = iVar2;
    if (iVar2 < 0) {
        *(int *) (unaff_r14 + 4) = *(int *) (unaff_r14 + 4) + 1;
        *LAB_00003f5c = 0;
        if (unaff_r14 != 0) {
            *(uint * )(unaff_r14 + -4) = *(uint * )(unaff_r14 + -4) | unaff_r10;
        }
    } else {
        uVar1 = FUN_00003d74();
    }
    return uVar1;
}



// WARNING: Control flow encountered bad instruction data

void FUN_00003f7a(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;

    *(short *) (param_3 + in_r0) = (short) in_r0;
    FUN_00004b7a();
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004076(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;

    *(int *) (param_3 + in_r0) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004536(undefined4 param_1, undefined4 param_2, int param_3, int param_4) {
    int iVar1;

    iVar1 = (*(code *) (param_4 + 0x453c))();
    *(char *) (param_3 + iVar1) = (char) param_3;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000045b2(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r2;
    undefined4 unaff_r8;
    undefined unaff_r9;
    int unaff_r11;
    int unaff_r13;
    int in_sr;

    *(int *) (unaff_r11 + 0x24) = in_sr;
    *(int *) (param_3 + in_sr) = in_sr;
    *(undefined4 *) (in_sr + 0xc) = unaff_r8;
    *(undefined *) (in_r2 + in_sr) = unaff_r9;
    *(int *) (unaff_r13 + 0x1c) = in_sr;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004632(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000047b2(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;
    int unaff_r13;

    *(int *) (unaff_r13 + 0xc) = in_r0;
    *(short *) (param_3 + in_r0) = (short) in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000049ea(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;
    int in_r1;
    int in_r2;
    int unaff_r13;

    *(int *) (param_3 + in_r0) = in_r0;
    *(undefined4 *) (in_r2 + 0x1c) = param_2;
    *(int *) (in_r1 + in_r0) = unaff_r13;
    *(int *) (unaff_r13 + 0x1c) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004a66(undefined4 param_1) {
    int in_r0;
    int unaff_r9;

    *(undefined4 *) (unaff_r9 + in_r0) = param_1;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004ae6(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;

    *(char *) (param_3 + in_r0) = (char) param_3;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004b4e(void) {
    undefined4 in_r1;
    int in_r3;

    *(undefined4 *) (in_r3 + 0x1c) = in_r1;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004b7a(undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4) {
    int in_r0;
    int in_r3;
    undefined4 unaff_r8;
    undefined4 unaff_r9;
    undefined4 unaff_r11;
    undefined4 unaff_r12;

    *(undefined4 *) (in_r3 + 0x20) = param_1;
    *(int *) (param_3 + in_r0) = in_r0;
    *(undefined4 *) (in_r3 + 0x18) = param_2;
    *(int *) (param_3 + in_r0) = in_r0;
    *(int *) (in_r3 + 0x1c) = param_3;
    *(int *) (param_3 + in_r0) = in_r0;
    *(undefined4 *) (in_r3 + 0x20) = param_4;
    *(int *) (param_3 + in_r0) = in_r0;
    *(undefined4 *) (in_r3 + 0x38) = unaff_r8;
    *(int *) (param_3 + in_r0) = in_r0;
    *(undefined4 *) (in_r3 + 0x38) = unaff_r9;
    *(int *) (param_3 + in_r0) = in_r0;
    *(undefined4 *) (in_r3 + 4) = unaff_r11;
    *(int *) (param_3 + in_r0) = in_r0;
    *(undefined4 *) (in_r3 + 0xc) = unaff_r12;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_00004e76(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_gbr;

    *(short *) (param_3 + *(char *) (in_gbr + 0x82)) = (short) *(char *) (in_gbr + 0x82);
    // WARNING: Unimplemented instruction - Truncating control flow here
    halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004ede(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;
    int iVar1;
    undefined unaff_r8;
    int in_gbr;
    undefined8 uVar2;

    *(short *) (param_3 + in_r0) = (short) in_r0;
    iVar1 = FUN_0000568e();
    *(short *) (param_3 + iVar1) = (short) iVar1;
    iVar1 = FUN_00005c72();
    *(short *) (param_3 + iVar1) = (short) iVar1;
    iVar1 = FUN_00004076();
    *(short *) (param_3 + iVar1) = (short) iVar1;
    iVar1 = FUN_00004632();
    *(short *) (param_3 + iVar1) = (short) iVar1;
    uVar2 = FUN_00004ae6();
    *(short *) (in_gbr + 0x134) = (short) uVar2;
    *(short *) (param_3 + (int) uVar2) = (short) uVar2;
    iVar1 = (int) *(char *) (in_gbr + 0x82);
    *(short *) (param_3 + iVar1) = (short) *(char *) (in_gbr + 0x82);
    *(int *) ((int) ((ulonglong) uVar2 >> 0x20) + 0x24) = iVar1;
    *(undefined *) (iVar1 * 2) = unaff_r8;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004ef6(undefined4 param_1, undefined4 param_2, int param_3) {
    int iVar1;
    int in_r1;
    undefined unaff_r8;
    int in_gbr;

    iVar1 = (int) *(char *) (in_gbr + 0x82);
    *(short *) (param_3 + iVar1) = (short) *(char *) (in_gbr + 0x82);
    *(int *) (in_r1 + 0x24) = iVar1;
    *(undefined *) (iVar1 * 2) = unaff_r8;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005056(void) {
    undefined4 in_r0;
    int unaff_r13;

    *(undefined4 *) (unaff_r13 + 0x1c) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005126(undefined4 param_1, undefined4 param_2, undefined param_3) {
    int in_r0;
    int unaff_r8;
    undefined4 unaff_r9;
    int unaff_r13;

    *(undefined4 *) (unaff_r8 + 0x3c) = unaff_r9;
    *(undefined *) (in_r0 * 2) = param_3;
    *(int *) (unaff_r13 + 0x1c) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000512a(undefined4 param_1, undefined4 param_2, undefined param_3) {
    int in_r0;
    int unaff_r13;

    *(undefined *) (in_r0 * 2) = param_3;
    *(int *) (unaff_r13 + 0x1c) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000053da(undefined4 param_1, undefined4 param_2, int param_3, int param_4) {
    int iVar1;

    iVar1 = (*(code *) (param_4 + 0x53e0))();
    *(char *) (param_3 + iVar1) = (char) param_3;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000560e(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;
    undefined4 in_r1;
    int unaff_r10;
    int unaff_r11;

    *(BADSPACEBASE **) (unaff_r10 + 0x20) = register0x0000003c;
    *(int *) (param_3 + in_r0) = in_r0;
    *(int *) (unaff_r11 + 0x18) = in_r0;
    *(int *) (param_3 + in_r0) = in_r0;
    *(undefined4 *) (unaff_r11 + 0x1c) = in_r1;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000568e(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;

    *(short *) (param_3 + in_r0) = (short) in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000059be(void) {
    int in_r0;
    int in_r1;
    undefined in_r2;
    int unaff_r13;

    *(int *) (unaff_r13 + 0x18) = in_r1;
    *(undefined *) (in_r1 + in_r0) = in_r2;
    *(int *) (unaff_r13 + 0x1c) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005af6(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005b76(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005bf2(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;
    int unaff_r14;

    *(int *) (param_3 + in_r0) = in_r0;
    *(undefined4 *) (unaff_r14 + 0x14) = param_2;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00006786(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;
    int unaff_r13;

    *(int *) (param_3 + in_r0) = in_r0;
    *(int *) (unaff_r13 + 0x1c) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00006eee(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;

    *(char *) (param_3 + in_r0) = (char) param_3;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00006fe6(undefined4 param_1, undefined4 param_2, int param_3, int param_4) {
    undefined4 uVar1;
    int in_r0;

    uVar1 = DAT_000070f0;
    *(int *) (param_3 + in_r0) = in_r0;
    (*(code *) (param_4 + 0x6ff0))(param_1, uVar1);
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000724c(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;

    *(int *) (param_3 + in_r0) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000072f8(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;
    undefined4 in_r3;
    undefined4 *unaff_r10;
    int unaff_r11;

    *(int *) (unaff_r11 + 0x24) = in_r0;
    *(int *) (param_3 + in_r0) = in_r0;
    *unaff_r10 = in_r3;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000076ba(undefined4 param_1, undefined2 param_2) {
    undefined2 *unaff_r12;

    *unaff_r12 = param_2;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000778e(void) {
    int in_r0;
    int in_r1;
    int unaff_r13;

    *(int *) (in_r1 + in_r0) = unaff_r13;
    *(int *) (unaff_r13 + 0x1c) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00007974(undefined2 param_1) {
    int in_r0;
    int in_r1;
    int unaff_r13;

    *(undefined2 *) (in_r1 + in_r0) = param_1;
    *(int *) (unaff_r13 + 0x1c) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000801e(undefined4 param_1, undefined4 param_2, int param_3) {
    int unaff_r11;
    int in_sr;

    *(int *) (unaff_r11 + 0x24) = in_sr;
    *(int *) (param_3 + in_sr) = in_sr;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000083a4(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;
    int unaff_r13;

    *(int *) (param_3 + in_r0) = in_r0;
    *(int *) (unaff_r13 + 0x3c) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000845f(void) {
    int in_r0;
    int in_r7;
    int unaff_r9;

    *(int *) (unaff_r9 + in_r0) = in_r0;
    *(short *) (in_r7 + in_r0) = (short) in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000880b(void) {
    int in_r0;
    int unaff_r9;

    *(int *) (unaff_r9 + in_r0) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00009c67(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000a423(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000bd3f(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_0000c3db(undefined4 param_1, undefined2 param_2, int param_3) {
    int in_r0;
    int unaff_r9;

    *(int *) (unaff_r9 + in_r0) = in_r0;
    *(undefined2 *) (param_3 + in_r0) = param_2;
    // WARNING: Unimplemented instruction - Truncating control flow here
    halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000ccbf(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00010fa6(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000110f2(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00011176(undefined4 param_1, undefined param_2) {
    undefined *unaff_r14;

    *unaff_r14 = param_2;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00011bb2(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_00011c0e(void) {
    // WARNING: Unimplemented instruction - Truncating control flow here
    halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00011ca6(void) {
    undefined4 in_r0;
    int in_r1;

    *(undefined4 *) (in_r1 + 0x24) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00011cb2(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_00011dde(void) {
    undefined4 unaff_r10;
    int unaff_r12;

    *(undefined4 *) (unaff_r12 + 0x10) = unaff_r10;
    // WARNING: Unimplemented instruction - Truncating control flow here
    halt_unimplemented();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_00011e1e(void) {
    // WARNING: Unimplemented instruction - Truncating control flow here
    halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00011e46(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;

    *(int *) (param_3 + in_r0) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00011e86(int param_1, undefined4 param_2, undefined4 param_3, int param_4) {
    undefined unaff_r12;
    int in_sr;

    *(char *) (param_4 + in_sr) = (char) in_sr;
    *(undefined *) (param_1 + in_sr) = unaff_r12;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00011f0e(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;

    *(int *) (param_3 + in_r0) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00011fe2(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;
    int in_r1;
    int in_gbr;

    *(int *) (param_3 + in_r0) = in_r0;
    *(undefined2 *) (in_gbr + 0x88) = 0x2018;
    *(undefined4 *) (in_r1 + 0x24) = 0x12018;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0001238b(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00012553(void) {
    int in_r0;
    int unaff_r9;
    int unaff_r12;

    *(int *) (unaff_r9 + in_r0) = in_r0;
    *(int *) (unaff_r12 + in_r0) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0001267b(void) {
    int in_r0;
    int unaff_r9;

    *(int *) (unaff_r9 + in_r0) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000128c3(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000129ff(void) {
    int in_r0;
    int unaff_r9;

    *(int *) (unaff_r9 + in_r0) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00012d13(void) {
    undefined in_r0;
    int in_gbr;

    *(undefined *) (in_gbr + 2) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_00012ef2(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;

    *(int *) (param_3 + in_r0) = in_r0;
    // WARNING: Unimplemented instruction - Truncating control flow here
    halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00012f4e(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;

    *(int *) (param_3 + in_r0) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00012ff2(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;
    int iVar1;
    int unaff_r11;

    *(int *) (unaff_r11 + 0x24) = in_r0;
    iVar1 = (*(code *) (in_r0 + 0x12ff6))();
    *(int *) (param_3 + iVar1) = iVar1;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000130e2(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;
    int unaff_r11;

    *(short *) (in_r0 * 2) = (short) in_r0;
    *(int *) (unaff_r11 + 0x24) = in_r0;
    *(int *) (param_3 + in_r0) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000134ce(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000134ee(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;

    *(int *) (param_3 + in_r0) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00013552(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00013566(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;

    *(int *) (param_3 + in_r0) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00013edf(void) {
    uint in_r0;
    undefined *puVar1;
    uint in_r2;
    undefined uVar2;
    undefined *unaff_r8;
    undefined *unaff_r9;

    puVar1 = (undefined *) (in_r0 & in_r2);
    uVar2 = (undefined) in_r2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *(uint * )(((uint) puVar1 & in_r2) - 2) = in_r2;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00014333(void) {
    undefined *in_r0;
    undefined *puVar1;
    uint in_r2;
    undefined uVar2;
    undefined *unaff_r8;
    undefined *unaff_r9;

    uVar2 = (undefined) in_r2;
    *in_r0 = uVar2;
    *in_r0 = uVar2;
    puVar1 = (undefined *) ((uint) in_r0 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined *) ((uint) puVar1 & in_r2);
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *unaff_r9 = (char) puVar1;
    *unaff_r8 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *puVar1 = uVar2;
    *(uint * )(((uint) puVar1 & in_r2) - 2) = in_r2;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00016280(int param_1) {
    int iVar1;

    (*(code *) &SUB_06032292)();
    (*(code *) 0x6035200)();
    (*(code *) &SUB_0602fd7a)(0x607e958, 0x25f00200, 0x20, 0);
    (*(code *) &SUB_0602fd7a)(0x607e978, 0x25f00220, 0x20, 0);
    (*(code *) 0x6033c20)(0x607ea78);
    (*(code *) 0x6034364)(0x607eacc);
    *(ushort *) (_DAT_0604b228 + 0xe) = *(ushort *) (_DAT_0604b228 + 0xe) & 0xff00 | 0xb4;
    *(undefined4 *) (_DAT_0604b228 + 0x10) = 0x13ff57ff;
    _DAT_0604b238 = 1;
    (*(code *) 0x602919e)(1, 0x607ea38);
    (*(code *) 0x60295e6)(6, 0x6050538, 0x6050d38, 0x25e20000, 0x80);
    (*(code *) 0x6029514)(5, 0x25e24000);
    uRam25e25000 = 0;
    *(uint * )(_DAT_0604b228 + 0xa8) = *(uint * )(_DAT_0604b228 + 0xa8) & 0xfff80000 | 0x12800;
    uRam25e25002 = 0;
    *(uint * )(_DAT_0604b228 + 0xac) = *(uint * )(_DAT_0604b228 + 0xac) & 0xfff80000 | 0x12801;
    *(undefined2 *) (_DAT_0604b228 + 0xf0) = 0x204;
    *(undefined2 *) (_DAT_0604b228 + 0xf2) = 0x407;
    *(undefined2 *) (_DAT_0604b228 + 0xf4) = 0x404;
    *(undefined2 *) (_DAT_0604b228 + 0xf6) = 0x404;
    *(undefined2 *) (_DAT_0604b228 + 0xf8) = 0x600;
    *(undefined2 *) (_DAT_0604b228 + 0xfa) = 0x700;
    *(undefined2 *) (_DAT_0604b228 + 0xfc) = 3;
    _DAT_0604b238 = 1;
    (*(code *) 0x60344c0)(0x607eaf0);
    *(ushort *) (_DAT_0604b228 + 0xec) = *(ushort *) (_DAT_0604b228 + 0xec) & 0xfeff | 0x100;
    *(ushort *) (_DAT_0604b228 + 0xe0) = *(ushort *) (_DAT_0604b228 + 0xe0) & 0xf8ff | 0x200;
    *(ushort *) (_DAT_0604b228 + 0xe0) = *(ushort *) (_DAT_0604b228 + 0xe0) & 0xfff0 | 3;
    *(ushort *) (_DAT_0604b228 + 0xe0) = *(ushort *) (_DAT_0604b228 + 0xe0) & 0xcfff | 0x1000;
    iVar1 = _DAT_0604b228;
    *(undefined2 *) (_DAT_0604b228 + 0x100) = 0x10;
    *(undefined2 *) (iVar1 + 0x102) = 0;
    *(undefined2 *) (iVar1 + 0x104) = 0;
    *(undefined2 *) (iVar1 + 0x106) = 0;
    *(undefined2 *) (_DAT_0604b228 + 0x10c) = 0x10;
    _DAT_0604b238 = 1;
    *(undefined4 *) (param_1 + 0x38) = 0x100000;
    return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_000166b2(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;

    *(short *) (param_3 + in_r0) = (short) in_r0;
    FUN_00016b02();
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000166e2(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar3 = *(int *) (param_1 + 0x18);
    iVar5 = (int) (short) ((DAT_06050370 * 2 + _DAT_0604b226) * 0x70);
    iVar1 = *(int *) (param_1 + 0x1c);
    iVar4 = *(int *) (param_1 + 0x20);
    iVar2 = (int) *(short *) (param_1 + 0x24) + (int) *(short *) (param_1 + 0x28);
    *(short *) (iVar5 + 0x60503ac) = (short) ((int) (iVar2 + (uint)(iVar2 < 0)) >> 1);
    iVar2 = (int) *(short *) (param_1 + 0x26) + (int) *(short *) (param_1 + 0x2a);
    *(short *) (iVar5 + 0x60503ae) = (short) ((int) (iVar2 + (uint)(iVar2 < 0)) >> 1);
    *(undefined2 *) (iVar5 + 0x60503b0) = *(undefined2 *) (param_1 + 0x32);
    *(undefined2 *) (iVar5 + 0x60503b4) = *(undefined2 *) (iVar5 + 0x60503ac);
    *(undefined2 *) (iVar5 + 0x60503b6) = *(undefined2 *) (iVar5 + 0x60503ae);
    *(undefined2 *) (iVar5 + 0x60503b8) = 0;
    (*(code *) &SUB_06028d8c)(-0x4000000 - iVar3, -iVar1);
    iVar1 = *(int *) (param_1 + 0x38) >> 2;
    (*(code *) &SUB_06028fda)(iVar1);
    (*(code *) &SUB_06028ea4)(-iVar4);
    iVar3 = (int) *(short *) (iVar5 + 0x60503ac) - (int) *(short *) (iVar5 + 0x60503b4);
    iVar2 = (int) *(short *) (iVar5 + 0x60503ae) - (int) *(short *) (iVar5 + 0x60503b6);
    iVar4 = (int) *(short *) (iVar5 + 0x60503b0) - (int) *(short *) (iVar5 + 0x60503b8);
    iVar1 = (*(code *) &SUB_06035644)
            (*(undefined4 *) (param_1 + 0x38), *(int *) (param_1 + 0xc) << 4, param_3, param_4,
             iVar1);
    _DAT_06052570 =
            (((iVar1 - _DAT_0605254c * iVar3) - _DAT_06052550 * iVar2) - _DAT_06052554 * iVar4) +
            *(short *) (iVar5 + 0x60503b4) * -0x10000;
    iVar1 = (*(code *) &SUB_06035644)(*(undefined4 *) (param_1 + 0x38), *(int *) (param_1 + 0x14) << 4);
    _DAT_06052574 =
            (((iVar1 - _DAT_06052558 * iVar3) - _DAT_0605255c * iVar2) - _DAT_06052560 * iVar4) +
            *(short *) (iVar5 + 0x60503b6) * -0x10000;
    _DAT_06052578 =
            ((((*(int *) (param_1 + 0x10) - *(int *) (param_1 + 0x34)) * 0x40 - _DAT_06052564 * iVar3) -
              _DAT_06052568 * iVar2) - _DAT_0605256c * iVar4) + *(short *) (iVar5 + 0x60503b8) * -0x10000;
    return;
}


void FUN_00016852(void) {
    undefined4 in_r2;
    int unaff_r12;

    *(undefined4 *) (unaff_r12 + 0x2c) = in_r2;
    return;
}


void FUN_00016888(int param_1) {
    int iVar1;
    int iVar2;
    int iVar3;
    undefined auStack80[12];
    undefined4 uStack68;
    undefined4 uStack52;
    undefined4 uStack36;

    iVar2 = *(int *) (param_1 + 8);
    (*(code *) &SUB_06035c10)(auStack80);
    (*(code *) &SUB_06035c4c)(iVar2 + 0xe8, auStack80);
    (*(code *) &SUB_06035e68)(*(undefined4 *) (iVar2 + 0xf8), auStack80);
    (*(code *) &SUB_06035dc8)(*(undefined4 *) (iVar2 + 0xf4), auStack80);
    (*(code *) &SUB_06035e68)(0x8000000, auStack80);
    if (*(int *) (iVar2 + 0x7c) == 0) {
        iVar3 = *(int *) (iVar2 + 0x60);
        (*(code *) &SUB_06035c4c)(iVar3, auStack80);
        (*(code *) &SUB_06035d50)(iVar3 + 0xc, auStack80);
        (*(code *) &SUB_06035c4c)(iVar3 + 0xb4, auStack80);
        (*(code *) &SUB_06035f18)(*(undefined4 *) (iVar3 + 200), auStack80);
        iVar1 = (*(code *) &SUB_06035644)(*(undefined4 *) (iVar2 + 0x24), &DAT_00004ccc);
        (*(code *) &SUB_06035e68)(*(int *) (iVar3 + 0xc4) + iVar1, auStack80);
        (*(code *) &SUB_06035dc8)(*(undefined4 *) (iVar3 + 0xc0), auStack80);
        iVar3 = iVar3 + 0x168;
    } else {
        iVar3 = *(int *) (iVar2 + 0x7c);
        (*(code *) &SUB_06035c4c)(iVar3, auStack80);
        (*(code *) &SUB_06035d50)(iVar3 + 0xc, auStack80);
        (*(code *) &SUB_06035c4c)(iVar3 + 0x48, auStack80);
        (*(code *) &SUB_06035f18)(*(undefined4 *) (iVar3 + 0x5c), auStack80);
        iVar1 = (*(code *) &SUB_06035644)(*(undefined4 *) (iVar2 + 0x24), &DAT_00004ccc);
        (*(code *) &SUB_06035e68)(*(int *) (iVar3 + 0x58) + iVar1, auStack80);
        (*(code *) &SUB_06035dc8)(*(undefined4 *) (iVar3 + 0x54), auStack80);
        iVar3 = iVar3 + 0x90;
    }
    (*(code *) &SUB_06035c4c)(iVar3, auStack80);
    (*(code *) &SUB_06035f18)(*(undefined4 *) (iVar3 + 0x14), auStack80);
    iVar1 = (*(code *) &SUB_06035644)(*(undefined4 *) (iVar2 + 0x24), &DAT_0000b333);
    (*(code *) &SUB_06035e68)(*(int *) (iVar3 + 0x10) + iVar1, auStack80);
    (*(code *) &SUB_06035dc8)(*(int *) (iVar3 + 0xc) + *(int *) (iVar2 + 0x20), auStack80);
    (*(code *) &SUB_06035c4c)(0x607eb88, auStack80);
    (*(code *) &SUB_06035e68)(0xfe5843f2, auStack80);
    *(undefined4 *) (param_1 + 0x24) = *(undefined4 *) (param_1 + 0xc);
    *(undefined4 *) (param_1 + 0x28) = *(undefined4 *) (param_1 + 0x10);
    *(undefined4 *) (param_1 + 0x2c) = *(undefined4 *) (param_1 + 0x14);
    *(undefined4 *) (param_1 + 0xc) = uStack68;
    *(undefined4 *) (param_1 + 0x10) = uStack52;
    *(undefined4 *) (param_1 + 0x14) = uStack36;
    (*(code *) &SUB_0603647c)(param_1 + 0x18, auStack80);
    return;
}


void FUN_0001695a(void) {
    int iVar1;
    code *unaff_r8;
    code *unaff_r9;
    code *unaff_r10;
    int *unaff_r11;
    int unaff_r12;
    code *unaff_r13;
    int unaff_r14;
    undefined4 in_stack_0000000c;
    undefined4 in_stack_0000001c;
    undefined4 in_stack_0000002c;
    undefined *puVar2;

    (*unaff_r13)();
    (*(code *) &SUB_06035f18)(*(undefined4 *) (unaff_r14 + 0x14));
    puVar2 = (undefined *) register0x0000003c;
    iVar1 = (*unaff_r8)(unaff_r11[1], &DAT_0000b333);
    (*unaff_r10)(*(int *) (unaff_r14 + 0x10) + iVar1, puVar2);
    (*unaff_r9)(*(int *) (unaff_r14 + 0xc) + *unaff_r11, &stack0x00000000);
    (*unaff_r13)(0x607eb88, &stack0x00000000);
    (*unaff_r10)(0xfe5843f2, &stack0x00000000);
    *(undefined4 *) (unaff_r12 + 0x24) = *(undefined4 *) (unaff_r12 + 0xc);
    *(undefined4 *) (unaff_r12 + 0x28) = *(undefined4 *) (unaff_r12 + 0x10);
    *(undefined4 *) (unaff_r12 + 0x2c) = *(undefined4 *) (unaff_r12 + 0x14);
    *(undefined4 *) (unaff_r12 + 0xc) = in_stack_0000000c;
    *(undefined4 *) (unaff_r12 + 0x10) = in_stack_0000001c;
    *(undefined4 *) (unaff_r12 + 0x14) = in_stack_0000002c;
    (*(code *) &SUB_0603647c)(unaff_r12 + 0x18, &stack0x00000000);
    return;
}


void FUN_00016ab8(int param_1) {
    int aiStack80[2];
    int iStack72;
    int iStack68;
    int iStack64;
    int iStack60;
    undefined auStack56[52];

    (*(code *) &SUB_06035c10)(auStack56);
    (*(code *) &SUB_06035f18)(-*(int *) (param_1 + 0x20), auStack56);
    (*(code *) &SUB_06035dc8)(-*(int *) (param_1 + 0x18), auStack56);
    (*(code *) &SUB_06035e68)(-*(int *) (param_1 + 0x1c), auStack56);
    iStack68 = *(int *) (param_1 + 0xc) - *(int *) (param_1 + 0x24);
    iStack64 = *(int *) (param_1 + 0x10) - *(int *) (param_1 + 0x28);
    iStack60 = *(int *) (param_1 + 0x14) - *(int *) (param_1 + 0x2c);
    (*(code *) &SUB_060360e0)(&iStack68, aiStack80, auStack56);
    *(int *) (*(int *) (*(int *) (param_1 + 0x30) + 0x30) + 0x34) = iStack72 << 0xe;
    *(undefined4 *) (*(int *) (*(int *) (param_1 + 0x30) + 0x30) + 0x38) = 0;
    *(int *) (*(int *) (*(int *) (param_1 + 0x30) + 0x30) + 0x3c) = aiStack80[0] << 0xe;
    return;
}


void FUN_00016b02(int param_1) {
    int in_r3;
    int unaff_r14;
    int in_stack_0000000c;
    int in_stack_00000014;
    int iStack0000001c;
    int iStack00000020;

    iStack0000001c = *(int *) (unaff_r14 + 0x10) - in_r3;
    iStack00000020 = *(int *) (unaff_r14 + 0x14) - *(int *) (unaff_r14 + 0x2c);
    (*(code *) &SUB_060360e0)(param_1 + 0x18);
    *(int *) (*(int *) (*(int *) (unaff_r14 + 0x30) + 0x30) + 0x34) = in_stack_00000014 << 0xe;
    *(undefined4 *) (*(int *) (*(int *) (unaff_r14 + 0x30) + 0x30) + 0x38) = 0;
    *(int *) (*(int *) (*(int *) (unaff_r14 + 0x30) + 0x30) + 0x3c) = in_stack_0000000c << 0xe;
    return;
}


void FUN_00016b22(void) {
    undefined4 *in_r1;
    int unaff_r14;
    undefined4 in_stack_00000004;
    int in_stack_0000000c;

    *(undefined4 *) (*(int *) (*(int *) (unaff_r14 + 0x30) + 0x30) + 0x34) = *in_r1;
    *(undefined4 *) (*(int *) (*(int *) (unaff_r14 + 0x30) + 0x30) + 0x38) = in_stack_00000004;
    *(int *) (*(int *) (*(int *) (unaff_r14 + 0x30) + 0x30) + 0x3c) = in_stack_0000000c << 0xe;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00016cf6(int param_1) {
    int iVar1;
    int iVar2;
    int iVar3;

    if ((_DAT_0604a380 & 8) == 0) {
        if ((_DAT_0604a380 & 0x10) == 0) {
            if ((_DAT_06050294 & _DAT_060501c0) != 0) {
                *(uint * )(param_1 + 4) = *(uint * )(param_1 + 4) | 0x8000000;
            }
        } else if ((_DAT_060501c0 & 1) != 0) {
            *(uint * )(param_1 + 4) = *(uint * )(param_1 + 4) | 0x4000000;
        }
    }
    if ((_DAT_060502aa & _DAT_060501c0) != 0) {
        *(uint * )(param_1 + 4) = *(uint * )(param_1 + 4) | 0x20000000;
    }
    if (DAT_060501b8 == '\x02') {
        iVar3 = (int) DAT_060501ba << 9;
        if (DAT_060502f0 == '\0') {
            iVar1 = (int) DAT_060501bb;
        } else {
            iVar1 = -(int) DAT_060501bb;
        }
        iVar2 = (int) DAT_060501bb;
        iVar1 = iVar1 << 9;
    } else {
        iVar1 = 0;
        iVar3 = 0;
        if ((_DAT_06050298 & _DAT_060501be) == 0) {
            if ((_DAT_0605029a & _DAT_060501be) != 0) {
                iVar1 = -0x10000;
            }
        } else {
            iVar1 = 0x10000;
        }
        iVar2 = (int) (short) _DAT_060501be;
        if ((_DAT_0605029c & _DAT_060501be) == 0) {
            iVar2 = (int) (short) _DAT_060501be;
            if ((_DAT_0605029e & _DAT_060501be) != 0) {
                iVar3 = -0x10000;
            }
        } else {
            iVar3 = 0x10000;
        }
    }
    *(int *) (param_1 + 8) = iVar3;
    *(int *) (param_1 + 0xc) = iVar1;
    return iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00016e0c(byte *param_1) {
    byte bVar1;

    if ((*(uint * )(param_1 + 4) & 0x4000000) == 0) {
        if (((*(uint * )(param_1 + 4) & 0x8000000) != 0) && ((_DAT_0604a380 & 0x10) == 0)) {
            _DAT_0604a380 = _DAT_0604a380 | 0x12;
            DAT_0604fd51 = 0;
            _DAT_0605266c = 0;
            _DAT_06052668 = 0;
            param_1[3] = 0;
            *(undefined4 *) (param_1 + 0x30) = *(undefined4 *) (param_1 + 0x6c);
        }
    } else {
        _DAT_0604a380 = _DAT_0604a380 & 0xffffffed;
        DAT_0604fd51 = 1;
    }
    if ((*(uint * )(param_1 + 4) & 0x10000000) != 0) {
        bVar1 = param_1[2];
        param_1[2] = bVar1 + 1;
        if ('\x03' < (char) (bVar1 + 1)) {
            param_1[2] = 0;
        }
        if (param_1[2] == 0) {
            (*(code *) &SUB_0606c820)();
        }
    }
    if ((*(uint * )(param_1 + 4) & 0x40000000) != 0) {
        *param_1 = *param_1 ^ 1;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00016ecc(void) {
    uint uVar1;
    int iVar2;
    undefined4 uVar3;

    if (*(int *) (_DAT_06052658 + 0x14) == 0) {
        return 0;
    }
    uVar1 = _DAT_0604a380 & 0x10;
    iVar2 = (int) *(char *) (_DAT_06052658 + 2);
    if (iVar2 == 0) {
        if (uVar1 == 0) {
            *(undefined4 *) (_DAT_06052658 + 0x10) = 0x606b39a;
            return 0x606b39a;
        }
        uVar3 = 0x606b72c;
    } else if (iVar2 == 1) {
        if (uVar1 == 0) {
            *(undefined4 *) (_DAT_06052658 + 0x10) = 0x606b9d0;
            return 0x606b9d0;
        }
        uVar3 = 0x606bb04;
    } else if (iVar2 == 2) {
        if (uVar1 == 0) {
            *(undefined4 *) (_DAT_06052658 + 0x10) = 0x606be00;
            return 0x606be00;
        }
        uVar3 = 0x606beb0;
    } else {
        if (iVar2 != 3) {
            return iVar2;
        }
        if (uVar1 == 0) {
            *(undefined4 *) (_DAT_06052658 + 0x10) = 0x606bb48;
            return 0x606bb48;
        }
        uVar3 = 0x606bb04;
    }
    *(undefined4 *) (_DAT_06052658 + 0x10) = uVar3;
    return iVar2;
}


void FUN_00016f36(int param_1, int *param_2) {
    int iVar1;
    int iVar2;
    undefined *puVar3;
    int local_2c;
    int iStack40;
    undefined4 local_24;
    undefined4 uStack32;
    undefined4 uStack28;

    local_24 = (*(code *) 0x6036080)(param_2);
    uStack32 = (*(code *) 0x603609c)(param_2);
    uStack28 = (*(code *) 0x60360bc)(param_1 + 0x18);
    local_2c = (*(code *) &SUB_06035664)(local_24, uStack28);
    iStack40 = (*(code *) &SUB_06035664)(uStack32, uStack28);
    if (local_2c < 0) {
        local_2c = -local_2c;
    }
    if (iStack40 < 0) {
        iStack40 = -iStack40;
    }
    iVar1 = (*(code *) &SUB_06035644)(uRam0604fd18, local_2c);
    if ((iVar1 == 0) && (iVar1 = (*(code *) &SUB_06035644)(uRam0604fd1c, iStack40), iVar1 == 0)) {
        *(int *) (param_1 + 0x44) = *param_2;
        *(int *) (param_1 + 0x48) = param_2[1];
        *(int *) (param_1 + 0x4c) = param_2[2];
    } else {
        if (0x800000 < local_2c) {
            local_2c = 0x800000;
        }
        if (0x800000 < iStack40) {
            iStack40 = 0x800000;
        }
        iVar1 = (*(code *) 0x60356ec)(&local_2c, &local_2c);
        puVar3 = (undefined *) (iVar1 >> 1);
        if (0xb333 < (int) (undefined *) (iVar1 >> 1)) {
            puVar3 = &DAT_0000b333;
        }
        if ((int) puVar3 < 0xccc) {
            puVar3 = (undefined *) 0xccc;
        }
        iVar2 = 0x10000 - (int) puVar3;
        iVar1 = (*(code *) &SUB_06035644)(*(int *) (param_1 + 0x44) - *param_2, iVar2);
        *(int *) (param_1 + 0x44) = iVar1 + *param_2;
        iVar1 = (*(code *) &SUB_06035644)(*(int *) (param_1 + 0x48) - param_2[1], iVar2);
        *(int *) (param_1 + 0x48) = iVar1 + param_2[1];
        iVar1 = (*(code *) &SUB_06035644)(*(int *) (param_1 + 0x4c) - param_2[2], iVar2);
        *(int *) (param_1 + 0x4c) = iVar1 + param_2[2];
    }
    return;
}


void FUN_0001708c(int param_1) {
    int iVar1;
    int local_48;
    int iStack68;
    int iStack64;
    undefined auStack60[8];
    int iStack52;
    int iStack36;
    int iStack20;

    iVar1 = *(int *) (param_1 + 0x14);
    (*(code *) &SUB_06035c10)(auStack60);
    (*(code *) &SUB_06035e68)(*(int *) (iVar1 + 0xf8) + *(int *) (iVar1 + 0x110), auStack60);
    (*(code *) &SUB_06035dc8)(*(int *) (iVar1 + 0xf4) + *(int *) (iVar1 + 0x10c), auStack60);
    (*(code *) &SUB_06036008)(-*(int *) (param_1 + 0x24) >> 1, auStack60);
    local_48 = iStack52 + *(int *) (param_1 + 0x18);
    iStack68 = iStack36 + *(int *) (param_1 + 0x1c);
    iStack64 = iStack20 + *(int *) (param_1 + 0x20);
    FUN_00016f36(param_1, &local_48);
    return;
}


void FUN_0001711c(int param_1) {
    undefined4 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int local_58;
    int iStack84;
    int iStack80;
    int iStack76;
    int iStack72;
    int iStack68;
    undefined auStack64[8];
    int iStack56;
    int iStack40;
    int iStack24;

    iVar3 = *(int *) (param_1 + 0x14);
    iStack76 = *(int *) (param_1 + 0x18) - *(int *) (param_1 + 0x5c);
    iStack72 = *(int *) (param_1 + 0x1c) - *(int *) (param_1 + 0x60);
    iStack68 = *(int *) (param_1 + 0x20) - *(int *) (param_1 + 100);
    uVar1 = (*(code *) &SUB_0603570e)(&iStack76, &iStack76);
    iVar2 = (*(code *) &SUB_060359ae)(uVar1);
    iVar4 = -iVar2 >> 2;
    if (-0x800 < -iVar2 >> 2) {
        iVar4 = -0x800;
    }
    if (iVar4 < -0x2800) {
        iVar4 = -0x2800;
    }
    (*(code *) &SUB_06035c10)(auStack64);
    (*(code *) &SUB_06035e68)(*(undefined4 *) (iVar3 + 0xf8), auStack64);
    (*(code *) &SUB_06035dc8)(*(undefined4 *) (iVar3 + 0xf4), auStack64);
    (*(code *) &SUB_06036008)(iVar4, auStack64);
    local_58 = iStack56 + *(int *) (param_1 + 0x18);
    iStack84 = iStack40 + *(int *) (param_1 + 0x1c);
    iStack80 = iStack24 + *(int *) (param_1 + 0x20);
    FUN_00016f36(param_1, &local_58);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000171c8(int param_1) {
    int iVar1;
    undefined4 uVar2;
    int iVar3;
    uint uVar4;
    int *piVar5;
    int iStack36;
    int iStack32;
    int iStack28;

    piVar5 = (int *) (param_1 + 0x18);
    if (((_DAT_0604a380 & 1) != 0) && (*(int *) (_DAT_06052650 + 8) != 0)) {
        if (*(int *) (_DAT_06052650 + 8) == 1) {
            piVar5 = (int *) (*(code *) &SUB_0600cde4)(*(undefined4 *) (_DAT_06052650 + 0xc));
        } else {
            piVar5 = (int *) (*(int *) (_DAT_06052650 + 0xc) + 8);
        }
        if (*(char *) (param_1 + 3) == '\0') {
            iStack36 = *(int *) (*(int *) (param_1 + 0x14) + 0x8c) - *piVar5;
            iStack32 = *(int *) (*(int *) (param_1 + 0x14) + 0x90) - piVar5[1];
            iStack28 = *(int *) (*(int *) (param_1 + 0x14) + 0x94) - piVar5[2];
            iVar1 = (*(code *) &SUB_0603580a)(iStack36, iStack28);
            uVar4 = iVar1 - *(int *) (param_1 + 0x6c) & 0xfffffff;
            uVar2 = (*(code *) &SUB_0603570e)(&iStack36, &iStack36);
            iVar3 = (*(code *) &SUB_060359ae)(uVar2);
            if (iVar3 < 0x1000) {
                iVar3 = 0x1000;
            }
            iVar3 = (*(code *) &SUB_06035664)(0x2aaaaaa, iVar3 << 4);
            iVar3 = iVar3 + 0x222222;
            if ((int) uVar4 < iVar3) {
                *(int *) (param_1 + 0x30) = iVar1 - iVar3;
            }
            if (0x10000000 - iVar3 < (int) uVar4) {
                *(int *) (param_1 + 0x30) = iVar1 + iVar3;
            }
            *(undefined *) (param_1 + 3) = 1;
        }
    }
    iVar3 = (*(code *) &SUB_06035644)(*(int *) (param_1 + 0x44) - *piVar5, 0xf333);
    *(int *) (param_1 + 0x44) = iVar3 + *piVar5;
    iVar3 = (*(code *) &SUB_06035644)(*(int *) (param_1 + 0x48) - piVar5[1], 0xf333);
    *(int *) (param_1 + 0x48) = iVar3 + piVar5[1];
    iVar3 = (*(code *) &SUB_06035644)(*(int *) (param_1 + 0x4c) - piVar5[2], 0xf333);
    *(int *) (param_1 + 0x4c) = iVar3 + piVar5[2];
    return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_000171e3(undefined4 param_1, undefined4 param_2) {
    undefined4 in_r0;
    undefined4 *unaff_r8;
    int in_gbr;

    *unaff_r8 = param_2;
    *(undefined4 *) (in_gbr + 0x80) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00017334(int param_1) {
    int iVar1;
    undefined4 uVar2;

    uVar2 = *(undefined4 *) (param_1 + 0xc);
    iVar1 = (*(code *) &SUB_06035644)(0x50000, -*(int *) (param_1 + 8));
    _DAT_06052668 = _DAT_06052668 + iVar1;
    if (0x7428f5 < _DAT_06052668) {
        _DAT_06052668 = 0x7428f5;
    }
    if (_DAT_06052668 < -0x7428f5) {
        _DAT_06052668 = -0x7428f5;
    }
    iVar1 = (*(code *) &SUB_06035644)(0x50000, uVar2);
    _DAT_0605266c = _DAT_0605266c + iVar1;
    if (0x49eb85 < _DAT_0605266c) {
        _DAT_0605266c = 0x49eb85;
    }
    if (_DAT_0605266c < -0x49eb85) {
        _DAT_0605266c = -0x49eb85;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00017770(void) {
    int iVar1;
    undefined4 uVar2;
    int unaff_r12;
    uint uVar3;
    code *unaff_r13;
    int unaff_r14;
    undefined4 in_stack_00000000;
    int in_stack_0000000c;
    int in_stack_0000001c;
    int in_stack_0000002c;

    iVar1 = (*unaff_r13)(0xe38e3, in_stack_00000000);
    *(int *) (unaff_r14 + 0x30) = *(int *) (unaff_r14 + 0x30) + iVar1;
    if ((_DAT_0604a380 & 1) == 0) {
        if ((_DAT_060502a6 & _DAT_060501c0) == 0) {
            if ((_DAT_060502ae & _DAT_060501c0) != 0) {
                *(uint * )(unaff_r14 + 0x30) =
                        ((*(int *) (unaff_r14 + 0x6c) - *(int *) (unaff_r12 + 0x10)) - 0x1000000U & 0xc000000) +
                        *(int *) (unaff_r12 + 0x10);
            }
        } else {
            *(uint * )(unaff_r14 + 0x30) =
                    ((*(int *) (unaff_r14 + 0x6c) - *(int *) (unaff_r12 + 0x10)) + 0x5000000U & 0xc000000) +
                    *(int *) (unaff_r12 + 0x10);
        }
    }
    uVar3 = *(int *) (unaff_r14 + 0x30) - *(int *) (unaff_r14 + 0x6c);
    if ((uVar3 & 0x8000000) == 0) {
        uVar3 = uVar3 & 0xfffffff;
    } else {
        uVar3 = uVar3 | 0xf0000000;
    }
    iVar1 = (*unaff_r13)(uVar3, 0x1999);
    *(int *) (unaff_r14 + 0x6c) = *(int *) (unaff_r14 + 0x6c) + iVar1;
    FUN_00017334();
    uVar2 = (*(code *) &SUB_06035a5c)(unaff_r14 + 0x18, unaff_r14 + 0x5c);
    *(undefined4 *) (unaff_r14 + 0x24) = uVar2;
    iVar1 = (*unaff_r13)(*(int *) (*(char *) (unaff_r14 + 1) * 8 + 0x607ec20) -
                         *(int *) (unaff_r14 + 0x24), 0x1999);
    if (0x599 < iVar1) {
        iVar1 = 0x599;
    }
    if (iVar1 < -0x599) {
        iVar1 = -0x599;
    }
    *(int *) (unaff_r14 + 0x24) = *(int *) (unaff_r14 + 0x24) + iVar1;
    (*(code *) &SUB_06035c10)(&stack0x00000004);
    (*(code *) &SUB_06035e68)(*(undefined4 *) (unaff_r14 + 0x6c), &stack0x00000004);
    (*(code *) &SUB_06035dc8)(*(undefined4 *) (unaff_r14 + 0x68), &stack0x00000004);
    (*(code *) &SUB_06036008)(*(undefined4 *) (unaff_r14 + 0x24), &stack0x00000004);
    *(int *) (unaff_r14 + 0x38) = in_stack_0000000c + *(int *) (unaff_r14 + 0x18);
    *(int *) (unaff_r14 + 0x3c) = in_stack_0000001c + *(int *) (unaff_r14 + 0x1c);
    *(int *) (unaff_r14 + 0x40) = in_stack_0000002c + *(int *) (unaff_r14 + 0x20);
    *(undefined4 *) (unaff_r14 + 0x5c) = *(undefined4 *) (unaff_r14 + 0x38);
    *(undefined4 *) (unaff_r14 + 0x60) = *(undefined4 *) (unaff_r14 + 0x3c);
    *(undefined4 *) (unaff_r14 + 100) = *(undefined4 *) (unaff_r14 + 0x40);
    FUN_000171c8();
    return;
}


void FUN_000178d0(int param_1) {
    uint uVar1;
    uint uVar2;
    undefined auStack56[8];
    int iStack48;
    int iStack32;
    int iStack16;

    uVar1 = *(int *) (param_1 + 0x68) - *(int *) (param_1 + 0xf0) & 0xfffffff;
    uVar2 = *(int *) (param_1 + 0xf8) - *(int *) (param_1 + 0xf0) & 0xfffffff;
    if (uVar2 < uVar1) {
        if (((int) uVar2 >> 1) + 0x8000000U < uVar1) {
            *(undefined4 *) (param_1 + 0x68) = *(undefined4 *) (param_1 + 0xf0);
        } else {
            *(undefined4 *) (param_1 + 0x68) = *(undefined4 *) (param_1 + 0xf8);
        }
    }
    uVar2 = *(int *) (param_1 + 0x6c) - *(int *) (param_1 + 0xf4) & 0xfffffff;
    uVar1 = *(int *) (param_1 + 0xfc) - *(int *) (param_1 + 0xf4) & 0xfffffff;
    if (uVar1 < uVar2) {
        if (((int) uVar1 >> 1) + 0x8000000U < uVar2) {
            *(undefined4 *) (param_1 + 0x6c) = *(undefined4 *) (param_1 + 0xf4);
        } else {
            *(undefined4 *) (param_1 + 0x6c) = *(undefined4 *) (param_1 + 0xfc);
        }
    }
    (*(code *) &SUB_06035c10)(auStack56);
    (*(code *) &SUB_06035e68)(*(undefined4 *) (param_1 + 0x6c), auStack56);
    (*(code *) &SUB_06035dc8)(*(undefined4 *) (param_1 + 0x68), auStack56);
    (*(code *) &SUB_06036008)(*(undefined4 *) (param_1 + 0x24), auStack56);
    *(int *) (param_1 + 0x44) = *(int *) (param_1 + 0x38) - iStack48;
    *(int *) (param_1 + 0x48) = *(int *) (param_1 + 0x3c) - iStack32;
    *(int *) (param_1 + 0x4c) = *(int *) (param_1 + 0x40) - iStack16;
    return;
}



// WARNING: Removing unreachable block (ram,0x000180a4)

void FUN_00018076(int param_1) {
    if (param_1 != 0) {
        (*(code *) &SUB_060244ee)();
    }
    (*(code *) &SUB_060244ee)();
    return;
}


void FUN_000180ce(void) {
    code *in_r3;

    (*in_r3)();
    return;
}



// WARNING: Removing unreachable block (ram,0x000180fe)

undefined4 FUN_000180da(int param_1) {
    undefined4 uVar1;

    if (param_1 != 0) {
        (*(code *) &SUB_060244ee)();
    }
    uVar1 = (*(code *) &SUB_060244ee)();
    return uVar1;
}


void FUN_0001814c(short *param_1, char param_2) {
    short sVar1;
    short sVar2;
    short sVar3;
    short sVar4;
    short sVar5;
    short sVar6;
    short sVar7;
    short sVar8;
    short sVar9;
    undefined4 *puVar10;
    uint uVar11;
    uint uVar12;
    undefined2 *puVar13;
    int iVar14;

    puVar10 = DAT_00018338;
    sVar3 = *(short *) (*(int *) (*(int *) (*DAT_00018330 + 0xc) + 4) + 4);
    iVar14 = (char) (param_2 * '\x1c') + DAT_00018334;
    sVar4 = *(short *) (iVar14 + 6);
    sVar5 = *(short *) (iVar14 + 10);
    uVar11 = *(uint * )(iVar14 + 0xc);
    uVar12 = *(uint * )(iVar14 + 0x10);
    sVar1 = *param_1;
    sVar8 = (short) (*(uint * )(iVar14 + 0x14) >> 0xc);
    sVar6 = param_1[1];
    sVar9 = (short) (*(uint * )(iVar14 + 0x18) >> 0xc);
    sVar2 = *param_1;
    sVar7 = param_1[1];
    puVar13 = (undefined2 *) *DAT_00018338;
    *puVar13 = *(undefined2 *) (iVar14 + 2);
    puVar13[2] = *(undefined2 *) (iVar14 + 4);
    puVar13[3] = sVar5 + sVar3;
    puVar13[4] = sVar4 + sVar3;
    puVar13[5] = *(undefined2 *) (iVar14 + 8);
    puVar13[6] = sVar1 + sVar8;
    puVar13[7] = -(sVar6 + sVar9);
    puVar13[10] = (short) (uVar11 >> 0xc) + sVar2 + sVar8;
    puVar13[0xb] = -((sVar7 + sVar9) - (short) (uVar12 >> 0xc));
    iVar14 = puVar10[8];
    *(undefined2 *) (iVar14 + 4) = 0;
    *(short *) (iVar14 + 6) = (short) ((uint) puVar13 >> 3);
    puVar10[8] = iVar14 + 8;
    puVar10[7] = puVar10[7] + 1;
    *puVar10 = puVar13 + 0x10;
    puVar10[3] = puVar10[3] + 1;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00018680(undefined4 *param_1, undefined4 *param_2, undefined4 *param_3) {
    code *UNRECOVERED_JUMPTABLE;
    int iVar1;
    undefined4 *puVar2;
    int iVar3;

    iVar3 = *DAT_00018754;
    puVar2 = (undefined4 *) (FUN_00018746 + iVar3);
    *puVar2 = *param_1;
    puVar2[1] = param_1[1];
    puVar2[2] = param_1[2];
    iVar1 = (int) DAT_0001874a;
    *(undefined4 *) (iVar1 + iVar3) = *param_3;
    ((undefined4 *) (iVar1 + iVar3))[1] = param_3[1];
    iVar1 = (int) DAT_0001874c;
    *(undefined4 *) (iVar1 + iVar3) = *param_2;
    ((undefined4 *) (iVar1 + iVar3))[1] = param_2[1];
    UNRECOVERED_JUMPTABLE = DAT_00018758;
    *(undefined4 *) (DAT_0001874e + iVar3) = 0;
    // WARNING: Could not recover jumptable at 0x000186b8. Too many branches
    // WARNING: Treating indirect jump as call
    *(undefined *) (iVar3 + 2) = 1;
    (*UNRECOVERED_JUMPTABLE)();
    return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_00018746(void) {
    int in_r0;
    undefined unaff_r14;

    *(undefined *) (in_r0 * 2) = unaff_r14;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


void FUN_00018820(void) {
    code *pcVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    undefined4 *puVar5;
    int iVar6;
    undefined auStack68[8];
    undefined4 uStack60;
    int iStack56;
    undefined4 uStack44;
    int iStack40;
    undefined4 uStack28;
    int iStack24;

    iVar6 = *DAT_00018988;
    puVar5 = (undefined4 *) (*(int *) (iVar6 + 0x14) + (int) DAT_0001897a);
    *(undefined4 *) (iVar6 + 0x18) = *puVar5;
    *(int *) (iVar6 + 0x1c) = puVar5[1] + (int) DAT_0001897c;
    *(undefined4 *) (iVar6 + 0x20) = puVar5[2];
    (*DAT_0001898c)(auStack68);
    (*DAT_00018990)(iVar6 + 0x18, auStack68);
    (*DAT_00018994)(puVar5[4], auStack68);
    (*DAT_00018998)(puVar5[3], auStack68);
    pcVar1 = DAT_0001899c;
    iVar4 = (int) DAT_0001897e;
    iVar3 = (int) DAT_00018980;
    iVar2 = (*DAT_0001899c)(uStack60, iVar4);
    *(int *) (iVar6 + 0x5c) = iVar2 + iStack56;
    iVar2 = (*pcVar1)(uStack44, iVar4);
    *(int *) (iVar6 + 0x60) = iVar2 + iStack40;
    iVar2 = (*pcVar1)(uStack28, iVar4);
    *(int *) (iVar6 + 100) = iVar2 + iStack24;
    *(undefined4 *) (iVar6 + 0x38) = *(undefined4 *) (iVar6 + 0x5c);
    *(undefined4 *) (iVar6 + 0x3c) = *(undefined4 *) (iVar6 + 0x60);
    *(undefined4 *) (iVar6 + 0x40) = *(undefined4 *) (iVar6 + 100);
    *(undefined4 *) (iVar6 + 0x50) = *(undefined4 *) (iVar6 + 0x5c);
    *(undefined4 *) (iVar6 + 0x54) = *(undefined4 *) (iVar6 + 0x60);
    *(undefined4 *) (iVar6 + 0x58) = *(undefined4 *) (iVar6 + 100);
    *(int *) (iVar6 + 0x54) = *(int *) (iVar6 + 0x54) + DAT_000189a0;
    iVar2 = (*pcVar1)(uStack60, iVar3);
    *(int *) (iVar6 + 0x44) = iVar2 + iStack56;
    iVar2 = (*pcVar1)(uStack44, iVar3);
    *(int *) (iVar6 + 0x48) = iVar2 + iStack40;
    iVar2 = (*pcVar1)(uStack28, iVar3);
    *(int *) (iVar6 + 0x4c) = iVar2 + iStack24;
    return;
}


void FUN_000189b8(int *param_1) {
    int iVar1;
    int *piVar2;

    iVar1 = *DAT_00018b24;
    piVar2 = (int *) (*(int *) (iVar1 + 0x14) + (int) DAT_00018b1e);
    *(int *) (iVar1 + 0x38) = *piVar2 + *param_1;
    *(int *) (iVar1 + 0x3c) = piVar2[1] + param_1[1] + (int) DAT_00018b20;
    *(int *) (iVar1 + 0x40) = piVar2[2] + param_1[2];
    *(undefined4 *) (iVar1 + 0x10) = DAT_00018b28;
    return;
}


void FUN_00018aa4(int *param_1) {
    int iVar1;

    iVar1 = *DAT_00018b24;
    *(int *) (iVar1 + 0x44) = *param_1 + *(int *) (iVar1 + 0x38);
    *(int *) (iVar1 + 0x48) = param_1[1] + *(int *) (iVar1 + 0x3c);
    *(int *) (iVar1 + 0x4c) = param_1[2] + *(int *) (iVar1 + 0x40);
    *(undefined4 *) (iVar1 + 0x10) = DAT_00018b28;
    return;
}


undefined4 FUN_00018c26(int param_1, int param_2, int param_3) {
    code *pcVar1;
    undefined4 uVar2;
    int iVar3;
    undefined4 *puVar4;
    undefined4 *puVar5;
    undefined4 *puVar6;
    int unaff_r14;
    byte in_sr;
    int iStack00000000;
    int iStack00000004;
    int iStack00000008;

    puVar6 = (undefined4 *) (param_2 + param_3);
    if (((in_sr & 1) == 1) || (*(int *) (unaff_r14 + DAT_00018c3a) != 0)) {
        uVar2 = 0;
    } else {
        puVar5 = (undefined4 *) (DAT_00018cea + unaff_r14);
        iVar3 = (int) DAT_00018cec;
        *puVar5 = *puVar6;
        puVar4 = (undefined4 *) (iVar3 + unaff_r14);
        puVar5[1] = puVar6[1];
        puVar5[2] = puVar6[2];
        *puVar4 = puVar6[3];
        puVar4[1] = puVar6[4];
        puVar4[2] = puVar6[5];
        pcVar1 = DAT_00018cfc;
        iVar3 = (int) DAT_00018cee;
        iStack00000000 = (int) *(short *) (param_1 + iVar3) << 4;
        iStack00000004 = (int) *(short *) (param_1 + iVar3 + 2) << 4;
        iStack00000008 = (int) *(short *) (param_1 + iVar3 + 4) << 4;
        iVar3 = (int) DAT_00018cf0;
        uVar2 = (*DAT_00018cfc)(iVar3, iStack00000000);
        *(undefined4 *) (DAT_00018cf2 + unaff_r14) = uVar2;
        uVar2 = (*pcVar1)(iVar3, iStack00000004);
        *(undefined4 *) (DAT_00018cf4 + unaff_r14) = uVar2;
        uVar2 = (*pcVar1)(iVar3, iStack00000008);
        *(undefined4 *) (DAT_00018cf6 + unaff_r14) = uVar2;
        *(undefined4 *) (unaff_r14 + DAT_00018cf8) = 5;
        *(undefined *) (*(int *) (unaff_r14 + 0x14) + (int) DAT_00018cfa) = 1;
        uVar2 = 1;
    }
    return uVar2;
}


void FUN_00019180(undefined4 *param_1, int param_2) {
    char cVar1;
    code *pcVar2;
    code *pcVar3;
    code *pcVar4;
    char *pcVar5;
    int iVar6;
    int iVar7;

    pcVar5 = DAT_00019288;
    pcVar4 = DAT_00019284;
    pcVar3 = DAT_00019280;
    pcVar2 = DAT_0001927c;
    iVar7 = (int) DAT_00019274;
    if (*DAT_0001928c == '\0') {
        iVar6 = (*DAT_000192a4)(*param_1);
        if (iVar6 == 1) {
            (*pcVar4)(0x13, 0xd);
            (*pcVar3)(DAT_00019294);
            *pcVar5 = '\0';
            (*pcVar2)(*param_1, 1);
        }
    } else {
        if ((*(ushort *) (DAT_00019290 + 8) & 8) != 0) {
            cVar1 = *DAT_00019288;
            if (cVar1 == '\0') {
                (*DAT_00019284)(0x13, 0xd);
                (*pcVar3)(DAT_00019298);
                *pcVar5 = '\x01';
            } else {
                (*DAT_00019284)(0x13, 0xd);
                (*pcVar3)(DAT_00019294);
                *pcVar5 = '\0';
            }
            (*pcVar2)(*param_1, cVar1 != '\0');
        }
        if (*DAT_0001929c == '\x02') {
            if (DAT_0001929c[4] == '\0') {
                if (DAT_0001929c[5] != '\0') {
                    iVar7 = iVar7 - ((int) (((int) DAT_0001929c[5] & 0xffU) * 5) >> 1);
                }
            } else {
                iVar7 = iVar7 + ((int) DAT_0001929c[4] & 0xffU) * (param_2 + -1) * 4;
            }
        } else if ((DAT_000192a0 & (int) *(short *) (DAT_0001929c + 6)) == 0) {
            if ((DAT_00019278 & *(ushort *) (DAT_0001929c + 6)) != 0) {
                iVar7 = (int) DAT_0001927a;
            }
        } else {
            iVar7 = param_2 * DAT_00019276;
        }
    }
    // WARNING: Could not recover jumptable at 0x00019270. Too many branches
    // WARNING: Treating indirect jump as call
    (*DAT_000192a8)(*param_1, iVar7, 1);
    return;
}


void FUN_00019352(undefined4 *param_1) {
    (*DAT_000193b8)(*param_1);
    if (*(int *) ((int) param_1 + (int) DAT_00019394) != 0) {
        (*DAT_000193bc)(*(undefined4 *) ((int) param_1 + (int) DAT_00019394));
        *(undefined4 *) ((int) param_1 + (int) DAT_00019394) = 0;
    }
    *DAT_000193c0 = 0;
    return;
}


undefined4 FUN_000195bc(void) {
    int iVar1;

    iVar1 = *DAT_00019600;
    if (*(int *) (iVar1 + 8) == 1) {
        if (*(int *) (iVar1 + 0x10) <= *(int *) (DAT_00019604 + 0x54)) {
            return 1;
        }
    } else if ((*(int *) (iVar1 + 8) == 2) && (*(int *) (iVar1 + 0x10) <= *(int *) (DAT_00019604 + 0x58))) {
        return 1;
    }
    return 0;
}


void FUN_0001b39a(void) {
    int in_r3;

    *(undefined4 *) (DAT_0001b3e4 + in_r3) = 0;
    return;
}


void FUN_0001b3f0(int *param_1, int param_2) {
    int iVar1;
    undefined4 uVar2;
    undefined4 *puVar3;

    puVar3 = (undefined4 *) ((int) DAT_0001b50a + (int) param_1);
    *(int **) (*(char *) (param_2 + 0x20) * 4 + DAT_0001b518) = param_1;
    *(undefined *) (param_1 + 3) = 0;
    param_1[4] = param_2;
    param_1[7] = *(int *) (param_2 + 0x28);
    param_1[0xc] = *(int *) (param_2 + 0x2c);
    *puVar3 = *(undefined4 *) (param_2 + 8);
    puVar3[1] = *(undefined4 *) (param_2 + 0xc);
    puVar3[2] = *(undefined4 *) (param_2 + 0x10);
    puVar3[3] = *(undefined4 *) (param_2 + 0x14);
    puVar3[4] = *(undefined4 *) (param_2 + 0x18);
    puVar3[5] = *(undefined4 *) (param_2 + 0x1c);
    FUN_0001bf30(param_1, (int) *(char *) (param_2 + 0x21), *(undefined4 *) (param_2 + 0x30));
    if (*(char *) ((int) param_1 + 0xd) == '\x04') {
        *(undefined *) ((int) param_1 + (int) DAT_0001b50c) = 1;
    }
    iVar1 = (int) DAT_0001b50e;
    *(undefined4 **) ((int) param_1 + iVar1) = puVar3;
    *(undefined4 **) ((int) param_1 + iVar1 + 4) = puVar3 + 3;
    *(int **) ((int) param_1 + iVar1 + 8) = param_1;
    *(undefined4 *) ((int) param_1 + iVar1 + 0xc) = *(undefined4 *) (param_2 + 0x38);
    if (*(short *) (param_2 + 0x36) == 0) {
        uVar2 = 0;
    } else {
        uVar2 = *(undefined4 *) ((int) *(short *) (param_2 + 0x36) + *param_1);
    }
    iVar1 = (int) DAT_0001b512;
    *(undefined4 *) ((int) param_1 + (int) DAT_0001b510) = uVar2;
    (*DAT_0001b51c)(iVar1 + (int) param_1, (int) *(char *) (param_2 + 0x34));
    (*DAT_0001b520)((int) DAT_0001b512 + (int) param_1, param_2 + 0x3c, param_2 + 0x48);
    (*DAT_0001b524)(param_1);
    *(undefined *) ((int) param_1 + (int) DAT_0001b514) = 0;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_0001ba30(int *param_1, int param_2) {
    (*DAT_0001ba9c)();
    (*DAT_0001baa0)(param_2);
    (*DAT_0001baa4)(param_2 + 0xc);
    if (*param_1 != 0) {
        (*DAT_0001baa8)(*param_1);
    }
    if (param_1[1] != 0) {
        param_2 = FUN_0001ba30(param_1[1], param_2 + _LAB_0001ba90);
    }
    (*DAT_0001baac)();
    if (param_1[2] != 0) {
        param_2 = FUN_0001ba30(param_1[2], param_2 + _LAB_0001ba90);
    }
    return param_2;
}


void FUN_0001bab0(int param_1, int *param_2) {
    code *pcVar1;
    code *pcVar2;
    int iVar3;
    int *piVar4;
    int *piVar5;
    int iVar6;

    pcVar2 = DAT_0001bbac;
    pcVar1 = DAT_0001bba8;
    iVar6 = *(int *) (param_1 + 0x2c);
    iVar3 = *(int *) ((int) *(short *) (param_1 + 0xc) + *(int *) (param_1 + 4));
    (*DAT_0001bbac)();
    (*pcVar1)(iVar6);
    (*DAT_0001bbb0)(iVar6 + 0xc);
    piVar4 = *(int **) (iVar3 + 4);
    iVar6 = iVar6 + DAT_0001bba2;
    (*pcVar2)();
    (*pcVar1)(iVar6);
    (*DAT_0001bbb4)(*(undefined4 *) (iVar6 + 0x14));
    iVar3 = (*DAT_0001bbb8)(param_2[1], (int) DAT_0001bba4);
    (*DAT_0001bbbc)(*(int *) (iVar6 + 0x10) + iVar3);
    (*DAT_0001bbc0)(*(undefined4 *) (iVar6 + 0xc));
    if (*piVar4 != 0) {
        (*DAT_0001bbc4)(*piVar4);
    }
    piVar5 = (int *) piVar4[1];
    iVar6 = iVar6 + DAT_0001bba2;
    (*pcVar2)();
    (*pcVar1)(iVar6);
    (*DAT_0001bbb4)(*(undefined4 *) (iVar6 + 0x14));
    iVar3 = (*DAT_0001bbb8)(param_2[1], PTR_DAT_0001bbc8);
    (*DAT_0001bbbc)(*(int *) (iVar6 + 0x10) + iVar3);
    (*DAT_0001bbc0)(*(int *) (iVar6 + 0xc) + *param_2);
    if (*piVar5 != 0) {
        (*DAT_0001bbc4)(*piVar5);
    }
    if (piVar5[1] != 0) {
        iVar6 = FUN_0001ba30(piVar5[1], iVar6 + DAT_0001bba2);
    }
    pcVar1 = DAT_0001bbcc;
    (*DAT_0001bbcc)();
    if (piVar5[2] != 0) {
        iVar6 = FUN_0001ba30(piVar5[2], iVar6 + DAT_0001bba2);
    }
    (*pcVar1)();
    if (piVar4[2] != 0) {
        FUN_0001ba30(piVar4[2], iVar6 + DAT_0001bba2);
    }
    (*pcVar1)();
    return;
}


int FUN_0001bbd0(int *param_1, int param_2) {
    (*DAT_0001bc28)();
    (*DAT_0001bc2c)(param_2);
    (*DAT_0001bc30)(param_2 + 0xc);
    if (*param_1 != 0) {
        (*DAT_0001bc34)(*param_1);
    }
    if (param_1[1] != 0) {
        param_2 = FUN_0001bbd0(param_1[1], param_2 + 0x48);
    }
    (*DAT_0001bc38)();
    if (param_1[2] != 0) {
        param_2 = FUN_0001bbd0(param_1[2], param_2 + 0x48);
    }
    return param_2;
}


void FUN_0001bc3c(int param_1, int *param_2) {
    code *pcVar1;
    code *pcVar2;
    int iVar3;
    int *piVar4;
    int *piVar5;
    int iVar6;
    int iVar7;

    pcVar2 = DAT_0001bd2c;
    pcVar1 = DAT_0001bd28;
    iVar6 = *(int *) (param_1 + 0x48);
    iVar3 = *(int *) ((int) *(short *) (param_1 + 0xc) + *(int *) (param_1 + 4));
    (*DAT_0001bd2c)();
    (*pcVar1)(iVar6);
    (*DAT_0001bd30)(iVar6 + 0xc);
    piVar4 = *(int **) (iVar3 + 4);
    (*pcVar2)();
    (*pcVar1)(iVar6 + 0x48);
    (*DAT_0001bd34)(*(undefined4 *) (iVar6 + 0x5c));
    iVar3 = (*DAT_0001bd38)(param_2[1], (int) DAT_0001bd26);
    (*DAT_0001bd3c)(*(int *) (iVar6 + 0x58) + iVar3);
    (*DAT_0001bd40)(*(undefined4 *) (iVar6 + 0x54));
    if (*piVar4 != 0) {
        (*DAT_0001bd44)(*piVar4);
    }
    piVar5 = (int *) piVar4[1];
    iVar7 = iVar6 + 0x90;
    (*pcVar2)();
    (*pcVar1)(iVar7);
    (*DAT_0001bd34)(*(undefined4 *) (iVar6 + 0xa4));
    iVar3 = (*DAT_0001bd38)(param_2[1], PTR_DAT_0001bd48);
    (*DAT_0001bd3c)(*(int *) (iVar6 + 0xa0) + iVar3);
    (*DAT_0001bd40)(*(int *) (iVar6 + 0x9c) + *param_2);
    if (*piVar5 != 0) {
        (*DAT_0001bd44)(*piVar5);
    }
    if (piVar5[1] != 0) {
        iVar7 = FUN_0001bbd0(piVar5[1], iVar6 + 0xd8);
    }
    pcVar1 = DAT_0001bd4c;
    (*DAT_0001bd4c)();
    if (piVar5[2] != 0) {
        iVar7 = FUN_0001bbd0(piVar5[2], iVar7 + 0x48);
    }
    (*pcVar1)();
    if (piVar4[2] != 0) {
        FUN_0001bbd0(piVar4[2], iVar7 + 0x48);
    }
    (*pcVar1)();
    return;
}


int FUN_0001bf30(int param_1, uint param_2, undefined4 param_3) {
    int iVar1;
    uint uVar2;

    uVar2 = (uint) DAT_0001bf8a;
    if ((uVar2 & param_2) == 0) {
        uVar2 = 0;
    }
    *(byte * )(param_1 + 0xf) = *(byte * )(param_1 + 0xf) | (byte) uVar2;
    *(byte * )(param_1 + 0xd) = (byte) param_2 & 0x3f;
    *(undefined4 *) (param_1 + 0x18) = param_3;
    iVar1 = (int) *(char *) (param_1 + 0xd);
    if (iVar1 == 0) {
        *(undefined4 *) (param_1 + 0x14) = DAT_0001bfa4;
        return 0;
    }
    if (iVar1 == 1) {
        *(undefined4 *) (param_1 + 0x14) = DAT_0001bfa8;
        iVar1 = 1;
    } else {
        if (iVar1 == 2) {
            *(undefined4 *) (param_1 + 0x14) = DAT_0001bfac;
            return 2;
        }
        if (iVar1 == 3) {
            *(undefined4 *) (param_1 + 0x14) = param_3;
            return 3;
        }
        if (iVar1 != 4) {
            return iVar1;
        }
        iVar1 = 0;
        *(undefined4 *) (param_1 + 0x14) = DAT_0001bfb0;
    }
    *(char *) (param_1 + 0xe) = (char) iVar1;
    return iVar1;
}


uint FUN_0001c04e(int param_1) {
    uint uVar1;

    uVar1 = (uint) * (char *) (param_1 + 0xe);
    if (uVar1 == 0) {
        uVar1 = (int) *(char *) (param_1 + 0xc) & 0xfd;
        *(char *) (param_1 + 0xc) = (char) uVar1;
    }
    return uVar1;
}


uint FUN_0001c28a(int param_1) {
    code *UNRECOVERED_JUMPTABLE;
    int iVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    int *piVar7;

    uVar3 = DAT_0001c378;
    uVar4 = DAT_0001c374;
    piVar7 = (int *) (DAT_0001c36a + param_1);
    if ((*(byte * )(param_1 + 0xf) & 2) == 0) {
        if ((*(byte * )(param_1 + 0xf) & 1) == 0) {
            uVar3 = (int) *(char *) (param_1 + 0xc) & 0xfb;
            *(char *) (param_1 + 0xc) = (char) uVar3;
        } else {
            iVar1 = (*DAT_0001c484)(piVar7[0xe]);
            iVar2 = (*DAT_0001c488)(piVar7 + 0xf, piVar7);
            if (iVar1 < iVar2) {
                iVar1 = (*DAT_0001c48c)(*piVar7 - piVar7[0xf], piVar7[2] - piVar7[0x11]);
                UNRECOVERED_JUMPTABLE = DAT_0001c5ec;
                uVar5 = iVar1 - piVar7[4];
                if ((uVar5 & uVar3) == 0) {
                    uVar5 = uVar5 & DAT_0001c478;
                } else {
                    uVar5 = uVar5 | DAT_0001c474;
                }
                if ((int) uVar5 < 0) {
                    if ((int) uVar5 < (int) DAT_0001c490) {
                        uVar5 = DAT_0001c490;
                    }
                } else if ((int) uVar4 < (int) uVar5) {
                    uVar5 = uVar4;
                }
                iVar1 = (int) DAT_0001c5e4;
                piVar7[4] = piVar7[4] + uVar5;
                // WARNING: Could not recover jumptable at 0x0001c4ac. Too many branches
                // WARNING: Treating indirect jump as call
                uVar4 = (*UNRECOVERED_JUMPTABLE)(iVar1 + param_1);
                return uVar4;
            }
            *piVar7 = piVar7[0xf];
            piVar7[1] = piVar7[0x10];
            piVar7[2] = piVar7[0x11];
            uVar3 = (int) *(char *) (param_1 + 0xf) & 0xfe;
            *(char *) (param_1 + 0xf) = (char) uVar3;
        }
    } else {
        uVar5 = (*DAT_0001c37c)(DAT_0001c374, *(undefined4 *) (param_1 + 0x1c));
        uVar4 = -uVar5;
        if ((*(byte * )(param_1 + 0xf) & 4) == 0) {
            uVar6 = piVar7[0x13] - piVar7[4];
            if ((uVar6 & uVar3) == 0) {
                uVar6 = uVar6 & DAT_0001c478;
            } else {
                uVar6 = uVar6 | DAT_0001c474;
            }
            uVar3 = 0x4c;
            if ((int) uVar6 < 0) {
                if ((int) uVar4 <= (int) uVar6) {
                    uVar3 = (int) *(char *) (param_1 + 0xf) & 0xfd;
                    *(char *) (param_1 + 0xf) = (char) uVar3;
                    uVar4 = uVar6;
                }
                if ((int) uVar6 < (int) DAT_0001c480) {
                    uVar6 = DAT_0001c480;
                }
                iVar1 = *(int *) (param_1 + 0x24) + uVar4;
                *(int *) (param_1 + 0x24) = iVar1;
                if (iVar1 < (int) uVar6) {
                    *(uint * )(param_1 + 0x24) = uVar6;
                }
            } else {
                uVar4 = uVar5;
                if ((int) uVar6 <= (int) uVar5) {
                    uVar3 = (int) *(char *) (param_1 + 0xf) & 0xfd;
                    *(char *) (param_1 + 0xf) = (char) uVar3;
                    uVar4 = uVar6;
                }
                if ((int) DAT_0001c47c < (int) uVar6) {
                    uVar6 = DAT_0001c47c;
                }
                iVar1 = *(int *) (param_1 + 0x24) + uVar4;
                *(int *) (param_1 + 0x24) = iVar1;
                if ((int) uVar6 < iVar1) {
                    *(uint * )(param_1 + 0x24) = uVar6;
                }
            }
            piVar7[4] = piVar7[4] + uVar4;
        } else {
            uVar6 = piVar7[0x13] - *(int *) (param_1 + 0x24);
            if ((uVar3 & uVar6) == 0) {
                uVar6 = uVar6 & DAT_0001c384;
            } else {
                uVar6 = uVar6 | DAT_0001c380;
            }
            iVar1 = (int) DAT_0001c36c;
            if ((int) uVar6 < 0) {
                if ((int) uVar6 < (int) uVar4) {
                    *(uint * )(param_1 + 0x24) = *(int *) (param_1 + 0x24) - uVar5;
                    uVar4 = *(int *) (param_1 + 0x24) + *(int *) (*(int *) (param_1 + 0x60) + iVar1 + 0x10);
                    if ((uVar4 & uVar3) == 0) {
                        uVar4 = uVar4 & DAT_0001c384;
                    } else {
                        uVar4 = uVar4 | DAT_0001c380;
                    }
                    if ((int) uVar4 < DAT_0001c38c) {
                        uVar3 = (int) *(char *) (param_1 + 0xf) & 0xfd;
                        *(char *) (param_1 + 0xf) = (char) uVar3;
                    } else {
                        uVar3 = 0x60;
                    }
                } else {
                    *(uint * )(param_1 + 0x24) = *(int *) (param_1 + 0x24) + uVar6;
                    uVar3 = (int) *(char *) (param_1 + 0xf) & 0xfd;
                    *(char *) (param_1 + 0xf) = (char) uVar3;
                }
            } else if ((int) uVar5 < (int) uVar6) {
                iVar2 = *(int *) (param_1 + 0x24) + uVar5;
                *(int *) (param_1 + 0x24) = iVar2;
                uVar4 = iVar2 + *(int *) (*(int *) (param_1 + 0x60) + iVar1 + 0x10);
                if ((uVar4 & uVar3) == 0) {
                    uVar4 = uVar4 & DAT_0001c384;
                } else {
                    uVar4 = uVar4 | DAT_0001c380;
                }
                if (DAT_0001c388 < (int) uVar4) {
                    uVar3 = (int) *(char *) (param_1 + 0xf) & 0xfd;
                    *(char *) (param_1 + 0xf) = (char) uVar3;
                } else {
                    uVar3 = 0x60;
                }
            } else {
                *(uint * )(param_1 + 0x24) = *(int *) (param_1 + 0x24) + uVar6;
                uVar3 = (int) *(char *) (param_1 + 0xf) & 0xfd;
                *(char *) (param_1 + 0xf) = (char) uVar3;
            }
        }
    }
    return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001c544(void) {
    int iVar1;
    int iVar2;

    iVar1 = (*DAT_0001c5f0)();
    iVar2 = (int) _DAT_0001c5e8;
    *(undefined *) (iVar1 + iVar2 + 1) = *(undefined *) (iVar1 + iVar2);
    *(undefined *) (iVar1 + iVar2 + 2) = 0;
    return;
}


void FUN_0001c560(undefined4 param_1, char param_2, undefined param_3) {
    int *piVar1;
    int iVar2;
    short *psVar3;
    int *piVar4;

    piVar1 = (int *) (*DAT_0001c5f0)();
    iVar2 = (int) DAT_0001c5e6;
    *(undefined *) ((int) piVar1 + iVar2) = 0;
    *(undefined *) ((int) piVar1 + iVar2 + -1) = 0;
    *(undefined *) ((int) piVar1 + iVar2 + 1) = 0;
    if (param_2 == '\0') {
        (*DAT_0001c5f8)(piVar1 + 0xd, 0, 10);
        param_3 = 2;
        piVar1[0xb] = 0;
    } else {
        piVar1[0xb] = (int) param_2;
        psVar3 = (short *) (param_2 * 4 + piVar1[0xc]);
        piVar4 = piVar1;
        if (*psVar3 != 0) {
            piVar4 = *(int **) (*DAT_0001c5f4 + 0xc);
        }
        (*DAT_0001c5f8)(piVar1 + 0xd, *(undefined4 *) (*piVar4 + (int) psVar3[1]), 10);
        piVar1[0xb] = (int) param_2;
    }
    *(undefined *) ((int) piVar1 + 0xe) = param_3;
    return;
}


int FUN_0001c6b2(int param_1, char param_2, undefined param_3) {
    int iVar1;
    char cVar2;

    iVar1 = (int) DAT_0001c724;
    if (*(char *) (param_1 + iVar1) < '\b') {
        if (*(char *) (param_1 + 0xe) != '\0') {
            *(undefined *) (param_1 + 0xe) = 2;
        }
        *(char *) (*(char *) (param_1 + DAT_0001c726) * 2 + DAT_0001c720 + param_1) = param_2;
        if (param_2 == '\0') {
            *(undefined *) (*(char *) (param_1 + DAT_0001c726) * 2 + DAT_0001c720 + param_1 + 1) = 0;
        } else {
            *(undefined *) (*(char *) (param_1 + DAT_0001c726) * 2 + DAT_0001c720 + param_1 + 1) = param_3;
        }
        cVar2 = *(char *) (param_1 + DAT_0001c726) + '\x01';
        *(char *) (param_1 + DAT_0001c726) = cVar2;
        if ('\a' < cVar2) {
            *(undefined *) (param_1 + DAT_0001c726) = 0;
        }
        iVar1 = (int) DAT_0001c724;
        *(char *) (param_1 + iVar1) = *(char *) (param_1 + iVar1) + '\x01';
    }
    return iVar1;
}


undefined4 FUN_0001c9e8(int *param_1, int param_2) {
    short sVar1;
    undefined4 uVar2;
    int *piVar3;
    int iVar4;

    sVar1 = DAT_0001ca90;
    iVar4 = (int) DAT_0001ca92;
    if (param_2 < DAT_0001ca94) {
        (*DAT_0001ca9c)();
        if (param_2 < DAT_0001caa0) {
            uVar2 = (*DAT_0001caa8)(DAT_0001caa4, param_1[7]);
            *(undefined4 *) ((int) param_1 + sVar1 + 0x28) = uVar2;
        } else {
            uVar2 = (*DAT_0001caa8)(DAT_0001caac, param_1[7]);
            *(undefined4 *) ((int) param_1 + sVar1 + 0x28) = uVar2;
        }
        uVar2 = (*DAT_0001cab0)();
        *(undefined4 *) ((undefined *) (iVar4 + (int) param_1) + 4) = uVar2;
        if (param_1[0xb] != 3) {
            param_1[0xb] = 3;
            piVar3 = param_1;
            if (*(short *) (param_1[0xc] + 0xc) != 0) {
                piVar3 = *(int **) (*DAT_0001cab4 + 0xc);
            }
            (*DAT_0001cab8)(param_1 + 0xd, *(undefined4 *) (*piVar3 + (int) *(short *) (param_1[0xc] + 0xe)), 5
            );
        }
        *(undefined *) ((int) param_1 + 0xe) = 2;
        *(undefined *) (iVar4 + (int) param_1) = 2;
        uVar2 = 0;
    } else {
        uVar2 = 1;
    }
    return uVar2;
}


uint FUN_0001d220(int param_1) {
    char *pcVar1;
    uint uVar2;
    ushort *puVar3;
    int iVar4;
    int iVar5;

    pcVar1 = DAT_0001d2f8;
    puVar3 = (ushort *) (param_1 + DAT_0001d2ee);
    if ((*DAT_0001d2fc & 2) == 0) {
        if (*DAT_0001d2f8 == '\x02') {
            iVar5 = (int) DAT_0001d2f8[3] << 9;
            iVar4 = (int) DAT_0001d2f8[2] << 9;
        } else {
            iVar5 = DAT_0001d300;
            if (((*(ushort *) (DAT_0001d2f8 + 6) & 0x10) == 0) &&
                (iVar5 = 0, (*(ushort *) (DAT_0001d2f8 + 6) & 0x20) != 0)) {
                iVar5 = DAT_0001d304;
            }
            iVar4 = DAT_0001d300;
            if (((*(ushort *) (DAT_0001d2f8 + 6) & 0x40) == 0) &&
                (iVar4 = 0, (*(ushort *) (DAT_0001d2f8 + 6) & 0x80) != 0)) {
                iVar4 = DAT_0001d304;
            }
        }
    } else {
        *puVar3 = *puVar3 | 0xc0;
        iVar4 = 0;
        iVar5 = 0;
    }
    *(int *) (puVar3 + 2) = iVar4;
    *(int *) (puVar3 + 4) = iVar5;
    if ((*(ushort *) (pcVar1 + DAT_0001d2f0) & *(ushort *) (pcVar1 + 6)) != 0) {
        *puVar3 = *puVar3 | 2;
    }
    uVar2 = (uint)(
    short)*(ushort *) (pcVar1 + 8);
    if ((*(ushort *) (pcVar1 + DAT_0001d2f2) & *(ushort *) (pcVar1 + 8)) != 0) {
        uVar2 = (int) (short) *puVar3 | 1;
        *puVar3 = (ushort) uVar2;
    }
    return uVar2;
}


void FUN_0001d2a8(int param_1) {
    short sVar1;
    ushort uVar2;
    code *pcVar3;
    uint uVar4;
    undefined4 uVar5;
    int iVar6;
    uint uVar7;
    char *pcVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    ushort *puVar12;

    pcVar3 = DAT_0001d30c;
    iVar11 = DAT_0001d2f4 + param_1;
    puVar12 = (ushort *) (DAT_0001d2ee + param_1);
    pcVar8 = *DAT_0001d308;
    if ((*puVar12 & 0x40) == 0) {
        if (*pcVar8 == '\0') {
            uVar5 = DAT_0001d3e8;
            if ((*puVar12 & 2) != 0) {
                uVar5 = DAT_0001d310;
            }
            uVar5 = (*DAT_0001d30c)(uVar5, *(undefined4 *) (puVar12 + 2));
            *(undefined4 *) (iVar11 + 0x28) = uVar5;
            goto LAB_0001d392;
        }
        if (*pcVar8 != '\x01') goto LAB_0001d392;
        if ((*puVar12 & 4) == 0) {
            if ((*(int *) (puVar12 + 2) != 0) || (uVar7 = 0, *(int *) (puVar12 + 4) != 0)) {
                iVar10 = (*DAT_0001d3ec)(*(undefined4 *) (puVar12 + 2), *(undefined4 *) (puVar12 + 4));
                uVar7 = (iVar10 + *(int *) (pcVar8 + 0x6c)) - *(int *) (iVar11 + 0x10);
                if ((uVar7 & DAT_0001d3f0) == 0) {
                    uVar7 = DAT_0001d3f8 & uVar7;
                } else {
                    uVar7 = DAT_0001d3f4 | uVar7;
                }
                uVar4 = DAT_0001d408;
                if ((pcVar8[2] == '\0') &&
                    (uVar4 = (*DAT_0001d400)(DAT_0001d3fc, *(int *) (pcVar8 + 0x24) + (int) DAT_0001d3e2,
                                             (int) DAT_0001d3e0), (int) uVar4 < (int) DAT_0001d404)) {
                    uVar4 = DAT_0001d404;
                }
                if ((int) uVar4 < (int) uVar7) {
                    uVar7 = uVar4;
                }
                if ((int) uVar7 < (int) -uVar4) {
                    uVar7 = -uVar4;
                }
            }
            *(uint * )(iVar11 + 0x28) = uVar7;
            goto LAB_0001d392;
        }
    }
    *(undefined4 *) (iVar11 + 0x28) = 0;
    LAB_0001d392:
    if ((*puVar12 & 0x80) == 0) {
        sVar1 = DAT_0001d3e6;
        if ((*puVar12 & 2) != 0) {
            sVar1 = DAT_0001d3e4;
        }
        iVar10 = (int) sVar1;
        if (*pcVar8 == '\0') {
            uVar5 = (*pcVar3)(*(undefined4 *) (puVar12 + 4), iVar10);
            *(undefined4 *) (iVar11 + 0x38) = uVar5;
            *(undefined4 *) (iVar11 + 0x30) = 0;
        } else if (*pcVar8 == '\x01') {
            if ((*puVar12 & 4) == 0) {
                iVar9 = 0;
                if ((*(int *) (puVar12 + 2) != 0) || (*(int *) (puVar12 + 4) != 0)) {
                    iVar9 = (*DAT_0001d504)(*(undefined4 *) (puVar12 + 2));
                    iVar6 = (*DAT_0001d504)(*(undefined4 *) (puVar12 + 4));
                    iVar9 = (*DAT_0001d508)(iVar9 + iVar6);
                    if (DAT_0001d50c < iVar9) {
                        iVar9 = DAT_0001d50c;
                    }
                    iVar9 = (*pcVar3)(iVar9, iVar10);
                    iVar10 = (*pcVar3)(*(undefined4 *) (iVar11 + 0x38),
                                       *(undefined4 *)
                                               ((short) ((ushort) ((uint) * (undefined4 *) (iVar11 + 0x28) >> 0x10) &
                                                         DAT_0001d4fa) * 4 + DAT_0001d510));
                    iVar10 = (*pcVar3)(iVar10 - iVar9, DAT_0001d514);
                    iVar9 = iVar9 + iVar10;
                }
                *(int *) (iVar11 + 0x38) = iVar9;
                *(undefined4 *) (iVar11 + 0x30) = 0;
            } else {
                uVar5 = (*pcVar3)(*(undefined4 *) (puVar12 + 4), iVar10);
                *(undefined4 *) (iVar11 + 0x38) = uVar5;
                uVar5 = (*pcVar3)(*(undefined4 *) (puVar12 + 2), iVar10);
                *(undefined4 *) (iVar11 + 0x30) = uVar5;
            }
        }
    } else {
        *(undefined4 *) (iVar11 + 0x30) = 0;
        *(undefined4 *) (iVar11 + 0x38) = 0;
    }
    uVar2 = *puVar12;
    *puVar12 = uVar2 & 1;
    if ((((uVar2 & 1) != 0) &&
         (uVar7 = *(uint * )(DAT_0001d4fc + param_1 + 0x44) & 4,
                 *(uint * )(DAT_0001d4fc + param_1 + 0x44) = uVar7, uVar7 != 0)) &&
        (*(int *) (iVar11 + 0x34) < (int) DAT_0001d4fe)) {
        *(int *) (iVar11 + 0x34) = (int) DAT_0001d4fe;
    }
    return;
}


void FUN_0001d49c(int *param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4) {
    short *psVar1;
    uint uVar2;
    uint uVar3;
    undefined *puVar4;
    code *pcVar5;
    int *piVar6;
    int iVar7;
    undefined *puVar8;
    int *piVar9;
    int iStack60;
    int iStack56;
    uint uStack52;
    uint uStack48;
    int iStack44;
    int iStack40;
    int iStack36;

    pcVar5 = DAT_0001d52c;
    puVar4 = PTR_DAT_0001d528;
    uVar3 = DAT_0001d524;
    uVar2 = DAT_0001d520;
    psVar1 = DAT_0001d518;
    iVar7 = *DAT_0001d51c;
    piVar9 = (int *) ((int) DAT_0001d500 + (int) param_1);
    if ((*(int *) (iVar7 + 8) == 0) || ((*DAT_0001d530 & 1) == 0)) {
        if (((*DAT_0001d6d8 & 0x10) == 0) || ((*DAT_0001d6d8 & 8) != 0)) {
            iVar7 = piVar9[10];
            if (DAT_0001d80c < piVar9[10]) {
                iVar7 = DAT_0001d80c;
            }
            if (iVar7 < DAT_0001d810) {
                iVar7 = DAT_0001d810;
            }
            puVar8 = DAT_0001d818;
            if (iVar7 != 0) {
                puVar8 = PTR_DAT_0001d814;
            }
            iVar7 = (*DAT_0001d52c)(iVar7 - param_1[9], puVar8);
            param_1[9] = param_1[9] + iVar7;
            iVar7 = (*pcVar5)(param_1[8], puVar4);
            param_1[8] = iVar7;
            return;
        }
        (*DAT_0001d6dc)();
        (*DAT_0001d6e0)(piVar9);
        (*DAT_0001d6e4)(piVar9[4]);
        (*DAT_0001d6e8)(piVar9[3]);
        (*DAT_0001d6ec)((int) DAT_0001d6d6);
        piVar9 = DAT_0001d6f0;
        iStack44 = *(int *) (*DAT_0001d6f0 + 0xc);
        iVar7 = (*DAT_0001d6f4)((int) *psVar1, *(undefined4 *) (psVar1 + 0x14),
                                *(undefined4 *) (psVar1 + 0x16), param_4, iStack44);
        iStack44 = iStack44 - iVar7;
        iStack40 = *(int *) (*piVar9 + 0x1c);
        iVar7 = (*DAT_0001d6f4)((int) psVar1[2], *(undefined4 *) (psVar1 + 0x14),
                                *(undefined4 *) (psVar1 + 0x18), param_4, iStack40);
        iStack40 = iStack40 - iVar7;
        iStack36 = *(int *) (*piVar9 + 0x2c) - *(int *) (psVar1 + 0x14);
        (*DAT_0001d6f8)(&iStack44, &uStack52);
        iStack44 = *(int *) (*piVar9 + 0x20);
        iStack40 = *(int *) (*piVar9 + 0x24);
        iStack36 = *(int *) (*piVar9 + 0x28);
        (*DAT_0001d6f8)(&iStack44, &iStack60);
        (*DAT_0001d6fc)();
        uStack52 = uStack52 - iStack60;
        if ((uStack52 & DAT_0001d700) == 0) {
            uStack52 = DAT_0001d708 & uStack52;
        } else {
            uStack52 = DAT_0001d704 | uStack52;
        }
        uStack48 = -(uStack48 - iStack56);
        if ((uStack48 & DAT_0001d700) == 0) {
            uStack48 = DAT_0001d800 & uStack48;
        } else {
            uStack48 = DAT_0001d704 | uStack48;
        }
        if ((int) DAT_0001d804 < (int) uStack52) {
            uStack52 = DAT_0001d804;
        }
        if ((int) uStack52 < (int) uVar2) {
            uStack52 = uVar2;
        }
        if ((int) uVar3 < (int) uStack48) {
            uStack48 = uVar3;
        }
        if ((int) uStack48 < (int) DAT_0001d808) {
            uStack48 = DAT_0001d808;
        }
    } else {
        iStack40 = 0;
        if (*(int *) (iVar7 + 8) == 1) {
            piVar6 = (int *) (*DAT_0001d534)(*(undefined4 *) (iVar7 + 0xc));
        } else {
            piVar6 = param_1;
            if (*(int *) (iVar7 + 8) == 2) {
                iVar7 = *(int *) (iVar7 + 0xc);
                piVar6 = (int *) (iVar7 + 8);
                if (*(int *) (iVar7 + 0x2c) == 3) {
                    iStack40 = *(int *) (iVar7 + 0x18) + (int) DAT_0001d5de;
                }
            }
        }
        iStack44 = *piVar6 - *piVar9;
        iStack40 = iStack40 + (piVar6[1] - piVar9[1]) + (int) DAT_0001d5e0;
        iStack36 = piVar6[2] - piVar9[2];
        (*DAT_0001d5e4)(&iStack44, &uStack52);
        uStack48 = uStack48 - piVar9[4];
        uStack52 = -(uStack52 - piVar9[3]);
        if ((uStack52 & DAT_0001d5e8) == 0) {
            uStack52 = DAT_0001d5f0 & uStack52;
        } else {
            uStack52 = DAT_0001d5ec | uStack52;
        }
        if ((uStack48 & DAT_0001d5e8) == 0) {
            uStack48 = DAT_0001d5f0 & uStack48;
        } else {
            uStack48 = DAT_0001d5ec | uStack48;
        }
        if ((int) DAT_0001d5f4 < (int) uStack52) {
            uStack52 = DAT_0001d5f4;
        }
        if ((int) uStack52 < (int) uVar2) {
            uStack52 = uVar2;
        }
        if ((int) uVar3 < (int) uStack48) {
            uStack48 = uVar3;
        }
        if ((int) uStack48 < (int) DAT_0001d5f8) {
            uStack48 = DAT_0001d5f8;
        }
    }
    iVar7 = (*pcVar5)(uStack52 - param_1[8], puVar4);
    param_1[8] = param_1[8] + iVar7;
    iVar7 = (*pcVar5)(uStack48 - param_1[9], puVar4);
    param_1[9] = param_1[9] + iVar7;
    return;
}


int FUN_0001dac6(int param_1) {
    byte bVar1;
    int iVar2;

    bVar1 = *DAT_0001db34;
    if ((bVar1 & *DAT_0001db30) == 0) {
        iVar2 = 0;
    } else {
        iVar2 = (int) DAT_0001db20;
    }
    *(int *) (param_1 + 4) = iVar2;
    return (int) (char) bVar1;
}


void FUN_0001db40(undefined4 *param_1, char *param_2) {
    code *pcVar1;
    undefined4 uVar2;
    int iVar3;
    uint uVar4;
    undefined *puVar5;
    undefined auStack64[8];
    undefined4 uStack56;
    undefined4 uStack40;
    undefined4 uStack24;

    pcVar1 = DAT_0001dc74;
    puVar5 = (undefined *) *DAT_0001dc70;
    *(char **) (puVar5 + 8) = param_2;
    (*pcVar1)(auStack64);
    (*DAT_0001dc78)(param_1[1], auStack64);
    (*DAT_0001dc7c)(*param_1, auStack64);
    *(undefined4 *) (puVar5 + 0x14) = uStack56;
    *(undefined4 *) (puVar5 + 0x18) = uStack40;
    *(undefined4 *) (puVar5 + 0x1c) = uStack24;
    uVar2 = DAT_0001dc80;
    uVar4 = (uint) DAT_0001dc6a;
    *(uint * )(puVar5 + 0x10) =
            ((int) param_2[2] & uVar4) << 0x10 | ((int) param_2[1] & uVar4) << 8 | (int) *param_2 & uVar4;
    *(undefined4 *) (puVar5 + 0x30) = uVar2;
    (*DAT_0001dc84)(((int) param_2[5] & uVar4) << 0x10 | ((int) param_2[4] & uVar4) << 8 |
                    (int) param_2[3] & uVar4,
                    ((int) param_2[8] & uVar4) << 0x10 | ((int) param_2[7] & uVar4) << 8 |
                    (int) param_2[6] & uVar4,
                    ((int) param_2[0xb] & uVar4) << 0x10 | ((int) param_2[10] & uVar4) << 8 |
                    (int) param_2[9] & uVar4);
    uVar2 = DAT_0001dc8c;
    *(undefined4 *) (puVar5 + -0x10) = DAT_0001dc88;
    *(undefined4 *) (puVar5 + -0xc) = uVar2;
    iVar3 = DAT_0001dc94;
    if (*(char *) (DAT_0001dc90 + 0x4c) <= *(char *) (DAT_0001dc90 + 0x4d)) {
        *(undefined2 *) (DAT_0001dc94 + DAT_0001dc6c) = 0x10;
        *(undefined2 *) (iVar3 + DAT_0001dc6e) = 0x10;
    }
    (*DAT_0001dc98)();
    puVar5[2] = 0;
    *puVar5 = 0;
    return;
}


uint FUN_0001dd3e(char *param_1, undefined4 param_2) {
    char cVar1;
    char cVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    pcVar3 = DAT_0001de7c;
    iVar4 = (*DAT_0001de7c)((int) *param_1);
    cVar1 = param_1[3];
    iVar5 = (*pcVar3)((int) param_1[1], param_2);
    cVar2 = param_1[4];
    iVar6 = (*pcVar3)((int) param_1[2], param_2);
    return ((iVar5 + cVar2 >> 1) + 8) * 0x20 | ((iVar6 + param_1[5] >> 1) + 8) * 0x400 |
           (iVar4 + cVar1 >> 1) + 8U | DAT_0001de80;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_0001de98(int param_1) {
    uint uVar1;
    int iVar2;

    uVar1 = *_LAB_0001dfc3_1;
    if ((uVar1 & 1) == 0) {
        iVar2 = *(int *) (param_1 + 4) + 1;
        *(int *) (param_1 + 4) = iVar2;
        if (_LAB_0001dfbc < iVar2) {
            *(int *) (param_1 + 4) = (int) _LAB_0001dfbc;
        }
    }
    return uVar1;
}


uint FUN_0001deb4(int param_1, int param_2) {
    uint uVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    if ((*DAT_0001dfcc & *DAT_0001dfc8) == 0) {
        iVar4 = *(int *) (param_1 + 0xc);
        iVar7 = iVar4 + 0x10;
    } else {
        iVar4 = *(int *) (param_1 + 0xc) + 0x30;
        iVar7 = *(int *) (param_1 + 0xc) + 0x40;
    }
    if (param_2 < DAT_0001dfbe) {
        iVar6 = (int) DAT_0001dfc0;
        if (iVar6 <= param_2) {
            iVar4 = iVar4 + 0x10;
            iVar7 = iVar7 + 0x10;
            param_2 = param_2 - iVar6;
        }
        iVar6 = (*DAT_0001dfd0)(param_2, iVar6);
        iVar3 = DAT_0001dfd4 - iVar6;
        uVar1 = (int) (short) ((*(char *) (iVar7 + 7) * 2 + (int) *(char *) (iVar7 + 4)) * iVar6 +
                               (*(char *) (iVar4 + 7) * 2 + (int) *(char *) (iVar4 + 4)) * iVar3 >> 0x12) + 8;
        iVar5 = (short) ((*(char *) (iVar7 + 8) * 2 + (int) *(char *) (iVar7 + 5)) * iVar6 +
                         (*(char *) (iVar4 + 8) * 2 + (int) *(char *) (iVar4 + 5)) * iVar3 >> 0x12) + 8;
        iVar7 = (short) ((*(char *) (iVar7 + 9) * 2 + (int) *(char *) (iVar7 + 6)) * iVar6 +
                         (*(char *) (iVar4 + 9) * 2 + (int) *(char *) (iVar4 + 6)) * iVar3 >> 0x12) + 8;
        iVar4 = iVar7;
        if (iVar7 < 1) {
            iVar4 = 0;
        }
        if (iVar4 < 0x20) {
            if (iVar7 < 1) {
                iVar7 = 0;
            }
        } else {
            iVar7 = 0x1f;
        }
        iVar4 = iVar5;
        if (iVar5 < 1) {
            iVar4 = 0;
        }
        if (iVar4 < 0x20) {
            if (iVar5 < 1) {
                iVar5 = 0;
            }
        } else {
            iVar5 = 0x1f;
        }
        uVar2 = uVar1;
        if ((int) uVar1 < 1) {
            uVar2 = 0;
        }
        if ((int) uVar2 < 0x20) {
            if ((int) uVar1 < 1) {
                uVar1 = 0;
            }
        } else {
            uVar1 = 0x1f;
        }
        return iVar7 << 10 | iVar5 << 5 | uVar1 | DAT_0001e050;
    }
    uVar1 = FUN_0001dd3e(iVar7 + 0x14, *(undefined4 *) (param_1 + 0x30));
    return uVar1;
}


undefined4 FUN_0001e170(int param_1) {
    undefined4 uVar1;
    undefined4 uStack16;
    undefined4 uStack12;
    undefined4 uStack8;

    (*DAT_0001e1c4)(param_1 + 0x14, &uStack16);
    uVar1 = (*DAT_0001e1c8)(uStack16, uStack12, uStack8, *(undefined4 *) (param_1 + 0x10));
    return uVar1;
}


void FUN_0001e2f0(short param_1, short param_2, short *param_3, short param_4) {
    short sVar1;
    short sVar2;
    ushort **ppuVar3;
    short sVar4;
    ushort *puVar5;
    ushort *puVar6;

    ppuVar3 = DAT_0001e3e4;
    sVar2 = DAT_0001e3c8;
    sVar4 = *param_3;
    sVar1 = *(short *) (*(int *) (*(int *) (*DAT_0001e3e0 + 0xc) + 4) + 4);
    puVar6 = *DAT_0001e3e4;
    *puVar6 = param_3[2] | DAT_0001e3c2;
    puVar6[2] = DAT_0001e3c4;
    puVar6[3] = DAT_0001e3c6 + param_4;
    puVar6[4] = sVar1 + sVar4;
    puVar6[5] = param_3[1];
    puVar6[6] = param_3[3] + param_1 + sVar2;
    if ((*DAT_0001e3e8 & 1) == 0) {
        sVar4 = -0x70;
    } else {
        sVar4 = -0x60;
    }
    puVar6[7] = param_3[4] + param_2 + sVar4;
    puVar5 = ppuVar3[8];
    puVar5[2] = 0;
    puVar5[3] = (ushort) ((uint) puVar6 >> 3);
    ppuVar3[8] = puVar5 + 4;
    ppuVar3[7] = (ushort *) ((int) ppuVar3[7] + 1);
    *ppuVar3 = puVar6 + 0x10;
    ppuVar3[3] = (ushort *) ((int) ppuVar3[3] + 1);
    return;
}


void FUN_0001e378(short param_1, short param_2, ushort *param_3, short param_4) {
    ushort **ppuVar1;
    short sVar2;
    ushort *puVar3;
    ushort *puVar4;

    ppuVar1 = DAT_0001e3e4;
    puVar4 = *DAT_0001e3e4;
    *puVar4 = param_3[2] | DAT_0001e3c2;
    sVar2 = DAT_0001e3c8;
    puVar4[2] = DAT_0001e3c4;
    puVar4[3] = DAT_0001e3c6 + param_4;
    puVar3 = DAT_0001e3e8;
    puVar4[4] = *param_3;
    puVar4[5] = param_3[1];
    puVar4[6] = param_3[3] + param_1 + sVar2;
    if ((*puVar3 & 1) == 0) {
        sVar2 = -0x70;
    } else {
        sVar2 = -0x60;
    }
    puVar4[7] = param_3[4] + param_2 + sVar2;
    puVar3 = ppuVar1[8];
    puVar3[2] = 0;
    puVar3[3] = (ushort) ((uint) puVar4 >> 3);
    ppuVar1[8] = puVar3 + 4;
    ppuVar1[7] = (ushort *) ((int) ppuVar1[7] + 1);
    *ppuVar1 = puVar4 + 0x10;
    ppuVar1[3] = (ushort *) ((int) ppuVar1[3] + 1);
    return;
}


void FUN_0001e41c(int param_1, int param_2, int param_3, int param_4) {
    int iVar1;
    int iVar2;
    undefined2 *puVar3;
    undefined2 *puVar4;

    iVar2 = (int) DAT_0001e510;
    puVar3 = (undefined2 *) (DAT_0001e520 + (param_2 * 0x40 + param_1) * 2);
    iVar1 = param_3;
    puVar4 = puVar3;
    do {
        do {
            *puVar3 = 3;
            iVar1 = iVar1 + -1;
            puVar3 = puVar3 + 1;
        } while (iVar1 != 0);
        param_4 = param_4 + -1;
        puVar3 = (undefined2 *) ((int) puVar4 + iVar2);
        iVar1 = param_3;
        puVar4 = puVar3;
    } while (param_4 != 0);
    return;
}


void FUN_0001e5de(int param_1) {
    *DAT_0001e65c = (short) DAT_0001e658;
    (*DAT_0001e660)(0x11, 0x15);
    (*DAT_0001e668)();
    if ('\x02' < *(char *) (param_1 + 3)) {
        *DAT_0001e65c = (short) DAT_0001e658;
        (*DAT_0001e660)(0x17, 0x15);
        (*DAT_0001e78c)();
        return;
    }
    FUN_0001e41c(0x17, 0x15, 3, 2);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001e6b8(void) {
    undefined4 *puVar1;
    code *UNRECOVERED_JUMPTABLE;

    *_LAB_0001e794 = (short) _DAT_0001e790;
    (*_LAB_0001e798)(0x1c, 0x15);
    (*DAT_0001e78c)();
    (*DAT_0001e7a4)(0x25, 0x15, 6, 2);
    puVar1 = DAT_0001e7a8;
    *DAT_0001e7a8 = 0;
    puVar1[1] = puVar1[3];
    UNRECOVERED_JUMPTABLE = DAT_0001e7b0;
    puVar1[2] = puVar1[4];
    // WARNING: Could not recover jumptable at 0x0001e6f6. Too many branches
    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE)(DAT_0001e7ac);
    return;
}


int FUN_0001e6fa(int param_1) {
    int iVar1;
    int iVar2;
    int iVar3;

    *(bool *) (param_1 + 2) = '\0' < *(char *) ((int) *(char *) (param_1 + 0xd) + param_1 + 0xe);
    iVar2 = 0;
    iVar3 = (int) *(char *) (param_1 + 0xe + (int) *(char *) (param_1 + 0xd));
    if (*(char *) (param_1 + 5) == '\0') {
        iVar1 = 0;
        do {
            if (*(short *) (iVar3 * 2 + **(int **) (param_1 + 0x20)) == -1) goto LAB_0001e772;
            iVar2 = iVar1 + 1;
            *(undefined2 *) (iVar1 * 2 + param_1 + 0x14) =
                    *(undefined2 *) (iVar3 * 2 + **(int **) (param_1 + 0x20));
            iVar3 = iVar3 + 1;
            iVar1 = iVar2;
        } while (iVar2 < 6);
    } else if (*(char *) (param_1 + 5) == '\x03') {
        iVar2 = 0;
        do {
            iVar1 = iVar2;
            if (*(short *) (iVar3 * 2 + *(int *) (*(int *) (param_1 + 0x20) + 4)) == -1) {
                LAB_0001e772:
                *(undefined *) (param_1 + 1) = 0;
                return iVar1;
            }
            iVar1 = iVar2 * 2;
            iVar2 = iVar2 + 1;
            *(undefined2 *) (iVar1 + param_1 + 0x14) =
                    *(undefined2 *) (iVar3 * 2 + *(int *) (*(int *) (param_1 + 0x20) + 4));
            iVar3 = iVar3 + 1;
        } while (iVar2 < 6);
    }
    *(undefined *) (param_1 + 1) = 1;
    return iVar2 + -1;
}


int FUN_0001e7e0(int param_1, int param_2) {
    short sVar1;
    int *piVar2;
    int *piVar3;
    uint uVar4;
    int iVar5;
    int iVar6;

    piVar3 = DAT_0001e8d4;
    piVar2 = DAT_0001e8c4;
    if (*(char *) (param_1 + 5) == '\0') {
        *(bool *) (param_1 + 2) = '\0' < *(char *) ((int) *(char *) (param_1 + 0xd) + param_1 + 0xe);
        iVar5 = (int) *(char *) (param_1 + 0xe + (int) *(char *) (param_1 + 0xd));
        for (param_2 = 0; param_2 < 6; param_2 = param_2 + 1) {
            for (; *(short *) (*piVar2 + iVar5 * 2) != -1; iVar5 = iVar5 + 1) {
                sVar1 = *(short *) (*piVar2 + iVar5 * 2);
                iVar6 = (int) sVar1;
                if (iVar6 < 0x4d) {
                    uVar4 = (int) *(char *) (sVar1 + DAT_0001e8c8) & 0xff;
                } else {
                    uVar4 = -(((*(byte * )(((uint)(DAT_0001e8c2 + iVar6) >> 3) + DAT_0001e8cc) &
                                *(byte * )(DAT_0001e8d0 + (DAT_0001e8c2 + iVar6 & 7U))) == 0) - 1);
                }
                if (0 < (int) uVar4) break;
            }
            if (*(short *) (*piVar2 + iVar5 * 2) == -1) goto LAB_0001e92e;
            *(undefined2 *) (param_2 * 2 + param_1 + 0x14) = *(undefined2 *) (iVar5 * 2 + *piVar2);
            iVar5 = iVar5 + 1;
        }
    } else if (*(char *) (param_1 + 5) == '\x03') {
        *(bool *) (param_1 + 2) = '\0' < *(char *) ((int) *(char *) (param_1 + 0xd) + param_1 + 0xe);
        iVar5 = (int) *(char *) (param_1 + 0xe + (int) *(char *) (param_1 + 0xd));
        for (param_2 = 0; param_2 < 6; param_2 = param_2 + 1) {
            for (; *(short *) (*piVar3 + iVar5 * 2) != -1; iVar5 = iVar5 + 1) {
                sVar1 = *(short *) (*piVar3 + iVar5 * 2);
                iVar6 = (int) sVar1;
                if (iVar6 < 0x4d) {
                    uVar4 = (int) *(char *) (sVar1 + DAT_0001e9e4) & 0xff;
                } else {
                    uVar4 = -(((*(byte * )(((uint)(DAT_0001e9dc + iVar6) >> 3) + DAT_0001e9e8) &
                                *(byte * )(DAT_0001e9ec + (DAT_0001e9dc + iVar6 & 7U))) == 0) - 1);
                }
                if (0 < (int) uVar4) break;
            }
            if (*(short *) (*piVar3 + iVar5 * 2) == -1) {
                LAB_0001e92e:
                *(undefined *) (param_1 + 1) = 0;
                return param_2;
            }
            *(undefined2 *) (param_2 * 2 + param_1 + 0x14) = *(undefined2 *) (iVar5 * 2 + *piVar3);
            iVar5 = iVar5 + 1;
        }
    }
    *(undefined *) (param_1 + 1) = 1;
    return param_2 + -1;
}


char *FUN_0001ebe0(int param_1) {
    short sVar1;
    char *pcVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    pcVar2 = (char *) (int) *(char *) (param_1 + 4);
    if (pcVar2 == (char *) 0x0) {
        pcVar2 = (char *) ((int) *(char *) (param_1 + 0xd) + param_1 + 0xe);
        *pcVar2 = *pcVar2 + -5;
    } else if (pcVar2 == (char *) 0x1) {
        iVar4 = *(char *) (param_1 + 0xe + (int) *(char *) (param_1 + 0xd)) + -1;
        if (*(char *) (param_1 + 5) == '\0') {
            for (iVar5 = 0; iVar5 < 6; iVar5 = iVar5 + 1) {
                for (; 0 < iVar4; iVar4 = iVar4 + -1) {
                    sVar1 = *(short *) (*DAT_0001ec64 + iVar4 * 2);
                    iVar6 = (int) sVar1;
                    if (iVar6 < 0x4d) {
                        uVar3 = (int) *(char *) (sVar1 + DAT_0001ec68) & 0xff;
                    } else {
                        uVar3 = -(((*(byte * )(((uint)(DAT_0001ed42 + iVar6) >> 3) + DAT_0001ed44) &
                                    *(byte * )(DAT_0001ed48 + (DAT_0001ed42 + iVar6 & 7U))) == 0) - 1);
                    }
                    if (0 < (int) uVar3) break;
                }
                if (iVar4 < 1) goto LAB_0001ecfa;
                iVar4 = iVar4 + -1;
            }
        } else if (*(char *) (param_1 + 5) == '\x03') {
            for (iVar5 = 0; iVar5 < 6; iVar5 = iVar5 + 1) {
                for (; 0 < iVar4; iVar4 = iVar4 + -1) {
                    sVar1 = *(short *) (DAT_0001ec64[3] + iVar4 * 2);
                    iVar6 = (int) sVar1;
                    if (iVar6 < 0x4d) {
                        uVar3 = (int) *(char *) (sVar1 + DAT_0001ed4c) & 0xff;
                    } else {
                        uVar3 = -(((*(byte * )(((uint)(DAT_0001ed42 + iVar6) >> 3) + DAT_0001ed44) &
                                    *(byte * )(DAT_0001ed48 + (DAT_0001ed42 + iVar6 & 7U))) == 0) - 1);
                    }
                    if (0 < (int) uVar3) break;
                }
                if (iVar4 < 1) {
                    LAB_0001ecfa:
                    pcVar2 = (char *) ((int) *(char *) (param_1 + 0xd) + param_1 + 0xe);
                    *pcVar2 = (char) iVar4;
                    return pcVar2;
                }
                iVar4 = iVar4 + -1;
            }
        }
        pcVar2 = (char *) ((int) *(char *) (param_1 + 0xd) + param_1 + 0xe);
        *pcVar2 = (char) iVar4 + '\x02';
    }
    return pcVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char *FUN_0001ed24(int param_1) {
    short sVar1;
    char *pcVar2;
    int iVar3;

    pcVar2 = (char *) (int) *(char *) (param_1 + 4);
    if (pcVar2 == (char *) 0x0) {
        pcVar2 = (char *) ((int) *(char *) (param_1 + 0xd) + param_1 + 0xe);
        *pcVar2 = *pcVar2 + '\x05';
    } else if (pcVar2 == (char *) 0x1) {
        pcVar2 = (char *) (int) *(char *) (param_1 + 5);
        iVar3 = 0;
        if (pcVar2 == (char *) 0x0) {
            for (; (sVar1 = *(short *) (*_DAT_0001ee58 + iVar3 * 2),
                    *(short *) ((*(char *) (param_1 + 0x13) + -1) * 2 + param_1 + 0x14) != sVar1 &&
                    (sVar1 != -1)); iVar3 = iVar3 + 1) {
            }
        } else {
            if (pcVar2 != (char *) 0x3) {
                return pcVar2;
            }
            for (; (sVar1 = *(short *) (_DAT_0001ee58[3] + iVar3 * 2),
                    *(short *) ((*(char *) (param_1 + 0x13) + -1) * 2 + param_1 + 0x14) != sVar1 &&
                    (sVar1 != -1)); iVar3 = iVar3 + 1) {
            }
        }
        pcVar2 = (char *) ((int) *(char *) (param_1 + 0xd) + param_1 + 0xe);
        *pcVar2 = (char) iVar3 + '\x01';
    }
    return pcVar2;
}


int FUN_0001edc8(int param_1) {
    short sVar1;
    code *pcVar2;
    code *pcVar3;
    char cVar6;
    undefined4 uVar4;
    int iVar5;
    uint uVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    undefined4 in_pr;

    (*DAT_0001ee5c)(10, 4, 0x1e, 0xe);
    (*DAT_0001ee60)();
    FUN_0001e41c(10, 4, 0x1e, 0xe);
    iVar5 = (int) *(char *) (param_1 + 3);
    if (2 < iVar5) {
        iVar5 = (int) *(char *) (param_1 + 4);
        if (iVar5 == 0) {
            cVar6 = FUN_0001e6fa();
            *(char *) (param_1 + 0x13) = cVar6;
            iVar5 = (int) cVar6;
            if (0 < iVar5) {
                (*DAT_0001e9f0)((int) *(char *) (param_1 + 0xc));
                iVar9 = DAT_0001e9f4;
                iVar11 = DAT_0001e9e8;
                for (iVar10 = 0; iVar5 = 0x13, iVar10 < *(char *) (param_1 + 0x13); iVar10 = iVar10 + 1) {
                    sVar1 = *(short *) (param_1 + 0x14 + iVar10 * 2);
                    if (*(uint * )(DAT_0001e9de + iVar11) <
                        ((int) *(short *) ((short) (sVar1 * 0xc) + iVar9 + 2) & 0xffffU)) {
                        LAB_0001ea1e:
                        iVar5 = 0xe;
                    } else {
                        if (sVar1 < 0x4d) {
                            uVar7 = (int) *(char *) ((int) sVar1 + DAT_0001e9e0 + iVar11) & 0xff;
                        } else {
                            uVar7 = -(((*(byte * )(iVar11 + ((uint)((int) sVar1 + (int) DAT_0001eb18) >> 3)) &
                                        *(byte * )(DAT_0001eb1c + ((int) sVar1 + (int) DAT_0001eb18 & 7U))) == 0) - 1);
                        }
                        if (0x62 < (int) uVar7) goto LAB_0001ea1e;
                        if ((*(char *) (param_1 + 3) == '\x04') && (*(char *) (param_1 + 7) == iVar10)) {
                            iVar5 = 0xd;
                        } else {
                            iVar5 = 0xc;
                        }
                    }
                    uVar4 = (*DAT_0001eb20)((int) *(short *) (param_1 + 0x14 + iVar10 * 2));
                    iVar8 = iVar10 * 3 + 4;
                    (*DAT_0001eb24)(0, 0xb, iVar8, uVar4, in_pr);
                    pcVar2 = DAT_0001eb2c;
                    *DAT_0001eb28 = (short) (iVar5 << 0xc);
                    (*pcVar2)(0xd, iVar8);
                    (*DAT_0001eb34)();
                    (*DAT_0001eb2c)(0x22, iVar8);
                    (*DAT_0001eb34)();
                }
            }
            return iVar5;
        }
        if (iVar5 == 1) {
            cVar6 = FUN_0001e7e0();
            *(char *) (param_1 + 0x13) = cVar6;
            iVar5 = (int) cVar6;
            if (0 < iVar5) {
                (*DAT_0001eb3c)((int) *(char *) (param_1 + 0xc));
                pcVar3 = DAT_0001eb34;
                pcVar2 = DAT_0001eb2c;
                for (iVar11 = 0; iVar5 = 0x13, iVar11 < *(char *) (param_1 + 0x13); iVar11 = iVar11 + 1) {
                    if ((*(char *) (param_1 + 3) == '\x04') && (*(char *) (param_1 + 7) == iVar11)) {
                        iVar5 = 0xd;
                    } else {
                        iVar5 = 0xc;
                    }
                    uVar4 = (*DAT_0001ec48)((int) *(short *) (param_1 + 0x14 + iVar11 * 2));
                    iVar9 = iVar11 * 3 + 4;
                    (*DAT_0001ec4c)(0, 0xb, iVar9, uVar4, in_pr);
                    *DAT_0001ec50 = (short) (iVar5 << 0xc);
                    (*pcVar2)(0xd, iVar9);
                    (*pcVar3)();
                    (*pcVar2)(0x22, iVar9);
                    (*pcVar3)();
                }
            }
            return iVar5;
        }
    }
    return iVar5;
}


void FUN_0001ee16(int param_1, int param_2, uint param_3) {
    ushort uVar1;
    ushort uVar2;
    ushort *puVar3;

    uVar2 = DAT_0001ee56;
    puVar3 = (ushort *) (DAT_0001ee64 + (param_2 * 0x20 + param_1) * 2);
    uVar1 = (ushort) ((param_3 & 0xffff) << 8) & (ushort) PTR_s_ncient_ones__Would_any_God_0001ee68;
    *puVar3 = *puVar3 & DAT_0001ee56 | uVar1;
    puVar3[1] = puVar3[1] & uVar2 | uVar1;
    puVar3[0x20] = puVar3[0x20] & uVar2 | uVar1;
    puVar3[0x21] = puVar3[0x21] & uVar2 | uVar1;
    return;
}


int FUN_0001ee6c(int param_1) {
    int iVar1;
    int iVar2;

    iVar2 = 2;
    iVar1 = (int) DAT_0001ef66;
    do {
        FUN_0001ee16(2, iVar2, iVar1);
        FUN_0001ee16(2, iVar2 + 2, iVar1);
        iVar2 = iVar2 + 4;
    } while (iVar2 < 10);
    iVar1 = (int) *(char *) (param_1 + 3);
    if (iVar1 < 2) {
        iVar1 = (int) *(char *) (param_1 + 4);
        if (iVar1 == 0) {
            iVar1 = FUN_0001e6fa(param_1);
            if (0 < iVar1) {
                iVar1 = FUN_0001ee16(2, *(char *) (param_1 + 5) * 2 + 2, (int) DAT_0001ef68);
                return iVar1;
            }
        } else if ((iVar1 == 1) && (iVar1 = FUN_0001e7e0(param_1), 0 < iVar1)) {
            iVar1 = FUN_0001ee16(2, *(char *) (param_1 + 5) * 2 + 2, (int) DAT_0001ef68);
            return iVar1;
        }
    }
    return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_0001eef8(int param_1) {
    code *pcVar1;
    code *pcVar2;
    int iVar3;

    pcVar1 = _LAB_0001ef74;
    if (*(char *) (param_1 + 3) == '\x04') {
        *_LAB_0001ef70 = (short) _DAT_0001ef6c;
        (*pcVar1)(0x1e, *(char *) (param_1 + 7) * 3 + 4);
        pcVar2 = DAT_0001ef78;
        (*DAT_0001ef78)();
        (*pcVar1)(0x1f, *(char *) (param_1 + 7) * 3 + 4);
        (*pcVar2)();
        (*pcVar1)(0x22, *(char *) (param_1 + 7) * 3 + 4);
        iVar3 = (int) *(char *) (param_1 + 4);
        if ((iVar3 == 0) || (iVar3 == 1)) {
            iVar3 = (*pcVar2)();
        }
        return iVar3;
    }
    iVar3 = FUN_0001e41c(0x16, *(char *) (param_1 + 7) * 3 + 4, 2);
    return iVar3;
}


int FUN_0001f006(int param_1) {
    undefined4 *puVar1;
    code *pcVar2;
    int iVar3;
    undefined4 uVar4;

    (*DAT_0001f114)(2, 0x18, 0x28, 4);
    (*DAT_0001f118)();
    pcVar2 = DAT_0001f120;
    puVar1 = DAT_0001f11c;
    *DAT_0001f11c = 0;
    puVar1[1] = puVar1[3];
    puVar1[2] = puVar1[4];
    if (*(char *) (param_1 + 3) < '\x03') {
        (*DAT_0001f124)((int) *(char *) (param_1 + 0xb));
        if (*(char *) (param_1 + 3) < '\x02') {
            iVar3 = (int) *(char *) (param_1 + 4);
            if (iVar3 == 0) {
                iVar3 = (int) *(char *) (param_1 + 5);
                if (iVar3 == 0) {
                    uVar4 = *DAT_0001f12c;
                } else {
                    if (iVar3 != 3) {
                        return iVar3;
                    }
                    uVar4 = *DAT_0001f130;
                }
                iVar3 = (*pcVar2)(uVar4);
            } else if (iVar3 == 1) {
                iVar3 = (int) *(char *) (param_1 + 5);
                if (iVar3 == 0) {
                    uVar4 = *DAT_0001f134;
                } else {
                    if (iVar3 != 3) {
                        return iVar3;
                    }
                    uVar4 = *DAT_0001f138;
                }
                iVar3 = (*pcVar2)(uVar4);
            }
        } else {
            iVar3 = (*pcVar2)(*DAT_0001f13c);
        }
    } else {
        (*DAT_0001f124)((int) *(char *) (param_1 + 0xc));
        iVar3 = (*pcVar2)(*(undefined4 *)
                ((short) (*(short *) (*(char *) (param_1 + 7) * 2 + param_1 + 0x14) * 0xc) +
                 DAT_0001f128));
    }
    return iVar3;
}


int FUN_0001f0ce(int param_1) {
    int iVar1;

    iVar1 = (int) *(char *) (param_1 + 4);
    if (iVar1 == 0) {
        iVar1 = (int) *(char *) (param_1 + 5);
        if (iVar1 == 0) {
            iVar1 = 0;
        } else {
            if (iVar1 != 3) {
                return iVar1;
            }
            iVar1 = 1;
        }
        *(char *) (param_1 + 0xd) = (char) iVar1;
    } else if (iVar1 == 1) {
        iVar1 = (int) *(char *) (param_1 + 5);
        if (iVar1 == 0) {
            iVar1 = 2;
        } else {
            if (iVar1 != 3) {
                return iVar1;
            }
            iVar1 = 3;
        }
        *(char *) (param_1 + 0xd) = (char) iVar1;
    }
    return iVar1;
}


void FUN_0001f140(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4) {
    int *piVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar3 = (int) DAT_0001f248;
    *(undefined4 *) (param_1 + -0xc) = 0;
    *(undefined4 *) (*(int *) (param_1 + iVar3) + -0xc) = 0;
    piVar1 = DAT_0001f250;
    *(undefined4 *) (*(int *) (param_1 + iVar3 + 4) + -0xc) = 0;
    *(undefined4 *) (*(int *) (param_1 + iVar3 + 8) + -0xc) = 0;
    *(undefined4 *) (*(int *) (param_1 + iVar3 + 0xc) + -0xc) = 0;
    *(uint * )(*piVar1 + -4) = *(uint * )(*piVar1 + -4) & 0xfffffffd;
    iVar3 = DAT_0001f254;
    iVar4 = (int) DAT_0001f24a;
    iVar5 = (int) DAT_0001f24c;
    *(undefined2 *) (DAT_0001f254 + iVar4) = 0;
    *(undefined2 *) (iVar3 + iVar4 + 2) = 0;
    *(undefined2 *) (iVar3 + iVar4 + 4) = 0;
    *(undefined2 *) (iVar3 + iVar5 + iVar4) = 0;
    *(undefined2 *) (iVar3 + iVar5 + iVar4 + 2) = 0;
    uVar2 = DAT_0001f258;
    *(undefined2 *) (iVar5 + iVar3 + iVar4 + 4) = 0;
    (*DAT_0001f25c)(param_1 + 0x24, uVar2, 0x50, param_4, param_1 + 0x24);
    *(undefined *) (param_1 + 10) = 2;
    *(undefined *) (param_1 + 3) = 5;
    return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_00020092(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000200aa(void) {
    undefined4 in_r0;

    *(undefined4 *) in_r0 = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002045a(undefined4 param_1, undefined4 param_2) {
    uint in_r0;
    uint uVar1;
    undefined2 uVar2;
    int in_gbr;

    *(byte * )(in_gbr + in_r0) = *(byte * )(in_gbr + in_r0) & 0x72;
    *(byte * )(in_gbr + in_r0) = *(byte * )(in_gbr + in_r0) & 0x52;
    *(byte * )(in_gbr + (in_r0 ^ 0x52)) = *(byte * )(in_gbr + (in_r0 ^ 0x52)) & 0x51;
    *(byte * )(in_gbr + (in_r0 ^ 3)) = *(byte * )(in_gbr + (in_r0 ^ 3)) & 0x31;
    *(byte * )(in_gbr + (in_r0 ^ 0x32)) = *(byte * )(in_gbr + (in_r0 ^ 0x32)) & 0x30;
    uVar1 = *(uint * )(in_gbr + 0xc4) ^ 0x30;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0x10;
    uVar1 = *(uint * )(in_gbr + 0xc0) ^ 0x10;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xf;
    uVar1 = *(uint * )(in_gbr + 0x40) ^ 0xf;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xe;
    uVar1 = uVar1 & 0xf0;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xef;
    *(uint * )(in_gbr + 0x40) = uVar1;
    uVar1 = *(uint * )(in_gbr + 0x3c) & 0xef;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xee;
    *(uint * )(in_gbr + 0x3c) = uVar1;
    uVar1 = (int) *(short *) (in_gbr + 0x1de) & 0xee;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xed;
    *(short *) (in_gbr + 0x1de) = (short) uVar1;
    uVar1 = (int) *(short *) (in_gbr + 0x19e) & 0xce;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xcd;
    *(short *) (in_gbr + 0x1dc) = (short) uVar1;
    uVar2 = FUN_000200d2(param_1, param_2, 0xbdefc1ee);
    *(undefined2 *) (in_gbr + 0x19e) = uVar2;
    uVar1 = (int) *(short *) (in_gbr + 0x19c) & 0xcd;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xcc;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xad;
    *(short *) (in_gbr + 0x19c) = (short) uVar1;
    func_0x000200de();
    uVar1 = (int) *(short *) (in_gbr + 0x19a) & 0x8c;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xac;
    *(short *) (in_gbr + 0x19a) = (short) uVar1;
    FUN_000200aa();
    *(undefined2 *) (in_gbr + 0x15c) = *(undefined2 *) (in_gbr + 0x198);
    uVar1 = (int) *(short *) (in_gbr + 0x15a) & 0xac;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xab;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00020486(undefined4 param_1, undefined4 param_2) {
    uint in_r0;
    uint uVar1;
    undefined2 uVar2;
    int in_gbr;

    *(byte * )(in_gbr + in_r0) = *(byte * )(in_gbr + in_r0) & 0x72;
    *(byte * )(in_gbr + in_r0) = *(byte * )(in_gbr + in_r0) & 0x52;
    *(byte * )(in_gbr + (in_r0 ^ 0x52)) = *(byte * )(in_gbr + (in_r0 ^ 0x52)) & 0x51;
    *(byte * )(in_gbr + (in_r0 ^ 3)) = *(byte * )(in_gbr + (in_r0 ^ 3)) & 0x31;
    *(byte * )(in_gbr + (in_r0 ^ 0x32)) = *(byte * )(in_gbr + (in_r0 ^ 0x32)) & 0x30;
    uVar1 = *(uint * )(in_gbr + 0xc4) ^ 0x30;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0x10;
    uVar1 = *(uint * )(in_gbr + 0xc0) ^ 0x10;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xf;
    uVar1 = *(uint * )(in_gbr + 0x40) ^ 0xf;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xe;
    uVar1 = uVar1 & 0xf0;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xef;
    *(uint * )(in_gbr + 0x40) = uVar1;
    uVar1 = *(uint * )(in_gbr + 0x3c) & 0xef;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xee;
    *(uint * )(in_gbr + 0x3c) = uVar1;
    uVar1 = (int) *(short *) (in_gbr + 0x1de) & 0xee;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xed;
    *(short *) (in_gbr + 0x1de) = (short) uVar1;
    uVar1 = (int) *(short *) (in_gbr + 0x19e) & 0xce;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xcd;
    *(short *) (in_gbr + 0x1dc) = (short) uVar1;
    uVar2 = FUN_000200d2(param_1, param_2, 0xbdefc1ee);
    *(undefined2 *) (in_gbr + 0x19e) = uVar2;
    uVar1 = (int) *(short *) (in_gbr + 0x19c) & 0xcd;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xcc;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xad;
    *(short *) (in_gbr + 0x19c) = (short) uVar1;
    func_0x000200de();
    uVar1 = (int) *(short *) (in_gbr + 0x19a) & 0x8c;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xac;
    *(short *) (in_gbr + 0x19a) = (short) uVar1;
    FUN_000200aa();
    *(undefined2 *) (in_gbr + 0x15c) = *(undefined2 *) (in_gbr + 0x198);
    uVar1 = (int) *(short *) (in_gbr + 0x15a) & 0xac;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xab;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000204a8(undefined4 param_1, undefined4 param_2) {
    uint in_r0;
    uint uVar1;
    undefined2 uVar2;
    int in_gbr;

    *(byte * )(in_gbr + in_r0) = *(byte * )(in_gbr + in_r0) & 0x31;
    *(byte * )(in_gbr + (in_r0 ^ 0x31)) = *(byte * )(in_gbr + (in_r0 ^ 0x31)) & 0x30;
    uVar1 = *(uint * )(in_gbr + 0xc4) ^ 0x30;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0x10;
    uVar1 = *(uint * )(in_gbr + 0xc0) ^ 0x10;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xf;
    uVar1 = *(uint * )(in_gbr + 0x40) ^ 0xf;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xe;
    uVar1 = uVar1 & 0xf0;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xef;
    *(uint * )(in_gbr + 0x40) = uVar1;
    uVar1 = *(uint * )(in_gbr + 0x3c) & 0xef;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xee;
    *(uint * )(in_gbr + 0x3c) = uVar1;
    uVar1 = (int) *(short *) (in_gbr + 0x1de) & 0xee;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xed;
    *(short *) (in_gbr + 0x1de) = (short) uVar1;
    uVar1 = (int) *(short *) (in_gbr + 0x19e) & 0xce;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xcd;
    *(short *) (in_gbr + 0x1dc) = (short) uVar1;
    uVar2 = FUN_000200d2(param_1, param_2, 0xbdefc1ee);
    *(undefined2 *) (in_gbr + 0x19e) = uVar2;
    uVar1 = (int) *(short *) (in_gbr + 0x19c) & 0xcd;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xcc;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xad;
    *(short *) (in_gbr + 0x19c) = (short) uVar1;
    func_0x000200de();
    uVar1 = (int) *(short *) (in_gbr + 0x19a) & 0x8c;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xac;
    *(short *) (in_gbr + 0x19a) = (short) uVar1;
    FUN_000200aa();
    *(undefined2 *) (in_gbr + 0x15c) = *(undefined2 *) (in_gbr + 0x198);
    uVar1 = (int) *(short *) (in_gbr + 0x15a) & 0xac;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xab;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000204ac(undefined4 param_1, undefined4 param_2) {
    uint in_r0;
    uint uVar1;
    undefined2 uVar2;
    int in_gbr;

    *(byte * )(in_gbr + (in_r0 ^ 0x31)) = *(byte * )(in_gbr + (in_r0 ^ 0x31)) & 0x30;
    uVar1 = *(uint * )(in_gbr + 0xc4) ^ 0x30;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0x10;
    uVar1 = *(uint * )(in_gbr + 0xc0) ^ 0x10;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xf;
    uVar1 = *(uint * )(in_gbr + 0x40) ^ 0xf;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xe;
    uVar1 = uVar1 & 0xf0;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xef;
    *(uint * )(in_gbr + 0x40) = uVar1;
    uVar1 = *(uint * )(in_gbr + 0x3c) & 0xef;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xee;
    *(uint * )(in_gbr + 0x3c) = uVar1;
    uVar1 = (int) *(short *) (in_gbr + 0x1de) & 0xee;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xed;
    *(short *) (in_gbr + 0x1de) = (short) uVar1;
    uVar1 = (int) *(short *) (in_gbr + 0x19e) & 0xce;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xcd;
    *(short *) (in_gbr + 0x1dc) = (short) uVar1;
    uVar2 = FUN_000200d2(param_1, param_2, 0xbdefc1ee);
    *(undefined2 *) (in_gbr + 0x19e) = uVar2;
    uVar1 = (int) *(short *) (in_gbr + 0x19c) & 0xcd;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xcc;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xad;
    *(short *) (in_gbr + 0x19c) = (short) uVar1;
    func_0x000200de();
    uVar1 = (int) *(short *) (in_gbr + 0x19a) & 0x8c;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xac;
    *(short *) (in_gbr + 0x19a) = (short) uVar1;
    FUN_000200aa();
    *(undefined2 *) (in_gbr + 0x15c) = *(undefined2 *) (in_gbr + 0x198);
    uVar1 = (int) *(short *) (in_gbr + 0x15a) & 0xac;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xab;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000204ae(undefined4 param_1, undefined4 param_2) {
    uint in_r0;
    uint uVar1;
    undefined2 uVar2;
    int in_gbr;

    *(byte * )(in_gbr + (in_r0 ^ 0x31)) = *(byte * )(in_gbr + (in_r0 ^ 0x31)) & 0x30;
    uVar1 = *(uint * )(in_gbr + 0xc4) ^ 0x30;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0x10;
    uVar1 = *(uint * )(in_gbr + 0xc0) ^ 0x10;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xf;
    uVar1 = *(uint * )(in_gbr + 0x40) ^ 0xf;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xe;
    uVar1 = uVar1 & 0xf0;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xef;
    *(uint * )(in_gbr + 0x40) = uVar1;
    uVar1 = *(uint * )(in_gbr + 0x3c) & 0xef;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xee;
    *(uint * )(in_gbr + 0x3c) = uVar1;
    uVar1 = (int) *(short *) (in_gbr + 0x1de) & 0xee;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xed;
    *(short *) (in_gbr + 0x1de) = (short) uVar1;
    uVar1 = (int) *(short *) (in_gbr + 0x19e) & 0xce;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xcd;
    *(short *) (in_gbr + 0x1dc) = (short) uVar1;
    uVar2 = FUN_000200d2(param_1, param_2, 0xbdefc1ee);
    *(undefined2 *) (in_gbr + 0x19e) = uVar2;
    uVar1 = (int) *(short *) (in_gbr + 0x19c) & 0xcd;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xcc;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xad;
    *(short *) (in_gbr + 0x19c) = (short) uVar1;
    func_0x000200de();
    uVar1 = (int) *(short *) (in_gbr + 0x19a) & 0x8c;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xac;
    *(short *) (in_gbr + 0x19a) = (short) uVar1;
    FUN_000200aa();
    *(undefined2 *) (in_gbr + 0x15c) = *(undefined2 *) (in_gbr + 0x198);
    uVar1 = (int) *(short *) (in_gbr + 0x15a) & 0xac;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xab;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000204b8(void) {
    uint in_r0;
    uint uVar1;
    undefined2 uVar2;
    int in_gbr;

    *(byte * )(in_gbr + (in_r0 ^ 0x30)) = *(byte * )(in_gbr + (in_r0 ^ 0x30)) & 0x10;
    uVar1 = *(uint * )(in_gbr + 0xc0) ^ 0x10;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xf;
    uVar1 = *(uint * )(in_gbr + 0x40) ^ 0xf;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xe;
    uVar1 = uVar1 & 0xf0;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xef;
    *(uint * )(in_gbr + 0x40) = uVar1;
    uVar1 = *(uint * )(in_gbr + 0x3c) & 0xef;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xee;
    *(uint * )(in_gbr + 0x3c) = uVar1;
    uVar1 = (int) *(short *) (in_gbr + 0x1de) & 0xee;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xed;
    *(short *) (in_gbr + 0x1de) = (short) uVar1;
    uVar1 = (int) *(short *) (in_gbr + 0x19e) & 0xce;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xcd;
    *(short *) (in_gbr + 0x1dc) = (short) uVar1;
    uVar2 = FUN_000200d2();
    *(undefined2 *) (in_gbr + 0x19e) = uVar2;
    uVar1 = (int) *(short *) (in_gbr + 0x19c) & 0xcd;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xcc;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xad;
    *(short *) (in_gbr + 0x19c) = (short) uVar1;
    func_0x000200de();
    uVar1 = (int) *(short *) (in_gbr + 0x19a) & 0x8c;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xac;
    *(short *) (in_gbr + 0x19a) = (short) uVar1;
    FUN_000200aa();
    *(undefined2 *) (in_gbr + 0x15c) = *(undefined2 *) (in_gbr + 0x198);
    uVar1 = (int) *(short *) (in_gbr + 0x15a) & 0xac;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xab;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000204bc(void) {
    uint uVar1;
    undefined2 uVar2;
    int in_gbr;

    uVar1 = *(uint * )(in_gbr + 0xc0) ^ 0x10;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xf;
    uVar1 = *(uint * )(in_gbr + 0x40) ^ 0xf;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xe;
    uVar1 = uVar1 & 0xf0;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xef;
    *(uint * )(in_gbr + 0x40) = uVar1;
    uVar1 = *(uint * )(in_gbr + 0x3c) & 0xef;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xee;
    *(uint * )(in_gbr + 0x3c) = uVar1;
    uVar1 = (int) *(short *) (in_gbr + 0x1de) & 0xee;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xed;
    *(short *) (in_gbr + 0x1de) = (short) uVar1;
    uVar1 = (int) *(short *) (in_gbr + 0x19e) & 0xce;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xcd;
    *(short *) (in_gbr + 0x1dc) = (short) uVar1;
    uVar2 = FUN_000200d2();
    *(undefined2 *) (in_gbr + 0x19e) = uVar2;
    uVar1 = (int) *(short *) (in_gbr + 0x19c) & 0xcd;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xcc;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xad;
    *(short *) (in_gbr + 0x19c) = (short) uVar1;
    func_0x000200de();
    uVar1 = (int) *(short *) (in_gbr + 0x19a) & 0x8c;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xac;
    *(short *) (in_gbr + 0x19a) = (short) uVar1;
    FUN_000200aa();
    *(undefined2 *) (in_gbr + 0x15c) = *(undefined2 *) (in_gbr + 0x198);
    uVar1 = (int) *(short *) (in_gbr + 0x15a) & 0xac;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xab;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00020506(void) {
    uint in_r0;
    uint uVar1;
    int in_gbr;

    uVar1 = in_r0 & 0xad;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xac;
    *(short *) (in_gbr + 0x19a) = (short) uVar1;
    FUN_000200aa();
    *(undefined2 *) (in_gbr + 0x15c) = *(undefined2 *) (in_gbr + 0x198);
    uVar1 = (int) *(short *) (in_gbr + 0x15a) & 0xac;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xab;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002079f(void) {
    int in_r0;
    undefined4 unaff_r10;

    *(undefined4 *) (in_r0 + 0x14) = unaff_r10;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00020930(void) {
    int in_r0;
    int in_gbr;

    *(byte * )(in_gbr + in_r0) = *(byte * )(in_gbr + in_r0) & 0xed;
    FUN_00020d1c();
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00020936(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002093c(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00020950(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00020958(void) {
    uint uVar1;
    uint in_r0;
    int in_gbr;

    uVar1 = in_r0 & 0x8c;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xac;
    *(short *) (in_gbr + 0x19a) = (short) uVar1;
    FUN_000200aa();
    *(undefined2 *) (in_gbr + 0x15c) = *(undefined2 *) (in_gbr + 0x198);
    uVar1 = (int) *(short *) (in_gbr + 0x15a) & 0xac;
    *(byte * )(in_gbr + uVar1) = *(byte * )(in_gbr + uVar1) & 0xab;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00020ca4(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00020d1c(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00020d2c(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00021060(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00021162(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0002118e(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000211aa(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000211ce(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00021483(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002149f(void) {
    uint in_r0;
    int in_gbr;

    *(byte * )(in_gbr + (in_r0 ^ 0xca)) = *(byte * )(in_gbr + (in_r0 ^ 0xca)) & 0xa5;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00021805(void) {
    FUN_00021d33();
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0002185c(undefined4 param_1, undefined4 param_2) {
    undefined4 uVar1;
    uint uVar2;
    int iVar3;
    int in_gbr;

    uVar2 = *(uint * )(in_gbr + 0x24c) ^ 0x50;
    *(byte * )(in_gbr + uVar2) = *(byte * )(in_gbr + uVar2) & 0x4f;
    uVar1 = _FUN_00021990;
    *(byte * )(in_gbr + uVar2) = *(byte * )(in_gbr + uVar2) & 0x2f;
    iVar3 = FUN_000225fe(param_1, param_2, uVar1, 0x59);
    *(byte * )(in_gbr + iVar3) = *(byte * )(in_gbr + iVar3) & 0x2e;
    iVar3 = *(int *) (in_gbr + 0xbc);
    *(byte * )(in_gbr + iVar3) = *(byte * )(in_gbr + iVar3) & 0xe;
    *(byte * )(in_gbr + iVar3) = *(byte * )(in_gbr + iVar3) & 0xd;
    uVar2 = FUN_00022590();
    *(byte * )(in_gbr + (uVar2 ^ 0xd)) = *(byte * )(in_gbr + (uVar2 ^ 0xd)) & 0xed;
    uVar2 = FUN_00022558();
    *(byte * )(in_gbr + uVar2) = *(byte * )(in_gbr + uVar2) & 0xec;
    uVar2 = uVar2 & 0xec;
    *(byte * )(in_gbr + uVar2) = *(byte * )(in_gbr + uVar2) & 0xcc;
    *(short *) (in_gbr + 0x1da) = (short) uVar2;
    uVar2 = *(uint * )(in_gbr + 0x94);
    *(byte * )(in_gbr + uVar2) = *(byte * )(in_gbr + uVar2) & 6;
    *(byte * )(in_gbr + (uVar2 ^ 6)) = *(byte * )(in_gbr + (uVar2 ^ 6)) & 5;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00021862(undefined4 param_1, undefined4 param_2) {
    undefined4 uVar1;
    uint uVar2;
    int iVar3;
    int in_gbr;

    uVar2 = *(uint * )(in_gbr + 0x24c) ^ 0x50;
    *(byte * )(in_gbr + uVar2) = *(byte * )(in_gbr + uVar2) & 0x4f;
    uVar1 = _FUN_00021990;
    *(byte * )(in_gbr + uVar2) = *(byte * )(in_gbr + uVar2) & 0x2f;
    iVar3 = FUN_000225fe(param_1, param_2, uVar1, 0x59);
    *(byte * )(in_gbr + iVar3) = *(byte * )(in_gbr + iVar3) & 0x2e;
    iVar3 = *(int *) (in_gbr + 0xbc);
    *(byte * )(in_gbr + iVar3) = *(byte * )(in_gbr + iVar3) & 0xe;
    *(byte * )(in_gbr + iVar3) = *(byte * )(in_gbr + iVar3) & 0xd;
    uVar2 = FUN_00022590();
    *(byte * )(in_gbr + (uVar2 ^ 0xd)) = *(byte * )(in_gbr + (uVar2 ^ 0xd)) & 0xed;
    uVar2 = FUN_00022558();
    *(byte * )(in_gbr + uVar2) = *(byte * )(in_gbr + uVar2) & 0xec;
    uVar2 = uVar2 & 0xec;
    *(byte * )(in_gbr + uVar2) = *(byte * )(in_gbr + uVar2) & 0xcc;
    *(short *) (in_gbr + 0x1da) = (short) uVar2;
    uVar2 = *(uint * )(in_gbr + 0x94);
    *(byte * )(in_gbr + uVar2) = *(byte * )(in_gbr + uVar2) & 6;
    *(byte * )(in_gbr + (uVar2 ^ 6)) = *(byte * )(in_gbr + (uVar2 ^ 6)) & 5;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00021990(undefined4 param_1) {
    undefined4 uVar1;
    int iVar2;
    int in_gbr;

    iVar2 = (int) DAT_00021a30;
    *(undefined4 *) (in_gbr + 0x144) = *(undefined4 *) (in_gbr + 0x1bc);
    uVar1 = FUN_0002185c(param_1, iVar2);
    *(undefined4 *) (in_gbr + 0x1b8) = uVar1;
    FUN_00021060();
    FUN_00021862();
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000219ca(void) {
    byte in_sr;

    if ((in_sr & 1) != 1) {
        // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    }
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000219ce(void) {
    byte in_sr;

    if ((in_sr & 1) != 1) {
        // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    }
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00021b20(undefined4 param_1, undefined4 param_2) {
    undefined4 uVar1;
    int in_r0;
    int iVar2;
    uint uVar3;
    undefined4 uVar4;
    int in_gbr;

    *(byte * )(in_gbr + in_r0) = *(byte * )(in_gbr + in_r0) & 0xb3;
    uVar4 = _LAB_00021bac;
    iVar2 = *(int *) (in_gbr + 0x24c);
    *(byte * )(in_gbr + iVar2) = *(byte * )(in_gbr + iVar2) & 0xb0;
    uVar1 = DAT_00021ec8;
    *(byte * )(in_gbr + iVar2) = *(byte * )(in_gbr + iVar2) & 0xce;
    iVar2 = *(int *) (in_gbr + 0x248);
    *(byte * )(in_gbr + iVar2) = *(byte * )(in_gbr + iVar2) & 0xcd;
    *(byte * )(in_gbr + iVar2) = *(byte * )(in_gbr + iVar2) & 0xae;
    uVar3 = *(uint * )(in_gbr + 0x240);
    *(byte * )(in_gbr + uVar3) = *(byte * )(in_gbr + uVar3) & 0xad;
    *(uint * )(in_gbr + 0x1c4) = uVar3 ^ 0x22;
    *(undefined4 *) (in_gbr + 0x144) = *(undefined4 *) (in_gbr + 0x1bc);
    uVar4 = FUN_0002185c(param_1, param_2, uVar1, uVar4);
    *(undefined4 *) (in_gbr + 0x1b8) = uVar4;
    FUN_00021060();
    FUN_00021862();
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00021b39(void) {
    int in_r2;
    undefined4 unaff_r14;

    *(undefined4 *) (in_r2 + 0xc) = unaff_r14;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00021b49(void) {
    int unaff_r13;
    int *unaff_r14;

    *unaff_r14 = unaff_r13 + 4;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00021ca7(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00021cb0(int param_1) {
    char cVar1;
    char *pcVar2;
    int in_r2;
    int in_gbr;

    *(undefined *) (param_1 + 2) = *(undefined *) (param_1 + 2);
    *(undefined *) (in_r2 + 2) = *(undefined *) (in_r2 + 2);
    cVar1 = *(char *) (in_r2 + 1);
    pcVar2 = (char *) (int) cVar1;
    *(char *) (in_r2 + 1) = cVar1;
    pcVar2[1] = cVar1;
    *pcVar2 = cVar1;
    *pcVar2 = cVar1;
    *(uint * )(in_gbr + 0x1d0) = *(uint * )(in_gbr + 0x1d0) ^ 0x73;
    *(uint * )(in_gbr + 0x1cc) = *(uint * )(in_gbr + 0x1cc) ^ 0x72;
    *(undefined4 *) (in_gbr + 0x14c) = *(undefined4 *) (in_gbr + 0x1c8);
    FUN_000219ca();
    *(undefined4 *) (in_gbr + 0x148) = *(undefined4 *) (in_gbr + 0x148);
    FUN_00021990();
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00021d33(void) {
    int in_r0;
    undefined2 unaff_r11;

    *(undefined2 *) (&stack0x00000000 + in_r0) = unaff_r11;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00022035(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002212e(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00022138(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000221c2(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000225fe(void) {
    undefined4 in_r0;

    *(undefined4 *) in_r0 = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00022db7(void) {
    int in_r0;

    *(int *) (in_r0 * 2) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00023ed3(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00023f47(void) {
    int in_r0;

    *(int *) (in_r0 * 2) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000244a7(void) {
    int in_r0;
    int in_r1;

    *(int *) (in_r1 + in_r0) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000245bf(void) {
    int in_r0;

    (*(code *) (in_r0 + 0x245c5))();
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000247df(void) {
    int in_r0;

    *(BADSPACEBASE **) (in_r0 + 0x3c) = register0x0000003c;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000248bf(void) {
    int in_r0;
    int in_r1;

    *(int *) (in_r1 + in_r0) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00024d5b(void) {
    int in_r0;

    *(short *) (in_r0 * 2) = (short) in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00024dab(int param_1) {
    *(BADSPACEBASE **) (param_1 + 0x3c) = register0x0000003c;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002509f(void) {
    int in_r0;

    *(int *) (in_r0 * 2) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000251db(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002520b(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000256cb(void) {
    int in_r0;
    int in_r1;
    int in_r7;
    undefined2 unaff_r9;

    *(int *) (in_r1 + in_r0) = in_r0;
    *(undefined2 *) (in_r7 + in_r0) = unaff_r9;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002602b(void) {
    undefined in_r0;
    undefined *unaff_r12;

    *unaff_r12 = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00026635(void) {
    int in_r0;
    int in_r7;
    undefined2 unaff_r10;

    *(undefined2 *) (in_r7 + in_r0) = unaff_r10;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000266d7(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00026ffa(void) {
    int in_r0;
    undefined2 in_r1;

    *(undefined2 *) (in_r0 * 2) = in_r1;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002707c(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_000270d2(void) {
    // WARNING: Unimplemented instruction - Truncating control flow here
    halt_unimplemented();
}



// WARNING: Control flow encountered unimplemented instructions

void thunk_FUN_000270d2(void) {
    // WARNING: Unimplemented instruction - Truncating control flow here
    halt_unimplemented();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_0002715a(void) {
    // WARNING: Unimplemented instruction - Truncating control flow here
    halt_unimplemented();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_00027188(void) {
    // WARNING: Unimplemented instruction - Truncating control flow here
    halt_unimplemented();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_0002719a(void) {
    int in_r0;
    undefined4 unaff_r9;

    *(undefined4 *) (in_r0 * 2) = unaff_r9;
    FUN_000271c6();
    // WARNING: Unimplemented instruction - Truncating control flow here
    halt_unimplemented();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_000271aa(void) {
    // WARNING: Unimplemented instruction - Truncating control flow here
    halt_unimplemented();
}


undefined4 FUN_000271fa(void) {
    undefined4 in_sr;

    FUN_00027282();
    return in_sr;
}


void FUN_00027200(void) {
    return;
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_0002720a(void) {
    // WARNING: Unimplemented instruction - Truncating control flow here
    halt_unimplemented();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_00027212(void) {
    // WARNING: Unimplemented instruction - Truncating control flow here
    halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00027282(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;

    *(short *) (param_3 + in_r0) = (short) in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002729a(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002731d(void) {
    uRam00027320 = 0x38046c;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00027384(void) {
    undefined *in_r0;
    undefined uVar1;
    undefined *in_r2;

    uVar1 = SUB41(in_r0, 0);
    *in_r0 = uVar1;
    *in_r0 = uVar1;
    *in_r2 = uVar1;
    *(char *) (int) DAT_000274d0 = (char) DAT_000274d0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002743a(void) {
    undefined *in_r0;
    undefined *in_r2;

    *in_r0 = (char) in_r0;
    *in_r2 = (char) in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00027512(undefined *param_1) {
    undefined *in_r0;

    *in_r0 = (char) in_r0;
    *param_1 = (char) in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00027902(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00027a5e(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00027c6a(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00027cce(undefined param_1, undefined2 param_2, undefined4 param_3, int param_4) {
    short sVar1;
    int iVar2;
    int unaff_r13;

    iVar2 = FUN_00027004();
    *(undefined2 *) (unaff_r13 + iVar2) = param_2;
    sVar1 = *(short *) ((int) (int *) (param_4 + 0x77) + iVar2);
    *(int *) (param_4 + 0x77) = unaff_r13;
    *(undefined *) (sVar1 * 2) = param_1;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00027cf2(int param_1, undefined4 param_2) {
    *(undefined4 *) (param_1 + 0x28) = param_2;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00027d0a(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00027d36(void) {
    FUN_000282c2();
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_00027dfa(void) {
    // WARNING: Unimplemented instruction - Truncating control flow here
    halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00027f22(void) {
    byte in_sr;

    if ((in_sr & 1) != 0) {
        // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    }
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000282c2(void) {
    undefined *in_r0;
    undefined in_r2;

    *in_r0 = in_r2;
    *in_r0 = in_r2;
    *in_r0 = in_r2;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000285ca(void) {
    undefined in_r0;
    undefined *unaff_r8;

    *unaff_r8 = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_00028892(void) {
    // WARNING: Unimplemented instruction - Truncating control flow here
    halt_unimplemented();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_000288d2(void) {
    // WARNING: Unimplemented instruction - Truncating control flow here
    halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00028903(int param_1) {
    int in_r0;

    *(int *) (in_r0 + 0x3c) = in_r0;
    *(short *) (param_1 + in_r0) = (short) in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00028936(undefined param_1, undefined4 param_2, undefined4 param_3, undefined4 *param_4) {
    int in_r0;
    undefined4 unaff_r13;

    *param_4 = unaff_r13;
    *(undefined *) (in_r0 * 2) = param_1;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002894b(void) {
    int in_r0;
    int in_r1;

    *(char *) (in_r1 + in_r0) = (char) in_r1;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00028aba(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00028d5a(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00028dc2(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00028f46(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000290a6(void) {
    int in_r0;
    undefined in_r1;

    *(undefined *) (in_r0 * 2) = in_r1;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002913d(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002940e(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000294e2(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002970f(void) {
    int in_r0;
    int in_gbr;

    *(undefined *) (in_gbr + in_r0) = 0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00029723(void) {
    int in_r0;
    int in_r1;

    *(char *) (in_r0 * 2) = (char) in_r0;
    *(short *) (in_r1 + in_r0) = (short) in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000297ba(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000298d3(void) {
    undefined4 in_r0;
    undefined4 *unaff_r14;

    *unaff_r14 = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002a033(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002a08f(void) {
    undefined *in_r0;

    *in_r0 = (char) in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002a237(void) {
    int in_r0;

    *(int *) (in_r0 * 2) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002a247(void) {
    int in_r0;

    *(char *) (in_r0 * 2) = (char) in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002a46a(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002a9d5(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002abea(void) {
    int in_r0;

    *(int *) (in_r0 + 4) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002ac06(void) {
    int in_r0;

    *(int *) (in_r0 + 4) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002ac12(void) {
    undefined *in_r0;

    *in_r0 = (char) in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002acc4(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002ada5(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002b07a(undefined4 param_1, undefined *param_2) {
    undefined4 in_r0;
    undefined unaff_r8;
    byte in_sr;

    if ((in_sr & 1) != 1) {
        *param_2 = unaff_r8;
        // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    }
    *(undefined4 *) (param_2 + -4) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002b790(int param_1) {
    int in_r0;
    undefined uVar2;
    undefined2 uVar1;
    int in_r1;
    int in_r2;
    int in_r3;
    int unaff_r8;
    int unaff_r10;

    uVar2 = (undefined) in_r0;
    *(undefined *) (param_1 + 6) = uVar2;
    uVar1 = (undefined2) in_r0;
    *(undefined2 *) (in_r1 + 4) = uVar1;
    *(undefined *) (in_r2 + 4) = uVar2;
    *(undefined2 *) (in_r3 + 6) = uVar1;
    *(undefined2 *) (unaff_r8 + 10) = uVar1;
    *(undefined *) (unaff_r10 + 9) = uVar2;
    *(undefined *) (in_r0 + 0xc) = uVar2;
    *(undefined *) (in_r3 + 4) = uVar2;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002b810(undefined4 param_1, int param_2) {
    undefined in_r0;
    int in_r2;
    int unaff_r8;

    *(undefined *) (param_2 + 1) = in_r0;
    *(undefined *) (unaff_r8 + 9) = in_r0;
    *(undefined *) (in_r2 + 4) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002b82b(int param_1) {
    undefined2 in_r0;
    undefined uVar1;
    int in_r1;
    int in_r2;
    int in_r3;
    int unaff_r9;
    int unaff_r10;

    uVar1 = (undefined) in_r0;
    *(undefined *) (in_r2 + 4) = uVar1;
    *(undefined2 *) (in_r3 + 0x16) = in_r0;
    *(undefined *) (unaff_r9 + 0xc) = uVar1;
    *(undefined2 *) (unaff_r10 + 6) = in_r0;
    *(undefined2 *) (unaff_r10 + 8) = in_r0;
    *(undefined *) (in_r1 + 8) = uVar1;
    *(undefined *) (in_r3 + 4) = uVar1;
    *(undefined *) (param_1 + 3) = uVar1;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002bdc7(void) {
    int in_r0;

    *(int *) (in_r0 * 2) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002bf9b(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002c027(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


