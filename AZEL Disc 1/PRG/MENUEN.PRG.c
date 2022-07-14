//
//void FUN_00000276(int param_1, int param_2, undefined2 param_3, short param_4) {
//    short sVar1;
//    undefined2 *puVar2;
//
//    if ((*DAT_00000330 & 1) == 0) {
//        sVar1 = 0x10;
//    } else {
//        sVar1 = 0;
//    }
//    puVar2 = (undefined2 * )(param_2 * 4 + param_1 + 0x10);
//    *puVar2 = param_3;
//    puVar2[1] = sVar1 + param_4;
//    return;
//}
//
//
//void FUN_00000450(int param_1) {
//    undefined2 uVar1;
//    int iVar2;
//    int iVar3;
//    undefined2 *puVar4;
//    undefined4 *puVar5;
//    int iVar6;
//    undefined2 *puVar7;
//    int iVar8;
//
//    iVar8 = DAT_00000590;
//    iVar2 = DAT_0000058c;
//    uVar1 = DAT_00000588;
//    iVar3 = DAT_00000584 + DAT_0000058c;
//    puVar5 = (undefined4 * )(DAT_0000058c + 0x14);
//    iVar6 = *(int *) (param_1 + 0x28);
//    puVar4 = (undefined2 * ) * puVar5;
//    *puVar4 = DAT_00000586;
//    puVar7 = (undefined2 * )(iVar6 * 8 + iVar8);
//    puVar4[2] = uVar1;
//    puVar4[3] = DAT_0000058a;
//    puVar4[4] = *puVar7;
//    puVar4[5] = puVar7[1];
//    puVar4[6] = puVar7[2] - *(short *) (iVar3 + 0x44);
//    puVar4[7] = puVar7[3] + -0x70;
//    iVar8 = *(int *) (iVar2 + 0x34);
//    *(undefined2 * )(iVar8 + 4) = 0;
//    *(short *) (iVar8 + 6) = (short) ((uint) puVar4 >> 3);
//    *(int *) (iVar2 + 0x34) = iVar8 + 8;
//    *(int *) (iVar2 + 0x30) = *(int *) (iVar2 + 0x30) + 1;
//    *puVar5 = puVar4 + 0x10;
//    *(int *) (iVar2 + 0x20) = *(int *) (iVar2 + 0x20) + 1;
//    return;
//}
//
//
//void FUN_000004b6(int **param_1, int *param_2, int **param_3) {
//    int iVar1;
//    int iVar2;
//    int iVar3;
//    int *piVar4;
//    int *piVar5;
//
//    iVar3 = 0;
//    piVar5 = *param_3;
//    *param_1 = piVar5;
//    param_1[1] = param_2;
//    iVar1 = DAT_00000594;
//    piVar4 = param_2;
//    do {
//        iVar2 = *piVar5;
//        piVar5 = piVar5 + 1;
//        if (*(char *) (((int) *(short *) (iVar2 + 0xe) & 0xffffU) * 2 + iVar1) != '\0') {
//            *(short *) piVar4 = (short) iVar3;
//            piVar4 = (int *) ((int) piVar4 + 2);
//        }
//        iVar3 = iVar3 + 1;
//    } while (iVar3 < (int) param_3[1]);
//    param_1[2] = (int *) ((uint)((int) piVar4 - (int) param_2) >> 1);
//    return;
//}
//
//
//void FUN_00000538(int param_1) {
//    bool bVar1;
//    code *pcVar2;
//    undefined4 *puVar3;
//    undefined4 *puVar4;
//    undefined4 uVar5;
//    undefined2 *puVar6;
//    char *pcVar7;
//    int iVar8;
//    undefined2 *puVar9;
//    undefined2 *puVar10;
//    int iVar11;
//    int iVar12;
//    undefined4 *puVar13;
//    undefined4 *puVar14;
//
//    pcVar2 = DAT_000005a4;
//    iVar11 = 4;
//    puVar3 = (undefined4 * )(param_1 + 100);
//    puVar4 = DAT_000005a0;
//    do {
//        puVar14 = puVar4;
//        puVar13 = puVar3;
//        uVar5 = (*pcVar2)(param_1, puVar14[1] << 1);
//        FUN_000004b6(puVar13, uVar5, puVar14);
//        iVar11 = iVar11 + -1;
//        puVar3 = puVar13 + 3;
//        puVar4 = puVar14 + 2;
//    } while (iVar11 != 0);
//    puVar6 = (undefined2 * )(*pcVar2)(param_1, puVar14[3] << 1);
//    pcVar7 = DAT_0000059c;
//    iVar11 = DAT_00000598;
//    iVar8 = 0;
//    puVar13[3] = puVar14[2];
//    iVar12 = 0;
//    puVar13[4] = puVar6;
//    puVar10 = puVar6;
//    do {
//        do {
//            puVar9 = puVar10;
//            *puVar9 = (short) iVar8;
//            iVar8 = iVar8 + 1;
//            puVar10 = puVar9 + 1;
//        } while (iVar8 < *pcVar7);
//        pcVar7 = pcVar7 + 1;
//        bVar1 = iVar12 < *(char *) (iVar11 + 1);
//        iVar12 = iVar12 + 1;
//    } while (bVar1);
//    *puVar10 = 0x20;
//    puVar13[5] = (uint)((int) puVar9 + (4 - (int) puVar6)) >> 1;
//    return;
//}
//
//
//void FUN_000005a8(int param_1, int param_2, undefined4 param_3) {
//    int iVar1;
//    int iVar2;
//
//    (*DAT_000006e8)(0xc, param_2 + 0x25, param_3,
//                    *(undefined * )(((int) *(short *) (param_1 + 0xe) & 0xffffU) * 8 + DAT_000006e4));
//    iVar1 = DAT_000006ec;
//    *(int *) (DAT_000006ec + 4) = *(int *) (DAT_000006ec + 0xc) + 4;
//    if (param_2 < 0) {
//        iVar2 = *(int *) (iVar1 + 0x18);
//    } else {
//        iVar2 = 0;
//    }
//    *(int *) (iVar1 + 8) = *(int *) (iVar1 + 0x10) + param_2 + iVar2;
//    /* WARNING: Could not recover jumptable at 0x000005ee. Too many branches */
//    /* WARNING: Treating indirect jump as call */
//    (*DAT_000006f0)(*(undefined4 * )(param_1 + 0x28));
//    return;
//}
//
//
//int FUN_000005f2(int param_1) {
//    int iVar1;
//
//    iVar1 = *(int *) ((char) ((char) *(undefined4 * )(param_1 + 0x28) * '\f') + param_1 + 0x6c) +
//            *(int *) (param_1 + 0x44) * -10;
//    if (iVar1 < 1) {
//        iVar1 = 0;
//    }
//    if (10 < iVar1) {
//        iVar1 = 10;
//    }
//    return iVar1;
//}
//
//
//void FUN_00000626(int param_1) {
//    char cVar1;
//    int iVar2;
//    int *piVar3;
//    int iVar4;
//    short *psVar5;
//    int iVar6;
//
//    piVar3 = (int *) ((int) (char) ((char) *(undefined4 * )(param_1 + 0x28) * '\f') + param_1 + 100);
//    iVar4 = *piVar3;
//    psVar5 = (short *) (*(int *) (param_1 + 0x44) * 0x14 + piVar3[1]);
//    iVar2 = FUN_000005f2(param_1);
//    iVar6 = 0;
//    cVar1 = *(char *) (DAT_000006f4 + *(int *) (param_1 + 0x28));
//    (*DAT_000006f8)(0xb, 0x25, 0x1c, 0x14);
//    (*DAT_000006fc)();
//    if (iVar2 != 0) {
//        *DAT_000006ec = 0;
//        do {
//            FUN_000005a8(*(undefined4 * )(iVar4 + *psVar5 * 4), iVar6, (int) cVar1);
//            psVar5 = psVar5 + 1;
//            iVar2 = iVar2 + -1;
//            iVar6 = iVar6 + 2;
//        } while (iVar2 != 0);
//    }
//    return;
//}
//
//
///* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
//
//undefined4 FUN_000006a8(int param_1) {
//    undefined4 uVar1;
//
//    (*DAT_000006f8)(4, 0x39, 0x24);
//    uVar1 = (*DAT_000006fc)();
//    if (-1 < param_1) {
//        *DAT_000006ec = 0;
//        /* WARNING: Could not recover jumptable at 0x000006d8. Too many branches */
//        /* WARNING: Treating indirect jump as call */
//        uVar1 = (*DAT_000006f0)(*(undefined4 * )(param_1 * 4 + _LAB_00000700));
//        return uVar1;
//    }
//    return uVar1;
//}
//
//
//void FUN_00000704(int param_1) {
//    int iVar1;
//
//    (*DAT_00000824)(0xb, 0x25, 0x1c, 0x14);
//    (*DAT_00000828)();
//    FUN_000006a8(*(undefined4 * )(param_1 + 0x28));
//    iVar1 = DAT_0000082c;
//    *(ushort * )((int) DAT_00000820 + *(int *) (DAT_0000082c + 4)) =
//            *(ushort * )(*(int *) (DAT_0000082c + 4) + (int) DAT_00000820) & (ushort) DAT_00000830;
//    *(undefined4 * )(iVar1 + 0x14) = 1;
//    *(undefined4 * )(param_1 + 0x24) = 0;
//    *(undefined4 * )(param_1 + 0x44) = 0;
//    **(undefined4 * *)(param_1 + 0x38) = *(undefined4 * )(param_1 + 0x28);
//    **(undefined4 * *)(param_1 + 0x4c) = 0xffffffff;
//    return;
//}
//
//
//void FUN_00000754(int param_1) {
//    int iVar1;
//
//    FUN_00000626();
//    iVar1 = DAT_0000082c;
//    *(ushort * )((int) DAT_00000820 + *(int *) (DAT_0000082c + 4)) =
//            *(ushort * )(*(int *) (DAT_0000082c + 4) + (int) DAT_00000820) & (ushort) DAT_00000830 |
//            DAT_00000822;
//    *(undefined4 * )(iVar1 + 0x14) = 1;
//    *(undefined4 * )(param_1 + 0x24) = 1;
//    **(undefined4 * *)(param_1 + 0x38) = *(undefined4 * )(param_1 + 0x28);
//    **(undefined4 * *)(param_1 + 0x4c) = *(undefined4 * )(param_1 + 0x48);
//    return;
//}
//
//
//void FUN_0000098c(int param_1) {
//    int *piVar1;
//    code *pcVar2;
//    int iVar3;
//    uint uVar4;
//
//    (*DAT_00000ac0)(7, 0x24, 0x1e, 4);
//    (*DAT_00000ac4)();
//    pcVar2 = DAT_00000acc;
//    piVar1 = DAT_00000ac8;
//    if (param_1 != 0) {
//        *DAT_00000ac8 = 0;
//        (*pcVar2)(*(undefined4 * )(param_1 + 0x28));
//        if (((int) *(short *) (param_1 + 0xe) & 0xffffU) != (int) DAT_00000abe) {
//            uVar4 = (int) *(char *) (DAT_00000ad0 + ((int) *(short *) (param_1 + 0xe) & 0xffffU) * 2) & 0xff;
//            *piVar1 = (int) *(char *) (uVar4 + DAT_00000ad4);
//            iVar3 = DAT_00000ad8;
//            piVar1[1] = piVar1[3] + 2;
//            piVar1[2] = piVar1[4] + 2;
//            /* WARNING: Could not recover jumptable at 0x000009ec. Too many branches */
//            /* WARNING: Treating indirect jump as call */
//            (*DAT_00000adc)(*(undefined4 * )(uVar4 * 4 + iVar3));
//            return;
//        }
//    }
//    return;
//}
//
//
//void FUN_00000af4(int param_1) {
//    int iVar1;
//
//    iVar1 = (*DAT_00000b3c)();
//    (*DAT_00000b40)(iVar1, 3);
//    (*DAT_00000b48)(DAT_00000b44);
//    (*DAT_00000b40)(param_1 * 9 + iVar1 * -10, 1);
//    /* WARNING: Could not recover jumptable at 0x00000b38. Too many branches */
//    /* WARNING: Treating indirect jump as call */
//    (*DAT_00000b48)(DAT_00000b4c);
//    return;
//}
//
//
//int FUN_00000d50(int param_1) {
//    undefined4 *puVar1;
//    code *pcVar2;
//    code *pcVar3;
//    undefined4 uVar4;
//    int iVar5;
//    int iVar6;
//    uint uVar7;
//    int *piVar8;
//    char *pcVar9;
//
//    pcVar9 = *(char **) (param_1 + 0x58);
//    (*DAT_00000e5c)(4, 0x29, 0x18, 0x14);
//    (*DAT_00000e60)();
//    *DAT_00000e64 = 0;
//    iVar5 = DAT_00000e68;
//    pcVar3 = DAT_00000cb0;
//    uVar4 = DAT_00000ae0;
//    pcVar2 = DAT_00000acc;
//    puVar1 = DAT_00000ac8;
//    iVar6 = *(int *) (param_1 + 0x50);
//    if (iVar6 == 1) {
//        /* WARNING: Could not recover jumptable at 0x00000dae. Too many branches */
//        /* WARNING: Treating indirect jump as call */
//        iVar5 = (*DAT_00000e70)(*(undefined4 * )(pcVar9 + 0x2c));
//        return iVar5;
//    }
//    if (iVar6 == 2) {
//        *DAT_00000ac8 = 1;
//        (*pcVar2)(uVar4);
//        uVar4 = DAT_00000ae4;
//        puVar1[1] = puVar1[3] + 0x10;
//        (*pcVar2)(uVar4);
//        iVar5 = DAT_00000ae8;
//        *puVar1 = 0;
//        uVar4 = DAT_00000aec;
//        piVar8 = *(int **) (pcVar9 + 0x30);
//        uVar7 = (int) *pcVar9 & 0xff;
//        if (*piVar8 == 0) {
//            puVar1[1] = puVar1[3];
//            (*pcVar2)(uVar4);
//            puVar1[2] = puVar1[2] + 2;
//        } else {
//            do {
//                puVar1[1] = puVar1[3];
//                (*pcVar2)(*piVar8);
//                puVar1[1] = puVar1[3] + 0x12;
//                (*pcVar2)(*(undefined4 * )(iVar5 + piVar8[1] * 4));
//                uVar7 = uVar7 - 1;
//                piVar8 = piVar8 + 2;
//            } while (uVar7 != 0);
//        }
//        uVar4 = DAT_00000af0;
//        *puVar1 = 1;
//        puVar1[1] = puVar1[3];
//        (*pcVar2)(uVar4);
//        *puVar1 = 0;
//        puVar1[2] = puVar1[2] + 2;
//        uVar4 = DAT_00000aec;
//        piVar8 = *(int **) (pcVar9 + 0x34);
//        uVar7 = (int) pcVar9[1] & 0xff;
//        if (*piVar8 == 0) {
//            puVar1[1] = puVar1[3];
//            iVar6 = (*pcVar2)(uVar4);
//            puVar1[2] = puVar1[2] + 2;
//        } else {
//            do {
//                puVar1[1] = puVar1[3];
//                (*pcVar2)(*piVar8);
//                puVar1[1] = puVar1[3] + 0x12;
//                iVar6 = (*pcVar2)(*(undefined4 * )(iVar5 + piVar8[1] * 4));
//                uVar7 = uVar7 - 1;
//                piVar8 = piVar8 + 2;
//            } while (uVar7 != 0);
//        }
//        return iVar6;
//    }
//    if (iVar6 != 3) {
//        *(ushort * )((int) DAT_00000e48 + *(int *) (DAT_00000e68 + 4)) =
//                *(ushort * )(*(int *) (DAT_00000e68 + 4) + (int) DAT_00000e48) & (ushort) DAT_00000e6c;
//        *(undefined4 * )(iVar5 + 0x14) = 1;
//        return 1;
//    }
//    (*DAT_00000cb0)(DAT_00000cb4);
//    uVar4 = DAT_00000cbc;
//    iVar5 = DAT_00000cb8;
//    *(undefined4 * )(DAT_00000cb8 + 4) = *(undefined4 * )(DAT_00000cb8 + 0xc);
//    *(int *) (iVar5 + 8) = *(int *) (iVar5 + 0x10) + 2;
//    (*pcVar3)(uVar4);
//    *(undefined4 * )(iVar5 + 4) = *(undefined4 * )(iVar5 + 0xc);
//    uVar4 = DAT_00000cc0;
//    *(int *) (iVar5 + 8) = *(int *) (iVar5 + 0x10) + 4;
//    (*pcVar3)(uVar4);
//    uVar4 = DAT_00000cc4;
//    *(undefined4 * )(iVar5 + 4) = *(undefined4 * )(iVar5 + 0xc);
//    *(int *) (iVar5 + 8) = *(int *) (iVar5 + 0x10) + 6;
//    (*pcVar3)(uVar4);
//    *(undefined4 * )(iVar5 + 4) = *(undefined4 * )(iVar5 + 0xc);
//    uVar4 = DAT_00000cc8;
//    *(int *) (iVar5 + 8) = *(int *) (iVar5 + 0x10) + 8;
//    (*pcVar3)(uVar4);
//    uVar4 = DAT_00000ccc;
//    *(undefined4 * )(iVar5 + 4) = *(undefined4 * )(iVar5 + 0xc);
//    *(int *) (iVar5 + 8) = *(int *) (iVar5 + 0x10) + 10;
//    (*pcVar3)(uVar4);
//    *(undefined4 * )(iVar5 + 4) = *(undefined4 * )(iVar5 + 0xc);
//    uVar4 = DAT_00000cd0;
//    *(int *) (iVar5 + 8) = *(int *) (iVar5 + 0x10) + 0xc;
//    (*pcVar3)(uVar4);
//    *(int *) (iVar5 + 4) = *(int *) (iVar5 + 0xc) + 0xc;
//    *(undefined4 * )(iVar5 + 8) = *(undefined4 * )(iVar5 + 0x10);
//    FUN_00000af4(*(undefined2 * )(pcVar9 + 0x10));
//    *(int *) (iVar5 + 4) = *(int *) (iVar5 + 0xc) + 0xc;
//    *(int *) (iVar5 + 8) = *(int *) (iVar5 + 0x10) + 2;
//    FUN_00000af4(*(undefined2 * )(pcVar9 + 0x12));
//    *(int *) (iVar5 + 4) = *(int *) (iVar5 + 0xc) + 0xc;
//    *(int *) (iVar5 + 8) = *(int *) (iVar5 + 0x10) + 4;
//    FUN_00000af4(*(undefined2 * )(pcVar9 + 0x14));
//    iVar6 = (int) DAT_00000cae;
//    *(int *) (iVar5 + 4) = *(int *) (iVar5 + 0xc) + 6;
//    pcVar2 = DAT_00000cd4;
//    *(int *) (iVar5 + 8) = *(int *) (iVar5 + 0x10) + 6;
//    uVar4 = (*pcVar2)(((int) *(short *) (pcVar9 + 0x10) & 0xffffU) *
//                      ((int) *(short *) (pcVar9 + 0x12) & 0xffffU) *
//                      ((int) *(short *) (pcVar9 + 0x14) & 0xffffU), pcVar9[0xc], iVar6);
//    pcVar2 = DAT_00000cd8;
//    (*DAT_00000cd8)(uVar4, 8);
//    pcVar3 = DAT_00000cdc;
//    (*DAT_00000cdc)(DAT_00000ce0);
//    *(int *) (iVar5 + 4) = *(int *) (iVar5 + 0xc) + 0xc;
//    *(int *) (iVar5 + 8) = *(int *) (iVar5 + 0x10) + 8;
//    (*pcVar2)((int) *(short *) (((int) *(short *) (pcVar9 + 0xe) & 0xffffU) * 8 + DAT_00000ce4), 5);
//    (*pcVar3)(DAT_00000ce8);
//    *(int *) (iVar5 + 4) = *(int *) (iVar5 + 0xc) + 0xc;
//    *(int *) (iVar5 + 8) = *(int *) (iVar5 + 0x10) + 10;
//    (*pcVar2)((int) *(short *) (((int) *(short *) (pcVar9 + 0xe) & 0xffffU) * 8 + DAT_00000cec), 5);
//    (*pcVar3)(DAT_00000cf0);
//    if (*(short *) (pcVar9 + 0x16) != 0) {
//        uVar4 = (*DAT_00000cf4)(*(undefined2 * )(pcVar9 + 0x16));
//        (*DAT_00000cf8)(0, 8, 0x37, uVar4);
//        *(int *) (iVar5 + 4) = *(int *) (iVar5 + 0xc) + 6;
//        *(int *) (iVar5 + 8) = *(int *) (iVar5 + 0x10) + 0xe;
//        (*DAT_00000d00)(*(undefined4 * )((short) (*(short *) (pcVar9 + 0x16) * 0xc) + DAT_00000cfc));
//    }
//    if (*(short *) (pcVar9 + 0x18) == 0) {
//        return (int) *(short *) (pcVar9 + 0x18);
//    }
//    uVar4 = (*DAT_00000e4c)(*(undefined2 * )(pcVar9 + 0x18));
//    (*DAT_00000e50)(0, 8, 0x39, uVar4);
//    *(int *) (iVar5 + 4) = *(int *) (iVar5 + 0xc) + 6;
//    *(int *) (iVar5 + 8) = *(int *) (iVar5 + 0x10) + 0x10;
//    /* WARNING: Could not recover jumptable at 0x00000d40. Too many branches */
//    /* WARNING: Treating indirect jump as call */
//    iVar5 = (*DAT_00000e58)(*(undefined4 * )((short) (*(short *) (pcVar9 + 0x18) * 0xc) + DAT_00000e54));
//    return iVar5;
//}
//
//
//void FUN_00000dce(int param_1) {
//    int iVar1;
//    int iVar2;
//    code *pcVar3;
//    undefined4 uVar4;
//
//    iVar2 = DAT_00000e74;
//    iVar1 = DAT_00000e68;
//    *(ushort * )((int) DAT_00000e48 + *(int *) (DAT_00000e68 + 4)) =
//            *(ushort * )(*(int *) (DAT_00000e68 + 4) + (int) DAT_00000e48) & (ushort) DAT_00000e6c;
//    *(undefined4 * )(iVar1 + 0x14) = 1;
//    *(ushort * )((int) DAT_00000e4a + *(int *) (iVar1 + 4)) =
//            *(ushort * )(*(int *) (iVar1 + 4) + (int) DAT_00000e4a) & (ushort) DAT_00000e78;
//    *(undefined4 * )(iVar1 + 0x14) = 1;
//    *(undefined2 * )(param_1 + 0x14) = 0xffe8;
//    *(undefined2 * )(param_1 + 0x60) = *(undefined2 * )(iVar2 + 0x44);
//    *(undefined2 * )(param_1 + 0x62) = *(undefined2 * )(iVar2 + 0x46);
//    *(undefined4 * )(param_1 + 8) = 3;
//    **(undefined4 * *)(param_1 + 0x38) = 0xffffffff;
//    pcVar3 = DAT_00000e7c;
//    **(undefined4 * *)(param_1 + 0x4c) = 0xffffffff;
//    *(undefined4 * )(param_1 + 0x50) = 0;
//    *(undefined4 * )(param_1 + 0x54) = 0;
//    uVar4 = (*pcVar3)(param_1, *(undefined4 * )(param_1 + 0x58));
//    *(undefined4 * )(param_1 + 0x5c) = uVar4;
//    return;
//}
//
//
///* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
//
//void FUN_00000fd0(int param_1) {
//    int iVar1;
//    code *pcVar2;
//    int iVar3;
//
//    iVar1 = _LAB_00001064;
//    *DAT_00001068 = 1;
//    FUN_0000098c(0);
//    pcVar2 = DAT_0000106c;
//    *(undefined2 * )(iVar1 + 0x44) = *(undefined2 * )(param_1 + 0x60);
//    *(undefined2 * )(iVar1 + 0x46) = *(undefined2 * )(param_1 + 0x62);
//    (*pcVar2)();
//    iVar1 = DAT_0000105c;
//    iVar3 = (int) DAT_00001050;
//    *(undefined2 * )(param_1 + 0x14) = DAT_00001054;
//    *(ushort * )(iVar3 + *(int *) (iVar1 + 4)) =
//            *(ushort * )(*(int *) (iVar1 + 4) + iVar3) & (ushort) DAT_00001060 | DAT_00001052;
//    *(undefined4 * )(iVar1 + 0x14) = 1;
//    *(ushort * )((int) DAT_00001056 + *(int *) (iVar1 + 4)) =
//            *(ushort * )((int) DAT_00001056 + *(int *) (iVar1 + 4)) & (ushort) DAT_00001070 | 6;
//    *(undefined4 * )(iVar1 + 0x14) = 1;
//    *(ushort * )((int) DAT_00001058 + *(int *) (iVar1 + 4)) =
//            *(ushort * )(*(int *) (iVar1 + 4) + (int) DAT_00001058) & (ushort) DAT_00001074;
//    *(undefined4 * )(iVar1 + 0x14) = 1;
//    return;
//}
//
//
//void FUN_0000191c(int param_1, int param_2, int param_3) {
//    undefined4 uVar1;
//
//    if (param_2 != **(short **) (param_1 + 0x10)) {
//        if (param_2 < **(short **) (param_1 + 0x10)) {
//            param_3 = -param_3;
//        }
//        *(int *) (param_1 + 0x14) = param_3;
//        uVar1 = (*DAT_000019cc)();
//        *(undefined4 * )(param_1 + 4) = uVar1;
//        *(int *) (param_1 + 0x18) = param_2;
//    }
//    return;
//}
//
//
//undefined4 FUN_0000192e(int param_1, undefined4 param_2, undefined4 param_3) {
//    undefined4 uVar1;
//
//    *(undefined4 * )(param_1 + 0x14) = param_3;
//    uVar1 = (*DAT_000019cc)();
//    *(undefined4 * )(param_1 + 4) = uVar1;
//    *(undefined4 * )(param_1 + 0x18) = param_2;
//    return uVar1;
//}
//
//
//int FUN_0000194c(int param_1) {
//    int iVar1;
//    short *psVar2;
//
//    iVar1 = *(int *) (param_1 + 4);
//    psVar2 = *(short **) (param_1 + 0x10);
//    if (iVar1 == 0) {
//        *psVar2 = (short) *(undefined4 * )(param_1 + 0x18);
//    } else {
//        *psVar2 = *psVar2 + (short) *(undefined4 * )(param_1 + 0x14);
//        *(int *) (param_1 + 4) = *(int *) (param_1 + 4) + -1;
//    }
//    return iVar1;
//}
//
//
//void FUN_00001ab2(int *param_1) {
//    int iVar1;
//    uint uVar2;
//    uint uVar3;
//    uint uVar4;
//    uint uVar5;
//    uint uVar6;
//
//    uVar4 = param_1[1];
//    uVar5 = param_1[2];
//    uVar6 = param_1[3];
//    iVar1 = (*DAT_00001b4c)();
//    uVar2 = *param_1 - iVar1;
//    if ((int) uVar2 < -0x1f) {
//        uVar2 = 0xffffffe1;
//    }
//    if (0x1f < (int) uVar2) {
//        uVar2 = 0x1f;
//    }
//    uVar3 = (uint) DAT_00001b3a;
//    uVar2 = uVar2 & uVar3;
//    param_1[9] = uVar2 << 0x10 | uVar2 << 8 | uVar2;
//    param_1[8] = (uVar6 & uVar3) << 0x10 | (uVar5 & uVar3) << 8 | uVar4 & uVar3;
//    return;
//}
//
//
//void FUN_00001b32(int param_1) {
//    undefined4 in_r3;
//
//    *(undefined4 * )(param_1 + 0x10) = in_r3;
//    *(undefined4 * )(param_1 + 0x14) = DAT_00001b54;
//    return;
//}
//
//
//void FUN_00001d8e(void) {
//    code *unaff_r13;
//    code *unaff_r14;
//
//    (*unaff_r14)(0x21);
//    (*unaff_r13)();
//    (*unaff_r14)(0x21, 0x2e);
//    (*unaff_r13)();
//    return;
//}
//
//
///**
// * // TODO: Find Missing Instructions. Why is this empty? Has missing '??' instruction...
// * **************************************************************
// *                          FUNCTION                           *
// * *************************************************************
// * undefined FUN_00001e6a()
// * undefined            r0:1            <RETURN>
// * FUN_00001e6a*  XREF[1]:000021fa(c)
// * Location: 00001e6a    00              ??         00h
// */
//undefined FUN_00001e6a(void) {}
//
//
///* WARNING: Control flow encountered bad instruction data */
//
//void FUN_0000202a(int param_1) {
//    int in_r0;
//    int in_r2;
//
//    *(char *) (in_r0 + 4) = (char) in_r0;
//    *(undefined * )(in_r2 + 4) = *(undefined * )(param_1 + 2);
//    *(undefined * )(in_r2 + 5) = *(undefined * )(in_r2 + 4);
//    /* WARNING: Bad instruction - Truncating control flow here */
//    halt_baddata();
//}
//
//
///* WARNING: Control flow encountered bad instruction data */
//
//void FUN_00002323(void) {
//    int in_r0;
//    undefined4 in_r1;
//
//    *(undefined4 * )(in_r0 + 0x30) = in_r1;
//    /* WARNING: Bad instruction - Truncating control flow here */
//    halt_baddata();
//}
//
///** *************************************************************
//** FUNCTION                          *
//* **************************************************************
//*  undefined FUN_0000232b()
//*  undefined         r0:1           <RETURN>
//*  FUN_0000232b                         XREF[1]:000021c5(c)
//*  0000232b 91              ??         91h
// */
//undefined FUN_0000232b(void) {}
//
//
///**
// * **************************************************************
//*  *                          FUNCTION                          *
//*  **************************************************************
//*  undefined FUN_0000247a()
//*  undefined         r0:1           <RETURN>
//*  FUN_0000247a                         XREF[1]:FUN_000026ea:00002706(c)
//        0000247a 01              ??         01h
//
// */
//undefined FUN_0000247a(void) {}
//
//
//
//
//
///* WARNING: Control flow encountered bad instruction data */
//
//void FUN_000026ea(undefined4 param_1,undefined4 param_2,int param_3,int param_4)
//
//{
//    int in_r0;
//    int iVar1;
//    undefined2 uVar2;
//    int in_gbr;
//    undefined8 uVar3;
//
//    *(short *)(param_3 + in_r0) = (short)in_r0;
//    iVar1 = FUN_00003566();
//    *(short *)(param_3 + iVar1) = (short)iVar1;
//    iVar1 = func_0x00001722();
//    *(short *)(param_3 + iVar1) = (short)iVar1;
//    iVar1 = FUN_0000192e();
//    *(short *)(param_3 + iVar1) = (short)iVar1;
//    iVar1 = FUN_00001b32();
//    *(short *)(param_3 + iVar1) = (short)iVar1;
//    iVar1 = FUN_00001d8e();
//    *(short *)(param_3 + iVar1) = (short)iVar1;
//    iVar1 = FUN_0000202a();
//    *(short *)(param_3 + iVar1) = (short)iVar1;
//    iVar1 = func_0x00002226();
//    *(short *)(param_3 + iVar1) = (short)iVar1;
//    uVar3 = FUN_0000247a();
//    iVar1 = (int)uVar3;
//    *(char *)(in_gbr + 0x18) = (char)uVar3;
//    uVar2 = (undefined2)uVar3;
//    *(undefined2 *)(param_3 + iVar1) = uVar2;
//    *(undefined2 *)(param_3 + iVar1) = uVar2;
//    *(undefined2 *)(param_3 + iVar1) = uVar2;
//    *(undefined2 *)(param_3 + iVar1) = uVar2;
//    *(undefined2 *)(param_3 + iVar1) = uVar2;
//    *(undefined2 *)(param_3 + iVar1) = uVar2;
//    *(undefined2 *)(param_3 + iVar1) = uVar2;
//    *(undefined2 *)(param_3 + iVar1) = uVar2;
//    *(undefined2 *)(param_3 + iVar1) = uVar2;
//    *(undefined2 *)(param_3 + iVar1) = uVar2;
//    *(undefined2 *)(param_3 + iVar1) = uVar2;
//    param_3 = param_3 + 0x70;
//    *(undefined2 *)(param_3 + iVar1) = uVar2;
//    *(undefined2 *)(param_3 + iVar1) = uVar2;
//    *(undefined2 *)(param_3 + iVar1) = uVar2;
//    *(undefined2 *)(param_3 + iVar1) = uVar2;
//    *(undefined2 *)(param_3 + iVar1) = uVar2;
//    *(undefined2 *)(param_3 + iVar1) = uVar2;
//    *(undefined2 *)(param_3 + iVar1) = uVar2;
//    *(char *)((int)((ulonglong)uVar3 >> 0x20) + 0x68) = (char)uVar3;
//    *(undefined2 *)(param_3 + iVar1) = uVar2;
//    *(undefined2 *)(param_4 + -0x4c) = uVar2;
//    *(undefined2 *)(param_3 + iVar1) = uVar2;
//    /* WARNING: Bad instruction - Truncating control flow here */
//    halt_baddata();
//}
//
//
//
//
//
//
///* WARNING: Control flow encountered bad instruction data */
//
//void UndefinedFunction_00002730(undefined4 param_1,undefined4 param_2,int param_3,int param_4)
//
//{
//    int in_r0;
//    undefined2 uVar1;
//    int in_r1;
//
//    uVar1 = (undefined2)in_r0;
//    *(undefined2 *)(param_3 + in_r0) = uVar1;
//    *(undefined2 *)(param_3 + in_r0) = uVar1;
//    param_3 = param_3 + 0x70;
//    *(undefined2 *)(param_3 + in_r0) = uVar1;
//    *(undefined2 *)(param_3 + in_r0) = uVar1;
//    *(undefined2 *)(param_3 + in_r0) = uVar1;
//    *(undefined2 *)(param_3 + in_r0) = uVar1;
//    *(undefined2 *)(param_3 + in_r0) = uVar1;
//    *(undefined2 *)(param_3 + in_r0) = uVar1;
//    *(undefined2 *)(param_3 + in_r0) = uVar1;
//    *(char *)(in_r1 + 8) = (char)in_r0;
//    *(undefined2 *)(param_3 + in_r0) = uVar1;
//    *(undefined2 *)(param_4 + -0x4c) = uVar1;
//    *(undefined2 *)(param_3 + in_r0) = uVar1;
//    /* WARNING: Bad instruction - Truncating control flow here */
//    halt_baddata();
//}
//
//
//
//
///* WARNING: Control flow encountered bad instruction data */
//
//void FUN_0000276f(void)
//
//{
//    /* WARNING: Bad instruction - Truncating control flow here */
//    halt_baddata();
//}
//
//
//
//
///* WARNING: Control flow encountered bad instruction data */
//
//void FUN_00002d7d(void)
//
//{
//    int in_r0;
//
//    *(int *)(in_r0 * 2) = in_r0;
//    /* WARNING: Bad instruction - Truncating control flow here */
//    halt_baddata();
//}
//
//
//
//
//
///* WARNING: Control flow encountered bad instruction data */
//
//void FUN_00002eaf(int *param_1,undefined4 param_2,int param_3)
//
//{
//    int iVar1;
//    undefined *unaff_r8;
//
//    iVar1 = iRam00002eb0;
//    *unaff_r8 = (char)iRam00002eb0;
//    *param_1 = iVar1;
//    *(int *)(iVar1 * 2) = iVar1;
//    func_0x00001ecb(param_1,(int)*(short *)(param_3 + iVar1));
//    iVar1 = func_0x00002ccf();
//    *(char *)(iVar1 + 6) = (char)iVar1;
//    /* WARNING: Bad instruction - Truncating control flow here */
//    halt_baddata();
//}
//
//
//
//
