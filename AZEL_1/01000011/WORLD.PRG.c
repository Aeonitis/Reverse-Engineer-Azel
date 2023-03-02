#include "WORLD.PRG.h"


int FUN_0000019c(int *param_1, undefined4 *param_2, int param_3) {
    int iVar1;
    int iVar2;
    int iVar3;

    if (param_3 == 0) {
        iVar3 = (int) DAT_0000028e;
        iVar1 = (int) DAT_00000290;
        iVar2 = (int) DAT_00000292;
    } else if (param_3 == 1) {
        iVar3 = (int) DAT_00000294;
        iVar1 = (int) DAT_00000296;
        iVar2 = (int) DAT_00000298;
    } else if (param_3 == 2) {
        iVar3 = (int) DAT_0000029a;
        iVar1 = (int) DAT_0000029c;
        iVar2 = (int) DAT_0000029e;
    } else {
        iVar1 = DAT_000002ac;
        if (param_3 == 3) {
            iVar2 = (int) DAT_00000298;
            iVar3 = 0x28;
        } else if (param_3 == 4) {
            iVar3 = (int) DAT_000002a0;
            iVar2 = (int) DAT_0000029e;
        } else {
            if (param_3 != 5) {
                return param_3;
            }
            iVar3 = 0x51;
            iVar2 = (int) DAT_000002a4;
            iVar1 = (int) DAT_000002a2;
        }
    }
    iVar1 = (*DAT_000002a8)(*param_1, *param_2, iVar2, iVar1, iVar3);
    *param_1 = iVar1;
    return iVar1;
}


void FUN_00000216(int param_1, int param_2, undefined4 param_3) {
    FUN_0000019c();
    FUN_0000019c(param_1 + 4, param_2 + 4, param_3);
    FUN_0000019c(param_1 + 8, param_2 + 8, param_3);
    return;
}


int FUN_00000246(int *param_1, undefined4 *param_2, int *param_3) {
    int local_14;
    undefined4 *puStack16;

    puStack16 = param_2;
    local_14 = (*DAT_000002a8)(*param_1, *param_2, (int) DAT_0000029e, DAT_000002ac, 0x28);
    local_14 = local_14 - *param_1;
    if (local_14 < 0) {
        if (local_14 < *param_3) {
            local_14 = FUN_0000019c(param_3, &local_14, 3);
            goto LAB_000002b8;
        }
    } else if (*param_3 < local_14) {
        local_14 = FUN_0000019c(param_3, &local_14, 3);
        goto LAB_000002b8;
    }
    *param_3 = local_14;
    LAB_000002b8:
    *param_1 = *param_1 + *param_3;
    return local_14;
}


void FUN_000002ca(int param_1, int param_2, int param_3, undefined4 param_4) {
    FUN_00000246();
    FUN_00000246(param_1 + 4, param_2 + 4, param_3 + 4, param_4);
    FUN_00000246(param_1 + 8, param_2 + 8, param_3 + 8, param_4);
    return;
}


int FUN_00000308(int param_1, int param_2, undefined4 param_3, undefined4 param_4) {
    code *pcVar1;
    code *pcVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    undefined4 *puVar11;
    int iVar12;
    undefined4 uVar13;

    pcVar1 = DAT_00000408;
    iVar12 = *(int *) (param_1 + 8);
    iVar4 = (int) *(short *) (iVar12 + 0x18);
    if (iVar4 == 1) {
        iVar4 = (int) DAT_000003ea;
        iVar5 = (*DAT_00000408)((int) DAT_000003ec);
        if (iVar5 != 0) {
            *(int *) (param_1 + DAT_000003ee) = *(int *) (param_1 + DAT_000003ee) + iVar4;
        }
        iVar6 = (*pcVar1)((int) DAT_000003f0);
        if (iVar6 != 0) {
            *(int *) (param_1 + DAT_000003ee) = *(int *) (param_1 + DAT_000003ee) - iVar4;
        }
        iVar7 = (*pcVar1)((int) DAT_000003f2);
        if (iVar7 != 0) {
            *(int *) (param_1 + DAT_000003f4) = *(int *) (param_1 + DAT_000003f4) - iVar4;
        }
        iVar8 = (*pcVar1)((int) DAT_000003f6);
        if (iVar8 != 0) {
            *(int *) (param_1 + DAT_000003f4) = *(int *) (param_1 + DAT_000003f4) + iVar4;
        }
        iVar9 = (*pcVar1)((int) DAT_000003f8);
        if (iVar9 != 0) {
            *(int *) (param_1 + DAT_000003fa) = *(int *) (param_1 + DAT_000003fa) + iVar4;
        }
        iVar10 = (*pcVar1)((int) DAT_000003fc);
        if (iVar10 != 0) {
            *(int *) (param_1 + DAT_000003fa) = *(int *) (param_1 + DAT_000003fa) - iVar4;
        }
        iVar4 = (*pcVar1)((int) DAT_000003f4);
        if (iVar4 != 0) {
            *(int *) (param_1 + DAT_000003fe) = *(int *) (param_1 + DAT_000003fe) + (int) DAT_00000400;
        }
        iVar4 = (*pcVar1)((int) DAT_00000402);
        if (iVar4 != 0) {
            iVar4 = (int) DAT_000003fe;
            *(int *) (param_1 + iVar4) = *(int *) (param_1 + iVar4) - (int) DAT_00000400;
        }
        if ((iVar10 != 0 || (iVar9 != 0 || (iVar8 != 0 || (iVar7 != 0 || (iVar6 != 0 || iVar5 != 0)))))
            && (param_2 != 0)) {
            puVar11 = DAT_0000040c;
            if (*(int *) (param_1 + DAT_00000404) != 6) {
                puVar11 = (undefined4 *)
                        (*(int *) (param_1 + DAT_000004c6) * 0x24 + *(int *) (*(int *) (iVar12 + 0xc) + 0x10)
                         + 0x14);
            }
            iVar4 = (int) DAT_000004c8;
            *puVar11 = *(undefined4 *) (param_1 + iVar4);
            puVar11[1] = *(undefined4 *) (param_1 + iVar4 + 4);
            iVar4 = iVar4 + 8;
            puVar11[2] = *(undefined4 *) (param_1 + iVar4);
        }
        pcVar1 = DAT_000004dc;
        if (*DAT_000004d8 != 0) {
            (*DAT_000004dc)(2, 0xd);
            pcVar2 = DAT_000004e0;
            uVar13 = DAT_000004e4;
            (*DAT_000004e0)();
            pcVar3 = DAT_000004e8;
            (*DAT_000004e8)(*(undefined4 *) (param_1 + DAT_000004ca));
            (*pcVar1)(2, 0xe, param_3, param_4, uVar13);
            uVar13 = DAT_000004ec;
            (*pcVar2)();
            (*pcVar3)(*(undefined4 *) (param_1 + DAT_000004cc));
            (*pcVar1)(2, 0xf, param_3, param_4, uVar13);
            uVar13 = DAT_000004f0;
            (*pcVar2)();
            (*pcVar3)(*(undefined4 *) (param_1 + DAT_000004ce));
            (*pcVar1)(2, 0x10, param_3, param_4, uVar13);
            uVar13 = DAT_000004f4;
            (*pcVar2)();
            (*DAT_000004f8)(*(undefined4 *) (param_1 + DAT_000004d0));
            (*pcVar1)(2, 0x11, param_3, param_4, uVar13);
            uVar13 = DAT_000004fc;
            (*pcVar2)();
            (*DAT_000004f8)(*(undefined4 *) (param_1 + DAT_000004d2));
            (*pcVar1)(2, 0x12, param_3, param_4, uVar13);
            (*pcVar2)();
            iVar4 = (*pcVar3)(*(undefined4 *) (param_1 + DAT_000004d4));
        }
    }
    return iVar4;
}


void FUN_000005da(int param_1) {
    *(undefined4 *) (param_1 + 0xa0) = *(undefined4 *) (param_1 + 0x5c);
    *(undefined4 *) (param_1 + 0xa4) = *(undefined4 *) (param_1 + 0x60);
    *(undefined4 *) (param_1 + 0xa8) = *(undefined4 *) (param_1 + 100);
    return;
}


void FUN_000005f4(int param_1) {
    undefined4 *puVar1;
    int iVar2;

    iVar2 = *(int *) (*(int *) (param_1 + 8) + 0x14);
    puVar1 = (undefined4 *) (DAT_0000062c + param_1);
    *puVar1 = *(undefined4 *) (iVar2 + 8);
    puVar1[1] = *(undefined4 *) (iVar2 + 0xc);
    puVar1[2] = *(undefined4 *) (iVar2 + 0x10);
    *(int *) (param_1 + DAT_0000062e) = *(int *) (param_1 + DAT_0000062e) - (int) DAT_00000630;
    return;
}


void FUN_00000644(int param_1) {
    int iVar1;
    int iVar2;
    int iVar3;

    iVar3 = *(int *) (*(int *) (*(int *) (param_1 + 8) + 0xc) + 0x10);
    *(undefined4 *) (param_1 + 0x5c) =
            *(undefined4 *) (*(int *) (param_1 + DAT_000007aa) * 0x24 + iVar3 + 8);
    *(undefined4 *) (param_1 + 0x60) =
            *(undefined4 *) (*(int *) (param_1 + DAT_000007aa) * 0x24 + iVar3 + 0xc);
    *(undefined4 *) (param_1 + 100) =
            *(undefined4 *) (*(int *) (param_1 + DAT_000007aa) * 0x24 + iVar3 + 0x10);
    FUN_000005da(param_1);
    *(undefined4 *) (param_1 + 0xb8) = *(undefined4 *) (param_1 + 0x5c);
    *(undefined4 *) (param_1 + 0xbc) = *(undefined4 *) (param_1 + 0x60);
    *(undefined4 *) (param_1 + 0xc0) = *(undefined4 *) (param_1 + 100);
    *(undefined4 *) (param_1 + DAT_000007ac) =
            *(undefined4 *) (*(int *) (param_1 + DAT_000007aa) * 0x24 + iVar3 + 8);
    *(undefined4 *) (param_1 + DAT_000007ae) =
            *(undefined4 *) (*(int *) (param_1 + DAT_000007aa) * 0x24 + iVar3 + 0xc);
    iVar2 = DAT_000007bc;
    iVar1 = (int) DAT_000007b0;
    *(undefined4 *) (param_1 + iVar1) =
            *(undefined4 *) (*(int *) (param_1 + DAT_000007aa) * 0x24 + iVar3 + 0x10);
    *(int *) (param_1 + iVar1 + -4) = *(int *) (param_1 + iVar1 + -4) + iVar2;
    iVar2 = (int) DAT_000007b4;
    *(int *) (param_1 + iVar1) = *(int *) (param_1 + iVar1) + (int) DAT_000007b2;
    *(undefined4 *) (iVar2 + param_1) = *(undefined4 *) (param_1 + iVar1 + -8);
    iVar2 = (int) DAT_000007ae;
    *(undefined4 *) (param_1 + iVar2 + 0x18) = *(undefined4 *) (param_1 + iVar2);
    *(undefined4 *) (param_1 + iVar2 + 0x1c) = *(undefined4 *) (param_1 + iVar2 + 4);
    *(undefined4 *) (param_1 + 0x70) = 0;
    *(undefined4 *) (param_1 + 0x6c) = 0;
    *(undefined4 *) (param_1 + 0x68) = 0;
    *(undefined4 *) (param_1 + 0x78) = 0;
    *(undefined4 *) (param_1 + 0x90) = 0;
    *(undefined4 *) (param_1 + 0x8c) = 0;
    *(undefined4 *) (param_1 + 0x88) = 0;
    return;
}


void FUN_00000746(int param_1) {
    undefined4 *puVar1;
    undefined4 *puVar2;
    int iVar3;

    puVar1 = DAT_000007c0;
    iVar3 = (int) DAT_000007ac;
    *(undefined4 *) (param_1 + iVar3) = *DAT_000007c0;
    puVar2 = DAT_000007c0;
    *(undefined4 *) (param_1 + iVar3 + 4) = puVar1[1];
    puVar1 = DAT_000007c4;
    *(undefined4 *) (param_1 + iVar3 + 8) = puVar2[2];
    *(undefined4 *) (param_1 + iVar3 + 0xc) = *puVar1;
    *(undefined4 *) (param_1 + iVar3 + 0x10) = puVar1[1];
    *(undefined4 *) (param_1 + iVar3 + 0x14) = puVar1[2];
    return;
}


int FUN_00000776(int param_1) {
    short sVar1;
    int iVar2;

    sVar1 = DAT_000007b8;
    if (*(int *) (param_1 + DAT_000007b6) == 1) {
        iVar2 = (int) DAT_000007b8;
        *(byte * )(param_1 + iVar2) = *(byte * )(param_1 + iVar2) | 4;
        *(byte * )(param_1 + iVar2) = *(byte * )(param_1 + iVar2) | 1;
    } else {
        iVar2 = (int) DAT_000007b8;
        *(byte * )(param_1 + iVar2) = *(byte * )(param_1 + iVar2) & 0xfb;
        *(byte * )(param_1 + iVar2) = *(byte * )(param_1 + iVar2) | 2;
    }
    return (int) sVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000007c8(int param_1) {
    code *pcVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    undefined auStack84[12];
    int local_48;
    int iStack68;
    int iStack64;
    undefined auStack60[52];

    iVar3 = *(int *) (*(int *) (*(int *) (param_1 + 8) + 0xc) + 0x10);
    if ('\x02' < *(char *) (param_1 + DAT_0000089a)) {
        *(undefined *) (param_1 + DAT_0000089a) = 3;
    }
    if (*(char *) (param_1 + DAT_0000089a) < -2) {
        *(undefined *) (param_1 + DAT_0000089a) = 0xfd;
    }
    iVar4 = *(char *) (param_1 + DAT_0000089a) * _LAB_000008a4;
    if (*(int *) (param_1 + DAT_0000089e) < iVar4) {
        iVar2 = (int) DAT_0000089e;
        *(int *) (param_1 + iVar2) = *(int *) (param_1 + iVar2) + (int) DAT_0000089c;
        if (iVar4 <= *(int *) (param_1 + iVar2)) {
            *(int *) (param_1 + DAT_0000089e) = iVar4;
        }
    } else {
        iVar2 = (int) DAT_0000089e;
        *(int *) (param_1 + iVar2) = *(int *) (param_1 + iVar2) - (int) DAT_0000089c;
        if (*(int *) (param_1 + iVar2) <= iVar4) {
            *(int *) (param_1 + DAT_0000089e) = iVar4;
        }
    }
    pcVar1 = DAT_000008a8;
    iVar4 = (int) DAT_000008a0;
    *(int *) (param_1 + iVar4) = *(int *) (param_1 + iVar4) + *(int *) (iVar4 + 4 + param_1);
    (*pcVar1)(auStack60);
    if (*(int *) (param_1 + DAT_000008a2) < 5) {
        iVar4 = (int) DAT_000009da;
        iVar2 = *(int *) (param_1 + iVar4) * 0x24 + iVar3;
        local_48 = *(int *) (iVar2 + 0x14) - *(int *) (iVar2 + 8);
        iVar2 = *(int *) (param_1 + iVar4) * 0x24 + iVar3;
        iStack68 = *(int *) (iVar2 + 0x18) - *(int *) (iVar2 + 0xc);
        iVar2 = *(int *) (param_1 + iVar4) * 0x24 + iVar3;
        iStack64 = *(int *) (iVar2 + 0x1c) - *(int *) (iVar2 + 0x10);
        (*DAT_000009ec)(*(int *) (param_1 + iVar4) * 0x24 + iVar3 + 8, auStack60);
    } else if (*(char *) (param_1 + DAT_0000089a) == '\0') {
        local_48 = *DAT_000008b0;
        iStack68 = DAT_000008b0[1];
        iStack64 = DAT_000008b0[2];
    } else {
        local_48 = *DAT_000008ac;
        iStack68 = DAT_000008ac[1];
        iStack64 = DAT_000008ac[2];
    }
    (*DAT_000009f0)(*(undefined4 *) (param_1 + DAT_000009dc), auStack60);
    (*DAT_000009f4)(&local_48, auStack84, auStack60);
    FUN_000002ca(DAT_000009e0 + param_1, auStack84, DAT_000009de + param_1, 4);
    return;
}


void FUN_00000950(int param_1) {
    int iVar1;
    int iVar2;
    int local_14;
    int iStack16;
    undefined4 uStack12;

    iVar1 = *(int *) (*(int *) (*(int *) (param_1 + 8) + 0xc) + 0x10);
    iVar2 = *(int *) (*(int *) (param_1 + DAT_000009da) * 0x24 + iVar1 + 8);
    local_14 = DAT_000009fc;
    if (*(int *) (param_1 + DAT_000009e2) < iVar2) {
        local_14 = DAT_000009f8;
    }
    local_14 = local_14 + iVar2;
    iStack16 = *(int *) (iVar1 + *(int *) (param_1 + DAT_000009da) * 0x24 + 0xc) + DAT_000009f8;
    uStack12 = *(undefined4 *) (param_1 + DAT_000009e4);
    FUN_000002ca(DAT_000009e0 + param_1, &local_14, DAT_000009de + param_1, 4);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000009b8(int param_1) {
    FUN_00000216(_LAB_000009e6 + param_1, DAT_000009e0 + param_1, 0);
    FUN_00000216(DAT_000009e8 + param_1, DAT_000009e2 + param_1, 1);
    return;
}


void FUN_00000a00(int param_1) {
    FUN_0000019c(DAT_00000a98 + param_1, DAT_00000a96 + param_1, 0);
    FUN_0000019c(DAT_00000a9c + param_1, DAT_00000a9a + param_1, 5);
    FUN_0000019c(DAT_00000aa0 + param_1, DAT_00000a9e + param_1, 0);
    FUN_00000216(DAT_00000aa4 + param_1, DAT_00000aa2 + param_1, 1);
    return;
}


void FUN_00000a3a(int param_1) {
    FUN_0000019c(DAT_00000a98 + param_1, DAT_00000aa4 + param_1, 1);
    FUN_0000019c(DAT_00000a9c + param_1, DAT_00000aa6 + param_1, 0);
    FUN_0000019c(DAT_00000aa0 + param_1, DAT_00000aa8 + param_1, 1);
    FUN_00000216(DAT_00000aa4 + param_1, DAT_00000aa2 + param_1, 1);
    return;
}


void FUN_00000a74(int param_1) {
    FUN_00000216(DAT_00000a98 + param_1, DAT_00000a96 + param_1, 2);
    FUN_00000216(DAT_00000aa4 + param_1, DAT_00000aa2 + param_1, 2);
    return;
}


void FUN_00000aaa(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4) {
    code *pcVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    undefined2 uStack36;
    undefined2 uStack34;
    undefined2 uStack32;
    int local_1c;
    int iStack24;
    int iStack20;

    iVar3 = (int) DAT_00000b98;
    local_1c = *(int *) (param_1 + iVar3 + 0xc) - *(int *) (param_1 + iVar3);
    iStack24 = *(int *) (param_1 + iVar3 + 0x10) - *(int *) (param_1 + iVar3 + 4);
    iStack20 = *(int *) (param_1 + iVar3 + 0x14) - *(int *) (param_1 + iVar3 + 8);
    iVar4 = (*DAT_00000ba4)(local_1c);
    iVar3 = iStack20;
    iVar5 = (*DAT_00000ba4)(iStack20);
    iVar4 = (*DAT_00000ba8)((iVar4 + iVar5) * 0x10);
    iVar4 = (*DAT_00000bac)(iVar4 >> 4, iStack24);
    pcVar1 = DAT_00000bac;
    *(int *) (DAT_00000b9a + param_1) = DAT_00000bb0 - iVar4;
    iVar4 = (*pcVar1)(iStack20, local_1c);
    uVar2 = DAT_00000bb8;
    iVar5 = (int) DAT_00000b98;
    *(int *) (DAT_00000b9c + param_1) = DAT_00000bb4 - iVar4;
    iVar4 = (int) DAT_00000b9e;
    *(undefined4 *) (param_1 + iVar4) = 0;
    uStack36 = (undefined2) ((uint) * (undefined4 *) (param_1 + iVar4 + -8) >> 0x10);
    uStack34 = (undefined2) ((uint) * (undefined4 *) (param_1 + DAT_00000b9c) >> 0x10);
    uStack32 = (undefined2) ((uint) * (undefined4 *) (param_1 + DAT_00000b9e) >> 0x10);
    (*DAT_00000bbc)(uVar2, iVar5 + param_1, &uStack36, param_4, iVar3);
    return;
}


void FUN_00000b6e(int param_1) {
    char cVar1;
    ushort uVar2;
    undefined4 uVar3;
    char cVar5;
    int iVar4;
    int iVar6;
    char *pcVar7;
    uint uVar8;
    char *pcVar9;
    char *pcVar10;
    char local_38[12];
    undefined4 uStack44;
    undefined4 uStack40;
    undefined4 uStack36;
    int iStack32;
    undefined4 uStack28;
    int iStack24;

    pcVar7 = local_38;
    pcVar9 = local_38;
    if ((*(byte * )(param_1 + DAT_00000ba0) & 0x40) == 0) {
        iVar6 = *(int *) (param_1 + DAT_00000d10) + -1;
        *(int *) (param_1 + DAT_00000d10) = iVar6;
        if (iVar6 < 0) {
            *(undefined4 *) (param_1 + DAT_00000d10) = 0;
        }
    } else {
        iVar6 = *(int *) (param_1 + DAT_00000ba2) + 1;
        *(int *) (param_1 + DAT_00000ba2) = iVar6;
        if (0x1f < iVar6) {
            *(undefined4 *) (param_1 + DAT_00000ba2) = 0x1f;
        }
    }
    iVar6 = 0xc;
    pcVar10 = DAT_00000d24;
    do {
        cVar1 = *pcVar10;
        cVar5 = (*DAT_00000d2c)();
        pcVar10 = pcVar10 + 1;
        *pcVar9 = cVar5 + cVar1;
        iVar6 = iVar6 + -1;
        pcVar9 = pcVar9 + 1;
    } while (iVar6 != 0);
    uVar8 = (uint) DAT_00000d12;
    *(uint * )(param_1 + DAT_00000d14) =
            ((int) pcVar7[2] & uVar8) << 0x10 | ((int) pcVar7[1] & uVar8) << 8 | (int) *pcVar7 & uVar8;
    *(uint * )(param_1 + DAT_00000d16) =
            ((int) pcVar7[5] & uVar8) << 0x10 | ((int) pcVar7[4] & uVar8) << 8 | (int) pcVar7[3] & uVar8;
    iVar6 = DAT_00000d34;
    uVar3 = DAT_00000d30;
    uVar2 = DAT_00000d1c;
    *(uint * )(param_1 + DAT_00000d18) =
            ((int) pcVar7[8] & uVar8) << 0x10 | ((int) pcVar7[7] & uVar8) << 8 | (int) pcVar7[6] & uVar8;
    iVar4 = (int) DAT_00000d1a;
    *(uint * )(param_1 + iVar4) =
            ((int) pcVar7[0xb] & uVar8) << 0x10 | ((int) pcVar7[10] & uVar8) << 8 | (int) pcVar7[9] & uVar8;
    iStack32 = (*DAT_00000d3c)(uVar3, *(undefined4 *)
                                       (iVar6 + (short) ((ushort) ((uint) * (undefined4 *)
                                               (param_1 + DAT_00000d1e) >>
                                                                        0x10) & uVar2) * 4),
                               *(undefined4 *)
                                       ((short) ((ushort) ((uint) * (undefined4 *) (param_1 + iVar4 + -0x10) >>
                                                                                                             0x10) &
                                                 uVar2) * 4 + DAT_00000d38));
    iStack32 = -iStack32;
    uStack28 = (*DAT_00000d40)(uVar3, *(undefined4 *)
            ((short) ((ushort) ((uint) * (undefined4 *) (param_1 + DAT_00000d1e)
                    >> 0x10) & uVar2) * 4 + DAT_00000d38));
    iStack24 = (*DAT_00000d3c)(uVar3, *(undefined4 *)
                                       (iVar6 + (short) ((ushort) ((uint) * (undefined4 *)
                                               (param_1 + DAT_00000d1e) >>
                                                                        0x10) & uVar2) * 4),
                               *(undefined4 *)
                                       (iVar6 + (short) ((ushort) ((uint) * (undefined4 *)
                                               (param_1 + DAT_00000d20) >> 0x10) &
                                                         uVar2) * 4));
    iStack24 = -iStack24;
    (*DAT_00000d44)(&iStack32, &uStack44);
    (*DAT_00000d48)(uStack44, uStack40, uStack36, *(undefined4 *) (param_1 + DAT_00000d14));
    iVar6 = (int) DAT_00000d1a;
    (*DAT_00000d4c)(*(undefined4 *) (param_1 + iVar6 + -8), *(undefined4 *) (param_1 + iVar6 + -4),
                    *(undefined4 *) (param_1 + iVar6));
    return;
}


int FUN_00000d82(int param_1) {
    int iVar1;
    int iVar2;
    int iVar3;

    *(int *) (param_1 + DAT_00000e54) = *(int *) (param_1 + DAT_00000e54) + 1;
    iVar2 = *(int *) (param_1 + DAT_00000e56) + 1;
    if (0xf < iVar2) {
        iVar2 = 0;
    }
    iVar3 = iVar2 * 0x10;
    *(undefined4 *) (DAT_00000e58 + param_1 + iVar3) = *(undefined4 *) (param_1 + 0x5c);
    *(undefined4 *) (DAT_00000e58 + param_1 + iVar3 + 4) = *(undefined4 *) (param_1 + 0x60);
    *(undefined4 *) (DAT_00000e58 + param_1 + iVar3 + 8) = *(undefined4 *) (param_1 + 100);
    iVar1 = (int) DAT_00000e56;
    *(undefined4 *) (iVar3 + DAT_00000e58 + param_1 + 0xc) = *(undefined4 *) (param_1 + 0x74);
    *(int *) (param_1 + iVar1) = iVar2;
    return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00000de0(int param_1) {
    char cVar1;
    int iVar2;
    undefined4 uVar3;
    int iVar4;
    int *piVar5;
    int iVar6;

    iVar6 = *(int *) (*(int *) (*(int *) (param_1 + 8) + 0xc) + 0x10);
    FUN_00000d82();
    if ((*(byte * )(param_1 + DAT_00000e50) & 2) == 0) {
        if ((*(byte * )(param_1 + _LAB_00000f28) & 1) != 0) {
            iVar4 = *(int *) (param_1 + _LAB_00000f2a) * 0x24 + iVar6;
            piVar5 = (int *) (iVar4 + 8);
            FUN_000002ca(param_1 + 0x5c, piVar5, param_1 + 0x68, 4);
            iVar2 = (*DAT_00000f30)(param_1 + 0x5c, piVar5);
            if (iVar2 < *(int *) (param_1 + _LAB_00000f2c)) {
                cVar1 = *(char *) (*(int *) (param_1 + _LAB_00000f2a) * 0x24 + iVar6 + 5);
                if ((cVar1 == '\0') || (cVar1 == '\x01')) {
                    iVar6 = *(int *) (param_1 + DAT_00000f2e) + 1;
                    *(int *) (param_1 + DAT_00000f2e) = iVar6;
                    if (0xc < iVar6) {
                        *(undefined4 *) (param_1 + DAT_00000f2e) = 0xc;
                    }
                } else {
                    iVar6 = *(int *) (param_1 + DAT_00000f2e) + -1;
                    *(int *) (param_1 + DAT_00000f2e) = iVar6;
                    if (iVar6 < 0) {
                        *(undefined4 *) (param_1 + DAT_00000f2e) = 0;
                    }
                }
            } else {
                iVar6 = *(int *) (param_1 + DAT_00000f2e) + -1;
                *(int *) (param_1 + DAT_00000f2e) = iVar6;
                if (iVar6 < 0) {
                    *(undefined4 *) (param_1 + DAT_00000f2e) = 0;
                }
            }
            if (((*(int *) (param_1 + 0x5c) == *piVar5) &&
                 (*(int *) (param_1 + 0x60) == *(int *) (iVar4 + 0xc))) &&
                (*(int *) (param_1 + 100) == *(int *) (iVar4 + 0x10))) {
                *(undefined4 *) (param_1 + DAT_00000f2e) = 0xc;
                *(byte * )(param_1 + _LAB_00000f28) = *(byte * )(param_1 + _LAB_00000f28) | 0x10;
            }
        }
    } else {
        *(undefined4 *) (param_1 + 0x5c) =
                *(undefined4 *) (*(int *) (param_1 + _LAB_00000e5a) * 0x24 + iVar6 + 8);
        *(undefined4 *) (param_1 + 0x60) =
                *(undefined4 *) (*(int *) (param_1 + _LAB_00000e5a) * 0x24 + iVar6 + 0xc);
        *(undefined4 *) (param_1 + 100) =
                *(undefined4 *) (*(int *) (param_1 + _LAB_00000e5a) * 0x24 + iVar6 + 0x10);
        *(undefined4 *) (param_1 + 0x80) = 0xc;
        *(byte * )(param_1 + DAT_00000e50) = *(byte * )(param_1 + DAT_00000e50) | 0x10;
    }
    if ((*(byte * )(param_1 + _LAB_00000f28) & 1) == 0) {
        uVar3 = (*DAT_00001040)(*(undefined4 *) (param_1 + 0x78), DAT_0000103c, (int) DAT_00001024,
                                DAT_00001038, DAT_00001034);
        *(undefined4 *) (param_1 + 0x78) = uVar3;
    } else {
        *(undefined4 *) (param_1 + 0x78) = DAT_00000f34;
    }
    *(int *) (param_1 + 0x74) = *(int *) (param_1 + 0x74) + *(int *) (param_1 + 0x78);
    if (*(char *) (*(int *) (*(int *) (param_1 + 8) + 0x14) + 0x3d) == '\0') {
        uVar3 = (*DAT_00001048)(*(undefined4 *) (param_1 + 0x7c), DAT_00001044, (int) DAT_00001028,
                                (int) DAT_00001026, 0x41);
    } else {
        uVar3 = (*DAT_00001050)(DAT_0000104c, *(undefined4 *) (param_1 + 0x7c));
    }
    *(undefined4 *) (param_1 + 0x7c) = uVar3;
    return;
}


void FUN_0000132a(int *param_1, int param_2) {
    short sVar1;
    int iVar2;
    int **ppiVar3;
    int iVar4;

    iVar4 = *(int *) (*(int *) (param_2 + 0xc) + 0x10);
    sVar1 = *(short *) (*(int *) (param_2 + 0xc) + 0x58);
    *param_1 = param_2;
    iVar4 = iVar4 + sVar1 * 0x24;
    param_1[2] = *(int *) (iVar4 + 8);
    param_1[3] = *(int *) (iVar4 + 0xc) + DAT_000013e0;
    iVar2 = DAT_000013e4;
    param_1[4] = *(int *) (iVar4 + 0x10);
    param_1[5] = 0;
    param_1[6] = iVar2;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[0xd] = (int) DAT_000013b0;
    param_1[0xe] = 0;
    ppiVar3 = DAT_000013e8;
    (*DAT_000013ec)(*DAT_000013e8 + 10);
    (*DAT_000013f0)(*ppiVar3 + 10,
                    *(undefined4 *) (**ppiVar3 + (int) *(short *) (param_1[0xe] * 2 + (*ppiVar3)[8])));
    (*DAT_000013f4)(*ppiVar3 + 0x1e);
    *(undefined *) (param_1 + 0xf) = 1;
    return;
}


void FUN_000013f8(int *param_1) {
    int iVar1;
    int iVar2;
    int local_20;
    int iStack28;
    int iStack24;
    int local_14;
    int iStack16;
    int iStack12;

    local_14 = param_1[2];
    iVar1 = *param_1;
    iVar2 = *(int *) (*(int *) (iVar1 + 0xc) + 0x10);
    iStack12 = param_1[4];
    local_20 = *(int *) (*(short *) (*(int *) (iVar1 + 0xc) + 0x58) * 0x24 + iVar2 + 8);
    iStack28 = *(int *) (*(short *) (*(int *) (iVar1 + 0xc) + 0x58) * 0x24 + iVar2 + 0xc);
    iStack24 = *(int *) (*(short *) (*(int *) (iVar1 + 0xc) + 0x58) * 0x24 + iVar2 + 0x10);
    if (*(char *) ((int) param_1 + 0x3d) == '\0') {
        param_1[0xb] = iStack28 + DAT_00001544;
    } else {
        param_1[0xb] = iStack28;
    }
    iStack16 = iStack28;
    iVar1 = (*DAT_00001548)(&local_14, &local_20);
    param_1[8] = iVar1;
    iVar1 = (*DAT_0000154c)((local_20 - local_14) * 4, (iStack24 - iStack12) * 4);
    param_1[9] = iVar1;
    return;
}


undefined4 FUN_000014a8(int *param_1, undefined4 param_2, undefined4 param_3) {
    undefined4 uVar1;
    int aiStack76[2];
    int iStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined4 uStack56;
    undefined auStack52[52];

    uStack60 = 0;
    uStack64 = 0;
    uStack56 = param_3;
    (*DAT_00001550)(auStack52);
    (*DAT_00001554)(param_2, auStack52);
    uVar1 = (*DAT_00001558)(&uStack64, aiStack76, auStack52);
    *param_1 = *param_1 + aiStack76[0];
    param_1[2] = param_1[2] + iStack68;
    return uVar1;
}


void FUN_000014fc(int param_1) {
    int iVar1;
    int iVar2;

    if (*(int *) (param_1 + 0x20) < DAT_0000155c) {
        if (*(int *) (param_1 + 0x28) < *(int *) (param_1 + 0x20) >> 4) {
            *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 0x28;
        } else {
            *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x20) >> 4;
        }
        if (*(int *) (param_1 + 0x20) < (int) DAT_00001540) {
            *(undefined *) (param_1 + 0x3d) = 1;
        }
    } else {
        iVar1 = *(int *) (param_1 + 0x28) + 0x28;
        *(int *) (param_1 + 0x28) = iVar1;
        if (DAT_00001666 <= iVar1) {
            *(int *) (param_1 + 0x28) = (int) DAT_00001666;
        }
    }
    FUN_000014a8(param_1 + 8, *(undefined4 *) (param_1 + 0x24), *(undefined4 *) (param_1 + 0x28));
    iVar2 = *(int *) (param_1 + 0x2c) - *(int *) (param_1 + 0xc);
    iVar1 = iVar2;
    if (iVar2 < 0) {
        iVar1 = -iVar2;
    }
    if (iVar1 < DAT_00001668) {
        *(int *) (param_1 + 0x30) = iVar2 >> 4;
    } else if (iVar2 < 0) {
        iVar2 = (int) DAT_0000166c;
        iVar1 = *(int *) (param_1 + 0x30) + -0x3d;
        *(int *) (param_1 + 0x30) = iVar1;
        if (iVar1 <= iVar2) {
            *(int *) (param_1 + 0x30) = iVar2;
        }
    } else {
        iVar1 = *(int *) (param_1 + 0x30) + 0x3d;
        *(int *) (param_1 + 0x30) = iVar1;
        if (DAT_0000166a <= iVar1) {
            *(int *) (param_1 + 0x30) = (int) DAT_0000166a;
        }
    }
    *(int *) (param_1 + 0xc) = *(int *) (param_1 + 0xc) + *(int *) (param_1 + 0x30);
    return;
}


undefined4 FUN_000015d0(int param_1) {
    if (*(int *) (param_1 + 0x20) < *(int *) (param_1 + 0x34)) {
        return *(undefined4 *) (param_1 + 0x18);
    }
    return *(undefined4 *) (param_1 + 0x24);
}


void FUN_000015e2(int param_1) {
    undefined4 uVar1;
    undefined4 uVar2;

    uVar2 = DAT_00001670;
    uVar1 = FUN_000015d0(param_1);
    uVar2 = (*DAT_00001678)(*(undefined4 *) (param_1 + 0x18), uVar1, (int) DAT_0000166e, DAT_00001674, uVar2
    );
    *(undefined4 *) (param_1 + 0x18) = uVar2;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00001606(int param_1) {
    short sVar1;
    int iVar2;
    int iVar3;

    iVar3 = *_LAB_0000167c;
    if (*(int *) (iVar3 + 0x58) == 0) {
        iVar2 = 0;
    } else {
        iVar2 = (int) *(short *) (*(int *) (iVar3 + 0x58) + 4);
    }
    if (iVar2 + -1 <= (int) *(short *) (iVar3 + 0x3e)) {
        iVar2 = *(int *) (param_1 + 4) + 1;
        sVar1 = **(short **) (*(int *) (iVar3 + 0x1c) * 4 + DAT_00001680 + *(int *) (iVar3 + 0xc) * 0x14);
        *(int *) (param_1 + 4) = iVar2;
        if (sVar1 <= iVar2) {
            *(undefined4 *) (param_1 + 4) = 0;
        }
    }
    (*DAT_00001684)(iVar3 + 0x28);
    // WARNING: Could not recover jumptable at 0x00001662. Too many branches
    // WARNING: Treating indirect jump as call
    (*DAT_00001688)(iVar3 + 0x78, iVar3 + 0x28);
    return;
}


undefined4 FUN_00001834(int param_1) {
    byte bVar1;
    code *pcVar2;
    code *pcVar3;
    int iVar4;
    byte *pbVar5;

    pcVar3 = DAT_00001920;
    pcVar2 = DAT_0000191c;
    if (*(short *) (*(int *) (param_1 + 8) + 0x18) == 7) {
        iVar4 = (*DAT_0000191c)((int) DAT_00001910);
        if (iVar4 != 0) {
            iVar4 = (*pcVar3)((int) DAT_00001910);
            if (iVar4 != 0) {
                *(undefined4 *) (param_1 + 0x28) = 0;
            }
            return 0;
        }
        iVar4 = (*pcVar2)((int) DAT_00001912);
        if (iVar4 != 0) {
            iVar4 = (*pcVar3)((int) DAT_00001912);
            if (iVar4 != 0) {
                *(undefined4 *) (param_1 + 0x28) = 0;
            }
            return 1;
        }
        iVar4 = (*pcVar2)((int) DAT_00001914);
        if (iVar4 != 0) {
            iVar4 = (*pcVar3)((int) DAT_00001914);
            if (iVar4 != 0) {
                *(undefined4 *) (param_1 + 0x28) = 0;
            }
            return 2;
        }
        iVar4 = (*pcVar2)((int) DAT_00001916);
        if (iVar4 != 0) {
            iVar4 = (*pcVar3)((int) DAT_00001916);
            if (iVar4 != 0) {
                *(undefined4 *) (param_1 + 0x28) = 0;
            }
            return 3;
        }
        iVar4 = (*pcVar2)((int) DAT_00001918);
        if (iVar4 != 0) {
            iVar4 = (*pcVar3)((int) DAT_00001918);
            if (iVar4 != 0) {
                *(undefined4 *) (param_1 + 0x28) = 0;
            }
            if (*(int *) (param_1 + 0x24) != 0) {
                return 0xffffffff;
            }
            return 4;
        }
        iVar4 = (*pcVar2)((int) DAT_0000191a);
        if (iVar4 != 0) {
            iVar4 = (*pcVar3)((int) DAT_0000191a);
            if (iVar4 == 0) {
                return 0xffffffff;
            }
            *(undefined4 *) (param_1 + 0x28) = 0;
            return 0xffffffff;
        }
    }
    pbVar5 = (byte * )(DAT_00001830 + 1);
    if (*(int *) (param_1 + 0x24) == 0) {
        if ((*(byte * )(DAT_00001830 + 3) & *(byte * )(DAT_0000182c + 9)) != 0) {
            return 0xffffffff;
        }
        if ((*pbVar5 & *(byte * )(DAT_0000182c + 9)) != 0) {
            return 4;
        }
        if ((*pbVar5 & *(byte * )(DAT_0000182c + 0xc)) != 0) {
            return 3;
        }
        if ((*pbVar5 & *(byte * )(DAT_0000182c + 8)) != 0) {
            return 2;
        }
        if ((*(byte * )(DAT_00001830 + 3) & *(byte * )(DAT_0000182c + 7)) != 0) {
            return 1;
        }
        bVar1 = *(byte * )(DAT_00001830 + 7) & *(byte * )(DAT_0000182c + 5);
    } else {
        if ((*pbVar5 & *(byte * )(DAT_0000182c + 0xc)) != 0) {
            return 0xffffffff;
        }
        if ((*(byte * )(DAT_00001830 + 7) & *(byte * )(DAT_0000182c + 0xf)) != 0) {
            return 3;
        }
        if ((*(byte * )(DAT_00001830 + 5) & *(byte * )(DAT_0000182c + 0xb)) != 0) {
            return 2;
        }
        if ((*pbVar5 & *(byte * )(DAT_0000182c + 5)) != 0) {
            return 1;
        }
        bVar1 = *(byte * )(DAT_00001830 + 4) & *(byte * )(DAT_0000182c + 4);
    }
    if (bVar1 == 0) {
        return 0xffffffff;
    }
    return 0;
}


void FUN_00001f0c(int param_1) {
    int iVar1;

    if (*(short *) (*(int *) (param_1 + 8) + 0x18) == 4) {
        iVar1 = (*DAT_00001ff0)((int) DAT_00001fea);
        if (iVar1 != 0) {
            *(int *) (param_1 + 0x14) = *(int *) (param_1 + 0x14) + (int) DAT_00001fec;
        }
        iVar1 = (*DAT_00001ff0)((int) DAT_00001fee);
        if (iVar1 != 0) {
            *(int *) (param_1 + 0x14) = *(int *) (param_1 + 0x14) - (int) DAT_00001fec;
        }
        if (*DAT_00001ff4 != 0) {
            (*DAT_00001ff8)(2, 5);
            (*DAT_00002000)();
            (*DAT_00002004)(*(undefined4 *) (param_1 + 0x14));
        }
    }
    if (*DAT_00001ff4 != 0) {
        (*DAT_00001ff8)(2, 0xfffffffe);
        // WARNING: Could not recover jumptable at 0x00001f84. Too many branches
        // WARNING: Treating indirect jump as call
        (*DAT_00002008)(*(undefined4 *) (param_1 + 0x68), 8);
        return;
    }
    return;
}


undefined4 FUN_00002194(int param_1) {
    if (((*(byte * )(DAT_00002240 + 6) & *(byte * )(DAT_0000223c + 7)) == 0) ||
        ((*(byte * )(DAT_00002240 + 7) & *(byte * )(DAT_0000223c + 0xb)) != 0)) {
        *(uint * )(param_1 + 0x68) = *(uint * )(param_1 + 0x68) & 0xfffffffb;
    } else {
        *(uint * )(param_1 + 0x68) = *(uint * )(param_1 + 0x68) | 4;
    }
    return 0x68;
}


undefined4 FUN_000021c6(int param_1) {
    if (((*DAT_00002244 & *(byte * )(DAT_0000223c + 8)) == 0) ||
        ((*DAT_00002244 & *(byte * )(DAT_0000223c + 9)) != 0)) {
        *(uint * )(param_1 + 0x68) = *(uint * )(param_1 + 0x68) & 0xfffffffe;
    } else {
        *(uint * )(param_1 + 0x68) = *(uint * )(param_1 + 0x68) | 1;
    }
    return 0x68;
}


undefined4 FUN_000021f4(int param_1) {
    if (((*(byte * )(DAT_00002240 + 1) & *(byte * )(DAT_0000223c + 9)) == 0) ||
        ((*(byte * )(DAT_00002240 + 2) & *(byte * )(DAT_0000223c + 0xc)) != 0)) {
        *(uint * )(param_1 + 0x68) = *(uint * )(param_1 + 0x68) & 0xfffffffd;
    } else {
        *(uint * )(param_1 + 0x68) = *(uint * )(param_1 + 0x68) | 2;
    }
    return 0x68;
}


undefined4 FUN_00002270(int param_1) {
    FUN_00002194();
    FUN_000021c6(param_1);
    FUN_000021f4(param_1);
    if ((*DAT_00002370 & *DAT_0000236c) == 0) {
        *(uint * )(param_1 + 0x68) = *(uint * )(param_1 + 0x68) & 0xfffffff7;
    } else {
        *(uint * )(param_1 + 0x68) = *(uint * )(param_1 + 0x68) | 8;
    }
    return 0x68;
}


void FUN_000025c0(int param_1) {
    ushort uVar1;
    int iVar2;
    code *pcVar3;
    int iVar4;
    undefined4 uVar5;
    int iVar6;
    int iVar7;
    undefined4 *puVar8;

    pcVar3 = DAT_00002650;
    iVar2 = DAT_0000264c;
    uVar1 = DAT_0000263c;
    iVar6 = (int) DAT_0000263a;
    puVar8 = *(undefined4 **) ((*DAT_00002644 * 2 + *DAT_00002648) * 4 + DAT_00002640);
    iVar7 = *(int *) (param_1 + 0x54);
    do {
        iVar4 = (*pcVar3)(*(undefined4 *) (param_1 + 0x50),
                          *(undefined4 *)
                                  ((short) ((ushort) ((uint) iVar7 >> 0x10) & uVar1) * 4 + DAT_00002654));
        uVar5 = (*pcVar3)(*puVar8, iVar4 + iVar2);
        *puVar8 = uVar5;
        iVar6 = iVar6 + -1;
        puVar8 = puVar8 + 1;
        iVar7 = iVar7 + *(int *) (param_1 + 0x4c);
    } while (iVar6 != 0);
    *(int *) (param_1 + 0x54) = *(int *) (param_1 + 0x54) + *(int *) (param_1 + 0x48);
    return;
}


void FUN_00002658(int param_1) {
    undefined2 uVar1;
    undefined2 uVar2;
    code *pcVar3;
    int iVar4;
    undefined4 uVar5;
    uint uVar6;
    uint uVar7;
    undefined4 uVar8;
    ushort uVar9;
    int iVar10;
    int iVar11;
    int iVar12;

    (*DAT_0000278c)();
    (*DAT_00002790)();
    FUN_000031d4();
    (*DAT_00002798)(DAT_00002794);
    (*DAT_000027a0)(DAT_0000279c);
    (*DAT_000027a8)(DAT_000027a4);
    pcVar3 = DAT_000027ac;
    (*DAT_000027ac)(DAT_000027b4, DAT_000027b0, 0);
    (*pcVar3)(DAT_000027bc, DAT_000027b8, 0);
    (*pcVar3)(DAT_000027c4, DAT_000027c0, 0);
    (*pcVar3)(DAT_000027cc, DAT_000027c8, 0);
    uVar5 = DAT_000027dc;
    iVar4 = DAT_000027d0;
    *(ushort *) (*(int *) (DAT_000027d0 + 4) + 0xe) =
            DAT_0000277a | *(ushort *) (*(int *) (DAT_000027d0 + 4) + 0xe) & (ushort) DAT_000027d4;
    *(undefined4 *) (iVar4 + 0x14) = 1;
    pcVar3 = DAT_000027e0;
    *(undefined4 *) (*(int *) (iVar4 + 4) + 0x10) = DAT_000027d8;
    *(undefined4 *) (iVar4 + 0x14) = 1;
    (*pcVar3)(0, uVar5);
    (*DAT_000027e4)(0, DAT_000027b8, DAT_000027b8, DAT_000027b8, DAT_000027b8);
    (*DAT_000027f0)(6, DAT_000027ec, DAT_000027ec + DAT_0000277e, DAT_000027e8, (int) DAT_0000277c);
    (*DAT_000027f8)(5, DAT_000027f4);
    uVar6 = DAT_000027fc;
    *DAT_00002800 = 0;
    iVar10 = (int) DAT_00002780;
    *(uint * )(*(int *) (iVar4 + 4) + iVar10) =
            *(uint * )(*(int *) (iVar4 + 4) + iVar10) & uVar6 | DAT_00002804;
    uVar7 = DAT_0000280c;
    *DAT_00002808 = 0;
    uVar1 = DAT_00002782;
    *(uint * )(*(int *) (iVar4 + 4) + iVar10 + 4) =
            uVar6 & *(uint * )(*(int *) (iVar4 + 4) + iVar10 + 4) | uVar7;
    uVar2 = DAT_00002786;
    *(undefined2 *) (*(int *) (iVar4 + 4) + iVar10 + 0x48) = uVar1;
    *(undefined2 *) (*(int *) (iVar4 + 4) + iVar10 + 0x4a) = DAT_00002784;
    *(undefined2 *) (*(int *) (iVar4 + 4) + iVar10 + 0x4c) = uVar2;
    uVar1 = DAT_00002788;
    *(undefined2 *) (*(int *) (iVar4 + 4) + iVar10 + 0x4e) = uVar2;
    uVar8 = DAT_00002818;
    *(undefined4 *) (iVar4 + 0x14) = 1;
    *(undefined2 *) (*(int *) (iVar4 + 4) + iVar10 + 0x50) = uVar1;
    *(undefined2 *) (*(int *) (iVar4 + 4) + iVar10 + 0x52) = DAT_0000278a;
    *(undefined2 *) (*(int *) (iVar4 + 4) + iVar10 + 0x54) = 5;
    *(undefined4 *) (iVar4 + 0x14) = 1;
    uVar5 = DAT_00002814;
    *(undefined4 *) (param_1 + 0x44) = DAT_00002810;
    *(undefined4 *) (param_1 + 0x3c) = uVar5;
    (*DAT_00002964)(uVar8);
    uVar9 = DAT_00002952;
    *(ushort *) ((int) DAT_0000294c + *(int *) (iVar4 + 4)) =
            *(ushort *) (*(int *) (iVar4 + 4) + (int) DAT_0000294c) & (ushort) DAT_00002968 | DAT_0000294e;
    *(undefined4 *) (iVar4 + 0x14) = 1;
    iVar10 = (int) DAT_00002950;
    *(ushort *) (*(int *) (iVar4 + 4) + iVar10) =
            *(ushort *) (*(int *) (iVar4 + 4) + iVar10) & (ushort) DAT_0000296c | uVar9;
    *(undefined4 *) (iVar4 + 0x14) = 1;
    *(ushort *) (*(int *) (iVar4 + 4) + iVar10) =
            *(ushort *) (iVar10 + *(int *) (iVar4 + 4)) & (ushort) DAT_00002970 | 3;
    *(undefined4 *) (iVar4 + 0x14) = 1;
    *(ushort *) (iVar10 + *(int *) (iVar4 + 4)) =
            *(ushort *) (*(int *) (iVar4 + 4) + iVar10) & (ushort) DAT_00002974 | DAT_00002954;
    *(undefined4 *) (iVar4 + 0x14) = 1;
    *(undefined *) (param_1 + 0x6b) = 0xd;
    *(undefined *) (param_1 + 0x6c) = 0x18;
    *(undefined *) (param_1 + 0x6a) = 0x10;
    iVar12 = *(int *) (iVar4 + 4);
    iVar10 = (int) (short) DAT_0000294e;
    *(ushort *) (iVar12 + iVar10) =
            (short) *(char *) (param_1 + 0x6b) | (ushort) ((int) *(char *) (param_1 + 0x6c) << 8);
    iVar11 = (int) DAT_00002956;
    *(undefined2 *) (iVar12 + iVar10 + 2) = 0;
    *(undefined2 *) (iVar12 + iVar10 + 4) = 0;
    *(undefined2 *) (iVar12 + iVar10 + 6) = 0;
    *(undefined4 *) (iVar4 + 0x14) = 1;
    *(short *) (*(int *) (iVar4 + 4) + iVar11) = (short) *(char *) (param_1 + 0x6a);
    *(undefined4 *) (iVar4 + 0x14) = 1;
    uVar5 = DAT_0000297c;
    *(undefined4 *) (param_1 + 0x48) = DAT_00002978;
    iVar11 = (int) DAT_00002958;
    *(undefined4 *) (param_1 + 0x4c) = uVar5;
    iVar10 = (int) DAT_0000295a;
    *(int *) (param_1 + 0x50) = iVar11;
    *(int *) (param_1 + 0x58) = iVar10;
    *(undefined4 *) (param_1 + 0x60) = 0xffffffaf;
    *(undefined4 *) (param_1 + 0x5c) = 0;
    *(undefined4 *) (param_1 + 100) = 0;
    *(int *) (param_1 + 0x40) = (int) DAT_0000295c;
    *(undefined *) (param_1 + 0x68) = 0xff;
    iVar10 = DAT_00002980;
    if (*(char *) (DAT_00002980 + 0x4c) <= *(char *) (DAT_00002980 + 0x4d)) {
        *(undefined2 *) (iVar4 + 0x20 + (int) DAT_0000295e) = 0;
        *(undefined2 *) (iVar4 + 0x20 + (int) DAT_00002960) = 0;
    }
    // WARNING: Could not recover jumptable at 0x00002924. Too many branches
    // WARNING: Treating indirect jump as call
    (*DAT_00002984)(iVar10, 0, 0, 1);
    return;
}


void FUN_00002990(int *param_1) {
    int iVar1;
    int iVar2;

    iVar1 = DAT_00002ab0;
    if (((*(byte * )((int) param_1 + 0x6d) & 2) != 0) &&
        (iVar2 = *(int *) (*(int *) (*(int *) (*param_1 + 0xc) + 0x10) +
                           *(short *) (*(int *) (*param_1 + 0xc) + 0x58) * 0x24 + 0xc) + DAT_00002ab4,
                DAT_00002ab0 < iVar2)) {
        iVar1 = iVar2 + DAT_00002ab0;
    }
    iVar1 = (*DAT_00002ab8)(param_1[0xf], iVar1, (int) DAT_00002aae, (int) DAT_00002aac, (int) DAT_00002aaa);
    param_1[0xf] = iVar1;
    return;
}


void FUN_000029e2(int param_1) {
    undefined4 uVar1;
    ushort uVar3;
    int iVar2;
    int iVar4;
    int iVar5;
    ushort *puVar6;

    uVar1 = DAT_00002ac4;
    puVar6 = DAT_00002abc;
    if ((*(byte * )(param_1 + 0x6d) & 1) == 0) {
        iVar4 = *(char *) (param_1 + 0x68) + 1;
        if (0x20 < iVar4) {
            iVar4 = 0x20;
        }
    } else {
        iVar4 = *(char *) (param_1 + 0x68) + -1;
        if (iVar4 < 0) {
            iVar4 = 0;
        }
    }
    if (iVar4 != *(char *) (param_1 + 0x68)) {
        iVar5 = 0x10;
        *(char *) (param_1 + 0x68) = (char) iVar4;
        do {
            uVar3 = (*DAT_00002ac8)();
            iVar4 = (*DAT_00002ac8)();
            iVar2 = (*DAT_00002ac8)();
            iVar5 = iVar5 + -1;
            *puVar6 = (ushort) (iVar2 << 10) | (ushort) (iVar4 << 5) | uVar3 | (ushort) uVar1;
            puVar6 = puVar6 + 1;
        } while (iVar5 != 0);
        // WARNING: Could not recover jumptable at 0x00002a96. Too many branches
        // WARNING: Treating indirect jump as call
        (*DAT_00002ad0)(DAT_00002abc, DAT_00002acc, 0x20, 0);
        return;
    }
    return;
}


int FUN_00002d7c(void) {
    short sVar1;
    short sVar2;
    int iVar3;
    short extraout_var;
    int iVar4;
    int iVar5;
    int iVar6;

    iVar3 = DAT_00002ec0;
    iVar4 = *(int *) (DAT_00002ec0 + 0x18);
    iVar6 = (short) ((*DAT_00002eb4 * 2 + *DAT_00002eb8) * 0x70) + DAT_00002ebc;
    sVar1 = *(short *) (iVar6 + 0x34);
    iVar5 = *(int *) (DAT_00002ec0 + 0x1c);
    sVar2 = *(short *) (iVar6 + 0x36);
    iVar6 = (*DAT_00002ec4)(*(undefined4 *) (DAT_00002ec0 + 0x20),
                            *(short *) (iVar6 + 0x38) * 0x10000 - *(int *) (iVar6 + 8));
    (*DAT_00002ec8)(iVar4 * sVar1 + iVar5 * sVar2 + iVar6, *(undefined4 *) (iVar3 + 0x1c));
    return (int) extraout_var;
}


void FUN_00002fa8(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4) {
    int *piVar1;
    code *pcVar2;
    code *pcVar3;
    undefined4 uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;

    piVar1 = DAT_0000301c;
    iVar11 = (short) ((*DAT_00003010 * 2 + *DAT_00003014) * 0x70) + DAT_00003018;
    iVar7 = DAT_00003020;
    if (*(int *) (param_1 + 0x1c) != 0) {
        iVar7 = *(int *) (param_1 + 0x1c);
    }
    iVar9 = *(int *) (param_1 + 0x20);
    iVar8 = *(int *) (param_1 + 0x24);
    uVar4 = (*DAT_000031b8)(DAT_000031b4, *(undefined4 *) (param_1 + 0x44));
    pcVar2 = DAT_000031bc;
    iVar5 = (*DAT_000031bc)(DAT_000031c0, uVar4);
    iVar5 = *(int *) (param_1 + 0x5c) - iVar5;
    iVar10 = *(int *) (param_1 + 100);
    iVar6 = (*pcVar2)(DAT_000031c0, uVar4);
    *(int *) (param_1 + 0x10) = *(int *) (param_1 + 0x10) - iVar5;
    *(int *) (param_1 + 0x18) = *(int *) (param_1 + 0x18) + (iVar6 - iVar10);
    iVar5 = (int) *(short *) (param_1 + 0x28) + (int) *(short *) (param_1 + 0x2c);
    *(short *) (iVar11 + 0x34) = (short) ((int) (iVar5 + (uint)(iVar5 < 0)) >> 1);
    iVar5 = (int) *(short *) (param_1 + 0x2a) + (int) *(short *) (param_1 + 0x2e);
    *(short *) (iVar11 + 0x36) = (short) ((int) (iVar5 + (uint)(iVar5 < 0)) >> 1);
    *(undefined2 *) (iVar11 + 0x38) = *(undefined2 *) (param_1 + 0x36);
    *(undefined2 *) (iVar11 + 0x3c) = *(undefined2 *) (iVar11 + 0x34);
    *(undefined2 *) (iVar11 + 0x3e) = *(undefined2 *) (iVar11 + 0x36);
    pcVar3 = DAT_000031c8;
    *(undefined2 *) (iVar11 + 0x40) = 0;
    (*pcVar3)(DAT_000031c4 - iVar7, -iVar9);
    uVar4 = *(undefined4 *) (param_1 + 0x44);
    (*DAT_000031cc)(uVar4);
    (*DAT_000031d0)(-iVar8);
    iVar6 = (int) *(short *) (iVar11 + 0x34) - (int) *(short *) (iVar11 + 0x3c);
    iVar5 = (int) *(short *) (iVar11 + 0x36) - (int) *(short *) (iVar11 + 0x3e);
    iVar8 = (int) *(short *) (iVar11 + 0x38) - (int) *(short *) (iVar11 + 0x40);
    iVar7 = (*pcVar2)(*(undefined4 *) (param_1 + 0x44), *(int *) (param_1 + 0x10) << 4, param_3, param_4,
                      uVar4);
    piVar1[9] = (((iVar7 - *piVar1 * iVar6) - piVar1[1] * iVar5) - piVar1[2] * iVar8) +
                *(short *) (iVar11 + 0x3c) * -0x10000;
    iVar7 = (*pcVar2)(*(undefined4 *) (param_1 + 0x44), *(int *) (param_1 + 0x18) << 4);
    piVar1[10] = (((iVar7 - piVar1[3] * iVar6) - piVar1[4] * iVar5) - piVar1[5] * iVar8) +
                 *(short *) (iVar11 + 0x3e) * -0x10000;
    piVar1[0xb] = ((((*(int *) (param_1 + 0x14) - *(int *) (param_1 + 0x3c)) * 0x10 - piVar1[6] * iVar6)
                    - piVar1[7] * iVar5) - piVar1[8] * iVar8) + *(short *) (iVar11 + 0x40) * -0x10000;
    return;
}


void FUN_000031d4(void) {
    code *pcVar1;
    int iVar2;

    pcVar1 = DAT_00003210;
    iVar2 = (int) DAT_0000320e;
    (*DAT_00003210)(DAT_00003218, DAT_00003214, iVar2, 0);
    (*pcVar1)(DAT_00003220, DAT_0000321c, iVar2, 0);
    (*pcVar1)(DAT_00003228, DAT_00003224, 0x20, 0);
    (*pcVar1)(DAT_00003230, DAT_0000322c, iVar2, 0);
    return;
}


undefined4 FUN_000032c6(int param_1, undefined param_2) {
    if (*(char *) (param_1 + 0x48) == '\0') {
        *(undefined *) (param_1 + 0x48) = param_2;
        *(undefined *) (param_1 + 0x49) = 0xff;
    } else {
        *(undefined *) (param_1 + 0x49) = param_2;
    }
    return 0x49;
}


void FUN_000032e2(int param_1) {
    int iVar1;
    int *piVar2;

    piVar2 = *(int **) (param_1 + 8);
    *(byte * )(piVar2[4] + 0x6d) = *(byte * )(piVar2[4] + 0x6d) & 0xfe;
    iVar1 = (int) DAT_00003350;
    *(byte * )(*piVar2 + iVar1) = *(byte * )(*piVar2 + iVar1) & 0xdf;
    *(undefined4 *) (*piVar2 + iVar1 + -0x29) = 5;
    FUN_000032c6(param_1, 6);
    return;
}


void FUN_00003308(int param_1) {
    short sVar1;
    int iVar2;
    int *piVar3;

    piVar3 = *(int **) (param_1 + 8);
    sVar1 = *(short *) (param_1 + 0x58);
    *(byte * )(piVar3[4] + 0x6d) = *(byte * )(piVar3[4] + 0x6d) | 1;
    iVar2 = (int) DAT_00003350;
    *(byte * )(*piVar3 + iVar2) = *(byte * )(*piVar3 + iVar2) | 0x20;
    *(undefined4 *) (*piVar3 + iVar2 + -0x29) = 4;
    iVar2 = piVar3[1];
    *(undefined4 *) (iVar2 + 0x24) = 0xffffffff;
    *(undefined4 *) (iVar2 + 0x28) = 0;
    *(uint * )(piVar3[2] + 0x68) = *(uint * )(piVar3[2] + 0x68) | 0x10;
    *(int *) (*piVar3 + (int) DAT_00003352) = (int) sVar1;
    FUN_000032c6(param_1, 3);
    return;
}


void FUN_000034e4(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4) {
    undefined4 uVar1;
    int iVar2;
    int iVar3;
    int iStack28;
    int iStack24;
    undefined4 uStack20;

    iVar3 = DAT_000035bc;
    (*DAT_000035c0)(*(undefined4 *) (param_1 + 0x24), &iStack28, param_3, param_4, param_1);
    uVar1 = (*DAT_000035c8)(DAT_000035c4, uStack20);
    iStack28 = (*DAT_000035cc)(*(undefined4 *) (iVar3 + 0x18), iStack28, uVar1);
    iStack24 = (*DAT_000035cc)(*(undefined4 *) (iVar3 + 0x1c), iStack24, uVar1);
    iVar3 = (int) DAT_000035b2;
    iStack28 = iStack28 - *(short *) (param_1 + 0x44);
    iStack24 = iStack24 + -3;
    if ((((DAT_000035b0 < iStack28) || (iStack28 < DAT_000035b4)) || (DAT_000035b0 < iStack24)) ||
        (iStack24 < DAT_000035b4)) {
        iVar2 = (int) DAT_000035b6;
        *(undefined4 *) (param_1 + 0x28) = 0;
        *(int *) (param_1 + 0x2c) = iVar2;
    } else {
        if (iStack28 < DAT_000035b8) {
            iStack28 = (int) DAT_000035b8;
        }
        if (*(short *) (param_1 + 0x44) * -2 + (int) DAT_000035ba < iStack28) {
            iStack28 = *(short *) (param_1 + 0x44) * -2 + (int) DAT_000035ba;
        }
        if (0x68 < iStack24) {
            iStack24 = 0x68;
        }
        if (iStack24 < -0x58) {
            iStack24 = -0x58;
        }
        *(int *) (param_1 + 0x28) = iStack28;
        *(int *) (param_1 + 0x2c) = iStack24;
    }
    *(int *) (param_1 + 0x30) = iVar3;
    return;
}


void FUN_00003634(int param_1) {
    if (*(int *) (param_1 + 0xc) != 0) {
        *(undefined4 *) (*(int *) (param_1 + 0xc) + -0xc) = 0;
        if (*(int *) (param_1 + 0xc) != 0) {
            *(uint * )(*(int *) (param_1 + 0xc) + -4) = *(uint * )(*(int *) (param_1 + 0xc) + -4) | 1;
        }
        *(undefined4 *) (param_1 + 0xc) = 0;
    }
    return;
}


void FUN_00003658(int param_1, int param_2) {
    undefined4 uVar1;
    int iVar2;
    undefined4 uVar3;
    short *psVar4;

    psVar4 = (short *) (param_2 * 0x24 + *(int *) (param_1 + 0x10));
    uVar3 = *(undefined4 *) (psVar4 + 0x10);
    if ((*psVar4 == DAT_000036dc) && ((*DAT_000036f4 & *DAT_000036f0) == 0)) {
        uVar3 = DAT_000036f8;
    }
    iVar2 = (*DAT_000036fc)(uVar3, (int) DAT_000036de);
    uVar1 = DAT_00003700;
    *(short *) (param_1 + 0x44) = (short) ((int) (iVar2 * 8 + (uint)(iVar2 * 8 < 0)) >> 1);
    *(short **) (param_1 + 0x24) = psVar4 + 4;
    uVar3 = (*DAT_00003704)(param_1, uVar3, param_1 + 0x28, 0x28, uVar1);
    *(undefined4 *) (param_1 + 0xc) = uVar3;
    FUN_000034e4(param_1);
    return;
}


int FUN_00003708(int param_1) {
    short sVar1;
    code *pcVar2;
    code *pcVar3;
    undefined4 uVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    iVar5 = DAT_00003910;
    pcVar3 = DAT_0000390c;
    pcVar2 = DAT_00003908;
    iVar7 = *(int *) (param_1 + 0x10);
    iVar6 = (int) *(char *) (param_1 + 0x48);
    if (iVar6 == 0) {
        if (*(int *) (param_1 + 0xc) != 0) {
            FUN_000034e4(param_1);
        }
        if ((*(byte * )(param_1 + 0x5d) & 8) == 0) {
            iVar6 = 0x25;
            if (-1 < *(char *) (param_1 + 0x49)) {
                *(undefined *) (param_1 + 0x48) = *(undefined *) (param_1 + 0x49);
                iVar6 = 0x25;
                *(undefined *) (param_1 + 0x49) = 0xff;
            }
        } else {
            *(undefined4 *) (param_1 + 0x34) = *(undefined4 *) (param_1 + 0x28);
            *(undefined4 *) (param_1 + 0x38) = *(undefined4 *) (param_1 + 0x2c);
            *(undefined4 *) (param_1 + 0x3c) = *(undefined4 *) (param_1 + 0x30);
            *(undefined4 *) (param_1 + 0x40) = 0;
            *(undefined *) (param_1 + 0x48) = 1;
            iVar6 = 0x25;
            *(undefined *) (param_1 + 0x49) = 0xff;
        }
    } else if (iVar6 == 1) {
        if (*(int *) (param_1 + 0xc) != 0) {
            uVar4 = (*DAT_000036e4)(*(undefined4 *) (param_1 + 0x40), DAT_000036e0, (int) DAT_000036da,
                                    (int) DAT_000036d8, (int) DAT_000036d6);
            *(undefined4 *) (param_1 + 0x40) = uVar4;
            iVar6 = DAT_000036e8[1];
            iVar5 = (*DAT_000036ec)(*(undefined4 *) (param_1 + 0x40),
                                    (*DAT_000036e8 - (int) *(short *) (param_1 + 0x44)) -
                                    *(int *) (param_1 + 0x34));
            pcVar2 = DAT_000036ec;
            *(int *) (param_1 + 0x28) = iVar5 + *(int *) (param_1 + 0x34);
            iVar5 = (*pcVar2)(*(undefined4 *) (param_1 + 0x40), iVar6 - *(int *) (param_1 + 0x38));
            iVar5 = iVar5 + *(int *) (param_1 + 0x38);
            *(int *) (param_1 + 0x2c) = iVar5;
            return iVar5;
        }
    } else {
        if (iVar6 == 2) {
            FUN_00003658(param_1, (int) *(short *) (param_1 + 0x46));
            if ((0 < *(short *) (*(short *) (param_1 + 0x46) * 0x24 + iVar7)) &&
                (sVar1 = *(short *) (*(short *) (param_1 + 0x46) * 0x24 + iVar7),
                        (*(byte * )(DAT_00003918 + ((int) sVar1 & 7U)) &
                         *(byte * )(((uint)(
                int)sVar1 >> 3) +DAT_00003914)) == 0)) {
                *(int *) (iVar5 + 4) = *(int *) (iVar5 + 0xc) + 2;
                uVar4 = DAT_0000391c;
                *(undefined4 *) (iVar5 + 8) = *(undefined4 *) (iVar5 + 0x10);
                (*pcVar2)(uVar4);
            }
        } else {
            if (iVar6 == 3) {
                FUN_00003634(param_1);
                (*pcVar3)();
                *(undefined2 *) (param_1 + 0x46) = *(undefined2 *) (param_1 + 0x58);
                *(undefined *) (param_1 + 0x48) = 2;
                return 0x24;
            }
            if (iVar6 == 4) {
                FUN_00003634(param_1);
                (*pcVar3)();
                uVar4 = DAT_00003920;
                *(int *) (iVar5 + 4) = *(int *) (iVar5 + 0xc) + 2;
                *(undefined4 *) (iVar5 + 8) = *(undefined4 *) (iVar5 + 0x10);
                (*pcVar2)(uVar4);
            } else if (iVar6 == 5) {
                FUN_00003634(param_1);
                (*pcVar3)();
                *(int *) (iVar5 + 4) = *(int *) (iVar5 + 0xc) + 2;
                uVar4 = DAT_00003924;
                *(undefined4 *) (iVar5 + 8) = *(undefined4 *) (iVar5 + 0x10);
                (*pcVar2)(uVar4);
            } else {
                if (iVar6 != 6) {
                    return iVar6;
                }
                FUN_00003634(param_1);
                (*pcVar3)();
            }
        }
        iVar6 = 0x24;
        *(undefined *) (param_1 + 0x48) = 0;
    }
    return iVar6;
}


void FUN_00003874(int *param_1, int *param_2) {
    // WARNING: Could not recover jumptable at 0x0000388e. Too many branches
    // WARNING: Treating indirect jump as call
    (*DAT_00003928)(*param_2 - *param_1, param_2[2] - param_1[2]);
    return;
}


uint FUN_00003892(uint param_1, int param_2, int param_3) {
    uint uVar1;
    uint uVar2;

    param_1 = param_1 & DAT_0000392c;
    if (param_3 == 0) {
        if (((int) (DAT_00003930 - param_2) <= (int) param_1) &&
            ((int) param_1 <= (int) (param_2 + DAT_00003930))) {
            if (-1 < (int) (DAT_00003934 + param_1)) {
                return DAT_00003934 + param_1;
            }
            return DAT_00003930 - param_1;
        }
    } else if (param_3 == 1) {
        if ((DAT_00003938 - param_2 <= (int) param_1) && ((int) param_1 <= param_2 + DAT_00003938)) {
            if (-1 < (int) (DAT_0000393c + param_1)) {
                return DAT_0000393c + param_1;
            }
            return DAT_00003938 - param_1;
        }
    } else if (param_3 == 2) {
        if ((DAT_00003940 - param_2 <= (int) param_1) || ((int) param_1 <= param_2)) {
            uVar2 = param_1 & DAT_00003930;
            if (uVar2 == 0) {
                uVar1 = DAT_00003ab4 & param_1;
            } else {
                uVar1 = DAT_00003944 | param_1;
            }
            if (-1 < (int) uVar1) {
                if (uVar2 != 0) {
                    return DAT_00003ab8 | param_1;
                }
                return DAT_00003ab4 & param_1;
            }
            if (uVar2 == 0) {
                param_1 = DAT_00003ab4 & param_1;
            } else {
                param_1 = DAT_00003ab8 | param_1;
            }
            return -param_1;
        }
    } else if (((param_3 == 3) && (DAT_00003abc - param_2 <= (int) param_1)) &&
               ((int) param_1 <= param_2 + DAT_00003abc)) {
        if (-1 < (int) (DAT_00003ac0 + param_1)) {
            return DAT_00003ac0 + param_1;
        }
        return DAT_00003abc - param_1;
    }
    return 0xffffffff;
}


int FUN_0000399c(int param_1, undefined4 param_2) {
    undefined4 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    short *psVar6;
    int iVar7;
    undefined4 local_2c;
    undefined4 uStack40;
    undefined4 uStack36;

    iVar3 = -1;
    iVar5 = *(int *) (param_1 + 0x10);
    local_2c = *(undefined4 *) (*(short *) (param_1 + 0x58) * 0x24 + iVar5 + 8);
    uStack40 = *(undefined4 *) (*(short *) (param_1 + 0x58) * 0x24 + iVar5 + 0xc);
    uStack36 = *(undefined4 *) (*(short *) (param_1 + 0x58) * 0x24 + iVar5 + 0x10);
    iVar4 = DAT_00003ac4;
    for (iVar7 = 0; iVar7 < *(int *) (param_1 + 0x14); iVar7 = iVar7 + 1) {
        if ((iVar7 != *(short *) (param_1 + 0x58)) &&
            ((psVar6 = (short *) (iVar7 * 0x24 + iVar5), *psVar6 < 1 ||
                                                         ((*(byte * )(((int) *psVar6 & 7U) + DAT_00003acc) &
                                                           *(byte * )(((uint)(
            int)*psVar6 >> 3) +DAT_00003ac8)) != 0)))) {
            uVar1 = FUN_00003874(&local_2c, psVar6 + 4);
            iVar2 = FUN_00003892(uVar1, *(undefined4 *) (param_1 + 0x4c), param_2);
            if (-1 < iVar2) {
                iVar2 = (*DAT_00003ad0)(iVar2, *(undefined4 *) (param_1 + 0x50));
                iVar2 = DAT_00003ad4 + iVar2;
                uVar1 = (*DAT_00003ad8)(&local_2c, psVar6 + 4);
                iVar2 = (*DAT_00003adc)(uVar1, iVar2);
                if ((iVar2 < *(int *) (param_1 + 0x54)) && (iVar2 <= iVar4)) {
                    iVar3 = iVar7;
                    iVar4 = iVar2;
                }
            }
        }
    }
    if (iVar3 < 0) {
        iVar3 = (int) *(short *) (param_1 + 0x58);
    }
    return iVar3;
}


void FUN_00003ae0(int param_1) {
    code *pcVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined4 uStack40;
    undefined4 uStack36;

    uVar2 = DAT_00003c34;
    pcVar1 = DAT_00003c30;
    iVar4 = *(int *) (param_1 + 0x10);
    local_38 = *(undefined4 *) (*(short *) (param_1 + 0x58) * 0x24 + iVar4 + 8);
    uStack52 = *(undefined4 *) (*(short *) (param_1 + 0x58) * 0x24 + iVar4 + 0xc);
    iVar6 = 0;
    iVar5 = (int) DAT_00003c2c;
    uStack48 = *(undefined4 *) (*(short *) (param_1 + 0x58) * 0x24 + iVar4 + 0x10);
    do {
        iVar3 = FUN_0000399c(param_1, iVar6);
        if (iVar3 != *(short *) (param_1 + 0x58)) {
            iVar3 = iVar3 * 0x24 + iVar4;
            uStack44 = *(undefined4 *) (iVar3 + 8);
            uStack40 = *(undefined4 *) (iVar3 + 0xc);
            uStack36 = *(undefined4 *) (iVar3 + 0x10);
            (*pcVar1)(&local_38, uVar2, iVar5);
        }
        iVar3 = FUN_0000399c(param_1, iVar6 + 1);
        if (iVar3 != *(short *) (param_1 + 0x58)) {
            iVar3 = iVar3 * 0x24 + iVar4;
            uStack44 = *(undefined4 *) (iVar3 + 8);
            uStack40 = *(undefined4 *) (iVar3 + 0xc);
            uStack36 = *(undefined4 *) (iVar3 + 0x10);
            (*pcVar1)(&local_38, uVar2, iVar5);
        }
        iVar3 = FUN_0000399c(param_1, iVar6 + 2);
        if (iVar3 != *(short *) (param_1 + 0x58)) {
            iVar3 = iVar3 * 0x24 + iVar4;
            uStack44 = *(undefined4 *) (iVar3 + 8);
            uStack40 = *(undefined4 *) (iVar3 + 0xc);
            uStack36 = *(undefined4 *) (iVar3 + 0x10);
            (*pcVar1)(&local_38, uVar2, iVar5);
        }
        iVar3 = FUN_0000399c(param_1, iVar6 + 3);
        if (iVar3 != *(short *) (param_1 + 0x58)) {
            iVar3 = iVar3 * 0x24 + iVar4;
            uStack44 = *(undefined4 *) (iVar3 + 8);
            uStack40 = *(undefined4 *) (iVar3 + 0xc);
            uStack36 = *(undefined4 *) (iVar3 + 0x10);
            (*pcVar1)(&local_38, uVar2, iVar5);
        }
        iVar6 = iVar6 + 4;
    } while (iVar6 < 4);
    return;
}


undefined4 FUN_00003c38(int param_1) {
    int iVar1;
    code *pcVar2;
    undefined4 uVar3;
    int *piVar4;
    int iVar5;

    iVar5 = (int) *(short *) (param_1 + 0x58);
    piVar4 = *(int **) (param_1 + 8);
    if ((*(byte * )(param_1 + 0x5d) & 0x10) != 0) {
        FUN_00003ae0(param_1);
    }
    iVar1 = DAT_00003d50;
    if ((*(ushort *) (DAT_00003d50 + 0xc) & 0x10) != 0) {
        iVar5 = FUN_0000399c(param_1, 0);
    }
    if ((*(ushort *) (iVar1 + 0xc) & 0x80) != 0) {
        iVar5 = FUN_0000399c(param_1, 1);
    }
    if ((*(ushort *) (iVar1 + 0xc) & 0x20) != 0) {
        iVar5 = FUN_0000399c(param_1, 2);
    }
    if ((*(ushort *) (iVar1 + 0xc) & 0x40) != 0) {
        iVar5 = FUN_0000399c(param_1, 3);
    }
    pcVar2 = DAT_00003d54;
    if (*(short *) (param_1 + 0x58) == iVar5) {
        uVar3 = 0;
    } else {
        *(short *) (param_1 + 0x58) = (short) iVar5;
        (*pcVar2)(10);
        if ((*(ushort *) (iVar1 + 8) & 0xf0) == 0) {
            iVar5 = (int) DAT_00003d4a;
            *(byte * )(*piVar4 + iVar5) = *(byte * )(*piVar4 + iVar5) | 2;
            *(byte * )(*piVar4 + iVar5) = *(byte * )(*piVar4 + iVar5) | 8;
        } else {
            *(byte * )(*piVar4 + (int) DAT_00003d4a) = *(byte * )(*piVar4 + (int) DAT_00003d4a) | 1;
        }
        uVar3 = 1;
    }
    return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00003ce0(int param_1) {
    int iVar1;
    code *UNRECOVERED_JUMPTABLE;
    int iVar2;
    undefined2 uVar3;
    byte *pbVar4;
    int iVar5;

    iVar1 = _LAB_00003d58;
    if ((*(byte * )(_LAB_00003d5c + 6) & *(byte * )(_LAB_00003d58 + 0x1a)) != 0) {
        pbVar4 = (byte * )(_LAB_00003d58 + 0x1b);
        if ((*(byte * )(_LAB_00003d5c + 4) & *pbVar4) != 0) {
            iVar5 = (int) _LAB_00003d4c;
            iVar2 = (int) DAT_00003d4a;
            *pbVar4 = *pbVar4 & *DAT_00003d60;
            *(byte * )(**(int **) (param_1 + 8) + iVar2) = *(byte * )(**(int **) (param_1 + 8) + iVar2) & 0xbf;
            *(undefined4 *) (param_1 + 0x10) = DAT_00003d64;
            *(undefined4 *) (param_1 + 0x14) = 0x21;
            uVar3 = (*DAT_00003d68)(iVar1, iVar5, 6);
            UNRECOVERED_JUMPTABLE = DAT_00003d6c;
            iVar2 = (int) _LAB_00003d4e;
            *(undefined2 *) (param_1 + 0x58) = uVar3;
            // WARNING: Could not recover jumptable at 0x00003d46. Too many branches
            // WARNING: Treating indirect jump as call
            (*UNRECOVERED_JUMPTABLE)(iVar1, iVar2, 6, (int) *(short *) (param_1 + 0x58));
            return;
        }
        iVar5 = (int) DAT_00003dac;
        iVar2 = (int) DAT_00003daa;
        *pbVar4 = *pbVar4 | *(byte * )(_LAB_00003d5c + 4);
        *(byte * )(**(int **) (param_1 + 8) + iVar2) = *(byte * )(**(int **) (param_1 + 8) + iVar2) | 0x40;
        *(undefined4 *) (param_1 + 0x10) = DAT_00003db0;
        *(undefined4 *) (param_1 + 0x14) = 4;
        (*DAT_00003db4)(iVar1, iVar5, 6, (int) *(short *) (param_1 + 0x58));
        *(undefined2 *) (param_1 + 0x58) = 0;
    }
    return;
}


int FUN_0000424e(undefined4 param_1, undefined4 param_2) {
    code *pcVar1;
    code *pcVar2;
    int in_r0;
    int iVar3;
    int iVar4;
    uint unaff_r8;
    code *unaff_r10;
    undefined unaff_r11;
    int unaff_r13;
    int unaff_r14;

    (*DAT_000042bc)(DAT_000042b8, param_2, 6, (int) *(short *) (unaff_r14 + in_r0));
    *(undefined *) (unaff_r14 + 0x5c) = unaff_r11;
    FUN_00003708();
    (*DAT_000045a0)();
    pcVar2 = DAT_000045a8;
    pcVar1 = DAT_000045a4;
    if (*DAT_000045ac != 0) {
        (*DAT_000045a8)(2, 4);
        (*pcVar1)();
        (*pcVar2)(2, 0xfffffffa);
        (*pcVar1)();
        (*pcVar2)(2, 0xfffffffb);
        (*pcVar1)();
        (*pcVar2)(2, 0xfffffffc);
        (*pcVar1)();
        (*pcVar2)(2, 0xfffffffd);
        (*DAT_000045c4)((int) *(char *) (unaff_r14 + 0x5d), 8);
    }
    iVar3 = (int) *(short *) (unaff_r13 + 0x18);
    if (iVar3 == 0) {
        if (*DAT_000045ac != 0) {
            (*pcVar2)(2, 8);
            (*pcVar1)();
            (*DAT_000045cc)(*(undefined4 *) (unaff_r14 + 0x54));
            (*pcVar2)(2, 9);
            (*pcVar1)();
            (*DAT_000045d4)(*(undefined4 *) (unaff_r14 + 0x4c));
            (*pcVar2)(2, 10);
            (*pcVar1)();
            (*DAT_000045d4)(*(undefined4 *) (unaff_r14 + 0x50));
        }
        iVar3 = (*unaff_r10)((int) DAT_00004594);
        if (iVar3 != 0) {
            *(byte * )(*(int *) (unaff_r13 + 0x10) + 0x6d) =
                    *(byte * )(*(int *) (unaff_r13 + 0x10) + 0x6d) ^ 1;
        }
        pcVar1 = DAT_000045dc;
        iVar3 = (*DAT_000045dc)((int) DAT_00004596);
        if (iVar3 != 0) {
            *(int *) (unaff_r14 + 0x54) = *(int *) (unaff_r14 + 0x54) + (int) DAT_00004598;
        }
        iVar3 = (*pcVar1)((int) DAT_0000459a);
        if (iVar3 != 0) {
            *(int *) (unaff_r14 + 0x54) = *(int *) (unaff_r14 + 0x54) - (int) DAT_00004598;
        }
        iVar3 = DAT_000046ec;
        iVar4 = (*pcVar1)((int) DAT_000046d8);
        if (iVar4 != 0) {
            *(int *) (unaff_r14 + 0x4c) = *(int *) (unaff_r14 + 0x4c) + iVar3;
        }
        iVar4 = (*pcVar1)((int) DAT_000046da);
        if (iVar4 != 0) {
            *(int *) (unaff_r14 + 0x4c) = *(int *) (unaff_r14 + 0x4c) - iVar3;
        }
        iVar4 = (*pcVar1)((int) DAT_000046dc);
        if (iVar4 != 0) {
            *(int *) (unaff_r14 + 0x50) = *(int *) (unaff_r14 + 0x50) + iVar3;
        }
        iVar4 = (*pcVar1)((int) DAT_000046de);
        if (iVar4 != 0) {
            *(int *) (unaff_r14 + 0x50) = *(int *) (unaff_r14 + 0x50) - iVar3;
        }
        iVar3 = (*unaff_r10)((int) DAT_000046e0);
        if (iVar3 != 0) {
            *(byte * )(unaff_r14 + 0x5d) = *(byte * )(unaff_r14 + 0x5d) ^ 0x10;
        }
        iVar3 = (*unaff_r10)((int) DAT_000046e2);
        if (iVar3 != 0) {
            *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) =
                    *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) ^ unaff_r8;
        }
        iVar3 = (*unaff_r10)((int) DAT_000046e4);
        if (iVar3 != 0) {
            *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) = *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) ^ 2;
        }
        iVar3 = (*unaff_r10)((int) DAT_000046e6);
        if (iVar3 != 0) {
            *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) = *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) ^ 4;
        }
        iVar3 = (*unaff_r10)((int) DAT_000046e8);
        if (iVar3 != 0) {
            *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) = *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) ^ 8;
        }
        iVar3 = (*unaff_r10)((int) DAT_000046ea);
        if (iVar3 != 0) {
            iVar3 = 0x68;
            *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) = *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) ^ 0x10;
        }
    }
    return iVar3;
}


int FUN_000043b0(void) {
    code *pcVar1;
    code *pcVar2;
    int in_r0;
    int iVar3;
    int iVar4;
    int in_r2;
    int in_r3;
    uint unaff_r8;
    code *unaff_r10;
    int unaff_r13;
    int unaff_r14;

    if (*(short *) ((in_r0 + in_r3) * 4 + in_r2 + 2) == 0x66) {
        (*DAT_000043dc)();
        (*DAT_000043e4)();
    } else {
        (*DAT_00004450)();
        (*DAT_00004458)();
    }
    *(undefined *) (unaff_r14 + 0x5c) = 10;
    FUN_00003708();
    (*DAT_000045a0)();
    pcVar2 = DAT_000045a8;
    pcVar1 = DAT_000045a4;
    if (*DAT_000045ac != 0) {
        (*DAT_000045a8)(2, 4);
        (*pcVar1)();
        (*pcVar2)(2, 0xfffffffa);
        (*pcVar1)();
        (*pcVar2)(2, 0xfffffffb);
        (*pcVar1)();
        (*pcVar2)(2, 0xfffffffc);
        (*pcVar1)();
        (*pcVar2)(2, 0xfffffffd);
        (*DAT_000045c4)((int) *(char *) (unaff_r14 + 0x5d), 8);
    }
    iVar3 = (int) *(short *) (unaff_r13 + 0x18);
    if (iVar3 == 0) {
        if (*DAT_000045ac != 0) {
            (*pcVar2)(2, 8);
            (*pcVar1)();
            (*DAT_000045cc)(*(undefined4 *) (unaff_r14 + 0x54));
            (*pcVar2)(2, 9);
            (*pcVar1)();
            (*DAT_000045d4)(*(undefined4 *) (unaff_r14 + 0x4c));
            (*pcVar2)(2, 10);
            (*pcVar1)();
            (*DAT_000045d4)(*(undefined4 *) (unaff_r14 + 0x50));
        }
        iVar3 = (*unaff_r10)((int) DAT_00004594);
        if (iVar3 != 0) {
            *(byte * )(*(int *) (unaff_r13 + 0x10) + 0x6d) =
                    *(byte * )(*(int *) (unaff_r13 + 0x10) + 0x6d) ^ 1;
        }
        pcVar1 = DAT_000045dc;
        iVar3 = (*DAT_000045dc)((int) DAT_00004596);
        if (iVar3 != 0) {
            *(int *) (unaff_r14 + 0x54) = *(int *) (unaff_r14 + 0x54) + (int) DAT_00004598;
        }
        iVar3 = (*pcVar1)((int) DAT_0000459a);
        if (iVar3 != 0) {
            *(int *) (unaff_r14 + 0x54) = *(int *) (unaff_r14 + 0x54) - (int) DAT_00004598;
        }
        iVar3 = DAT_000046ec;
        iVar4 = (*pcVar1)((int) DAT_000046d8);
        if (iVar4 != 0) {
            *(int *) (unaff_r14 + 0x4c) = *(int *) (unaff_r14 + 0x4c) + iVar3;
        }
        iVar4 = (*pcVar1)((int) DAT_000046da);
        if (iVar4 != 0) {
            *(int *) (unaff_r14 + 0x4c) = *(int *) (unaff_r14 + 0x4c) - iVar3;
        }
        iVar4 = (*pcVar1)((int) DAT_000046dc);
        if (iVar4 != 0) {
            *(int *) (unaff_r14 + 0x50) = *(int *) (unaff_r14 + 0x50) + iVar3;
        }
        iVar4 = (*pcVar1)((int) DAT_000046de);
        if (iVar4 != 0) {
            *(int *) (unaff_r14 + 0x50) = *(int *) (unaff_r14 + 0x50) - iVar3;
        }
        iVar3 = (*unaff_r10)((int) DAT_000046e0);
        if (iVar3 != 0) {
            *(byte * )(unaff_r14 + 0x5d) = *(byte * )(unaff_r14 + 0x5d) ^ 0x10;
        }
        iVar3 = (*unaff_r10)((int) DAT_000046e2);
        if (iVar3 != 0) {
            *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) =
                    *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) ^ unaff_r8;
        }
        iVar3 = (*unaff_r10)((int) DAT_000046e4);
        if (iVar3 != 0) {
            *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) = *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) ^ 2;
        }
        iVar3 = (*unaff_r10)((int) DAT_000046e6);
        if (iVar3 != 0) {
            *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) = *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) ^ 4;
        }
        iVar3 = (*unaff_r10)((int) DAT_000046e8);
        if (iVar3 != 0) {
            *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) = *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) ^ 8;
        }
        iVar3 = (*unaff_r10)((int) DAT_000046ea);
        if (iVar3 != 0) {
            iVar3 = 0x68;
            *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) = *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) ^ 0x10;
        }
    }
    return iVar3;
}


int FUN_000044d0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4) {
    code *pcVar1;
    int iVar2;
    int iVar3;
    uint unaff_r8;
    code *unaff_r10;
    code *unaff_r11;
    code *unaff_r12;
    int unaff_r13;
    int unaff_r14;
    undefined4 uVar4;

    (*unaff_r12)(2);
    iVar3 = (int) *(char *) (unaff_r14 + 0x5c);
    uVar4 = DAT_000045bc;
    (*unaff_r11)();
    (*unaff_r12)(2, 0xfffffffc, param_3, param_4, uVar4, iVar3);
    (*unaff_r11)();
    (*unaff_r12)(2, 0xfffffffd);
    (*DAT_000045c4)((int) *(char *) (unaff_r14 + 0x5d), 8);
    iVar3 = (int) *(short *) (unaff_r13 + 0x18);
    if (iVar3 == 0) {
        if (*DAT_000045ac != 0) {
            (*unaff_r12)(2, 8);
            (*unaff_r11)();
            (*DAT_000045cc)(*(undefined4 *) (unaff_r14 + 0x54));
            (*unaff_r12)(2, 9);
            (*unaff_r11)();
            (*DAT_000045d4)(*(undefined4 *) (unaff_r14 + 0x4c));
            (*unaff_r12)(2, 10);
            (*unaff_r11)();
            (*DAT_000045d4)(*(undefined4 *) (unaff_r14 + 0x50));
        }
        iVar3 = (*unaff_r10)((int) DAT_00004594);
        if (iVar3 != 0) {
            *(byte * )(*(int *) (unaff_r13 + 0x10) + 0x6d) =
                    *(byte * )(*(int *) (unaff_r13 + 0x10) + 0x6d) ^ 1;
        }
        pcVar1 = DAT_000045dc;
        iVar3 = (*DAT_000045dc)((int) DAT_00004596);
        if (iVar3 != 0) {
            *(int *) (unaff_r14 + 0x54) = *(int *) (unaff_r14 + 0x54) + (int) DAT_00004598;
        }
        iVar3 = (*pcVar1)((int) DAT_0000459a);
        if (iVar3 != 0) {
            *(int *) (unaff_r14 + 0x54) = *(int *) (unaff_r14 + 0x54) - (int) DAT_00004598;
        }
        iVar3 = DAT_000046ec;
        iVar2 = (*pcVar1)((int) DAT_000046d8);
        if (iVar2 != 0) {
            *(int *) (unaff_r14 + 0x4c) = *(int *) (unaff_r14 + 0x4c) + iVar3;
        }
        iVar2 = (*pcVar1)((int) DAT_000046da);
        if (iVar2 != 0) {
            *(int *) (unaff_r14 + 0x4c) = *(int *) (unaff_r14 + 0x4c) - iVar3;
        }
        iVar2 = (*pcVar1)((int) DAT_000046dc);
        if (iVar2 != 0) {
            *(int *) (unaff_r14 + 0x50) = *(int *) (unaff_r14 + 0x50) + iVar3;
        }
        iVar2 = (*pcVar1)((int) DAT_000046de);
        if (iVar2 != 0) {
            *(int *) (unaff_r14 + 0x50) = *(int *) (unaff_r14 + 0x50) - iVar3;
        }
        iVar3 = (*unaff_r10)((int) DAT_000046e0);
        if (iVar3 != 0) {
            *(byte * )(unaff_r14 + 0x5d) = *(byte * )(unaff_r14 + 0x5d) ^ 0x10;
        }
        iVar3 = (*unaff_r10)((int) DAT_000046e2);
        if (iVar3 != 0) {
            *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) =
                    *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) ^ unaff_r8;
        }
        iVar3 = (*unaff_r10)((int) DAT_000046e4);
        if (iVar3 != 0) {
            *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) = *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) ^ 2;
        }
        iVar3 = (*unaff_r10)((int) DAT_000046e6);
        if (iVar3 != 0) {
            *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) = *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) ^ 4;
        }
        iVar3 = (*unaff_r10)((int) DAT_000046e8);
        if (iVar3 != 0) {
            *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) = *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) ^ 8;
        }
        iVar3 = (*unaff_r10)((int) DAT_000046ea);
        if (iVar3 != 0) {
            iVar3 = 0x68;
            *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) = *(uint * )(*(int *) (unaff_r13 + 8) + 0x68) ^ 0x10;
        }
    }
    return iVar3;
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004843(void) {
    undefined uVar1;
    undefined *in_gbr;

    FUN_00005047();
    func_0x0000384b();
    uVar1 = func_0x0000404f(4);
    *in_gbr = uVar1;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004927(int param_1) {
    undefined in_r0;
    int in_gbr;

    *(undefined *) (in_gbr + 5) = in_r0;
    *(int *) (param_1 + 0xc) = (int) *(char *) (in_gbr + 5);
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000049e1(undefined4 param_1, int param_2) {
    int in_r0;
    int in_r3;

    *(char *) (in_r3 + in_r0) = (char) in_r0;
    *(int *) (param_2 + in_r0) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000049fe(undefined4 param_1, undefined4 param_2, int param_3) {
    undefined2 *in_r0;
    undefined4 in_r1;
    undefined2 in_r2;
    int unaff_r8;
    int unaff_r10;
    int unaff_r12;
    int unaff_r14;

    *(undefined4 *) (param_3 + 0x1c) = in_r1;
    *(undefined4 *) (unaff_r8 + 0x24) = in_r1;
    *(undefined4 *) (unaff_r10 + 0x2c) = in_r1;
    *(undefined4 *) (unaff_r12 + 0x34) = in_r1;
    *(undefined4 *) (unaff_r14 + 0x3c) = in_r1;
    *in_r0 = in_r2;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004a45(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004c57(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004d01(undefined4 param_1, int param_2, int param_3) {
    bool bVar1;
    undefined *in_r0;
    int in_r2;
    uint uVar2;
    undefined4 in_r3;
    int unaff_r14;
    uint in_sr;
    int iVar3;

    *(undefined4 *) (param_2 + -1) = in_r3;
    *(char *) (undefined4 *) (param_2 + -1) = (char) in_r3;
    uVar2 = in_r2 << 1 | (uint)((byte) in_sr & 1);
    bVar1 = ((byte)(in_sr >> 8) & 1) == ((byte)(in_sr >> 9) & 1);
    iVar3 = (uint) bVar1 * (uVar2 - param_3) + (uint)
    !bVar1 * (uVar2 + param_3);
    *in_r0 = (char) in_r0;
    *(short *) ((int) in_r0 * 2) = (short) iVar3;
    *(int *) (unaff_r14 + -2) = iVar3;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004d3d(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005047(void) {
    int in_r2;
    int in_r3;
    undefined4 unaff_r9;
    undefined4 unaff_r12;

    *(undefined4 *) (in_r2 + 8) = unaff_r12;
    *(undefined4 *) (in_r3 + 8) = unaff_r9;
    FUN_00005575();
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000512d(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00005329(void) {
    func_0x00004f29();
    FUN_0000512d();
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005543(void) {
    int in_r0;
    int in_r7;

    *(char *) (in_r7 + 10) = (char) in_r0;
    *(char *) (in_r7 + 0xb) = (char) in_r0;
    *(short *) (in_r0 + 0x14) = (short) in_r0;
    *(short *) (in_r0 + 0x16) = (short) in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005575(undefined4 param_1, int param_2) {
    undefined in_r0;

    *(undefined *) (param_2 + 5) = in_r0;
    *(undefined *) (param_2 + 0xf) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005639(int param_1, int param_2, undefined4 param_3, int param_4) {
    undefined in_r0;
    int unaff_r9;

    *(undefined *) (param_1 + 7) = in_r0;
    *(undefined *) (param_2 + 9) = in_r0;
    *(undefined *) (param_1 + 0xe) = in_r0;
    *(undefined *) (param_4 + 0xf) = in_r0;
    *(undefined *) (unaff_r9 + 4) = in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000056ce(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000575a(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;
    int iVar1;

    iVar1 = in_r0 * 2;
    *(short *) (param_3 + iVar1) = (short) iVar1;
    *(undefined4 *) (*(char *) (param_3 + iVar1) * 2) = param_2;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000575f(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000057ca(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005812(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000585b(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000058c6(void) {
    int in_r0;
    undefined4 in_r7;

    *(undefined4 *) (in_r0 * 2) = in_r7;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000058d0(void) {
    int in_r0;

    *(char *) (in_r0 * 2) = (char) in_r0;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000058ea(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005ab8(undefined4 param_1, undefined4 param_2, int param_3) {
    undefined *in_r0;
    int iVar1;
    undefined unaff_r8;
    undefined8 uVar2;

    *in_r0 = (char) in_r0;
    uVar2 = (*(code *) (in_r0 + 0x5abc))();
    iVar1 = (int) uVar2;
    *(short *) (param_3 + iVar1) = (short) uVar2;
    *(undefined *) (iVar1 * 2) = unaff_r8;
    *(undefined4 *) ((int) ((ulonglong) uVar2 >> 0x20) + 4) = *(undefined4 *) (param_3 + iVar1);
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005b02(undefined4 param_1, undefined4 param_2, int param_3) {
    int in_r0;

    *(short *) (param_3 + in_r0) = (short) in_r0;
    *(int *) (in_r0 * 2) = (int) PTR_LAB_00000ca2_1_00005b80._2_2_;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005b72(void) {
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005ecf(void) {
    undefined *in_r0;
    undefined in_r2;

    *in_r0 = in_r2;
    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


