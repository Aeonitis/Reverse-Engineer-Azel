/**
 * 1ST_READ.PRG
 * 56 Symbols
 * 10 Functions
 */


/**
 * 1 Symbol Reference count
 * From Location    Label           Subroutine      Access  From Preview
 * 00000400	        LAB_00000400	LAB_00000400	Call	bsr FUN_00000534
 */
int FUN_00000534(int param_1) {
    code *pcVar1;
    int iVar2;
    int *piVar3;
    char *pcVar4;
    int iVar5;

    pcVar1 = DAT_000005bc;
    pcVar4 = (char *) (param_1 * 2 + DAT_000005b8);
    iVar2 = (int) pcVar4[1];
    iVar5 = (int) *pcVar4;
    piVar3 = (int *) (iVar5 * 4 + DAT_0000056c);
    if (*piVar3 != iVar2) {
        *piVar3 = iVar2;
        (*pcVar1)(iVar5, iVar2);
    }
    return iVar5;
}

/**
 * 1 Symbol Reference count
 * From Location    Label           Subroutine      Access  From Preview
 * 000032ee		                    LAB_00003100	Call	bsr FUN_00002af0
 */
void FUN_00002af0(int param_1, int param_2, int param_3, undefined4 *param_4) {
    int iVar1;
    uint uVar2;
    undefined4 *puVar3;

    iVar1 = (*DAT_00002b8c)(param_2, param_4[1]);
    iVar1 = *(int *) (param_1 + 0x18) + iVar1;
    if (param_2 < 0) {
        puVar3 = (undefined4 * )(DAT_00002b90 + 0x28);
        uVar2 = 4;
    } else {
        puVar3 = (undefined4 * )(DAT_00002b90 + DAT_00002b86);
        uVar2 = (uint) DAT_00002b88;
    }
    *(uint * )(param_1 + 0x44) = *(uint * )(param_1 + 0x44) | uVar2;
    if ((int) puVar3[3] < iVar1) {
        *puVar3 = *param_4;
        puVar3[1] = param_4[1];
        puVar3[2] = param_4[2];
        puVar3[3] = iVar1;
        puVar3[4] = param_2 + *(int *) (param_3 + 4);
    }
    return;
}

/**
 * 1 Symbol Reference count
 * From Location    Label           Subroutine      Access  From Preview
 * 0000321a		                    LAB_00003100	Call	bsr FUN_00002b52
 */
void FUN_00002b52(int param_1, int param_2, int param_3, undefined4 *param_4) {
    int iVar1;
    uint uVar2;
    undefined4 *puVar3;

    iVar1 = (*DAT_00002b8c)(param_2, param_4[1]);
    iVar1 = iVar1 - *(int *) (param_1 + 0x18);
    if (param_2 < 0) {
        puVar3 = (undefined4 * )(DAT_00002b90 + 0x3c);
        uVar2 = 8;
    } else {
        puVar3 = (undefined4 * )(DAT_00002b90 + DAT_00002c90);
        uVar2 = (uint) DAT_00002c92;
    }
    *(uint * )(param_1 + 0x44) = *(uint * )(param_1 + 0x44) | uVar2;
    if (iVar1 < (int) puVar3[3]) {
        *puVar3 = *param_4;
        puVar3[1] = param_4[1];
        puVar3[2] = param_4[2];
        puVar3[3] = iVar1;
        puVar3[4] = param_2 - *(int *) (param_3 + 4);
    }
    return;
}

/**
 * 1 Symbol Reference count
 * From Location    Label           Subroutine      Access  From Preview
 * 00003680		                    FUN_00003656	Call	bsr FUN_00003624
 */
void FUN_00003624(undefined4 *param_1, undefined4 *param_2) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    param_2[5] = param_1[5];
    param_2[6] = param_1[6];
    param_2[7] = param_1[7];
    param_2[8] = param_1[8];
    param_2[9] = param_1[9];
    param_2[10] = param_1[10];
    param_2[0xb] = param_1[0xb];
    return;
}

/**
 * 4 Symbol Reference counts
 * From Location    Label           Subroutine      Access  From Preview
 * 00003704	        LAB_00003704	LAB_00003704	Call	bsr FUN_00003656
 * 0000371c		                    LAB_00003704	Call	bsr FUN_00003656
 * 0000373a		                    LAB_00003704	Call	bsr FUN_00003656
 * 00003758		                    LAB_00003704	Call	bsr FUN_00003656
 */
void FUN_00003656(int param_1, undefined4 *param_2) {
    param_2[2] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[3] = 0;
    param_2[8] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[0xb] = 0;
    param_2[10] = 0;
    param_2[9] = 0;
    FUN_00003624(*(undefined4 * )(param_1 + 4), param_2 + 0xc);
    param_2[0x18] = param_1;
    return;
}

/**
 * 1 Symbol Reference count
 * From Location    Label           Subroutine      Access  From Preview
 * 0000f222		                    LAB_0000f210	Call	bsr FUN_0000f2d4
 */
undefined4 FUN_0000f2d4(void) {
    code *pcVar1;
    undefined4 uVar2;

    if ((*(byte * )(int)DAT_0000f3c6 & 1) != 0) {
        (*DAT_0000f3c8)();
        pcVar1 = DAT_0000f3d4;
        *DAT_0000f3d0 = (short) PTR_LAB_0000f3cc;
        (*pcVar1)(3, 0xb);
        (*DAT_0000f3dc)(DAT_0000f3d8);
        (*pcVar1)(3, 0xc);
        (*DAT_0000f3dc)(DAT_0000f3e0);
        (*pcVar1)(0xf, 0xe);
        (*DAT_0000f3e8)();
        (*pcVar1)(0xf);
        uVar2 = (*DAT_0000f3e8)();
        Sleep_Standby();
        return uVar2;
    }
    /* WARNING: Could not recover jumptable at 0x0000f348. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar2 = (*DAT_0000f3f0)(0, 4);
    return uVar2;
}

/**
 * 2 Symbol Reference counts
 * From Location    Label           Subroutine      Access  From Preview
 * 0000f262		                    LAB_0000f210	Call	bsr FUN_0000f354
 * 0000f288		                    LAB_0000f210	Call	bsr FUN_0000f354
 */
undefined4 FUN_0000f354(void) {
    code *pcVar1;
    undefined4 uVar2;

    if ((*(byte * )(int)DAT_0000f3c6 & 1) != 0) {
        (*DAT_0000f3c8)();
        pcVar1 = DAT_0000f3d4;
        *DAT_0000f3d0 = (short) PTR_LAB_0000f3cc;
        (*pcVar1)(3, 0xb);
        (*DAT_0000f3dc)(DAT_0000f3f4);
        (*pcVar1)(0xf, 0xe);
        (*DAT_0000f3e8)();
        (*pcVar1)(0xf);
        uVar2 = (*DAT_0000f3e8)();
        Sleep_Standby();
        return uVar2;
    }
    /* WARNING: Could not recover jumptable at 0x0000f3ba. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar2 = (*DAT_0000f3f0)(0, 5);
    return uVar2;
}

/**
 * 1 Symbol Reference count
 * From Location    Label           Subroutine      Access  From Preview
 * 00020040		                    LAB_00020000	Call	bsr FUN_0002006e
 */
void FUN_0002006e(int param_1, uint param_2) {
    uint uVar1;
    int iVar2;
    uint uVar3;
    byte *pbVar4;
    uint uVar5;
    short *psVar6;
    uint uVar7;
    char *pcVar8;
    char *pcVar9;
    int local_34;
    int iStack48;
    char cStack36;
    char cStack35;
    char cStack34;
    char cStack33;
    char cStack32;
    char cStack31;
    char cStack30;
    byte bStack29;

    iVar2 = *(int *) (*DAT_000200c0 + 0xc);
    uVar1 = (param_2 & 0xffff) + (int) DAT_000200ac & (uint) PTR_DAT_0000fffc + 3_000200c4;
    if (*(char *) (*DAT_000200c0 + 0x14) == '\x04') {
        if ((int) uVar1 < (int) DAT_000200ae) {
            iVar2 = *(int *) (*DAT_000200c8 + 0xc);
        } else {
            uVar1 = uVar1 - (int) DAT_000200ae;
        }
    }
    psVar6 = (short *) (uVar1 * 0x20 + iVar2);
    pcVar8 = (char *) (param_1 * 0x80 + DAT_000200bc);
    iStack48 = 2;
    do {
        iVar2 = 8;
        do {
            pcVar9 = pcVar8;
            uVar7 = (int) *psVar6 & 0xffff;
            uVar1 = uVar7 << 1 | uVar7 >> 1;
            uVar3 = ((int) psVar6[-1] & 0xffffU | (int) psVar6[1] & 0xffffU) & uVar1;
            uVar1 = uVar1 | (int) psVar6[-1] & 0xffffU | (int) psVar6[1] & 0xffffU | uVar3 << 1 | uVar3 >> 1;
            local_34 = 7;
            pbVar4 = &bStack29;
            do {
                *pbVar4 = ((byte)((uVar7 & 3) << 3) | (byte)(uVar7 & 3)) & 0x11;
                uVar7 = uVar7 >> 2;
                local_34 = local_34 + -1;
                pbVar4 = pbVar4 + -1;
            } while (local_34 != 0);
            *pbVar4 = ((byte)((uVar7 & 3) << 3) | (byte)(uVar7 & 3)) & 0x11;
            uVar5 = uVar3 >> 10 & 0x30;
            uVar7 = uVar1 >> 9 & 0x60;
            *pcVar9 = ((char) (uVar5 >> 3) + (char) uVar5 & 0x22U) + cStack36 +
                      ((char) (uVar7 >> 3) + (char) uVar7 & 0x44U);
            uVar7 = uVar3 >> 8 & 0x30;
            uVar5 = uVar1 >> 7 & 0x60;
            pcVar9[1] = ((char) (uVar5 >> 3) + (char) uVar5 & 0x44U) +
                        ((char) (uVar7 >> 3) + (char) uVar7 & 0x22U) + cStack35;
            uVar5 = uVar3 >> 6 & 0x30;
            uVar7 = uVar1 >> 5 & 0x60;
            pcVar9[2] = ((char) (uVar7 >> 3) + (char) uVar7 & 0x44U) +
                        ((char) (uVar5 >> 3) + (char) uVar5 & 0x22U) + cStack34;
            uVar5 = uVar3 >> 4 & 0x30;
            uVar7 = uVar1 >> 3 & 0x60;
            pcVar9[3] = ((char) (uVar5 >> 3) + (char) uVar5 & 0x22U) + cStack33 +
                        ((char) (uVar7 >> 3) + (char) uVar7 & 0x44U);
            uVar5 = uVar3 >> 2 & 0x30;
            uVar7 = uVar1 >> 1 & 0x60;
            pcVar9[0x20] = ((char) (uVar5 >> 3) + (char) uVar5 & 0x22U) + cStack32 +
                           ((char) (uVar7 >> 3) + (char) uVar7 & 0x44U);
            uVar7 = (uVar1 & 0x30) << 1;
            pcVar9[0x21] = ((char) ((uVar3 & 0x30) >> 3) + (char) (uVar3 & 0x30) & 0x22U) + cStack31 +
                           ((char) (uVar7 >> 3) + (char) uVar7 & 0x44U);
            uVar7 = (uVar3 & 0xc) * 4;
            pcVar9[0x22] = ((char) (uVar7 >> 3) + (char) uVar7 & 0x22U) + cStack30 +
                           (((byte) uVar1 & 0xc) + (char) ((uVar1 & 0xc) << 3) & 0x44);
            uVar3 = (uVar3 & 3) * 0x10;
            uVar1 = (uVar1 & 3) << 5;
            psVar6 = psVar6 + 1;
            pcVar9[0x23] = ((char) (uVar3 >> 3) + (char) uVar3 & 0x22U) +
                           ((char) (uVar1 >> 3) + (char) uVar1 & 0x44U) + bStack29;
            iVar2 = iVar2 + -1;
            pcVar8 = pcVar9 + 4;
        } while (iVar2 != 0);
        iStack48 = iStack48 + -1;
        pcVar8 = pcVar9 + 0x24;
    } while (iStack48 != 0);
    return;
}

/**
 * 1 Symbol Reference count
 * From Location    Label           Subroutine      Access  From Preview
 * 0002fd60		                    LAB_00030000	Call	bsr FUN_0002fe6a
 */
void FUN_0002fe6a(uint param_1, uint *param_2) {
    uint uVar1;
    uint uVar2;
    uint uVar3;
    int iVar4;
    uint uVar5;
    int iVar6;
    uint uVar7;
    uint uVar8;
    uint in_sr;
    uint uVar9;
    uint uVar10;
    uint uVar11;
    uint uVar12;
    uint uVar13;
    uint uVar14;
    uint uVar15;

    iVar6 = ((int) DAT_0002fef8 & param_1) * 4;
    uVar7 = *(uint * )(DAT_0002ff00 + iVar6);
    uVar8 = *(uint * )(DAT_0002ff04 + iVar6);
    uVar2 = -uVar7;
    uVar10 = *param_2;
    uVar9 = uVar10 ^ uVar7;
    if ((int) uVar10 < 0) {
        uVar10 = -uVar10;
    }
    uVar5 = uVar7;
    if ((int) uVar7 < 0) {
        uVar5 = -uVar7;
    }
    uVar15 = (uVar5 & 0xffff) * (uVar10 & 0xffff);
    iVar4 = (uVar5 >> 0x10) * (uVar10 & 0xffff);
    iVar6 = 0;
    uVar1 = iVar4 + (uVar5 & 0xffff) * (uVar10 >> 0x10);
    if (iVar4 != 0) {
        iVar6 = 0x10000;
    }
    uVar14 = uVar15 + uVar1 * 0x10000;
    uVar10 = iVar6 + (uint)(uVar14 < uVar15) + (uVar1 >> 0x10) + (uVar5 >> 0x10) * (uVar10 >> 0x10);
    if ((int) uVar9 < 0) {
        uVar10 = ~uVar10;
        if (uVar14 == 0) {
            uVar10 = uVar10 + 1;
        } else {
            uVar14 = ~uVar14 + 1;
        }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
        if ((int) uVar10 < -0x8000) {
            uVar10 = 0xffff8000;
            uVar14 = 0;
        }
        if (0x7fff < (int) uVar10) {
            uVar10 = 0x7fff;
            uVar14 = 0xffffffff;
        }
        uVar10 = uVar10 & 0xffff;
    }
    uVar9 = param_2[2];
    uVar5 = uVar9 ^ uVar8;
    if ((int) uVar9 < 0) {
        uVar9 = -uVar9;
    }
    uVar1 = uVar8;
    if ((int) uVar8 < 0) {
        uVar1 = -uVar8;
    }
    uVar11 = (uVar1 & 0xffff) * (uVar9 & 0xffff);
    iVar4 = (uVar1 >> 0x10) * (uVar9 & 0xffff);
    iVar6 = 0;
    uVar15 = iVar4 + (uVar1 & 0xffff) * (uVar9 >> 0x10);
    if (iVar4 != 0) {
        iVar6 = 0x10000;
    }
    uVar13 = uVar11 + uVar15 * 0x10000;
    uVar9 = iVar6 + (uint)(uVar13 < uVar11) + (uVar15 >> 0x10) + (uVar1 >> 0x10) * (uVar9 >> 0x10);
    if ((int) uVar5 < 0) {
        uVar9 = ~uVar9;
        if (uVar13 == 0) {
            uVar9 = uVar9 + 1;
        } else {
            uVar13 = ~uVar13 + 1;
        }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
        uVar13 = uVar14 + uVar13;
        uVar10 = uVar9 + (uVar13 < uVar14) + (uVar10 & 0xffff);
        if ((int) uVar10 < -0x8000) {
            uVar10 = 0xffff8000;
            uVar13 = 0;
        }
        if (0x7fff < (int) uVar10) {
            uVar10 = 0x7fff;
            uVar13 = 0xffffffff;
        }
        uVar10 = uVar10 & 0xffff;
    } else {
        uVar13 = uVar14 + uVar13;
        uVar10 = uVar9 + (uVar13 < uVar14) + uVar10;
    }
    uVar9 = *param_2;
    uVar5 = uVar9 ^ uVar8;
    if ((int) uVar9 < 0) {
        uVar9 = -uVar9;
    }
    uVar1 = uVar8;
    if ((int) uVar8 < 0) {
        uVar1 = -uVar8;
    }
    uVar14 = (uVar1 & 0xffff) * (uVar9 & 0xffff);
    iVar4 = (uVar1 >> 0x10) * (uVar9 & 0xffff);
    iVar6 = 0;
    uVar15 = iVar4 + (uVar1 & 0xffff) * (uVar9 >> 0x10);
    if (iVar4 != 0) {
        iVar6 = 0x10000;
    }
    uVar11 = uVar14 + uVar15 * 0x10000;
    uVar9 = iVar6 + (uint)(uVar11 < uVar14) + (uVar15 >> 0x10) + (uVar1 >> 0x10) * (uVar9 >> 0x10);
    if ((int) uVar5 < 0) {
        uVar9 = ~uVar9;
        if (uVar11 == 0) {
            uVar9 = uVar9 + 1;
        } else {
            uVar11 = ~uVar11 + 1;
        }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
        if ((int) uVar9 < -0x8000) {
            uVar9 = 0xffff8000;
            uVar11 = 0;
        }
        if (0x7fff < (int) uVar9) {
            uVar9 = 0x7fff;
            uVar11 = 0xffffffff;
        }
        uVar9 = uVar9 & 0xffff;
    }
    uVar5 = param_2[2];
    uVar1 = uVar5 ^ uVar2;
    if ((int) uVar5 < 0) {
        uVar5 = -uVar5;
    }
    uVar15 = uVar2;
    if (0 < (int) uVar7) {
        uVar15 = uVar7;
    }
    uVar3 = (uVar15 & 0xffff) * (uVar5 & 0xffff);
    iVar4 = (uVar15 >> 0x10) * (uVar5 & 0xffff);
    iVar6 = 0;
    uVar14 = iVar4 + (uVar15 & 0xffff) * (uVar5 >> 0x10);
    if (iVar4 != 0) {
        iVar6 = 0x10000;
    }
    uVar12 = uVar3 + uVar14 * 0x10000;
    uVar5 = iVar6 + (uint)(uVar12 < uVar3) + (uVar14 >> 0x10) + (uVar15 >> 0x10) * (uVar5 >> 0x10);
    if ((int) uVar1 < 0) {
        uVar5 = ~uVar5;
        if (uVar12 == 0) {
            uVar5 = uVar5 + 1;
        } else {
            uVar12 = ~uVar12 + 1;
        }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
        uVar12 = uVar11 + uVar12;
        uVar9 = uVar5 + (uVar12 < uVar11) + (uVar9 & 0xffff);
        if ((int) uVar9 < -0x8000) {
            uVar9 = 0xffff8000;
            uVar12 = 0;
        }
        if (0x7fff < (int) uVar9) {
            uVar9 = 0x7fff;
            uVar12 = 0xffffffff;
        }
        uVar9 = uVar9 & 0xffff;
    } else {
        uVar12 = uVar11 + uVar12;
        uVar9 = uVar5 + (uVar12 < uVar11) + uVar9;
    }
    param_2[2] = uVar10 << 0x10 | uVar13 >> 0x10;
    *param_2 = uVar9 << 0x10 | uVar12 >> 0x10;
    uVar10 = param_2[4];
    uVar9 = uVar10 ^ uVar7;
    if ((int) uVar10 < 0) {
        uVar10 = -uVar10;
    }
    uVar5 = uVar7;
    if ((int) uVar7 < 0) {
        uVar5 = -uVar7;
    }
    uVar15 = (uVar5 & 0xffff) * (uVar10 & 0xffff);
    iVar4 = (uVar5 >> 0x10) * (uVar10 & 0xffff);
    iVar6 = 0;
    uVar1 = iVar4 + (uVar5 & 0xffff) * (uVar10 >> 0x10);
    if (iVar4 != 0) {
        iVar6 = 0x10000;
    }
    uVar14 = uVar15 + uVar1 * 0x10000;
    uVar10 = iVar6 + (uint)(uVar14 < uVar15) + (uVar1 >> 0x10) + (uVar5 >> 0x10) * (uVar10 >> 0x10);
    if ((int) uVar9 < 0) {
        uVar10 = ~uVar10;
        if (uVar14 == 0) {
            uVar10 = uVar10 + 1;
        } else {
            uVar14 = ~uVar14 + 1;
        }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
        if ((int) uVar10 < -0x8000) {
            uVar10 = 0xffff8000;
            uVar14 = 0;
        }
        if (0x7fff < (int) uVar10) {
            uVar10 = 0x7fff;
            uVar14 = 0xffffffff;
        }
        uVar10 = uVar10 & 0xffff;
    }
    uVar9 = param_2[6];
    uVar5 = uVar9 ^ uVar8;
    if ((int) uVar9 < 0) {
        uVar9 = -uVar9;
    }
    uVar1 = uVar8;
    if ((int) uVar8 < 0) {
        uVar1 = -uVar8;
    }
    uVar11 = (uVar1 & 0xffff) * (uVar9 & 0xffff);
    iVar4 = (uVar1 >> 0x10) * (uVar9 & 0xffff);
    iVar6 = 0;
    uVar15 = iVar4 + (uVar1 & 0xffff) * (uVar9 >> 0x10);
    if (iVar4 != 0) {
        iVar6 = 0x10000;
    }
    uVar13 = uVar11 + uVar15 * 0x10000;
    uVar9 = iVar6 + (uint)(uVar13 < uVar11) + (uVar15 >> 0x10) + (uVar1 >> 0x10) * (uVar9 >> 0x10);
    if ((int) uVar5 < 0) {
        uVar9 = ~uVar9;
        if (uVar13 == 0) {
            uVar9 = uVar9 + 1;
        } else {
            uVar13 = ~uVar13 + 1;
        }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
        uVar13 = uVar14 + uVar13;
        uVar10 = uVar9 + (uVar13 < uVar14) + (uVar10 & 0xffff);
        if ((int) uVar10 < -0x8000) {
            uVar10 = 0xffff8000;
            uVar13 = 0;
        }
        if (0x7fff < (int) uVar10) {
            uVar10 = 0x7fff;
            uVar13 = 0xffffffff;
        }
        uVar10 = uVar10 & 0xffff;
    } else {
        uVar13 = uVar14 + uVar13;
        uVar10 = uVar9 + (uVar13 < uVar14) + uVar10;
    }
    uVar9 = param_2[4];
    uVar5 = uVar9 ^ uVar8;
    if ((int) uVar9 < 0) {
        uVar9 = -uVar9;
    }
    uVar1 = uVar8;
    if ((int) uVar8 < 0) {
        uVar1 = -uVar8;
    }
    uVar14 = (uVar1 & 0xffff) * (uVar9 & 0xffff);
    iVar4 = (uVar1 >> 0x10) * (uVar9 & 0xffff);
    iVar6 = 0;
    uVar15 = iVar4 + (uVar1 & 0xffff) * (uVar9 >> 0x10);
    if (iVar4 != 0) {
        iVar6 = 0x10000;
    }
    uVar11 = uVar14 + uVar15 * 0x10000;
    uVar9 = iVar6 + (uint)(uVar11 < uVar14) + (uVar15 >> 0x10) + (uVar1 >> 0x10) * (uVar9 >> 0x10);
    if ((int) uVar5 < 0) {
        uVar9 = ~uVar9;
        if (uVar11 == 0) {
            uVar9 = uVar9 + 1;
        } else {
            uVar11 = ~uVar11 + 1;
        }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
        if ((int) uVar9 < -0x8000) {
            uVar9 = 0xffff8000;
            uVar11 = 0;
        }
        if (0x7fff < (int) uVar9) {
            uVar9 = 0x7fff;
            uVar11 = 0xffffffff;
        }
        uVar9 = uVar9 & 0xffff;
    }
    uVar5 = param_2[6];
    uVar1 = uVar5 ^ uVar2;
    if ((int) uVar5 < 0) {
        uVar5 = -uVar5;
    }
    uVar15 = uVar2;
    if (0 < (int) uVar7) {
        uVar15 = uVar7;
    }
    uVar3 = (uVar15 & 0xffff) * (uVar5 & 0xffff);
    iVar4 = (uVar15 >> 0x10) * (uVar5 & 0xffff);
    iVar6 = 0;
    uVar14 = iVar4 + (uVar15 & 0xffff) * (uVar5 >> 0x10);
    if (iVar4 != 0) {
        iVar6 = 0x10000;
    }
    uVar12 = uVar3 + uVar14 * 0x10000;
    uVar5 = iVar6 + (uint)(uVar12 < uVar3) + (uVar14 >> 0x10) + (uVar15 >> 0x10) * (uVar5 >> 0x10);
    if ((int) uVar1 < 0) {
        uVar5 = ~uVar5;
        if (uVar12 == 0) {
            uVar5 = uVar5 + 1;
        } else {
            uVar12 = ~uVar12 + 1;
        }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
        uVar12 = uVar11 + uVar12;
        uVar9 = uVar5 + (uVar12 < uVar11) + (uVar9 & 0xffff);
        if ((int) uVar9 < -0x8000) {
            uVar9 = 0xffff8000;
            uVar12 = 0;
        }
        if (0x7fff < (int) uVar9) {
            uVar9 = 0x7fff;
            uVar12 = 0xffffffff;
        }
        uVar9 = uVar9 & 0xffff;
    } else {
        uVar12 = uVar11 + uVar12;
        uVar9 = uVar5 + (uVar12 < uVar11) + uVar9;
    }
    param_2[6] = uVar10 << 0x10 | uVar13 >> 0x10;
    param_2[4] = uVar9 << 0x10 | uVar12 >> 0x10;
    uVar10 = param_2[8];
    uVar9 = uVar10 ^ uVar7;
    if ((int) uVar10 < 0) {
        uVar10 = -uVar10;
    }
    uVar5 = uVar7;
    if ((int) uVar7 < 0) {
        uVar5 = -uVar7;
    }
    uVar15 = (uVar5 & 0xffff) * (uVar10 & 0xffff);
    iVar4 = (uVar5 >> 0x10) * (uVar10 & 0xffff);
    iVar6 = 0;
    uVar1 = iVar4 + (uVar5 & 0xffff) * (uVar10 >> 0x10);
    if (iVar4 != 0) {
        iVar6 = 0x10000;
    }
    uVar14 = uVar15 + uVar1 * 0x10000;
    uVar10 = iVar6 + (uint)(uVar14 < uVar15) + (uVar1 >> 0x10) + (uVar5 >> 0x10) * (uVar10 >> 0x10);
    if ((int) uVar9 < 0) {
        uVar10 = ~uVar10;
        if (uVar14 == 0) {
            uVar10 = uVar10 + 1;
        } else {
            uVar14 = ~uVar14 + 1;
        }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
        if ((int) uVar10 < -0x8000) {
            uVar10 = 0xffff8000;
            uVar14 = 0;
        }
        if (0x7fff < (int) uVar10) {
            uVar10 = 0x7fff;
            uVar14 = 0xffffffff;
        }
        uVar10 = uVar10 & 0xffff;
    }
    uVar9 = param_2[10];
    uVar5 = uVar9 ^ uVar8;
    if ((int) uVar9 < 0) {
        uVar9 = -uVar9;
    }
    uVar1 = uVar8;
    if ((int) uVar8 < 0) {
        uVar1 = -uVar8;
    }
    uVar11 = (uVar1 & 0xffff) * (uVar9 & 0xffff);
    iVar4 = (uVar1 >> 0x10) * (uVar9 & 0xffff);
    iVar6 = 0;
    uVar15 = iVar4 + (uVar1 & 0xffff) * (uVar9 >> 0x10);
    if (iVar4 != 0) {
        iVar6 = 0x10000;
    }
    uVar13 = uVar11 + uVar15 * 0x10000;
    uVar9 = iVar6 + (uint)(uVar13 < uVar11) + (uVar15 >> 0x10) + (uVar1 >> 0x10) * (uVar9 >> 0x10);
    if ((int) uVar5 < 0) {
        uVar9 = ~uVar9;
        if (uVar13 == 0) {
            uVar9 = uVar9 + 1;
        } else {
            uVar13 = ~uVar13 + 1;
        }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
        uVar13 = uVar14 + uVar13;
        uVar10 = uVar9 + (uVar13 < uVar14) + (uVar10 & 0xffff);
        if ((int) uVar10 < -0x8000) {
            uVar10 = 0xffff8000;
            uVar13 = 0;
        }
        if (0x7fff < (int) uVar10) {
            uVar10 = 0x7fff;
            uVar13 = 0xffffffff;
        }
        uVar10 = uVar10 & 0xffff;
    } else {
        uVar13 = uVar14 + uVar13;
        uVar10 = uVar9 + (uVar13 < uVar14) + uVar10;
    }
    uVar9 = param_2[8];
    uVar5 = uVar9 ^ uVar8;
    if ((int) uVar9 < 0) {
        uVar9 = -uVar9;
    }
    if ((int) uVar8 < 0) {
        uVar8 = -uVar8;
    }
    uVar15 = (uVar8 & 0xffff) * (uVar9 & 0xffff);
    iVar4 = (uVar8 >> 0x10) * (uVar9 & 0xffff);
    iVar6 = 0;
    uVar1 = iVar4 + (uVar8 & 0xffff) * (uVar9 >> 0x10);
    if (iVar4 != 0) {
        iVar6 = 0x10000;
    }
    uVar14 = uVar15 + uVar1 * 0x10000;
    uVar8 = iVar6 + (uint)(uVar14 < uVar15) + (uVar1 >> 0x10) + (uVar8 >> 0x10) * (uVar9 >> 0x10);
    if ((int) uVar5 < 0) {
        uVar8 = ~uVar8;
        if (uVar14 == 0) {
            uVar8 = uVar8 + 1;
        } else {
            uVar14 = ~uVar14 + 1;
        }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
        if ((int) uVar8 < -0x8000) {
            uVar8 = 0xffff8000;
            uVar14 = 0;
        }
        if (0x7fff < (int) uVar8) {
            uVar8 = 0x7fff;
            uVar14 = 0xffffffff;
        }
        uVar8 = uVar8 & 0xffff;
    }
    uVar9 = param_2[10];
    uVar5 = uVar9 ^ uVar2;
    if ((int) uVar9 < 0) {
        uVar9 = -uVar9;
    }
    if (0 < (int) uVar7) {
        uVar2 = uVar7;
    }
    uVar1 = (uVar2 & 0xffff) * (uVar9 & 0xffff);
    iVar4 = (uVar2 >> 0x10) * (uVar9 & 0xffff);
    iVar6 = 0;
    uVar7 = iVar4 + (uVar2 & 0xffff) * (uVar9 >> 0x10);
    if (iVar4 != 0) {
        iVar6 = 0x10000;
    }
    uVar15 = uVar1 + uVar7 * 0x10000;
    uVar2 = iVar6 + (uint)(uVar15 < uVar1) + (uVar7 >> 0x10) + (uVar2 >> 0x10) * (uVar9 >> 0x10);
    if ((int) uVar5 < 0) {
        uVar2 = ~uVar2;
        if (uVar15 == 0) {
            uVar2 = uVar2 + 1;
        } else {
            uVar15 = ~uVar15 + 1;
        }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
        uVar15 = uVar14 + uVar15;
        uVar8 = uVar2 + (uVar15 < uVar14) + (uVar8 & 0xffff);
        if ((int) uVar8 < -0x8000) {
            uVar8 = 0xffff8000;
            uVar15 = 0;
        }
        if (0x7fff < (int) uVar8) {
            uVar8 = 0x7fff;
            uVar15 = 0xffffffff;
        }
        uVar8 = uVar8 & 0xffff;
    } else {
        uVar15 = uVar14 + uVar15;
        uVar8 = uVar2 + (uVar15 < uVar14) + uVar8;
    }
    param_2[10] = uVar10 << 0x10 | uVar13 >> 0x10;
    param_2[8] = uVar8 << 0x10 | uVar15 >> 0x10;
    return;
}

/**
 * 1 Symbol Reference count
 * From Location    Label           Subroutine      Access  From Preview
 * 0002fd58		                    LAB_00030000	Call	bsr FUN_0002ff1a
 */
void FUN_0002ff1a(uint param_1, uint *param_2) {
    uint uVar1;
    uint uVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    uint uVar6;
    uint uVar7;
    uint in_sr;
    uint uVar8;
    uint uVar9;
    uint uVar10;
    uint uVar11;
    uint uVar12;
    uint uVar13;
    uint uVar14;
    uint uVar15;

    iVar5 = ((int) DAT_0002ff96 & param_1) * 4;
    uVar6 = *(uint * )(DAT_0002ff9c + iVar5);
    uVar7 = *(uint * )(DAT_0002ffa0 + iVar5);
    uVar10 = -uVar6;
    uVar8 = *param_2;
    uVar9 = uVar8 ^ uVar10;
    if ((int) uVar8 < 0) {
        uVar8 = -uVar8;
    }
    uVar4 = uVar10;
    if (0 < (int) uVar6) {
        uVar4 = uVar6;
    }
    uVar14 = (uVar4 & 0xffff) * (uVar8 & 0xffff);
    iVar3 = (uVar4 >> 0x10) * (uVar8 & 0xffff);
    iVar5 = 0;
    uVar1 = iVar3 + (uVar4 & 0xffff) * (uVar8 >> 0x10);
    if (iVar3 != 0) {
        iVar5 = 0x10000;
    }
    uVar15 = uVar14 + uVar1 * 0x10000;
    uVar8 = iVar5 + (uint)(uVar15 < uVar14) + (uVar1 >> 0x10) + (uVar4 >> 0x10) * (uVar8 >> 0x10);
    if ((int) uVar9 < 0) {
        uVar8 = ~uVar8;
        if (uVar15 == 0) {
            uVar8 = uVar8 + 1;
        } else {
            uVar15 = ~uVar15 + 1;
        }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
        if ((int) uVar8 < -0x8000) {
            uVar8 = 0xffff8000;
            uVar15 = 0;
        }
        if (0x7fff < (int) uVar8) {
            uVar8 = 0x7fff;
            uVar15 = 0xffffffff;
        }
        uVar8 = uVar8 & 0xffff;
    }
    uVar9 = param_2[1];
    uVar4 = uVar9 ^ uVar7;
    if ((int) uVar9 < 0) {
        uVar9 = -uVar9;
    }
    uVar1 = uVar7;
    if ((int) uVar7 < 0) {
        uVar1 = -uVar7;
    }
    uVar13 = (uVar1 & 0xffff) * (uVar9 & 0xffff);
    iVar3 = (uVar1 >> 0x10) * (uVar9 & 0xffff);
    iVar5 = 0;
    uVar14 = iVar3 + (uVar1 & 0xffff) * (uVar9 >> 0x10);
    if (iVar3 != 0) {
        iVar5 = 0x10000;
    }
    uVar11 = uVar13 + uVar14 * 0x10000;
    uVar9 = iVar5 + (uint)(uVar11 < uVar13) + (uVar14 >> 0x10) + (uVar1 >> 0x10) * (uVar9 >> 0x10);
    if ((int) uVar4 < 0) {
        uVar9 = ~uVar9;
        if (uVar11 == 0) {
            uVar9 = uVar9 + 1;
        } else {
            uVar11 = ~uVar11 + 1;
        }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
        uVar11 = uVar15 + uVar11;
        uVar8 = uVar9 + (uVar11 < uVar15) + (uVar8 & 0xffff);
        if ((int) uVar8 < -0x8000) {
            uVar8 = 0xffff8000;
            uVar11 = 0;
        }
        if (0x7fff < (int) uVar8) {
            uVar8 = 0x7fff;
            uVar11 = 0xffffffff;
        }
        uVar8 = uVar8 & 0xffff;
    } else {
        uVar11 = uVar15 + uVar11;
        uVar8 = uVar9 + (uVar11 < uVar15) + uVar8;
    }
    uVar9 = *param_2;
    uVar4 = uVar9 ^ uVar7;
    if ((int) uVar9 < 0) {
        uVar9 = -uVar9;
    }
    uVar1 = uVar7;
    if ((int) uVar7 < 0) {
        uVar1 = -uVar7;
    }
    uVar15 = (uVar1 & 0xffff) * (uVar9 & 0xffff);
    iVar3 = (uVar1 >> 0x10) * (uVar9 & 0xffff);
    iVar5 = 0;
    uVar14 = iVar3 + (uVar1 & 0xffff) * (uVar9 >> 0x10);
    if (iVar3 != 0) {
        iVar5 = 0x10000;
    }
    uVar13 = uVar15 + uVar14 * 0x10000;
    uVar9 = iVar5 + (uint)(uVar13 < uVar15) + (uVar14 >> 0x10) + (uVar1 >> 0x10) * (uVar9 >> 0x10);
    if ((int) uVar4 < 0) {
        uVar9 = ~uVar9;
        if (uVar13 == 0) {
            uVar9 = uVar9 + 1;
        } else {
            uVar13 = ~uVar13 + 1;
        }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
        if ((int) uVar9 < -0x8000) {
            uVar9 = 0xffff8000;
            uVar13 = 0;
        }
        if (0x7fff < (int) uVar9) {
            uVar9 = 0x7fff;
            uVar13 = 0xffffffff;
        }
        uVar9 = uVar9 & 0xffff;
    }
    uVar4 = param_2[1];
    uVar1 = uVar4 ^ uVar6;
    if ((int) uVar4 < 0) {
        uVar4 = -uVar4;
    }
    uVar14 = uVar6;
    if ((int) uVar6 < 0) {
        uVar14 = -uVar6;
    }
    uVar2 = (uVar14 & 0xffff) * (uVar4 & 0xffff);
    iVar3 = (uVar14 >> 0x10) * (uVar4 & 0xffff);
    iVar5 = 0;
    uVar15 = iVar3 + (uVar14 & 0xffff) * (uVar4 >> 0x10);
    if (iVar3 != 0) {
        iVar5 = 0x10000;
    }
    uVar12 = uVar2 + uVar15 * 0x10000;
    uVar4 = iVar5 + (uint)(uVar12 < uVar2) + (uVar15 >> 0x10) + (uVar14 >> 0x10) * (uVar4 >> 0x10);
    if ((int) uVar1 < 0) {
        uVar4 = ~uVar4;
        if (uVar12 == 0) {
            uVar4 = uVar4 + 1;
        } else {
            uVar12 = ~uVar12 + 1;
        }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
        uVar12 = uVar13 + uVar12;
        uVar9 = uVar4 + (uVar12 < uVar13) + (uVar9 & 0xffff);
        if ((int) uVar9 < -0x8000) {
            uVar9 = 0xffff8000;
            uVar12 = 0;
        }
        if (0x7fff < (int) uVar9) {
            uVar9 = 0x7fff;
            uVar12 = 0xffffffff;
        }
        uVar9 = uVar9 & 0xffff;
    } else {
        uVar12 = uVar13 + uVar12;
        uVar9 = uVar4 + (uVar12 < uVar13) + uVar9;
    }
    param_2[1] = uVar8 << 0x10 | uVar11 >> 0x10;
    *param_2 = uVar9 << 0x10 | uVar12 >> 0x10;
    uVar8 = param_2[4];
    uVar9 = uVar8 ^ uVar10;
    if ((int) uVar8 < 0) {
        uVar8 = -uVar8;
    }
    uVar4 = uVar10;
    if (0 < (int) uVar6) {
        uVar4 = uVar6;
    }
    uVar14 = (uVar4 & 0xffff) * (uVar8 & 0xffff);
    iVar3 = (uVar4 >> 0x10) * (uVar8 & 0xffff);
    iVar5 = 0;
    uVar1 = iVar3 + (uVar4 & 0xffff) * (uVar8 >> 0x10);
    if (iVar3 != 0) {
        iVar5 = 0x10000;
    }
    uVar15 = uVar14 + uVar1 * 0x10000;
    uVar8 = iVar5 + (uint)(uVar15 < uVar14) + (uVar1 >> 0x10) + (uVar4 >> 0x10) * (uVar8 >> 0x10);
    if ((int) uVar9 < 0) {
        uVar8 = ~uVar8;
        if (uVar15 == 0) {
            uVar8 = uVar8 + 1;
        } else {
            uVar15 = ~uVar15 + 1;
        }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
        if ((int) uVar8 < -0x8000) {
            uVar8 = 0xffff8000;
            uVar15 = 0;
        }
        if (0x7fff < (int) uVar8) {
            uVar8 = 0x7fff;
            uVar15 = 0xffffffff;
        }
        uVar8 = uVar8 & 0xffff;
    }
    uVar9 = param_2[5];
    uVar4 = uVar9 ^ uVar7;
    if ((int) uVar9 < 0) {
        uVar9 = -uVar9;
    }
    uVar1 = uVar7;
    if ((int) uVar7 < 0) {
        uVar1 = -uVar7;
    }
    uVar13 = (uVar1 & 0xffff) * (uVar9 & 0xffff);
    iVar3 = (uVar1 >> 0x10) * (uVar9 & 0xffff);
    iVar5 = 0;
    uVar14 = iVar3 + (uVar1 & 0xffff) * (uVar9 >> 0x10);
    if (iVar3 != 0) {
        iVar5 = 0x10000;
    }
    uVar11 = uVar13 + uVar14 * 0x10000;
    uVar9 = iVar5 + (uint)(uVar11 < uVar13) + (uVar14 >> 0x10) + (uVar1 >> 0x10) * (uVar9 >> 0x10);
    if ((int) uVar4 < 0) {
        uVar9 = ~uVar9;
        if (uVar11 == 0) {
            uVar9 = uVar9 + 1;
        } else {
            uVar11 = ~uVar11 + 1;
        }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
        uVar11 = uVar15 + uVar11;
        uVar8 = uVar9 + (uVar11 < uVar15) + (uVar8 & 0xffff);
        if ((int) uVar8 < -0x8000) {
            uVar8 = 0xffff8000;
            uVar11 = 0;
        }
        if (0x7fff < (int) uVar8) {
            uVar8 = 0x7fff;
            uVar11 = 0xffffffff;
        }
        uVar8 = uVar8 & 0xffff;
    } else {
        uVar11 = uVar15 + uVar11;
        uVar8 = uVar9 + (uVar11 < uVar15) + uVar8;
    }
    uVar9 = param_2[4];
    uVar4 = uVar9 ^ uVar7;
    if ((int) uVar9 < 0) {
        uVar9 = -uVar9;
    }
    uVar1 = uVar7;
    if ((int) uVar7 < 0) {
        uVar1 = -uVar7;
    }
    uVar15 = (uVar1 & 0xffff) * (uVar9 & 0xffff);
    iVar3 = (uVar1 >> 0x10) * (uVar9 & 0xffff);
    iVar5 = 0;
    uVar14 = iVar3 + (uVar1 & 0xffff) * (uVar9 >> 0x10);
    if (iVar3 != 0) {
        iVar5 = 0x10000;
    }
    uVar13 = uVar15 + uVar14 * 0x10000;
    uVar9 = iVar5 + (uint)(uVar13 < uVar15) + (uVar14 >> 0x10) + (uVar1 >> 0x10) * (uVar9 >> 0x10);
    if ((int) uVar4 < 0) {
        uVar9 = ~uVar9;
        if (uVar13 == 0) {
            uVar9 = uVar9 + 1;
        } else {
            uVar13 = ~uVar13 + 1;
        }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
        if ((int) uVar9 < -0x8000) {
            uVar9 = 0xffff8000;
            uVar13 = 0;
        }
        if (0x7fff < (int) uVar9) {
            uVar9 = 0x7fff;
            uVar13 = 0xffffffff;
        }
        uVar9 = uVar9 & 0xffff;
    }
    uVar4 = param_2[5];
    uVar1 = uVar4 ^ uVar6;
    if ((int) uVar4 < 0) {
        uVar4 = -uVar4;
    }
    uVar14 = uVar6;
    if ((int) uVar6 < 0) {
        uVar14 = -uVar6;
    }
    uVar2 = (uVar14 & 0xffff) * (uVar4 & 0xffff);
    iVar3 = (uVar14 >> 0x10) * (uVar4 & 0xffff);
    iVar5 = 0;
    uVar15 = iVar3 + (uVar14 & 0xffff) * (uVar4 >> 0x10);
    if (iVar3 != 0) {
        iVar5 = 0x10000;
    }
    uVar12 = uVar2 + uVar15 * 0x10000;
    uVar4 = iVar5 + (uint)(uVar12 < uVar2) + (uVar15 >> 0x10) + (uVar14 >> 0x10) * (uVar4 >> 0x10);
    if ((int) uVar1 < 0) {
        uVar4 = ~uVar4;
        if (uVar12 == 0) {
            uVar4 = uVar4 + 1;
        } else {
            uVar12 = ~uVar12 + 1;
        }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
        uVar12 = uVar13 + uVar12;
        uVar9 = uVar4 + (uVar12 < uVar13) + (uVar9 & 0xffff);
        if ((int) uVar9 < -0x8000) {
            uVar9 = 0xffff8000;
            uVar12 = 0;
        }
        if (0x7fff < (int) uVar9) {
            uVar9 = 0x7fff;
            uVar12 = 0xffffffff;
        }
        uVar9 = uVar9 & 0xffff;
    } else {
        uVar12 = uVar13 + uVar12;
        uVar9 = uVar4 + (uVar12 < uVar13) + uVar9;
    }
    param_2[5] = uVar8 << 0x10 | uVar11 >> 0x10;
    param_2[4] = uVar9 << 0x10 | uVar12 >> 0x10;
    uVar8 = param_2[8];
    uVar9 = uVar8 ^ uVar10;
    if ((int) uVar8 < 0) {
        uVar8 = -uVar8;
    }
    if (0 < (int) uVar6) {
        uVar10 = uVar6;
    }
    uVar1 = (uVar10 & 0xffff) * (uVar8 & 0xffff);
    iVar3 = (uVar10 >> 0x10) * (uVar8 & 0xffff);
    iVar5 = 0;
    uVar4 = iVar3 + (uVar10 & 0xffff) * (uVar8 >> 0x10);
    if (iVar3 != 0) {
        iVar5 = 0x10000;
    }
    uVar14 = uVar1 + uVar4 * 0x10000;
    uVar10 = iVar5 + (uint)(uVar14 < uVar1) + (uVar4 >> 0x10) + (uVar10 >> 0x10) * (uVar8 >> 0x10);
    if ((int) uVar9 < 0) {
        uVar10 = ~uVar10;
        if (uVar14 == 0) {
            uVar10 = uVar10 + 1;
        } else {
            uVar14 = ~uVar14 + 1;
        }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
        if ((int) uVar10 < -0x8000) {
            uVar10 = 0xffff8000;
            uVar14 = 0;
        }
        if (0x7fff < (int) uVar10) {
            uVar10 = 0x7fff;
            uVar14 = 0xffffffff;
        }
        uVar10 = uVar10 & 0xffff;
    }
    uVar8 = param_2[9];
    uVar9 = uVar8 ^ uVar7;
    if ((int) uVar8 < 0) {
        uVar8 = -uVar8;
    }
    uVar4 = uVar7;
    if ((int) uVar7 < 0) {
        uVar4 = -uVar7;
    }
    uVar15 = (uVar4 & 0xffff) * (uVar8 & 0xffff);
    iVar3 = (uVar4 >> 0x10) * (uVar8 & 0xffff);
    iVar5 = 0;
    uVar1 = iVar3 + (uVar4 & 0xffff) * (uVar8 >> 0x10);
    if (iVar3 != 0) {
        iVar5 = 0x10000;
    }
    uVar13 = uVar15 + uVar1 * 0x10000;
    uVar8 = iVar5 + (uint)(uVar13 < uVar15) + (uVar1 >> 0x10) + (uVar4 >> 0x10) * (uVar8 >> 0x10);
    if ((int) uVar9 < 0) {
        uVar8 = ~uVar8;
        if (uVar13 == 0) {
            uVar8 = uVar8 + 1;
        } else {
            uVar13 = ~uVar13 + 1;
        }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
        uVar13 = uVar14 + uVar13;
        uVar10 = uVar8 + (uVar13 < uVar14) + (uVar10 & 0xffff);
        if ((int) uVar10 < -0x8000) {
            uVar10 = 0xffff8000;
            uVar13 = 0;
        }
        if (0x7fff < (int) uVar10) {
            uVar10 = 0x7fff;
            uVar13 = 0xffffffff;
        }
        uVar10 = uVar10 & 0xffff;
    } else {
        uVar13 = uVar14 + uVar13;
        uVar10 = uVar8 + (uVar13 < uVar14) + uVar10;
    }
    uVar8 = param_2[8];
    uVar9 = uVar8 ^ uVar7;
    if ((int) uVar8 < 0) {
        uVar8 = -uVar8;
    }
    if ((int) uVar7 < 0) {
        uVar7 = -uVar7;
    }
    uVar1 = (uVar7 & 0xffff) * (uVar8 & 0xffff);
    iVar3 = (uVar7 >> 0x10) * (uVar8 & 0xffff);
    iVar5 = 0;
    uVar4 = iVar3 + (uVar7 & 0xffff) * (uVar8 >> 0x10);
    if (iVar3 != 0) {
        iVar5 = 0x10000;
    }
    uVar14 = uVar1 + uVar4 * 0x10000;
    uVar7 = iVar5 + (uint)(uVar14 < uVar1) + (uVar4 >> 0x10) + (uVar7 >> 0x10) * (uVar8 >> 0x10);
    if ((int) uVar9 < 0) {
        uVar7 = ~uVar7;
        if (uVar14 == 0) {
            uVar7 = uVar7 + 1;
        } else {
            uVar14 = ~uVar14 + 1;
        }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
        if ((int) uVar7 < -0x8000) {
            uVar7 = 0xffff8000;
            uVar14 = 0;
        }
        if (0x7fff < (int) uVar7) {
            uVar7 = 0x7fff;
            uVar14 = 0xffffffff;
        }
        uVar7 = uVar7 & 0xffff;
    }
    uVar8 = param_2[9];
    uVar9 = uVar8 ^ uVar6;
    if ((int) uVar8 < 0) {
        uVar8 = -uVar8;
    }
    if ((int) uVar6 < 0) {
        uVar6 = -uVar6;
    }
    uVar1 = (uVar6 & 0xffff) * (uVar8 & 0xffff);
    iVar3 = (uVar6 >> 0x10) * (uVar8 & 0xffff);
    iVar5 = 0;
    uVar4 = iVar3 + (uVar6 & 0xffff) * (uVar8 >> 0x10);
    if (iVar3 != 0) {
        iVar5 = 0x10000;
    }
    uVar15 = uVar1 + uVar4 * 0x10000;
    uVar6 = iVar5 + (uint)(uVar15 < uVar1) + (uVar4 >> 0x10) + (uVar6 >> 0x10) * (uVar8 >> 0x10);
    if ((int) uVar9 < 0) {
        uVar6 = ~uVar6;
        if (uVar15 == 0) {
            uVar6 = uVar6 + 1;
        } else {
            uVar15 = ~uVar15 + 1;
        }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
        uVar15 = uVar14 + uVar15;
        uVar7 = uVar6 + (uVar15 < uVar14) + (uVar7 & 0xffff);
        if ((int) uVar7 < -0x8000) {
            uVar7 = 0xffff8000;
            uVar15 = 0;
        }
        if (0x7fff < (int) uVar7) {
            uVar7 = 0x7fff;
            uVar15 = 0xffffffff;
        }
        uVar7 = uVar7 & 0xffff;
    } else {
        uVar15 = uVar14 + uVar15;
        uVar7 = uVar6 + (uVar15 < uVar14) + uVar7;
    }
    param_2[9] = uVar10 << 0x10 | uVar13 >> 0x10;
    param_2[8] = uVar7 << 0x10 | uVar15 >> 0x10;
    return;
}
