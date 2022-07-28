#include "BTL_A3_2.PRG.h"


int FUN_00000090(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short extraout_var;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = DAT_00000100;
  iVar4 = *(int *)(DAT_00000100 + 0x18);
  iVar6 = (short)((*DAT_000000f4 * 2 + *DAT_000000f8) * 0x70) + DAT_000000fc;
  sVar1 = *(short *)(iVar6 + 0x34);
  iVar5 = *(int *)(DAT_00000100 + 0x1c);
  sVar2 = *(short *)(iVar6 + 0x36);
  iVar6 = (*DAT_00000104)(*(undefined4 *)(DAT_00000100 + 0x20),
                          *(short *)(iVar6 + 0x38) * 0x10000 - *(int *)(iVar6 + 8));
  (*DAT_00000108)(iVar4 * sVar1 + iVar5 * sVar2 + iVar6,*(undefined4 *)(iVar3 + 0x1c));
  return (int)extraout_var;
}



void FUN_0000010c(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined2 uVar8;
  ushort uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar11 = (*DAT_00000244)();
  pcVar3 = DAT_00000248;
  *(int *)(*(int *)(iVar11 + 0x10) + 0x1c) = param_1;
  (*pcVar3)();
  (*DAT_0000024c)();
  (*DAT_00000258)(DAT_00000254,DAT_00000250,(int)DAT_0000022a,0);
  (*DAT_00000258)(DAT_00000260,DAT_0000025c,(int)DAT_0000022a,0);
  (*DAT_00000268)(DAT_00000264);
  (*DAT_00000270)(DAT_0000026c);
  (*DAT_00000278)(DAT_00000274);
  pcVar3 = DAT_0000027c;
  (*DAT_0000027c)(DAT_00000284,DAT_00000280,0);
  (*pcVar3)(DAT_0000028c,DAT_00000288,0);
  (*pcVar3)(DAT_00000294,DAT_00000290,0);
  uVar4 = DAT_000002a4;
  iVar11 = DAT_00000298;
  *(ushort *)(*(int *)(DAT_00000298 + 4) + 0xe) =
       DAT_0000022c | *(ushort *)(*(int *)(DAT_00000298 + 4) + 0xe) & (ushort)PTR_LAB_0000029c;
  *(undefined4 *)(iVar11 + 0x14) = 1;
  *(undefined4 *)(*(int *)(iVar11 + 4) + 0x10) = DAT_000002a0;
  *(undefined4 *)(iVar11 + 0x14) = 1;
  (*DAT_000002a8)(0,uVar4);
  (*DAT_000002a8)(1,DAT_000002ac);
  iVar12 = DAT_000002b4;
  (*DAT_000002b8)(6,DAT_000002b4,DAT_00000230 + DAT_000002b4,DAT_000002b0,(int)DAT_0000022e);
  (*DAT_000002b8)(7,DAT_00000234 + iVar12,DAT_00000232 + iVar12,DAT_000002bc,(int)DAT_0000022e);
  (*DAT_000002c4)(5,DAT_000002c0);
  uVar5 = DAT_000002c8;
  uVar1 = DAT_00000236;
  *DAT_000002cc = DAT_00000236;
  uVar2 = DAT_0000023a;
  iVar12 = (int)DAT_00000238;
  iVar13 = (int)DAT_0000023c;
  *(uint *)(*(int *)(iVar11 + 4) + iVar12) =
       *(uint *)(*(int *)(iVar11 + 4) + iVar12) & uVar5 | (uint)PTR_LAB_000002d0;
  puVar6 = PTR_LAB_000002d8;
  *DAT_000002d4 = uVar2;
  puVar7 = PTR_LAB_0000fefe_1_000002dc;
  *(uint *)(*(int *)(iVar11 + 4) + iVar12 + 4) =
       uVar5 & *(uint *)(*(int *)(iVar11 + 4) + iVar12 + 4) | (uint)puVar6;
  *(ushort *)(*(int *)(iVar11 + 4) + iVar13) =
       *(ushort *)(*(int *)(iVar11 + 4) + iVar13) & (ushort)puVar7;
  *(undefined4 *)(iVar11 + 0x14) = 1;
  *(undefined2 *)(*(int *)(iVar11 + 4) + iVar12 + 0x48) = DAT_0000023e;
  *(undefined2 *)(*(int *)(iVar11 + 4) + iVar12 + 0x4a) = DAT_00000240;
  uVar8 = DAT_0000040c;
  uVar2 = DAT_0000040a;
  *(undefined2 *)(*(int *)(iVar11 + 4) + iVar12 + 0x4c) = DAT_0000040a;
  *(undefined2 *)(*(int *)(iVar11 + 4) + iVar12 + 0x4e) = uVar2;
  *(undefined4 *)(iVar11 + 0x14) = 1;
  *(undefined2 *)(*(int *)(iVar11 + 4) + iVar12 + 0x50) = uVar8;
  *(undefined2 *)(*(int *)(iVar11 + 4) + iVar12 + 0x52) = uVar1;
  uVar10 = DAT_00000424;
  *(undefined2 *)(*(int *)(iVar11 + 4) + iVar12 + 0x54) = 3;
  *(undefined4 *)(iVar11 + 0x14) = 1;
  uVar4 = DAT_00000420;
  *(undefined4 *)(param_1 + 0x3c) = DAT_0000041c;
  pcVar3 = DAT_00000428;
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  (*pcVar3)(uVar10);
  uVar9 = DAT_00000410;
  iVar12 = (int)(short)DAT_00000410;
  *(ushort *)(iVar13 + *(int *)(iVar11 + 4)) =
       *(ushort *)(*(int *)(iVar11 + 4) + iVar13) & (ushort)PTR_LAB_0000fefe_1_0000042c;
  *(undefined4 *)(iVar11 + 0x14) = 1;
  iVar13 = (int)DAT_0000040e;
  *(ushort *)(*(int *)(iVar11 + 4) + iVar13) =
       *(ushort *)(*(int *)(iVar11 + 4) + iVar13) & (ushort)PTR_LAB_0000f8fe_1_00000430 | uVar9;
  *(undefined4 *)(iVar11 + 0x14) = 1;
  *(ushort *)(*(int *)(iVar11 + 4) + iVar13) =
       *(ushort *)(iVar13 + *(int *)(iVar11 + 4)) & (ushort)DAT_00000434 | 3;
  *(undefined4 *)(iVar11 + 0x14) = 1;
  *(ushort *)(iVar13 + *(int *)(iVar11 + 4)) =
       *(ushort *)(*(int *)(iVar11 + 4) + iVar13) & (ushort)PTR_LAB_0000cffe_1_00000438 |
       (ushort)(iVar12 << 2);
  *(undefined4 *)(iVar11 + 0x14) = 1;
  *(undefined *)(param_1 + 0x50) = 0x10;
  *(undefined *)(param_1 + 0x51) = 0x12;
  *(undefined *)(param_1 + 0x52) = 0x14;
  iVar13 = *(int *)(iVar11 + 4);
  *(ushort *)(iVar13 + DAT_00000412) =
       (short)*(char *)(param_1 + 0x50) | (ushort)((int)*(char *)(param_1 + 0x51) << 8);
  iVar12 = (int)DAT_00000414;
  *(short *)(iVar13 + iVar12) = (short)*(char *)(param_1 + 0x52);
  *(undefined2 *)(iVar13 + iVar12 + 2) = 0;
  *(undefined2 *)(iVar13 + iVar12 + 4) = 0;
  *(undefined4 *)(iVar11 + 0x14) = 1;
  uVar4 = DAT_0000043c;
  *(undefined *)(param_1 + 0x55) = 8;
  *(short *)(*(int *)(iVar11 + 4) + (int)DAT_00000416) = (short)*(char *)(param_1 + 0x55);
  *(undefined4 *)(iVar11 + 0x14) = 1;
                    // WARNING: Could not recover jumptable at 0x000003c2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00000440)(uVar4);
  return;
}



void FUN_00000640(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  piVar1 = DAT_00000688;
  iVar8 = (short)((*DAT_0000067c * 2 + *DAT_00000680) * 0x70) + DAT_00000684;
  iVar3 = DAT_0000068c;
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar3 = *(int *)(param_1 + 0x18);
  }
  iVar5 = *(int *)(param_1 + 0x1c);
  iVar4 = *(int *)(param_1 + 0x20);
  iVar6 = (int)*(short *)(param_1 + 0x24) + (int)*(short *)(param_1 + 0x28);
  *(short *)(iVar8 + 0x34) = (short)((int)(iVar6 + (uint)(iVar6 < 0)) >> 1);
  iVar6 = (int)*(short *)(param_1 + 0x26) + (int)*(short *)(param_1 + 0x2a);
  *(short *)(iVar8 + 0x36) = (short)((int)(iVar6 + (uint)(iVar6 < 0)) >> 1);
  *(undefined2 *)(iVar8 + 0x38) = *(undefined2 *)(param_1 + 0x32);
  *(undefined2 *)(iVar8 + 0x3c) = *(undefined2 *)(iVar8 + 0x34);
  *(undefined2 *)(iVar8 + 0x3e) = *(undefined2 *)(iVar8 + 0x36);
  pcVar2 = DAT_000007e0;
  *(undefined2 *)(iVar8 + 0x40) = 0;
  (*pcVar2)(DAT_000007dc - iVar3,-iVar5);
  uVar7 = *(undefined4 *)(param_1 + 0x3c);
  (*DAT_000007e4)(uVar7);
  (*DAT_000007e8)(-iVar4);
  iVar5 = (int)*(short *)(iVar8 + 0x34) - (int)*(short *)(iVar8 + 0x3c);
  iVar4 = (int)*(short *)(iVar8 + 0x36) - (int)*(short *)(iVar8 + 0x3e);
  iVar6 = (int)*(short *)(iVar8 + 0x38) - (int)*(short *)(iVar8 + 0x40);
  iVar3 = (*DAT_000007ec)(*(undefined4 *)(param_1 + 0x3c),*(int *)(param_1 + 0xc) << 4,param_3,
                          param_4,uVar7);
  pcVar2 = DAT_000007ec;
  piVar1[9] = (((iVar3 - *piVar1 * iVar5) - piVar1[1] * iVar4) - piVar1[2] * iVar6) +
              *(short *)(iVar8 + 0x3c) * -0x10000;
  iVar3 = (*pcVar2)(*(undefined4 *)(param_1 + 0x3c),*(int *)(param_1 + 0x14) << 4);
  piVar1[10] = (((iVar3 - piVar1[3] * iVar5) - piVar1[4] * iVar4) - piVar1[5] * iVar6) +
               *(short *)(iVar8 + 0x3e) * -0x10000;
  piVar1[0xb] = ((((*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x38)) * 0x10 - piVar1[6] * iVar5)
                 - piVar1[7] * iVar4) - piVar1[8] * iVar6) + *(short *)(iVar8 + 0x40) * -0x10000;
  return;
}



void FUN_00000baa(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x60); iVar2 = iVar2 + 1) {
    iVar4 = *(int *)(iVar2 * 4 + *(int *)(param_1 + 0x4c));
    if (iVar4 != 0) {
      for (iVar1 = 0; iVar1 < *(int *)(*(int *)(param_1 + 0x48) + iVar2 * 8 + 4); iVar1 = iVar1 + 1)
      {
        iVar6 = iVar5 * 0xc;
        puVar3 = (undefined4 *)(iVar1 * 0xc + iVar4);
        iVar5 = iVar5 + 1;
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar6) = *puVar3;
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar6 + 4) = puVar3[1];
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar6 + 8) = puVar3[2];
      }
    }
  }
  return;
}



void FUN_00000c2c(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x60); iVar1 = iVar1 + 1) {
    if (*(int *)(iVar1 * 4 + *(int *)(param_1 + 0x4c)) != 0) {
      for (iVar4 = 0; iVar4 < *(int *)(*(int *)(param_1 + 0x48) + iVar1 * 8 + 4); iVar4 = iVar4 + 1)
      {
        iVar2 = iVar3 * 0xc;
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar2) = *param_2;
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar2 + 4) = param_2[1];
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar2 + 8) = param_2[2];
        iVar3 = iVar3 + 1;
      }
    }
  }
  return;
}



int FUN_00000c9a(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x6c) = 0;
  iVar2 = 0;
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 100); iVar3 = iVar3 + 1) {
    iVar1 = FUN_00000cce(param_1,iVar3);
    iVar2 = iVar2 + iVar1;
  }
  return iVar2;
}



int FUN_00000cce(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  param_2 = param_2 * 100;
  iVar2 = 0;
  if ((*(uint *)(*(int *)(param_1 + 0x58) + param_2 + 0x50) & DAT_00000d74) != 0) {
    *(undefined4 *)(param_1 + 0x6c) = 1;
    iVar2 = *(int *)(param_1 + 0x58) + param_2;
    *(uint *)(iVar2 + 0x50) = *(uint *)(iVar2 + 0x50) & DAT_00000d78;
    iVar2 = *(int *)(param_1 + 0x58) + param_2;
    *(uint *)(iVar2 + 0x50) = *(uint *)(iVar2 + 0x50) & DAT_00000d7c;
    iVar2 = (int)*(short *)(*(int *)(param_1 + 0x58) + param_2 + 0x58);
    if (iVar2 != 0) {
      *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | DAT_00000d80;
    }
    (*DAT_00000d84)(*(undefined4 *)(param_1 + 0x68),*(int *)(param_1 + 0x58) + param_2,0);
    if (iVar2 != 0) {
      cVar1 = *(char *)(*(int *)(param_1 + 0x58) + param_2 + 0x5e);
      if (cVar1 == '\0') {
        if (*(int *)(param_1 + DAT_00000e8a) != 0) {
          (**(code **)(param_1 + DAT_00000e8a))
                    (*(undefined4 *)(param_1 + 0x68),*(int *)(param_1 + 0x58) + param_2);
        }
      }
      else if (cVar1 == '\x01') {
        if (*(int *)(param_1 + DAT_00000e8c) != 0) {
          (**(code **)(param_1 + DAT_00000e8c))
                    (*(undefined4 *)(param_1 + 0x68),*(int *)(param_1 + 0x58) + param_2);
        }
      }
      else if (cVar1 == '\x02') {
        if (*(int *)(param_1 + DAT_00000e8e) != 0) {
          (**(code **)(param_1 + DAT_00000e8e))
                    (*(undefined4 *)(param_1 + 0x68),*(int *)(param_1 + 0x58) + param_2);
        }
      }
      else if ((cVar1 == '\x03') && (*(int *)(param_1 + DAT_00000e90) != 0)) {
        (**(code **)(param_1 + DAT_00000e90))
                  (*(undefined4 *)(param_1 + 0x68),*(int *)(param_1 + 0x58) + param_2);
      }
    }
  }
  return iVar2;
}



int FUN_00000ea0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 <= *(int *)(param_1 + 0x60)) {
    iVar2 = 0;
    if (0 < param_2) {
      do {
        iVar1 = iVar2 * 8;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + *(int *)(iVar1 + *(int *)(param_1 + 0x48) + 4);
      } while (iVar2 < param_2);
    }
    if (param_3 <= *(int *)(iVar2 * 8 + *(int *)(param_1 + 0x48) + 4)) {
      return (iVar3 + param_3) * 100 + *(int *)(param_1 + 0x58);
    }
  }
  return 0;
}



int FUN_00001ddc(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + DAT_00001e1c) == 7) {
    (*DAT_000029f8)(param_1 + 8,6,0xffffffff);
    (*DAT_000029f8)(DAT_000029f0 + param_1,3,0xffffffff);
    iVar1 = (int)DAT_000029f2;
    *(int *)(param_1 + iVar1) = param_1 + 8;
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + DAT_00001e1e);
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      return iVar1;
    }
    (*DAT_00002910)(param_1 + 8,1,0xffffffff);
    (*DAT_00002910)(DAT_000028ec + param_1,1,0xffffffff);
    iVar1 = (int)DAT_000028ee;
    *(int *)(param_1 + iVar1) = param_1 + 8;
    return iVar1;
  }
  (*DAT_00002910)(param_1 + 8,0,0xffffffff);
  (*DAT_00002910)(DAT_000028ec + param_1,0,0xffffffff);
  iVar1 = (int)DAT_000028ee;
  *(int *)(param_1 + iVar1) = param_1 + 8;
  return iVar1;
}



uint FUN_00001fe6(int param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar2 = *(uint *)(param_1 + DAT_00002058);
  if (uVar2 == 0) {
    if (*DAT_00002068 <= *(int *)(param_1 + DAT_0000205a)) {
      (*DAT_000022f8)(0);
      (*DAT_000022fc)(0);
      pcVar1 = DAT_00002300;
      iVar4 = 0;
      do {
        if (((*(int *)(param_1 + DAT_000022f4) != 0) || (iVar4 != 2)) &&
           ((*(int *)(param_1 + DAT_000022f4) != 1 || (iVar4 != 0)))) {
          (*pcVar1)(iVar4);
        }
        iVar6 = iVar4 + 1;
        if (((*(int *)(param_1 + DAT_000022f4) != 0) || (iVar6 != 2)) &&
           ((*(int *)(param_1 + DAT_000022f4) != 1 || (iVar6 != 0)))) {
          (*pcVar1)(iVar6);
        }
        iVar6 = iVar4 + 2;
        if (((*(int *)(param_1 + DAT_000022f4) != 0) || (iVar6 != 2)) &&
           ((*(int *)(param_1 + DAT_000022f4) != 1 || (iVar6 != 0)))) {
          (*pcVar1)(iVar6);
        }
        uVar2 = *(uint *)(param_1 + DAT_000022f4);
        uVar5 = iVar4 + 3;
        if (((uVar2 != 0) || (uVar3 = uVar5, uVar5 != 2)) &&
           ((uVar2 != 1 || (uVar3 = uVar2, uVar5 != 0)))) {
          uVar3 = (*pcVar1)(uVar5);
        }
        iVar4 = iVar4 + 4;
      } while (iVar4 < 4);
      return uVar3;
    }
  }
  else {
    if (uVar2 != 1) {
      return uVar2;
    }
    if (*(int *)(param_1 + DAT_0000205c) != 7) {
      (*DAT_00002210)(0);
      iVar4 = *(int *)(param_1 + DAT_0000220c + -0x3c);
      uVar2 = *(int *)(param_1 + DAT_0000220c) + 2U & 3;
      if (((iVar4 != 0) || (uVar2 != 2)) && ((iVar4 != 1 || (uVar2 != 0)))) {
        (*DAT_00002214)(uVar2);
      }
      (*DAT_00002218)(0);
      pcVar1 = DAT_0000221c;
      iVar4 = *(int *)(param_1 + DAT_0000220c + -0x3c);
      uVar2 = *(uint *)(param_1 + DAT_0000220c) & 3;
      if (((iVar4 != 0) || (uVar2 != 2)) && ((iVar4 != 1 || (uVar2 != 0)))) {
        (*DAT_0000221c)(uVar2);
      }
      iVar4 = *(int *)(param_1 + DAT_0000220c + -0x3c);
      uVar2 = *(int *)(param_1 + DAT_0000220c) + 1U & 3;
      if (((iVar4 != 0) || (uVar2 != 2)) && ((iVar4 != 1 || (uVar2 != 0)))) {
        (*pcVar1)(uVar2);
      }
      uVar2 = *(uint *)(param_1 + DAT_0000220c + -0x3c);
      uVar5 = *(int *)(param_1 + DAT_0000220c) - 1U & 3;
      if (((uVar2 != 0) || (uVar3 = uVar5, uVar5 != 2)) &&
         ((uVar2 != 1 || (uVar3 = uVar2, uVar5 != 0)))) {
        uVar3 = (*pcVar1)(uVar5);
      }
      return uVar3;
    }
  }
  (*DAT_0000206c)(0);
  pcVar1 = DAT_00002070;
  iVar4 = 0;
  do {
    if (iVar4 != *(int *)(param_1 + DAT_00002050)) {
      if (*(int *)(param_1 + DAT_0000205e) == 0) {
        if (iVar4 != 2) {
          (*pcVar1)(iVar4);
        }
      }
      else if (iVar4 != 0) {
        (*pcVar1)(iVar4);
      }
    }
    iVar6 = iVar4 + 1;
    if (iVar6 != *(int *)(param_1 + DAT_00002148)) {
      if (*(int *)(param_1 + DAT_0000214a) == 0) {
        if (iVar6 != 2) {
          (*pcVar1)(iVar6);
        }
      }
      else if (iVar6 != 0) {
        (*pcVar1)(iVar6);
      }
    }
    iVar6 = iVar4 + 2;
    if (iVar6 != *(int *)(param_1 + DAT_00002148)) {
      if (*(int *)(param_1 + DAT_0000214a) == 0) {
        if (iVar6 != 2) {
          (*pcVar1)(iVar6);
        }
      }
      else if (iVar6 != 0) {
        (*pcVar1)(iVar6);
      }
    }
    iVar6 = iVar4 + 3;
    if (iVar6 != *(int *)(param_1 + DAT_00002148)) {
      if (*(int *)(param_1 + DAT_0000214a) == 0) {
        if (iVar6 != 2) {
          (*pcVar1)(iVar6);
        }
      }
      else if (iVar6 != 0) {
        (*pcVar1)(iVar6);
      }
    }
    iVar4 = iVar4 + 4;
  } while (iVar4 < 4);
  (*DAT_0000214c)(0);
  if (*(int *)(param_1 + DAT_0000214a) == 0) {
    uVar2 = *(uint *)(param_1 + DAT_00002148);
    if (uVar2 != 2) {
                    // WARNING: Could not recover jumptable at 0x0000211e. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar2 = (*DAT_00002150)(*(undefined4 *)(param_1 + DAT_00002148));
      return uVar2;
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + DAT_00002148);
    if (uVar2 != 0) {
                    // WARNING: Could not recover jumptable at 0x00002138. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar2 = (*DAT_00002150)(*(undefined4 *)(param_1 + DAT_00002148));
      return uVar2;
    }
  }
  return uVar2;
}



int FUN_00002384(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_000023ac;
  iVar2 = *(int *)(param_1 + DAT_000023a8);
  switch(iVar2) {
  case 0:
    (*DAT_000024c4)(param_1);
    iVar2 = (*DAT_000024c8)();
    iVar2 = (int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x10) + 0x1d);
    if (iVar2 == 0) {
                    // WARNING: Could not recover jumptable at 0x000023e8. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar2 = (*DAT_000024cc)(param_1);
      return iVar2;
    }
    break;
  case 1:
    iVar2 = (*DAT_000023ac)(param_1);
    if (iVar2 != 0) {
                    // WARNING: Could not recover jumptable at 0x00002400. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar2 = (*DAT_000024d0)(param_1);
      return iVar2;
    }
    break;
  case 2:
    (*DAT_000024d4)(param_1);
    iVar2 = (*pcVar1)(param_1);
    if (iVar2 != 0) {
                    // WARNING: Could not recover jumptable at 0x0000241e. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar2 = (*DAT_000024d8)(param_1);
      return iVar2;
    }
    break;
  case 3:
    (*DAT_000024dc)(param_1);
    iVar2 = (*pcVar1)(param_1);
    if (iVar2 != 0) {
                    // WARNING: Could not recover jumptable at 0x0000243c. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar2 = (*DAT_000024e0)(param_1);
      return iVar2;
    }
    break;
  case 4:
    (*DAT_000024e4)(param_1);
    iVar2 = (*pcVar1)(param_1);
    if (iVar2 != 0) {
                    // WARNING: Could not recover jumptable at 0x0000245a. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar2 = (*DAT_000024e8)(param_1);
      return iVar2;
    }
    break;
  case 5:
    (*DAT_000024ec)(param_1);
    iVar2 = (*pcVar1)(param_1);
    if (iVar2 != 0) {
                    // WARNING: Could not recover jumptable at 0x00002474. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar2 = (*DAT_000024f0)(param_1);
      return iVar2;
    }
    break;
  case 6:
    (*DAT_000024f4)(param_1);
    iVar2 = (*pcVar1)(param_1);
    if (iVar2 != 0) {
                    // WARNING: Could not recover jumptable at 0x0000248e. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar2 = (*DAT_000024f8)(param_1);
      return iVar2;
    }
    break;
  case 7:
    (*DAT_000024fc)(param_1);
    iVar2 = (*DAT_00002500)();
    if (((iVar2 == 0) || (iVar2 = (*DAT_00002504)(), iVar2 == 1)) &&
       (iVar2 = (*DAT_00002508)(param_1), iVar2 != 0)) {
                    // WARNING: Could not recover jumptable at 0x000024be. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar2 = (*DAT_0000250c)(param_1);
      return iVar2;
    }
    break;
  case 8:
    (*DAT_00002638)(param_1);
    iVar2 = (*pcVar1)(param_1);
    if (iVar2 != 0) {
                    // WARNING: Could not recover jumptable at 0x00002526. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar2 = (*DAT_0000263c)(param_1);
      return iVar2;
    }
    break;
  case 9:
    (*DAT_00002640)(param_1);
    iVar2 = (*pcVar1)(param_1);
    if (iVar2 != 0) {
                    // WARNING: Could not recover jumptable at 0x00002540. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar2 = (*DAT_00002644)(param_1);
      return iVar2;
    }
  }
  return iVar2;
}



void FUN_000026c8(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_24;
  undefined4 uStack32;
  undefined4 uStack28;
  int local_18;
  int iStack20;
  int iStack16;
  
  uVar1 = *(undefined4 *)(*DAT_00002774 + (int)DAT_00002752 + 0xc);
  uVar2 = (*DAT_00002758)();
  local_18 = (*DAT_00002760)(uVar2 >> 0x10,PTR_LAB_00002778);
  local_18 = local_18 + DAT_0000277c;
  uVar2 = (*DAT_00002758)();
  iStack20 = (*DAT_00002760)(uVar2 >> 0x10,PTR_LAB_00002780);
  uStack28 = 0;
  uStack32 = 0;
  local_24 = 0;
  if (*(int *)(param_1 + DAT_00002754) == 0) {
    iVar4 = *DAT_00002784;
    iVar3 = DAT_00002784[1];
    iStack16 = DAT_00002784[2];
  }
  else {
    iVar4 = *DAT_000028f4;
    iVar3 = DAT_000028f4[1];
    iStack16 = DAT_000028f4[2];
  }
  iStack20 = iStack20 + iVar3;
  local_18 = local_18 + iVar4;
  (*DAT_00002904)(*(undefined4 *)(*DAT_00002900 + (int)DAT_000028e8 + 0xc),DAT_000028fc,&local_18,0,
                  0,DAT_000028f8,0,0);
  (*DAT_0000290c)(param_1,uVar1,DAT_000028ea + param_1,&local_18,&local_24,0,0,0xffffffd4,
                  DAT_00002908,0,0,0,DAT_000028f8,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00004f2e(int param_1)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar4 = DAT_00005050;
  iVar3 = (int)_LAB_00005039_1;
  *(undefined4 *)(param_1 + iVar3) = 0;
  uVar1 = _LAB_0000503b_1;
  iVar6 = (int)DAT_0000503e;
  *(undefined4 *)(param_1 + iVar3 + -4) = 0;
  *(undefined4 *)(param_1 + iVar3 + -8) = 0;
  *(undefined4 *)(param_1 + iVar3 + -4) = uVar4;
  uVar7 = *(undefined4 *)
           ((short)((ushort)((uint)*(undefined4 *)(param_1 + iVar3 + -8) >> 0x10) & uVar1) * 4 +
           DAT_00005054);
  uVar4 = (*DAT_0000505c)(uVar7,*(undefined4 *)
                                 ((short)((ushort)((uint)*(undefined4 *)(param_1 + DAT_00005040) >>
                                                  0x10) & uVar1) * 4 + DAT_00005058),iVar6);
  pcVar2 = DAT_00005060;
  *(undefined4 *)(DAT_00005042 + param_1) = uVar4;
  uVar4 = (*pcVar2)(-*(int *)((short)((ushort)((uint)*(undefined4 *)(param_1 + DAT_00005044) >> 0x10
                                              ) & uVar1) * 4 + DAT_00005058),iVar6);
  pcVar2 = DAT_0000505c;
  *(undefined4 *)(DAT_00005046 + param_1) = uVar4;
  uVar4 = (*pcVar2)(uVar7,*(undefined4 *)
                           ((short)((ushort)((uint)*(undefined4 *)(param_1 + DAT_00005040) >> 0x10)
                                   & uVar1) * 4 + DAT_00005054),iVar6);
  *(undefined4 *)(DAT_00005048 + param_1) = uVar4;
  pcVar2 = DAT_00005064;
  iVar6 = (int)DAT_00005042;
  iVar3 = (*DAT_00005064)();
  *(int *)(iVar6 + param_1) =
       *(int *)(iVar6 + param_1) + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + 8);
  iVar6 = (int)DAT_00005046;
  iVar3 = (*pcVar2)();
  *(int *)(iVar6 + param_1) =
       *(int *)(iVar6 + param_1) + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + 0xc);
  iVar5 = (int)DAT_00005048;
  iVar3 = (*pcVar2)();
  iVar6 = (int)DAT_00005042;
  *(int *)(iVar5 + param_1) =
       *(int *)(iVar5 + param_1) + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + 0x10);
  (*DAT_00005068)(iVar6 + param_1);
  iVar3 = (*pcVar2)();
  (*DAT_0000506c)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + 8);
  (*DAT_00005070)();
  iVar3 = (int)DAT_0000504c;
  *(int *)(param_1 + iVar3) = (int)DAT_0000504a;
  *(undefined4 *)(param_1 + iVar3 + -0xc) = 9;
  *(undefined4 *)(param_1 + iVar3 + 4) = 0;
  *(undefined4 *)(param_1 + iVar3 + 8) = 0x3c;
  return;
}



uint FUN_00005384(int param_1)

{
  code *pcVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint unaff_r11;
  int iVar8;
  undefined auStack72 [36];
  int local_24;
  
  pcVar1 = DAT_00005474;
  if (*(int *)(param_1 + DAT_0000546c) != 0) {
    if (*(int *)(param_1 + DAT_0000546c) == 1) {
      iVar7 = (*DAT_00005474)();
      if (((((int)*(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_00005470) & 0xffU) ==
            *(uint *)(param_1 + DAT_00005470 + 0x4c)) ||
          (iVar7 = (*pcVar1)(),
          ((int)*(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_00005470) & 0xffU) ==
          (*(int *)(param_1 + DAT_00005470 + 0x4c) - 1U & 3))) ||
         (iVar7 = (*pcVar1)(),
         ((int)*(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_00005470) & 0xffU) ==
         (*(int *)(param_1 + DAT_00005470 + 0x4c) + 1U & 3))) {
        (*DAT_00005484)(param_1);
        iVar7 = FUN_000055e0(param_1);
        if (iVar7 == 0) {
          unaff_r11 = 5;
        }
        else {
          unaff_r11 = 6;
        }
      }
      else {
        unaff_r11 = 1;
      }
    }
    goto LAB_00005452;
  }
  if (*(int *)(param_1 + DAT_0000546e) < *DAT_00005478) {
    iVar7 = (*DAT_00005474)();
    if (((int)*(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_00005470) & 0xffU) !=
        *(uint *)(param_1 + DAT_00005470 + 0x4c)) {
      unaff_r11 = 1;
      goto LAB_00005452;
    }
    uVar5 = (*DAT_00005480)();
    if ((uVar5 & 1) != 0) {
      unaff_r11 = 2;
      goto LAB_00005452;
    }
  }
  else {
    (*DAT_0000547c)(param_1);
  }
  unaff_r11 = 3;
LAB_00005452:
  *(int *)(param_1 + DAT_0000546e) = *(int *)(param_1 + DAT_0000546e) + 1;
  pcVar1 = DAT_000055c4;
  if (((unaff_r11 != 1) && (unaff_r11 != 2)) &&
     ((unaff_r11 != 3 && (*(int *)(param_1 + DAT_000055c2) != 0)))) {
    iVar7 = 0;
    iVar8 = 0;
    do {
      local_24 = iVar8;
      (*pcVar1)(*(undefined4 *)(DAT_000055c2 + param_1 + iVar8));
      iVar6 = (int)DAT_000055c2;
      *(undefined4 *)(DAT_000055c2 + param_1 + local_24) = 0;
      local_24 = iVar8 + 4;
      (*pcVar1)(*(undefined4 *)(iVar6 + param_1 + iVar8 + 4));
      iVar6 = (int)DAT_000055c2;
      *(undefined4 *)(DAT_000055c2 + param_1 + local_24) = 0;
      local_24 = iVar8 + 8;
      (*pcVar1)(*(undefined4 *)(iVar6 + param_1 + iVar8 + 8));
      iVar7 = iVar7 + 3;
      *(undefined4 *)(DAT_000055c2 + param_1 + local_24) = 0;
      iVar8 = iVar8 + 0xc;
    } while (iVar7 < 6);
  }
  if (unaff_r11 == 1) {
                    // WARNING: Could not recover jumptable at 0x0000551c. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar5 = (*DAT_000055c8)(param_1);
    return uVar5;
  }
  if (unaff_r11 == 2) {
                    // WARNING: Could not recover jumptable at 0x00005534. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar5 = (*DAT_000055cc)(param_1);
    return uVar5;
  }
  if (unaff_r11 != 3) {
    if (unaff_r11 == 4) {
                    // WARNING: Could not recover jumptable at 0x00005564. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar5 = (*DAT_000055d4)(param_1);
      return uVar5;
    }
    if (unaff_r11 != 5) {
      if (unaff_r11 != 6) {
        if (unaff_r11 != 8) {
          return unaff_r11;
        }
                    // WARNING: Could not recover jumptable at 0x000055aa. Too many branches
                    // WARNING: Treating indirect jump as call
        uVar5 = (*DAT_000055dc)(param_1);
        return uVar5;
      }
      iVar7 = (int)DAT_000056ce;
      iVar8 = (int)DAT_000056d0;
      *(undefined4 *)(param_1 + iVar7) = 6;
      iVar6 = (int)DAT_000056d2;
      *(int *)(param_1 + iVar7 + 0xc) = iVar8;
      (*DAT_000056dc)(*(short *)(param_1 + iVar7 + 0xe) + iVar6);
      (*DAT_000056e0)(3,0x5a,0);
      (*DAT_000056e4)(*(undefined4 *)(param_1 + DAT_000056ca));
      pcVar1 = DAT_000056d8;
      if (*(int *)(param_1 + DAT_000056c8) == 0) {
        iVar7 = (*DAT_000056d8)();
        if (*(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_000056cc) != '\0') {
          return (int)DAT_000056cc;
        }
      }
      else {
        iVar7 = (*DAT_000056d8)();
        uVar5 = (int)*(char *)((int)DAT_000056cc + *(int *)(*(int *)(iVar7 + 0x10) + 4)) & 0xff;
        if (uVar5 != 2) {
          return uVar5;
        }
      }
      iVar7 = (int)DAT_000056d4;
      *(undefined4 *)(param_1 + iVar7) = 0;
      *(undefined4 *)(param_1 + iVar7 + -4) = 0;
      *(undefined4 *)(param_1 + iVar7 + -8) = 0;
      if (*(int *)(param_1 + DAT_000056c8) == 0) {
        *(undefined4 *)(param_1 + DAT_000056d6) = DAT_000056e8;
      }
      else {
        *(undefined4 *)(param_1 + DAT_00005808) = DAT_00005824;
      }
      (*DAT_00005828)(auStack72);
      (*DAT_0000582c)(*(undefined4 *)(param_1 + DAT_00005808),auStack72);
      (*DAT_00005830)(*(undefined4 *)(param_1 + DAT_0000580a),auStack72);
      (*DAT_00005834)(*(undefined4 *)(param_1 + DAT_0000580c),auStack72);
      (*DAT_0000583c)(DAT_00005838,DAT_0000580e + param_1,auStack72);
      iVar7 = (int)DAT_0000580e;
      *(int *)(param_1 + iVar7) = *(int *)(param_1 + iVar7) + **(int **)(DAT_00005810 + param_1);
      *(int *)(param_1 + iVar7 + 4) =
           *(int *)(param_1 + iVar7 + 4) + *(int *)(*(int *)(DAT_00005810 + param_1) + 4);
      pcVar2 = DAT_00005840;
      *(int *)(param_1 + iVar7 + 8) =
           *(int *)(param_1 + iVar7 + 8) + *(int *)(*(int *)(DAT_00005810 + param_1) + 8);
      (*pcVar2)();
      (*DAT_00005844)(DAT_0000580e + param_1);
      (*DAT_00005848)(DAT_00005812 + param_1);
      (*DAT_0000584c)();
      piVar4 = DAT_0000598c;
      puVar3 = DAT_00005850;
      if (*(int *)(param_1 + DAT_00005814) == 0) {
        iVar7 = (*pcVar1)();
        *(int *)((int)DAT_00005816 + *(int *)(*(int *)(iVar7 + 0x10) + 4)) =
             puVar3[2] + *DAT_00005854;
        iVar7 = (*pcVar1)();
        *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_00005818) = *puVar3;
        iVar7 = (*pcVar1)();
        *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0000581a) = puVar3[1];
        iVar7 = (*pcVar1)();
        *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0000581c) = puVar3[3];
        iVar7 = (*pcVar1)();
        *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0000581e) = *DAT_00005858;
        iVar7 = (*pcVar1)();
        *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_00005820) = *DAT_0000585c;
        iVar7 = (int)DAT_00005814;
        *(undefined4 *)(param_1 + iVar7) = 1;
        *(undefined4 *)(param_1 + iVar7 + 4) = DAT_00005860;
        *(undefined4 *)(param_1 + iVar7 + 8) = 0;
        *(undefined4 *)(param_1 + iVar7 + 0xc) = 0;
        iVar7 = (*pcVar1)();
        *(undefined4 *)(param_1 + DAT_00005822) =
             *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_00005816);
        iVar7 = puVar3[2];
      }
      else {
        iVar7 = (*pcVar1)();
        *(int *)((int)DAT_00005972 + *(int *)(*(int *)(iVar7 + 0x10) + 4)) = *piVar4 + *DAT_00005990
        ;
        iVar7 = (*pcVar1)();
        *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_00005974) = puVar3[2];
        iVar7 = (*pcVar1)();
        *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_00005976) = piVar4[1];
        iVar7 = (*pcVar1)();
        *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_00005978) = piVar4[3];
        iVar7 = (*pcVar1)();
        *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0000597a) = *DAT_00005994;
        iVar7 = (*pcVar1)();
        *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0000597c) = *DAT_00005998;
        iVar7 = (int)DAT_0000597e;
        *(undefined4 *)(param_1 + iVar7) = 0;
        *(undefined4 *)(param_1 + iVar7 + 4) = DAT_0000599c;
        *(undefined4 *)(param_1 + iVar7 + 8) = 0;
        *(undefined4 *)(param_1 + iVar7 + 0xc) = 0;
        iVar7 = (*pcVar1)();
        *(undefined4 *)(param_1 + DAT_00005980) =
             *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_00005972);
        iVar7 = *piVar4;
      }
      iVar8 = (int)DAT_00005982;
      *(int *)(param_1 + iVar8) = iVar7;
      *(undefined4 *)(param_1 + iVar8 + 0x2c) = DAT_000059a0;
      *(undefined4 *)(param_1 + iVar8 + 0x70U) = 0;
      return iVar8 + 0x70U;
    }
                    // WARNING: Could not recover jumptable at 0x0000557c. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar5 = (*DAT_000055d8)(param_1);
    return uVar5;
  }
                    // WARNING: Could not recover jumptable at 0x0000554c. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar5 = (*DAT_000055d0)(param_1);
  return uVar5;
}



undefined4 FUN_000055e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + DAT_000056c8) == 0) {
    if ((*(int *)(param_1 + DAT_000056ca) != 0) ||
       (iVar1 = (*DAT_000056d8)(),
       *(char *)(*(int *)(*(int *)(iVar1 + 0x10) + 4) + (int)DAT_000056cc) != '\0')) {
      return 0;
    }
  }
  else {
    if (*(int *)(param_1 + DAT_000056ca) != 2) {
      return 0;
    }
    iVar1 = (*DAT_000056d8)();
    if (*(char *)((int)DAT_000056cc + *(int *)(*(int *)(iVar1 + 0x10) + 4)) != '\x02') {
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_000061d0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined *puStack24;
  undefined4 uStack20;
  undefined4 uStack16;
  undefined4 uStack12;
  undefined4 uStack8;
  
  if (*(int *)(param_1 + DAT_0000626c) == 0) {
    uStack16 = DAT_00006288;
    local_1c = *DAT_0000628c;
    puStack24 = (undefined *)DAT_0000628c[1];
    uStack20 = DAT_0000628c[2];
  }
  else {
    uStack16 = DAT_00006290;
    local_1c = *DAT_00006294;
    puStack24 = (undefined *)DAT_00006294[1];
    uStack20 = DAT_00006294[2];
  }
  uStack12 = 0;
  uVar1 = (*DAT_00006298)();
  uStack8 = (*DAT_000062a0)(uVar1 >> 0x10,DAT_0000629c);
  puStack24 = PTR_LAB_000062a4 + (int)puStack24;
  uVar2 = (*DAT_000062ac)(*(undefined4 *)(*DAT_000062a8 + 0x8c),0x18,DAT_00006278 + -0x44,
                          (int)DAT_00006278,&local_1c,&uStack16,0x1d);
  return uVar2;
}



void FUN_000062b0(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  pcVar1 = DAT_000063d8;
  uVar3 = (*DAT_000063d8)();
  iVar4 = (*DAT_000063dc)(uVar3 >> 0x10,0x78);
  *(int *)(DAT_000063c8 + param_1) = iVar4 + DAT_000063c6;
  *(undefined4 *)(param_1 + DAT_000063ca) = 7;
  (*DAT_000063e0)(param_1);
  (*DAT_000063e4)(param_1);
  uVar3 = (*pcVar1)();
  uVar2 = DAT_000063f4;
  if ((uVar3 & 1) == 0) {
    iVar4 = (int)DAT_000063cc;
    *(undefined4 *)(param_1 + iVar4) = DAT_000063e8;
    *(undefined4 *)(param_1 + iVar4 + -4) = DAT_000063ec;
  }
  else {
    iVar4 = (int)DAT_000063cc;
    *(undefined4 *)(param_1 + iVar4) = DAT_000063f0;
    *(undefined4 *)(param_1 + iVar4 + -4) = uVar2;
  }
  if (*(int *)(param_1 + DAT_000063ce) == 0) {
    *(int *)(param_1 + DAT_000063d0) = *(int *)(param_1 + DAT_000063d0) + DAT_000063f8;
  }
  uVar3 = (*pcVar1)();
  iVar4 = (*DAT_000063dc)(uVar3 >> 0x10,DAT_000063fc);
  *(int *)(DAT_000063d2 + param_1) = iVar4 + DAT_00006400;
  return;
}



int FUN_00008208(int param_1)

{
  ushort uVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  undefined4 uVar16;
  int iVar17;
  
  puVar2 = PTR_LAB_000083c8;
  uVar1 = DAT_000083b6;
  uVar16 = *(undefined4 *)
            ((short)((ushort)((uint)**(undefined4 **)(param_1 + DAT_000083b8) >> 0x10) &
                    DAT_000083b6) * 4 + DAT_000083c4);
  iVar5 = (*DAT_000083d0)(uVar16,*(undefined4 *)
                                  ((short)((ushort)((uint)(*(undefined4 **)(param_1 + DAT_000083b8))
                                                          [1] >> 0x10) & DAT_000083b6) * 4 +
                                  DAT_000083cc),PTR_LAB_000083c8);
  pcVar3 = DAT_000083d4;
  iVar6 = (*DAT_000083d4)(-*(int *)((short)((ushort)((uint)**(undefined4 **)(param_1 + DAT_000083b8)
                                                    >> 0x10) & uVar1) * 4 + DAT_000083cc),puVar2);
  iVar7 = (*DAT_000083d0)(uVar16,*(undefined4 *)
                                  ((short)((ushort)((uint)*(undefined4 *)
                                                           (*(int *)(param_1 + DAT_000083b8) + 4) >>
                                                   0x10) & uVar1) * 4 + DAT_000083c4),puVar2);
  iVar8 = (int)DAT_000083ba;
  iVar13 = *(int *)(*(int *)(param_1 + iVar8) + 4);
  iVar14 = *(int *)(*(int *)(param_1 + iVar8) + 8);
  iVar11 = *(int *)(param_1 + 0x28);
  iVar17 = (int)DAT_000083bc;
  iVar12 = *(int *)(param_1 + 0x2c);
  iVar5 = (*pcVar3)((iVar5 + **(int **)(param_1 + iVar8)) - *(int *)(param_1 + 0x24),iVar17);
  iVar6 = (*pcVar3)((iVar6 + iVar13) - iVar11,iVar17);
  iVar7 = (*pcVar3)((iVar7 + iVar14) - iVar12,iVar17);
  pcVar4 = DAT_000083d8;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar5;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar6;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar7;
  uVar9 = (*pcVar4)();
  sVar10 = (*pcVar3)(uVar9 >> 0x10,9);
  iVar11 = (int)DAT_000083be;
  iVar7 = (int)DAT_000083c0;
  uVar9 = (*pcVar4)();
  iVar5 = (*pcVar3)(uVar9 >> 0x10,iVar7);
  uVar9 = (*pcVar4)();
  iVar6 = (*pcVar3)(uVar9 >> 0x10,iVar7);
  uVar9 = (*pcVar4)();
  iVar7 = (*pcVar3)(uVar9 >> 0x10,iVar7);
  iVar8 = (int)(short)(sVar10 * 0x24);
  piVar15 = (int *)(param_1 + 0xc + iVar8);
  *piVar15 = *piVar15 + iVar5 + iVar11;
  iVar5 = param_1 + 0xc + iVar8;
  *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + iVar6 + iVar11;
  iVar8 = iVar8 + param_1 + 0xc;
  *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + iVar7 + iVar11;
  return iVar7 + iVar11;
}



void FUN_0000841e(int param_1)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  
  pcVar1 = DAT_00008580;
  iVar3 = (*DAT_00008580)();
  iVar9 = *(int *)(param_1 + 0x24);
  iVar6 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + 8);
  iVar3 = (*pcVar1)();
  iVar10 = *(int *)(param_1 + 0x28);
  iVar7 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + 0xc);
  iVar3 = (*pcVar1)();
  pcVar1 = DAT_00008584;
  iVar13 = (int)DAT_0000857a;
  iVar11 = *(int *)(param_1 + 0x2c);
  iVar8 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + 0x10);
  iVar3 = (*DAT_00008584)(iVar6 - iVar9,iVar13);
  iVar6 = (*pcVar1)(iVar7 - iVar10,iVar13);
  iVar7 = (*pcVar1)(iVar8 - iVar11,iVar13);
  pcVar2 = DAT_00008588;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar3;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar6;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar7;
  uVar4 = (*pcVar2)();
  if ((uVar4 & 0x1f) == 0) {
    uVar4 = (*pcVar2)();
    sVar5 = (*pcVar1)(uVar4 >> 0x10,9);
    iVar7 = (int)DAT_0000857c;
    iVar9 = (int)DAT_0000857e;
    uVar4 = (*pcVar2)();
    iVar3 = (*pcVar1)(uVar4 >> 0x10,iVar7);
    uVar4 = (*pcVar2)();
    iVar6 = (*pcVar1)(uVar4 >> 0x10,iVar7);
    uVar4 = (*pcVar2)();
    iVar7 = (*pcVar1)(uVar4 >> 0x10,iVar7);
    iVar8 = (int)(short)(sVar5 * 0x24);
    piVar12 = (int *)(param_1 + 0xc + iVar8);
    *piVar12 = *piVar12 + iVar3 + iVar9;
    iVar3 = param_1 + 0xc + iVar8;
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + iVar6 + iVar9;
    iVar8 = iVar8 + param_1 + 0xc;
    *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + iVar7 + iVar9;
  }
  return;
}



int FUN_0000858c(int param_1)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  int iVar14;
  short sVar15;
  undefined4 uVar16;
  short sVar17;
  int iVar18;
  
  uVar1 = DAT_00008738;
  iVar14 = (int)DAT_0000873c;
  uVar16 = *(undefined4 *)
            ((short)((ushort)((uint)**(undefined4 **)(param_1 + DAT_0000873a) >> 0x10) &
                    DAT_00008738) * 4 + DAT_00008744);
  iVar3 = (*DAT_0000874c)(uVar16,*(undefined4 *)
                                  ((short)((ushort)((uint)(*(undefined4 **)(param_1 + DAT_0000873a))
                                                          [1] >> 0x10) & DAT_00008738) * 4 +
                                  DAT_00008748),iVar14);
  pcVar2 = DAT_00008750;
  iVar4 = (*DAT_00008750)(-*(int *)((short)((ushort)((uint)**(undefined4 **)(param_1 + DAT_0000873a)
                                                    >> 0x10) & uVar1) * 4 + DAT_00008748),iVar14);
  iVar14 = (*DAT_0000874c)(uVar16,*(undefined4 *)
                                   ((short)((ushort)((uint)*(undefined4 *)
                                                            (*(int *)(param_1 + DAT_0000873a) + 4)
                                                    >> 0x10) & uVar1) * 4 + DAT_00008744),iVar14);
  iVar18 = (int)DAT_0000873e;
  iVar12 = 0;
  sVar17 = 0;
  sVar13 = 0;
  sVar15 = 0;
  do {
    iVar10 = (int)sVar15;
    iVar5 = (int)DAT_00008740;
    piVar6 = (int *)(param_1 + 0xc + iVar10);
    *piVar6 = *piVar6 + iVar3;
    iVar7 = param_1 + 0xc + iVar10;
    *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + iVar4;
    iVar10 = iVar10 + param_1 + 0xc;
    *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + iVar14;
    iVar11 = (int)sVar13;
    iVar8 = *(int *)(*(int *)(param_1 + iVar5) + 4);
    iVar7 = *(int *)(param_1 + iVar11 + 0x28);
    iVar9 = *(int *)(*(int *)(param_1 + iVar5) + 8);
    iVar10 = *(int *)(param_1 + iVar11 + 0x2c);
    iVar5 = (*pcVar2)(**(int **)(param_1 + iVar5) - *(int *)(param_1 + iVar11 + 0x24),iVar18);
    iVar7 = (*pcVar2)(iVar8 - iVar7,iVar18);
    iVar10 = (*pcVar2)(iVar9 - iVar10,iVar18);
    iVar8 = (int)sVar17;
    piVar6 = (int *)(param_1 + 0xc + iVar8);
    iVar12 = iVar12 + 1;
    sVar17 = sVar17 + 0x24;
    *piVar6 = *piVar6 + iVar5;
    iVar5 = param_1 + 0xc + iVar8;
    *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + iVar7;
    iVar8 = iVar8 + param_1 + 0xc;
    *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + iVar10;
    sVar13 = sVar13 + 0x24;
    sVar15 = sVar15 + 0x24;
  } while (iVar12 < 10);
  return iVar10;
}



uint FUN_00008fa4(int param_1)

{
  byte bVar1;
  code *pcVar2;
  char *pcVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte bVar10;
  int iVar9;
  int iVar11;
  int iVar12;
  int iVar13;
  
  FUN_000096a4();
  iVar5 = (*DAT_00009050)();
  pcVar2 = DAT_00009054;
  if (iVar5 == 1) {
    return 1;
  }
  *(int *)(param_1 + DAT_00009032) = *(int *)(param_1 + DAT_00009032) + 1;
  (*pcVar2)(param_1);
  (*DAT_00009058)(param_1);
  (*DAT_00009038)(param_1);
  (*DAT_0000905c)(param_1);
  (*DAT_00009060)(param_1);
  FUN_00009a18(param_1);
  FUN_00009872(param_1);
  FUN_00009984(param_1);
  pcVar2 = DAT_00009064;
  bVar1 = 0;
  iVar5 = (*DAT_00009064)();
  if (*(short *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_00009034) < 1) {
    return (int)DAT_00009034;
  }
  iVar6 = (*DAT_00009068)();
  pcVar3 = DAT_0000916c;
  iVar5 = DAT_00009168;
  if (iVar6 == 0) {
    iVar5 = (int)DAT_00009036;
    *(undefined4 *)(param_1 + iVar5) = 0;
    uVar7 = iVar5 - 4;
    goto LAB_0000962c;
  }
  iVar13 = (int)DAT_00009158;
  iVar8 = (*pcVar2)();
  iVar6 = DAT_000094ac;
  if (*(char *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x10) + 0x1f) == '\0') {
    uVar7 = (uint)*pcVar3;
    if (uVar7 != 1) {
      if (uVar7 != 2) {
        return uVar7;
      }
      iVar5 = (int)DAT_000093ac;
      *(int *)(DAT_000093a8 + param_1) = pcVar3[2] * -0x200;
      *(int *)(DAT_000093aa + param_1) = (int)pcVar3[3] << 8;
      if ((*(ushort *)(pcVar3 + iVar5) & *(ushort *)(pcVar3 + 6)) == 0) {
        if ((*(ushort *)(pcVar3 + DAT_000093b6) & *(ushort *)(pcVar3 + 6)) == 0) goto LAB_0000935c;
        if (((int)*(short *)(param_1 + DAT_000093ae) & 0x20U) != 0) {
          return (int)*(short *)(param_1 + DAT_000093ae);
        }
        iVar5 = (*pcVar2)();
        if ((*(uint *)((int)DAT_000093b0 + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 8) != 0)
        goto LAB_0000935c;
        (*pcVar2)();
        bVar10 = (*DAT_000093c0)();
        iVar5 = (*pcVar2)();
        if ((bVar10 & *(byte *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_000093b4)) == 0) {
          (*DAT_000093c4)(2,0x1e);
          goto LAB_0000935c;
        }
      }
      else {
        if (((int)*(short *)(param_1 + DAT_000093ae) & 0x40U) != 0) {
          return (int)*(short *)(param_1 + DAT_000093ae);
        }
        iVar5 = (*pcVar2)();
        if ((*(uint *)((int)DAT_000093b0 + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 8) != 0)
        goto LAB_0000935c;
        (*pcVar2)();
        bVar10 = (*DAT_000093c0)();
        iVar5 = (*pcVar2)();
        if ((bVar10 & *(byte *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_000093b4)) == 0) {
          (*DAT_000093c4)(1,0x1e);
          goto LAB_0000935c;
        }
      }
      bVar1 = 1;
LAB_0000935c:
      iVar5 = (*pcVar2)();
      if (!(bool)((*(uint *)((int)DAT_000093b0 + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 8) != 0
                 | bVar1)) {
        return 0;
      }
      if (((*(ushort *)(pcVar3 + DAT_000093b8 + 0x4e) | *(ushort *)(pcVar3 + DAT_000093b8 + 0x4c)) &
          *(ushort *)(pcVar3 + 8)) == 0) {
        return (int)(short)*(ushort *)(pcVar3 + DAT_000093b8 + 0x4c);
      }
                    // WARNING: Could not recover jumptable at 0x000093a4. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar7 = (*DAT_000093cc)(5);
      return uVar7;
    }
    if ((*(ushort *)(pcVar3 + DAT_0000915a) & *(ushort *)(pcVar3 + 6)) == 0) {
      if ((*(ushort *)(pcVar3 + DAT_00009164) & *(ushort *)(pcVar3 + 6)) == 0) goto LAB_00009188;
      if (((int)*(short *)(param_1 + DAT_0000915c) & 0x20U) != 0) {
        return (int)*(short *)(param_1 + DAT_0000915c);
      }
      iVar6 = (*pcVar2)();
      if ((*(uint *)((int)DAT_0000915e + *(int *)(*(int *)(iVar6 + 0x10) + 0x18)) & 8) != 0)
      goto LAB_00009188;
      (*pcVar2)();
      bVar10 = (*DAT_00009174)();
      iVar6 = (*pcVar2)();
      if ((bVar10 & *(byte *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) + (int)DAT_00009162)) == 0) {
        (*DAT_00009270)(2,0x1e);
        goto LAB_00009188;
      }
    }
    else {
      if (((int)*(short *)(param_1 + DAT_0000915c) & 0x40U) != 0) {
        return (int)*(short *)(param_1 + DAT_0000915c);
      }
      iVar6 = (*pcVar2)();
      if ((*(uint *)((int)DAT_0000915e + *(int *)(*(int *)(iVar6 + 0x10) + 0x18)) & 8) != 0)
      goto LAB_00009188;
      (*pcVar2)();
      bVar10 = (*DAT_00009174)();
      iVar6 = (*pcVar2)();
      if ((bVar10 & *(byte *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) + (int)DAT_00009162)) == 0) {
        (*DAT_00009178)(1,0x1e);
        goto LAB_00009188;
      }
    }
    bVar1 = 1;
LAB_00009188:
    iVar6 = (*pcVar2)();
    if (((bool)((*(uint *)((int)DAT_0000925e + *(int *)(*(int *)(iVar6 + 0x10) + 0x18)) & 8) != 0 |
               bVar1)) &&
       (((*(ushort *)(pcVar3 + DAT_00009260 + 0x4e) | *(ushort *)(pcVar3 + DAT_00009260 + 0x4c)) &
        *(ushort *)(pcVar3 + 8)) != 0)) {
      (*DAT_00009274)(5);
    }
    iVar6 = (int)DAT_00009262;
    iVar8 = (int)DAT_00009264;
    if ((*(ushort *)(pcVar3 + DAT_00009266) & *(ushort *)(pcVar3 + 6)) == 0) {
      if ((*(ushort *)(pcVar3 + DAT_0000926c) & *(ushort *)(pcVar3 + 6)) == 0) {
        if (*(int *)(param_1 + DAT_00009268) - iVar8 < 1) {
          if (-1 < *(int *)(param_1 + DAT_00009268) + iVar8) {
            uVar7 = (uint)DAT_00009268;
            *(undefined4 *)(param_1 + uVar7) = 0;
            return uVar7;
          }
          iVar6 = *(int *)(param_1 + DAT_00009268) + iVar8;
        }
        else {
          iVar6 = *(int *)(param_1 + DAT_00009268) - iVar8;
        }
      }
      else if (iVar5 < *(int *)(param_1 + DAT_00009268) - iVar6) {
        iVar6 = *(int *)(param_1 + DAT_00009268) - iVar6;
      }
      else {
        if (iVar5 <= *(int *)(param_1 + DAT_00009268) + iVar13) {
          uVar7 = (uint)DAT_00009268;
          *(int *)(param_1 + uVar7) = iVar5;
          return uVar7;
        }
        iVar6 = *(int *)(param_1 + DAT_00009268) + iVar13;
      }
    }
    else {
      if (DAT_00009278 <= *(int *)(param_1 + DAT_00009268) + iVar6) {
        if (DAT_00009278 < *(int *)(param_1 + DAT_00009268) + (int)DAT_0000926a) {
          uVar7 = (uint)DAT_00009268;
          *(int *)(param_1 + uVar7) = *(int *)(param_1 + uVar7) - iVar13;
          return uVar7;
        }
        uVar7 = (uint)DAT_00009268;
        *(int *)(param_1 + uVar7) = DAT_00009278;
        return uVar7;
      }
      iVar6 = *(int *)(param_1 + DAT_00009268) + iVar6;
    }
    uVar7 = (uint)DAT_00009268;
    *(int *)(param_1 + uVar7) = iVar6;
    return uVar7;
  }
  iVar8 = (int)DAT_0000949c;
  iVar12 = (int)DAT_0000949e;
  uVar7 = (uint)*pcVar3;
  if (uVar7 != 1) {
    if (uVar7 != 2) {
      return uVar7;
    }
    *(int *)(DAT_0000969a + param_1) = (int)pcVar3[3] << 8;
    *(int *)(DAT_00009696 + param_1) = pcVar3[2] * -0x100;
    if ((*(ushort *)(param_1 + DAT_0000969e) & 0x78) == 0) {
      iVar5 = (*pcVar2)();
      if ((*(uint *)((int)DAT_00009698 + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 8) == 0) {
        return 0;
      }
      iVar5 = (int)DAT_0000969a;
      *(undefined4 *)(param_1 + iVar5) = 0;
      sVar4 = DAT_0000969c;
      *(undefined4 *)(param_1 + iVar5 + 4) = 0;
      if (((*(ushort *)(pcVar3 + sVar4 + 0x48) | *(ushort *)(pcVar3 + sVar4 + 0x4a) |
            *(ushort *)(pcVar3 + sVar4 + 0x4e) | *(ushort *)(pcVar3 + sVar4 + 0x4c)) &
          *(ushort *)(pcVar3 + 8)) == 0) {
        return (int)(short)*(ushort *)(pcVar3 + sVar4 + 0x4c);
      }
                    // WARNING: Could not recover jumptable at 0x00009680. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar7 = (*DAT_000096a0)(5);
      return uVar7;
    }
    *(undefined4 *)(param_1 + DAT_0000969a) = 0;
    uVar7 = (uint)DAT_00009696;
    goto LAB_0000962c;
  }
  if ((*(ushort *)(pcVar3 + DAT_000094a0) & *(ushort *)(pcVar3 + 6)) == 0) {
    if ((*(ushort *)(pcVar3 + DAT_000094a8) & *(ushort *)(pcVar3 + 6)) == 0) {
      if ((*(ushort *)(param_1 + DAT_000094a2) & 0x78) != 0) {
        iVar5 = (int)DAT_000094a4;
        *(undefined4 *)(param_1 + iVar5) = 0;
        uVar7 = iVar5 + 4;
        goto LAB_0000962c;
      }
      if (0 < *(int *)(param_1 + DAT_000094a4) - iVar12) {
        iVar11 = *(int *)(param_1 + DAT_000094a4) - iVar12;
        goto LAB_00009498;
      }
      if (-1 < *(int *)(param_1 + DAT_0000957c) + iVar12) {
        *(undefined4 *)(param_1 + DAT_0000957c) = 0;
        goto LAB_000094c8;
      }
      iVar9 = (int)DAT_0000957c;
      iVar11 = *(int *)(param_1 + iVar9) + iVar12;
    }
    else {
      if ((*(ushort *)(param_1 + DAT_000094a2) & 0x10) != 0) {
        uVar7 = (uint)DAT_000094a4;
        goto LAB_0000962c;
      }
      if (iVar5 < *(int *)(param_1 + DAT_000094a4) - iVar8) {
        iVar11 = *(int *)(param_1 + DAT_000094a4) - iVar8;
      }
      else {
        if (iVar5 <= *(int *)(param_1 + DAT_000094a4) + iVar13) {
          *(int *)(param_1 + DAT_000094a4) = iVar5;
          goto LAB_000094c8;
        }
        iVar11 = *(int *)(param_1 + DAT_000094a4) + iVar13;
      }
LAB_00009498:
      iVar9 = (int)DAT_000094a4;
    }
    *(int *)(param_1 + iVar9) = iVar11;
  }
  else {
    if ((*(ushort *)(param_1 + DAT_000094a2) & 8) != 0) {
      uVar7 = (uint)DAT_000094a4;
      goto LAB_0000962c;
    }
    if (*(int *)(param_1 + DAT_000094a4) + iVar8 < DAT_000094ac) {
      iVar11 = *(int *)(param_1 + DAT_000094a4) + iVar8;
      goto LAB_00009498;
    }
    if (DAT_000094ac < *(int *)(param_1 + DAT_000094a4) + (int)DAT_000094a6) {
      *(int *)(param_1 + DAT_000094a4) = *(int *)(param_1 + DAT_000094a4) - iVar13;
    }
    else {
      *(int *)(param_1 + DAT_000094a4) = DAT_000094ac;
    }
  }
LAB_000094c8:
  if ((*(ushort *)(pcVar3 + DAT_0000957e) & *(ushort *)(pcVar3 + 6)) == 0) {
    if ((*(ushort *)(pcVar3 + DAT_00009586) & *(ushort *)(pcVar3 + 6)) != 0) {
      if ((*(ushort *)(param_1 + DAT_00009580) & 0x20) != 0) {
        uVar7 = (uint)DAT_00009582;
LAB_0000962c:
        *(undefined4 *)(param_1 + uVar7) = 0;
        return uVar7;
      }
      if (0 < *(int *)(param_1 + DAT_00009582)) goto LAB_0000953a;
      if (iVar5 < *(int *)(param_1 + DAT_00009582) - iVar8) {
        iVar8 = *(int *)(param_1 + DAT_00009582) - iVar8;
      }
      else {
        if (iVar5 <= *(int *)(param_1 + DAT_00009582) + iVar13) {
          *(int *)(param_1 + DAT_00009582) = iVar5;
          goto LAB_000095b4;
        }
        iVar8 = *(int *)(param_1 + DAT_00009582) + iVar13;
      }
      goto LAB_00009562;
    }
    if ((*(ushort *)(param_1 + DAT_00009580) & 0x78) != 0) {
      iVar5 = (int)DAT_0000957c;
      *(undefined4 *)(param_1 + iVar5) = 0;
      uVar7 = iVar5 + 4;
      goto LAB_0000962c;
    }
    if (*(int *)(param_1 + DAT_00009696) - iVar12 < 1) {
      if (-1 < *(int *)(param_1 + DAT_00009696) + iVar12) {
        *(undefined4 *)(param_1 + DAT_00009696) = 0;
        goto LAB_000095b4;
      }
      iVar5 = (int)DAT_00009696;
      iVar8 = *(int *)(param_1 + iVar5) + iVar12;
    }
    else {
      iVar5 = (int)DAT_00009696;
      iVar8 = *(int *)(param_1 + iVar5) - iVar12;
    }
  }
  else {
    if ((*(ushort *)(param_1 + DAT_00009580) & 0x40) != 0) {
      uVar7 = (uint)DAT_00009582;
      goto LAB_0000962c;
    }
    if (*(int *)(param_1 + DAT_00009582) < 0) {
LAB_0000953a:
      *(undefined4 *)(param_1 + DAT_00009582) = 0;
      goto LAB_000095b4;
    }
    if (iVar6 <= *(int *)(param_1 + DAT_00009582) + iVar8) {
      if (iVar6 < *(int *)(param_1 + DAT_00009582) + (int)DAT_00009584) {
        *(int *)(param_1 + DAT_00009582) = *(int *)(param_1 + DAT_00009582) - iVar13;
      }
      else {
        *(int *)(param_1 + DAT_00009582) = iVar6;
      }
      goto LAB_000095b4;
    }
    iVar8 = *(int *)(param_1 + DAT_00009582) + iVar8;
LAB_00009562:
    iVar5 = (int)DAT_00009582;
  }
  *(int *)(param_1 + iVar5) = iVar8;
LAB_000095b4:
  iVar5 = (*pcVar2)();
  if ((*(uint *)((int)DAT_00009698 + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 8) == 0) {
    return 0;
  }
  iVar5 = (int)DAT_0000969a;
  *(undefined4 *)(param_1 + iVar5) = 0;
  sVar4 = DAT_0000969c;
  *(undefined4 *)(param_1 + iVar5 + 4) = 0;
  if (((*(ushort *)(pcVar3 + sVar4 + 0x48) | *(ushort *)(pcVar3 + sVar4 + 0x4a) |
        *(ushort *)(pcVar3 + sVar4 + 0x4e) | *(ushort *)(pcVar3 + sVar4 + 0x4c)) &
      *(ushort *)(pcVar3 + 8)) == 0) {
    return (int)(short)*(ushort *)(pcVar3 + sVar4 + 0x4c);
  }
                    // WARNING: Could not recover jumptable at 0x00009604. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar7 = (*DAT_000096a0)(5);
  return uVar7;
}



void FUN_000096a4(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar2 = (*DAT_0000978c)();
  pcVar1 = DAT_00009790;
  if (*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x10) + 0x16) == '\0') goto LAB_000097ae;
  iVar5 = (int)DAT_0000977a;
  iVar2 = (*DAT_00009790)((int)DAT_0000977c);
  if (iVar2 == 0) {
    iVar2 = (*pcVar1)((int)DAT_00009780);
    if (iVar2 != 0) {
      if (*(int *)(param_1 + DAT_0000977e) < 0) {
        iVar2 = (int)DAT_0000977e;
        *(int *)(param_1 + iVar2) = *(int *)(param_1 + iVar2) + iVar2 + -0x2d;
      }
      else {
        *(undefined4 *)(param_1 + DAT_0000977e) = 0;
      }
      puVar4 = (undefined4 *)(DAT_00009782 + param_1);
      puVar3 = (undefined4 *)(DAT_00009784 + param_1);
      *puVar3 = *puVar4;
      puVar3[1] = puVar4[1];
      puVar3[2] = puVar4[2];
      goto LAB_000097ae;
    }
    iVar2 = (*pcVar1)((int)DAT_00009786);
    if (iVar2 == 0) {
      iVar2 = (*pcVar1)((int)DAT_00009788);
      if (iVar2 != 0) {
        if (*(int *)(param_1 + DAT_0000977e) < 0) {
          *(int *)(param_1 + DAT_0000977e) = *(int *)(param_1 + DAT_0000977e) + 0x25;
        }
        else {
          *(undefined4 *)(param_1 + DAT_00009864) = 0;
        }
        puVar4 = (undefined4 *)(DAT_00009866 + param_1);
        puVar3 = (undefined4 *)(DAT_00009868 + param_1);
        *puVar3 = *puVar4;
        puVar3[1] = puVar4[1];
        puVar3[2] = puVar4[2];
      }
      goto LAB_000097ae;
    }
    if (iVar5 < *(int *)(param_1 + DAT_0000977e)) {
      *(int *)(param_1 + DAT_0000977e) = *(int *)(param_1 + DAT_0000977e) + -0x25;
    }
    else {
      *(int *)(param_1 + DAT_0000977e) = iVar5;
    }
  }
  else if (iVar5 < *(int *)(param_1 + DAT_0000977e)) {
    iVar2 = (int)DAT_0000977e;
    *(int *)(param_1 + iVar2) = *(int *)(param_1 + iVar2) - (iVar2 + -0x2d);
  }
  else {
    *(int *)(param_1 + DAT_0000977e) = iVar5;
  }
  puVar4 = (undefined4 *)(DAT_00009782 + param_1);
  puVar3 = (undefined4 *)(DAT_00009784 + param_1);
  *puVar3 = *puVar4;
  puVar3[1] = puVar4[1];
  puVar3[2] = puVar4[2];
LAB_000097ae:
  *(int *)(DAT_0000986a + param_1) =
       *(int *)(param_1 + DAT_00009866) + *(int *)(param_1 + DAT_0000986a);
  iVar2 = (int)DAT_0000986c;
  *(int *)(param_1 + iVar2) = *(int *)(param_1 + DAT_0000986e) + *(int *)(param_1 + DAT_0000986c);
  iVar5 = (int)DAT_00009870;
  *(int *)(param_1 + iVar5) = *(int *)(param_1 + DAT_00009864) + *(int *)(param_1 + iVar2 + 4);
  *(int *)(param_1 + iVar5 + -0x38) = *(int *)(param_1 + iVar5 + 4) + *(int *)(param_1 + iVar5 + -8)
  ;
  *(int *)(param_1 + iVar5 + -0x34) = *(int *)(param_1 + iVar5 + 8) + *(int *)(param_1 + iVar5 + -4)
  ;
  *(int *)(param_1 + iVar5 + -0x30) = *(int *)(param_1 + iVar5 + 0xc) + *(int *)(param_1 + iVar5);
  *(int *)(param_1 + iVar5 + -0x2c) =
       *(int *)(param_1 + iVar5 + 4) + *(int *)(param_1 + iVar5 + -0x14) +
       *(int *)(param_1 + iVar5 + -8);
  *(int *)(param_1 + iVar5 + -0x28) =
       *(int *)(param_1 + iVar5 + 8) + *(int *)(param_1 + iVar5 + -0x10) +
       *(int *)(param_1 + iVar5 + -4);
  *(int *)(param_1 + iVar5 + -0x24) =
       *(int *)(param_1 + iVar5 + 0xc) + *(int *)(param_1 + iVar5 + -0xc) +
       *(int *)(param_1 + iVar5);
  return;
}



void FUN_00009872(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = DAT_0000997c;
  iVar3 = DAT_00009978;
  iVar2 = (*DAT_0000997c)();
  if ((((int)DAT_00009962 & *(uint *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_00009964)) !=
       0) && ((*(ushort *)(iVar3 + 10) & 1) != 0)) {
    iVar2 = (*pcVar1)();
    iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
    *(uint *)(iVar2 + DAT_00009964) = *(uint *)(iVar2 + DAT_00009964) & (int)DAT_00009966;
  }
  if ((((*(ushort *)(param_1 + DAT_00009968) & 2) == 0) &&
      (iVar2 = (*pcVar1)(), 0 < *(short *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_0000996a)
      )) && (iVar2 = FUN_0000a438(), iVar2 != 0)) {
    if ((('\0' < *(char *)(param_1 + DAT_0000996c)) &&
        (iVar2 = (*pcVar1)(),
        ((int)DAT_00009962 & *(uint *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_00009964)) ==
        0)) && ((*(ushort *)(DAT_0000996e + iVar3) & *(ushort *)(iVar3 + 6)) != 0)) {
      iVar2 = (*pcVar1)();
      if ((*(uint *)((int)DAT_00009970 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18)) & 1) != 0) {
                    // WARNING: Could not recover jumptable at 0x00009908. Too many branches
                    // WARNING: Treating indirect jump as call
        (*DAT_00009980)(5);
        return;
      }
      iVar2 = (*pcVar1)();
      if (0 < *(short *)(*(int *)(*(int *)(iVar2 + 0x10) + 0xc) + (int)DAT_00009972)) {
        iVar3 = (*pcVar1)();
        iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
        *(uint *)(iVar3 + DAT_00009964) = *(uint *)(iVar3 + DAT_00009964) & 0xffffffbf;
        FUN_0000a248(3);
        *(undefined2 *)(param_1 + DAT_00009974) = 0;
        *(undefined2 *)(param_1 + DAT_00009976) = 0;
        return;
      }
    }
    if ((*(ushort *)(DAT_0000996e + iVar3) & *(ushort *)(iVar3 + 8)) != 0) {
                    // WARNING: Could not recover jumptable at 0x00009954. Too many branches
                    // WARNING: Treating indirect jump as call
      (*DAT_00009980)(5);
      return;
    }
  }
  return;
}



void FUN_00009984(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = DAT_00009a94;
  if ((*(ushort *)(param_1 + DAT_00009a82) & 1) == 0) {
    iVar2 = (*DAT_00009a94)();
    if ((0 < *(short *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_00009a84)) &&
       (iVar3 = FUN_0000a438(), iVar2 = DAT_00009a98, iVar3 != 0)) {
      if ((*(char *)(param_1 + DAT_00009a86) < '\x01') ||
         (((*(ushort *)(DAT_00009a88 + DAT_00009a98) & *(ushort *)(DAT_00009a98 + 6)) == 0 ||
          (iVar3 = (*pcVar1)(),
          *(short *)(*(int *)(*(int *)(iVar3 + 0x10) + 0xc) + (int)DAT_00009a8a) < 1)))) {
        if ((*(ushort *)(DAT_00009a88 + iVar2) & *(ushort *)(iVar2 + 8)) != 0) {
                    // WARNING: Could not recover jumptable at 0x00009a0a. Too many branches
                    // WARNING: Treating indirect jump as call
          (*DAT_00009a9c)(5);
          return;
        }
      }
      else {
        iVar2 = (*pcVar1)();
        iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
        *(uint *)(iVar2 + DAT_00009a8c) = *(uint *)(iVar2 + DAT_00009a8c) & 0xffffffbf;
        FUN_0000a248(0);
        *(undefined2 *)(param_1 + DAT_00009a8e) = 0;
      }
    }
  }
  return;
}



void FUN_00009a18(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_00009a94;
  if ((*(ushort *)(param_1 + DAT_00009a82) & 4) == 0) {
    iVar2 = (*DAT_00009a94)();
    if (((0 < *(short *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_00009a84)) &&
        (iVar2 = FUN_0000a438(), iVar2 != 0)) &&
       (iVar2 = (*pcVar1)(),
       (DAT_00009aa0 & *(uint *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_00009a8c)) == 0)) {
      if (('\0' < *(char *)(param_1 + DAT_00009a86)) &&
         ((*(ushort *)(DAT_00009a90 + DAT_00009a98) & *(ushort *)(DAT_00009a98 + 6)) != 0)) {
        iVar2 = (*pcVar1)();
        iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
        *(uint *)(iVar2 + DAT_00009a8c) = *(uint *)(iVar2 + DAT_00009a8c) & 0xffffffbf;
LAB_00009ab4:
        FUN_0000a248(0xc);
        iVar2 = (*pcVar1)();
                    // WARNING: Could not recover jumptable at 0x00009ac6. Too many branches
                    // WARNING: Treating indirect jump as call
        (*DAT_00009af0)(*(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x20));
        return;
      }
      if ((DAT_00009aec & *(ushort *)(param_1 + DAT_00009aea)) == 0) {
        if ((*(ushort *)(DAT_00009a98 + 6) & 8) != 0) goto LAB_00009ab4;
        if ((*(ushort *)(DAT_00009aee + DAT_00009a98) & *(ushort *)(DAT_00009a98 + 8)) != 0) {
                    // WARNING: Could not recover jumptable at 0x00009ade. Too many branches
                    // WARNING: Treating indirect jump as call
          (*DAT_00009af4)(5);
          return;
        }
      }
    }
  }
  return;
}



int FUN_00009af8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  int iVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  
  pcVar5 = DAT_00009c8c;
  pcVar4 = DAT_00009c88;
  pcVar3 = DAT_00009c84;
  iVar2 = DAT_00009c80;
  puVar1 = PTR_FUN_00009c7c;
  iVar6 = (*DAT_00009c8c)();
  uVar7 = SUB42(puVar1,0);
  if (*(char *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x10) + 0xf) != '\0') {
    *(undefined2 *)(iVar2 + 0x12) = *(undefined2 *)(iVar2 + 0x10);
    *(undefined2 *)(iVar2 + 0x10) = uVar7;
    (*pcVar3)(1,0xf);
    (*pcVar4)();
    *(undefined2 *)(iVar2 + 0x10) = *(undefined2 *)(iVar2 + 0x12);
  }
  iVar6 = (*pcVar5)();
  if (*(char *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x10) + 0x17) != '\0') {
    *(undefined2 *)(iVar2 + 0x12) = *(undefined2 *)(iVar2 + 0x10);
    *(undefined2 *)(iVar2 + 0x10) = uVar7;
    (*pcVar3)(1,0x1b);
    uVar9 = *(undefined4 *)(param_1 + DAT_00009c76);
    uVar8 = DAT_00009c94;
    (*pcVar4)();
    (*pcVar3)(0x1e,0x1b,param_3,param_4,uVar8,uVar9);
    (*pcVar4)();
    *(undefined2 *)(iVar2 + 0x10) = *(undefined2 *)(iVar2 + 0x12);
  }
  iVar6 = (*pcVar5)();
  if (*(char *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x10) + 0x16) == '\0') {
    iVar6 = 0x16;
  }
  else {
    *(undefined2 *)(iVar2 + 0x12) = *(undefined2 *)(iVar2 + 0x10);
    *(undefined2 *)(iVar2 + 0x10) = uVar7;
    iVar6 = (*pcVar5)();
    if (*(int *)(*(short *)(iVar6 + 4) * 4 + DAT_00009c9c) == 0) {
      (*pcVar3)(1,5);
      (*pcVar4)();
    }
    else {
      (*pcVar3)(1,4);
      (*pcVar5)();
      (*pcVar4)();
      (*pcVar5)();
      (*pcVar5)();
      (*pcVar5)();
      (*pcVar5)();
      (*pcVar3)(1,5);
      (*pcVar4)();
      (*pcVar5)();
      (*pcVar5)();
      (*pcVar5)();
      (*pcVar5)();
      (*pcVar3)(1,6);
      (*pcVar4)();
      (*pcVar5)();
      (*pcVar5)();
      (*pcVar5)();
      (*pcVar5)();
      (*pcVar3)(1,7);
      (*pcVar4)();
    }
    iVar6 = (*pcVar5)();
    if (*(int *)(*(short *)(iVar6 + 4) * 4 + DAT_00009f08) == 0) {
      (*pcVar3)(1,8);
      (*pcVar4)();
    }
    else {
      (*pcVar5)();
      (*pcVar5)();
      (*pcVar5)();
      (*pcVar5)();
      (*pcVar3)(1,8);
      (*DAT_00009f0c)();
      (*pcVar4)();
      (*pcVar5)();
      (*pcVar5)();
      (*pcVar5)();
      (*pcVar5)();
      (*pcVar3)(1,9);
      (*pcVar4)();
    }
    (*pcVar3)(1,10);
    uVar9 = *(undefined4 *)(param_1 + DAT_0000a04c);
    uVar8 = DAT_0000a060;
    (*pcVar4)();
    (*pcVar3)(1,0xb,param_3,param_4,uVar8,uVar9);
    uVar10 = (int)*(char *)(param_1 + DAT_0000a04e) & 0xff;
    uVar8 = DAT_0000a064;
    (*pcVar4)();
    (*pcVar3)(1,0xc,param_3,param_4,uVar8,uVar10);
    uVar10 = (int)*(char *)(param_1 + DAT_0000a050) & 0xff;
    uVar8 = DAT_0000a068;
    (*pcVar4)();
    (*pcVar3)(1,0xd,param_3,param_4,uVar8,uVar10);
    (*pcVar4)();
    (*pcVar3)(1,0xe);
    if (*(int *)(param_1 + DAT_0000a054) < 0) {
      iVar6 = (*DAT_0000a074)();
      uVar8 = DAT_0000a07c;
    }
    else {
      iVar6 = (*DAT_0000a074)();
      uVar8 = DAT_0000a078;
    }
    iVar6 = iVar6 >> 0xc;
    (*pcVar4)();
    (*pcVar3)(1,0xf,param_3,param_4,uVar8,iVar6);
    iVar6 = (*pcVar5)();
    iVar6 = (int)*(short *)(iVar6 + 4);
    uVar8 = DAT_0000a080;
    (*pcVar4)();
    (*pcVar3)(1,0x10,param_3,param_4,uVar8,iVar6);
    (*pcVar5)();
    (*pcVar4)();
    iVar6 = (int)*(short *)(iVar2 + 0x12);
    *(short *)(iVar2 + 0x10) = *(short *)(iVar2 + 0x12);
  }
  return iVar6;
}



void FUN_0000a248(undefined param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  int iVar2;
  int iVar3;
  
  UNRECOVERED_JUMPTABLE = DAT_0000a314;
  iVar1 = (*DAT_0000a314)();
  iVar3 = *(int *)(*(int *)(iVar1 + 0x10) + 4);
  (*UNRECOVERED_JUMPTABLE)();
  *(undefined *)(iVar3 + DAT_0000a302) = param_1;
  iVar1 = (*UNRECOVERED_JUMPTABLE)();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 4);
  *(uint *)(iVar1 + DAT_0000a304) = *(uint *)(iVar1 + DAT_0000a304) | (int)DAT_0000a306;
  iVar1 = (*UNRECOVERED_JUMPTABLE)();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 4);
  *(uint *)(iVar1 + DAT_0000a304) = *(uint *)(iVar1 + DAT_0000a304) & (int)DAT_0000a308;
  iVar1 = (*UNRECOVERED_JUMPTABLE)();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 4);
  *(uint *)(iVar1 + DAT_0000a304) = *(uint *)(iVar1 + DAT_0000a304) & (int)DAT_0000a30a;
  iVar1 = (*UNRECOVERED_JUMPTABLE)();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 4);
  *(uint *)(iVar1 + DAT_0000a304) = *(uint *)(iVar1 + DAT_0000a304) | 0x10;
  iVar1 = (*UNRECOVERED_JUMPTABLE)();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 4);
  *(uint *)(iVar1 + DAT_0000a304) = *(uint *)(iVar1 + DAT_0000a304) | 0x20;
  iVar1 = (*UNRECOVERED_JUMPTABLE)();
  iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + 4);
  iVar1 = (int)DAT_0000a304;
  *(uint *)(iVar2 + iVar1) = *(uint *)(iVar2 + iVar1) | iVar1 + 0x78U;
  iVar1 = (int)DAT_0000a30c;
  *(undefined *)(iVar3 + iVar1) = 0;
  UNRECOVERED_JUMPTABLE = DAT_0000a318;
  *(undefined2 *)(iVar3 + iVar1 + -9) = 0;
  *(undefined2 *)(iVar3 + iVar1 + -7) = 0;
  *(undefined2 *)(iVar3 + DAT_0000a30e) = 0;
  iVar1 = (int)DAT_0000a310;
  *(undefined4 *)(iVar3 + iVar1) = 0;
  *(undefined4 *)(iVar3 + iVar1 + 4) = 0;
  *(undefined4 *)(iVar3 + iVar1 + 8) = 0;
                    // WARNING: Could not recover jumptable at 0x0000a2f6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(iVar3);
  return;
}



undefined4 FUN_0000a438(void)

{
  int iVar1;
  
  iVar1 = (*DAT_0000a488)();
  if ((*(uint *)((int)DAT_0000a47a + *(int *)(*(int *)(iVar1 + 0x10) + 4)) & 0x10) == 0) {
    return 1;
  }
  return 0;
}



int FUN_0000a52a(uint param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 & 0xffff) == 0) {
    iVar1 = (*DAT_0000a5a4)();
    iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + 4);
    iVar1 = (int)DAT_0000a59c;
    *(ushort *)(iVar2 + iVar1) = *(ushort *)(iVar2 + iVar1) & (ushort)PTR_DAT_0000f0fc_3_0000a5b0;
  }
  else {
    iVar1 = (*DAT_0000a5a4)();
    iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + 4);
    iVar1 = (int)DAT_0000a59c;
    *(ushort *)(iVar2 + iVar1) = *(ushort *)(iVar2 + iVar1) | (ushort)((param_1 & 0xf) << 8);
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0000a784(undefined4 param_1)

{
  undefined4 uVar1;
  undefined auStack16 [16];
  
  (*_LAB_0000a7e8)();
  (*_LAB_0000a7ec)(&stack0x00000000);
  (*_LAB_0000a7f0)(&stack0x00000018);
  (*_LAB_0000a7f4)(&stack0x0000000c,auStack16);
  (*DAT_0000a7fc)(auStack16,param_1,_LAB_0000a7f8 + 0x28);
  uVar1 = (*DAT_0000a800)();
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0000b348(short *param_1,char *param_2,short *param_3,short param_4,undefined2 *param_5,
                 int param_6)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  short sVar5;
  int unaff_r11;
  undefined2 *puVar6;
  
  iVar2 = DAT_0000b430;
  sVar5 = *param_1;
  do {
    if (*param_2 == '\0') {
      return;
    }
    puVar6 = *(undefined2 **)(undefined4 *)(iVar2 + 0x14);
    if (param_6 == 0) {
      cVar1 = *param_2;
      iVar4 = DAT_0000b42c;
LAB_0000b38e:
      unaff_r11 = (cVar1 + -0x30) * 0xc + iVar4;
    }
    else if (param_6 == 1) {
      cVar1 = *param_2;
      iVar4 = DAT_0000b434;
      goto LAB_0000b38e;
    }
    *puVar6 = DAT_0000b424;
    puVar6[2] = _LAB_0000b428;
    puVar6[3] = *(short *)(unaff_r11 + 6) + param_4;
    puVar6[6] = sVar5;
    puVar6[7] = -param_1[1];
    puVar6[10] = *param_3 + sVar5 + -1;
    puVar6[0xb] = (param_3[1] - param_1[1]) + -1;
    puVar6[4] = *(short *)(unaff_r11 + 2) + param_4;
    puVar6[5] = *(undefined2 *)(unaff_r11 + 8);
    puVar3 = *(undefined2 **)(iVar2 + 0x24);
    *(undefined2 **)(iVar2 + 0x24) = puVar3 + 4;
    param_2 = param_2 + 1;
    *puVar3 = *param_5;
    puVar3[1] = param_5[1];
    puVar3[2] = param_5[2];
    puVar3[3] = param_5[3];
    puVar6[0xe] = (short)((uint)puVar3 >> 3);
    sVar5 = sVar5 + *param_3;
    iVar4 = *(int *)(iVar2 + 0x34);
    *(undefined2 *)(iVar4 + 4) = 0;
    *(short *)(iVar4 + 6) = (short)((uint)puVar6 >> 3);
    *(int *)(iVar2 + 0x34) = iVar4 + 8;
    *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + 1;
    *(undefined4 *)(iVar2 + 0x14) = puVar6 + 0x10;
    *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
  } while( true );
}



void FUN_0000b8e8(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = param_1;
  piVar3 = param_2;
  piVar4 = param_3;
  while( true ) {
    (*DAT_0000b9b8)(piVar1,piVar3,param_3);
    (*DAT_0000b9bc)(((int)*(short *)param_4 & 0xffffU) * (int)DAT_0000b9b4 + param_2[0xb]);
    (*DAT_0000b9c0)(((int)*(short *)param_4 & 0xffffU) * (int)DAT_0000b9b4 + param_2[0xb] + 0xc);
    piVar1 = param_1 + ((int)*(short *)param_4 & 0xffffU) * 0xe;
    if (*piVar4 == 0) {
      *piVar1 = 0;
    }
    else {
      *piVar1 = *piVar4;
      iVar2 = *DAT_0000b9c4;
      piVar1[1] = *(int *)(iVar2 + 0xc);
      piVar1[2] = *(int *)(iVar2 + 0x1c);
      piVar1[3] = *(int *)(iVar2 + 0x2c);
      (*DAT_0000b9c8)(piVar1 + 7);
    }
    *(short *)param_4 = *(short *)param_4 + 1;
    if (piVar4[1] != 0) {
      FUN_0000b8e8(param_1,param_2,piVar4[1],param_4);
    }
    (*DAT_0000b9cc)();
    if (piVar4[2] == 0) break;
    piVar3 = (int *)piVar4[2];
    piVar1 = param_2;
    param_3 = param_4;
    piVar4 = piVar3;
  }
  return;
}



void FUN_0000b99a(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  int *piVar5;
  
  pcVar1 = DAT_0000b9d0;
  for (iVar4 = 0; iVar4 < (int)((int)*(short *)(param_1 + 10) & 0xffffU); iVar4 = iVar4 + 1) {
    piVar5 = (int *)(iVar4 * 0x38 + *(int *)(param_1 + 0xc));
    if (*piVar5 != 0) {
      piVar5[4] = *(int *)(param_1 + 0x10);
      piVar5[5] = *(int *)(param_1 + 0x14);
      piVar5[6] = *(int *)(param_1 + 0x18);
      uVar2 = (*pcVar1)();
      piVar5[4] = piVar5[4] +
                  ((uVar2 & *(uint *)(param_1 + 0x1c)) - ((int)*(uint *)(param_1 + 0x1c) >> 1));
      uVar2 = (*pcVar1)();
      piVar5[5] = piVar5[5] +
                  ((uVar2 & *(uint *)(param_1 + 0x20)) - ((int)*(uint *)(param_1 + 0x20) >> 1));
      uVar2 = (*pcVar1)();
      piVar5[6] = piVar5[6] +
                  ((uVar2 & *(uint *)(param_1 + 0x24)) - ((int)*(uint *)(param_1 + 0x24) >> 1));
      uVar2 = (*pcVar1)();
      piVar5[10] = (uVar2 & *(uint *)(param_1 + 0x34)) - ((int)*(uint *)(param_1 + 0x34) >> 1);
      uVar2 = (*pcVar1)();
      piVar5[0xb] = (uVar2 & *(uint *)(param_1 + 0x34)) - ((int)*(uint *)(param_1 + 0x34) >> 1);
      uVar2 = (*pcVar1)();
      piVar5[0xc] = (uVar2 & *(uint *)(param_1 + 0x34)) - ((int)*(uint *)(param_1 + 0x34) >> 1);
      if (*(short *)(param_1 + 0x38) < 1) {
        *(undefined2 *)(piVar5 + 0xd) = 0;
      }
      else {
        (*pcVar1)();
        uVar3 = (*DAT_0000bb38)();
        *(undefined2 *)(piVar5 + 0xd) = uVar3;
      }
    }
  }
  return;
}



int FUN_0000bd48(void)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  (*DAT_0000be90)();
  iVar1 = (*DAT_0000be90)();
  iVar3 = 0;
  sVar2 = 0;
  iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 4);
  do {
    if ('\0' < *(char *)((int)sVar2 + DAT_0000be86 + iVar1)) {
      iVar4 = iVar4 + 1;
    }
    if ('\0' < *(char *)((int)(short)(sVar2 + 0xc) + DAT_0000be86 + iVar1)) {
      iVar4 = iVar4 + 1;
    }
    if ('\0' < *(char *)((int)(short)(sVar2 + 0x18) + DAT_0000be86 + iVar1)) {
      iVar4 = iVar4 + 1;
    }
    iVar3 = iVar3 + 4;
    if ('\0' < *(char *)((int)(short)(sVar2 + 0x24) + DAT_0000be86 + iVar1)) {
      iVar4 = iVar4 + 1;
    }
    sVar2 = sVar2 + 0x30;
  } while (iVar3 < DAT_0000be84);
  return iVar4;
}



bool FUN_0000bdca(int param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int local_4c;
  int iStack72;
  short asStack68 [2];
  short asStack64 [2];
  short sStack60;
  short sStack56;
  short local_34;
  short sStack50;
  short local_30;
  short sStack46;
  undefined4 local_2c;
  int iStack40;
  undefined4 uStack36;
  undefined4 local_20;
  undefined4 uStack28;
  int iStack24;
  
  pcVar1 = DAT_0000be90;
  (*DAT_0000be90)();
  local_2c = *(undefined4 *)(param_1 + 0x10);
  iStack40 = *(int *)(param_1 + 0x14);
  uStack36 = *(undefined4 *)(param_1 + 0x18);
  local_20 = **(undefined4 **)(param_1 + 4);
  uStack28 = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
  iStack24 = *(int *)(*(int *)(param_1 + 4) + 8);
  if ((((((*(uint *)(param_1 + 0x50) & 1) == 0) && ((DAT_0000be94 & *(uint *)(param_1 + 0x50)) == 0)
        ) && (iVar2 = (*pcVar1)(param_1 + 0x10,param_1),
             *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 0xc) + (int)DAT_0000be88) <= iStack40)) &&
      (iVar2 = (*pcVar1)(),
      iStack40 <= *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 0xc) + (int)DAT_0000be8a))) &&
     ((iVar2 = (*pcVar1)(),
      (*(uint *)((int)DAT_0000be8c + *(int *)(*(int *)(iVar2 + 0x10) + 4)) & 1) != 0 ||
      ((*(uint *)(param_1 + 0x50) & 2) == 0)))) {
    (*DAT_0000c0ec)(&iStack72,&local_4c);
    bVar3 = iStack24 <= local_4c;
    iVar2 = (*pcVar1)();
    if (*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x10) + 0x1f) == '\0') {
      bVar3 = true;
    }
    else {
      (*DAT_0000c0ec)(&iStack72,&local_4c);
      if ((iStack24 < iStack72) || (local_4c < iStack24)) {
        bVar3 = false;
      }
      else {
        (*DAT_0000c0f0)(asStack68,asStack64);
        sStack56 = (*DAT_0000c0f4)((int)asStack68[0],local_20,iStack24);
        sStack60 = (*DAT_0000c0f4)((int)asStack64[0],uStack28,iStack24);
        (*DAT_0000c0f8)(&local_34);
        bVar3 = local_34 <= sStack56 && (sStack46 <= sStack60 && (sStack60 <= sStack50 && bVar3));
        if (local_30 < sStack56) {
          bVar3 = false;
        }
      }
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



undefined4 * FUN_0000bf5a(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar2 = param_1;
  do {
    puVar1 = (undefined4 *)(*DAT_0000c0fc)(iVar2);
    iVar3 = *(int *)(puVar1[4] + 0xc);
    iVar4 = *(int *)(*(int *)(((int)(param_1 + param_2 + (uint)(param_1 + param_2 < 0)) >> 1) * 4 +
                             iVar3) + 8);
    iVar2 = param_1;
    iVar7 = param_2;
    while( true ) {
      while (*(int *)(*(int *)(iVar2 * 4 + iVar3) + 8) < iVar4) {
        iVar2 = iVar2 + 1;
      }
      while (iVar4 < *(int *)(*(int *)(iVar7 * 4 + iVar3) + 8)) {
        iVar7 = iVar7 + -1;
      }
      if (iVar7 <= iVar2) break;
      puVar5 = (undefined4 *)(iVar2 * 4 + iVar3);
      uVar6 = *puVar5;
      puVar1 = (undefined4 *)(iVar7 * 4 + iVar3);
      *puVar5 = *(undefined4 *)(iVar3 + iVar7 * 4);
      iVar2 = iVar2 + 1;
      *puVar1 = uVar6;
      iVar7 = iVar7 + -1;
    }
    if (param_1 < iVar2 + -1) {
      puVar1 = (undefined4 *)FUN_0000bf5a(param_1);
    }
    param_1 = iVar7 + 1;
    iVar2 = param_2;
  } while (param_1 < param_2);
  return puVar1;
}



void FUN_0000c000(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined4 local_48;
  undefined4 uStack68;
  undefined4 uStack64;
  undefined4 uStack60;
  undefined4 uStack56;
  undefined4 uStack52;
  undefined4 uStack48;
  undefined4 uStack44;
  undefined4 uStack40;
  undefined4 uStack36;
  undefined4 uStack32;
  undefined4 uStack28;
  
  puVar2 = PTR_LAB_000083fe_1_0000c104;
  pcVar1 = DAT_0000c100;
  local_48 = *param_1;
  uStack68 = param_1[1];
  uStack64 = param_2[2];
  uStack60 = *param_1;
  uStack56 = param_1[1];
  uStack52 = param_1[2];
  uStack48 = *param_2;
  uStack44 = param_1[1];
  uStack40 = param_1[2];
  uStack36 = *param_2;
  uStack32 = param_1[1];
  uStack28 = param_2[2];
  (*DAT_0000c100)(&local_48,PTR_LAB_000083fe_1_0000c104,param_3);
  uStack68 = param_2[1];
  uStack56 = uStack68;
  uStack44 = uStack68;
  uStack32 = uStack68;
  (*pcVar1)(&local_48,puVar2,param_3);
  local_48 = *param_2;
  uStack68 = param_1[1];
  uStack60 = *param_2;
  uStack56 = param_1[1];
  (*pcVar1)(&local_48,puVar2,param_3);
  local_48 = *param_1;
  uStack60 = local_48;
  uStack48 = local_48;
  uStack36 = local_48;
  (*pcVar1)(&local_48,puVar2,param_3);
  return;
}



void FUN_0000c0a0(int *param_1)

{
  int local_20;
  int iStack28;
  int iStack24;
  int iStack20;
  int iStack16;
  int iStack12;
  
  iStack20 = *param_1 + param_1[3];
  iStack16 = param_1[1] + param_1[3];
  iStack12 = param_1[2] + param_1[3];
  local_20 = *param_1 - param_1[3];
  iStack28 = param_1[1] - param_1[3];
  iStack24 = param_1[2] - param_1[3];
  FUN_0000c000(&iStack20,&local_20,param_1[2]);
  return;
}



int FUN_0000c39c(int param_1)

{
  (*DAT_0000c4d0)(*(undefined4 *)(param_1 + 4),param_1 + 0x10,DAT_0000c4cc + 0x28);
  return param_1 + 0x10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0000c3c0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  *(int **)(param_1 + 0xc) = param_2;
  *(int *)(param_1 + 0x28) = *param_2;
  *(int *)(param_1 + 0x2c) = param_2[1];
  pcVar1 = _LAB_0000c4d4;
  *(int *)(param_1 + 0x30) = param_2[2];
  (*pcVar1)(param_1 + 0x28,param_1 + 0x1c);
  iVar2 = (*DAT_0000c4d8)();
  if (*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x10) + 0x14) != '\0') {
    (*DAT_0000c4dc)(10,0xf);
    iVar2 = param_2[2] >> 0xc;
    iVar4 = param_2[1] >> 0xc;
    iVar3 = *param_2 >> 0xc;
    uVar5 = DAT_0000c4e0;
    (*DAT_0000c4c8)();
    (*DAT_0000c4dc)(10,0x10,param_3,param_4,uVar5,iVar3,iVar4,iVar2);
    (*DAT_0000c4c8)();
  }
  return;
}



void FUN_0000cd2c(int *param_1,int *param_2,int *param_3)

{
  *param_3 = (int)(*param_1 + *param_2 + (uint)(*param_1 + *param_2 < 0)) >> 1;
  param_3[1] = (int)(param_1[1] + param_2[1] + (uint)(param_1[1] + param_2[1] < 0)) >> 1;
  param_3[2] = (int)(param_1[2] + param_2[2] + (uint)(param_1[2] + param_2[2] < 0)) >> 1;
  return;
}



int FUN_0000cde4(int param_1,short param_2)

{
  short extraout_var;
  undefined4 uVar1;
  
  uVar1 = (*DAT_0000ce78)(DAT_0000ce74,((int)*(char *)(param_1 + 0x60) & 0xffU) << 0x10,DAT_0000ce70
                         );
  (*DAT_0000ce7c)((int)param_2 << 0x10,uVar1);
  return (int)extraout_var;
}



int FUN_0000d1ac(void)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined auStack40 [8];
  int local_20;
  int iStack28;
  int iStack24;
  
  pcVar1 = DAT_0000d254;
  iVar3 = (*DAT_0000d254)();
  pcVar2 = DAT_0000d258;
  iVar3 = (int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x10) + 0x17);
  if (iVar3 != 0) {
    iVar3 = (*DAT_0000d258)((int)DAT_0000d242);
    cVar9 = iVar3 != 0;
    iVar3 = (*pcVar2)((int)DAT_0000d244);
    if (iVar3 != 0) {
      cVar9 = '\x02';
    }
    iVar3 = (*pcVar2)((int)DAT_0000d246);
    if (iVar3 != 0) {
      cVar9 = '\x03';
    }
    iVar3 = (*pcVar2)((int)DAT_0000d248);
    if (iVar3 != 0) {
      cVar9 = '\x04';
    }
    iVar3 = (*pcVar2)((int)DAT_0000d24a);
    if (iVar3 != 0) {
      cVar9 = '\x05';
    }
    iVar3 = (*pcVar2)((int)DAT_0000d24c);
    if (iVar3 != 0) {
      cVar9 = '\x06';
    }
    iVar3 = (*DAT_0000d25c)((int)DAT_0000d24e);
    pcVar2 = DAT_0000d260;
    if (iVar3 != 0) {
      cVar9 = '\a';
    }
    if (cVar9 != '\0') {
      if (cVar9 == '\a') {
        local_20 = (int)DAT_0000d250;
        iStack28 = local_20;
        iStack24 = local_20;
      }
      else {
        uVar4 = (*DAT_0000d260)();
        local_20 = (uVar4 & (int)DAT_0000d388) + (int)DAT_0000d38a;
        uVar4 = (*pcVar2)();
        iStack28 = (uVar4 & (int)DAT_0000d38c) + (int)DAT_0000d38e;
        uVar4 = (*pcVar2)();
        iStack24 = (uVar4 & (int)DAT_0000d388) + (int)DAT_0000d38a;
      }
      (*DAT_0000d394)(&local_20,auStack40);
      (*pcVar2)();
      iVar5 = (*DAT_0000d398)();
      uVar6 = (*DAT_0000d39c)();
      iVar3 = local_20;
      iVar10 = iStack28;
      iVar11 = iStack24;
      iVar7 = (*pcVar1)();
      iVar8 = *(int *)(*(int *)(iVar7 + 0x10) + 0x18);
      iVar7 = (*pcVar1)();
      (*DAT_0000d3a0)((int)DAT_0000d390 + *(int *)(*(int *)(iVar7 + 0x10) + 0x18),1,iVar8 + 8,
                      iVar5 + 1,iVar3,iVar10,iVar11,uVar6);
      pcVar1 = DAT_0000d3ac;
      iVar10 = DAT_0000d3a4;
      *(undefined2 *)(DAT_0000d3a4 + 0x12) = *(undefined2 *)(DAT_0000d3a4 + 0x10);
      *(short *)(iVar10 + 0x10) = (short)PTR_FUN_0000d3a8;
      (*pcVar1)(0xc,4);
      pcVar2 = DAT_0000d3b0;
      (*DAT_0000d3b0)();
      (*pcVar1)(0xc,5);
      (*pcVar2)();
      (*pcVar1)(0xc,6);
      (*pcVar2)();
      iVar3 = (int)*(short *)(iVar10 + 0x12);
      *(short *)(iVar10 + 0x10) = *(short *)(iVar10 + 0x12);
    }
  }
  return iVar3;
}



int FUN_0000d3c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  
  pcVar2 = DAT_0000d4ec;
  iVar5 = (*DAT_0000d4ec)();
  iVar9 = *(int *)(*(int *)(iVar5 + 0x10) + 4);
  iVar8 = (int)DAT_0000d4d6;
  iVar5 = (*pcVar2)();
  iVar5 = (int)*(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x10) + 0x20);
  if (iVar5 != 0) {
    iVar5 = (*DAT_0000d4f0)();
    if ((iVar5 != 0) && (*(char *)(iVar9 + DAT_0000d4d8) == '\f')) {
      iVar5 = (*DAT_0000d4f4)((int)DAT_0000d4da);
      if (iVar5 != 0) {
        iVar5 = (*pcVar2)();
        *(undefined *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x10) + 4) = 0;
      }
      iVar5 = (*DAT_0000d4f4)((int)DAT_0000d4dc);
      if (iVar5 != 0) {
        iVar5 = (*pcVar2)();
        *(undefined *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x10) + 4) = 1;
      }
      pcVar3 = DAT_0000d4f8;
      iVar5 = (*pcVar2)();
      cVar1 = *(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x10) + 4);
      if (cVar1 == '\0') {
        iVar5 = (*pcVar3)((int)DAT_0000d4de);
        if (iVar5 != 0) {
          iVar5 = (*pcVar2)();
          piVar6 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0000d4e0)
                           & 0xffU) * 4 + DAT_0000d4e2 + iVar9);
          *piVar6 = *piVar6 + (int)DAT_0000d4e4;
        }
        iVar5 = (*pcVar3)((int)DAT_0000d4e6);
        if (iVar5 != 0) {
          iVar5 = (*pcVar2)();
          piVar6 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0000d4e0)
                           & 0xffU) * 4 + DAT_0000d4e2 + iVar9);
          *piVar6 = *piVar6 + (int)DAT_0000d4e8;
        }
        iVar5 = (*pcVar2)();
        iVar7 = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0000d4e0) &
                         0xffU) * 4 + DAT_0000d4e2 + iVar9);
        iVar5 = (*pcVar2)();
        *(int *)(iVar8 + iVar9 + 4) =
             iVar7 + *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0xc) + (int)DAT_0000d4ea);
      }
      else if (cVar1 == '\x01') {
        iVar5 = (*pcVar3)((int)DAT_0000d65e);
        if (iVar5 != 0) {
          iVar5 = (*pcVar2)();
          piVar6 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0000d660)
                           & 0xffU) * 4 + DAT_0000d662 + iVar9);
          *piVar6 = *piVar6 + (int)DAT_0000d664;
        }
        iVar5 = (*pcVar3)((int)DAT_0000d666);
        if (iVar5 != 0) {
          iVar5 = (*pcVar2)();
          piVar6 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0000d660)
                           & 0xffU) * 4 + DAT_0000d662 + iVar9);
          *piVar6 = *piVar6 + (int)DAT_0000d668;
        }
        iVar5 = (*pcVar2)();
        *(undefined4 *)(iVar9 + DAT_0000d660 + 0x48) =
             *(undefined4 *)
              (((int)*(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0000d660) & 0xffU) *
               4 + DAT_0000d662 + iVar9);
      }
    }
    pcVar3 = DAT_0000d678;
    iVar8 = DAT_0000d670;
    *(undefined2 *)(DAT_0000d670 + 0x12) = *(undefined2 *)(DAT_0000d670 + 0x10);
    *(short *)(iVar8 + 0x10) = (short)PTR_FUN_0000d674;
    (*pcVar3)(0xc,0x16);
    pcVar4 = DAT_0000d67c;
    iVar5 = (*pcVar2)();
    iVar5 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0xc) + (int)DAT_0000d66a) >> 0xc;
    uVar10 = DAT_0000d680;
    (*pcVar4)();
    (*pcVar3)(0xc,0x17,param_3,param_4,uVar10,iVar5);
    iVar9 = *(int *)(iVar9 + DAT_0000d66c);
    iVar7 = iVar9 >> 0xc;
    iVar5 = (*pcVar2)();
    iVar5 = iVar9 - *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0xc) + (int)DAT_0000d66a) >> 0xc;
    uVar10 = DAT_0000d684;
    (*pcVar4)();
    (*pcVar3)(0xc,0x18,param_3,param_4,uVar10,iVar5,iVar7);
    (*pcVar4)();
    iVar5 = (int)*(short *)(iVar8 + 0x12);
    *(short *)(iVar8 + 0x10) = *(short *)(iVar8 + 0x12);
  }
  return iVar5;
}



void FUN_0000d68c(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (*DAT_0000d790)();
  iVar4 = *(int *)(*(int *)(iVar2 + 0x10) + 0x1c);
  iVar2 = (*DAT_0000d790)();
  if (*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x10) + 0x10) != '\0') {
    iVar2 = (int)DAT_0000d784;
    if ((*(ushort *)(DAT_0000d786 + DAT_0000d794) & *(ushort *)(DAT_0000d794 + 0xc)) == 0) {
      if (((*(ushort *)(DAT_0000d788 + DAT_0000d794) & *(ushort *)(DAT_0000d794 + 0xc)) != 0) &&
         (iVar3 = *(int *)(iVar4 + 0x3c) - iVar2, *(int *)(iVar4 + 0x3c) = iVar3, iVar3 < iVar2)) {
        *(int *)(iVar4 + 0x3c) = iVar2;
      }
    }
    else {
      iVar2 = *(int *)(iVar4 + 0x3c) + iVar2;
      *(int *)(iVar4 + 0x3c) = iVar2;
      if (DAT_0000d798 < iVar2) {
        *(int *)(iVar4 + 0x3c) = DAT_0000d798;
      }
    }
    pcVar1 = DAT_0000d7a4;
    iVar2 = DAT_0000d79c;
    *(undefined2 *)(DAT_0000d79c + 0x12) = *(undefined2 *)(DAT_0000d79c + 0x10);
    *(short *)(iVar2 + 0x10) = (short)PTR_FUN_0000d7a0;
    (*pcVar1)(1,0x10);
    (*DAT_0000d7ac)();
    (*DAT_0000d7b4)();
    *(undefined2 *)(iVar2 + 0x10) = *(undefined2 *)(iVar2 + 0x12);
  }
  return;
}



void FUN_0000dbf0(short *param_1)

{
  short sVar1;
  short sVar2;
  char cVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_20;
  int iStack28;
  int iStack24;
  
  pcVar4 = DAT_0000de80;
  cVar3 = *(char *)((int)param_1 + 0x25);
  if (cVar3 == '\0') {
    sVar1 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe) + 4);
    sVar2 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe) + 2);
    iStack24 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe)) * -0x20;
LAB_0000dcee:
    iStack28 = (int)sVar2 << 5;
    local_20 = (int)sVar1 << 5;
  }
  else if (cVar3 == '\x01') {
    local_20 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe)) * -0x20;
    sVar1 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe) + 2);
    sVar2 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe) + 4);
LAB_0000dd34:
    iStack28 = (int)sVar1 << 5;
    iStack24 = (int)sVar2 << 5;
  }
  else {
    if (cVar3 == '\x02') {
      sVar1 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe) + 4);
      sVar2 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe) + 2);
      iStack24 = (int)*(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe)) << 5;
      goto LAB_0000dcee;
    }
    if (cVar3 == '\x03') {
      local_20 = (int)*(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe)) << 5;
      sVar1 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe) + 2);
      sVar2 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe) + 4);
      goto LAB_0000dd34;
    }
  }
  if (*(int *)(param_1 + 0x14) == 0) goto LAB_0000dd6c;
  cVar3 = *(char *)((int)param_1 + 0x25);
  if (cVar3 == '\0') {
LAB_0000dd5c:
    local_20 = -local_20;
  }
  else {
    if (cVar3 != '\x01') {
      if (cVar3 == '\x02') goto LAB_0000dd5c;
      if (cVar3 != '\x03') goto LAB_0000dd6c;
    }
    iStack24 = -iStack24;
  }
LAB_0000dd6c:
  iVar5 = (*DAT_0000de80)();
  iVar8 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + 8);
  iVar5 = (*pcVar4)();
  iVar7 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0000de7a);
  iVar5 = (*pcVar4)();
  iVar9 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + 0xc);
  iVar5 = (*pcVar4)();
  iVar6 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0000de7c);
  iVar5 = (*pcVar4)();
  iVar10 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + 0x10);
  iVar5 = (*pcVar4)();
  iVar5 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0000de7e);
  *(int *)(param_1 + 2) = iVar8 + iVar7 + local_20;
  *(int *)(param_1 + 4) = iVar9 + iVar6 + iStack28;
  *(int *)(param_1 + 6) = iVar10 + iVar5 + iStack24;
  return;
}



uint FUN_0000ddf8(short *param_1)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  pcVar1 = DAT_0000de80;
  iVar3 = (*DAT_0000de80)();
  iVar9 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + 8);
  iVar3 = (*pcVar1)();
  iVar9 = iVar9 + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0000de7a);
  iVar3 = (*pcVar1)();
  iVar10 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + 0xc);
  iVar3 = (*pcVar1)();
  iVar10 = iVar10 + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0000de7c);
  iVar3 = (*pcVar1)();
  iVar11 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + 0x10);
  iVar3 = (*pcVar1)();
  pcVar2 = DAT_0000de84;
  iVar11 = iVar11 + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0000de7e);
  uVar4 = (int)*(char *)(param_1 + 0x12) & 0xff;
  if (uVar4 == 0) {
    iVar3 = (*pcVar1)();
    iVar6 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + 0xc);
    iVar3 = (*pcVar1)();
    iVar7 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + 0x10);
    iVar3 = (*pcVar1)();
    iVar8 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + 0x14);
    iVar3 = (*pcVar2)((int)*(short *)(*param_1 * 2 + *(int *)(param_1 + 0x10)) << 8,iVar9 - iVar6);
    iVar9 = (*pcVar2)((int)*(short *)(*param_1 * 2 + *(int *)(param_1 + 0x10)) << 8,iVar10 - iVar7);
    iVar10 = (*pcVar2)((int)*(short *)(*param_1 * 2 + *(int *)(param_1 + 0x10)) << 8,iVar11 - iVar8)
    ;
    iVar11 = (*pcVar1)();
    *(int *)(param_1 + 8) = *(int *)(*(int *)(*(int *)(iVar11 + 0x10) + 4) + 0xc) + iVar3;
    iVar3 = (*pcVar1)();
    *(int *)(param_1 + 10) = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + 0x10) + iVar9;
    uVar4 = (*pcVar1)();
    *(int *)(param_1 + 0xc) = *(int *)(*(int *)(*(int *)(uVar4 + 0x10) + 4) + 0x14) + iVar10;
  }
  else if (uVar4 == 1) {
    uVar5 = (*DAT_0000e04c)((int)*param_1 << 0x10,DAT_0000e048);
    iVar3 = (*pcVar1)();
    iVar6 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + 0xc);
    iVar3 = (*pcVar1)();
    iVar8 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + 0x10);
    iVar3 = (*pcVar1)();
    iVar7 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + 0x14);
    iVar3 = (*pcVar2)(uVar5,iVar6 - iVar9);
    iVar6 = (*pcVar2)(uVar5,iVar8 - iVar10);
    uVar4 = (*pcVar2)(uVar5,iVar7 - iVar11);
    *(int *)(param_1 + 8) = iVar9 + iVar3;
    *(int *)(param_1 + 10) = iVar10 + iVar6;
    *(uint *)(param_1 + 0xc) = iVar11 + uVar4;
  }
  else if (uVar4 == 2) {
    iVar3 = (*pcVar1)();
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + 0xc);
    iVar3 = (*pcVar1)();
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + 0x10);
    uVar4 = (*pcVar1)();
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*(int *)(*(int *)(uVar4 + 0x10) + 4) + 0x14);
  }
  return uVar4;
}



void FUN_0000e050(short *param_1)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  pcVar2 = DAT_0000e168;
  sVar1 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe));
  iVar3 = (*DAT_0000e168)();
  iVar4 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0000e160);
  iVar3 = (*pcVar2)();
  *(int *)(param_1 + 2) =
       sVar1 * 0x100 + iVar4 + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + 0x6c);
  sVar1 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe) + 2);
  iVar3 = (*pcVar2)();
  iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
  iVar5 = (int)DAT_0000e162;
  iVar4 = (*pcVar2)();
  *(int *)(param_1 + 4) =
       sVar1 * 0x100 +
       *(int *)(iVar5 + iVar3 +
               ((int)*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0000e164) & 0xffU) *
               4);
  sVar1 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe) + 4);
  iVar3 = (*pcVar2)();
  iVar4 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0000e166);
  iVar3 = (*pcVar2)();
  *(int *)(param_1 + 6) =
       sVar1 * 0x100 + iVar4 + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + 0x74);
  iVar3 = (*pcVar2)();
  if (*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x10) + 0x1b) != '\0') {
    (*DAT_0000e16c)(5,0x16);
    (*DAT_0000e174)();
  }
  return;
}



void FUN_0000e178(short *param_1)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  
  pcVar2 = DAT_0000e24c;
  sVar1 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0x10));
  iVar3 = (*DAT_0000e24c)();
  *(int *)(param_1 + 8) =
       sVar1 * 0x100 + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0000e246);
  sVar1 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0x10) + 2);
  iVar3 = (*pcVar2)();
  *(int *)(param_1 + 10) =
       sVar1 * 0x100 + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0000e248);
  sVar1 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0x10) + 4);
  iVar3 = (*pcVar2)();
  *(int *)(param_1 + 0xc) =
       sVar1 * 0x100 + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0000e24a);
  iVar3 = (*pcVar2)();
  if (*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x10) + 0x1b) != '\0') {
    (*DAT_0000e250)(5,0x17);
    (*DAT_0000e258)();
  }
  return;
}



void FUN_0000e25c(short *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_0000e354;
  iVar2 = (*DAT_0000e354)();
  *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_0000e34c) =
       (int)*(short *)(*param_1 * 6 + *(int *)(param_1 + 0x12)) << 8;
  iVar2 = (*pcVar1)();
  *(int *)((int)DAT_0000e34e + *(int *)(*(int *)(iVar2 + 0x10) + 4)) =
       (int)*(short *)(*param_1 * 6 + *(int *)(param_1 + 0x12) + 2) << 8;
  iVar2 = (*pcVar1)();
  *(int *)((int)DAT_0000e350 + *(int *)(*(int *)(iVar2 + 0x10) + 4)) =
       (int)*(short *)(*param_1 * 6 + *(int *)(param_1 + 0x12) + 4) << 8;
  iVar2 = (*pcVar1)();
  if (*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x10) + 0x1b) != '\0') {
    (*DAT_0000e358)(5,0x18);
    (*DAT_0000e360)();
  }
  return;
}



void FUN_0000e364(short *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_0000e45c;
  iVar2 = (*DAT_0000e45c)();
  *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_0000e454) =
       (int)*(short *)(*param_1 * 6 + *(int *)(param_1 + 0x14)) << 8;
  iVar2 = (*pcVar1)();
  *(int *)((int)DAT_0000e456 + *(int *)(*(int *)(iVar2 + 0x10) + 4)) =
       (int)*(short *)(*param_1 * 6 + *(int *)(param_1 + 0x14) + 2) << 8;
  iVar2 = (*pcVar1)();
  *(int *)((int)DAT_0000e458 + *(int *)(*(int *)(iVar2 + 0x10) + 4)) =
       (int)*(short *)(*param_1 * 6 + *(int *)(param_1 + 0x14) + 4) << 8;
  iVar2 = (*pcVar1)();
  if (*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x10) + 0x1b) != '\0') {
    (*DAT_0000e460)(5,0x19);
    (*DAT_0000e468)();
  }
  return;
}



void FUN_0000f8d2(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = (*DAT_0000f984)(param_1,DAT_0000f980,0xc);
  iVar4 = (*DAT_0000f988)(9,0);
  iVar2 = DAT_0000f970;
  iVar1 = DAT_0000f96c;
  if (iVar4 != 0) {
    if (iVar3 != 0) {
      *(uint *)(iVar3 + -4) = *(uint *)(iVar3 + -4) | 1;
      return;
    }
    return;
  }
  if (*(char *)(DAT_0000f96c + 0x4c) <= *(char *)(DAT_0000f96c + 0x4d)) {
    *(undefined2 *)(DAT_0000f970 + DAT_0000f960) = 8;
    *(undefined2 *)(iVar2 + DAT_0000f962) = 8;
  }
  if (param_2 != 0) {
    uVar5 = (*DAT_0000f98c)(iVar1);
                    // WARNING: Could not recover jumptable at 0x0000f93a. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_0000f978)(iVar1,uVar5,DAT_0000f990,0x1e);
    return;
  }
  uVar5 = (*DAT_0000f98c)(iVar1);
                    // WARNING: Could not recover jumptable at 0x0000f952. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0000f978)(iVar1,uVar5,DAT_0000f974,0x1e);
  return;
}



void FUN_0000ff58(undefined4 param_1,int param_2,int *param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_38;
  int iStack52;
  int iStack48;
  int iStack44;
  int iStack40;
  int iStack36;
  
  pcVar1 = DAT_00010088;
  iVar6 = (int)DAT_00010080;
  iVar7 = (int)DAT_00010082;
  iVar8 = (int)DAT_00010084;
  iVar9 = (int)DAT_00010086;
  iVar5 = 0;
  if (0 < param_2) {
    do {
      (*pcVar1)();
      iStack44 = (*DAT_0001008c)();
      iStack44 = iStack44 + iVar6;
      (*pcVar1)();
      iStack40 = (*DAT_0001008c)();
      iStack40 = iStack40 + iVar6;
      (*pcVar1)();
      iStack36 = (*DAT_0001008c)();
      iStack36 = iStack36 + iVar7;
      uVar2 = (*pcVar1)();
      (*pcVar1)();
      iVar3 = (*DAT_0001008c)();
      local_38 = *param_3;
      iStack52 = param_3[1];
      iStack48 = param_3[2];
      (*pcVar1)();
      iVar4 = (*DAT_0001008c)();
      local_38 = local_38 + iVar4 + iVar8;
      (*pcVar1)();
      iVar4 = (*DAT_0001008c)();
      iStack52 = iStack52 + iVar4 + iVar8;
      (*pcVar1)();
      iVar4 = (*DAT_0001008c)();
      iStack48 = iStack48 + iVar4 + iVar8;
      (*DAT_00010090)(param_1,&local_38,&iStack44,iVar3 + iVar9,uVar2 & 0x19,3);
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001039e(undefined4 param_1,short param_2,short param_3)

{
  int iVar1;
  
  iVar1 = (*_LAB_000103dc)((int)param_2 << 0x10,(int)param_3 << 0x10);
                    // WARNING: Could not recover jumptable at 0x000103c8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_000103e4)(param_1,DAT_000103e0 - iVar1);
  return;
}



void FUN_0001171c(undefined4 *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  
  piVar7 = DAT_000118d4;
  iVar6 = DAT_000118d0;
  uVar5 = DAT_000118c6;
  sVar1 = *(short *)((int)param_1 + 6);
  puVar11 = (undefined4 *)(DAT_000118d0 + 0x14);
  iVar12 = *(int *)(*DAT_000118cc + 0xc);
  sVar2 = *(short *)((int)param_1 + 0xe);
  uVar8 = *param_1;
  sVar3 = *(short *)((int)param_1 + 2);
  puVar10 = (undefined2 *)*puVar11;
  *puVar10 = DAT_000118c6;
  puVar10[2] = *(undefined2 *)(piVar7[1] + 10);
  puVar10[3] = *(short *)(*(int *)(iVar12 + 4) + 4) + *(short *)(piVar7[1] + 6);
  puVar10[4] = *(short *)(*(int *)(iVar12 + 4) + 4) + *(short *)(piVar7[1] + 2);
  puVar10[5] = *(undefined2 *)(piVar7[1] + 8);
  puVar10[6] = (short)uVar8 + -3;
  puVar10[7] = -sVar1;
  puVar10[10] = sVar3 + 3;
  puVar10[0xb] = -sVar2;
  iVar9 = *(int *)(iVar6 + 0x34);
  *(short *)(iVar9 + 4) = (short)((uint)(*(int *)(iVar6 + DAT_000118c8) << 0xc) >> 0x10);
  *(short *)(iVar9 + 6) = (short)((uint)puVar10 >> 3);
  *(int *)(iVar6 + 0x34) = iVar9 + 8;
  *(int *)(iVar6 + 0x30) = *(int *)(iVar6 + 0x30) + 1;
  *puVar11 = puVar10 + 0x10;
  *(int *)(iVar6 + 0x20) = *(int *)(iVar6 + 0x20) + 1;
  uVar8 = param_1[2];
  sVar3 = *(short *)((int)param_1 + 10);
  puVar10 = *(undefined2 **)(undefined4 *)(iVar6 + 0x14);
  *puVar10 = uVar5;
  puVar10[2] = *(undefined2 *)(piVar7[2] + 10);
  puVar10[3] = *(short *)(*(int *)(iVar12 + 4) + 4) + *(short *)(piVar7[2] + 6);
  puVar10[4] = *(short *)(*(int *)(iVar12 + 4) + 4) + *(short *)(piVar7[2] + 2);
  puVar10[5] = *(undefined2 *)(piVar7[2] + 8);
  puVar10[6] = (short)uVar8 + -3;
  puVar10[7] = -sVar1;
  puVar10[10] = sVar3 + 3;
  puVar10[0xb] = -sVar2;
  iVar9 = *(int *)(iVar6 + 0x34);
  *(short *)(iVar9 + 4) = (short)((uint)(*(int *)(iVar6 + DAT_000118c8) << 0xc) >> 0x10);
  *(short *)(iVar9 + 6) = (short)((uint)puVar10 >> 3);
  *(int *)(iVar6 + 0x34) = iVar9 + 8;
  *(int *)(iVar6 + 0x30) = *(int *)(iVar6 + 0x30) + 1;
  *(undefined4 *)(iVar6 + 0x14) = puVar10 + 0x10;
  *(int *)(iVar6 + 0x20) = *(int *)(iVar6 + 0x20) + 1;
  uVar8 = *param_1;
  uVar4 = *(undefined2 *)((int)param_1 + 10);
  puVar10 = *(undefined2 **)(undefined4 *)(iVar6 + 0x14);
  *puVar10 = uVar5;
  puVar10[2] = *(undefined2 *)(*piVar7 + 10);
  puVar10[3] = *(short *)(*(int *)(iVar12 + 4) + 4) + *(short *)(*piVar7 + 6);
  puVar10[4] = *(short *)(*(int *)(iVar12 + 4) + 4) + *(short *)(*piVar7 + 2);
  puVar10[5] = *(undefined2 *)(*piVar7 + 8);
  puVar10[6] = (short)uVar8;
  puVar10[7] = -sVar1;
  puVar10[10] = uVar4;
  puVar10[0xb] = -sVar2;
  iVar9 = *(int *)(iVar6 + 0x34);
  *(short *)(iVar9 + 4) = (short)((uint)(*(int *)(iVar6 + DAT_000118c8) << 0xc) >> 0x10);
  *(short *)(iVar9 + 6) = (short)((uint)puVar10 >> 3);
  *(int *)(iVar6 + 0x34) = iVar9 + 8;
  *(int *)(iVar6 + 0x30) = *(int *)(iVar6 + 0x30) + 1;
  *(undefined4 *)(iVar6 + 0x14) = puVar10 + 0x10;
  *(int *)(iVar6 + 0x20) = *(int *)(iVar6 + 0x20) + 1;
  return;
}



void FUN_00011fe6(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0001213c;
  param_1[6] = (int)(param_1[9] - param_1[3]) >> 1;
  param_1[7] = (int)(param_1[10] - param_1[4]) >> 1;
  param_1[8] = (int)(param_1[0xb] - param_1[5]) >> 1;
  param_1[0xc] = 0;
  uVar1 = (*DAT_00012140)(uVar1,(int)*(short *)(param_1 + 0xe) << 0x10);
  param_1[0xd] = uVar1;
  *param_1 = param_1[3];
  param_1[1] = param_1[4];
  param_1[2] = param_1[5];
  return;
}



bool FUN_0001202e(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  pcVar2 = DAT_00012148;
  bVar1 = DAT_0001213c <= param_1[0xc];
  if (bVar1) {
    param_1[0xc] = DAT_0001213c;
    param_1[0xd] = 0;
    *param_1 = param_1[9];
    param_1[1] = param_1[10];
    param_1[2] = param_1[0xb];
  }
  else {
    iVar5 = param_1[6];
    uVar6 = *(undefined4 *)
             ((short)((ushort)((uint)param_1[0xc] >> 0x10) & DAT_0001213a) * 4 + DAT_00012144);
    iVar4 = param_1[3];
    iVar3 = (*DAT_00012148)(uVar6,iVar5);
    *param_1 = (iVar5 + iVar4) - iVar3;
    iVar5 = param_1[7];
    iVar4 = param_1[4];
    iVar3 = (*pcVar2)(uVar6,iVar5);
    param_1[1] = (iVar5 + iVar4) - iVar3;
    iVar5 = param_1[8];
    iVar4 = param_1[5];
    iVar3 = (*pcVar2)(uVar6,iVar5);
    param_1[2] = (iVar5 + iVar4) - iVar3;
    param_1[0xc] = param_1[0xc] + param_1[0xd];
  }
  return bVar1;
}



uint FUN_000125b0(int *param_1)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  pcVar1 = DAT_0001269c;
  iVar3 = (*DAT_0001269c)();
  pcVar2 = DAT_000126a0;
  iVar7 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar4 = (*pcVar2)();
  uVar4 = uVar4 & 1;
  iVar3 = (*pcVar1)();
  uVar5 = (int)*(char *)((int)DAT_00012690 + *(int *)(*(int *)(iVar3 + 0x10) + 4)) & 0xff;
  if (uVar5 == 0) {
    iVar3 = (*pcVar1)();
    param_1[2] = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_00012690)
                          & 0xffU) * 4 + DAT_00012692 + iVar7) >> 1;
    if (uVar4 == 0) {
      iVar3 = (*pcVar1)();
      uVar4 = (uint)DAT_00012690;
      *param_1 = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU) * 4
                         + DAT_00012692 + iVar7) >> 1;
      return uVar4;
    }
    iVar3 = (*pcVar1)();
    uVar4 = (uint)DAT_00012690;
    piVar6 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU) * 4 +
                    DAT_00012692 + iVar7);
LAB_000126fa:
    *param_1 = -(*piVar6 >> 1);
  }
  else {
    if (uVar5 == 1) {
      iVar3 = (*pcVar1)();
      *param_1 = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_00012690)
                          & 0xffU) * 4 + DAT_00012692 + iVar7) >> 1;
      if (uVar4 == 0) {
        iVar3 = (*pcVar1)();
        uVar4 = (uint)DAT_000127d4;
        param_1[2] = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU)
                              * 4 + DAT_000127d6 + iVar7) >> 1;
        return uVar4;
      }
      iVar3 = (*pcVar1)();
      uVar4 = (uint)DAT_00012690;
      piVar6 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU) * 4 +
                      DAT_00012692 + iVar7);
    }
    else {
      if (uVar5 == 2) {
        iVar3 = (*pcVar1)();
        param_1[2] = -(*(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) +
                                               (int)DAT_000127d4) & 0xffU) * 4 +
                               DAT_000127d6 + iVar7) >> 1);
        if (uVar4 == 0) {
          iVar3 = (*pcVar1)();
          uVar4 = (uint)DAT_000127d4;
          *param_1 = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU)
                              * 4 + DAT_000127d6 + iVar7) >> 1;
          return uVar4;
        }
        iVar3 = (*pcVar1)();
        uVar4 = (uint)DAT_000127d4;
        piVar6 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU) * 4
                        + DAT_000127d6 + iVar7);
        goto LAB_000126fa;
      }
      if (uVar5 != 3) {
        return uVar5;
      }
      iVar3 = (*pcVar1)();
      *param_1 = -(*(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_000127d4
                                           ) & 0xffU) * 4 + DAT_000127d6 + iVar7) >> 1);
      if (uVar4 == 0) {
        iVar3 = (*pcVar1)();
        uVar4 = (uint)DAT_000127d4;
        param_1[2] = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU)
                              * 4 + DAT_000127d6 + iVar7) >> 1;
        return uVar4;
      }
      iVar3 = (*pcVar1)();
      uVar4 = (uint)DAT_000127d4;
      piVar6 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU) * 4 +
                      DAT_000127d6 + iVar7);
    }
    param_1[2] = -(*piVar6 >> 1);
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_0001278c(int *param_1)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  pcVar1 = _DAT_000127d8;
  iVar3 = (*_DAT_000127d8)();
  pcVar2 = _LAB_000127db_1;
  iVar7 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar4 = (*pcVar2)();
  uVar4 = uVar4 & 1;
  iVar3 = (*pcVar1)();
  uVar5 = (int)*(char *)((int)DAT_000127d4 + *(int *)(*(int *)(iVar3 + 0x10) + 4)) & 0xff;
  if (uVar5 == 0) {
    iVar3 = (*pcVar1)();
    param_1[2] = -*(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_00012920)
                           & 0xffU) * 4 + DAT_00012922 + iVar7);
    if (uVar4 == 0) {
      iVar3 = (*pcVar1)();
      uVar4 = (uint)DAT_00012920;
      *param_1 = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU) * 4
                         + DAT_00012922 + iVar7);
      return uVar4;
    }
    iVar3 = (*pcVar1)();
    uVar4 = (uint)DAT_00012920;
    piVar6 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU) * 4 +
                    DAT_00012922 + iVar7);
LAB_000128c0:
    *param_1 = -*piVar6;
  }
  else {
    if (uVar5 == 1) {
      iVar3 = (*pcVar1)();
      *param_1 = -*(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_00012920)
                           & 0xffU) * 4 + DAT_00012922 + iVar7);
      if (uVar4 == 0) {
        iVar3 = (*pcVar1)();
        uVar4 = (uint)DAT_00012920;
        param_1[2] = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU)
                              * 4 + DAT_00012922 + iVar7);
        return uVar4;
      }
      iVar3 = (*pcVar1)();
      uVar4 = (uint)DAT_00012920;
      piVar6 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU) * 4 +
                      DAT_00012922 + iVar7);
    }
    else {
      if (uVar5 == 2) {
        iVar3 = (*pcVar1)();
        param_1[2] = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) +
                                             (int)DAT_00012920) & 0xffU) * 4 + DAT_00012922 + iVar7)
        ;
        if (uVar4 == 0) {
          iVar3 = (*pcVar1)();
          uVar4 = (uint)DAT_00012920;
          *param_1 = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU)
                              * 4 + DAT_00012922 + iVar7);
          return uVar4;
        }
        iVar3 = (*pcVar1)();
        uVar4 = (uint)DAT_00012920;
        piVar6 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU) * 4
                        + DAT_00012922 + iVar7);
        goto LAB_000128c0;
      }
      if (uVar5 != 3) {
        return uVar5;
      }
      iVar3 = (*pcVar1)();
      *param_1 = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_00012920)
                          & 0xffU) * 4 + DAT_00012922 + iVar7);
      if (uVar4 == 0) {
        iVar3 = (*pcVar1)();
        uVar4 = (uint)DAT_00012a18;
        param_1[2] = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU)
                              * 4 + DAT_00012a1a + iVar7);
        return uVar4;
      }
      iVar3 = (*pcVar1)();
      uVar4 = (uint)DAT_00012920;
      piVar6 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU) * 4 +
                      DAT_00012922 + iVar7);
    }
    param_1[2] = -*piVar6;
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_0001294a(int *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  pcVar1 = DAT_00012a24;
  iVar2 = (*DAT_00012a24)();
  iVar4 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar2 = (*pcVar1)();
  uVar3 = (int)*(char *)((int)DAT_00012a18 + *(int *)(*(int *)(iVar2 + 0x10) + 4)) & 0xff;
  if (uVar3 == 0) {
    iVar2 = (*pcVar1)();
    uVar3 = (uint)_LAB_00012a1c;
    iVar2 = -*(int *)(iVar4 + uVar3) -
            *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_00012a18) &
                     0xffU) * 4 + DAT_00012a1a + iVar4);
LAB_000129ea:
    param_1[2] = iVar2;
  }
  else {
    if (uVar3 == 1) {
      iVar2 = (*pcVar1)();
      uVar3 = (uint)DAT_00012a1e;
      iVar2 = -*(int *)(iVar4 + uVar3) -
              *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_00012a18) &
                       0xffU) * 4 + DAT_00012a1a + iVar4);
    }
    else {
      if (uVar3 == 2) {
        iVar2 = (*pcVar1)();
        uVar3 = (uint)DAT_00012a1a;
        iVar2 = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_00012a18) &
                         0xffU) * 4 + DAT_00012a1a + iVar4) + *(int *)(iVar4 + uVar3);
        goto LAB_000129ea;
      }
      if (uVar3 != 3) {
        return uVar3;
      }
      iVar2 = (*pcVar1)();
      uVar3 = (uint)DAT_00012a20;
      iVar2 = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_00012a18) &
                       0xffU) * 4 + DAT_00012a1a + iVar4) + *(int *)(iVar4 + uVar3);
    }
    *param_1 = iVar2;
  }
  return uVar3;
}



void FUN_00012a28(int param_1)

{
  char cVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  
  pcVar4 = DAT_00012b40;
  pcVar3 = DAT_00012b3c;
  puVar2 = PTR_FUN_00012b38;
  iVar5 = (*DAT_00012b40)();
  cVar1 = *(char *)((int)DAT_00012b34 + *(int *)(*(int *)(iVar5 + 0x10) + 4));
  if (cVar1 == '\0') {
    iVar5 = (*pcVar4)();
    iVar5 = *(int *)(*(int *)(iVar5 + 0x10) + 4);
    iVar9 = (int)DAT_00012b36;
    iVar6 = (*pcVar4)();
    iVar5 = (*pcVar3)(puVar2,*(undefined4 *)
                              (iVar9 + iVar5 +
                              ((int)*(char *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) +
                                             (int)DAT_00012b34) & 0xffU) * 4));
LAB_00012acc:
    *(int *)(param_1 + 0xc) = iVar5;
  }
  else {
    if (cVar1 == '\x01') {
      iVar5 = (*pcVar4)();
      iVar9 = (int)DAT_00012b36;
      iVar5 = *(int *)(*(int *)(iVar5 + 0x10) + 4);
      iVar6 = (*pcVar4)();
      iVar5 = (*pcVar3)(puVar2,*(undefined4 *)
                                (iVar9 + iVar5 +
                                ((int)*(char *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) +
                                               (int)DAT_00012b34) & 0xffU) * 4));
    }
    else {
      if (cVar1 == '\x02') {
        iVar5 = (*pcVar4)();
        iVar5 = *(int *)(*(int *)(iVar5 + 0x10) + 4);
        iVar9 = (int)DAT_00012b36;
        iVar6 = (*pcVar4)();
        iVar5 = (*pcVar3)(puVar2,*(undefined4 *)
                                  (iVar9 + iVar5 +
                                  ((int)*(char *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) +
                                                 (int)DAT_00012b34) & 0xffU) * 4));
        iVar5 = -iVar5;
        goto LAB_00012acc;
      }
      if (cVar1 != '\x03') goto LAB_00012af6;
      iVar5 = (*pcVar4)();
      iVar5 = *(int *)(*(int *)(iVar5 + 0x10) + 4);
      iVar9 = (int)DAT_00012b36;
      iVar6 = (*pcVar4)();
      iVar5 = (*pcVar3)(puVar2,*(undefined4 *)
                                (iVar9 + iVar5 +
                                ((int)*(char *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) +
                                               (int)DAT_00012b34) & 0xffU) * 4));
      iVar5 = -iVar5;
    }
    *(int *)(param_1 + 4) = iVar5;
  }
LAB_00012af6:
  uVar7 = (*DAT_00012b44)();
  if ((uVar7 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x20) = DAT_00012b4c;
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = DAT_00012b48;
  }
  (*DAT_00012b44)();
  iVar5 = (*DAT_00012b50)();
  if (iVar5 == 0) {
    *(undefined **)(param_1 + 0x1c) = PTR_DAT_0002d82c_1_00012b54;
  }
  else if (iVar5 == 1) {
    *(undefined4 *)(param_1 + 0x1c) = DAT_00012c50;
  }
  else if (iVar5 == 2) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  uVar8 = (*pcVar3)(DAT_00012c54,*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x10) = uVar8;
  uVar8 = (*pcVar3)(DAT_00012c54,*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x14) = uVar8;
  return;
}



uint FUN_00012b80(int param_1)

{
  code *pcVar1;
  code *pcVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  
  uVar4 = (*DAT_00012c58)();
  pcVar2 = DAT_00012c5c;
  iVar5 = (*DAT_00012c5c)();
  uVar7 = DAT_00012c64;
  iVar5 = *(int *)(*(int *)(iVar5 + 0x10) + 8);
  if ((uVar4 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x14) = DAT_00012c6c;
    *(undefined4 *)(param_1 + 0x20) = DAT_00012c70;
    uVar7 = DAT_00012c74;
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = DAT_00012c60;
    *(undefined4 *)(param_1 + 0x20) = uVar7;
    uVar7 = DAT_00012c68;
  }
  *(undefined4 *)(iVar5 + 0x6c) = uVar7;
  iVar5 = (*pcVar2)();
  iVar8 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + 0x10);
  iVar5 = (*pcVar2)();
  puVar3 = PTR_DAT_0002d82c_1_00012c7c;
  if (iVar8 - *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + 0xc) < 0) {
    *(undefined4 *)(param_1 + 0x10) = DAT_00012c80;
    *(undefined4 *)(param_1 + 0x1c) = DAT_00012c50;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = DAT_00012c78;
    *(undefined **)(param_1 + 0x1c) = puVar3;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  pcVar1 = DAT_00012c58;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar6 = (*pcVar1)();
  puVar3 = PTR_FUN_00012c88;
  pcVar1 = DAT_00012c84;
  uVar6 = uVar6 & 1;
  iVar5 = (*pcVar2)();
  uVar4 = (int)*(char *)((int)DAT_00012c48 + *(int *)(*(int *)(iVar5 + 0x10) + 4)) & 0xff;
  if (uVar4 == 0) {
    if (uVar6 == 0) {
      iVar5 = (*pcVar2)();
      uVar7 = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_00012c4c);
    }
    else {
      iVar5 = (*pcVar2)();
      uVar7 = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_00012c4a);
    }
    uVar4 = (*pcVar1)(puVar3,uVar7);
    *(uint *)(param_1 + 0xc) = uVar4;
  }
  else if (uVar4 == 1) {
    if (uVar6 == 0) {
      iVar5 = (*pcVar2)();
      uVar7 = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_00012d72);
    }
    else {
      iVar5 = (*pcVar2)();
      uVar7 = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_00012d70);
    }
    uVar4 = (*pcVar1)(puVar3,uVar7);
    *(uint *)(param_1 + 4) = uVar4;
  }
  else if (uVar4 == 2) {
    if (uVar6 == 0) {
      iVar5 = (*pcVar2)();
      uVar7 = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_00012d76);
    }
    else {
      iVar5 = (*pcVar2)();
      uVar7 = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_00012d74);
    }
    iVar5 = (*pcVar1)(puVar3,uVar7);
    uVar4 = -iVar5;
    *(uint *)(param_1 + 0xc) = uVar4;
  }
  else if (uVar4 == 3) {
    if (uVar6 == 0) {
      iVar5 = (*pcVar2)();
      uVar7 = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_00012d70);
    }
    else {
      iVar5 = (*pcVar2)();
      uVar7 = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_00012d72);
    }
    iVar5 = (*pcVar1)(puVar3,uVar7);
    uVar4 = -iVar5;
    *(uint *)(param_1 + 4) = uVar4;
  }
  return uVar4;
}



void FUN_00012c32(undefined4 param_1)

{
  int in_r0;
  undefined4 uVar1;
  int in_r2;
  code *unaff_r11;
  code *unaff_r13;
  int unaff_r14;
  
  (*unaff_r13)(param_1,*(undefined4 *)(in_r2 + in_r0));
  uVar1 = (*unaff_r11)();
  *(undefined4 *)(unaff_r14 + 0xc) = uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char FUN_00012d12(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  
  uVar5 = (*_LAB_00012d78)();
  pcVar1 = DAT_00012d7c;
  iVar6 = (*DAT_00012d7c)();
  uVar4 = DAT_00012d8c;
  uVar9 = DAT_00012d88;
  uVar3 = DAT_00012d84;
  uVar2 = DAT_00012d80;
  iVar6 = *(int *)(*(int *)(iVar6 + 0x10) + 8);
  if ((uVar5 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x14) = DAT_00012d88;
    *(undefined4 *)(param_1 + 0x20) = uVar4;
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = DAT_00012d80;
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    uVar9 = uVar2;
  }
  *(undefined4 *)(iVar6 + 0x6c) = uVar9;
  iVar6 = (*pcVar1)();
  iVar10 = *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) + 0x10);
  iVar6 = (*pcVar1)();
  puVar8 = PTR_LAB_00012d94;
  if (iVar10 - *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x18) + 0xc) < 0) {
    *(undefined4 *)(param_1 + 0x10) = DAT_00012eb8;
    *(undefined4 *)(param_1 + 0x1c) = DAT_00012ebc;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = DAT_00012d90;
    *(undefined **)(param_1 + 0x1c) = puVar8;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar6 = (*pcVar1)();
  cVar7 = *(char *)((int)DAT_00012eb4 + *(int *)(*(int *)(iVar6 + 0x10) + 4));
  if (cVar7 == '\0') {
    *(undefined **)(param_1 + 0xc) = PTR_FUN_00012ec0;
    return cVar7;
  }
  puVar8 = PTR_FUN_00012ec0;
  if (cVar7 != '\x01') {
    if (cVar7 == '\x02') {
      *(undefined **)(param_1 + 0xc) = DAT_00012ec4;
      return cVar7;
    }
    puVar8 = DAT_00012ec4;
    if (cVar7 != '\x03') {
      return cVar7;
    }
  }
  *(undefined **)(param_1 + 4) = puVar8;
  return cVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00012de8(int *param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pcVar1 = _DAT_00012ec8;
  iVar3 = (*_DAT_00012ec8)();
  iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    iVar4 = (*pcVar1)();
    iVar5 = *(int *)(iVar3 + 0xc);
    iVar8 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + 8);
    iVar4 = (*pcVar1)();
    iVar6 = *(int *)(iVar3 + 0x10);
    iVar9 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + 0xc);
    iVar4 = (*pcVar1)();
    uVar2 = _LAB_00012ecf_1;
    pcVar1 = _LAB_00012ecb_1;
    iVar7 = *(int *)(iVar3 + 0x14);
    iVar4 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + 0x10);
    iVar3 = (*_LAB_00012ecb_1)(_LAB_00012ecf_1,iVar5 - iVar8);
    *param_1 = iVar3;
    iVar3 = (*pcVar1)(uVar2,iVar6 - iVar9);
    param_1[1] = iVar3;
    param_2 = (*pcVar1)(uVar2,iVar7 - iVar4);
    param_1[2] = param_2;
  }
  else if (param_2 == 1) {
    iVar4 = (*pcVar1)();
    *param_1 = *(int *)(iVar3 + 0xc) - *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + 8);
    iVar4 = (*pcVar1)();
    param_1[1] = *(int *)(iVar3 + 0x10) - *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + 0xc);
    param_2 = (*pcVar1)();
    param_1[2] = *(int *)(iVar3 + 0x14) - *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x18) + 0x10)
    ;
  }
  else if (param_2 == 2) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return param_2;
}



void FUN_0001300c(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int local_34;
  int iStack48;
  int iStack44;
  int local_28;
  int iStack36;
  int iStack32;
  
  iVar2 = (*DAT_0001308c)();
  uVar8 = DAT_000131e0;
  pcVar1 = DAT_000131dc;
  iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 8);
  if (param_1 == 0) {
    iVar9 = (int)DAT_00013088;
    local_34 = *(int *)(iVar2 + iVar9 + -0x50) - *(int *)(iVar2 + iVar9);
    iStack48 = *(int *)(iVar2 + iVar9 + -0x4c) - *(int *)(iVar2 + iVar9 + 4);
    iStack44 = *(int *)(iVar2 + iVar9 + -0x48) - *(int *)(iVar2 + iVar9 + 8);
    local_28 = *(int *)(iVar2 + iVar9 + -0x44) - *(int *)(iVar2 + iVar9 + 0xc);
    iStack36 = *(int *)(iVar2 + iVar9 + -0x40) - *(int *)(iVar2 + iVar9 + 0x10);
    iStack32 = *(int *)(iVar2 + iVar9 + -0x3c) - *(int *)(iVar2 + iVar9 + 0x14);
  }
  else if (param_1 == 1) {
    iVar9 = (int)DAT_000131d4;
    local_34 = *(int *)(iVar2 + iVar9 + 0x50) - *(int *)(iVar2 + iVar9);
    iStack48 = *(int *)(iVar2 + iVar9 + 0x54) - *(int *)(iVar2 + iVar9 + 4);
    iStack44 = *(int *)(iVar2 + iVar9 + 0x58) - *(int *)(iVar2 + iVar9 + 8);
    local_28 = *(int *)(iVar2 + iVar9 + 0x5c) - *(int *)(iVar2 + iVar9 + 0xc);
    iStack36 = *(int *)(iVar2 + iVar9 + 0x60) - *(int *)(iVar2 + iVar9 + 0x10);
    iStack32 = *(int *)(iVar2 + iVar9 + 100) - *(int *)(iVar2 + iVar9 + 0x14);
  }
  uVar3 = (*DAT_000131dc)(DAT_000131e0,local_34);
  uVar4 = (*pcVar1)(uVar8,iStack48);
  uVar5 = (*pcVar1)(uVar8,iStack44);
  uVar6 = (*pcVar1)(uVar8,local_28);
  uVar7 = (*pcVar1)(uVar8,iStack36);
  uVar8 = (*pcVar1)(uVar8,iStack32);
  iVar9 = (int)DAT_000131d4;
  *(undefined4 *)(iVar2 + iVar9) = uVar3;
  *(undefined4 *)(iVar2 + iVar9 + 4) = uVar4;
  *(undefined4 *)(iVar2 + iVar9 + 8) = uVar5;
  *(undefined4 *)(iVar2 + iVar9 + 0xc) = uVar6;
  *(undefined4 *)(iVar2 + iVar9 + 0x10) = uVar7;
  *(undefined4 *)(iVar2 + iVar9 + 0x14) = uVar8;
  *(undefined4 *)(iVar2 + iVar9 + 0x24) = 0;
  *(undefined4 *)(iVar2 + iVar9 + 0x28) = 0;
  *(undefined4 *)(iVar2 + iVar9 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + iVar9 + 0x30) = 0;
  *(undefined4 *)(iVar2 + iVar9 + 0x34) = 0;
  *(undefined4 *)(iVar2 + iVar9 + 0x38) = 0;
  return;
}



void FUN_000139bc(char *param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  
  if ((*param_1 == '\0') && ((param_1[1] & 2U) != 0)) {
    param_1[1] = param_1[1] & 0xfd;
    iVar1 = DAT_00013a58;
    iVar2 = (*DAT_00013a60)((int)*(short *)(DAT_00013a58 + DAT_00013a52) << 0x10,DAT_00013a5c);
    sVar4 = (short)((uint)(iVar2 + DAT_00013a64) >> 0x10);
    sVar3 = *(short *)(iVar1 + DAT_00013a52) - *(short *)(iVar1 + DAT_00013a54);
    if (sVar4 <= sVar3) {
      sVar3 = sVar4;
    }
    *(short *)(iVar1 + DAT_00013a54) = *(short *)(iVar1 + DAT_00013a54) + sVar3;
  }
  return;
}



void FUN_00013a10(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_00013a68;
  if ((*(byte *)(param_1 + 1) & 8) == 0) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 8;
    iVar2 = (*pcVar1)();
    if (((uint)PTR_LAB_00013a6c &
        *(uint *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x18) + (int)DAT_00013a56)) == 0) {
      *(undefined *)(param_1 + 2) = 1;
    }
    iVar2 = (*DAT_00013a68)();
    iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
    *(uint *)(iVar2 + DAT_00013a56) = *(uint *)(iVar2 + DAT_00013a56) | (uint)PTR_LAB_00013a6c;
  }
  return;
}



void FUN_00013a70(int param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  pcVar1 = DAT_00013b3c;
  (*DAT_00013b3c)();
  iVar2 = (*pcVar1)();
  if ((((*(uint *)((int)DAT_00013b30 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18)) & 0x10) != 0) &&
      (iVar2 = (*pcVar1)(),
      -1 < *(short *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x18) + (int)DAT_00013b32))) &&
     (0 < *DAT_00013b40)) {
    *(undefined *)(param_1 + 3) = 1;
  }
  if ((*(char *)(param_1 + 3) == '\x01') && (iVar2 = (*DAT_00013b44)(), iVar2 != 0)) {
    if (((*DAT_00013b40 < 1) ||
        ((iVar2 = (*pcVar1)(),
         *(short *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_00013b34) < 1 ||
         (iVar2 = (*pcVar1)(),
         *(short *)(*(int *)(*(int *)(iVar2 + 0x10) + 0xc) + (int)DAT_00013b36) < 1)))) ||
       (uVar3 = (*DAT_00013b48)(), (uVar3 & 1) != 0)) {
      *(undefined *)(param_1 + 3) = 0;
    }
    else {
      (*DAT_00013b4c)(0x10);
      (*DAT_00013b50)(3);
      iVar2 = (*pcVar1)();
      *(undefined2 *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_00013b38) = 0;
      iVar2 = (*pcVar1)();
      *(undefined2 *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_00013b3a) = 0xffff;
      *(undefined *)(param_1 + 3) = 0;
    }
  }
  return;
}



void FUN_00013b54(void)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  short sVar4;
  
  pcVar1 = DAT_00013c38;
  iVar3 = (*DAT_00013c38)();
  iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
  *(uint *)(iVar3 + DAT_00013c24) = *(uint *)(iVar3 + DAT_00013c24) & 0xffffff80;
  iVar3 = (*pcVar1)();
  *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_00013c26) = 0;
  iVar3 = (*pcVar1)();
  *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_00013c28) = 0;
  iVar3 = (*pcVar1)();
  *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_00013c2a) = 0;
  iVar3 = (*pcVar1)();
  *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_00013c2c) = 0;
  iVar3 = (*pcVar1)();
  *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_00013c2e) = 0;
  iVar3 = (*pcVar1)();
  pcVar2 = DAT_00013c3c;
  *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_00013c30) = 0;
  sVar4 = (*pcVar2)(0x3c);
  iVar3 = (*pcVar1)();
  *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_00013c32) = (int)sVar4 << 0x10;
  return;
}



void FUN_00013e0c(short *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,short param_7)

{
  int iVar1;
  int extraout_r2;
  short sVar2;
  short local_14;
  short sStack18;
  short sStack16;
  short sStack14;
  short local_c;
  short sStack10;
  short local_8;
  short sStack6;
  
  if (param_3 < 1) {
    param_3 = 7;
  }
  sVar2 = (short)param_3;
  if (0 < param_5) {
    iVar1 = (*DAT_00013eec)();
    if (extraout_r2 < iVar1) {
      iVar1 = extraout_r2;
    }
    if (0 < iVar1) {
      local_14 = *param_1 + DAT_00013ee6;
      sStack16 = (short)iVar1 + *param_1 + DAT_00013ee6;
      sStack18 = 0x70 - param_1[1];
      sStack10 = (-sVar2 - param_1[1]) + 0x70;
      sStack14 = sStack18;
      local_c = sStack16;
      local_8 = local_14;
      sStack6 = sStack10;
      (*DAT_00013ef0)((int)DAT_00013ee8,&local_14,(int)param_7,0,&local_14);
    }
  }
  return;
}



uint FUN_0001400a(void)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  code *unaff_r10;
  undefined4 unaff_r11;
  undefined4 *unaff_r13;
  int *unaff_r14;
  
  unaff_r14[4] = *unaff_r14;
  iVar3 = (*unaff_r10)();
  uVar4 = (uint)DAT_0001411e;
  if (0 < *(short *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4)) {
    iVar3 = (*unaff_r10)();
    pcVar2 = DAT_00014128;
    uVar4 = *(uint *)((int)DAT_00014120 + *(int *)(*(int *)(iVar3 + 0x10) + 4));
    if ((uVar4 & 8) == 0) {
      if (unaff_r13[5] != *unaff_r14) {
        iVar3 = (*DAT_00014128)(unaff_r14[3],*unaff_r14);
        unaff_r14[4] = iVar3;
      }
      unaff_r13[5] = *(undefined4 *)*unaff_r13;
      uVar4 = (*DAT_0001412c)();
      if (uVar4 != 0) {
        iVar3 = (*unaff_r10)();
        uVar4 = (uint)DAT_00014120;
        if ((DAT_00014130 & *(uint *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4)) == 0) {
          if (*(char *)(unaff_r13 + 9) == *(char *)((int)unaff_r14 + 0x16)) {
            return 0x16;
          }
          *(short *)(unaff_r14 + 5) = *(short *)(unaff_r14 + 5) + 1;
          if (unaff_r13[8] != 0) {
            unaff_r13[8] = 0;
            unaff_r14[3] = 0;
          }
          iVar3 = (*pcVar2)(unaff_r14[3],*unaff_r14);
          unaff_r14[4] = iVar3;
          *(undefined *)(unaff_r13 + 9) = *(undefined *)((int)unaff_r14 + 0x16);
          return 0x24;
        }
      }
      if (*unaff_r14 == 0) {
        unaff_r14[4] = 0;
        unaff_r14[3] = 0;
      }
      else {
        unaff_r13[3] = unaff_r14[4];
        iVar3 = (*unaff_r10)();
        if (((DAT_00014124 & *(ushort *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_00014122))
             == 0) && (unaff_r13[8] == 0)) {
          unaff_r14[4] = unaff_r14[4] + unaff_r14[1];
        }
        if (*(char *)(unaff_r13 + 9) == *(char *)((int)unaff_r14 + 0x16)) {
          if (unaff_r14[4] < *unaff_r14) {
            unaff_r13[8] = 0;
            if (unaff_r14[4] < 1) {
              unaff_r14[4] = 0;
            }
            iVar3 = (*DAT_00014204)(unaff_r14[4],*unaff_r14);
            bVar1 = DAT_000141f0 <= iVar3;
            unaff_r14[3] = iVar3;
            if (bVar1) {
              unaff_r14[3] = DAT_00014208;
            }
          }
          else {
            unaff_r14[4] = *unaff_r14;
            if (unaff_r13[8] == 0) {
              cVar5 = *(char *)((int)unaff_r14 + 0x16) + '\x01';
              *(char *)((int)unaff_r14 + 0x16) = cVar5;
              iVar3 = DAT_000141f0;
              if ((int)cVar5 < (int)((int)*(char *)((int)unaff_r13 + 0x27) & 0xffU)) {
                unaff_r13[8] = 0;
                unaff_r14[4] = 0;
                unaff_r14[3] = 0;
              }
              else {
                *(undefined *)((int)unaff_r14 + 0x16) = *(undefined *)((int)unaff_r13 + 0x27);
                unaff_r13[8] = unaff_r11;
                unaff_r14[3] = iVar3;
              }
              (*DAT_000141f8)();
              if (*DAT_000141fc == '\b') {
                (*DAT_00014200)(0x20);
              }
              else {
                (*DAT_00014200)(0x19);
              }
              *(char *)((int)unaff_r13 + 0x25) = (char)unaff_r11;
              *(undefined *)((int)unaff_r13 + 0x26) = 0;
            }
            else if ((int)*(char *)((int)unaff_r14 + 0x16) !=
                     ((int)*(char *)((int)unaff_r13 + 0x27) & 0xffU)) {
              unaff_r13[8] = 0;
              unaff_r14[4] = 0;
              unaff_r14[3] = 0;
            }
          }
        }
        else {
          *(short *)(unaff_r14 + 5) = *(short *)(unaff_r14 + 5) + 1;
          if (unaff_r13[8] != 0) {
            unaff_r13[8] = 0;
            unaff_r14[3] = 0;
          }
          iVar3 = (*pcVar2)(unaff_r14[3],*unaff_r14);
          unaff_r14[4] = iVar3;
        }
        uVar4 = 0x24;
        *(undefined *)(unaff_r13 + 9) = *(undefined *)((int)unaff_r14 + 0x16);
        unaff_r13[4] = unaff_r14[3];
      }
    }
  }
  return uVar4;
}



void FUN_0001420c(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  code *pcVar5;
  short *psVar6;
  short *psVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  short sVar12;
  int iVar11;
  byte bVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined4 *puVar16;
  undefined2 *puVar17;
  
  psVar7 = DAT_00014394;
  psVar6 = DAT_00014390;
  pcVar5 = DAT_0001438c;
  puVar17 = DAT_00014388;
  sVar1 = *DAT_00014394;
  sVar2 = *DAT_00014390;
  iVar10 = (*DAT_0001438c)();
  sVar12 = sVar2 + sVar1 + *(short *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x20) + 0x16) +
           DAT_00014384;
  sVar2 = psVar6[1];
  sVar1 = psVar7[1];
  iVar11 = (*pcVar5)();
  piVar9 = DAT_000143a0;
  piVar8 = DAT_0001439c;
  iVar10 = DAT_00014398;
  uVar4 = DAT_00014386;
  sVar3 = *(short *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x20) + 0x18);
  puVar16 = (undefined4 *)(DAT_00014398 + 0x14);
  puVar14 = (undefined2 *)*puVar16;
  puVar15 = *(undefined2 **)(DAT_00014398 + 0x24);
  *(undefined2 **)(DAT_00014398 + 0x24) = puVar15 + 4;
  *puVar14 = uVar4;
  puVar14[2] = *(ushort *)(*piVar8 + 10) | 4;
  puVar14[3] = *(short *)(*piVar8 + 6) + *(short *)(*(int *)(*(int *)(*piVar9 + 0xc) + 4) + 4);
  puVar14[4] = *(short *)(*piVar8 + 2) + *(short *)(*(int *)(*(int *)(*piVar9 + 0xc) + 4) + 4);
  puVar14[5] = *(undefined2 *)(*piVar8 + 8);
  puVar14[6] = sVar12;
  puVar14[7] = -(((-sVar1 - sVar2) - sVar3) + 0x70);
  *puVar15 = *puVar17;
  puVar15[1] = puVar17[1];
  puVar15[2] = puVar17[2];
  puVar15[3] = puVar17[3];
  puVar14[0xe] = (short)((uint)puVar15 >> 3);
  iVar11 = *(int *)(iVar10 + 0x34);
  *(undefined2 *)(iVar11 + 4) = 0;
  *(short *)(iVar11 + 6) = (short)((uint)puVar14 >> 3);
  *(int *)(iVar10 + 0x34) = iVar11 + 8;
  *(int *)(iVar10 + 0x30) = *(int *)(iVar10 + 0x30) + 1;
  *puVar16 = puVar14 + 0x10;
  *(int *)(iVar10 + 0x20) = *(int *)(iVar10 + 0x20) + 1;
  if (*(char *)(param_1 + 0x25) == '\x01') {
    iVar11 = (*DAT_000143a4)();
    if (iVar11 != 0) {
      puVar17 = DAT_000143a8;
    }
    bVar13 = *(char *)(param_1 + 0x26) + 1;
    *(byte *)(param_1 + 0x26) = bVar13;
    if (0xf < bVar13) {
      *(undefined *)(param_1 + 0x25) = 0;
    }
  }
  psVar7 = DAT_000143ac;
  psVar6 = DAT_00014390;
  sVar1 = *DAT_000143ac;
  sVar2 = *DAT_00014390;
  iVar11 = (*pcVar5)();
  sVar12 = sVar2 + sVar1 + *(short *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x20) + 0x16) +
           DAT_00014384;
  sVar2 = psVar6[1];
  sVar1 = psVar7[1];
  iVar11 = (*pcVar5)();
  piVar8 = DAT_0001445c;
  uVar4 = DAT_0001445a;
  sVar3 = *(short *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x20) + 0x18);
  puVar14 = *(undefined2 **)(undefined4 *)(iVar10 + 0x14);
  puVar15 = *(undefined2 **)(iVar10 + 0x24);
  *(undefined2 **)(iVar10 + 0x24) = puVar15 + 4;
  *puVar14 = uVar4;
  puVar14[2] = *(ushort *)(*piVar8 + 10) | 4;
  puVar14[3] = *(short *)(*piVar8 + 6) + *(short *)(*(int *)(*(int *)(*piVar9 + 0xc) + 4) + 4);
  puVar14[4] = *(short *)(*piVar8 + 2) + *(short *)(*(int *)(*(int *)(*piVar9 + 0xc) + 4) + 4);
  puVar14[5] = *(undefined2 *)(*piVar8 + 8);
  puVar14[6] = sVar12;
  puVar14[7] = -(((-sVar1 - sVar2) - sVar3) + 0x70);
  *puVar15 = *puVar17;
  puVar15[1] = puVar17[1];
  puVar15[2] = puVar17[2];
  puVar15[3] = puVar17[3];
  puVar14[0xe] = (short)((uint)puVar15 >> 3);
  iVar11 = *(int *)(iVar10 + 0x34);
  *(undefined2 *)(iVar11 + 4) = 0;
  *(short *)(iVar11 + 6) = (short)((uint)puVar14 >> 3);
  *(int *)(iVar10 + 0x34) = iVar11 + 8;
  *(int *)(iVar10 + 0x30) = *(int *)(iVar10 + 0x30) + 1;
  *(undefined4 *)(iVar10 + 0x14) = puVar14 + 0x10;
  *(int *)(iVar10 + 0x20) = *(int *)(iVar10 + 0x20) + 1;
  return;
}



void FUN_00014a00(void)

{
  if (*DAT_00014b0c == '\b') {
                    // WARNING: Could not recover jumptable at 0x00014a0a. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_00014b10)(0x21);
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00014a10. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00014b10)(0x1a);
  return;
}



void FUN_00014dc0(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*DAT_00014e20)();
  (*DAT_00014e24)(param_1,*(int *)(*(int *)(iVar1 + 0x10) + 0x18) + 8,(int)param_2);
  uVar2 = *(undefined4 *)(DAT_00014e28 + ((int)param_2 & 0xffU) * 4);
  iVar1 = (*DAT_00014e20)();
  (*DAT_00014e2c)(param_1,*(int *)(*(int *)(iVar1 + 0x10) + 0x18) + 8,uVar2,2);
  FUN_00014a00();
  return;
}



uint FUN_000159bc(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  pcVar1 = DAT_00015af0;
  param_2[2] = 0;
  iVar2 = (*pcVar1)();
  uVar3 = (int)*(char *)((int)DAT_00015aea + *(int *)(*(int *)(iVar2 + 0x10) + 4)) & 0xff;
  if (uVar3 == 0) {
    iVar2 = (*pcVar1)();
    param_2[2] = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_00015aea)
                          & 0xffU) * 4 + DAT_00015aec + param_1) >> 2;
    iVar2 = (*pcVar1)();
    uVar3 = (uint)DAT_00015aea;
    iVar2 = -(*(int *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + uVar3) & 0xffU) * 4 +
                      DAT_00015aec + param_1) >> 2);
LAB_00015a9e:
    *param_2 = iVar2;
  }
  else {
    if (uVar3 == 1) {
      iVar2 = (*pcVar1)();
      *param_2 = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_00015aea)
                          & 0xffU) * 4 + DAT_00015aec + param_1) >> 2;
      iVar2 = (*pcVar1)();
      uVar3 = (uint)DAT_00015aea;
      piVar4 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + uVar3) & 0xffU) * 4 +
                      DAT_00015aec + param_1);
    }
    else {
      if (uVar3 == 2) {
        iVar2 = (*pcVar1)();
        param_2[2] = -(*(int *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) +
                                               (int)DAT_00015aea) & 0xffU) * 4 +
                               DAT_00015aec + param_1) >> 2);
        iVar2 = (*pcVar1)();
        uVar3 = (uint)DAT_00015aea;
        iVar2 = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + uVar3) & 0xffU) * 4
                        + DAT_00015aec + param_1) >> 2;
        goto LAB_00015a9e;
      }
      if (uVar3 != 3) {
        return uVar3;
      }
      iVar2 = (*pcVar1)();
      *param_2 = -(*(int *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_00015aea
                                           ) & 0xffU) * 4 + DAT_00015aec + param_1) >> 2);
      iVar2 = (*pcVar1)();
      uVar3 = (uint)DAT_00015aea;
      piVar4 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + uVar3) & 0xffU) * 4 +
                      DAT_00015aec + param_1);
    }
    param_2[2] = -(*piVar4 >> 2);
  }
  return uVar3;
}



void FUN_0001610e(int param_1,char param_2)

{
  int iVar1;
  short sVar2;
  
  iVar1 = (*DAT_000161fc)();
  if (*(char *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x10) + 0x15) == '\0') {
    sVar2 = (*DAT_00016204)((int)*(short *)((short)(*(short *)(param_1 + DAT_000161ea) * 0xc) +
                                           DAT_00016200));
    *DAT_00016208 = *DAT_00016208 - sVar2;
    *(char *)(param_1 + DAT_000161ec) = *(char *)(param_1 + DAT_000161ec) - param_2;
  }
                    // WARNING: Could not recover jumptable at 0x0001615e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0001620c)(3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00016162(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (*DAT_000161fc)();
  iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 8);
  if (param_2 == 0) {
    sVar1 = *(short *)(param_1 + DAT_000161e8);
    *(short *)(param_1 + DAT_000161e8) = sVar1 + 1;
    if (0x27 < sVar1) {
      (*DAT_00016210)();
      *(undefined2 *)(param_1 + DAT_000161e8) = 0;
      iVar3 = (int)_LAB_000161ee;
      *(undefined4 *)(iVar2 + iVar3) = 0;
      iVar3 = iVar3 + 4;
      goto LAB_000161c8;
    }
  }
  else if ((param_2 == 1) &&
          (sVar1 = *(short *)(param_1 + DAT_000161e8),
          *(short *)(param_1 + DAT_000161e8) = sVar1 + 1, 0x28 < sVar1)) {
    *(undefined2 *)(param_1 + DAT_000161e8) = 0;
    *(undefined4 *)(iVar2 + _LAB_000161ee) = 0;
    iVar3 = (int)DAT_000161f0;
LAB_000161c8:
    *(undefined4 *)(iVar2 + iVar3) = 0;
    *(char *)(param_1 + DAT_000161e6) = *(char *)(param_1 + DAT_000161e6) + '\x01';
    return 1;
  }
  return 0;
}



uint FUN_000162c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_r14;
  undefined4 in_pr;
  
  pcVar2 = DAT_0001631c;
  iVar3 = (*DAT_0001631c)();
  uVar9 = (uint)DAT_0001631a;
  cVar1 = *(char *)(DAT_00016328 + (short)(*(short *)(param_1 + DAT_0001630e) * 0xc));
  iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 8);
  if (cVar1 != '\0') {
    if ((cVar1 != '\x01') && (cVar1 != '\x02')) {
      iVar3 = (*pcVar2)();
      iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
      uVar5 = (uint)DAT_000167d2;
      *(uint *)(iVar3 + uVar5) = *(uint *)(iVar3 + uVar5) | uVar9;
LAB_000167b8:
      return uVar5;
    }
    if (((int)*(short *)(param_1 + DAT_0001648a) & 0xffffU) == (int)DAT_0001648c) {
      iVar4 = (*pcVar2)();
      iVar4 = *(int *)(*(int *)(iVar4 + 0x10) + 4);
      *(uint *)(iVar4 + DAT_0001648e) = *(uint *)(iVar4 + DAT_0001648e) | 4;
      *(undefined2 *)(param_1 + DAT_00016490) = 0;
      iVar4 = (int)DAT_00016492;
      *(undefined4 *)(iVar3 + iVar4) = 0;
      *(undefined4 *)(iVar3 + iVar4 + 4) = 0;
      *(char *)(param_1 + DAT_00016494) = *(char *)(param_1 + DAT_00016494) + '\x01';
      uVar9 = FUN_0001610e(param_1,2);
      return uVar9;
    }
    FUN_00016162(param_1,1);
    if ((int)*(short *)(param_1 + DAT_000164f8) != 10) {
      return (int)*(short *)(param_1 + DAT_000164f8);
    }
    uVar8 = (uint)DAT_000164fa;
    iVar3 = ((int)*(short *)(param_1 + (uVar8 - 0x5e)) & 0xffffU) - (int)DAT_000164fc;
    uVar5 = (uint)(short)(&switchD_000164f4::switchdataD_00016500)[iVar3];
    switch(iVar3) {
    case 0:
      iVar3 = (*pcVar2)();
      iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
      *(uint *)(iVar3 + DAT_0001668e) = *(uint *)(iVar3 + DAT_0001668e) | uVar8;
      (*DAT_000166ac)(param_1);
      goto LAB_0001659e;
    default:
      goto LAB_000167b8;
    case 6:
      iVar3 = (*pcVar2)();
      iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
      *(uint *)(iVar3 + DAT_0001668e) = *(uint *)(iVar3 + DAT_0001668e) | (int)DAT_000166a4;
      iVar3 = (*pcVar2)();
      *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_000166a6) = 0xffff;
      iVar3 = (*pcVar2)();
      iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
      *(uint *)(iVar3 + DAT_000166a8) = *(uint *)(iVar3 + DAT_000166a8) | uVar9;
      uVar7 = 3;
      break;
    case 0xf:
      iVar3 = (*pcVar2)();
      iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
      *(uint *)(iVar3 + DAT_0001668e) = *(uint *)(iVar3 + DAT_0001668e) | uVar8;
      (*DAT_000166b4)(param_1);
LAB_0001659e:
      uVar9 = FUN_0001610e(param_1,2);
      return uVar9;
    case 0x11:
      iVar3 = (*pcVar2)();
      (*DAT_000166b0)(param_1,*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + 8);
      iVar3 = (*pcVar2)();
      iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
      *(uint *)(iVar3 + DAT_0001668e) = *(uint *)(iVar3 + DAT_0001668e) | uVar8;
      iVar3 = (*pcVar2)();
      *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_00016692) = DAT_00016690;
      uVar7 = 2;
      break;
    case 0x16:
    case 0x17:
    case 0x18:
      iVar3 = (*DAT_000166b8)((int)*(short *)(param_1 + DAT_00016694));
      goto LAB_0001665c;
    case 0x19:
      FUN_0001610e(param_1,1);
      iVar3 = (*pcVar2)();
      iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
      *(uint *)(iVar3 + DAT_0001668e) = *(uint *)(iVar3 + DAT_0001668e) & 0xffffff80;
      iVar3 = (*pcVar2)();
      *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_00016696) = 0;
      iVar3 = (*pcVar2)();
      *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_00016698) = 0;
      iVar3 = (*pcVar2)();
      *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_0001669a) = 0;
      iVar3 = (*pcVar2)();
      *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_0001669c) = 0;
      iVar3 = (*pcVar2)();
      *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_0001669e) = 0;
      iVar3 = (*pcVar2)();
      *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_000166a0) = 0;
      sVar6 = (*DAT_000166bc)(0x3c);
      iVar3 = (*pcVar2)();
      *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_000166a2) = (int)sVar6 << 0x10;
                    // WARNING: Could not recover jumptable at 0x00016640. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar9 = (*DAT_000166c0)(param_1,10);
      return uVar9;
    case 0x1a:
      iVar3 = (*DAT_000167e0)((int)*DAT_000167dc << 0x10,PTR_DAT_000167d8);
      uVar7 = 1;
      iVar3 = (int)(short)((uint)(iVar3 + DAT_000167e4) >> 0x10);
      goto LAB_0001627a;
    case 0x1b:
      iVar3 = (*pcVar2)();
      iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
      *(uint *)(iVar3 + DAT_000167ce) = *(uint *)(iVar3 + DAT_000167ce) | uVar9;
      iVar3 = (*pcVar2)();
      *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_000167d4) = 0xffff;
      iVar3 = (*pcVar2)();
      uVar7 = 3;
      iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
      *(uint *)(iVar3 + DAT_000167d2) = *(uint *)(iVar3 + DAT_000167d2) | uVar9;
      break;
    case 0x1c:
      iVar3 = (*pcVar2)();
      *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_000167ca) = 0xffff;
      iVar3 = (*pcVar2)();
      *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_000167cc) = 0;
      iVar3 = (*pcVar2)();
      iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
      *(uint *)(iVar3 + DAT_000167ce) = *(uint *)(iVar3 + DAT_000167ce) & 0xfffffffb;
      iVar3 = (*pcVar2)();
      iVar4 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
      iVar3 = (int)DAT_000167ce;
      *(uint *)(iVar4 + iVar3) = *(uint *)(iVar4 + iVar3) | iVar3 + 0x40U;
      sVar6 = (*DAT_000167e8)(0x3c);
      iVar3 = (*pcVar2)();
      *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_000167d0) = (int)sVar6 << 0x10;
      iVar3 = (*pcVar2)();
      iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
      *(uint *)(iVar3 + DAT_000167d2) = *(uint *)(iVar3 + DAT_000167d2) | uVar9;
      uVar7 = 3;
      break;
    case 0x1e:
      iVar3 = (*DAT_000166d0)((int)*DAT_000166cc << 0x10,PTR_LAB_000166c8,PTR_LAB_000166c4);
      iVar3 = (int)(short)((uint)(iVar3 + DAT_000166d4) >> 0x10);
LAB_0001665c:
      uVar7 = 0;
LAB_0001627a:
      (*DAT_00016324)(param_1,iVar3,uVar7,param_4,in_pr,unaff_r14);
      uVar9 = (int)*(short *)(param_1 + DAT_0001630e) & 0xffff;
      if (((uVar9 == (int)DAT_00016310) || (uVar9 == (int)DAT_00016312)) ||
         (uVar9 == (int)DAT_00016314)) {
        uVar7 = 1;
      }
      else {
        if ((uVar9 != (int)DAT_00016316) && (uVar9 != (int)DAT_00016318)) {
          return uVar9;
        }
        uVar7 = 3;
      }
      uVar9 = FUN_0001610e(param_1,uVar7);
      return uVar9;
    }
    uVar9 = FUN_0001610e(param_1,uVar7);
    return uVar9;
  }
  iVar3 = FUN_00016162(param_1,0);
  if (iVar3 == 0) goto LAB_00016214;
  switch(((int)*(short *)(param_1 + DAT_00016356) & 0xffffU) - (int)DAT_00016358) {
  case 0:
    uVar7 = 0;
    goto LAB_000163f2;
  case 1:
    uVar7 = 1;
    goto LAB_000163f2;
  case 2:
    uVar7 = 2;
LAB_000163f2:
    (*DAT_00016360)(param_1,uVar7);
    break;
  case 4:
    uVar7 = 1;
    goto LAB_000163e0;
  case 5:
    uVar7 = 2;
    goto LAB_000163e0;
  case 6:
    (*DAT_000164a8)(param_1);
    break;
  case 7:
    (*DAT_000164bc)(param_1);
    break;
  case 8:
    uVar7 = 1;
    goto LAB_0001639e;
  case 10:
    (*DAT_000164b0)(param_1,0);
    break;
  case 0xb:
    (*DAT_000164a0)(param_1);
    break;
  case 0xc:
    (*DAT_000164b8)(param_1);
    break;
  case 0xd:
    iVar3 = (*pcVar2)();
    (*DAT_000164a4)(param_1,0,(int)DAT_00016488 + *(int *)(*(int *)(iVar3 + 0x10) + 0x18) + 0x18);
    break;
  case 0xe:
    (*DAT_00016498)(param_1,8);
    break;
  case 0xf:
    uVar7 = 0;
LAB_0001639e:
    (*DAT_0001649c)(param_1,uVar7);
    break;
  case 0x10:
    uVar7 = 0;
LAB_000163e0:
    (*DAT_0001635c)(param_1,uVar7);
    break;
  case 0x11:
    (*DAT_000164b4)(param_1);
    break;
  case 0x13:
    (*DAT_000164ac)(param_1);
  }
LAB_00016214:
  iVar3 = (*DAT_0001631c)();
  iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 8);
  if ((int)*(short *)(DAT_00016306 + param_1) != 0x27) {
    return (int)*(short *)(DAT_00016306 + param_1);
  }
  *(int *)(iVar3 + 100) = *(int *)(iVar3 + 100) - *(int *)(DAT_00016308 + iVar3);
  *(int *)(iVar3 + 0x68) = *(int *)(iVar3 + 0x68) - *(int *)(DAT_0001630a + iVar3);
  *(undefined4 *)(DAT_0001630c + iVar3) = *(undefined4 *)(iVar3 + 100);
  *(undefined4 *)(iVar3 + 0xb8) = *(undefined4 *)(iVar3 + 0x68);
  pcVar2 = DAT_00016320;
  *(undefined4 *)(iVar3 + 0xbc) = *(undefined4 *)(iVar3 + 0x6c);
  (*pcVar2)();
  uVar9 = FUN_0001610e(param_1,2);
  return uVar9;
}



int FUN_00016d04(int param_1)

{
  code *pcVar1;
  int iVar2;
  short sVar4;
  int iVar3;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  pcVar1 = DAT_00016d4c;
  iVar6 = 1;
  uVar7 = (uint)DAT_00016d42;
  switch(*(undefined2 *)(param_1 + DAT_00016d44)) {
  case 1:
    uVar5 = 0;
    goto LAB_00016de0;
  case 2:
    uVar5 = 1;
    goto LAB_00016de0;
  case 3:
    uVar5 = 2;
LAB_00016de0:
    iVar3 = (*DAT_00016d48)(param_1,uVar5);
    break;
  case 4:
    iVar3 = (*DAT_00016d4c)();
    iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
    *(uint *)(iVar3 + DAT_00016f0a) = *(uint *)(iVar3 + DAT_00016f0a) | 4;
    iVar3 = (*pcVar1)();
    iVar2 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
    iVar3 = (int)DAT_00016f0a;
    *(uint *)(iVar2 + iVar3) = *(uint *)(iVar2 + iVar3) | uVar7;
    break;
  case 5:
  case 6:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
    iVar3 = (*DAT_00016f20)((int)*(short *)(param_1 + DAT_00016f08));
    goto LAB_00016f40;
  default:
    iVar6 = (*DAT_00016d4c)();
    iVar6 = *(int *)(*(int *)(iVar6 + 0x10) + 4);
    iVar3 = (int)DAT_00017006;
    *(uint *)(iVar6 + iVar3) = *(uint *)(iVar6 + iVar3) | uVar7;
LAB_00016f40:
    iVar6 = 0;
    break;
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
    iVar3 = (*DAT_00016f24)((int)*(short *)(param_1 + DAT_00016f08));
    iVar6 = iVar3;
    break;
  case 0x30:
    iVar3 = (*DAT_00016d4c)();
    (*DAT_00016f28)(param_1,*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + 8);
    iVar3 = (*pcVar1)();
    iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
    *(uint *)(iVar3 + DAT_00016f0c) = *(uint *)(iVar3 + DAT_00016f0c) | (int)DAT_00016f0e;
    iVar3 = (*pcVar1)();
    *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_00016f12) = DAT_00016f10;
    iVar3 = (*pcVar1)();
    iVar2 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
    iVar3 = (int)DAT_00016f0a;
    *(uint *)(iVar2 + iVar3) = *(uint *)(iVar2 + iVar3) | uVar7;
    break;
  case 0x31:
    iVar3 = (*DAT_00016d4c)();
    iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
    *(uint *)(iVar3 + DAT_00016f0c) = *(uint *)(iVar3 + DAT_00016f0c) | (int)DAT_00016f14;
    iVar3 = (*pcVar1)();
    *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_00016f16) = 0xffff;
    iVar2 = (*pcVar1)();
    iVar3 = (int)DAT_00016f0a;
    iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
    *(uint *)(iVar2 + iVar3) = *(uint *)(iVar2 + iVar3) | uVar7;
    break;
  case 0x32:
    iVar3 = (*DAT_00016d4c)();
    iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
    *(uint *)(iVar3 + DAT_00016f0c) = *(uint *)(iVar3 + DAT_00016f0c) | uVar7;
    iVar3 = (*pcVar1)();
    *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_00016f18) = 0xffff;
    iVar2 = (*pcVar1)();
    iVar3 = (int)DAT_00016f0a;
    iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
    *(uint *)(iVar2 + iVar3) = *(uint *)(iVar2 + iVar3) | uVar7;
    break;
  case 0x33:
    iVar3 = (*DAT_00016d4c)();
    *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_00016f1a) = 0xffff;
    iVar3 = (*pcVar1)();
    *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_00016f1c) = 0;
    iVar3 = (*pcVar1)();
    iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
    *(uint *)(iVar3 + DAT_00016f0c) = *(uint *)(iVar3 + DAT_00016f0c) & 0xfffffffb;
    iVar3 = (*pcVar1)();
    iVar2 = (int)DAT_00016f0c;
    iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
    *(uint *)(iVar3 + iVar2) = *(uint *)(iVar3 + iVar2) | iVar2 + 0x40U;
    sVar4 = (*DAT_00016f2c)(0x3c);
    iVar3 = (*pcVar1)();
    *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_00016f1e) = (int)sVar4 << 0x10;
    iVar3 = (*pcVar1)();
    iVar2 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
    iVar3 = (int)DAT_00016f0a;
    *(uint *)(iVar2 + iVar3) = *(uint *)(iVar2 + iVar3) | uVar7;
  }
  if (iVar6 != 0) {
                    // WARNING: Could not recover jumptable at 0x00016f5c. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar6 = (*DAT_00017010)((int)*(short *)(param_1 + DAT_00017008));
    return iVar6;
  }
  return iVar3;
}



undefined4 FUN_0001823c(undefined4 *param_1,short *param_2)

{
  code *pcVar1;
  short sVar2;
  short local_24 [2];
  short asStack32 [2];
  int iStack28;
  int iStack24;
  short local_14;
  short sStack18;
  short local_10;
  short sStack14;
  
  (*DAT_00018388)(&iStack28,&iStack24);
  if ((iStack28 < (int)param_1[2]) && ((int)param_1[2] < iStack24)) {
    (*DAT_0001838c)(local_24,asStack32);
    sVar2 = (*DAT_00018390)((int)local_24[0],*param_1,param_1[2]);
    *param_2 = sVar2;
    sVar2 = (*DAT_00018390)((int)asStack32[0],param_1[1],param_1[2]);
    pcVar1 = DAT_00018394;
    param_2[1] = sVar2;
    (*pcVar1)(&local_14);
    if ((param_2[1] <= sStack18) &&
       (((sStack14 <= param_2[1] && (local_14 <= *param_2)) && (*param_2 <= local_10)))) {
      return 1;
    }
  }
  return 0;
}



void FUN_000182ce(short *param_1,short *param_2,int *param_3)

{
  short sVar1;
  short sVar2;
  
  sVar1 = *param_2;
  sVar2 = param_2[1];
  *param_3 = (int)*param_1 + (int)(short)-(sVar1 >> 1);
  param_3[1] = (int)param_1[1] + (int)(sVar2 >> 1);
  param_3[2] = (int)*param_1 + (int)(short)-(sVar1 >> 1) + (int)*param_2;
  param_3[3] = ((int)param_1[1] + (int)(sVar2 >> 1)) - (int)param_2[1];
  return;
}



void FUN_00018310(short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  
  sVar1 = param_2[1];
  *param_3 = *param_1 - (*param_2 >> 1);
  param_3[1] = param_1[1] + (sVar1 >> 1);
  return;
}



int FUN_0001961c(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (*DAT_000196f0)(param_1,DAT_000196ec,0x28);
  if (iVar1 != 0) {
    *(char *)(iVar1 + 2) = param_3;
    if (param_3 < '\0') {
      *(undefined4 *)(iVar1 + -0x10) = DAT_000196f4;
    }
    *(undefined *)(iVar1 + 3) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = param_2;
    puVar2 = (undefined4 *)(*(char *)(iVar1 + 3) * 0xc + *(int *)(iVar1 + 0x1c));
    *(undefined4 *)(iVar1 + 0x10) = *puVar2;
    *(undefined4 *)(iVar1 + 0x14) = puVar2[1];
    *(undefined4 *)(iVar1 + 0x18) = puVar2[2];
    FUN_00019794(iVar1);
    FUN_000197a4(iVar1);
    return iVar1;
  }
  return 0;
}



void FUN_00019794(int param_1)

{
  *(undefined4 *)(param_1 + 4) = DAT_000197a0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



void FUN_000197a4(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  pcVar1 = DAT_000198d0;
  *DAT_000198cc = 0;
  (*pcVar1)(3,0x19,0x26,4);
  pcVar1 = DAT_000198d4;
  iVar2 = (*DAT_000198d4)();
  iVar4 = *(int *)((int)DAT_000198c2 + *(int *)(*(int *)(iVar2 + 0x10) + 4));
  iVar2 = (*pcVar1)();
  (*DAT_000198d8)(*(undefined4 *)
                   (*(int *)(*(char *)((int)DAT_000198c4 + *(int *)(*(int *)(iVar2 + 0x10) + 4)) *
                             0x20 + iVar4 + 0xc) + *(short *)(param_1 + 0x10) * 4));
  *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(param_1 + 0x12);
  if ((*(int *)(param_1 + 0x14) == 0) ||
     (iVar2 = (*pcVar1)(), *(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x10) + 5) != '\0')) {
    *(undefined *)(param_1 + 2) = 1;
  }
  else {
    uVar3 = (*DAT_000198e0)(param_1,DAT_000198dc,(int)DAT_000198c6,*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    *(undefined *)(param_1 + 2) = 2;
    *(undefined4 *)(param_1 + 4) =
         *(undefined4 *)(*(int *)(**(int **)(param_1 + 0x20) + (int)DAT_000198c8) + 0x10);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



int FUN_0001990a(int param_1)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar2 = DAT_00019a14;
  iVar3 = (int)*(char *)(param_1 + 1);
  if (iVar3 == 0) {
    sVar1 = *(short *)(param_1 + 0x12);
    *(short *)(param_1 + 0x12) = sVar1 + -1;
    iVar3 = (int)sVar1;
    if (iVar3 < 0) {
      (*DAT_00019a0c)(3,0x19,0x26,4);
      (*DAT_00019a10)();
      iVar3 = *(char *)(param_1 + 1) + 1;
      *(char *)(param_1 + 1) = (char)iVar3;
    }
  }
  else if (iVar3 == 1) {
    if (*(short *)(*(char *)(param_1 + 3) * 0xc + *(int *)(param_1 + 0x1c) + 0x14) == 0) {
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
      puVar4 = (undefined4 *)(*(char *)(param_1 + 3) * 0xc + *(int *)(param_1 + 0x1c));
      *(undefined4 *)(param_1 + 0x10) = *puVar4;
      *(undefined4 *)(param_1 + 0x14) = puVar4[1];
      *(undefined4 *)(param_1 + 0x18) = puVar4[2];
      *puVar2 = 0;
      (*DAT_00019a0c)(3,0x19,0x26,4);
      iVar3 = (*DAT_00019a18)();
      iVar5 = *(int *)((int)DAT_00019a08 + *(int *)(*(int *)(iVar3 + 0x10) + 4));
      iVar3 = (*DAT_00019a18)();
      (*DAT_00019a1c)(*(undefined4 *)
                       (*(int *)(*(char *)((int)DAT_00019a0a + *(int *)(*(int *)(iVar3 + 0x10) + 4))
                                 * 0x20 + iVar5 + 0xc) + *(short *)(param_1 + 0x10) * 4));
      iVar3 = 0;
      *(undefined *)(param_1 + 1) = 0;
    }
    else {
      iVar3 = *(char *)(param_1 + 1) + 1;
      *(char *)(param_1 + 1) = (char)iVar3;
    }
  }
  return iVar3;
}



void FUN_00019a20(undefined *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (*DAT_00019a8c)((int)DAT_00019a88);
  if (iVar1 != 0) {
    *param_1 = 2;
    *(undefined2 *)(param_1 + 0x12) = 0;
    (*DAT_00019a90)(3,0x19,0x26,4);
    (*DAT_00019a94)();
    if ((*(int *)(param_1 + 0x20) != 0) &&
       (iVar1 = (*DAT_00019a98)(*(int *)(param_1 + 0x20)), iVar1 != 0)) {
      puVar2 = *(undefined4 **)(param_1 + 0x20);
      if ((puVar2 != (undefined4 *)0x0) && ((*DAT_000196e8)(*puVar2), puVar2 != (undefined4 *)0x0))
      {
        puVar2[-1] = puVar2[-1] | 1;
      }
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00019dc6(int param_1,int *param_2,int param_3,short *param_4,int param_5)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack36;
  
  uStack36 = 0;
  *param_4 = 0;
  piVar2 = param_2 + param_3 * 0x1b;
  for (; param_2 < piVar2; param_2 = param_2 + 0x1b) {
    if (param_2[0x16] != 0) {
      for (iVar3 = 0; iVar3 < *(short *)(param_2 + 2); iVar3 = iVar3 + 1) {
        iVar4 = iVar3 * 100 + *param_2;
        if ((_LAB_00019ed0 & *(uint *)(iVar4 + 0x50)) != 0) {
          uStack36 = 1;
          *param_4 = *param_4 + *(short *)(iVar4 + 0x58);
          if (param_5 != 0) {
            (*DAT_00019ed4)(param_1,iVar4,0);
          }
          *(byte *)(*(int *)(param_1 + 4) + 0x31) = *(byte *)(*(int *)(param_1 + 4) + 0x31) | 2;
          *(uint *)(iVar4 + 0x50) = *(uint *)(iVar4 + 0x50) & DAT_00019ecc;
          *(uint *)(iVar4 + 0x50) = *(uint *)(iVar4 + 0x50) & DAT_00019ed8;
          uVar1 = (*DAT_00019edc)(iVar4);
          (*DAT_00019ee4)(uVar1,0,PTR_LAB_00019ee0,1);
          if ((*(char *)(iVar4 + 0x5e) == '\x01') || (*(char *)(iVar4 + 0x5e) == '\x02')) {
            *(undefined2 *)((int)param_2 + 10) = 10;
            iVar4 = iVar3 * 0xc;
            param_2[3] = *(int *)(param_2[1] + iVar4);
            param_2[4] = *(int *)(param_2[1] + iVar4 + 4);
            param_2[5] = *(int *)(param_2[1] + iVar4 + 8);
          }
        }
      }
    }
  }
  return uStack36;
}



int FUN_00019ee8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = param_1 + param_2 * 0x1b;
  for (; param_1 < piVar3; param_1 = param_1 + 0x1b) {
    if (param_1[0x16] != 0) {
      iVar1 = 0;
      while (iVar1 < *(short *)(param_1 + 2)) {
        iVar2 = iVar1 * 100 + *param_1;
        iVar1 = iVar1 + 1;
        if ((DAT_00019fa4 & *(uint *)(iVar2 + 0x50)) != 0) {
          iVar4 = iVar4 + *(short *)(iVar2 + 0x58);
        }
      }
    }
  }
  return iVar4;
}



undefined4 FUN_0001a1ca(undefined4 param_1,char *param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  
  piVar1 = *(int **)(((int)*param_2 & 0xffU) * 0x10 + *DAT_0001a348 + 0xc);
  psVar4 = (short *)(param_3 * 8 + *(int *)(param_2 + 8));
  uVar2 = (*DAT_0001a34c)(param_1,0x50);
  iVar3 = *piVar1;
  (*DAT_0001a350)(param_1,uVar2,0,iVar3,(int)*psVar4,0,
                  *(undefined4 *)(iVar3 + ((int)psVar4[1] & 0xffffU)),0,*(undefined4 *)(psVar4 + 2))
  ;
  return uVar2;
}



int FUN_0001a238(undefined4 param_1,int param_2,short *param_3,int *param_4,int *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  short sVar4;
  int *piVar5;
  
  if (*(int *)(param_2 + 0x40) == 0) {
    iVar1 = 0x40;
    *param_3 = 0;
    *param_4 = 0;
    *param_5 = 0;
  }
  else {
    iVar1 = 0;
    for (iVar3 = 0; iVar3 < *(short *)(param_2 + 0x12); iVar3 = iVar3 + 1) {
      iVar1 = iVar1 + *(int *)(iVar3 * 8 + *(int *)(param_2 + 0x40) + 4);
    }
    sVar4 = (short)iVar1;
    *param_3 = sVar4;
    iVar3 = (*DAT_0001a34c)(param_1,sVar4 * 100);
    *param_4 = iVar3;
    piVar5 = param_5;
    iVar3 = (*DAT_0001a34c)(param_1,sVar4 * 0xc);
    sVar4 = 0;
    *piVar5 = iVar3;
    for (iVar3 = 0; iVar1 = (int)*(short *)(param_2 + 0x12), iVar3 < iVar1; iVar3 = iVar3 + 1) {
      if (*(int *)(iVar3 * 4 + *(int *)(param_2 + 0x44)) != 0) {
        for (iVar1 = 0; iVar1 < *(int *)(*(int *)(param_2 + 0x40) + iVar3 * 8 + 4);
            iVar1 = iVar1 + 1) {
          *(undefined4 *)(sVar4 * 100 + *param_4 + 0x50) = 0;
          puVar2 = (undefined4 *)(iVar1 * 0x14 + *(int *)(*(int *)(param_2 + 0x40) + iVar3 * 8));
          (*DAT_0001a354)(*param_4 + sVar4 * 100,0,sVar4 * 0xc + *param_5,puVar2[4],*puVar2,0,0,10);
          sVar4 = sVar4 + 1;
        }
      }
    }
  }
  return iVar1;
}



void FUN_0001a620(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  *(int *)(param_1 + 0x34) = param_2;
  iVar3 = 0;
  cVar1 = '\0';
  iVar2 = 0;
  do {
    *(int *)(param_1 + 0x1c + iVar2) = param_2 + cVar1;
    *(int *)(iVar2 + param_1 + 0x28) = (int)cVar1 + param_2 + 0x24;
    *(int *)(param_1 + 0x1c + iVar2 + 4) = param_2 + (char)(cVar1 + '\f');
    *(int *)(iVar2 + 4 + param_1 + 0x28) = (int)(char)(cVar1 + '\f') + param_2 + 0x24;
    *(int *)(param_1 + 0x1c + iVar2 + 8) = param_2 + (char)(cVar1 + '\x18');
    iVar3 = iVar3 + 3;
    *(int *)(iVar2 + 8 + param_1 + 0x28) = (int)(char)(cVar1 + '\x18') + param_2 + 0x24;
    cVar1 = cVar1 + '$';
    iVar2 = iVar2 + 0xc;
  } while (iVar3 < 3);
  *(undefined *)(param_2 + 0x48) = 0;
  *(undefined *)(param_2 + 0x49) = 0;
  return;
}



void FUN_0001b1e2(int param_1,uint param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined uVar3;
  uint uVar4;
  
  pcVar1 = DAT_0001b32c;
  if ((param_2 & DAT_0001b22c) == 0) {
    param_2 = DAT_0001b328 & param_2;
  }
  else {
    param_2 = DAT_0001b230 | param_2;
  }
  uVar4 = (uint)DAT_0001b31e;
  if (((int)param_2 < DAT_0001b330) || (DAT_0001b334 <= (int)param_2)) {
    if (((int)param_2 < DAT_0001b338) || (DAT_0001b330 <= (int)param_2)) {
      if (((int)param_2 < DAT_0001b334) || (DAT_0001b33c <= (int)param_2)) {
        if (*(char *)(param_1 + DAT_0001b3f6) != '\0') {
          iVar2 = (*DAT_0001b32c)();
          iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
          *(uint *)(iVar2 + DAT_0001b3f8) = *(uint *)(iVar2 + DAT_0001b3f8) | uVar4;
          *(undefined *)(param_1 + DAT_0001b3f6 + 1) = *(undefined *)(param_1 + DAT_0001b3f6);
          iVar2 = (*pcVar1)();
          iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
          *(uint *)(iVar2 + DAT_0001b3fa) = *(uint *)(iVar2 + DAT_0001b3fa) | 2;
        }
        if (param_3 == 0) {
          *(undefined *)(param_1 + DAT_0001b3f6) = 2;
          return;
        }
        uVar3 = 0;
      }
      else {
        if (*(char *)(param_1 + DAT_0001b320) != '\x03') {
          iVar2 = (*DAT_0001b32c)();
          iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
          *(uint *)(iVar2 + DAT_0001b322) = *(uint *)(iVar2 + DAT_0001b322) | uVar4;
          *(undefined *)(param_1 + DAT_0001b320 + 1) = *(undefined *)(param_1 + DAT_0001b320);
          iVar2 = (*pcVar1)();
          iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
          *(uint *)(iVar2 + DAT_0001b324) = *(uint *)(iVar2 + DAT_0001b324) | 2;
        }
        if (param_3 == 0) {
          *(undefined *)(param_1 + DAT_0001b3f6) = 1;
          return;
        }
        uVar3 = 3;
      }
    }
    else {
      if (*(char *)(param_1 + DAT_0001b320) != '\x01') {
        iVar2 = (*DAT_0001b32c)();
        iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
        *(uint *)(iVar2 + DAT_0001b322) = *(uint *)(iVar2 + DAT_0001b322) | uVar4;
        *(undefined *)(param_1 + DAT_0001b320 + 1) = *(undefined *)(param_1 + DAT_0001b320);
        iVar2 = (*pcVar1)();
        iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
        *(uint *)(iVar2 + DAT_0001b324) = *(uint *)(iVar2 + DAT_0001b324) | 2;
      }
      if (param_3 == 0) {
        *(undefined *)(param_1 + DAT_0001b320) = 3;
        return;
      }
      uVar3 = 1;
    }
    *(undefined *)(param_1 + DAT_0001b3f6) = uVar3;
  }
  else {
    if (*(char *)(param_1 + DAT_0001b320) != '\x02') {
      iVar2 = (*DAT_0001b32c)();
      iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
      *(uint *)(iVar2 + DAT_0001b322) = *(uint *)(iVar2 + DAT_0001b322) | uVar4;
      *(undefined *)(param_1 + DAT_0001b320 + 1) = *(undefined *)(param_1 + DAT_0001b320);
      iVar2 = (*pcVar1)();
      iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
      *(uint *)(iVar2 + DAT_0001b324) = *(uint *)(iVar2 + DAT_0001b324) | 2;
    }
    if (param_3 == 0) {
      *(undefined *)(param_1 + DAT_0001b320) = 0;
    }
    else {
      *(undefined *)(param_1 + DAT_0001b320) = 2;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_0001b3bc(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (int)*(char *)(param_1 + DAT_0001b3f6) & 0xff;
  if (uVar1 == 0) {
    uVar1 = (uint)DAT_0001b3fc;
    *(undefined4 *)(param_1 + uVar1) = 0;
  }
  else if (uVar1 == 1) {
    uVar1 = (uint)DAT_0001b3fc;
    *(undefined4 *)(param_1 + uVar1) = _LAB_0001b407_1;
  }
  else {
    uVar2 = _DAT_0001b404;
    if ((uVar1 == 2) || (uVar2 = DAT_0001b40c, uVar1 == 3)) {
      uVar1 = (uint)DAT_0001b3fc;
      *(undefined4 *)(param_1 + uVar1) = uVar2;
    }
  }
  return uVar1;
}



int FUN_0001b7bc(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + DAT_0001b882);
  if ((uVar2 & DAT_0001b894) == 0) {
    uVar2 = uVar2 & DAT_0001b89c;
  }
  else {
    uVar2 = uVar2 | DAT_0001b898;
  }
  if (((int)uVar2 < DAT_0001b8a0) || (DAT_0001b8a4 <= (int)uVar2)) {
    *(undefined4 *)(param_1 + DAT_0001b886 + 0xc) = *(undefined4 *)(param_1 + DAT_0001b886);
  }
  else {
    *(undefined4 *)(param_1 + DAT_0001b884 + 0x14) = *(undefined4 *)(param_1 + DAT_0001b884);
  }
  if ((int)uVar2 < 1) {
    iVar1 = DAT_0001b888 + 4;
    *(undefined4 *)(param_1 + iVar1) = *(undefined4 *)(param_1 + DAT_0001b888);
  }
  else {
    iVar1 = DAT_0001b88a + 0xc;
    *(undefined4 *)(param_1 + iVar1) = *(undefined4 *)(param_1 + DAT_0001b88a);
  }
  return iVar1;
}



int FUN_0001b858(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0001b88e + param_1;
  if (*(int *)(iVar2 + 4) < *(int *)(param_1 + DAT_0001b890)) {
    iVar1 = (int)DAT_0001b890;
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + iVar1);
  }
  else {
    iVar1 = (int)DAT_0001b892;
    if (*(int *)(param_1 + iVar1) < *(int *)(iVar2 + 4)) {
      iVar1 = (int)DAT_0001b892;
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + iVar1);
    }
  }
  return iVar1;
}



void FUN_0001b8a8(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0001b9f0;
  param_1[6] = (int)(param_1[9] - param_1[3]) >> 1;
  param_1[7] = (int)(param_1[10] - param_1[4]) >> 1;
  param_1[8] = (int)(param_1[0xb] - param_1[5]) >> 1;
  param_1[0x18] = 0;
  uVar1 = (*DAT_0001b9f4)(uVar1,(int)*(short *)(param_1 + 0x1a) << 0x10);
  param_1[0x19] = uVar1;
  *param_1 = param_1[3];
  param_1[1] = param_1[4];
  param_1[2] = param_1[5];
  return;
}



bool FUN_0001b8f6(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  pcVar2 = DAT_0001b9fc;
  bVar1 = DAT_0001b9f0 <= param_1[0x18];
  if (bVar1) {
    param_1[0x18] = DAT_0001b9f0;
    param_1[0x19] = 0;
    *param_1 = param_1[9];
    param_1[1] = param_1[10];
    param_1[2] = param_1[0xb];
  }
  else {
    iVar5 = param_1[6];
    uVar6 = *(undefined4 *)
             ((short)((ushort)((uint)param_1[0x18] >> 0x10) & DAT_0001b9ee) * 4 + DAT_0001b9f8);
    iVar4 = param_1[3];
    iVar3 = (*DAT_0001b9fc)(uVar6,iVar5);
    *param_1 = (iVar5 + iVar4) - iVar3;
    iVar5 = param_1[7];
    iVar4 = param_1[4];
    iVar3 = (*pcVar2)(uVar6,iVar5);
    param_1[1] = (iVar5 + iVar4) - iVar3;
    iVar5 = param_1[8];
    iVar4 = param_1[5];
    iVar3 = (*pcVar2)(uVar6,iVar5);
    param_1[2] = (iVar5 + iVar4) - iVar3;
    param_1[0x18] = param_1[0x18] + param_1[0x19];
  }
  return bVar1;
}



void FUN_0001b99c(int param_1)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x3c) >> 1;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x40) >> 1;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x44) >> 1;
  *(undefined4 *)(param_1 + 0x60) = 0;
  uVar1 = (*DAT_0001b9f4)(DAT_0001b9f0,(int)*(short *)(param_1 + 0x68) << 0x10);
  *(undefined4 *)(param_1 + 100) = uVar1;
  return;
}



void FUN_0001bb22(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  pcVar1 = DAT_0001bba4;
  uVar5 = *(undefined4 *)
           ((short)((ushort)((uint)*(undefined4 *)(param_1 + 0x60) >> 0x10) & DAT_0001bb98) * 4 +
           DAT_0001bba0);
  iVar4 = *(int *)(param_1 + 0x48);
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar2 = (*DAT_0001bba4)(uVar5,iVar4);
  *(int *)(param_1 + 0x30) = (iVar4 + iVar3) - iVar2;
  iVar4 = *(int *)(param_1 + 0x4c);
  iVar3 = *(int *)(param_1 + 0x40);
  iVar2 = (*pcVar1)(uVar5,iVar4);
  *(int *)(param_1 + 0x34) = (iVar4 + iVar3) - iVar2;
  iVar4 = *(int *)(param_1 + 0x50);
  iVar3 = *(int *)(param_1 + 0x44);
  iVar2 = (*pcVar1)(uVar5,iVar4);
  *(int *)(param_1 + 0x38) = (iVar4 + iVar3) - iVar2;
  return;
}



undefined4 FUN_0001bba8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  (*DAT_0001bc24)();
  iVar1 = (*DAT_0001bc24)();
  if (*(char *)((int)DAT_0001bc1e + *(int *)(*(int *)(iVar1 + 0x10) + 4)) != '\n') {
    (*DAT_0001bc28)();
                    // WARNING: Could not recover jumptable at 0x0001bbd4. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar2 = (*DAT_0001bc2c)(2);
    return uVar2;
  }
  return 10;
}



void FUN_0001d24a(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined2 *extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int extraout_r3_02;
  undefined2 *extraout_r3_03;
  int extraout_r3_04;
  int extraout_r3_05;
  int extraout_r3_06;
  undefined2 *extraout_r3_07;
  int extraout_r3_08;
  int extraout_r3_09;
  int extraout_r3_10;
  undefined2 *extraout_r3_11;
  int extraout_r3_12;
  int extraout_r3_13;
  int extraout_r3_14;
  undefined2 *extraout_r3_15;
  int extraout_r3_16;
  int extraout_r3_17;
  int extraout_r3_18;
  undefined2 *extraout_r3_19;
  int extraout_r3_20;
  int extraout_r3_21;
  int extraout_r3_22;
  int *piVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  
  iVar6 = (*DAT_0001d3ec)();
  uVar2 = *(ushort *)((int)DAT_0001d3e6 + *(int *)(*(int *)(iVar6 + 0x10) + 4));
  iVar7 = (*DAT_0001d3ec)();
  piVar11 = DAT_0001d3fc;
  iVar5 = DAT_0001d3f8;
  iVar12 = DAT_0001d3f4;
  iVar6 = DAT_0001d3f0;
  uVar3 = DAT_0001d3e8;
  uVar8 = ((int)*(short *)((int)DAT_0001d3e6 + *(int *)(*(int *)(iVar7 + 0x10) + 4)) & 0xffffU) >> 4
  ;
  iVar7 = DAT_0001d3f8;
  if ((uVar2 & 1) != 0) {
    puVar13 = (undefined4 *)(DAT_0001d3f8 + 0x14);
    puVar14 = (undefined2 *)*puVar13;
    uVar10 = *(uint *)(DAT_0001d3f8 + 0x24);
    *(uint *)(DAT_0001d3f8 + 0x24) = uVar10 + 8;
    *puVar14 = uVar3;
    puVar14[2] = *(ushort *)(iVar6 + 10) | 4;
    puVar14[3] = *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4) + *(short *)(iVar6 + 6);
    puVar14[4] = *(short *)(iVar6 + 2) + *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4);
    pcVar4 = DAT_0001d400;
    puVar14[5] = *(undefined2 *)(iVar6 + 8);
    puVar14[6] = *(undefined2 *)(param_1 + 0x1a);
    puVar14[7] = -*(short *)(param_1 + 0x1c);
    iVar7 = iVar5;
    iVar9 = (*pcVar4)(0xf);
    pcVar4 = DAT_0001d400;
    *extraout_r3 = *(undefined2 *)(iVar9 * 8 + iVar12);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001d400;
    *(undefined2 *)(extraout_r3_00 + 2) = *(undefined2 *)(iVar9 * 8 + iVar12 + 2);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001d400;
    *(undefined2 *)(extraout_r3_01 + 4) = *(undefined2 *)(iVar9 * 8 + iVar12 + 4);
    iVar9 = (*pcVar4)();
    *(undefined2 *)(extraout_r3_02 + 6) = *(undefined2 *)(iVar9 * 8 + iVar12 + 6);
    puVar14[0xe] = (short)(uVar10 >> 3);
    iVar9 = *(int *)(iVar5 + 0x34);
    *(undefined2 *)(iVar9 + 4) = 0;
    *(short *)(iVar9 + 6) = (short)((uint)puVar14 >> 3);
    *(int *)(iVar5 + 0x34) = iVar9 + 8;
    *(int *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) + 1;
    *puVar13 = puVar14 + 0x10;
    *(int *)(iVar5 + 0x20) = *(int *)(iVar5 + 0x20) + 1;
  }
  iVar5 = iVar7;
  if ((uVar2 & 2) != 0) {
    puVar14 = *(undefined2 **)(undefined4 *)(iVar7 + 0x14);
    uVar10 = *(uint *)(iVar7 + 0x24);
    *(uint *)(iVar7 + 0x24) = uVar10 + 8;
    *puVar14 = uVar3;
    puVar14[2] = *(ushort *)(iVar6 + 0x16) | 4;
    puVar14[3] = *(short *)(iVar6 + 0x12) + *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4);
    pcVar4 = DAT_0001d400;
    puVar14[4] = *(short *)(iVar6 + 0xe) + *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4);
    puVar14[5] = *(undefined2 *)(iVar6 + 0x14);
    puVar14[6] = *(undefined2 *)(param_1 + 0x1a);
    puVar14[7] = -*(short *)(param_1 + 0x1c);
    iVar9 = (*pcVar4)();
    *extraout_r3_03 = *(undefined2 *)(iVar9 * 8 + iVar12);
    iVar9 = (*DAT_0001d79c)();
    pcVar4 = DAT_0001d79c;
    *(undefined2 *)(extraout_r3_04 + 2) = *(undefined2 *)(iVar9 * 8 + iVar12 + 2);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001d79c;
    *(undefined2 *)(extraout_r3_05 + 4) = *(undefined2 *)(iVar9 * 8 + iVar12 + 4);
    iVar9 = (*pcVar4)();
    *(undefined2 *)(extraout_r3_06 + 6) = *(undefined2 *)(iVar9 * 8 + iVar12 + 6);
    puVar14[0xe] = (short)(uVar10 >> 3);
    iVar9 = *(int *)(iVar7 + 0x34);
    *(undefined2 *)(iVar9 + 4) = 0;
    *(short *)(iVar9 + 6) = (short)((uint)puVar14 >> 3);
    *(int *)(iVar7 + 0x34) = iVar9 + 8;
    *(int *)(iVar7 + 0x30) = *(int *)(iVar7 + 0x30) + 1;
    *(undefined4 *)(iVar7 + 0x14) = puVar14 + 0x10;
    *(int *)(iVar7 + 0x20) = *(int *)(iVar7 + 0x20) + 1;
  }
  iVar7 = iVar5;
  if ((uVar2 & 4) != 0) {
    puVar14 = *(undefined2 **)(undefined4 *)(iVar5 + 0x14);
    uVar10 = *(uint *)(iVar5 + 0x24);
    *(uint *)(iVar5 + 0x24) = uVar10 + 8;
    *puVar14 = uVar3;
    puVar14[2] = *(ushort *)(iVar6 + 0x22) | 4;
    puVar14[3] = *(short *)(iVar6 + 0x1e) + *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4);
    puVar14[4] = *(short *)(iVar6 + 0x1a) + *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4);
    pcVar4 = DAT_0001d79c;
    puVar14[5] = *(undefined2 *)(iVar6 + 0x20);
    puVar14[6] = *(undefined2 *)(param_1 + 0x1a);
    puVar14[7] = -*(short *)(param_1 + 0x1c);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001d79c;
    *extraout_r3_07 = *(undefined2 *)(iVar9 * 8 + iVar12);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001d79c;
    *(undefined2 *)(extraout_r3_08 + 2) = *(undefined2 *)(iVar9 * 8 + iVar12 + 2);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001d79c;
    *(undefined2 *)(extraout_r3_09 + 4) = *(undefined2 *)(iVar9 * 8 + iVar12 + 4);
    iVar9 = (*pcVar4)();
    *(undefined2 *)(extraout_r3_10 + 6) = *(undefined2 *)(iVar9 * 8 + iVar12 + 6);
    puVar14[0xe] = (short)(uVar10 >> 3);
    iVar9 = *(int *)(iVar5 + 0x34);
    *(undefined2 *)(iVar9 + 4) = 0;
    *(short *)(iVar9 + 6) = (short)((uint)puVar14 >> 3);
    *(int *)(iVar5 + 0x34) = iVar9 + 8;
    *(int *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) + 1;
    *(undefined4 *)(iVar5 + 0x14) = puVar14 + 0x10;
    *(int *)(iVar5 + 0x20) = *(int *)(iVar5 + 0x20) + 1;
  }
  iVar5 = iVar7;
  if ((uVar2 & 8) != 0) {
    puVar15 = *(undefined2 **)(undefined4 *)(iVar7 + 0x14);
    puVar14 = *(undefined2 **)(iVar7 + 0x24);
    *(undefined2 **)(iVar7 + 0x24) = puVar14 + 4;
    *puVar15 = uVar3;
    puVar15[2] = *(ushort *)(iVar6 + 0x2e) | 4;
    puVar15[3] = *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4) + *(short *)(iVar6 + 0x2a);
    puVar15[4] = *(short *)(iVar6 + 0x26) + *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4);
    pcVar4 = DAT_0001d79c;
    puVar15[5] = *(undefined2 *)(iVar6 + 0x2c);
    puVar15[6] = *(undefined2 *)(param_1 + 0x1a);
    puVar15[7] = -*(short *)(param_1 + 0x1c);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001d79c;
    *puVar14 = *(undefined2 *)(iVar12 + iVar9 * 8);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001d79c;
    puVar14[1] = *(undefined2 *)(iVar9 * 8 + iVar12 + 2);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001d79c;
    puVar14[2] = *(undefined2 *)(iVar9 * 8 + iVar12 + 4);
    iVar9 = (*pcVar4)();
    puVar14[3] = *(undefined2 *)(iVar9 * 8 + iVar12 + 6);
    puVar15[0xe] = (short)((uint)puVar14 >> 3);
    iVar12 = *(int *)(iVar7 + 0x34);
    *(undefined2 *)(iVar12 + 4) = 0;
    *(short *)(iVar12 + 6) = (short)((uint)puVar15 >> 3);
    *(int *)(iVar7 + 0x34) = iVar12 + 8;
    *(int *)(iVar7 + 0x30) = *(int *)(iVar7 + 0x30) + 1;
    *(undefined4 *)(iVar7 + 0x14) = puVar15 + 0x10;
    *(int *)(iVar7 + 0x20) = *(int *)(iVar7 + 0x20) + 1;
  }
  iVar12 = DAT_0001d7a0;
  iVar7 = iVar5;
  if ((uVar8 & 1) != 0) {
    puVar14 = *(undefined2 **)(undefined4 *)(iVar5 + 0x14);
    uVar10 = *(uint *)(iVar5 + 0x24);
    *(uint *)(iVar5 + 0x24) = uVar10 + 8;
    *puVar14 = uVar3;
    puVar14[2] = *(ushort *)(iVar6 + 10) | 4;
    puVar14[3] = *(short *)(iVar6 + 6) + *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4);
    pcVar4 = DAT_0001d79c;
    puVar14[4] = *(short *)(iVar6 + 2) + *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4);
    puVar14[5] = *(undefined2 *)(iVar6 + 8);
    puVar14[6] = *(undefined2 *)(param_1 + 0x1a);
    puVar14[7] = -*(short *)(param_1 + 0x1c);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001d79c;
    *extraout_r3_11 = *(undefined2 *)(iVar9 * 8 + iVar12);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001d79c;
    *(undefined2 *)(extraout_r3_12 + 2) = *(undefined2 *)(iVar9 * 8 + iVar12 + 2);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001d79c;
    *(undefined2 *)(extraout_r3_13 + 4) = *(undefined2 *)(iVar9 * 8 + iVar12 + 4);
    iVar9 = (*pcVar4)();
    *(undefined2 *)(extraout_r3_14 + 6) = *(undefined2 *)(iVar9 * 8 + iVar12 + 6);
    puVar14[0xe] = (short)(uVar10 >> 3);
    iVar9 = *(int *)(iVar5 + 0x34);
    *(undefined2 *)(iVar9 + 4) = 0;
    *(short *)(iVar9 + 6) = (short)((uint)puVar14 >> 3);
    *(int *)(iVar5 + 0x34) = iVar9 + 8;
    *(int *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) + 1;
    *(undefined4 *)(iVar5 + 0x14) = puVar14 + 0x10;
    *(int *)(iVar5 + 0x20) = *(int *)(iVar5 + 0x20) + 1;
  }
  iVar5 = iVar7;
  if ((uVar8 & 2) != 0) {
    puVar14 = *(undefined2 **)(undefined4 *)(iVar7 + 0x14);
    uVar10 = *(uint *)(iVar7 + 0x24);
    *(uint *)(iVar7 + 0x24) = uVar10 + 8;
    *puVar14 = uVar3;
    puVar14[2] = *(ushort *)(iVar6 + 0x16) | 4;
    puVar14[3] = *(short *)(iVar6 + 0x12) + *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4);
    puVar14[4] = *(short *)(iVar6 + 0xe) + *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4);
    pcVar4 = DAT_0001d79c;
    puVar14[5] = *(undefined2 *)(iVar6 + 0x14);
    puVar14[6] = *(undefined2 *)(param_1 + 0x1a);
    puVar14[7] = -*(short *)(param_1 + 0x1c);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001d79c;
    *extraout_r3_15 = *(undefined2 *)(iVar9 * 8 + iVar12);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001d79c;
    *(undefined2 *)(extraout_r3_16 + 2) = *(undefined2 *)(iVar9 * 8 + iVar12 + 2);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001d9b4;
    *(undefined2 *)(extraout_r3_17 + 4) = *(undefined2 *)(iVar9 * 8 + iVar12 + 4);
    iVar9 = (*pcVar4)();
    *(undefined2 *)(extraout_r3_18 + 6) = *(undefined2 *)(iVar9 * 8 + iVar12 + 6);
    puVar14[0xe] = (short)(uVar10 >> 3);
    iVar9 = *(int *)(iVar7 + 0x34);
    *(undefined2 *)(iVar9 + 4) = 0;
    *(short *)(iVar9 + 6) = (short)((uint)puVar14 >> 3);
    *(int *)(iVar7 + 0x34) = iVar9 + 8;
    *(int *)(iVar7 + 0x30) = *(int *)(iVar7 + 0x30) + 1;
    *(undefined4 *)(iVar7 + 0x14) = puVar14 + 0x10;
    *(int *)(iVar7 + 0x20) = *(int *)(iVar7 + 0x20) + 1;
  }
  iVar7 = iVar5;
  if ((uVar8 & 4) != 0) {
    puVar14 = *(undefined2 **)(undefined4 *)(iVar5 + 0x14);
    uVar10 = *(uint *)(iVar5 + 0x24);
    *(uint *)(iVar5 + 0x24) = uVar10 + 8;
    *puVar14 = uVar3;
    puVar14[2] = *(ushort *)(iVar6 + 0x22) | 4;
    puVar14[3] = *(short *)(iVar6 + 0x1e) + *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4);
    puVar14[4] = *(short *)(iVar6 + 0x1a) + *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4);
    pcVar4 = DAT_0001d9b4;
    puVar14[5] = *(undefined2 *)(iVar6 + 0x20);
    puVar14[6] = *(undefined2 *)(param_1 + 0x1a);
    puVar14[7] = -*(short *)(param_1 + 0x1c);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001d9b4;
    *extraout_r3_19 = *(undefined2 *)(iVar9 * 8 + iVar12);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001d9b4;
    *(undefined2 *)(extraout_r3_20 + 2) = *(undefined2 *)(iVar9 * 8 + iVar12 + 2);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001d9b4;
    *(undefined2 *)(extraout_r3_21 + 4) = *(undefined2 *)(iVar9 * 8 + iVar12 + 4);
    iVar9 = (*pcVar4)();
    *(undefined2 *)(extraout_r3_22 + 6) = *(undefined2 *)(iVar9 * 8 + iVar12 + 6);
    puVar14[0xe] = (short)(uVar10 >> 3);
    iVar9 = *(int *)(iVar5 + 0x34);
    *(undefined2 *)(iVar9 + 4) = 0;
    *(short *)(iVar9 + 6) = (short)((uint)puVar14 >> 3);
    *(int *)(iVar5 + 0x34) = iVar9 + 8;
    *(int *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) + 1;
    *(undefined4 *)(iVar5 + 0x14) = puVar14 + 0x10;
    *(int *)(iVar5 + 0x20) = *(int *)(iVar5 + 0x20) + 1;
  }
  if ((uVar8 & 8) != 0) {
    puVar15 = *(undefined2 **)(undefined4 *)(iVar7 + 0x14);
    puVar14 = *(undefined2 **)(iVar7 + 0x24);
    *(undefined2 **)(iVar7 + 0x24) = puVar14 + 4;
    *puVar15 = uVar3;
    puVar15[2] = *(ushort *)(iVar6 + 0x2e) | 4;
    puVar15[3] = *(short *)(iVar6 + 0x2a) + *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4);
    puVar15[4] = *(short *)(iVar6 + 0x26) + *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4);
    puVar15[5] = *(undefined2 *)(iVar6 + 0x2c);
    pcVar4 = DAT_0001d9b4;
    puVar15[6] = *(undefined2 *)(param_1 + 0x1a);
    puVar15[7] = -*(short *)(param_1 + 0x1c);
    iVar6 = (*pcVar4)();
    pcVar4 = DAT_0001d9b4;
    *puVar14 = *(undefined2 *)(iVar12 + iVar6 * 8);
    iVar6 = (*pcVar4)();
    pcVar4 = DAT_0001d9b4;
    puVar14[1] = *(undefined2 *)(iVar6 * 8 + iVar12 + 2);
    iVar6 = (*pcVar4)();
    pcVar4 = DAT_0001d9b4;
    puVar14[2] = *(undefined2 *)(iVar6 * 8 + iVar12 + 4);
    iVar6 = (*pcVar4)();
    puVar14[3] = *(undefined2 *)(iVar6 * 8 + iVar12 + 6);
    puVar15[0xe] = (short)((uint)puVar14 >> 3);
    iVar6 = *(int *)(iVar7 + 0x34);
    *(undefined2 *)(iVar6 + 4) = 0;
    *(short *)(iVar6 + 6) = (short)((uint)puVar15 >> 3);
    *(int *)(iVar7 + 0x34) = iVar6 + 8;
    *(int *)(iVar7 + 0x30) = *(int *)(iVar7 + 0x30) + 1;
    *(undefined4 *)(iVar7 + 0x14) = puVar15 + 0x10;
    *(int *)(iVar7 + 0x20) = *(int *)(iVar7 + 0x20) + 1;
  }
  iVar5 = (*DAT_0001d1c8)();
  iVar12 = DAT_0001d1d4;
  piVar11 = DAT_0001d1d0;
  iVar6 = DAT_0001d1cc;
  uVar3 = DAT_0001d1c6;
  bVar1 = *(byte *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0001d1c4);
  if ((bVar1 & 1) != 0) {
    puVar13 = (undefined4 *)(DAT_0001d1d4 + 0x14);
    puVar14 = (undefined2 *)*puVar13;
    *puVar14 = DAT_0001d1c6;
    puVar14[2] = *(undefined2 *)(iVar6 + 10);
    puVar14[3] = *(short *)(iVar6 + 6) + *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4);
    puVar14[4] = *(short *)(iVar6 + 2) + *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4);
    puVar14[5] = *(undefined2 *)(iVar6 + 8);
    puVar14[6] = *(undefined2 *)(param_1 + 0x1a);
    puVar14[7] = -*(short *)(param_1 + 0x1c);
    iVar5 = *(int *)(iVar12 + 0x34);
    *(undefined2 *)(iVar5 + 4) = 0;
    *(short *)(iVar5 + 6) = (short)((uint)puVar14 >> 3);
    *(int *)(iVar12 + 0x34) = iVar5 + 8;
    *(int *)(iVar12 + 0x30) = *(int *)(iVar12 + 0x30) + 1;
    *puVar13 = puVar14 + 0x10;
    *(int *)(iVar12 + 0x20) = *(int *)(iVar12 + 0x20) + 1;
  }
  if ((bVar1 & 2) != 0) {
    puVar14 = *(undefined2 **)(undefined4 *)(iVar12 + 0x14);
    *puVar14 = uVar3;
    puVar14[2] = *(undefined2 *)(iVar6 + 0x16);
    puVar14[3] = *(short *)(iVar6 + 0x12) + *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4);
    puVar14[4] = *(short *)(iVar6 + 0xe) + *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4);
    puVar14[5] = *(undefined2 *)(iVar6 + 0x14);
    puVar14[6] = *(undefined2 *)(param_1 + 0x1a);
    puVar14[7] = -*(short *)(param_1 + 0x1c);
    iVar5 = *(int *)(iVar12 + 0x34);
    *(undefined2 *)(iVar5 + 4) = 0;
    *(short *)(iVar5 + 6) = (short)((uint)puVar14 >> 3);
    *(int *)(iVar12 + 0x34) = iVar5 + 8;
    *(int *)(iVar12 + 0x30) = *(int *)(iVar12 + 0x30) + 1;
    *(undefined4 *)(iVar12 + 0x14) = puVar14 + 0x10;
    *(int *)(iVar12 + 0x20) = *(int *)(iVar12 + 0x20) + 1;
  }
  if ((bVar1 & 4) != 0) {
    puVar14 = *(undefined2 **)(undefined4 *)(iVar12 + 0x14);
    *puVar14 = uVar3;
    puVar14[2] = *(undefined2 *)(iVar6 + 0x22);
    puVar14[3] = *(short *)(iVar6 + 0x1e) + *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4);
    puVar14[4] = *(short *)(iVar6 + 0x1a) + *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4);
    puVar14[5] = *(undefined2 *)(iVar6 + 0x20);
    puVar14[6] = *(undefined2 *)(param_1 + 0x1a);
    puVar14[7] = -*(short *)(param_1 + 0x1c);
    iVar5 = *(int *)(iVar12 + 0x34);
    *(undefined2 *)(iVar5 + 4) = 0;
    *(short *)(iVar5 + 6) = (short)((uint)puVar14 >> 3);
    *(int *)(iVar12 + 0x34) = iVar5 + 8;
    *(int *)(iVar12 + 0x30) = *(int *)(iVar12 + 0x30) + 1;
    *(undefined4 *)(iVar12 + 0x14) = puVar14 + 0x10;
    *(int *)(iVar12 + 0x20) = *(int *)(iVar12 + 0x20) + 1;
  }
  if ((bVar1 & 8) != 0) {
    puVar14 = *(undefined2 **)(undefined4 *)(iVar12 + 0x14);
    *puVar14 = uVar3;
    puVar14[2] = *(undefined2 *)(iVar6 + 0x2e);
    puVar14[3] = *(short *)(iVar6 + 0x2a) + *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4);
    puVar14[4] = *(short *)(iVar6 + 0x26) + *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4);
    puVar14[5] = *(undefined2 *)(iVar6 + 0x2c);
    puVar14[6] = *(undefined2 *)(param_1 + 0x1a);
    puVar14[7] = -*(short *)(param_1 + 0x1c);
    iVar6 = *(int *)(iVar12 + 0x34);
    *(undefined2 *)(iVar6 + 4) = 0;
    *(short *)(iVar6 + 6) = (short)((uint)puVar14 >> 3);
    *(int *)(iVar12 + 0x34) = iVar6 + 8;
    *(int *)(iVar12 + 0x30) = *(int *)(iVar12 + 0x30) + 1;
    *(undefined4 *)(iVar12 + 0x14) = puVar14 + 0x10;
    *(int *)(iVar12 + 0x20) = *(int *)(iVar12 + 0x20) + 1;
  }
  return;
}



void FUN_0001d9b8(int param_1)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  
  piVar5 = DAT_0001db24;
  puVar4 = DAT_0001db1c;
  uVar3 = DAT_0001db18;
  sVar1 = *(short *)(param_1 + 0x1a);
  sVar2 = *(short *)(param_1 + 0x1c);
  puVar9 = (undefined2 *)*DAT_0001db1c;
  puVar10 = (undefined2 *)DAT_0001db1c[4];
  DAT_0001db1c[4] = puVar10 + 4;
  *puVar9 = uVar3;
  puVar9[2] = *(ushort *)(DAT_0001db20 + 10) | 4;
  puVar9[3] = *(short *)(*(int *)(*(int *)(*piVar5 + 0xc) + 4) + 4) + *(short *)(DAT_0001db20 + 6);
  pcVar6 = DAT_0001db2c;
  iVar8 = DAT_0001db28;
  puVar9[4] = *(short *)(*(int *)(*(int *)(*piVar5 + 0xc) + 4) + 4) + *(short *)(DAT_0001db20 + 2);
  puVar9[5] = *(undefined2 *)(DAT_0001db20 + 8);
  puVar9[6] = sVar1 + 0x10;
  puVar9[7] = -(sVar2 + -0xd);
  iVar7 = (*pcVar6)();
  pcVar6 = DAT_0001db2c;
  *puVar10 = *(undefined2 *)(iVar8 + iVar7 * 8);
  iVar7 = (*pcVar6)();
  pcVar6 = DAT_0001db2c;
  puVar10[1] = *(undefined2 *)(iVar7 * 8 + iVar8 + 2);
  iVar7 = (*pcVar6)();
  pcVar6 = DAT_0001db2c;
  puVar10[2] = *(undefined2 *)(iVar7 * 8 + iVar8 + 4);
  iVar7 = (*pcVar6)();
  puVar10[3] = *(undefined2 *)(iVar7 * 8 + iVar8 + 6);
  puVar9[0xe] = (short)((uint)puVar10 >> 3);
  iVar8 = puVar4[8];
  *(undefined2 *)(iVar8 + 4) = 0;
  *(short *)(iVar8 + 6) = (short)((uint)puVar9 >> 3);
  puVar4[8] = iVar8 + 8;
  puVar4[7] = puVar4[7] + 1;
  *puVar4 = puVar9 + 0x10;
  puVar4[3] = puVar4[3] + 1;
  return;
}



void FUN_0001daaa(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  
  iVar3 = DAT_0001db34;
  iVar2 = DAT_0001db30;
  piVar1 = DAT_0001db24;
  puVar5 = (undefined4 *)(DAT_0001db30 + 0x14);
  puVar4 = (undefined2 *)*puVar5;
  *puVar4 = DAT_0001db18;
  puVar4[2] = *(undefined2 *)(iVar3 + 10);
  puVar4[3] = *(short *)(*(int *)(*(int *)(*piVar1 + 0xc) + 4) + 4) + *(short *)(DAT_0001db34 + 6);
  puVar4[4] = *(short *)(*(int *)(*(int *)(*piVar1 + 0xc) + 4) + 4) + *(short *)(DAT_0001db34 + 2);
  puVar4[5] = *(undefined2 *)(DAT_0001db34 + 8);
  puVar4[6] = *(undefined2 *)(param_1 + 0x16);
  puVar4[7] = -*(short *)(param_1 + 0x18);
  iVar3 = *(int *)(iVar2 + 0x34);
  *(undefined2 *)(iVar3 + 4) = 0;
  *(short *)(iVar3 + 6) = (short)((uint)puVar4 >> 3);
  *(int *)(iVar2 + 0x34) = iVar3 + 8;
  *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + 1;
  *puVar5 = puVar4 + 0x10;
  *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
  return;
}



void FUN_0001db38(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  
  piVar2 = DAT_0001dc80;
  iVar3 = DAT_0001dc7c;
  iVar1 = DAT_0001dc78;
  puVar5 = (undefined4 *)(DAT_0001dc78 + 0x14);
  puVar4 = (undefined2 *)*puVar5;
  *puVar4 = DAT_0001dc72;
  puVar4[2] = *(undefined2 *)(iVar3 + 10);
  puVar4[3] = *(short *)(*(int *)(*(int *)(*piVar2 + 0xc) + 4) + 4) + *(short *)(DAT_0001dc7c + 6);
  puVar4[4] = *(short *)(*(int *)(*(int *)(*piVar2 + 0xc) + 4) + 4) + *(short *)(DAT_0001dc7c + 2);
  puVar4[5] = *(undefined2 *)(DAT_0001dc7c + 8);
  puVar4[6] = *(undefined2 *)(param_1 + 0x1a);
  puVar4[7] = -*(short *)(param_1 + 0x1c);
  iVar3 = *(int *)(iVar1 + 0x34);
  *(undefined2 *)(iVar3 + 4) = 0;
  *(short *)(iVar3 + 6) = (short)((uint)puVar4 >> 3);
  *(int *)(iVar1 + 0x34) = iVar3 + 8;
  *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + 1;
  *puVar5 = puVar4 + 0x10;
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_0001dba6(int param_1)

{
  ushort uVar1;
  code *pcVar2;
  undefined4 uVar3;
  short extraout_var;
  short extraout_var_00;
  int iVar4;
  undefined auStack40 [4];
  undefined4 uStack36;
  int local_20;
  int local_1c;
  int local_18;
  
  pcVar2 = DAT_0001dc84;
  iVar4 = (*DAT_0001dc84)();
  local_20 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + 0xc);
  iVar4 = (*pcVar2)();
  local_20 = local_20 - *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + 8);
  iVar4 = (*pcVar2)();
  local_1c = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + 0x10);
  iVar4 = (*pcVar2)();
  local_1c = local_1c - *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + 0xc);
  iVar4 = (*pcVar2)();
  local_18 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + 0x14);
  iVar4 = (*pcVar2)();
  local_18 = local_18 - *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + 0x10);
  (*DAT_0001dc88)(&local_20,auStack40);
  (*DAT_0001dc94)(DAT_0001dc90,
                  *(undefined4 *)((short)(uStack36._0_2_ & DAT_0001dc74) * 4 + DAT_0001dc8c));
  uVar3 = DAT_0001dc9c;
  pcVar2 = DAT_0001dc94;
  uVar1 = DAT_0001dc74;
  *(short *)(param_1 + 0x16) = extraout_var + -7;
  (*pcVar2)(uVar3,*(undefined4 *)((short)(uStack36._0_2_ & uVar1) * 4 + DAT_0001dc98));
  *(short *)(param_1 + 0x18) = (-*(short *)(param_1 + 0xe) - extraout_var_00) + -0x3a;
  *(undefined2 *)(param_1 + 0x1a) = 0xffed;
  *(short *)(param_1 + 0x1c) = -0x31 - *(short *)(param_1 + 0xe);
  return;
}



void FUN_0001deb4(undefined4 *param_1)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = DAT_0001e074;
  iVar1 = DAT_0001e070;
  *(undefined2 *)(DAT_0001e070 + 0x12) = *(undefined2 *)(DAT_0001e070 + 0x10);
  *(short *)(iVar1 + 0x10) = (short)((param_1[2] & 0xf) << 0xc);
  (*pcVar2)(*param_1,param_1[1]);
  (*DAT_0001e07c)();
  *(undefined2 *)(iVar1 + 0x10) = *(undefined2 *)(iVar1 + 0x12);
  return;
}



void FUN_0001df08(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = DAT_0001e088;
  puVar1 = DAT_0001e084;
  *DAT_0001e084 = param_1[2];
  (*UNRECOVERED_JUMPTABLE)(*param_1,param_1[1],0x10,2);
  puVar1[1] = puVar1[3];
  UNRECOVERED_JUMPTABLE = DAT_0001e08c;
  puVar1[2] = puVar1[4];
                    // WARNING: Could not recover jumptable at 0x0001df32. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1[3]);
  return;
}



void FUN_0001df36(undefined4 *param_1)

{
  int iVar1;
  
  (*DAT_0001e088)(*param_1,param_1[1],0x10,2,param_1);
  iVar1 = DAT_0001e084;
  *(undefined4 *)(DAT_0001e084 + 4) = *(undefined4 *)(DAT_0001e084 + 0xc);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 0x10);
                    // WARNING: Could not recover jumptable at 0x0001df58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0001e090)();
  return;
}



void FUN_0001dff0(int *param_1,short param_2)

{
  undefined4 uVar1;
  int iStack24;
  int iStack20;
  int iStack16;
  undefined4 uStack12;
  
  uVar1 = (*DAT_0001e0a4)(param_2);
  (*DAT_0001e0a8)(0,*param_1,param_1[1],uVar1);
  iStack24 = *param_1 + 2;
  iStack20 = param_1[1];
  iStack16 = param_1[2];
  uStack12 = *(undefined4 *)((short)(param_2 * 0xc) + DAT_0001e0ac);
  FUN_0001df08(&iStack24);
  return;
}



byte FUN_0001e0b0(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  int local_2c;
  
  pcVar4 = DAT_0001e1c8;
  iVar5 = (*DAT_0001e1c8)();
  iVar5 = *(int *)(*(short *)(iVar5 + 4) * 4 + DAT_0001e1cc);
  if (iVar5 == 0) {
    iVar11 = 4;
    iVar5 = 4;
  }
  else {
    (*pcVar4)();
    iVar11 = (*DAT_0001e1d0)();
    iVar9 = (*pcVar4)();
    sVar1 = *(short *)(*(short *)(iVar9 + 8) * 0x10 + iVar5);
    iVar9 = (*pcVar4)();
    sVar2 = *(short *)(*(short *)(iVar9 + 8) * 0x10 + iVar5 + 2);
    iVar9 = (*pcVar4)();
    sVar3 = *(short *)(*(short *)(iVar9 + 8) * 0x10 + iVar5 + 4);
    iVar9 = (*pcVar4)();
    if (iVar11 < sVar1) {
      iVar11 = 0;
    }
    else if (iVar11 < sVar2) {
      iVar11 = 1;
    }
    else if (iVar11 < sVar3) {
      iVar11 = 2;
    }
    else if (iVar11 < *(short *)(*(short *)(iVar9 + 8) * 0x10 + iVar5 + 6)) {
      iVar11 = 3;
    }
    else {
      iVar11 = 4;
    }
    iVar9 = (*pcVar4)();
    iVar10 = *(int *)(*(int *)(*(int *)(iVar9 + 0x10) + 4) + (int)DAT_0001e1c4);
    iVar9 = (*pcVar4)();
    sVar1 = *(short *)(*(short *)(iVar9 + 8) * 0x10 + iVar5 + 8);
    iVar9 = (*pcVar4)();
    sVar2 = *(short *)(*(short *)(iVar9 + 8) * 0x10 + iVar5 + 10);
    iVar9 = (*pcVar4)();
    sVar3 = *(short *)(*(short *)(iVar9 + 8) * 0x10 + iVar5 + 0xc);
    iVar9 = (*pcVar4)();
    if (iVar10 < sVar1) {
      iVar5 = 0;
    }
    else if (iVar10 < sVar2) {
      iVar5 = 1;
    }
    else if (iVar10 < sVar3) {
      iVar5 = 2;
    }
    else if (iVar10 < *(short *)(iVar5 + *(short *)(iVar9 + 8) * 0x10 + 0xe)) {
      iVar5 = 3;
    }
    else {
      iVar5 = 4;
    }
  }
  uVar8 = iVar5 + iVar11;
  if (uVar8 == 0) {
    bVar12 = 4;
  }
  else if (uVar8 == 1) {
    bVar12 = 3;
  }
  else if (uVar8 == 2) {
    bVar12 = 2;
  }
  else if (uVar8 < 7) {
    bVar12 = 1;
  }
  else {
    bVar12 = 0;
  }
  iVar5 = (*pcVar4)();
  if (*(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x10) + 0x17) != '\0') {
    (*DAT_0001e2d8)(2,4);
    (*DAT_0001e2e0)();
  }
  iVar5 = DAT_0001e2e4;
  local_2c = 0;
  iVar10 = 0;
  iVar9 = 0;
  iVar11 = 0;
  do {
    iVar6 = (*pcVar4)();
    if (*(short *)(iVar10 * 2 + (int)DAT_0001e2d4 + *(int *)(*(int *)(iVar6 + 0x10) + 4)) < 0) {
      return bVar12;
    }
    iVar6 = (*pcVar4)();
    if ((int)((int)*(char *)(*(short *)(iVar10 * 2 +
                                       (int)DAT_0001e2d4 + *(int *)(*(int *)(iVar6 + 0x10) + 4)) * 2
                            + iVar5) & 0xffU) < (int)DAT_0001e2d6) {
      iVar6 = (*pcVar4)();
      pcVar7 = (char *)(*(short *)((int)DAT_0001e2d4 + *(int *)(*(int *)(iVar6 + 0x10) + 4) +
                                  local_2c) * 2 + iVar5);
      *pcVar7 = *pcVar7 + '\x01';
    }
    iVar6 = (*pcVar4)();
    if (*(byte *)(*(short *)((int)DAT_0001e2d4 + *(int *)(*(int *)(iVar6 + 0x10) + 4) + iVar11) * 2
                  + iVar5 + 1) < bVar12) {
      iVar6 = (*pcVar4)();
      *(byte *)(*(short *)((int)DAT_0001e2d4 + *(int *)(*(int *)(iVar6 + 0x10) + 4) + iVar9) * 2 +
                iVar5 + 1) = bVar12;
    }
    iVar10 = iVar10 + 1;
    iVar9 = iVar9 + 2;
    local_2c = local_2c + 2;
    iVar11 = iVar11 + 2;
  } while (iVar10 < 10);
  return bVar12;
}



void FUN_0001e30e(int param_1,uint param_2)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  char cStack24;
  char cStack20;
  
  pcVar2 = DAT_0001e3ac;
  iVar3 = (*DAT_0001e3ac)();
  iVar3 = *(int *)(*(short *)(iVar3 + 4) * 4 + DAT_0001e3b0);
  if (iVar3 != 0) {
    (*DAT_0001e3b4)();
    cStack24 = (*DAT_0001e3b8)();
    iVar4 = (*pcVar2)();
    cStack20 = *(char *)(*(short *)(iVar4 + 8) * 6 + iVar3 + 4);
    iVar4 = (*pcVar2)();
    param_2 = (uint)*(char *)(*(short *)(iVar4 + 8) * 6 + iVar3 + 5);
  }
  if (((param_1 != 0) && (param_1 != 1)) && (param_1 != 2)) {
    if (param_1 == 3) {
      if ((iVar3 != 0) && (((int)cStack24 & 0xffU) < ((int)cStack20 & 0xffU))) {
        iVar4 = (*pcVar2)();
        (*DAT_0001e3bc)(*(undefined2 *)(iVar3 + *(short *)(iVar4 + 8) * 6));
      }
    }
    else if (((param_1 == 4) && (iVar3 != 0)) && (((int)cStack24 & 0xffU) < (param_2 & 0xff))) {
      iVar4 = (*pcVar2)();
      (*DAT_0001e49c)(*(undefined2 *)(*(short *)(iVar4 + 8) * 6 + iVar3 + 2));
    }
  }
  iVar4 = (*pcVar2)();
  if (-1 < *(short *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0001e496)) {
    FUN_0001deb4(DAT_0001e4a0);
    iVar4 = (*pcVar2)();
    FUN_0001dff0(DAT_0001e4a4,
                 (int)*(short *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0001e496));
    iVar4 = (*pcVar2)();
    if (*(short *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0001e496) < 0x4d) {
      iVar4 = (*pcVar2)();
      uVar5 = (int)*(char *)(*(short *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0001e496) +
                            DAT_0001e4a8) & 0xff;
    }
    else {
      iVar4 = (*pcVar2)();
      bVar1 = *(byte *)(((uint)((int)*(short *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) +
                                               (int)DAT_0001e496) + (int)DAT_0001e498) >> 3) +
                       DAT_0001e4ac);
      iVar4 = (*pcVar2)();
      uVar5 = -(((bVar1 & *(byte *)(DAT_0001e4b0 +
                                   ((int)*(short *)((int)DAT_0001e496 +
                                                   *(int *)(*(int *)(iVar4 + 0x10) + 4)) +
                                    (int)DAT_0001e498 & 7U))) == 0) - 1);
    }
    if ((int)uVar5 < 99) {
      iVar4 = (*pcVar2)();
      if (*(short *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0001e496) < 0x4d) {
        iVar4 = (*pcVar2)();
        iVar4 = (int)*(short *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0001e496);
        *(char *)(iVar4 + DAT_0001e4a8) = *(char *)(iVar4 + DAT_0001e4a8) + '\x01';
      }
      else {
        iVar4 = (*pcVar2)();
        pbVar6 = (byte *)(DAT_0001e578 +
                         ((uint)((int)*(short *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) +
                                                (int)DAT_0001e574) + (int)DAT_0001e576) >> 3));
        iVar4 = (*pcVar2)();
        *pbVar6 = *pbVar6 | *(byte *)(DAT_0001e57c +
                                     ((int)*(short *)((int)DAT_0001e574 +
                                                     *(int *)(*(int *)(iVar4 + 0x10) + 4)) +
                                      (int)DAT_0001e576 & 7U));
      }
    }
  }
  iVar4 = (*pcVar2)();
  if ((*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x10) + 0x17) != '\0') && (iVar3 != 0)) {
    (*DAT_0001e580)(1,0xe);
    (*pcVar2)();
    (*pcVar2)();
    (*pcVar2)();
    (*pcVar2)();
    (*pcVar2)();
    (*DAT_0001e588)();
  }
  return;
}



void FUN_0001e58c(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  iVar3 = DAT_0001e6e0;
  iVar2 = DAT_0001e6dc;
  if (param_1 != 0) {
    sVar1 = *(short *)(DAT_0001e6dc + DAT_0001e6ce + 2);
    iVar6 = (*DAT_0001e6e8)(DAT_0001e6e0,(int)*(short *)(DAT_0001e6dc + DAT_0001e6ce) << 0x10,
                            DAT_0001e6e4);
    iVar6 = DAT_0001e6ec + iVar6;
    iVar7 = (*DAT_0001e6e8)(iVar3,(int)sVar1 << 0x10,DAT_0001e6e4);
    pcVar4 = DAT_0001e6f0;
    iVar7 = DAT_0001e6ec + iVar7;
    iVar8 = (*DAT_0001e6f0)(iVar6,param_1 << 0x10);
    iVar9 = (int)DAT_0001e6d0;
    uVar10 = (int)(short)((uint)(iVar8 + iVar3) >> 0x10) & 0xffff;
    *(uint *)(iVar2 + iVar9) = *(int *)(iVar2 + iVar9) + uVar10;
    *(uint *)(iVar2 + iVar9 + 0x5c) = *(int *)(iVar2 + iVar9 + 0x5c) + uVar10;
    iVar6 = (*pcVar4)((int)PTR_LAB_0001e6f4 - iVar6,param_1 << 0x10);
    iVar8 = (int)DAT_0001e6d2;
    uVar10 = (int)(short)((uint)(iVar6 + iVar3) >> 0x10) & 0xffff;
    *(uint *)(iVar2 + iVar8) = *(int *)(iVar2 + iVar8) + uVar10;
    *(uint *)(iVar2 + iVar8 + 0x5c) = *(int *)(iVar2 + iVar8 + 0x5c) + uVar10;
    iVar6 = (*pcVar4)(iVar7,param_1 << 0x10);
    puVar5 = PTR_LAB_0001e6f4;
    iVar8 = (int)DAT_0001e6d4;
    uVar10 = (int)(short)((uint)(iVar6 + iVar3) >> 0x10) & 0xffff;
    *(uint *)(iVar2 + iVar8) = *(int *)(iVar2 + iVar8) + uVar10;
    *(uint *)(iVar2 + iVar8 + 0x5c) = *(int *)(iVar2 + iVar8 + 0x5c) + uVar10;
    iVar6 = (*pcVar4)((int)puVar5 - iVar7,param_1 << 0x10);
    iVar7 = (int)DAT_0001e6d6;
    uVar10 = (int)(short)((uint)(iVar6 + iVar3) >> 0x10) & 0xffff;
    *(uint *)(iVar2 + iVar7) = *(int *)(iVar2 + iVar7) + uVar10;
    *(uint *)(iVar2 + iVar7 + 0x5c) = *(int *)(iVar2 + iVar7 + 0x5c) + uVar10;
  }
  return;
}



void FUN_0001e66e(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = DAT_0001e6f8;
  iVar1 = DAT_0001e6dc;
  iVar3 = 4;
  do {
    if ((iVar3 < 1) ||
       (*(undefined *)(param_1 + 0x75 + iVar3) = *(undefined *)(DAT_0001e6d8 + iVar1 + iVar3),
       *(char *)(iVar3 + param_1 + 0x75) == 'b')) {
      return;
    }
    uVar4 = (int)*(char *)(param_1 + 0x75 + iVar3) & 0xff;
    if (uVar4 < 99) {
      do {
        if (*(uint *)(DAT_0001e6da + iVar1 + iVar3 * 4) < *(uint *)((uVar4 + 1) * 0xc + iVar2)) {
          *(char *)(DAT_0001e6d8 + iVar1 + iVar3) = (char)uVar4;
          break;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < 99);
    }
    iVar3 = iVar3 + -1;
  } while( true );
}



uint FUN_0001e70e(int param_1)

{
  int iVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  short sVar9;
  int iVar7;
  int iVar8;
  uint uVar10;
  int iVar11;
  uint uVar12;
  short sVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  
  iVar1 = DAT_0001e898;
  *(undefined *)(param_1 + 0x73) = *(undefined *)(DAT_0001e898 + DAT_0001e888);
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  iVar4 = DAT_0001e8a4;
  pcVar3 = DAT_0001e8a0;
  pcVar2 = DAT_0001e89c;
  uVar5 = (int)*(char *)(param_1 + 0x73) & 0xff;
  if (uVar5 != 0x62) {
    uVar15 = (int)*(char *)(param_1 + 0x73) & 0xff;
    if (uVar15 < 99) {
      do {
        if (*(uint *)(iVar1 + DAT_0001e88a) < *(uint *)((uVar15 + 1) * 0xc + DAT_0001e8a8)) {
          *(char *)(iVar1 + DAT_0001e9c4) = (char)uVar15;
          *(char *)(param_1 + 0x74) = (char)uVar15 - *(char *)(param_1 + 0x73);
          return 0x74;
        }
        iVar16 = (uVar15 + 1) * 0xc + DAT_0001e8a8;
        iVar11 = DAT_0001e88c + iVar1;
        uVar14 = *(int *)(iVar11 + 8) + *(int *)(iVar11 + 0x10);
        uVar5 = uVar14 >> 1;
        uVar14 = uVar14 >> 2;
        uVar12 = *(int *)(iVar11 + 4) + *(int *)(iVar11 + 0xc);
        uVar10 = uVar12 >> 1;
        uVar12 = uVar12 >> 2;
        uVar6 = (*pcVar3)(*(int *)(iVar11 + 8) - uVar14,uVar5);
        iVar11 = (*pcVar2)((int)*(char *)(iVar16 + 10) << 0x10,uVar6);
        sVar9 = (short)((uint)(iVar11 + iVar4) >> 0x10);
        uVar6 = (*pcVar3)(*(int *)(iVar1 + DAT_0001e88e) - uVar12,uVar10);
        iVar11 = (*pcVar2)(((int)*(char *)(iVar16 + 8) & 0xffU) << 0x10,uVar6);
        uVar6 = (*pcVar3)(*(int *)(iVar1 + DAT_0001e890) - uVar14,uVar5);
        iVar7 = (*pcVar2)((int)*(char *)(iVar16 + 9) << 0x10,uVar6);
        uVar6 = (*pcVar3)(*(int *)(iVar1 + DAT_0001e892) - uVar12,uVar10);
        iVar8 = (*pcVar2)((int)*(char *)(iVar16 + 0xb) << 0x10,uVar6);
        sVar13 = (short)((uint)(iVar8 + iVar4) >> 0x10);
        *(short *)(param_1 + 6) =
             *(short *)(param_1 + 6) +
             (short)*(char *)(iVar16 + 4) + (short)((uint)(iVar11 + iVar4) >> 0x10);
        *(short *)(param_1 + 8) =
             *(short *)(param_1 + 8) +
             (short)*(char *)(iVar16 + 5) + (short)((uint)(iVar7 + iVar4) >> 0x10);
        *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + (short)*(char *)(iVar16 + 6);
        *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + (short)*(char *)(iVar16 + 7);
        *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + sVar9;
        *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + sVar13;
        *(short *)(DAT_0001e894 + iVar1) =
             *(short *)(DAT_0001e894 + iVar1) + *(char *)(iVar16 + 6) + sVar9;
        uVar5 = (int)*(char *)(iVar16 + 7) + (int)sVar13;
        *(short *)(DAT_0001e896 + iVar1) = *(short *)(DAT_0001e896 + iVar1) + (short)uVar5;
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < 99);
    }
    else {
      uVar5 = 0x73;
    }
  }
  return uVar5;
}



void FUN_0001e8dc(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  
  bVar2 = 0;
  iVar1 = 0;
  do {
    for (iVar3 = 0; iVar3 < (int)((int)*(char *)(param_1 + 0x7a + iVar1) & 0xffU); iVar3 = iVar3 + 1
        ) {
      if (*(short *)(iVar3 * 2 + param_1 + 0x12 + iVar1 * 0x10) != 0) {
        if (3 < bVar2) break;
        FUN_0001dff0((uint)bVar2 * 0x10 + DAT_0001e9c8,
                     (int)*(short *)(iVar3 * 2 + param_1 + 0x12 + iVar1 * 0x10));
        bVar2 = bVar2 + 1;
      }
    }
    iVar1 = iVar1 + 1;
    if (5 < iVar1) {
      if (bVar2 != 0) {
        FUN_0001deb4(DAT_0001e9cc);
        return;
      }
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001e974(int param_1)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar3 = _LAB_0001e9d0;
  iVar13 = 3;
  do {
    iVar10 = 7;
    iVar7 = 0xe;
    iVar12 = iVar13 * 0x10;
    do {
      *(undefined2 *)(param_1 + 0x12 + iVar12 + iVar7) = 0;
      iVar10 = iVar10 + -2;
      *(undefined2 *)(param_1 + iVar12 + iVar7 + 0x10) = 0;
      iVar7 = iVar7 + -4;
    } while (-1 < iVar10);
    iVar7 = *(int *)(iVar13 * 4 + _LAB_0001e9d4);
    *(undefined *)(param_1 + 0x7a + iVar13) = 0;
    iVar10 = 0;
    while (*(short *)(iVar10 * 8 + iVar7 + 6) != 0) {
      iVar11 = 0;
      iVar8 = 1;
      iVar4 = iVar10 * 8 + iVar7;
      do {
        if ((int)((int)*(char *)(iVar4 + iVar8) & 0xffU) <=
            *(char *)(DAT_0001eab2 + iVar3 + iVar8) + 1) {
          iVar11 = iVar11 + 1;
        }
        if ((int)((int)*(char *)(iVar4 + iVar8 + 1) & 0xffU) <=
            *(char *)(DAT_0001eab2 + iVar3 + iVar8 + 1) + 1) {
          iVar11 = iVar11 + 1;
        }
        iVar9 = iVar8 + 3;
        if ((int)((int)*(char *)(iVar4 + iVar8 + 2) & 0xffU) <=
            *(char *)(DAT_0001eab2 + iVar3 + iVar8 + 2) + 1) {
          iVar11 = iVar11 + 1;
        }
        iVar8 = iVar8 + 4;
        if ((int)((int)*(char *)(iVar4 + iVar9) & 0xffU) <=
            *(char *)(DAT_0001eab2 + iVar3 + iVar9) + 1) {
          iVar11 = iVar11 + 1;
        }
      } while (iVar8 < 5);
      if (3 < iVar11) {
        sVar1 = *(short *)(iVar10 * 8 + iVar7 + 6);
        iVar4 = (int)sVar1;
        if (iVar4 < 0x4d) {
          bVar2 = *(byte *)(sVar1 + DAT_0001eab8);
        }
        else {
          bVar2 = *(byte *)(DAT_0001eac0 + (DAT_0001eab4 + iVar4 & 7U)) &
                  *(byte *)(DAT_0001eabc + ((uint)(DAT_0001eab4 + iVar4) >> 3));
        }
        if (bVar2 == 0) {
          iVar4 = iVar10 * 8 + iVar7;
          if (*(short *)(iVar4 + 6) < 0x4d) {
            *(undefined *)(*(short *)(iVar4 + 6) + DAT_0001eab8) = 1;
          }
          else {
            uVar5 = (uint)((int)DAT_0001ebde + (int)*(short *)(iVar4 + 6)) >> 3;
            *(byte *)(DAT_0001ebf0 + uVar5) =
                 *(byte *)(uVar5 + DAT_0001ebf0) |
                 *(byte *)(DAT_0001ebec + ((int)*(short *)(iVar4 + 6) + (int)DAT_0001ebde & 7U));
          }
          *(undefined2 *)
           (param_1 + 0x12 + iVar12 + ((int)*(char *)(param_1 + 0x7a + iVar13) & 0xffU) * 2) =
               *(undefined2 *)(iVar4 + 6);
          pcVar6 = (char *)(param_1 + 0x7a + iVar13);
          *pcVar6 = *pcVar6 + '\x01';
        }
      }
      iVar10 = iVar10 + 1;
    }
    iVar13 = iVar13 + -1;
  } while (-1 < iVar13);
  return;
}



undefined4 FUN_0001eb34(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((DAT_0001ebe0 & *(ushort *)(DAT_0001ebf4 + 6)) == 0) {
    uVar1 = 0;
  }
  else {
    if ((*(ushort *)(DAT_0001ebf4 + 6) & 4) == 0) {
      if ((*(ushort *)(DAT_0001ebf4 + 6) & 1) == 0) {
        if ((*(ushort *)(DAT_0001ebf4 + 6) & 2) == 0) {
          return 0;
        }
        iVar2 = (*DAT_0001ebf8)();
        iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
        *(uint *)(iVar2 + DAT_0001ebe2) = *(uint *)(iVar2 + DAT_0001ebe2) | (int)(short)DAT_0001ebe0
        ;
        return 1;
      }
      iVar2 = (*DAT_0001ebf8)();
      iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
      *(uint *)(iVar2 + DAT_0001ebe2) = *(uint *)(iVar2 + DAT_0001ebe2) | (int)DAT_0001ebe6;
    }
    else {
      iVar2 = (*DAT_0001ebf8)();
      iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
      *(uint *)(iVar2 + DAT_0001ebe2) = *(uint *)(iVar2 + DAT_0001ebe2) | (int)DAT_0001ebe4;
    }
    uVar1 = 1;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0001ebaa(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((DAT_0001ebe0 & *(ushort *)(DAT_0001ebf4 + 6)) == 0) {
    return 0;
  }
  if ((_LAB_0001ebe8 & *(ushort *)(DAT_0001ebf4 + 6)) == 0) {
    if ((DAT_0001ecce & *(ushort *)(DAT_0001ebf4 + 6)) != 0) {
      iVar1 = (*DAT_0001ecdc)();
      uVar2 = 1;
      iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 0x18);
      *(uint *)(iVar1 + DAT_0001ecd0) = *(uint *)(iVar1 + DAT_0001ecd0) | (int)DAT_0001ecd2;
    }
  }
  else {
    iVar1 = (*DAT_0001ebf8)();
    iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 0x18);
    *(uint *)(iVar1 + DAT_0001ebe2) = *(uint *)(iVar1 + DAT_0001ebe2) | (int)_LAB_0001ebea;
    uVar2 = 1;
  }
  return uVar2;
}



int FUN_0001ec22(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = DAT_0001ecdc;
  iVar2 = FUN_0001eb34();
  if (iVar2 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      iVar2 = (*pcVar1)();
      iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
      *(uint *)(iVar2 + DAT_0001ecd0) = *(uint *)(iVar2 + DAT_0001ecd0) | (int)DAT_0001ecd4;
    }
    else if (param_1 == 2) {
      iVar2 = (*pcVar1)();
      iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
      *(uint *)(iVar2 + DAT_0001ecd0) = *(uint *)(iVar2 + DAT_0001ecd0) | (int)DAT_0001ecd6;
    }
    else if ((param_1 == 3) || (param_1 == 4)) {
      iVar2 = (*pcVar1)();
      iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
      *(uint *)(iVar2 + DAT_0001ecd0) = *(uint *)(iVar2 + DAT_0001ecd0) | (int)DAT_0001ecd8;
    }
  }
  iVar2 = FUN_0001ebaa();
  if (iVar2 == 0) {
    if (*(int *)(*DAT_0001ece0 + 0xc) == 2) {
      iVar3 = (*pcVar1)();
      iVar2 = (int)DAT_0001ecd0;
      iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
      *(uint *)(iVar3 + iVar2) = *(uint *)(iVar3 + iVar2) | (int)DAT_0001ecd2;
    }
    else {
      iVar2 = (*pcVar1)();
      iVar3 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
      iVar2 = (int)DAT_0001ecd0;
      *(uint *)(iVar3 + iVar2) = *(uint *)(iVar3 + iVar2) | (int)DAT_0001ecd2;
    }
  }
  return iVar2;
}



void FUN_0001f7b4(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = DAT_0001f850;
  iVar1 = DAT_0001f84c;
  *(undefined2 *)(DAT_0001f84c + 0x12) = *(undefined2 *)(DAT_0001f84c + 0x10);
  *(short *)(iVar1 + 0x10) = (short)(((int)*(char *)(param_1 + 0x10) & 0xfU) << 0xc);
  (*pcVar2)(*(undefined *)(param_1 + 0xe),*(undefined *)(param_1 + 0xf));
  (*DAT_0001f858)();
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined2 *)(iVar1 + 0x10) = *(undefined2 *)(iVar1 + 0x12);
  return;
}



void FUN_0001f806(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_84;
  int *local_80;
  int local_7c;
  int local_50;
  int local_44;
  int iStack64;
  undefined4 uStack60;
  int local_38;
  int local_34;
  undefined4 uStack48;
  int iStack44;
  int iStack40;
  undefined4 uStack36;
  
  pcVar5 = DAT_0001f86c;
  iVar4 = DAT_0001f868;
  puVar3 = PTR_LAB_0003fffe_1_0001f864;
  uVar2 = DAT_0001f860;
  iVar1 = DAT_0001f85c;
  iVar7 = ((param_2 & 0xff) * -8 + 0x68) * 0x10000;
  iVar9 = (int)DAT_0001f84a;
  iVar8 = ((param_1 & 0xff) * 8 + (int)DAT_0001f848) * 0x10000;
  for (local_50 = 10; 3 < local_50; local_50 = local_50 + -4) {
    uStack36 = 0;
    iStack44 = iVar8;
    iStack40 = iVar7;
    uVar6 = (*pcVar5)();
    local_38 = (uVar6 & (uint)puVar3) + DAT_0001fa34;
    uVar6 = (*pcVar5)();
    local_34 = (uVar6 & (uint)puVar3) + iVar4;
    uStack48 = 0;
    local_44 = 0;
    iStack64 = 0;
    uStack60 = 0;
    uVar6 = (*pcVar5)();
    local_44 = (int)DAT_0001fa2e;
    local_38 = (uVar6 & uVar2) + iVar1;
    iStack64 = iVar9;
    (*DAT_0001fa40)(*(undefined4 *)(*DAT_0001fa3c + 0xc),DAT_0001fa38,&iStack44,&local_38);
    uStack36 = 0;
    iStack44 = iVar8;
    iStack40 = iVar7;
    uVar6 = (*pcVar5)();
    local_38 = (uVar6 & (uint)puVar3) + DAT_0001fa34;
    uVar6 = (*pcVar5)();
    local_34 = (uVar6 & (uint)puVar3) + iVar4;
    uStack48 = 0;
    local_44 = 0;
    iStack64 = 0;
    uStack60 = 0;
    uVar6 = (*pcVar5)();
    local_44 = (int)DAT_0001fa2e;
    local_38 = (uVar6 & uVar2) + iVar1;
    iStack64 = iVar9;
    (*DAT_0001fa40)(*(undefined4 *)(*DAT_0001fa3c + 0xc),DAT_0001fa38,&iStack44,&local_38);
    uStack36 = 0;
    iStack44 = iVar8;
    iStack40 = iVar7;
    uVar6 = (*pcVar5)();
    local_38 = (uVar6 & (uint)puVar3) + DAT_0001fa34;
    uVar6 = (*pcVar5)();
    local_34 = (uVar6 & (uint)puVar3) + iVar4;
    uStack48 = 0;
    local_44 = 0;
    iStack64 = 0;
    uStack60 = 0;
    uVar6 = (*pcVar5)();
    local_44 = (int)DAT_0001fa2e;
    local_38 = (uVar6 & uVar2) + iVar1;
    local_7c = iVar4;
    local_80 = &local_44;
    iStack64 = iVar9;
    (*DAT_0001fa40)(*(undefined4 *)(*DAT_0001fa3c + 0xc),DAT_0001fa38,&iStack44,&local_38);
    uStack36 = 0;
    iStack44 = iVar8;
    iStack40 = iVar7;
    uVar6 = (*pcVar5)();
    local_38 = (uVar6 & (uint)puVar3) + DAT_0001fa34;
    uVar6 = (*pcVar5)();
    local_34 = (uVar6 & (uint)puVar3) + iVar4;
    uStack48 = 0;
    local_44 = 0;
    iStack64 = 0;
    uStack60 = 0;
    uVar6 = (*pcVar5)();
    local_44 = (int)DAT_0001fa2e;
    local_38 = (uVar6 & uVar2) + iVar1;
    local_84 = 0x3c;
    iStack64 = iVar9;
    (*DAT_0001fb54)(*(undefined4 *)(*DAT_0001fb50 + 0xc),DAT_0001fb4c,&iStack44,&local_38,&local_44,
                    iVar4,(int)&local_84 + (int)DAT_0001fa30);
  }
  for (; -1 < local_50; local_50 = local_50 + -1) {
    uStack36 = 0;
    iStack44 = iVar8;
    iStack40 = iVar7;
    uVar6 = (*pcVar5)();
    local_38 = (uVar6 & (uint)puVar3) + DAT_0001fb58;
    uVar6 = (*pcVar5)();
    local_34 = (uVar6 & (uint)puVar3) + iVar4;
    uStack48 = 0;
    local_44 = 0;
    iStack64 = 0;
    uStack60 = 0;
    uVar6 = (*pcVar5)();
    local_44 = (int)DAT_0001fb48;
    local_38 = (uVar6 & uVar2) + iVar1;
    iStack64 = iVar9;
    (*DAT_0001fb54)(*(undefined4 *)(*DAT_0001fb50 + 0xc),DAT_0001fb4c,&iStack44,&local_38);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001fafc(uint param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 short param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int local_90 [2];
  undefined4 *local_88;
  undefined4 local_84;
  int local_80 [2];
  undefined4 *local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 *local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int iStack84;
  int iStack80;
  undefined4 uStack76;
  int iStack72;
  undefined4 local_44;
  undefined4 uStack64;
  undefined4 uStack60;
  int local_38;
  int local_34;
  undefined4 uStack48;
  int iStack44;
  int iStack40;
  undefined4 uStack36;
  
  pcVar4 = _LAB_0001fb5c;
  pcVar3 = DAT_0001fb54;
  piVar2 = DAT_0001fb50;
  uVar1 = DAT_0001fb4c;
  iStack72 = ((param_1 & 0xff) * 8 + (int)DAT_0001fb4a) * 0x10000;
  iStack80 = ((param_2 & 0xff) * -8 + 0x68) * 0x10000;
  local_58 = param_3 >> 1;
  iStack84 = local_58;
  uStack76 = param_4;
  for (iVar6 = 0x14; 3 < iVar6; iVar6 = iVar6 + -4) {
    iStack44 = iStack72;
    iStack40 = iStack80;
    uStack36 = 0;
    (*pcVar4)();
    local_38 = (*DAT_0001fd30)();
    local_38 = local_38 - local_58;
    (*pcVar4)();
    local_34 = (*DAT_0001fd30)();
    local_34 = local_34 - iStack84;
    uStack48 = 0;
    local_44 = 0;
    uStack60 = 0;
    uStack64 = uStack76;
    local_5c = (int)param_6;
    local_60 = param_7;
    local_64 = param_5;
    local_68 = &local_44;
    (*pcVar3)(*(undefined4 *)(*piVar2 + 0xc),uVar1,&iStack44,&local_38);
    iStack44 = iStack72;
    iStack40 = iStack80;
    uStack36 = 0;
    (*pcVar4)();
    local_38 = (*DAT_0001fd30)();
    local_38 = local_38 - local_58;
    (*pcVar4)();
    local_34 = (*DAT_0001fd30)();
    local_34 = local_34 - iStack84;
    uStack48 = 0;
    local_44 = 0;
    uStack60 = 0;
    uStack64 = uStack76;
    local_6c = (int)param_6;
    local_70 = param_7;
    local_74 = param_5;
    local_78 = &local_44;
    (*pcVar3)(*(undefined4 *)(*piVar2 + 0xc),uVar1,&iStack44,&local_38);
    iStack44 = iStack72;
    iStack40 = iStack80;
    uStack36 = 0;
    (*pcVar4)();
    local_38 = (*DAT_0001fd30)();
    local_38 = local_38 - local_58;
    (*pcVar4)();
    iVar5 = (*DAT_0001fd30)();
    local_34 = iVar5 - iStack84;
    uStack48 = 0;
    local_44 = 0;
    uStack60 = 0;
    uStack64 = uStack76;
    local_80[1] = (int)param_6;
    local_80[0] = *(int *)((int)local_80 + _LAB_0001fd28 + 4);
    local_84 = *(undefined4 *)((int)local_80 + (int)DAT_0001fd2a);
    local_88 = &local_44;
    (*pcVar3)(*(undefined4 *)(*piVar2 + 0xc),uVar1,&iStack44,&local_38);
    iStack44 = iStack72;
    iStack40 = iStack80;
    uStack36 = 0;
    (*pcVar4)();
    local_38 = (*DAT_0001fd30)();
    local_38 = local_38 - local_58;
    (*pcVar4)();
    iVar5 = (*DAT_0001fd30)();
    local_34 = iVar5 - iStack84;
    uStack48 = 0;
    local_44 = 0;
    uStack60 = 0;
    uStack64 = uStack76;
    local_90[1] = (int)*(short *)((int)&local_88 + (int)DAT_0001fd2c);
    local_90[0] = *(int *)((int)local_90 + DAT_0001fd2e + 4);
    (*pcVar3)(*(undefined4 *)(*piVar2 + 0xc),uVar1,&iStack44,&local_38,&local_44,
              *(undefined4 *)((int)local_90 + (int)DAT_0001fdec));
  }
  for (; -1 < iVar6; iVar6 = iVar6 + -1) {
    uStack36 = 0;
    iStack44 = iStack72;
    iStack40 = iStack80;
    (*pcVar4)();
    local_38 = (*DAT_0001fdf0)();
    local_38 = local_38 - local_58;
    (*pcVar4)();
    local_34 = (*DAT_0001fdf0)();
    local_34 = local_34 - iStack84;
    uStack48 = 0;
    local_44 = 0;
    uStack60 = 0;
    uStack64 = uStack76;
    local_5c = (int)param_6;
    local_60 = param_7;
    local_64 = param_5;
    local_68 = &local_44;
    (*pcVar3)(*(undefined4 *)(*piVar2 + 0xc),uVar1,&iStack44,&local_38);
  }
  return;
}



void FUN_0001fdf4(uint param_1,uint param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  int aiStack64 [9];
  
  iVar3 = (int)DAT_0001ff8a;
  puVar15 = (undefined4 *)(&stack0xffffffe8 + iVar3);
  *(undefined4 *)(&stack0xffffffe8 + iVar3) = *DAT_0001ff90;
  *(undefined4 *)(&stack0xffffffec + iVar3) = DAT_0001ff90[1];
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = DAT_0001ff90[2];
  *(undefined4 *)(&stack0xfffffff4 + iVar3) = DAT_0001ff90[3];
  *(undefined4 *)(&stack0xfffffff8 + iVar3) = DAT_0001ff90[4];
  *(undefined4 *)(&stack0xfffffffc + iVar3) = DAT_0001ff90[5];
  *(undefined4 *)(&stack0x00000000 + iVar3) = DAT_0001ff90[6];
  *(undefined4 *)(&stack0x00000004 + iVar3) = DAT_0001ff90[7];
  *(undefined4 *)(&stack0x00000008 + iVar3) = DAT_0001ff90[8];
  uVar13 = 0x10;
  *(undefined4 *)(&stack0x0000000c + iVar3) = DAT_0001ff90[9];
  *(undefined4 *)(&stack0x00000010 + iVar3) = DAT_0001ff90[10];
  *(undefined4 *)(&stack0x00000014 + iVar3) = DAT_0001ff90[0xb];
  *(undefined4 *)(&stack0x00000018 + iVar3) = DAT_0001ff90[0xc];
  *(undefined4 *)(&stack0x0000001c + iVar3) = DAT_0001ff90[0xd];
  *(undefined4 *)(&stack0x00000020 + iVar3) = DAT_0001ff90[0xe];
  *(undefined4 *)(&stack0x00000024 + iVar3) = DAT_0001ff90[0xf];
  *(undefined4 *)(&stack0x00000030 + iVar3) = 0;
  *(undefined4 *)(&stack0x0000002c + iVar3) = 0;
  *(undefined4 *)(&stack0x00000028 + iVar3) = 0;
  *(uint *)(&stack0xffffffe4 + iVar3) = (param_1 & 0xff) << 3;
  iVar10 = (int)DAT_0001ff8c;
  iVar11 = (int)DAT_0001ff8e;
  *(uint *)((int)aiStack64 + iVar3 + 0x20) = (param_2 & 0xff) << 3;
  do {
    uVar4 = (*DAT_0001ff94)();
    iVar5 = (*DAT_0001ff98)(uVar4 >> 0x10,uVar13);
    uVar8 = puVar15[iVar5];
    puVar15[iVar5] = puVar15[uVar13 - 1];
    puVar15[uVar13 - 1] = uVar8;
    piVar6 = (int *)(&stack0x00000034 + ((uVar13 + iVar11) * 0xc & 0xff) + iVar3);
    *piVar6 = ((uVar13 & 3) * 2 + *(int *)(&stack0xffffffe4 + iVar3) + iVar10) * 0x10000;
    piVar6[1] = ((((int)uVar13 >> 2 & 3U) * -4 + 0x70) - *(int *)((int)aiStack64 + iVar3 + 0x20)) *
                0x10000;
    piVar6[2] = 0;
    uVar14 = uVar13 - 1;
    uVar4 = (*DAT_0001ff94)();
    iVar5 = (*DAT_0001ff98)(uVar4 >> 0x10,uVar14);
    uVar2 = DAT_0001ffa8;
    pcVar1 = DAT_0001ffa4;
    piVar6 = DAT_0001ffa0;
    uVar8 = DAT_0001ff9c;
    uVar9 = puVar15[iVar5];
    puVar15[iVar5] = puVar15[uVar13 - 2];
    puVar15[uVar13 - 2] = uVar9;
    piVar7 = (int *)(&stack0x00000034 + ((uVar14 + iVar11) * 0xc & 0xff) + iVar3);
    *piVar7 = ((uVar14 & 3) * 2 + *(int *)(&stack0xffffffe4 + iVar3) + iVar10) * 0x10000;
    uVar13 = uVar13 - 2;
    piVar7[1] = ((((int)uVar14 >> 2 & 3U) * -4 + 0x70) - *(int *)((int)aiStack64 + iVar3 + 0x20)) *
                0x10000;
    piVar7[2] = 0;
  } while (0 < (int)uVar13);
  puVar12 = &stack0x00000034 + iVar3;
  for (; puVar15 < &stack0x00000028 + iVar3; puVar15 = puVar15 + 2) {
    *(undefined4 *)((int)aiStack64 + iVar3 + 0x1c) = *puVar15;
    *(undefined4 *)((int)aiStack64 + iVar3 + 0x18) = DAT_0001ffac;
    *(undefined4 *)((int)aiStack64 + iVar3 + 0x14) = uVar2;
    *(undefined **)((int)aiStack64 + iVar3 + 0x10) = &stack0x00000028 + iVar3;
    (*pcVar1)(*(undefined4 *)(*piVar6 + 0xc),uVar8,puVar12,&stack0x00000028 + iVar3);
    *(undefined4 *)((int)aiStack64 + iVar3 + 0xc) = puVar15[1];
    *(undefined4 *)((int)aiStack64 + iVar3 + 8) = DAT_00020084;
    *(undefined4 *)((int)aiStack64 + iVar3 + 4) = uVar2;
    *(undefined **)((int)aiStack64 + iVar3) = &stack0x00000028 + iVar3;
    (*pcVar1)(*(undefined4 *)(*piVar6 + 0xc),uVar8,puVar12 + 0xc,&stack0x00000028 + iVar3);
    puVar12 = puVar12 + 0x18;
  }
  return;
}



void FUN_0001ffea(undefined4 param_1,int param_2,undefined2 param_3,undefined param_4,int param_5)

{
  int *piVar1;
  
  piVar1 = (int *)(*DAT_0002008c)(param_1,DAT_00020088,0x18);
  *(undefined2 *)(piVar1 + 1) = param_3;
  *(undefined2 *)((int)piVar1 + 6) = param_3;
  *piVar1 = param_2;
  *(undefined *)((int)piVar1 + 0xe) = *(undefined *)(param_2 + 3);
  *(undefined *)((int)piVar1 + 0xf) = *(undefined *)(param_2 + 7);
  *(char *)(piVar1 + 4) = (char)*(undefined4 *)(param_2 + 8);
  *(undefined *)((int)piVar1 + 0x11) = param_4;
  piVar1[5] = param_5;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00020150(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined2 param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cStack28;
  
  puVar2 = (undefined4 *)(*DAT_000201d8)(param_1,_LAB_000201d4,0x1c);
  *(undefined2 *)(puVar2 + 3) = 0;
  *(undefined2 *)((int)puVar2 + 0xe) = param_4;
  *puVar2 = param_2;
  uVar4 = *param_2;
  uVar3 = param_2[3];
  (*DAT_000201dc)(param_3);
  pcVar1 = DAT_000201dc;
  *(char *)((int)puVar2 + 0x17) = ((char)uVar4 + (char)uVar3) - cStack28;
  *(char *)(puVar2 + 6) = (char)param_2[1];
  (*pcVar1)(param_3);
  *(ushort *)(puVar2 + 5) = (short)cStack28 & 0xff;
  puVar2[2] = param_3;
  puVar2[1] = param_3;
  *(char *)((int)puVar2 + 0x19) = (char)param_2[2];
  return;
}



int FUN_000206f4(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 *param_5,int param_6,int param_7,short param_8) {
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar5 = DAT_0002080c;
  if (param_8 != 0) {
    uVar5 = DAT_00020808;
  }
  iVar2 = (*DAT_00020810)(param_1,uVar5,0x44);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x10) = *param_3;
    *(undefined4 *)(iVar2 + 0x14) = param_3[1];
    *(undefined4 *)(iVar2 + 0x18) = param_3[2];
    if (param_4 != (undefined4 *)0x0) {
      *(undefined4 *)(iVar2 + 0x1c) = *param_4;
      *(undefined4 *)(iVar2 + 0x20) = param_4[1];
      *(undefined4 *)(iVar2 + 0x24) = param_4[2];
    }
    if (param_5 != (undefined4 *)0x0) {
      *(undefined4 *)(iVar2 + 0x28) = *param_5;
      *(undefined4 *)(iVar2 + 0x2c) = param_5[1];
      *(undefined4 *)(iVar2 + 0x30) = param_5[2];
    }
    pcVar1 = DAT_00020814;
    *(int *)(iVar2 + 0x34) = param_6;
    (*pcVar1)(iVar2 + 8,(int)*(short *)(*(int *)(param_1 + 4) + 4),param_2);
    *(short *)(iVar2 + 0x40) = param_8;
    if (param_8 != 0) {
      uVar3 = (*DAT_00020818)();
      pcVar1 = DAT_000207f8;
      for (uVar3 = uVar3 & 0x1f; uVar3 != 0; uVar3 = uVar3 - 1) {
        (*pcVar1)(iVar2 + 8);
      }
    }
    if (param_7 == 0) {
      if (param_6 != DAT_00020820) {
        *(undefined4 *)(iVar2 + -0xc) = DAT_00020824;
      }
    }
    else {
      iVar4 = 0;
      iVar6 = 0;
      do {
        *(undefined2 *)(iVar2 + 0x38 + iVar4) = *(undefined2 *)(param_7 + iVar4);
        iVar6 = iVar6 + 2;
        *(undefined2 *)(iVar2 + 0x38 + iVar4 + 2) = *(undefined2 *)(param_7 + iVar4 + 2);
        iVar4 = iVar4 + 4;
      } while (iVar6 < 4);
      *(undefined4 *)(iVar2 + -0xc) = DAT_0002081c;
    }
  }
  return iVar2;
}



undefined4 FUN_00020958(int *param_1)

{
  short *psVar1;
  uint uVar2;
  
  psVar1 = DAT_00020a4c;
  uVar2 = 0;
  if (*param_1 < (int)DAT_00020a4c[6]) {
    uVar2 = 1;
    if (*param_1 < (int)DAT_00020a4c[2]) {
      *param_1 = (int)DAT_00020a4c[2];
    }
  }
  else if (((int)DAT_00020a4c[7] < *param_1) && (uVar2 = 1, (int)DAT_00020a4c[3] < *param_1)) {
    *param_1 = (int)DAT_00020a4c[3];
  }
  if (param_1[1] < (int)psVar1[5]) {
    uVar2 = 1;
    if (param_1[1] < (int)psVar1[1]) {
      param_1[1] = (int)psVar1[1];
    }
  }
  else if (((int)psVar1[4] < param_1[1]) && (uVar2 = 1, (int)*psVar1 < param_1[1])) {
    param_1[1] = (int)*psVar1;
  }
  if (param_1[2] < (int)psVar1[6]) {
    uVar2 = uVar2 | 2;
    if (param_1[2] < (int)psVar1[2]) {
      param_1[2] = (int)psVar1[2];
    }
  }
  else if (((int)psVar1[7] < param_1[2]) && (uVar2 = uVar2 | 2, (int)psVar1[3] < param_1[2])) {
    param_1[2] = (int)psVar1[3];
  }
  if (param_1[3] < (int)psVar1[5]) {
    uVar2 = uVar2 | 2;
    if (param_1[3] < (int)psVar1[1]) {
      param_1[3] = (int)psVar1[1];
    }
  }
  else if (((int)psVar1[4] < param_1[3]) && (uVar2 = uVar2 | 2, (int)*psVar1 < param_1[3])) {
    param_1[3] = (int)*psVar1;
  }
  if (uVar2 == 3) {
    return 2;
  }
  return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Restarted to delay deadcode elimination for space: stack

undefined4 FUN_00020a50(int *param_1,int *param_2,undefined2 *param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  short sVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined4 uStack60;
  undefined4 uStack56;
  undefined4 uStack52;
  undefined4 uStack48;
  int local_2c;
  int iStack40;
  int iStack36;
  
  pcVar3 = DAT_00020b9c;
  iVar2 = DAT_00020b98;
  iVar9 = ((int)*(char *)((int)param_1 + 7) & 0xffU) * 0x1c + *param_1;
  local_2c = *param_2;
  iStack40 = param_2[1];
  iStack36 = param_2[2];
  uStack60 = (*DAT_00020b9c)(*(undefined4 *)(iVar9 + 0x14),param_4);
  uStack60 = uStack60 + local_2c;
  uStack56 = (*pcVar3)(*(undefined4 *)(iVar9 + 0x18),param_4);
  uStack52 = uStack60;
  uStack56 = uStack56 + iStack40;
  iVar4 = (*pcVar3)(*(undefined4 *)(iVar9 + 0xc),param_4);
  uStack48 = uStack56;
  uStack52 = uStack52 + iVar4;
  iVar4 = (*pcVar3)(*(undefined4 *)(iVar9 + 0x10),param_4);
  uStack48 = uStack48 - iVar4;
  iVar4 = FUN_00020958(&uStack60);
  uVar1 = DAT_00020b96;
  if (iVar4 == 2) {
    uVar5 = 0;
  }
  else {
    puVar7 = *(undefined2 **)(undefined4 *)(iVar2 + 0x14);
    *puVar7 = *(undefined2 *)(iVar9 + 2);
    puVar7[2] = *(ushort *)(iVar9 + 4) | uVar1;
    if ((*(ushort *)(iVar9 + 4) & 0x38) == 8) {
      sVar6 = *(short *)(param_1 + 1) + *(short *)(iVar9 + 10);
    }
    else {
      sVar6 = *(short *)(iVar9 + 10);
    }
    puVar7[3] = sVar6;
    puVar7[4] = *(short *)(param_1 + 1) + *(short *)(iVar9 + 6);
    puVar7[5] = *(undefined2 *)(iVar9 + 8);
    puVar7[6] = uStack60._2_2_;
    puVar7[7] = -uStack56._2_2_;
    puVar7[10] = uStack52._2_2_;
    puVar7[0xb] = -uStack48._2_2_;
    puVar8 = *(undefined2 **)(iVar2 + 0x24);
    *(undefined2 **)(iVar2 + 0x24) = puVar8 + 4;
    *puVar8 = *param_3;
    puVar8[1] = param_3[1];
    puVar8[2] = param_3[2];
    puVar8[3] = param_3[3];
    puVar7[0xe] = (short)((uint)puVar8 >> 3);
    iVar4 = *(int *)(iVar2 + 0x34);
    *(undefined2 *)(iVar4 + 4) = 0;
    *(short *)(iVar4 + 6) = (short)((uint)puVar7 >> 3);
    *(int *)(iVar2 + 0x34) = iVar4 + 8;
    uVar5 = 1;
    *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + 1;
    *(undefined4 *)(iVar2 + 0x14) = puVar7 + 0x10;
    *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
  }
  return uVar5;
}



// WARNING: Could not reconcile some variable overlaps

undefined4 FUN_00020ba0(int *param_1,int *param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  short sVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined4 local_3c;
  undefined4 uStack56;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int iStack40;
  int iStack36;
  
  pcVar3 = DAT_00020cc4;
  iVar2 = DAT_00020cc0;
  iVar8 = ((int)*(char *)((int)param_1 + 7) & 0xffU) * 0x1c + *param_1;
  local_2c = *param_2;
  iStack40 = param_2[1];
  iStack36 = param_2[2];
  local_3c = (*DAT_00020cc4)(*(undefined4 *)(iVar8 + 0x14),param_3);
  local_3c = local_3c + local_2c;
  uStack56 = (*pcVar3)(*(undefined4 *)(iVar8 + 0x18),param_3);
  local_34 = local_3c;
  uStack56 = uStack56 + iStack40;
  iVar4 = (*pcVar3)(*(undefined4 *)(iVar8 + 0xc),param_3);
  local_30 = uStack56;
  local_34 = local_34 + iVar4;
  iVar4 = (*pcVar3)(*(undefined4 *)(iVar8 + 0x10),param_3);
  local_30 = local_30 - iVar4;
  iVar4 = FUN_00020958(&local_3c);
  uVar1 = DAT_00020cbc;
  if (iVar4 == 2) {
    uVar5 = 0;
  }
  else {
    puVar7 = *(undefined2 **)(undefined4 *)(iVar2 + 0x14);
    *puVar7 = *(undefined2 *)(iVar8 + 2);
    puVar7[2] = *(ushort *)(iVar8 + 4) | uVar1;
    if ((*(ushort *)(iVar8 + 4) & 0x38) == 8) {
      sVar6 = *(short *)(param_1 + 1) + *(short *)(iVar8 + 10);
    }
    else {
      sVar6 = *(short *)(iVar8 + 10);
    }
    puVar7[3] = sVar6;
    puVar7[4] = *(short *)(param_1 + 1) + *(short *)(iVar8 + 6);
    puVar7[5] = *(undefined2 *)(iVar8 + 8);
    puVar7[6] = local_3c._2_2_;
    puVar7[7] = -uStack56._2_2_;
    puVar7[10] = local_34._2_2_;
    puVar7[0xb] = -local_30._2_2_;
    iVar4 = *(int *)(iVar2 + 0x34);
    *(undefined2 *)(iVar4 + 4) = 0;
    *(short *)(iVar4 + 6) = (short)((uint)puVar7 >> 3);
    *(int *)(iVar2 + 0x34) = iVar4 + 8;
    *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + 1;
    uVar5 = 1;
    *(undefined4 *)(iVar2 + 0x14) = puVar7 + 0x10;
    *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
  }
  return uVar5;
}



void FUN_000217bc(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined2 uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  short sVar11;
  short sVar12;
  short *psVar13;
  undefined2 *puVar14;
  undefined4 *puVar15;
  int *piVar16;
  short *psVar17;
  int iVar18;
  
  piVar16 = DAT_000218b8;
  iVar8 = DAT_000218b4;
  sVar6 = DAT_000218a4;
  sVar11 = *DAT_000218ac + *(short *)(param_1 + 0x1a) + DAT_000218a4;
  sVar12 = *DAT_000218ac + *(short *)(param_1 + 0x1a) + *DAT_000218b0 + DAT_000218a4;
  sVar4 = DAT_000218ac[1];
  sVar1 = *(short *)(param_1 + 0x1c);
  sVar5 = DAT_000218ac[1];
  sVar2 = *(short *)(param_1 + 0x1c);
  sVar3 = DAT_000218b0[1];
  puVar15 = (undefined4 *)(DAT_000218b4 + 0x14);
  puVar14 = (undefined2 *)*puVar15;
  *puVar14 = DAT_000218a6;
  puVar14[2] = *(undefined2 *)(*piVar16 + 10);
  puVar14[3] = *(short *)(param_1 + 0x14) + *(short *)(*piVar16 + 6);
  puVar14[4] = *(short *)(param_1 + 0x14) + *(short *)(*piVar16 + 2);
  puVar14[5] = *(undefined2 *)(*piVar16 + 8);
  puVar14[6] = sVar11;
  puVar14[7] = -((-sVar1 - sVar4) + 0x70);
  puVar14[10] = sVar12;
  puVar14[0xb] = -(((-sVar2 - sVar5) - sVar3) + 0x70);
  iVar18 = *(int *)(iVar8 + 0x34);
  *(undefined2 *)(iVar18 + 4) = 0;
  psVar17 = DAT_000218c0;
  piVar16 = DAT_000218bc;
  *(short *)(iVar18 + 6) = (short)((uint)puVar14 >> 3);
  uVar7 = DAT_000218a8;
  *(int *)(iVar8 + 0x34) = iVar18 + 8;
  piVar9 = DAT_000218c4;
  *(int *)(iVar8 + 0x30) = *(int *)(iVar8 + 0x30) + 1;
  *puVar15 = puVar14 + 0x10;
  psVar13 = psVar17 + 4;
  *(int *)(iVar8 + 0x20) = *(int *)(iVar8 + 0x20) + 1;
  for (; piVar10 = DAT_00021af0, psVar17 <= psVar13; psVar17 = psVar17 + 2) {
    sVar3 = *(short *)(param_1 + 0x1a);
    sVar1 = *psVar17;
    sVar4 = psVar17[1];
    sVar2 = *(short *)(param_1 + 0x1c);
    puVar14 = *(undefined2 **)(undefined4 *)(iVar8 + 0x14);
    *puVar14 = uVar7;
    puVar14[2] = *(undefined2 *)(*piVar16 + 10);
    puVar14[3] = *(short *)(*piVar16 + 6) + *(short *)(*(int *)(*(int *)(*piVar9 + 0xc) + 4) + 4);
    puVar14[4] = *(short *)(*piVar16 + 2) + *(short *)(*(int *)(*(int *)(*piVar9 + 0xc) + 4) + 4);
    puVar14[5] = *(undefined2 *)(*piVar16 + 8);
    puVar14[6] = sVar1 + sVar3 + sVar6;
    puVar14[7] = -((-sVar2 - sVar4) + 0x70);
    iVar18 = *(int *)(iVar8 + 0x34);
    *(undefined2 *)(iVar18 + 4) = 0;
    *(short *)(iVar18 + 6) = (short)((uint)puVar14 >> 3);
    *(int *)(iVar8 + 0x34) = iVar18 + 8;
    piVar16 = piVar16 + 1;
    *(int *)(iVar8 + 0x30) = *(int *)(iVar8 + 0x30) + 1;
    *(undefined4 *)(iVar8 + 0x14) = puVar14 + 0x10;
    *(int *)(iVar8 + 0x20) = *(int *)(iVar8 + 0x20) + 1;
  }
  sVar3 = *(short *)(param_1 + 0x16);
  sVar1 = *DAT_00021aec;
  sVar4 = DAT_00021aec[1];
  sVar2 = *(short *)(param_1 + 0x18);
  puVar14 = *(undefined2 **)(undefined4 *)(iVar8 + 0x14);
  *puVar14 = uVar7;
  puVar14[2] = *(undefined2 *)(*piVar10 + 10);
  puVar14[3] = *(short *)(*piVar10 + 6) + *(short *)(*(int *)(*(int *)(*piVar9 + 0xc) + 4) + 4);
  puVar14[4] = *(short *)(*piVar10 + 2) + *(short *)(*(int *)(*(int *)(*piVar9 + 0xc) + 4) + 4);
  puVar14[5] = *(undefined2 *)(*piVar10 + 8);
  puVar14[6] = sVar1 + sVar3 + sVar6;
  puVar14[7] = -((-sVar2 - sVar4) + 0x70);
  iVar18 = *(int *)(iVar8 + 0x34);
  *(undefined2 *)(iVar18 + 4) = 0;
  *(short *)(iVar18 + 6) = (short)((uint)puVar14 >> 3);
  *(int *)(iVar8 + 0x34) = iVar18 + 8;
  *(int *)(iVar8 + 0x30) = *(int *)(iVar8 + 0x30) + 1;
  *(undefined4 *)(iVar8 + 0x14) = puVar14 + 0x10;
  *(int *)(iVar8 + 0x20) = *(int *)(iVar8 + 0x20) + 1;
  piVar16 = DAT_00021af8;
  sVar3 = *(short *)(param_1 + 0x16);
  sVar1 = *DAT_00021af4;
  sVar4 = DAT_00021af4[1];
  sVar2 = *(short *)(param_1 + 0x18);
  puVar14 = *(undefined2 **)(undefined4 *)(iVar8 + 0x14);
  *puVar14 = uVar7;
  puVar14[2] = *(undefined2 *)(*piVar16 + 10);
  puVar14[3] = *(short *)(*piVar16 + 6) + *(short *)(*(int *)(*(int *)(*piVar9 + 0xc) + 4) + 4);
  puVar14[4] = *(short *)(*piVar16 + 2) + *(short *)(*(int *)(*(int *)(*piVar9 + 0xc) + 4) + 4);
  puVar14[5] = *(undefined2 *)(*piVar16 + 8);
  puVar14[6] = sVar1 + sVar3 + sVar6;
  puVar14[7] = -((-sVar2 - sVar4) + 0x70);
  iVar18 = *(int *)(iVar8 + 0x34);
  *(undefined2 *)(iVar18 + 4) = 0;
  *(short *)(iVar18 + 6) = (short)((uint)puVar14 >> 3);
  *(int *)(iVar8 + 0x34) = iVar18 + 8;
  *(int *)(iVar8 + 0x30) = *(int *)(iVar8 + 0x30) + 1;
  *(undefined4 *)(iVar8 + 0x14) = puVar14 + 0x10;
  *(int *)(iVar8 + 0x20) = *(int *)(iVar8 + 0x20) + 1;
  return;
}



uint FUN_00021a9a(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  undefined2 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  byte bVar15;
  short sVar14;
  int extraout_r2;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int extraout_r3_02;
  undefined2 *puVar16;
  undefined2 *puVar17;
  int *piVar18;
  uint uVar19;
  int iVar20;
  undefined2 *local_38;
  
  iVar20 = 0;
  uVar19 = 0;
  bVar5 = false;
  bVar6 = false;
  local_38 = DAT_00021afc;
  iVar11 = (*DAT_00021b00)(0x1e);
  bVar4 = 0xe < iVar11;
  iVar12 = (*DAT_00021b00)();
  pcVar7 = DAT_00021b04;
  for (iVar11 = 5; 3 < iVar11; iVar11 = iVar11 + -4) {
    (*pcVar7)();
    uVar13 = (*DAT_00021c08)();
    if ((*(uint *)(DAT_00021c06 + extraout_r3) & uVar13) == 0) {
      *(undefined *)(param_1 + 1 + iVar11) = 0;
    }
    else {
      iVar20 = iVar11 + 1;
      *(undefined *)(param_1 + 1 + iVar11) = 1;
      uVar19 = uVar19 + 1;
    }
    (*pcVar7)();
    uVar13 = (*DAT_00021c08)();
    if ((*(uint *)(DAT_00021c06 + extraout_r3_00) & uVar13) == 0) {
      *(undefined *)(param_1 + 1 + iVar11 + -1) = 0;
    }
    else {
      *(undefined *)(param_1 + 1 + iVar11 + -1) = 1;
      uVar19 = uVar19 + 1;
      iVar20 = iVar11;
    }
    (*pcVar7)();
    uVar13 = (*DAT_00021c08)();
    if ((*(uint *)(DAT_00021c06 + extraout_r3_01) & uVar13) == 0) {
      *(undefined *)(param_1 + 1 + iVar11 + -2) = 0;
    }
    else {
      iVar20 = iVar11 + -1;
      *(undefined *)(param_1 + 1 + iVar11 + -2) = 1;
      uVar19 = uVar19 + 1;
    }
    (*pcVar7)();
    uVar13 = (*DAT_00021c08)();
    if ((*(uint *)(DAT_00021c06 + extraout_r3_02) & uVar13) == 0) {
      *(undefined *)(param_1 + 1 + iVar11 + -3) = 0;
    }
    else {
      iVar20 = iVar11 + -2;
      *(undefined *)(param_1 + 1 + iVar11 + -3) = 1;
      uVar19 = uVar19 + 1;
    }
  }
  for (; -1 < iVar11; iVar11 = iVar11 + -1) {
    (*pcVar7)();
    uVar13 = (*DAT_00021c08)();
    if ((*(uint *)(DAT_00021c06 + extraout_r2) & uVar13) == 0) {
      *(undefined *)(param_1 + 1 + iVar11) = 0;
    }
    else {
      iVar20 = iVar11 + 1;
      *(undefined *)(param_1 + 1 + iVar11) = 1;
      uVar19 = uVar19 + 1;
    }
  }
  if (uVar19 != 0) {
    if (uVar19 == 1) {
      *(char *)(param_1 + 0xd) = (char)DAT_00021c6c + (char)iVar20;
      iVar11 = (*pcVar7)();
      uVar19 = ((int)*(char *)(param_1 + 0xd) & 0xffU) * 2;
      bVar5 = bVar4;
      if (0x78 < *(short *)((int)DAT_00021c6e + *(int *)(*(int *)(iVar11 + 0x10) + 0x18) + uVar19))
      {
        bVar6 = true;
      }
    }
    else if ((((uVar19 == 2) || (uVar19 == 3)) || (uVar19 == 4)) || ((uVar19 == 5 || (uVar19 == 6)))
            ) {
      while (*(char *)(param_1 + 1 + ((int)*(char *)(param_1 + 0xd) & 0xffU)) == '\0') {
        bVar15 = *(char *)(param_1 + 0xd) + 1;
        *(byte *)(param_1 + 0xd) = bVar15;
        if (5 < bVar15) {
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + -6;
        }
      }
      if (*(char *)(param_1 + 1 + ((int)*(char *)(param_1 + 0xd) & 0xffU)) == '\x01') {
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xd);
        iVar20 = ((int)*(char *)(param_1 + 0xd) & 0xffU) + 1;
        if ((iVar12 == 0x1d) &&
           (bVar15 = *(char *)(param_1 + 0xd) + 1, *(byte *)(param_1 + 0xd) = bVar15, 5 < bVar15)) {
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + -6;
        }
      }
      iVar11 = (*pcVar7)();
      uVar19 = ((int)*(char *)(param_1 + 0xe) & 0xffU) * 2;
      bVar5 = bVar4;
      if (0x78 < *(short *)((int)DAT_00021db2 + *(int *)(*(int *)(iVar11 + 0x10) + 0x18) + uVar19))
      {
        bVar6 = true;
      }
    }
  }
  if (!bVar5) {
    if ((bVar6) && (iVar11 = (*DAT_00021db8)(), iVar11 != 0)) {
      local_38 = DAT_00021dbc;
    }
    puVar9 = DAT_00021dc8;
    uVar8 = DAT_00021db6;
    sVar14 = *(short *)(param_1 + 0x16) + *DAT_00021dc0 + *DAT_00021dc4 + DAT_00021db4;
    sVar3 = DAT_00021dc0[1];
    sVar1 = *(short *)(param_1 + 0x18);
    sVar2 = DAT_00021dc4[1];
    puVar16 = (undefined2 *)*DAT_00021dc8;
    puVar17 = (undefined2 *)DAT_00021dc8[4];
    DAT_00021dc8[4] = puVar17 + 4;
    *puVar16 = uVar8;
    piVar10 = DAT_00021dd0;
    piVar18 = (int *)(iVar20 * 4 + DAT_00021dcc);
    puVar16[2] = *(ushort *)(*piVar18 + 10) | 4;
    puVar16[3] = *(short *)(*(int *)(*(int *)(*piVar10 + 0xc) + 4) + 4) + *(short *)(*piVar18 + 6);
    puVar16[4] = *(short *)(*piVar18 + 2) + *(short *)(*(int *)(*(int *)(*piVar10 + 0xc) + 4) + 4);
    puVar16[5] = *(undefined2 *)(*piVar18 + 8);
    puVar16[6] = sVar14;
    puVar16[7] = -(((-sVar2 - sVar3) - sVar1) + 0x70);
    *puVar17 = *local_38;
    puVar17[1] = local_38[1];
    puVar17[2] = local_38[2];
    puVar17[3] = local_38[3];
    puVar16[0xe] = (short)((uint)puVar17 >> 3);
    iVar20 = puVar9[8];
    *(undefined2 *)(iVar20 + 4) = 0;
    uVar19 = (uint)puVar16 >> 3;
    *(short *)(iVar20 + 6) = (short)uVar19;
    puVar9[8] = iVar20 + 8;
    puVar9[7] = puVar9[7] + 1;
    *puVar9 = puVar16 + 0x10;
    puVar9[3] = puVar9[3] + 1;
  }
  return uVar19;
}



void FUN_00021e76(uint param_1,short *param_2,undefined2 *param_3,uint param_4)

{
  short sVar1;
  undefined2 uVar2;
  bool bVar3;
  ushort uVar4;
  int *piVar5;
  int iVar6;
  undefined2 uVar7;
  int iVar8;
  byte bVar10;
  undefined4 uVar9;
  undefined4 uVar11;
  short sVar12;
  undefined4 *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  int iVar16;
  short sStack54;
  short sStack50;
  
  sVar12 = *param_2;
  sVar1 = param_2[1];
  bVar3 = false;
  if (param_4 <= (param_1 & 0xffff)) {
    param_1 = DAT_00021ec4 + param_4;
  }
  iVar8 = (*DAT_00021ec8)(param_1);
  iVar6 = DAT_00021ed0;
  piVar5 = DAT_00021ecc;
  uVar4 = DAT_00021eba;
  while (iVar8 != 0) {
    bVar10 = (*DAT_00022024)();
    uVar9 = (*DAT_00022028)();
    iVar8 = (*DAT_00022024)(uVar9);
    uVar7 = DAT_00022022;
    if (((bVar3) || (bVar10 != 0)) || (iVar8 == 0)) {
      puVar13 = (undefined4 *)((uint)bVar10 * 0xc + DAT_0002202c);
      uVar11 = *puVar13;
      uVar9 = puVar13[1];
      uVar2 = *(undefined2 *)(puVar13 + 2);
      puVar14 = *(undefined2 **)(undefined4 *)(iVar6 + 0x14);
      puVar15 = *(undefined2 **)(iVar6 + 0x24);
      *(undefined2 **)(iVar6 + 0x24) = puVar15 + 4;
      *puVar14 = uVar7;
      puVar14[2] = uVar4 | 4;
      sStack50 = (short)uVar9;
      puVar14[3] = *(short *)(*(int *)(*(int *)(*piVar5 + 0xc) + 4) + 4) + sStack50;
      sStack54 = (short)uVar11;
      puVar14[4] = sStack54 + *(short *)(*(int *)(*(int *)(*piVar5 + 0xc) + 4) + 4);
      puVar14[5] = uVar2;
      puVar14[6] = sVar12;
      puVar14[7] = -sVar1;
      *puVar15 = *param_3;
      puVar15[1] = param_3[1];
      puVar15[2] = param_3[2];
      puVar15[3] = param_3[3];
      puVar14[0xe] = (short)((uint)puVar15 >> 3);
      iVar16 = *(int *)(iVar6 + 0x34);
      *(undefined2 *)(iVar16 + 4) = 0;
      *(short *)(iVar16 + 6) = (short)((uint)puVar14 >> 3);
      *(int *)(iVar6 + 0x34) = iVar16 + 8;
      bVar3 = true;
      *(int *)(iVar6 + 0x30) = *(int *)(iVar6 + 0x30) + 1;
      *(undefined4 *)(iVar6 + 0x14) = puVar14 + 0x10;
      *(int *)(iVar6 + 0x20) = *(int *)(iVar6 + 0x20) + 1;
    }
    sVar12 = sVar12 + 5;
  }
  return;
}



undefined4
FUN_00021fdc(int param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4,undefined param_5
            )

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*DAT_00022034)(param_1,DAT_00022030,0x20);
  *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(*(int *)(param_1 + 4) + 4);
  *puVar1 = param_2;
  *(undefined2 *)(puVar1 + 1) = *param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  *(undefined *)(puVar1 + 7) = param_5;
  puVar1[6] = 0;
  return 0x1c;
}



undefined4 FUN_00022270(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_00022504;
  iVar2 = (*DAT_00022504)(0,8);
  if (((((iVar2 == 0) && (iVar2 = (*pcVar1)(0,9), iVar2 == 0)) &&
       (iVar2 = (*pcVar1)(0x10,0), iVar2 == 0)) &&
      ((((iVar2 = (*pcVar1)(0x12,0), iVar2 == 0 && (iVar2 = (*pcVar1)(0x11,0), iVar2 == 0)) &&
        ((iVar2 = (*pcVar1)(0x13,0), iVar2 == 0 &&
         ((iVar2 = (*pcVar1)(4,0), iVar2 == 0 && (iVar2 = (*pcVar1)(5,4), iVar2 == 0)))))) &&
       ((iVar2 = (*pcVar1)(5), iVar2 == 0 &&
        ((((iVar2 = (*pcVar1)(5,8), iVar2 == 0 && (iVar2 = (*pcVar1)(0x14,0), iVar2 == 0)) &&
          (iVar2 = (*pcVar1)(6,0xc), iVar2 == 0)) &&
         ((iVar2 = (*pcVar1)(0x16,0), iVar2 == 0 && (iVar2 = (*pcVar1)(7,5), iVar2 == 0)))))))))) &&
     (((iVar2 = (*pcVar1)(7,6), iVar2 == 0 &&
       ((iVar2 = (*pcVar1)(0x17,0), iVar2 == 0 && (iVar2 = (*pcVar1)(8,1), iVar2 == 0)))) &&
      (((iVar2 = (*pcVar1)(8,2), iVar2 == 0 &&
        ((((iVar2 = (*pcVar1)(8,3), iVar2 == 0 && (iVar2 = (*pcVar1)(8,4), iVar2 == 0)) &&
          (iVar2 = (*pcVar1)(8,5), iVar2 == 0)) &&
         (((iVar2 = (*pcVar1)(8), iVar2 == 0 && (iVar2 = (*pcVar1)(9,0), iVar2 == 0)) &&
          ((iVar2 = (*pcVar1)(9,4), iVar2 == 0 &&
           ((iVar2 = (*pcVar1)(0x18,0), iVar2 == 0 && (iVar2 = (*pcVar1)(10,0), iVar2 == 0))))))))))
       && ((((iVar2 = (*pcVar1)(10,2), iVar2 == 0 &&
             ((((((iVar2 = (*pcVar1)(10,5), iVar2 == 0 && (iVar2 = (*pcVar1)(10,7), iVar2 == 0)) &&
                 (iVar2 = (*pcVar1)(10), iVar2 == 0)) &&
                (((iVar2 = (*pcVar1)(0x19,0), iVar2 == 0 && (iVar2 = (*pcVar1)(0xb,0), iVar2 == 0))
                 && ((iVar2 = (*pcVar1)(0xb,1), iVar2 == 0 &&
                     ((iVar2 = (*pcVar1)(0xb,2), iVar2 == 0 &&
                      (iVar2 = (*pcVar1)(0xb,3), iVar2 == 0)))))))) &&
               (iVar2 = (*pcVar1)(0xb,4), iVar2 == 0)) &&
              ((((((iVar2 = (*pcVar1)(0xb,5), iVar2 == 0 && (iVar2 = (*pcVar1)(0xb,6), iVar2 == 0))
                  && (iVar2 = (*pcVar1)(0xb,7), iVar2 == 0)) &&
                 ((iVar2 = (*pcVar1)(0x1a,0), iVar2 == 0 && (iVar2 = (*pcVar1)(6,0xd), iVar2 == 0)))
                 ) && (iVar2 = (*pcVar1)(0xc,6), iVar2 == 0)) &&
               ((iVar2 = (*pcVar1)(0xc,7), iVar2 == 0 && (iVar2 = (*pcVar1)(0xe,0), iVar2 == 0))))))
             )) && (((iVar2 = (*pcVar1)(0xe,1), iVar2 == 0 &&
                     (((iVar2 = (*pcVar1)(0xe,2), iVar2 == 0 &&
                       (iVar2 = (*pcVar1)(0xd,0), iVar2 == 0)) &&
                      (iVar2 = (*pcVar1)(0xd,1), iVar2 == 0)))) &&
                    (((iVar2 = (*pcVar1)(0xd,2), iVar2 == 0 &&
                      (iVar2 = (*pcVar1)(0xd,3), iVar2 == 0)) &&
                     (iVar2 = (*pcVar1)(0xd,4), iVar2 == 0)))))) &&
           (iVar2 = (*pcVar1)(0xd,5), iVar2 == 0)))))))) {
    return 0;
  }
  return 1;
}



uint FUN_00022508(short *param_1,int param_2)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  code *pcVar4;
  short sVar8;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar9;
  
  iVar6 = DAT_000225d8;
  iVar9 = *DAT_000225d4;
  sVar2 = *(short *)(DAT_000225d8 + DAT_000225c0);
  sVar8 = (*DAT_000225e0)((int)*(short *)((short)((short)param_2 * 0xc) + DAT_000225dc));
  pcVar4 = DAT_000225e4;
  bVar3 = sVar2 < sVar8;
  iVar5 = (*DAT_000225e4)();
  if (*(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_000225c2) < '\x02') {
    if (((param_2 == DAT_000225c4) || (param_2 == DAT_000225c6)) || (param_2 == DAT_000225c8)) {
      iVar5 = (*pcVar4)();
      bVar3 = *(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_000225c2) == '\0' || bVar3;
      if (*(short *)(iVar6 + DAT_000225cc) == *(short *)(iVar6 + DAT_000225ce)) {
        bVar3 = true;
      }
    }
    else if (param_2 == DAT_000225ca) {
      iVar5 = (*pcVar4)();
      bVar3 = *(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_000225c2) == '\0' || bVar3;
      iVar5 = (*pcVar4)();
      if ((*(uint *)((int)DAT_000225d0 + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 0x7f) == 0) {
        bVar3 = true;
      }
    }
    else {
      bVar3 = true;
    }
  }
  cVar1 = *(char *)(iVar6 + DAT_0002260a);
  switch(param_2 - DAT_0002260c) {
  case 0:
  case 0xf:
  case 0x11:
    iVar6 = (*pcVar4)();
    uVar7 = (uint)DAT_000227e6;
    if (((int)DAT_000227e4 & *(uint *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x18) + uVar7)) != 0) {
      bVar3 = true;
    }
    break;
  default:
    iVar6 = (*pcVar4)();
    uVar7 = (uint)DAT_000227e8;
    if (*(short *)(*(int *)(*(int *)(iVar6 + 0x10) + 0xc) + uVar7) == 0) {
      bVar3 = true;
    }
    break;
  case 6:
    if ((cVar1 != '\x06') && (*(int *)(iVar9 + 0x1c) != 2)) {
      bVar3 = true;
    }
    iVar6 = (*pcVar4)();
    if (*(char *)((int)DAT_00022728 + *(int *)(*(int *)(iVar6 + 0x10) + 4)) != '\x03') {
      bVar3 = true;
    }
    iVar6 = (*pcVar4)();
    uVar7 = *(uint *)((int)DAT_0002272a + *(int *)(*(int *)(iVar6 + 0x10) + 0x18));
    if ((uVar7 & 0x80) != 0) {
      bVar3 = true;
    }
    break;
  case 0x16:
  case 0x17:
  case 0x18:
    uVar7 = (uint)DAT_000227e2;
    if (*(short *)(iVar6 + DAT_000227e0) == *(short *)(iVar6 + uVar7)) {
      bVar3 = true;
    }
    break;
  case 0x19:
    iVar6 = (*pcVar4)();
    uVar7 = *(uint *)((int)DAT_000227e6 + *(int *)(*(int *)(iVar6 + 0x10) + 0x18));
    if ((uVar7 & 0x7f) == 0) {
      bVar3 = true;
    }
    break;
  case 0x1a:
    if ((cVar1 != '\x06') && (*(int *)(iVar9 + 0x1c) != 4)) {
      bVar3 = true;
    }
    iVar5 = (*pcVar4)();
    if (*(char *)((int)DAT_00022728 + *(int *)(*(int *)(iVar5 + 0x10) + 4)) != '\x03') {
      bVar3 = true;
    }
    uVar7 = (uint)DAT_00022730;
    if (*(short *)(iVar6 + DAT_0002272e) == *(short *)(iVar6 + uVar7)) {
      bVar3 = true;
    }
    break;
  case 0x1b:
    if ((cVar1 != '\x06') && (*(int *)(iVar9 + 0x1c) != 1)) {
      bVar3 = true;
    }
    iVar6 = (*pcVar4)();
    if (*(char *)((int)DAT_00022728 + *(int *)(*(int *)(iVar6 + 0x10) + 4)) != '\x03') {
      bVar3 = true;
    }
    iVar6 = (*pcVar4)();
    uVar7 = (uint)DAT_0002272a;
    if (((int)DAT_0002272c & *(uint *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x18) + uVar7)) != 0) {
      bVar3 = true;
    }
    break;
  case 0x1c:
    if ((cVar1 != '\x06') && (*(int *)(iVar9 + 0x1c) != 3)) {
      bVar3 = true;
    }
    iVar6 = (*pcVar4)();
    if (*(char *)((int)DAT_00022728 + *(int *)(*(int *)(iVar6 + 0x10) + 4)) != '\x03') {
      bVar3 = true;
    }
    iVar6 = (*pcVar4)();
    uVar7 = (int)DAT_00022732 - 0x40;
    if (((int)DAT_00022732 & *(uint *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x18) + uVar7)) != 0) {
      bVar3 = true;
    }
    break;
  case 0x1d:
    uVar7 = FUN_00022270();
    if (uVar7 != 0) {
      bVar3 = true;
    }
    break;
  case 0x1e:
    if ((cVar1 != '\x06') && (*(int *)(iVar9 + 0x1c) != 0)) {
      bVar3 = true;
    }
    iVar5 = (*pcVar4)();
    if (*(char *)((int)DAT_000227de + *(int *)(*(int *)(iVar5 + 0x10) + 4)) != '\x03') {
      bVar3 = true;
    }
    uVar7 = (uint)DAT_000227e2;
    if (*(short *)(iVar6 + DAT_000227e0) == *(short *)(iVar6 + uVar7)) {
      bVar3 = true;
    }
  }
  *param_1 = (short)param_2;
  if (!bVar3) {
    uVar7 = 0;
    param_1[1] = 0;
  }
  return uVar7;
}



uint FUN_000227ea(undefined2 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = false;
  uVar3 = (uint)(short)(&switchD_00022828::switchdataD_0002283c)[param_2 + -1];
  switch(param_2 + -1) {
  case 0:
  case 1:
  case 2:
    iVar2 = (*DAT_00022838)();
    uVar3 = (uint)DAT_00022abc;
    if (*(short *)(*(int *)(*(int *)(iVar2 + 0x10) + 0xc) + uVar3) < 1) {
      bVar1 = true;
    }
    break;
  case 3:
    uVar3 = FUN_00022270();
    if (uVar3 != 0) {
      bVar1 = true;
    }
    break;
  case 4:
  case 0x25:
  case 0x26:
  case 0x27:
    if (*(short *)(DAT_00022834 + DAT_0002282c) == *(short *)(DAT_00022834 + DAT_0002282e)) {
      bVar1 = true;
    }
    break;
  case 5:
  case 0x28:
  case 0x29:
  case 0x2a:
    if (*(short *)(DAT_00022834 + DAT_00022830) == *(short *)(DAT_00022834 + DAT_00022832)) {
      bVar1 = true;
    }
    break;
  case 0x2b:
    if ((*(short *)(DAT_00022834 + DAT_0002282c) == *(short *)(DAT_00022834 + DAT_0002282e)) &&
       (*(short *)(DAT_00022834 + DAT_00022830) == *(short *)(DAT_00022834 + DAT_00022832))) {
      bVar1 = true;
    }
    break;
  case 0x2c:
    iVar2 = (*DAT_00022838)();
    uVar3 = (uint)DAT_000229a0;
    if ((*(uint *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x18) + uVar3) & 1) == 0) {
      bVar1 = true;
    }
    break;
  case 0x2d:
    iVar2 = (*DAT_00022838)();
    uVar3 = *(uint *)((int)DAT_000229a0 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18));
    if ((uVar3 & 2) == 0) {
      bVar1 = true;
    }
    break;
  case 0x2e:
    iVar2 = (*DAT_00022838)();
    uVar3 = *(uint *)((int)DAT_000229a0 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18));
    if ((uVar3 & 0x7f) == 0) {
      bVar1 = true;
    }
    break;
  case 0x2f:
    iVar2 = (*DAT_00022838)();
    uVar3 = (uint)DAT_000229a0;
    if (((int)DAT_000229a2 & *(uint *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x18) + uVar3)) != 0) {
      bVar1 = true;
    }
    break;
  case 0x30:
    iVar2 = (*DAT_00022838)();
    uVar3 = *(uint *)((int)DAT_000229a0 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18));
    if ((uVar3 & 0x80) != 0) {
      bVar1 = true;
    }
    break;
  case 0x31:
    iVar2 = (*DAT_00022838)();
    uVar3 = (uint)DAT_00022ab8;
    if (((int)DAT_00022ab6 & *(uint *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x18) + uVar3)) != 0) {
      bVar1 = true;
    }
    break;
  case 0x32:
    iVar2 = (*DAT_00022838)();
    uVar3 = (int)DAT_00022aba - 0x40;
    if (((int)DAT_00022aba & *(uint *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x18) + uVar3)) != 0) {
      bVar1 = true;
    }
    break;
  case 0x33:
    iVar2 = (*DAT_00022838)();
    uVar3 = *(uint *)((int)DAT_000229a0 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18));
    if ((uVar3 & 4) == 0) {
      bVar1 = true;
    }
    break;
  case 0x34:
    iVar2 = (*DAT_00022838)();
    uVar3 = *(uint *)((int)DAT_000229a0 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18));
    if ((uVar3 & 8) == 0) {
      bVar1 = true;
    }
    break;
  case 0x35:
    iVar2 = (*DAT_00022838)();
    uVar3 = *(uint *)((int)DAT_000229a0 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18));
    if ((uVar3 & 0x10) == 0) {
      bVar1 = true;
    }
    break;
  case 0x36:
    iVar2 = (*DAT_00022838)();
    uVar3 = *(uint *)((int)DAT_000229a0 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18));
    if ((uVar3 & 0x20) == 0) {
      bVar1 = true;
    }
  }
  *param_1 = (short)param_2;
  if (!bVar1) {
    uVar3 = 0;
    param_1[1] = 0;
  }
  return uVar3;
}



int FUN_00022fc4(undefined4 param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  
  iVar5 = 0;
  if (param_2 == 2) {
    iVar3 = 0;
    do {
      if (iVar3 < 0x4d) {
        bVar2 = *(byte *)(iVar3 + DAT_00023080);
      }
      else {
        bVar2 = *(byte *)(DAT_00023088 + (DAT_0002307a + iVar3 & 7U)) &
                *(byte *)(((uint)(DAT_0002307a + iVar3) >> 3) + DAT_00023084);
      }
      if ((bVar2 != 0) &&
         (((cVar1 = *(char *)((short)((short)iVar3 * 0xc) + DAT_0002307c + 1), cVar1 == '\x06' ||
           (cVar1 == '\a')) || (cVar1 == '\b')))) {
        iVar5 = iVar5 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x38);
  }
  else if (param_2 == 3) {
    for (puVar8 = DAT_0002308c; puVar8 < DAT_0002308c + 6; puVar8 = puVar8 + 1) {
      uVar7 = *puVar8;
      uVar6 = uVar7 + 0x28;
      uVar4 = uVar7;
      for (; uVar7 < uVar6; uVar7 = uVar7 + 8) {
        if (*(short *)(uVar7 + 6) != 0) {
          iVar3 = (int)*(short *)(uVar4 + 6);
          if (iVar3 < 0x4d) {
            bVar2 = *(byte *)(*(short *)(uVar4 + 6) + DAT_00023080);
          }
          else {
            bVar2 = *(byte *)(DAT_0002312c + (DAT_00023124 + iVar3 & 7U)) &
                    *(byte *)(((uint)(DAT_00023124 + iVar3) >> 3) + DAT_00023128);
          }
          if (bVar2 != 0) {
            iVar5 = iVar5 + 1;
          }
        }
        uVar4 = uVar4 + 8;
      }
    }
  }
  else if (param_2 == 4) {
    iVar3 = 0x39;
    do {
      if (iVar3 < 0x4d) {
        bVar2 = *(byte *)(iVar3 + DAT_00023130);
      }
      else {
        bVar2 = *(byte *)(DAT_0002312c + (DAT_00023124 + iVar3 & 7U)) &
                *(byte *)(((uint)(DAT_00023124 + iVar3) >> 3) + DAT_00023128);
      }
      if ((bVar2 != 0) &&
         (((cVar1 = *(char *)((short)((short)iVar3 * 0xc) + DAT_0002307c + 1), cVar1 == '\x03' ||
           (cVar1 == '\x04')) || (cVar1 == '\x05')))) {
        iVar5 = iVar5 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x42);
  }
  return iVar5;
}



int FUN_00023134(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  code *pcVar5;
  
  pcVar5 = DAT_00023204;
  iVar4 = (*DAT_00023204)();
  iVar4 = (int)*(short *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x20) + 0x18);
  if (iVar4 != -0x18) {
    return iVar4;
  }
  (*DAT_00023208)(6,0x17,0x20,2);
  (*DAT_0002320c)(1);
  puVar3 = DAT_00023210;
  DAT_00023210[7] = *DAT_00023210;
  *puVar3 = 0;
  cVar1 = *param_1;
  cVar2 = *DAT_00023214;
  if (cVar1 == '\0') {
    iVar4 = (*pcVar5)();
    if (*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_00023200) < '\x01') {
      pcVar5 = (code *)0x1d;
    }
    else {
      pcVar5 = (code *)0x15;
    }
    goto LAB_000232be;
  }
  if (cVar1 == '\x01') {
    iVar4 = (*pcVar5)();
    if ((*(uint *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + (int)DAT_00023202) & 1) == 0) {
      iVar4 = (*pcVar5)();
      if (*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_00023200) < '\x01') {
        pcVar5 = (code *)0x1d;
      }
      else {
        pcVar5 = (code *)&LAB_00000016;
      }
      goto LAB_000232be;
    }
  }
  else {
    if (cVar1 == '\x02') {
      iVar4 = FUN_00022fc4(param_1,(int)*param_1);
      if (iVar4 < 1) {
        pcVar5 = (code *)0x19;
      }
      else {
        iVar4 = (*pcVar5)();
        if (*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_00023200) < '\x01') {
          pcVar5 = (code *)0x1d;
        }
        else {
          pcVar5 = (code *)0x11;
        }
      }
      goto LAB_000232be;
    }
    if (cVar1 == '\x03') {
      if ((cVar2 == '\b') || (iVar4 = FUN_00022fc4(param_1,(int)*param_1), iVar4 < 1)) {
        pcVar5 = (code *)0x1a;
        goto LAB_000232be;
      }
      iVar4 = (*pcVar5)();
      if ((*(uint *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + (int)DAT_000232e8) & 1) == 0) {
        iVar4 = (*pcVar5)();
        if (*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_000232ea) < '\x01') {
          pcVar5 = (code *)0x1d;
        }
        else {
          pcVar5 = (code *)0x12;
        }
        goto LAB_000232be;
      }
    }
    else {
      if (cVar1 == '\x04') {
        iVar4 = FUN_00022fc4(param_1,(int)*param_1);
        if (iVar4 < 1) {
          pcVar5 = (code *)0x1b;
        }
        else {
          iVar4 = (*pcVar5)();
          if (*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_000232ea) < '\x01') {
            pcVar5 = (code *)0x1d;
          }
          else {
            pcVar5 = (code *)0x13;
          }
        }
        goto LAB_000232be;
      }
      if (cVar1 != '\x05') goto LAB_000232be;
      if ((cVar2 == '\0') || (cVar2 == '\x06')) {
        pcVar5 = (code *)0x17;
        goto LAB_000232be;
      }
      if (cVar2 == '\b') {
        pcVar5 = (code *)0x18;
        goto LAB_000232be;
      }
      iVar4 = (*pcVar5)();
      if ((*(uint *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + (int)DAT_000232e8) & 1) == 0) {
        iVar4 = (*pcVar5)();
        if (*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_000232ea) < '\x01') {
          pcVar5 = (code *)0x1d;
        }
        else {
          pcVar5 = (code *)0x14;
        }
        goto LAB_000232be;
      }
    }
  }
  pcVar5 = (code *)&LAB_0000001c;
LAB_000232be:
  (*DAT_000232f0)(*(undefined4 *)((short)pcVar5 * 4 + DAT_000232ec));
  pcVar5 = DAT_000232f4;
  *puVar3 = puVar3[7];
  iVar4 = (*pcVar5)();
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  return iVar4;
}



void FUN_000232f8(int param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  short sVar7;
  int iVar5;
  int iVar6;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  
  pcVar4 = DAT_0002334c;
  iVar5 = DAT_00023348;
  iVar10 = (short)((short)param_1 * 0xc) + DAT_00023350;
  iVar9 = *DAT_00023344;
  cVar1 = *(char *)(iVar10 + 1);
  iVar6 = param_1;
  if (((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) {
    sVar2 = *(short *)(DAT_00023348 + DAT_00023386);
    sVar7 = (*DAT_0002338c)((int)*(short *)(iVar10 + 2));
    if (sVar2 < sVar7) {
      iVar6 = 0x4b;
    }
    switch(param_1 - DAT_00023388) {
    case 0:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x18:
      iVar10 = (*pcVar4)();
      if (*(char *)((int)DAT_00023412 + *(int *)(*(int *)(iVar10 + 0x10) + 4)) != '\x03') {
        iVar6 = 0x4c;
      }
      break;
    default:
      iVar10 = (*pcVar4)();
      if (*(char *)(*(int *)(*(int *)(iVar10 + 0x10) + 4) + (int)DAT_00023412) < '\x02') {
        iVar6 = 0x4c;
      }
      break;
    case 0xc:
      break;
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
      iVar10 = (*pcVar4)();
      if (*(char *)(*(int *)(*(int *)(iVar10 + 0x10) + 4) + (int)DAT_00023412) == '\0') {
        iVar6 = 0x4c;
      }
    }
  }
  else if ((((cVar1 == '\x03') || (cVar1 == '\x04')) || (cVar1 == '\x05')) &&
          (param_1 == *(short *)(DAT_00023348 + DAT_00023414))) {
    uVar8 = *(undefined4 *)(DAT_00023418 + 8);
    goto LAB_000237b6;
  }
  sVar11 = (short)iVar6;
  sVar2 = *(short *)(iVar5 + DAT_0002350c);
  sVar7 = *(short *)(iVar5 + DAT_0002350e);
  cVar1 = *(char *)(iVar5 + DAT_0002350e + -0xf);
  sVar3 = *(short *)(iVar5 + DAT_00023510);
  if (param_1 == 4) {
LAB_00023694:
    iVar5 = (*DAT_00023720)();
    if (iVar5 != 0) {
      sVar11 = 0x47;
    }
    goto LAB_00023778;
  }
  if (param_1 == 5) {
LAB_00023560:
    if (sVar2 == sVar7) {
      sVar11 = 0x42;
    }
  }
  else if (param_1 == 6) {
LAB_0002358a:
    if (sVar3 == *(short *)(iVar5 + DAT_00023614)) {
      sVar11 = 0x43;
    }
  }
  else {
    if (((param_1 == 0x26) || (param_1 == 0x27)) || (param_1 == 0x28)) goto LAB_00023560;
    if (((param_1 == 0x29) || (param_1 == 0x2a)) || (param_1 == 0x2b)) goto LAB_0002358a;
    if (param_1 == 0x2c) {
      if ((sVar2 == sVar7) && (sVar3 == *DAT_00023618)) {
        sVar11 = 0x46;
      }
    }
    else if (param_1 == 0x2d) {
      iVar5 = (*pcVar4)();
      if ((*(uint *)((int)DAT_00023616 + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 1) == 0) {
        sVar11 = 0x44;
      }
    }
    else if (param_1 == 0x2e) {
      iVar5 = (*pcVar4)();
      if ((*(uint *)((int)DAT_00023616 + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 2) == 0) {
        sVar11 = 0x44;
      }
    }
    else if (param_1 == 0x2f) {
LAB_0002367c:
      iVar5 = (*pcVar4)();
      if ((*(uint *)((int)DAT_00023716 + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 0x7f) == 0) {
        sVar11 = 0x44;
      }
    }
    else {
      if (param_1 == 0x30) goto LAB_000236a2;
      if (param_1 == 0x31) {
        iVar5 = (*pcVar4)();
        if ((*(uint *)((int)DAT_00023716 + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 0x80) != 0) {
          sVar11 = 0x48;
        }
      }
      else if (param_1 == 0x32) {
        iVar5 = (*pcVar4)();
        if (((int)DAT_0002381a &
            *(uint *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + (int)DAT_0002381c)) != 0) {
          sVar11 = 0x48;
        }
      }
      else if (param_1 == 0x33) {
        iVar5 = (*pcVar4)();
        if (((int)DAT_0002381e &
            *(uint *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + ((int)DAT_0002381e - 0x40U))) != 0)
        {
          sVar11 = 0x48;
        }
      }
      else if (param_1 == 0x34) {
        iVar5 = (*pcVar4)();
        if ((*(uint *)((int)DAT_00023716 + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 4) == 0) {
          sVar11 = 0x44;
        }
      }
      else if (param_1 == 0x35) {
        iVar5 = (*pcVar4)();
        if ((*(uint *)((int)DAT_00023716 + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 8) == 0) {
          sVar11 = 0x44;
        }
      }
      else if (param_1 == 0x36) {
        iVar5 = (*pcVar4)();
        if ((*(uint *)((int)DAT_00023716 + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 0x10) == 0) {
          sVar11 = 0x44;
        }
      }
      else if (param_1 == 0x37) {
        iVar5 = (*pcVar4)();
        if ((*(uint *)((int)DAT_00023716 + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 0x20) == 0) {
          sVar11 = 0x44;
        }
      }
      else if (param_1 == DAT_00023512) {
LAB_000236a2:
        iVar5 = (*pcVar4)();
        if (((int)DAT_00023718 &
            *(uint *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + (int)DAT_00023716)) != 0) {
          sVar11 = 0x48;
        }
      }
      else if (param_1 == DAT_00023514) {
        iVar6 = (*pcVar4)();
        if ((*(uint *)((int)DAT_00023716 + *(int *)(*(int *)(iVar6 + 0x10) + 0x18)) & 0x80) != 0) {
          sVar11 = 0x48;
        }
        if ((*(char *)(iVar5 + DAT_0002371a) != '\x06') && (*(int *)(iVar9 + 0x1c) != 2)) {
          sVar11 = 0x4a;
        }
      }
      else {
        if ((param_1 == DAT_00023516) || (param_1 == DAT_00023518)) goto LAB_000236a2;
        if ((param_1 == DAT_0002351a) || ((param_1 == DAT_00023604 || (param_1 == DAT_00023606))))
        goto LAB_00023560;
        if (param_1 == DAT_00023608) goto LAB_0002367c;
        if (param_1 == DAT_0002360a) {
          if (sVar3 == *(short *)(iVar5 + DAT_00023614)) {
            sVar11 = 0x43;
          }
          if ((cVar1 != '\x06') && (*(int *)(iVar9 + 0x1c) != 4)) {
            sVar11 = 0x4a;
          }
        }
        else if (param_1 == DAT_0002360c) {
          iVar6 = (*pcVar4)();
          if (((int)DAT_0002371c &
              *(uint *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x18) + (int)DAT_00023716)) != 0) {
            sVar11 = 0x48;
          }
          if ((*(char *)(iVar5 + DAT_0002371a) != '\x06') && (*(int *)(iVar9 + 0x1c) != 1)) {
            sVar11 = 0x4a;
          }
        }
        else if (param_1 == DAT_0002360e) {
          iVar6 = (*pcVar4)();
          if (((int)DAT_0002381e &
              *(uint *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x18) + ((int)DAT_0002381e - 0x40U))) != 0
             ) {
            sVar11 = 0x48;
          }
          if ((*(char *)(iVar5 + DAT_00023820) != '\x06') && (*(int *)(iVar9 + 0x1c) != 3)) {
            sVar11 = 0x4a;
          }
        }
        else {
          if (param_1 == DAT_00023610) goto LAB_00023694;
          if (param_1 == DAT_00023612) {
            if (sVar2 == sVar7) {
              sVar11 = 0x42;
            }
            if ((cVar1 != '\x06') && (*(int *)(iVar9 + 0x1c) != 0)) {
              sVar11 = 0x4a;
            }
          }
        }
      }
    }
  }
LAB_00023778:
  cVar1 = *(char *)(DAT_00023824 + (short)((short)param_1 * 0xc));
  if (((cVar1 == '\0') || (cVar1 == '\x06')) &&
     (iVar5 = (*pcVar4)(),
     *(short *)(*(int *)(*(int *)(iVar5 + 0x10) + 0xc) + (int)DAT_00023822) < 1)) {
    sVar11 = 0x45;
  }
  uVar8 = *(undefined4 *)((short)(sVar11 * 0xc) + DAT_00023828);
LAB_000237b6:
                    // WARNING: Could not recover jumptable at 0x000237c6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0002382c)(uVar8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000237dc(int param_1,uint param_2)

{
  undefined4 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  
  iVar2 = (*_DAT_00023830)();
  if (*(short *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x20) + 0x18) != -0x18) {
    return;
  }
  (*_LAB_00023833_1)(6,0x17,0x20,2);
  if (param_1 == -1) {
    (*DAT_00023838)(1);
                    // WARNING: Could not recover jumptable at 0x00023816. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_0002383c)();
    return;
  }
  (*DAT_00023948)(0);
  puVar1 = DAT_0002394c;
  DAT_0002394c[7] = *DAT_0002394c;
  *puVar1 = 0;
  if ((param_2 & 1) == 0) {
    (*DAT_00023954)(*(undefined4 *)((short)((short)param_1 * 0xc) + DAT_00023950));
  }
  else {
    FUN_000232f8(param_1);
  }
  UNRECOVERED_JUMPTABLE = DAT_00023958;
  *puVar1 = puVar1[7];
                    // WARNING: Could not recover jumptable at 0x0002387e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_0002388c(void)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = DAT_00023964;
  iVar1 = DAT_0002395c;
  *(undefined2 *)(DAT_0002395c + 0x12) = *(undefined2 *)(DAT_0002395c + 0x10);
  *(short *)(iVar1 + 0x10) = (short)PTR_FUN_00023960;
  (*pcVar2)(6,3);
  (*DAT_00023970)();
  *(undefined2 *)(iVar1 + 0x10) = *(undefined2 *)(iVar1 + 0x12);
  return;
}



void FUN_000238c4(int param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = DAT_00023974;
  if (param_2 == '\0') {
    iVar2 = (int)DAT_00023942;
    uVar3 = 4;
    *(undefined4 *)(param_1 + iVar2) = DAT_00023974;
    *(undefined4 *)(param_1 + iVar2 + 8) = 0;
    iVar2 = iVar2 + 0x14;
  }
  else {
    if (param_2 != '\x01') goto LAB_000238f8;
    uVar3 = 8;
    iVar2 = (int)DAT_00023942;
    *(undefined4 *)(param_1 + iVar2) = 0;
    *(undefined4 *)(param_1 + iVar2 + 8) = uVar1;
    iVar2 = (int)DAT_00023944;
  }
  *(undefined2 *)(param_1 + iVar2) = uVar3;
LAB_000238f8:
  (*DAT_00023978)(DAT_00023946 + param_1);
  *(short *)(param_1 + 0x14) =
       (short)((uint)(*(int *)(param_1 + DAT_00023946) + DAT_0002397c) >> 0x10);
  return;
}



void FUN_00023914(int param_1,int param_2,int param_3)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = (*DAT_00023980)();
  if (*(short *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x20) + 0x18) == -0x18) {
    if ((*(ushort *)(DAT_00023984 + 8) & 0xf0) == 0) {
      psVar2 = (short *)((*(char *)(param_3 + 3) * 5 + (int)*(char *)(param_3 + 5)) * 4 + param_2);
      if ((*(ushort *)(DAT_00023984 + 8) & 6) == 0) {
        if ((*(ushort *)(DAT_00023984 + 8) & 1) != 0) {
          *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffdf;
        }
      }
      else if ((psVar2[1] & 1U) == 0) {
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffdf;
      }
      else {
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x20;
      }
      FUN_000237dc((int)*psVar2,(*(uint *)(param_1 + 0x20) & 0x20) != 0);
      return;
    }
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffdf;
  }
  return;
}



void FUN_000239f0(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    (*DAT_00023a84)(5);
    FUN_00023134(param_1);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_00024322(char *param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  int *piVar3;
  short sVar5;
  short sVar6;
  int iVar4;
  undefined2 *puVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  
  pcVar2 = DAT_000243cc;
  uVar10 = 0;
  iVar9 = param_2 * 4;
  sVar5 = *(short *)(param_1 + 0xc) + *(short *)(param_1 + 0x14) + *(short *)(DAT_000243c8 + iVar9)
          + _DAT_000243a2;
  sVar6 = (-((short *)(DAT_000243c8 + iVar9))[1] - *(short *)(param_1 + 0xe)) + 0x70;
  if ((param_2 == 0) || (param_2 == 1)) {
    iVar4 = (*DAT_000243cc)();
    if ('\0' < *(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)_LAB_000243a3_1)) {
      uVar10 = 1;
    }
  }
  else if (param_2 == 2) {
    iVar4 = (*DAT_000244a0)(param_1,2);
    if (iVar4 < 1) {
      uVar10 = 2;
    }
    else {
      iVar4 = (*pcVar2)();
      if ('\0' < *(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0002449c)) {
        uVar10 = 1;
      }
    }
  }
  else if (param_2 == 3) {
    if (*DAT_000244a4 == '\b') {
      uVar10 = 2;
      param_1[7] = '\x01';
    }
    else {
      iVar4 = (*DAT_000244a0)(param_1,3);
      if (iVar4 < 1) {
        uVar10 = 0;
      }
      else {
        iVar4 = (*pcVar2)();
        if ('\0' < *(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0002449c)) {
          uVar10 = 1;
        }
      }
    }
  }
  else if (param_2 == 4) {
    iVar4 = (*DAT_000244a0)(param_1,4);
    if (iVar4 < 1) {
      uVar10 = 2;
      param_1[8] = '\x01';
    }
    else {
      iVar4 = (*pcVar2)();
      if ('\0' < *(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0002449c)) {
        uVar10 = 1;
      }
    }
  }
  else if (param_2 == 5) {
    iVar4 = (*DAT_000243cc)();
    uVar10 = (uint)('\0' < *(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0002449c));
    cVar1 = *DAT_000244a4;
    if (((cVar1 == '\0') || (cVar1 == '\x06')) || (cVar1 == '\b')) {
      uVar10 = 2;
      param_1[9] = '\x01';
    }
  }
  piVar3 = DAT_000244ac;
  iVar4 = DAT_000244a8;
  puVar11 = (undefined4 *)(DAT_000244a8 + 0x14);
  if (uVar10 == 0) {
    puVar7 = (undefined2 *)*puVar11;
    *puVar7 = DAT_0002449e;
    piVar8 = (int *)(DAT_00024678 + iVar9);
    puVar7[2] = *(undefined2 *)(*piVar8 + 10);
    puVar7[3] = *(short *)(*piVar8 + 6) + *(short *)(*(int *)(*(int *)(*piVar3 + 0xc) + 4) + 4);
    puVar7[4] = *(short *)(*piVar8 + 2) + *(short *)(*(int *)(*(int *)(*piVar3 + 0xc) + 4) + 4);
    puVar7[5] = *(undefined2 *)(*piVar8 + 8);
    puVar7[6] = sVar5;
    puVar7[7] = -sVar6;
    iVar9 = *(int *)(iVar4 + 0x34);
    *(undefined2 *)(iVar9 + 4) = 0;
    uVar10 = (uint)puVar7 >> 3;
    *(short *)(iVar9 + 6) = (short)uVar10;
    *(int *)(iVar4 + 0x34) = iVar9 + 8;
    *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + 1;
  }
  else {
    if (uVar10 == 1) {
      if (param_2 == *param_1) {
        puVar7 = (undefined2 *)*puVar11;
        *puVar7 = DAT_0002449e;
        piVar8 = (int *)(DAT_0002467c + iVar9);
        puVar7[2] = *(undefined2 *)(*piVar8 + 10);
        puVar7[3] = *(short *)(*piVar8 + 6) + *(short *)(*(int *)(*(int *)(*piVar3 + 0xc) + 4) + 4);
        puVar7[4] = *(short *)(*piVar8 + 2) + *(short *)(*(int *)(*(int *)(*piVar3 + 0xc) + 4) + 4);
        puVar7[5] = *(undefined2 *)(*piVar8 + 8);
        puVar7[6] = sVar5;
        puVar7[7] = -sVar6;
        iVar9 = *(int *)(iVar4 + 0x34);
        *(undefined2 *)(iVar9 + 4) = 0;
        uVar10 = (uint)puVar7 >> 3;
        *(short *)(iVar9 + 6) = (short)uVar10;
        *(int *)(iVar4 + 0x34) = iVar9 + 8;
        *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + 1;
      }
      else {
        puVar7 = (undefined2 *)*puVar11;
        *puVar7 = DAT_0002449e;
        piVar8 = (int *)(DAT_00024680 + iVar9);
        puVar7[2] = *(undefined2 *)(*piVar8 + 10);
        puVar7[3] = *(short *)(*piVar8 + 6) + *(short *)(*(int *)(*(int *)(*piVar3 + 0xc) + 4) + 4);
        puVar7[4] = *(short *)(*piVar8 + 2) + *(short *)(*(int *)(*(int *)(*piVar3 + 0xc) + 4) + 4);
        puVar7[5] = *(undefined2 *)(*piVar8 + 8);
        puVar7[6] = sVar5;
        puVar7[7] = -sVar6;
        iVar9 = *(int *)(iVar4 + 0x34);
        *(undefined2 *)(iVar9 + 4) = 0;
        uVar10 = (uint)puVar7 >> 3;
        *(short *)(iVar9 + 6) = (short)uVar10;
        *(int *)(iVar4 + 0x34) = iVar9 + 8;
        *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + 1;
      }
      *puVar11 = puVar7 + 0x10;
      *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + 1;
      return uVar10;
    }
    if (uVar10 != 2) {
      return uVar10;
    }
    puVar7 = (undefined2 *)*puVar11;
    *puVar7 = DAT_0002449e;
    piVar8 = (int *)(DAT_00024684 + iVar9);
    puVar7[2] = *(undefined2 *)(*piVar8 + 10);
    puVar7[3] = *(short *)(*piVar8 + 6) + *(short *)(*(int *)(*(int *)(*piVar3 + 0xc) + 4) + 4);
    puVar7[4] = *(short *)(*piVar8 + 2) + *(short *)(*(int *)(*(int *)(*piVar3 + 0xc) + 4) + 4);
    puVar7[5] = *(undefined2 *)(*piVar8 + 8);
    puVar7[6] = sVar5;
    puVar7[7] = -sVar6;
    iVar9 = *(int *)(iVar4 + 0x34);
    *(undefined2 *)(iVar9 + 4) = 0;
    uVar10 = (uint)puVar7 >> 3;
    *(short *)(iVar9 + 6) = (short)uVar10;
    *(int *)(iVar4 + 0x34) = iVar9 + 8;
    *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + 1;
  }
  *puVar11 = puVar7 + 0x10;
  *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + 1;
  return uVar10;
}



undefined4 FUN_00024c4c(int *param_1,short param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  if (param_3 != 0) {
    if (param_1[0x23] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)*(short *)(param_1[0x23] + 4);
    }
    if ((int)*(short *)((int)param_1 + 0x72) < iVar2 + -1) {
      return 0;
    }
  }
  if (param_2 == 0) {
    if (param_4 != 0) {
      (*DAT_00024cd4)(param_1 + 0x17,0);
    }
  }
  else {
    (*DAT_00024cd4)(param_1 + 0x17,*(undefined4 *)(((int)param_2 & 0xffffU) + *param_1));
    if (param_5 != 0) {
      uVar3 = (*DAT_00024cd8)();
      pcVar1 = DAT_00024cdc;
      for (uVar3 = uVar3 & 0x1f; uVar3 != 0; uVar3 = uVar3 - 1) {
        (*pcVar1)(param_1 + 0x17);
      }
    }
  }
  return 1;
}



uint FUN_00025918(int param_1)

{
  byte bVar1;
  code *pcVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  short sVar9;
  int iVar10;
  
  iVar10 = ***(int ***)(param_1 + DAT_00025962);
  (*DAT_00025970)(param_1 + 0x5c);
  pcVar2 = DAT_00025968;
  uVar4 = (int)*(char *)(param_1 + DAT_0002595c) & 0xff;
  if (uVar4 == 0) {
    iVar5 = (*DAT_00025968)();
    pcVar3 = DAT_00025ad4;
    uVar4 = (uint)DAT_00025ac2;
    if (((int)DAT_00025ac0 & *(uint *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + uVar4)) != 0) {
      for (iVar5 = 0; iVar5 < *(short *)(param_1 + DAT_00025ac6); iVar5 = iVar5 + 1) {
        (*pcVar3)(iVar5 * 100 + *(int *)(param_1 + DAT_00025ac4));
      }
      *(undefined2 *)(param_1 + DAT_00025ac6) = 0;
      iVar5 = DAT_00025ad8;
      iVar6 = (char)((*(byte *)(iVar10 + 4) & 1) * '0') + DAT_00025ad8;
      iVar7 = (*pcVar2)();
      *(int *)(param_1 + 0x20) =
           *(int *)(param_1 + 0x20) +
           *(int *)((char)(*(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_00025ac8) *
                          '\f') + iVar6) * 0x400;
      bVar1 = *(byte *)(iVar10 + 4);
      iVar6 = (*pcVar2)();
      *(int *)(param_1 + 0x24) =
           *(int *)(param_1 + 0x24) +
           *(int *)((int)(char)(*(char *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) + (int)DAT_00025ac8)
                               * '\f') + (char)((bVar1 & 1) * '0') + iVar5 + 4) * 0x400;
      bVar1 = *(byte *)(iVar10 + 4);
      iVar10 = (*pcVar2)();
      iVar6 = (int)DAT_00025aca;
      *(int *)(param_1 + 0x28) =
           *(int *)(param_1 + 0x28) +
           *(int *)(iVar5 + (char)((bVar1 & 1) * '0') +
                    (int)(char)(*(char *)(*(int *)(*(int *)(iVar10 + 0x10) + 4) + (int)DAT_00025ac8)
                               * '\f') + 8) * 0x400;
      if (*(char *)(*(int *)(param_1 + iVar6) + 0x2c) == '\x04') {
        iVar10 = (int)DAT_00025ace;
        *(short *)(param_1 + DAT_00025acc + -0x74) = DAT_00025acc;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(int *)(param_1 + 0x30) = iVar10;
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
      else {
        *(undefined2 *)(param_1 + 0xb8) = 0x3c;
        iVar5 = *(int *)(param_1 + 0x1c);
        iVar10 = *(int *)(param_1 + 0x28);
        uVar8 = (*DAT_00025adc)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x14),
                                (int)*(short *)(param_1 + 0xb8) << 0x10);
        *(undefined4 *)(param_1 + 0x2c) = uVar8;
        *(undefined4 *)(param_1 + 0x30) = 0;
        uVar8 = (*DAT_00025adc)(iVar10 - iVar5,(int)*(short *)(param_1 + DAT_00025ad0) << 0x10);
        *(undefined4 *)(param_1 + 0x34) = uVar8;
      }
      uVar4 = (uint)DAT_00025ad2;
      *(char *)(param_1 + uVar4) = *(char *)(param_1 + uVar4) + '\x01';
    }
  }
  else if (uVar4 == 1) {
    uVar4 = (uint)DAT_00025bea;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x1c);
    sVar9 = *(short *)(param_1 + uVar4) + -1;
    *(short *)(param_1 + uVar4) = sVar9;
    if (sVar9 < 0) {
      iVar10 = (*pcVar2)();
      if ((*(short *)(iVar10 + 4) == 7) &&
         (((iVar10 = (*pcVar2)(), *(short *)(iVar10 + 6) == 4 ||
           (iVar10 = (*pcVar2)(), *(short *)(iVar10 + 6) == 8)) ||
          (iVar10 = (*pcVar2)(), *(short *)(iVar10 + 6) == 9)))) {
        iVar10 = (*pcVar2)();
        iVar10 = *(int *)(*(int *)(iVar10 + 0x10) + 4);
        *(uint *)(iVar10 + DAT_00025bec) = *(uint *)(iVar10 + DAT_00025bec) & DAT_00025bf4;
      }
      iVar10 = ((int)*(char *)(param_1 + DAT_00025bee + -0x22) & 0xffU) * 0x20 +
               *(int *)(*(int *)(param_1 + DAT_00025bee) + 0x14);
      *(byte *)(iVar10 + 0x18) = *(byte *)(iVar10 + 0x18) & (byte)DAT_00025bf0;
      iVar10 = ((int)*(char *)(param_1 + DAT_00025bee + -0x22) & 0xffU) * 0x20 +
               *(int *)(*(int *)(param_1 + DAT_00025bee) + 0x14);
      *(byte *)(iVar10 + 0x18) = *(byte *)(iVar10 + 0x18) | 8;
      iVar10 = ((int)*(char *)(param_1 + DAT_00025bee + -0x22) & 0xffU) * 0x20 +
               *(int *)(*(int *)(param_1 + DAT_00025bee) + 0x14);
      *(byte *)(iVar10 + 0x18) = *(byte *)(iVar10 + 0x18) | 4;
      uVar4 = *(uint *)(param_1 + DAT_00025bf2);
      if (uVar4 != 0) {
        if (*(int *)(param_1 + DAT_00025bf2) != 0) {
          *(uint *)(*(int *)(param_1 + DAT_00025bf2) + -4) =
               *(uint *)(*(int *)(param_1 + DAT_00025bf2) + -4) | 1;
        }
        uVar4 = (uint)DAT_00025bf2;
        *(undefined4 *)(param_1 + uVar4) = 0;
      }
      if (param_1 != 0) {
        *(uint *)(param_1 + -4) = *(uint *)(param_1 + -4) | 1;
      }
    }
  }
  return uVar4;
}



// WARNING: Could not reconcile some variable overlaps

uint FUN_00025bf8(int param_1)

{
  char cVar1;
  code *pcVar2;
  code *pcVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  ushort extraout_var;
  ushort extraout_var_00;
  ushort extraout_var_01;
  ushort extraout_var_02;
  ushort extraout_var_03;
  ushort extraout_var_04;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  short sVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 local_28;
  undefined4 uStack36;
  
  pcVar2 = DAT_00025cf4;
  iVar7 = *(int *)(param_1 + DAT_00025ce8);
  iVar12 = DAT_00025cf8 +
           ((int)*(char *)(((int)*(char *)(DAT_00025cec + param_1) & 0xffU) +
                          *(int *)(DAT_00025cea + param_1) + 0xd) & 0xffU) * 4;
  iVar8 = (*DAT_00025cf4)();
  cVar1 = *(char *)(((int)*(char *)(((int)*(char *)(*(int *)(*(int *)(iVar8 + 0x10) + 4) +
                                                   (int)DAT_00025cee) & 0xffU) + iVar12) & 0xffU) +
                   iVar7 + 0x14);
  if ((*(byte *)(param_1 + 0xb0) & 8) == 0) {
    uVar10 = (int)*(char *)(param_1 + DAT_00025e5a) & 0xff;
    if (((int)*(char *)(param_1 + DAT_00025e5a) & 0x10U) == 0) {
      if (cVar1 != '\0') {
        iVar7 = (*pcVar2)();
        uVar10 = (uint)DAT_00025fa6;
        if (*(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + uVar10) == '\0') {
          iVar7 = (*pcVar2)();
          uVar10 = (uint)*(char *)((int)DAT_00025fa8 + *(int *)(*(int *)(iVar7 + 0x10) + 4));
          if (uVar10 == 4) {
            for (iVar7 = 0; uVar10 = (uint)DAT_00025fb0, iVar7 < *(short *)(param_1 + uVar10);
                iVar7 = iVar7 + 1) {
              sVar11 = *(short *)(iVar7 * 100 + *(int *)(param_1 + DAT_00025faa) + 0x5a);
              iVar8 = (*pcVar2)();
              if ((int)sVar11 ==
                  *(short *)(*(int *)(*(int *)(iVar8 + 0x10) + 4) + (int)DAT_00025fac) + 1) {
                iVar7 = (*pcVar2)();
                iVar8 = (int)DAT_00025fae;
                *(short *)(param_1 + iVar8) =
                     *(short *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_00025fac) * 2 + 0x1e
                ;
                *(byte *)(param_1 + iVar8 + -8) = *(byte *)(param_1 + iVar8 + -8) | 8;
                *(undefined *)(param_1 + (iVar8 - 0xbU)) = 0;
                return iVar8 - 0xbU;
              }
            }
          }
        }
      }
    }
    else {
      (*DAT_00025e70)(param_1 + 0x5c);
      uVar10 = (uint)DAT_00025e56;
      sVar11 = *(short *)(param_1 + uVar10) + -1;
      *(short *)(param_1 + uVar10) = sVar11;
      uVar6 = DAT_00025e74;
      if (sVar11 < 0) {
        for (iVar7 = 0; iVar7 < *(short *)(param_1 + DAT_00025e52); iVar7 = iVar7 + 1) {
          iVar8 = iVar7 * 100 + *(int *)(param_1 + DAT_00025e50);
          *(uint *)(iVar8 + 0x50) = *(uint *)(iVar8 + 0x50) & uVar6;
        }
        iVar7 = (int)DAT_00025e5a;
        *(byte *)(param_1 + iVar7) = *(byte *)(param_1 + iVar7) & (char)DAT_00025e5a + 0x3fU;
        iVar7 = ((int)*(char *)(param_1 + iVar7 + -2) & 0xffU) * 0x20 +
                *(int *)(*(int *)(param_1 + iVar7 + 0x20) + 0x14);
        *(byte *)(iVar7 + 0x18) = *(byte *)(iVar7 + 0x18) | 0x20;
        uVar10 = 0x18;
      }
    }
  }
  else {
    uVar10 = (uint)DAT_00025cf0;
    sVar11 = *(short *)(param_1 + uVar10) + -1;
    *(short *)(param_1 + uVar10) = sVar11;
    pcVar3 = DAT_00025cfc;
    if (sVar11 < 0) {
      iVar7 = ((int)*(char *)(*(int *)(param_1 + DAT_00025ce8) + 0x18) & 0xffU) << 0xc;
      if (cVar1 == '\x01') {
        uVar10 = (*DAT_00025cfc)();
        if ((DAT_00025d00 & uVar10) == 0) {
          (*pcVar3)();
          local_28._0_2_ = (ushort)((uint)DAT_00025d08 >> 0x10) & extraout_var_00;
        }
        else {
          (*pcVar3)();
          local_28._0_2_ = (ushort)((uint)DAT_00025d04 >> 0x10) | extraout_var;
        }
        uVar10 = (*pcVar3)();
        if ((DAT_00025d00 & uVar10) == 0) {
          (*pcVar3)();
          uStack36._0_2_ = (ushort)((uint)DAT_00025d08 >> 0x10) & extraout_var_02;
        }
        else {
          (*pcVar3)();
          uStack36._0_2_ = (ushort)((uint)DAT_00025d04 >> 0x10) | extraout_var_01;
        }
      }
      else if (cVar1 == '\x02') {
        local_28._0_2_ = 0;
        uVar10 = (*DAT_00025cfc)();
        if ((DAT_00025d00 & uVar10) == 0) {
          (*pcVar3)();
          uStack36._0_2_ = (ushort)((uint)DAT_00025e5c >> 0x10) & extraout_var_04;
        }
        else {
          (*pcVar3)();
          uStack36._0_2_ = (ushort)((uint)DAT_00025d04 >> 0x10) | extraout_var_03;
        }
      }
      uVar4 = DAT_00025e4e;
      iVar8 = (*DAT_00025e64)(iVar7,*(undefined4 *)
                                     ((short)(local_28._0_2_ & DAT_00025e4e) * 4 + DAT_00025e60));
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar8;
      uVar13 = *(undefined4 *)((short)(uStack36._0_2_ & uVar4) * 4 + DAT_00025e60);
      uVar9 = (*DAT_00025e64)(iVar7,*(undefined4 *)
                                     ((short)(local_28._0_2_ & uVar4) * 4 + DAT_00025e68));
      iVar8 = (*DAT_00025e64)(uVar9,uVar13);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar8;
      uVar13 = *(undefined4 *)((short)(uStack36._0_2_ & uVar4) * 4 + DAT_00025e68);
      uVar9 = (*DAT_00025e64)(iVar7,*(undefined4 *)
                                     ((short)(local_28._0_2_ & uVar4) * 4 + DAT_00025e68));
      iVar7 = (*DAT_00025e64)(uVar9,uVar13);
      uVar10 = DAT_00025e6c;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar7;
      for (iVar7 = 0; iVar7 < *(short *)(param_1 + DAT_00025e52); iVar7 = iVar7 + 1) {
        iVar8 = iVar7 * 100 + *(int *)(param_1 + DAT_00025e50);
        *(uint *)(iVar8 + 0x50) = *(uint *)(iVar8 + 0x50) | uVar10;
      }
      iVar7 = (*pcVar2)();
      uVar5 = DAT_00025e58;
      iVar8 = (int)DAT_00025e56;
      *(short *)(param_1 + iVar8) =
           *(short *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_00025e54) * 2 + 0xf;
      uVar10 = iVar8 - 8;
      *(byte *)(param_1 + uVar10) = *(byte *)(param_1 + uVar10) & (byte)uVar5;
      *(byte *)(param_1 + uVar10) = *(byte *)(param_1 + uVar10) | 0x10;
    }
  }
  return uVar10;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_00025f06(int param_1)

{
  char cVar1;
  code *pcVar2;
  code *pcVar3;
  ushort uVar4;
  undefined2 uVar5;
  ushort extraout_var;
  ushort extraout_var_00;
  ushort extraout_var_01;
  ushort extraout_var_02;
  ushort extraout_var_03;
  ushort extraout_var_04;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  short sVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 local_28;
  undefined4 uStack36;
  
  pcVar2 = DAT_00025fbc;
  iVar6 = *(int *)(param_1 + _LAB_00025fb2);
  iVar12 = DAT_00025fc0 +
           ((int)*(char *)(((int)*(char *)(DAT_00025fb6 + param_1) & 0xffU) +
                          *(int *)(DAT_00025fb4 + param_1) + 0xd) & 0xffU) * 4;
  iVar7 = (*DAT_00025fbc)();
  cVar1 = *(char *)(((int)*(char *)(((int)*(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) +
                                                   (int)DAT_00025fb8) & 0xffU) + iVar12) & 0xffU) +
                   iVar6 + 0x10);
  if ((*(byte *)(param_1 + 0xb0) & 8) == 0) {
    uVar9 = (int)*(char *)(param_1 + DAT_00026214) & 0xff;
    if (((int)*(char *)(param_1 + DAT_00026214) & 0x10U) == 0) {
      if (cVar1 != '\0') {
        iVar6 = (*pcVar2)();
        uVar9 = (int)*(char *)((int)DAT_0002621c + *(int *)(*(int *)(iVar6 + 0x10) + 4)) & 0xff;
        if (uVar9 == 3) {
          iVar6 = (*pcVar2)();
          uVar9 = (uint)*(char *)((int)DAT_0002621e + *(int *)(*(int *)(iVar6 + 0x10) + 4));
          if (uVar9 == 4) {
            for (iVar6 = 0; uVar9 = (uint)DAT_0002621a, iVar6 < *(short *)(param_1 + uVar9);
                iVar6 = iVar6 + 1) {
              sVar11 = *(short *)(*(int *)(param_1 + DAT_00026218) + iVar6 * 100 + 0x5a);
              iVar7 = (*pcVar2)();
              if ((sVar11 <= *(short *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_00026220))
                 && (*(short *)(*(int *)(param_1 + DAT_00026218) + iVar6 * 100 + 0x5a) != 0)) {
                iVar6 = (*pcVar2)();
                iVar7 = (int)DAT_00026216;
                *(short *)(param_1 + iVar7) =
                     *(short *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) + (int)DAT_00026220) * 2 + 0xf;
                uVar10 = iVar7 - 8;
                *(byte *)(param_1 + uVar10) = *(byte *)(param_1 + uVar10) | 8;
                return uVar10;
              }
            }
          }
        }
      }
    }
    else {
      (*DAT_00026224)(param_1 + 0x5c);
      uVar9 = (uint)DAT_00026216;
      sVar11 = *(short *)(param_1 + uVar9) + -1;
      *(short *)(param_1 + uVar9) = sVar11;
      uVar10 = DAT_00026228;
      if (sVar11 < 0) {
        for (iVar6 = 0; iVar6 < *(short *)(param_1 + DAT_0002621a); iVar6 = iVar6 + 1) {
          iVar7 = iVar6 * 100 + *(int *)(param_1 + DAT_00026218);
          *(uint *)(iVar7 + 0x50) = *(uint *)(iVar7 + 0x50) & uVar10;
        }
        iVar6 = (int)DAT_00026214;
        *(byte *)(param_1 + iVar6) = *(byte *)(param_1 + iVar6) & (char)DAT_00026214 + 0x3fU;
        iVar6 = ((int)*(char *)(param_1 + iVar6 + -2) & 0xffU) * 0x20 +
                *(int *)(*(int *)(param_1 + iVar6 + 0x20) + 0x14);
        *(byte *)(iVar6 + 0x18) = *(byte *)(iVar6 + 0x18) | 0x20;
        uVar9 = 0x18;
      }
    }
  }
  else {
    uVar9 = (uint)DAT_00025fae;
    sVar11 = *(short *)(param_1 + uVar9) + -1;
    *(short *)(param_1 + uVar9) = sVar11;
    pcVar3 = DAT_00025fc8;
    uVar10 = DAT_00025fc4;
    if (sVar11 < 0) {
      iVar6 = ((int)*(char *)(*(int *)(param_1 + _LAB_00025fb2) + 0x18) & 0xffU) << 0xc;
      if (cVar1 == '\x01') {
        uVar9 = (*DAT_00025fc8)();
        if ((uVar10 & uVar9) == 0) {
          (*pcVar3)();
          local_28._0_2_ = (ushort)((uint)DAT_000260f4 >> 0x10) & extraout_var_00;
        }
        else {
          (*pcVar3)();
          local_28._0_2_ = (ushort)((uint)DAT_000260f0 >> 0x10) | extraout_var;
        }
        uVar9 = (*pcVar3)();
        if ((uVar10 & uVar9) == 0) {
          (*pcVar3)();
          uStack36._0_2_ = (ushort)((uint)DAT_000260f4 >> 0x10) & extraout_var_02;
        }
        else {
          (*pcVar3)();
          uStack36._0_2_ = (ushort)((uint)DAT_000260f0 >> 0x10) | extraout_var_01;
        }
      }
      else if (cVar1 == '\x02') {
        local_28._0_2_ = 0;
        uVar9 = (*DAT_00025fc8)();
        if ((uVar10 & uVar9) == 0) {
          (*pcVar3)();
          uStack36._0_2_ = (ushort)((uint)DAT_000260f4 >> 0x10) & extraout_var_04;
        }
        else {
          (*pcVar3)();
          uStack36._0_2_ = (ushort)((uint)DAT_000260f0 >> 0x10) | extraout_var_03;
        }
      }
      pcVar3 = DAT_000260f8;
      uVar4 = DAT_000260e2;
      iVar7 = (*DAT_000260f8)(iVar6,*(undefined4 *)
                                     ((short)(local_28._0_2_ & DAT_000260e2) * 4 + DAT_000260fc));
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar7;
      uVar13 = *(undefined4 *)((short)(uStack36._0_2_ & uVar4) * 4 + DAT_000260fc);
      uVar8 = (*pcVar3)(iVar6,*(undefined4 *)((short)(local_28._0_2_ & uVar4) * 4 + DAT_00026100));
      iVar7 = (*pcVar3)(uVar8,uVar13);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar7;
      uVar13 = *(undefined4 *)((short)(uStack36._0_2_ & uVar4) * 4 + DAT_00026100);
      uVar8 = (*pcVar3)(iVar6,*(undefined4 *)((short)(local_28._0_2_ & uVar4) * 4 + DAT_00026100));
      iVar6 = (*pcVar3)(uVar8,uVar13);
      uVar10 = DAT_00026104;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar6;
      for (iVar6 = 0; iVar6 < *(short *)(param_1 + DAT_000260e6); iVar6 = iVar6 + 1) {
        iVar7 = iVar6 * 100 + *(int *)(param_1 + DAT_000260e4);
        *(uint *)(iVar7 + 0x50) = *(uint *)(iVar7 + 0x50) | uVar10;
      }
      iVar6 = (*pcVar2)();
      uVar5 = DAT_000260ec;
      iVar7 = (int)DAT_000260ea;
      *(short *)(param_1 + iVar7) =
           *(short *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) + (int)DAT_000260e8) * 2 + 0x19;
      uVar9 = iVar7 - 8;
      *(byte *)(param_1 + uVar9) = *(byte *)(param_1 + uVar9) & (byte)uVar5;
      *(byte *)(param_1 + uVar9) = *(byte *)(param_1 + uVar9) | 0x10;
    }
  }
  return uVar9;
}



uint FUN_0002622c(int param_1)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  
  pcVar1 = DAT_00026300;
  uVar2 = (int)*(char *)(param_1 + DAT_000262f6) & 0xff;
  if (uVar2 == 0) {
    for (iVar4 = 0; iVar4 < *(short *)(param_1 + DAT_000262fa); iVar4 = iVar4 + 1) {
      (*pcVar1)(iVar4 * 100 + *(int *)(param_1 + DAT_000262f8));
    }
    iVar4 = (int)DAT_000262fa;
    *(undefined2 *)(param_1 + iVar4) = 0;
    if (((int)*(char *)(*(int *)(param_1 + iVar4 + 0x16) + 0x2e) & 0xffU) != 0xffffffff) {
      (*DAT_00026304)(*(undefined *)(*(int *)(param_1 + DAT_000262fc) + 0x2e));
    }
    if ((*(int *)(param_1 + DAT_000262fe) != 0) && (*(int *)(param_1 + DAT_000262fe) != 0)) {
      *(uint *)(*(int *)(param_1 + DAT_000262fe) + -4) =
           *(uint *)(*(int *)(param_1 + DAT_000262fe) + -4) | 1;
    }
    *(char *)(param_1 + DAT_000262f6) = *(char *)(param_1 + DAT_000262f6) + '\x01';
  }
  else if (uVar2 != 1) {
    return uVar2;
  }
  cVar3 = *(char *)(*(int *)(param_1 + DAT_000262fc) + 0x2c);
  if (cVar3 == '\0') {
    iVar4 = (*DAT_00026460)();
    (*DAT_00026468)(param_1 + 8,(int)DAT_00026454 + *(int *)(*(int *)(iVar4 + 0x10) + 4),
                    PTR_DAT_00026464,0);
  }
  else if (cVar3 != '\x01') {
    if (cVar3 == '\x02') {
      iVar4 = (*DAT_00026460)();
      (*DAT_00026468)(param_1 + 8,(int)DAT_00026454 + *(int *)(*(int *)(iVar4 + 0x10) + 4),
                      PTR_DAT_00026464,0);
    }
    else if (cVar3 != '\x03') {
      if (cVar3 == '\x04') {
        iVar4 = ((int)*(char *)(param_1 + DAT_00026456 + -0x22) & 0xffU) * 0x20 +
                *(int *)(*(int *)(param_1 + DAT_00026456) + 0x14);
        *(byte *)(iVar4 + 0x18) = *(byte *)(iVar4 + 0x18) & (byte)DAT_00026458;
        iVar4 = ((int)*(char *)(param_1 + DAT_00026456 + -0x22) & 0xffU) * 0x20 +
                *(int *)(*(int *)(param_1 + DAT_00026456) + 0x14);
        *(byte *)(iVar4 + 0x18) = *(byte *)(iVar4 + 0x18) | 4;
        uVar2 = (uint)DAT_0002645c;
        cVar3 = '\x03';
      }
      else {
        if (cVar3 != '\x05') goto LAB_00026388;
        iVar4 = ((int)*(char *)(param_1 + DAT_000264d0 + -0x22) & 0xffU) * 0x20 +
                *(int *)(*(int *)(param_1 + DAT_000264d0) + 0x14);
        *(byte *)(iVar4 + 0x18) = *(byte *)(iVar4 + 0x18) & (byte)DAT_000264d2;
        iVar4 = ((int)*(char *)(param_1 + DAT_000264d0 + -0x22) & 0xffU) * 0x20 +
                *(int *)(*(int *)(param_1 + DAT_000264d0) + 0x14);
        *(byte *)(iVar4 + 0x18) = *(byte *)(iVar4 + 0x18) | 4;
        uVar2 = (uint)DAT_000264d4;
        cVar3 = *(char *)(param_1 + uVar2) + '\x01';
      }
      *(char *)(param_1 + uVar2) = cVar3;
      return uVar2;
    }
LAB_00026388:
    iVar4 = ((int)*(char *)(param_1 + DAT_00026456 + -0x22) & 0xffU) * 0x20 +
            *(int *)(*(int *)(param_1 + DAT_00026456) + 0x14);
    *(byte *)(iVar4 + 0x18) = *(byte *)(iVar4 + 0x18) & (byte)DAT_00026458;
    iVar4 = ((int)*(char *)(param_1 + DAT_00026456 + -0x22) & 0xffU) * 0x20 +
            *(int *)(*(int *)(param_1 + DAT_00026456) + 0x14);
    *(byte *)(iVar4 + 0x18) = *(byte *)(iVar4 + 0x18) | 4;
    uVar2 = (*DAT_00026478)(param_1,*(undefined4 *)
                                     (((int)*(char *)(*(int *)(param_1 + DAT_0002645a) + 1) & 0xffU)
                                      * 0x10 + *DAT_00026474 + 0xc),param_1 + 0x5c,param_1 + 8,
                            param_1 + 0x38,0,0,0xffffffd4,DAT_00026470,0,0,0,DAT_0002646c,0);
    if (param_1 != 0) {
      *(uint *)(param_1 + -4) = *(uint *)(param_1 + -4) | 1;
      return uVar2;
    }
    return uVar2;
  }
  iVar4 = ((int)*(char *)(param_1 + DAT_00026456 + -0x22) & 0xffU) * 0x20 +
          *(int *)(*(int *)(param_1 + DAT_00026456) + 0x14);
  *(byte *)(iVar4 + 0x18) = *(byte *)(iVar4 + 0x18) & (byte)DAT_00026458;
  iVar4 = ((int)*(char *)(param_1 + DAT_00026456 + -0x22) & 0xffU) * 0x20 +
          *(int *)(*(int *)(param_1 + DAT_00026456) + 0x14);
  *(byte *)(iVar4 + 0x18) = *(byte *)(iVar4 + 0x18) | 4;
  if (param_1 != 0) {
    *(uint *)(param_1 + -4) = *(uint *)(param_1 + -4) | 1;
  }
  return 0x18;
}



void FUN_000268c8(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + DAT_00026938);
  iVar4 = DAT_00026954 +
          ((int)*(char *)(((int)*(char *)(DAT_0002693c + param_1) & 0xffU) +
                         *(int *)(DAT_0002693a + param_1) + 0xd) & 0xffU) * 4;
  iVar3 = (*DAT_00026958)();
  uVar1 = *(undefined *)
           (iVar2 + 0x28 +
           ((int)*(char *)(iVar4 + ((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) +
                                                  (int)DAT_0002693e) & 0xffU)) & 0xffU));
  for (iVar2 = 0; iVar2 < *(short *)(param_1 + DAT_00026942); iVar2 = iVar2 + 1) {
    *(undefined *)(iVar2 * 100 + *(int *)(param_1 + DAT_00026940) + 0x60) = uVar1;
  }
  return;
}



undefined4 FUN_00026f44(int param_1,undefined4 param_2,undefined param_3,undefined param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = (*DAT_00027084)(*(undefined4 *)
                           (((int)*(char *)(param_1 + 1) & 0xffU) * 0x10 + *DAT_00027080 + 0xc),
                          DAT_0002707c,(int)DAT_00027072);
  iVar3 = (int)DAT_00027076;
  *(undefined4 *)(iVar2 + DAT_00027074) = param_2;
  iVar5 = (int)DAT_00027078;
  *(undefined *)(iVar3 + iVar2) = param_3;
  *(undefined *)(iVar5 + iVar2) = param_4;
  iVar3 = ((int)*(char *)(iVar2 + DAT_00027074 + -0x22) & 0xffU) * 0x20 +
          *(int *)(*(int *)(iVar2 + DAT_00027074) + 0x14);
  *(byte *)(iVar3 + 0x18) = *(byte *)(iVar3 + 0x18) | *(byte *)(DAT_00027078 + iVar2);
  iVar3 = (int)DAT_00027074;
  *(undefined4 *)(iVar2 + 0x14) =
       *(undefined4 *)
        (((int)*(char *)(iVar2 + iVar3 + -0x22) & 0xffU) * 0x20 +
         *(int *)(*(int *)(iVar2 + iVar3) + 0x14) + 0xc);
  *(undefined4 *)(iVar2 + 0x18) =
       *(undefined4 *)
        (((int)*(char *)(iVar2 + iVar3 + -0x22) & 0xffU) * 0x20 +
         *(int *)(*(int *)(iVar2 + iVar3) + 0x14) + 0x10);
  *(undefined4 *)(iVar2 + 0x1c) =
       *(undefined4 *)
        (((int)*(char *)(iVar2 + iVar3 + -0x22) & 0xffU) * 0x20 +
         *(int *)(*(int *)(iVar2 + iVar3) + 0x14) + 0x14);
  *(undefined4 *)(iVar2 + 0x20) =
       *(undefined4 *)
        (((int)*(char *)(iVar2 + iVar3 + -0x22) & 0xffU) * 0x20 +
         *(int *)(*(int *)(iVar2 + iVar3) + 0x14) + 0xc);
  *(undefined4 *)(iVar2 + 0x24) =
       *(undefined4 *)
        (((int)*(char *)(iVar2 + iVar3 + -0x22) & 0xffU) * 0x20 +
         *(int *)(*(int *)(iVar2 + iVar3) + 0x14) + 0x10);
  *(undefined4 *)(iVar2 + 0x28) =
       *(undefined4 *)
        (((int)*(char *)(iVar2 + iVar3 + -0x22) & 0xffU) * 0x20 +
         *(int *)(*(int *)(iVar2 + iVar3) + 0x14) + 0x14);
  cVar1 = *(char *)(((int)*(char *)(DAT_00027078 + iVar2) & 0xffU) + *(int *)(iVar2 + iVar3) + 0xd);
  if (cVar1 == '\0') {
    *(undefined4 *)(iVar2 + 0x3c) = 0;
    goto LAB_00027094;
  }
  uVar4 = DAT_00027088;
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      *(undefined4 *)(iVar2 + 0x3c) = DAT_0002708c;
      goto LAB_00027094;
    }
    uVar4 = DAT_000271a8;
    if (cVar1 != '\x03') goto LAB_00027094;
  }
  *(undefined4 *)(iVar2 + 0x3c) = uVar4;
LAB_00027094:
  iVar3 = (int)DAT_000271a2;
  *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(iVar2 + 0x38);
  *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar2 + 0x3c);
  *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(iVar2 + 0x40);
  iVar2 = ((int)*(char *)(iVar2 + iVar3 + -0x22) & 0xffU) * 0x20 +
          *(int *)(*(int *)(iVar2 + iVar3) + 0x14);
  *(byte *)(iVar2 + 0x18) = *(byte *)(iVar2 + 0x18) & (byte)DAT_000271a4;
  return 0x18;
}



void FUN_000270d2(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    *(undefined *)(param_1 + 4 + iVar2) = 1;
    *(undefined *)(param_1 + 7 + iVar2) = 0;
    iVar3 = iVar2 + 1;
    *(undefined *)(param_1 + 10 + iVar2) = 0;
    *(undefined *)(param_1 + 4 + iVar3) = 1;
    *(undefined *)(param_1 + 7 + iVar3) = 0;
    *(undefined *)(param_1 + 10 + iVar3) = 0;
    iVar3 = iVar2 + 2;
    *(undefined *)(param_1 + 4 + iVar3) = 1;
    *(undefined *)(param_1 + 7 + iVar3) = 0;
    iVar2 = iVar2 + 3;
    *(undefined *)(param_1 + 10 + iVar3) = 0;
  } while (iVar2 < 3);
  *(undefined *)(param_1 + 0x10) = 1;
  iVar2 = 0;
  puVar1 = param_2 + (param_3 & 0xff) * 3;
  if (param_2 < puVar1) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar2) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar2 + 4) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar2 + 8) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar2 + 0xc) = *param_2;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar2 + 0x10) = param_2[1];
      *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar2 + 0x14) = param_2[2];
      *(undefined *)(*(int *)(param_1 + 0x14) + iVar2 + 0x19) = 0;
      *(undefined *)(*(int *)(param_1 + 0x14) + iVar2 + 0x18) = 4;
      param_2 = param_2 + 3;
      *(undefined2 *)(iVar2 + *(int *)(param_1 + 0x14) + 0x1c) = 0;
      iVar2 = iVar2 + 0x20;
    } while (param_2 < puVar1);
  }
  return;
}



void FUN_00027556(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(*(int *)(param_1 + 0x18) + 4) == 0) {
    if (*(char *)(*(int *)(param_1 + 0x18) + 8) == '\x05') {
      (*DAT_00027644)(0);
    }
    else {
      (*DAT_0002764c)((int)*(char *)(DAT_00027648 +
                                    ((int)*(char *)(*(int *)(param_1 + 0x18) + 8) & 0xffU)));
    }
  }
  else {
    for (iVar2 = 0; *(char *)(iVar2 + *(int *)(*(int *)(param_1 + 0x18) + 4)) != '\x0e';
        iVar2 = iVar2 + 1) {
    }
    (*DAT_0002762c)();
    iVar2 = (*DAT_00027630)();
    iVar1 = (*DAT_00027634)();
    if (*(char *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x10) + 0x1b) != '\0') {
      (*DAT_00027638)(5,6);
      (*DAT_00027640)();
    }
    (*DAT_00027644)(*(undefined *)(*(int *)(*(int *)(param_1 + 0x18) + 4) + iVar2));
  }
  if (*(char *)(*(int *)(param_1 + 0x18) + 10) != -1) {
                    // WARNING: Could not recover jumptable at 0x00027606. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_00027650)((int)*(char *)(*(int *)(param_1 + 0x18) + 10),0x1e,0);
    return;
  }
  return;
}



undefined4 FUN_00027770(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  if (*(char *)(*(int *)(param_1 + 0x30) + 0x14) != '\0') {
    *(bool *)(param_1 + 0x38) = *(char *)(param_1 + 0x38) == '\0';
  }
  iVar9 = 0;
  do {
    if (2 < iVar9) {
      return 0;
    }
    cVar1 = *(char *)(DAT_000278f4 + (char)(*(char *)(param_1 + 0x38) * '\x03') + iVar9);
    uVar11 = (int)cVar1 & 0xff;
    if (*(char *)(param_1 + 0x1c + uVar11) != '\0') {
      iVar5 = DAT_000278f8 + ((int)*(char *)(uVar11 + param_1 + 0x25) & 0xffU) * 4;
      iVar2 = (*DAT_000278fc)();
      iVar10 = ((int)cVar1 & 0xffU) * 4;
      uVar7 = (uint)*(char *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) +
                                             (int)DAT_000278ec) & 0xffU) + iVar5);
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x30) + 4 + iVar10) + 0x1c) +
              ((int)*(char *)(param_1 + 0x1f + uVar11) & 0xffU) * 0x24;
      iVar5 = *(int *)((uVar7 & 0xff) * 4 + iVar2 + 4);
      if (iVar5 != 0) {
        if (*(char *)((uVar7 & 0xff) + iVar2 + 0x14) != '\0') {
          iVar3 = param_1 + 8 + iVar10;
          uVar8 = uVar7 & 0xff;
          bVar6 = *(char *)(uVar8 + iVar3) + 1;
          *(byte *)(uVar8 + iVar3) = bVar6;
          if (*(byte *)(iVar2 + 0x14 + uVar8) <= bVar6) {
            *(undefined *)(param_1 + 0x22 + uVar11) = *(undefined *)(param_1 + 0x1f + uVar11);
            uVar7 = (int)*(char *)((uVar7 & 0xff) + iVar2 + 0x18) & 0xff;
            if (uVar7 == (int)DAT_000278ee) {
              uVar4 = *(undefined *)(param_1 + 0x22 + uVar11);
            }
            else {
              uVar4 = (undefined)uVar7;
            }
            *(undefined *)(param_1 + 0x1f + uVar11) = uVar4;
            iVar2 = (*DAT_000278fc)();
            iVar3 = 0;
            *(undefined2 *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_000278f0) + 2)
                 = *(undefined2 *)
                    (*(int *)(*(int *)(iVar10 + *(int *)(param_1 + 0x30) + 4) + 0x1c) +
                     ((int)*(char *)(param_1 + 0x1f + uVar11) & 0xffU) * 0x24 + 0x20);
            do {
              *(undefined *)(param_1 + 8 + iVar10 + iVar3) = 0;
              *(undefined *)(param_1 + iVar10 + iVar3 + 9) = 0;
              iVar3 = iVar3 + 2;
            } while (iVar3 < 4);
          }
        }
        if (*(char *)(iVar5 + 8) != '\x01') {
          *(int *)(param_1 + 0x18) = iVar5;
          *(char *)(param_1 + 0x34) = cVar1;
          return 1;
        }
      }
    }
    iVar9 = iVar9 + 1;
  } while( true );
}



void FUN_00027a7e(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = *(char *)(param_1 + 4) + 1;
  *(byte *)(param_1 + 4) = bVar1;
  if (*(int *)((uint)bVar1 * 4 + *(int *)(*(int *)(param_1 + 0x30) + 0x10)) == 0) {
    *(undefined *)(param_1 + 4) = 0;
  }
  for (iVar2 = 0; iVar2 < (int)((int)*(char *)(param_1 + 3) & 0xffU); iVar2 = iVar2 + 1) {
    iVar3 = iVar2 * 0x20;
    iVar4 = iVar2 * 0xc;
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar3 + 0xc) =
         *(undefined4 *)
          (*(int *)(*(int *)(*(int *)(param_1 + 0x30) + 0x10) +
                   ((int)*(char *)(param_1 + 4) & 0xffU) * 4) + iVar4);
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar3 + 0x10) =
         *(undefined4 *)
          (*(int *)(*(int *)(*(int *)(param_1 + 0x30) + 0x10) +
                   ((int)*(char *)(param_1 + 4) & 0xffU) * 4) + iVar4 + 4);
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar3 + 0x14) =
         *(undefined4 *)
          (*(int *)(*(int *)(*(int *)(param_1 + 0x30) + 0x10) +
                   ((int)*(char *)(param_1 + 4) & 0xffU) * 4) + iVar4 + 8);
  }
  *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) | 1;
  return;
}



int FUN_00027b10(int param_1,int param_2)

{
  code *pcVar1;
  byte bVar3;
  byte bVar4;
  int iVar2;
  byte *pbVar5;
  
  pcVar1 = DAT_00027b38;
  bVar3 = *(byte *)(param_2 + 9) & 6;
  bVar4 = (byte)DAT_00027c44;
  if (bVar3 == 2) {
    *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & bVar4;
    *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) | 2;
    iVar2 = (*pcVar1)();
    iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
    *(uint *)(iVar2 + DAT_00027c46) = *(uint *)(iVar2 + DAT_00027c46) | 2;
    pbVar5 = (byte *)(((int)*(char *)(param_1 + 0x34) & 0xffU) + param_1 + 0x25);
    bVar4 = *pbVar5 + 1;
  }
  else if (bVar3 == 4) {
    *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & bVar4;
    *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) | 4;
    iVar2 = (*pcVar1)();
    iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
    *(uint *)(iVar2 + DAT_00027c46) = *(uint *)(iVar2 + DAT_00027c46) | 2;
    pbVar5 = (byte *)(((int)*(char *)(param_1 + 0x34) & 0xffU) + param_1 + 0x25);
    bVar4 = *pbVar5 + 3;
  }
  else {
    if (bVar3 != 6) goto LAB_00027bd4;
    *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & bVar4;
    *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) | 6;
    iVar2 = (*pcVar1)();
    iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
    *(uint *)(iVar2 + DAT_00027c46) = *(uint *)(iVar2 + DAT_00027c46) | 2;
    pbVar5 = (byte *)(((int)*(char *)(param_1 + 0x34) & 0xffU) + param_1 + 0x25);
    bVar4 = *pbVar5 + 2;
  }
  *pbVar5 = bVar4 & 3;
LAB_00027bd4:
  iVar2 = (*pcVar1)();
  iVar2 = (int)*(short *)(iVar2 + 4);
  if (iVar2 == 5) {
    iVar2 = (*pcVar1)();
    iVar2 = (int)*(char *)((int)DAT_00027c48 + *(int *)(*(int *)(iVar2 + 0x10) + 4));
    if ((((iVar2 == 4) || (iVar2 == 5)) || (iVar2 == 8)) || ((iVar2 == 9 || (iVar2 == 10)))) {
                    // WARNING: Could not recover jumptable at 0x00027c14. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar2 = (*DAT_00027c4c)(0x6f);
      return iVar2;
    }
  }
  else if (iVar2 == 7) {
    iVar2 = (*pcVar1)();
    iVar2 = (int)*(char *)((int)DAT_00027c48 + *(int *)(*(int *)(iVar2 + 0x10) + 4));
    if (iVar2 == 1) {
                    // WARNING: Could not recover jumptable at 0x00027c36. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar2 = (*DAT_00027c4c)(0x70);
      return iVar2;
    }
  }
  return iVar2;
}



uint FUN_00027c50(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (int)*(char *)(param_1 + 9) & 0x38;
  if (uVar1 == 8) {
    uVar2 = 2;
  }
  else if (uVar1 == 0x10) {
    uVar2 = 1;
  }
  else if (uVar1 == 0x18) {
    uVar2 = 3;
  }
  else if (uVar1 == 0x20) {
    uVar2 = 5;
  }
  else {
    if (uVar1 != 0x28) {
      return uVar1;
    }
    uVar2 = 4;
  }
  uVar1 = (*DAT_00027ce8)(uVar2,0x3c);
  return uVar1;
}



undefined4 FUN_00027c9a(int param_1)

{
  int iVar1;
  byte bVar3;
  int iVar2;
  undefined uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    *(undefined *)(param_1 + 0x29) = 1;
  }
  if (((*(char *)(param_1 + 7) == '\x02') && (iVar1 = (*DAT_00027cec)(), iVar1 != 0)) &&
     (*(char *)(param_1 + 0x28) == '\0')) {
    for (iVar1 = 0; iVar1 < (int)((int)*(char *)(param_1 + 3) & 0xffU); iVar1 = iVar1 + 1) {
      bVar3 = *(byte *)(*(int *)(param_1 + 0x2c) + iVar1 * 0x20 + 0x18) & 3;
      iVar9 = (int)(char)bVar3;
      iVar5 = DAT_00027e30 + ((int)*(char *)(iVar9 + param_1 + 0x25) & 0xffU) * 4;
      iVar2 = (*DAT_00027e34)();
      uVar8 = (uint)*(char *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) +
                                             (int)DAT_00027e2a) & 0xffU) + iVar5);
      if ((*(byte *)(*(int *)(param_1 + 0x2c) + iVar1 * 0x20 + 0x18) & 8) == 0) {
        iVar2 = (char)bVar3 * 4;
        iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x30) + 4 + iVar2) + 0x24);
        if (iVar5 != 0) {
          if (*(char *)(iVar5 + 0x14 + (uVar8 & 0xff)) != '\0') {
            *(undefined *)(param_1 + 0x47 + iVar1) = 1;
            *(undefined *)(param_1 + 0x22 + iVar9) = *(undefined *)(param_1 + 0x1f + iVar9);
            uVar7 = (int)*(char *)(iVar5 + 0x18 + (uVar8 & 0xff)) & 0xff;
            if (uVar7 == (int)DAT_00027e2c) {
              uVar4 = *(undefined *)(param_1 + 0x22 + iVar9);
            }
            else {
              uVar4 = (undefined)uVar7;
            }
            *(undefined *)(param_1 + 0x1f + iVar9) = uVar4;
            iVar9 = (*DAT_00027e34)();
            iVar6 = 0;
            *(undefined2 *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x10) + 4) + (int)DAT_00027e2e) + 2)
                 = *(undefined2 *)(iVar5 + 0x20);
            do {
              *(undefined *)(param_1 + 8 + iVar2 + iVar6) = 0;
              *(undefined *)(param_1 + iVar2 + iVar6 + 9) = 0;
              iVar6 = iVar6 + 2;
            } while (iVar6 < 4);
          }
          if (((*(int *)(param_1 + 0x18) == 0) && (*(int *)((uVar8 & 0xff) * 4 + iVar5 + 4) != 0))
             && (*(char *)(*(int *)(iVar5 + 4 + (uVar8 & 0xff) * 4) + 8) != '\x01')) {
            *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((uVar8 & 0xff) * 4 + iVar5 + 4);
            *(byte *)(param_1 + 0x34) = bVar3;
            *(undefined *)(param_1 + 7) = 1;
          }
        }
      }
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      return 1;
    }
    *(undefined *)(param_1 + 7) = 0;
  }
  return 0;
}



bool FUN_00027e52(int param_1)

{
  byte bVar1;
  int iVar2;
  byte bVar5;
  int iVar3;
  int iVar4;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar2 = (*DAT_00027f4c)();
  if (iVar2 != 0) {
    for (iVar2 = 0; iVar2 < (int)((int)*(char *)(param_1 + 3) & 0xffU); iVar2 = iVar2 + 1) {
      bVar5 = *(byte *)(*(int *)(param_1 + 0x2c) + iVar2 * 0x20 + 0x18) & 3;
      iVar9 = (int)(char)bVar5;
      iVar6 = DAT_00027f50 + ((int)*(char *)(iVar9 + param_1 + 0x25) & 0xffU) * 4;
      iVar3 = (*DAT_00027f54)();
      bVar1 = *(byte *)(*(int *)(param_1 + 0x2c) + iVar2 * 0x20 + 0x18);
      uVar8 = (uint)*(char *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) +
                                             (int)DAT_00027f44) & 0xffU) + iVar6);
      if ((((bVar1 & 8) == 0) && ((bVar1 & 0x20) != 0)) &&
         (*(char *)(param_1 + 0x47 + iVar2) == '\0')) {
        iVar3 = (char)bVar5 * 4;
        iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x30) + 4 + iVar3) + 0x20);
        if (iVar6 != 0) {
          iVar4 = (*DAT_00027f54)();
          *(undefined2 *)(*(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_00027f46) + 2) =
               *(undefined2 *)(iVar6 + 0x20);
          if (*(char *)(iVar6 + 0x14 + (uVar8 & 0xff)) != '\0') {
            *(undefined *)(param_1 + 0x22 + iVar9) = *(undefined *)(param_1 + 0x1f + iVar9);
            uVar7 = (int)*(char *)(iVar6 + 0x18 + (uVar8 & 0xff)) & 0xff;
            if (uVar7 == (int)DAT_00027f48) {
              uVar7 = (int)*(char *)(param_1 + 0x22 + iVar9) & 0xff;
            }
            iVar4 = 0;
            *(char *)(param_1 + 0x1f + iVar9) = (char)uVar7;
            do {
              iVar9 = iVar4 + 9;
              *(undefined *)(param_1 + 8 + iVar3 + iVar4) = 0;
              iVar4 = iVar4 + 2;
              *(undefined *)(param_1 + iVar3 + iVar9) = 0;
            } while (iVar4 < 4);
          }
          if (((*(int *)(param_1 + 0x18) == 0) && (*(int *)((uVar8 & 0xff) * 4 + iVar6 + 4) != 0))
             && (*(char *)(*(int *)(iVar6 + 4 + (uVar8 & 0xff) * 4) + 8) != '\x01')) {
            *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((uVar8 & 0xff) * 4 + iVar6 + 4);
            *(byte *)(param_1 + 0x34) = bVar5;
            *(undefined *)(param_1 + 6) = 1;
          }
        }
      }
    }
  }
  return *(int *)(param_1 + 0x18) != 0;
}



void FUN_00028d16(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  short sVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int local_24;
  
  puVar2 = (undefined4 *)(*DAT_00028e04)(param_1,DAT_00028e00,(int)DAT_00028de8);
  *puVar2 = param_3;
  (*DAT_00028e10)((int)DAT_00028de6 + (int)puVar2,
                  (int)*(short *)(*(int *)(*(int *)(*DAT_00028e0c + 0xc) + 4) + 4),DAT_00028e08);
  pcVar1 = DAT_00028e14;
  sVar4 = 0;
  uVar6 = (uint)DAT_00028dea;
  local_24 = 0;
  iVar7 = (int)DAT_00028dec;
  do {
    puVar5 = (undefined4 *)((int)puVar2 + sVar4 + 4);
    *puVar5 = *param_2;
    puVar5[1] = param_2[1];
    puVar5[2] = param_2[2];
    uVar3 = (*pcVar1)();
    puVar5[4] = (uVar3 & uVar6) + iVar7;
    uVar3 = (*pcVar1)();
    puVar5[3] = (uVar3 & uVar6) + iVar7;
    uVar3 = (*pcVar1)();
    puVar5[5] = (uVar3 & uVar6) + iVar7;
    puVar5 = (undefined4 *)((int)puVar2 + (short)(sVar4 + 0x18) + 4);
    *puVar5 = *param_2;
    puVar5[1] = param_2[1];
    puVar5[2] = param_2[2];
    uVar3 = (*pcVar1)();
    puVar5[4] = (uVar3 & uVar6) + iVar7;
    uVar3 = (*pcVar1)();
    puVar5[3] = (uVar3 & uVar6) + iVar7;
    uVar3 = (*pcVar1)();
    puVar5[5] = (uVar3 & uVar6) + iVar7;
    local_24 = local_24 + 2;
    sVar4 = sVar4 + 0x30;
  } while (local_24 < 0x20);
  *(undefined2 *)((int)puVar2 + (int)DAT_00028dee) = 0x3c;
  return;
}



uint FUN_00028e18(char *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_28;
  
  bVar3 = false;
  bVar4 = false;
  iVar7 = *(int *)(param_1 + 0x30);
  uVar5 = (int)param_1[2] & 0xff;
  if (uVar5 == 0) {
    iVar8 = 0;
    do {
      param_1[iVar8 + 0x44] = -1;
      if (*(int *)(iVar8 * 4 + iVar7 + 4) != 0) {
        (*DAT_00029028)(param_1,*(undefined *)(*(int *)(iVar8 * 4 + iVar7 + 4) + 1));
        param_1[iVar8 + 0x25] = *(char *)(iVar7 + 0x18 + iVar8);
        if (*(char *)(iVar8 + iVar7 + 0x20) != -1) {
          bVar2 = false;
          iVar6 = 0;
          if (0 < iVar8) {
            do {
              if (param_1[iVar6 + 0x44] == *(char *)(iVar7 + 0x20 + iVar8)) {
                bVar2 = true;
                break;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < iVar8);
          }
          if (!bVar2) {
            (*DAT_0002902c)(param_1,(int)*(char *)(iVar7 + 0x20 + iVar8));
            param_1[iVar8 + 0x44] = *(char *)(iVar7 + 0x20 + iVar8);
          }
        }
        if (*(int *)(*(int *)(iVar8 * 4 + iVar7 + 4) + 0x24) != 0) {
          bVar3 = true;
        }
        if (*(char *)(*(int *)(iVar8 * 4 + iVar7 + 4) + 2) != '\0') {
          bVar4 = true;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 3);
    if ((bVar4) && (bVar3)) {
      param_1[7] = '\x02';
    }
    *(undefined2 *)(param_1 + 0x14) = 0x3c;
    if (*(char *)(*(int *)(param_1 + 0x30) + 0x14) == '\0') {
      param_1[0x38] = '\x01';
    }
    else {
      param_1[0x38] = '\0';
    }
    uVar5 = 1;
    param_1[2] = '\x01';
    *param_1 = 'Z';
  }
  else if (uVar5 == 1) {
    cVar1 = *param_1;
    *param_1 = cVar1 + -1;
    if ((char)(cVar1 + -1) < '\0') {
      if (*DAT_00029030 != 0) {
        return *DAT_00029030;
      }
      iVar8 = 0;
      local_28 = 0;
      do {
        for (iVar6 = 0; iVar6 < (int)((int)*(char *)(iVar7 + 1 + iVar8) & 0xffU); iVar6 = iVar6 + 1)
        {
          (*DAT_00029034)(*(undefined4 *)(iVar7 + 4 + iVar8 * 4),param_1 + 0x18,local_28,iVar8);
          local_28 = local_28 + 1;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 3);
      (*DAT_00029038)(*(undefined *)(iVar7 + 0x15),(int)*(char *)(iVar7 + 0x16),
                      (int)*(char *)(iVar7 + 0x17));
      param_1[1] = '\x01';
      param_1[2] = '\0';
    }
    iVar7 = (*DAT_0002903c)();
    uVar5 = (uint)*(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x10) + 0x17);
    if (uVar5 != 0) {
      (*DAT_00029040)(0x1e,7);
      uVar5 = (*DAT_00029048)();
    }
  }
  return uVar5;
}



void FUN_0002a254(void)

{
  int iVar1;
  
  iVar1 = (*DAT_0002a2cc)();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 8);
  *(undefined4 *)(iVar1 + DAT_0002a2c6) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  return;
}



void FUN_0002a26e(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (*DAT_0002a2cc)();
  iVar3 = *(int *)(*(int *)(iVar1 + 0x10) + 4);
  iVar1 = (*DAT_0002a2cc)();
  iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + 8);
  iVar1 = (int)DAT_0002a2c8;
  *(undefined4 *)(iVar3 + iVar1) = param_1;
  *(undefined4 *)(iVar2 + DAT_0002a2ca) = *(undefined4 *)(iVar3 + iVar1);
  return;
}



void FUN_0002a2d0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  int iStack24;
  int iStack20;
  
  iVar1 = (*DAT_0002a408)();
  iVar3 = *(int *)(*(int *)(iVar1 + 0x10) + 4);
  iVar1 = (*DAT_0002a408)();
  iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + 8);
  iVar1 = (int)DAT_0002a402;
  local_1c = **(int **)(iVar3 + iVar1) - **(int **)(iVar3 + iVar1 + -4);
  iStack24 = *(int *)(*(int *)(iVar3 + iVar1) + 4) - *(int *)(*(int *)(iVar3 + iVar1 + -4) + 4);
  iStack20 = *(int *)(*(int *)(iVar3 + iVar1) + 8) - *(int *)(*(int *)(iVar3 + iVar1 + -4) + 8);
  (*DAT_0002a40c)(&local_1c,param_1);
  iVar1 = (int)DAT_0002a404;
  *(undefined4 *)(iVar1 + iVar3) = *param_1;
  ((undefined4 *)(iVar1 + iVar3))[1] = param_1[1];
  *(undefined4 *)(iVar2 + 100) = *param_1;
  *(undefined4 *)(iVar2 + 0x68) = param_1[1];
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0002a34e(undefined4 *param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uStack40;
  int local_24;
  int iStack32;
  int iStack28;
  
  pcVar2 = DAT_0002a408;
  iVar3 = (*DAT_0002a408)();
  iVar7 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
  iVar3 = (*pcVar2)();
  iVar6 = *(int *)(*(int *)(iVar3 + 0x10) + 8);
  iVar3 = (int)DAT_0002a402;
  local_24 = **(int **)(iVar7 + iVar3) - **(int **)(iVar7 + iVar3 + -4);
  iStack32 = *(int *)(*(int *)(iVar7 + iVar3) + 4) - *(int *)(*(int *)(iVar7 + iVar3 + -4) + 4);
  iStack28 = *(int *)(*(int *)(iVar7 + iVar3) + 8) - *(int *)(*(int *)(iVar7 + iVar3 + -4) + 8);
  (*DAT_0002a40c)(&local_24,param_1);
  uVar4 = *param_1;
  uVar5 = param_1[1];
  if ((uVar5 & DAT_0002a410) == 0) {
    uVar5 = _LAB_0002a417_1 & uVar5;
  }
  else {
    uVar5 = _DAT_0002a414 | uVar5;
  }
  iVar3 = (*pcVar2)();
  cVar1 = *(char *)((int)_LAB_0002a406 + *(int *)(*(int *)(iVar3 + 0x10) + 4));
  if (cVar1 == '\0') {
    if ((int)uVar5 < 0) {
      uStack40 = DAT_0002a4d8;
      if ((int)DAT_0002a4d8 <= (int)uVar5) {
        uStack40 = uVar5;
      }
    }
    else {
      uStack40 = DAT_0002a41c;
      if ((int)uVar5 < (int)DAT_0002a41c) {
        uStack40 = uVar5;
      }
    }
  }
  else if (cVar1 == '\x01') {
    if ((int)uVar5 < DAT_0002a4e4) {
      uStack40 = DAT_0002a4ec;
      if ((int)DAT_0002a4ec <= (int)uVar5) {
        uStack40 = uVar5;
      }
    }
    else {
      uStack40 = DAT_0002a4e8;
      if ((int)uVar5 < (int)DAT_0002a4e8) {
        uStack40 = uVar5;
      }
    }
  }
  else if (cVar1 == '\x02') {
    if ((int)uVar5 < 0) {
      uStack40 = DAT_0002a4e0;
      if ((int)uVar5 < (int)DAT_0002a4e0) {
        uStack40 = uVar5;
      }
    }
    else {
      uStack40 = DAT_0002a4dc;
      if ((int)DAT_0002a4dc <= (int)uVar5) {
        uStack40 = uVar5;
      }
    }
  }
  else {
    uStack40 = uVar5;
    if (cVar1 == '\x03') {
      if ((int)uVar5 < DAT_0002a4f0) {
        uStack40 = DAT_0002a4f8;
        if ((int)DAT_0002a4f8 <= (int)uVar5) {
          uStack40 = uVar5;
        }
      }
      else {
        uStack40 = DAT_0002a4f4;
        if ((int)uVar5 < (int)DAT_0002a4f4) {
          uStack40 = uVar5;
        }
      }
    }
  }
  iVar3 = (int)DAT_0002a4d4;
  *(undefined4 *)(iVar3 + iVar7) = uVar4;
  ((undefined4 *)(iVar3 + iVar7))[1] = uStack40;
  *(undefined4 *)(iVar6 + 100) = uVar4;
  *(uint *)(iVar6 + 0x68) = uStack40;
  return;
}



int FUN_0002a4fc(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*DAT_0002a5e4)();
  iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + 8);
  *(undefined4 *)(iVar2 + DAT_0002a5d8) = *param_1;
  iVar1 = (int)DAT_0002a5da;
  *(undefined4 *)(iVar2 + iVar1) = param_1[1];
  return iVar1;
}



void FUN_0002a524(void)

{
  int iVar1;
  int iVar2;
  undefined auStack16 [12];
  
  iVar1 = (*DAT_0002a5e4)();
  iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + 8);
  iVar1 = (int)DAT_0002a5dc;
  *(undefined4 *)(iVar2 + iVar1 + -0x38) = **(undefined4 **)(iVar2 + iVar1);
  *(undefined4 *)(iVar2 + iVar1 + -0x34) = *(undefined4 *)(*(int *)(iVar2 + iVar1) + 4);
  *(undefined4 *)(iVar2 + iVar1 + -0x30) = *(undefined4 *)(*(int *)(iVar2 + iVar1) + 8);
  FUN_0002a2d0(auStack16);
  FUN_0002a4fc(auStack16);
  iVar1 = (int)DAT_0002a5de;
  *(undefined4 *)(iVar2 + iVar1) = 0;
  *(undefined4 *)(iVar2 + iVar1 + 4) = 0;
  *(undefined4 *)(iVar2 + iVar1 + 8) = 0;
  iVar1 = (int)DAT_0002a5e0;
  *(undefined4 *)(iVar2 + iVar1) = 0;
  *(undefined4 *)(iVar2 + iVar1 + 4) = 0;
  *(undefined4 *)(iVar2 + iVar1 + 8) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0002ac62(int *param_1)

{
  code *pcVar1;
  short *psVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_38;
  int iStack52;
  int iStack48;
  int iStack44;
  int iStack40;
  int iStack36;
  
  iVar3 = _LAB_0002ad60;
  psVar2 = _LAB_0002ad5c;
  pcVar1 = _LAB_0002ad58;
  puVar5 = _LAB_0002ad54 + 0x18;
  for (puVar6 = _LAB_0002ad54; puVar6 < puVar5; puVar6 = puVar6 + 2) {
    puVar4 = puVar6 + 1;
    local_38 = *(int *)((char)((char)*puVar6 * '\f') + iVar3) + *param_1;
    iStack52 = *(int *)((char)((char)*puVar6 * '\f') + iVar3 + 4) + param_1[1];
    iStack48 = *(int *)((char)((char)*puVar6 * '\f') + iVar3 + 8) + param_1[2];
    iStack44 = *(int *)((char)((char)*puVar4 * '\f') + iVar3) + *param_1;
    iStack40 = *(int *)((char)((char)*puVar4 * '\f') + iVar3 + 4) + param_1[1];
    iStack36 = *(int *)((char)((char)*puVar4 * '\f') + iVar3 + 8) + param_1[2];
    (*pcVar1)(&local_38,(int)*psVar2);
  }
  return;
}



void FUN_0002b998(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack32;
  undefined4 uStack28;
  int iStack24;
  
  iVar3 = DAT_0002ba50;
  uVar2 = DAT_0002ba4c;
  uVar1 = DAT_0002ba38;
  iStack32 = (*DAT_0002ba58)(DAT_0002ba4c,
                             *(undefined4 *)
                              (DAT_0002ba50 +
                              (short)((ushort)((uint)*param_1 >> 0x10) & DAT_0002ba38) * 4),
                             *(undefined4 *)
                              ((short)((ushort)((uint)param_1[1] >> 0x10) & DAT_0002ba38) * 4 +
                              DAT_0002ba54));
  iStack32 = -iStack32;
  uStack28 = (*DAT_0002ba5c)(uVar2,*(undefined4 *)
                                    ((short)((ushort)((uint)*param_1 >> 0x10) & uVar1) * 4 +
                                    DAT_0002ba54));
  iStack24 = (*DAT_0002ba58)(uVar2,*(undefined4 *)
                                    (iVar3 + (short)((ushort)((uint)*param_1 >> 0x10) & uVar1) * 4),
                             *(undefined4 *)
                              (iVar3 + (short)((ushort)((uint)param_1[1] >> 0x10) & uVar1) * 4));
  iStack24 = -iStack24;
  (*DAT_0002ba60)(&iStack32,param_2);
  return;
}



uint FUN_0002be46(int param_1)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  pcVar2 = DAT_0002bea0;
  if ((*(uint *)(param_1 + DAT_0002be92) & 4) != 0) {
    sVar1 = *(short *)(param_1 + DAT_0002be9a);
    *(short *)(param_1 + DAT_0002be9a) = sVar1 + -1;
    if (sVar1 < 1) {
      iVar3 = (*pcVar2)();
      puVar5 = (undefined4 *)(DAT_0002be9c + param_1);
      puVar6 = (undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 8) + (int)DAT_0002be9e);
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      puVar6[2] = puVar5[2];
      *(uint *)(param_1 + DAT_0002be92) = *(uint *)(param_1 + DAT_0002be92) & 0xfffffffb;
    }
    else {
      iVar3 = (int)DAT_0002c002;
      iVar8 = (int)DAT_0002c000;
      iVar9 = (int)DAT_0002c000;
      *(int *)(DAT_0002c000 + param_1) =
           *(int *)(DAT_0002c000 + param_1) + *(int *)(param_1 + iVar3);
      *(int *)(iVar9 + param_1 + 4) = *(int *)(iVar9 + param_1 + 4) + *(int *)(param_1 + iVar3 + 4);
      *(int *)(iVar8 + param_1 + 8) = *(int *)(iVar8 + param_1 + 8) + *(int *)(param_1 + iVar3 + 8);
      iVar3 = (*pcVar2)();
      puVar5 = (undefined4 *)(DAT_0002c000 + param_1);
      puVar6 = (undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 8) + (int)DAT_0002c004);
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      puVar6[2] = puVar5[2];
    }
  }
  uVar4 = *(uint *)(param_1 + DAT_0002c006);
  if ((uVar4 & 8) != 0) {
    sVar1 = *(short *)(param_1 + DAT_0002c008);
    *(short *)(param_1 + DAT_0002c008) = sVar1 + -1;
    if (sVar1 < 1) {
      iVar3 = (*pcVar2)();
      puVar5 = (undefined4 *)(DAT_0002c00a + param_1);
      puVar6 = (undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 8) + (int)DAT_0002c00c);
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      puVar6[2] = puVar5[2];
      uVar4 = (uint)DAT_0002c006;
      *(uint *)(param_1 + uVar4) = *(uint *)(param_1 + uVar4) & 0xfffffff7;
    }
    else {
      iVar3 = (int)DAT_0002c00e;
      iVar8 = (int)DAT_0002c000;
      piVar7 = (int *)(DAT_0002c000 + param_1 + 0xc);
      iVar9 = (int)DAT_0002c000;
      *piVar7 = *piVar7 + *(int *)(param_1 + iVar3);
      *(int *)(iVar8 + param_1 + 0x10) =
           *(int *)(iVar8 + param_1 + 0x10) + *(int *)(param_1 + iVar3 + 4);
      *(int *)(iVar9 + param_1 + 0x14) =
           *(int *)(iVar9 + param_1 + 0x14) + *(int *)(param_1 + iVar3 + 8);
      iVar3 = (*pcVar2)();
      puVar5 = (undefined4 *)(DAT_0002c010 + param_1);
      puVar6 = (undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 8) + (int)DAT_0002c00c);
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      uVar4 = puVar5[2];
      puVar6[2] = uVar4;
    }
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0002bfa8(int param_1)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = (*_LAB_0002c017_1)();
  if (*(char *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x10) + 0x12) != '\0') {
    if ((_DAT_0002c012 & *(ushort *)(_LAB_0002c01b_1 + 8)) == 0) {
      if (((_LAB_0002c01f_1 & (int)*(short *)(_LAB_0002c01b_1 + 8)) != 0) &&
         (bVar2 = *(char *)(param_1 + _LAB_0002c013_1) + 1,
         *(byte *)(param_1 + _LAB_0002c013_1) = bVar2, 4 < bVar2)) {
        *(undefined *)(param_1 + _LAB_0002c013_1) = 0;
      }
    }
    else {
      bVar2 = *(char *)(param_1 + _LAB_0002c013_1) - 1;
      *(byte *)(param_1 + _LAB_0002c013_1) = bVar2;
      if (4 < bVar2) {
        *(undefined *)(param_1 + _LAB_0002c013_1) = 4;
      }
    }
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps

int * FUN_0002c024(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int local_14;
  int iStack16;
  int iStack12;
  
  iVar3 = (*DAT_0002c0a8)();
  if (*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x10) + 0x12) == '\0') {
    return (int *)0x12;
  }
  piVar4 = (int *)((int)*(char *)(param_1 + DAT_0002c09c) & 0xff);
  if (piVar4 == (int *)0x0) {
    puVar5 = (undefined4 *)(DAT_0002c09e + param_1);
    local_14._0_2_ = (short)((uint)*puVar5 >> 0x10);
    iStack16._0_2_ = (short)((uint)puVar5[1] >> 0x10);
    iStack12._0_2_ = (short)((uint)puVar5[2] >> 0x10);
  }
  else {
    sVar1 = DAT_0002c0a0;
    if (piVar4 != (int *)0x1) {
      if (piVar4 == (int *)0x2) {
        puVar5 = (undefined4 *)(DAT_0002c0a2 + param_1);
        local_14._0_2_ = (short)((uint)*puVar5 >> 0x10);
        iStack16._0_2_ = (short)((uint)puVar5[1] >> 0x10);
        iStack12._0_2_ = (short)((uint)puVar5[2] >> 0x10);
        goto LAB_0002c0ac;
      }
      sVar1 = DAT_0002c0a4;
      if (piVar4 != (int *)&LAB_00000002_1) {
        return piVar4;
      }
    }
    puVar5 = (undefined4 *)(sVar1 + param_1);
    local_14._0_2_ = (short)((uint)*puVar5 >> 0x10);
    iStack16._0_2_ = (short)((uint)puVar5[1] >> 0x10);
    iStack12._0_2_ = (short)((uint)puVar5[2] >> 0x10);
  }
LAB_0002c0ac:
  local_14 = (int)local_14._0_2_;
  iStack16 = (int)iStack16._0_2_;
  iStack12 = (int)iStack12._0_2_;
  if (((*(ushort *)(DAT_0002c1b4 + 0x78) & 4) != 0) && (-0x1f < local_14)) {
    local_14 = local_14 + -1;
  }
  if (((*(ushort *)(DAT_0002c1b4 + 0x78) & 1) != 0) && (-0x1f < iStack16)) {
    iStack16 = iStack16 + -1;
  }
  if (((*(ushort *)(DAT_0002c1b4 + 0x78) & 2) != 0) && (-0x1f < iStack12)) {
    iStack12 = iStack12 + -1;
  }
  if (((DAT_0002c1a4 & *(ushort *)(DAT_0002c1b4 + 0x78)) != 0) && (local_14 < 0x1f)) {
    local_14 = local_14 + 1;
  }
  if (((DAT_0002c1a6 & *(ushort *)(DAT_0002c1b4 + 0x78)) != 0) && (iStack16 < 0x1f)) {
    iStack16 = iStack16 + 1;
  }
  if (((DAT_0002c1a8 & *(ushort *)(DAT_0002c1b4 + 0x78)) != 0) && (iStack12 < 0x1f)) {
    iStack12 = iStack12 + 1;
  }
  local_14 = local_14 << 0x10;
  iStack16 = iStack16 << 0x10;
  iStack12 = iStack12 << 0x10;
  piVar4 = (int *)((int)*(char *)(param_1 + DAT_0002c1aa) & 0xff);
  if (piVar4 == (int *)0x0) {
    piVar6 = (int *)(DAT_0002c1ac + param_1);
    *piVar6 = local_14;
    piVar6[1] = iStack16;
    piVar6[2] = iStack12;
  }
  else {
    sVar1 = DAT_0002c1ae;
    if ((piVar4 == (int *)0x1) ||
       ((sVar2 = DAT_0002c1b0, piVar4 != (int *)0x2 &&
        (sVar2 = DAT_0002c2ce, sVar1 = DAT_0002c1b2, piVar4 == (int *)&LAB_00000002_1)))) {
      piVar4 = (int *)(sVar1 + param_1);
      *piVar4 = local_14;
      piVar4[1] = iStack16;
      piVar4[2] = iStack12;
    }
    else {
      piVar6 = (int *)(sVar2 + param_1);
      *piVar6 = local_14;
      piVar6[1] = iStack16;
      piVar6[2] = iStack12;
    }
  }
  return piVar4;
}



void FUN_0002c1d0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (*DAT_0002c2e4)();
  iVar1 = DAT_0002c2ec;
  iVar4 = DAT_0002c2e8;
  if (*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x10) + 0x12) != '\0') {
    if (*(char *)(param_1 + DAT_0002c2d0) == '\x04') {
      if ((DAT_0002c2d2 & *(ushort *)(DAT_0002c2ec + 0x78)) != 0) {
        *(int *)(param_1 + DAT_0002c2d4) = *(int *)(param_1 + DAT_0002c2d4) + DAT_0002c2e8;
      }
      if ((*(ushort *)(iVar1 + 0x78) & 4) != 0) {
        *(int *)(param_1 + DAT_0002c2d4) = *(int *)(param_1 + DAT_0002c2d4) - iVar4;
      }
      if ((DAT_0002c2d6 & *(ushort *)(iVar1 + 0x78)) != 0) {
        *(int *)(param_1 + DAT_0002c2d8) = *(int *)(param_1 + DAT_0002c2d8) + iVar4;
      }
      if ((*(ushort *)(iVar1 + 0x78) & 1) != 0) {
        *(int *)(param_1 + DAT_0002c2d8) = *(int *)(param_1 + DAT_0002c2d8) - iVar4;
      }
    }
    uVar2 = DAT_0002c2f0;
    iVar4 = (int)DAT_0002c2d4;
    *(uint *)(param_1 + iVar4) = *(uint *)(param_1 + iVar4) & DAT_0002c2f0;
    *(uint *)(param_1 + iVar4 + 4) = *(uint *)(param_1 + iVar4 + 4) & uVar2;
  }
  return;
}



void FUN_0002c55c(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
  pcVar1 = DAT_0002c624;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar2 = (*pcVar1)();
  pcVar1 = DAT_0002c624;
  *(undefined4 *)(param_1 + 100) =
       *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_0002c60c);
  iVar2 = (*pcVar1)();
  *(undefined4 *)(param_1 + 0x68) =
       *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_0002c610);
  iVar2 = (int)DAT_0002c612;
  *(undefined4 *)(param_1 + iVar2) = 0;
  *(undefined4 *)(param_1 + iVar2 + -4) = 0;
  return;
}



void FUN_0002c5a2(int param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_0002c624)();
  if (*(char *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x10) + 0xb) == '\0') {
    (*DAT_0002c628)(param_1);
    FUN_0002c644(param_1);
    (*DAT_0002c62c)(DAT_0002c614 + param_1);
    (*DAT_0002c630)(param_1);
    (*DAT_0002c634)(DAT_0002c616 + param_1,DAT_0002c614 + param_1);
    if ((*(uint *)(param_1 + DAT_0002c60c) & 2) == 0) {
      (*DAT_0002c63c)(param_1);
    }
    else {
      (*DAT_0002c638)(param_1);
    }
                    // WARNING: Could not recover jumptable at 0x0002c5fe. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_0002c640)(DAT_0002c618 + param_1,DAT_0002c614 + param_1);
    return;
  }
  return;
}



void FUN_0002c644(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  pcVar1 = DAT_0002c800;
  iVar2 = (int)DAT_0002c7e6;
  iVar3 = (*DAT_0002c800)(*(int *)(param_1 + iVar2 + 0x2c) - *(int *)(param_1 + iVar2 + -0x24),
                          *(undefined4 *)(param_1 + iVar2 + 0x24));
  *(int *)(iVar2 + param_1) = *(int *)(iVar2 + param_1) + iVar3;
  iVar2 = (int)DAT_0002c7e6;
  iVar3 = (*pcVar1)(*(undefined4 *)(param_1 + iVar2),*(undefined4 *)(param_1 + iVar2 + 0x28));
  *(int *)(iVar2 + param_1) = *(int *)(iVar2 + param_1) - iVar3;
  iVar2 = (int)DAT_0002c7e8;
  *(int *)(param_1 + iVar2) = *(int *)(param_1 + iVar2) + *(int *)(iVar2 + 0x24 + param_1);
  piVar4 = (int *)(iVar2 + 0x28 + param_1);
  iVar2 = (*pcVar1)(*(int *)(param_1 + iVar2 + 0x54) - *(int *)(param_1 + iVar2 + 4),
                    *(undefined4 *)(param_1 + iVar2 + 0x48));
  *piVar4 = *piVar4 + iVar2;
  iVar2 = (int)DAT_0002c7ea;
  iVar3 = (*pcVar1)(*(undefined4 *)(param_1 + iVar2),*(undefined4 *)(param_1 + iVar2 + 0x24));
  *(int *)(iVar2 + param_1) = *(int *)(iVar2 + param_1) - iVar3;
  iVar2 = (int)DAT_0002c7ec;
  *(int *)(param_1 + iVar2) = *(int *)(param_1 + iVar2) + *(int *)(iVar2 + 0x24 + param_1);
  piVar4 = (int *)(iVar2 + 0x28 + param_1);
  iVar2 = (*pcVar1)(*(int *)(param_1 + iVar2 + 0x54) - *(int *)(param_1 + iVar2 + 4),
                    *(undefined4 *)(param_1 + iVar2 + 0x44));
  *piVar4 = *piVar4 + iVar2;
  iVar2 = (int)DAT_0002c7ee;
  iVar3 = (*pcVar1)(*(undefined4 *)(param_1 + iVar2),*(undefined4 *)(param_1 + iVar2 + 0x20));
  *(int *)(iVar2 + param_1) = *(int *)(iVar2 + param_1) - iVar3;
  iVar2 = (int)DAT_0002c7f0;
  *(int *)(param_1 + iVar2) = *(int *)(param_1 + iVar2) + *(int *)(iVar2 + 0x24 + param_1);
  piVar4 = (int *)(iVar2 + 0x28 + param_1);
  iVar2 = (*pcVar1)(*(int *)(param_1 + iVar2 + 0x54) - *(int *)(param_1 + iVar2 + 4),
                    *(undefined4 *)(param_1 + iVar2 + 0x40));
  *piVar4 = *piVar4 + iVar2;
  iVar2 = (int)DAT_0002c7f2;
  iVar3 = (*pcVar1)(*(undefined4 *)(param_1 + iVar2),*(undefined4 *)(param_1 + iVar2 + 0x1c));
  *(int *)(iVar2 + param_1) = *(int *)(iVar2 + param_1) - iVar3;
  iVar2 = (int)DAT_0002c7f4;
  *(int *)(param_1 + iVar2) = *(int *)(param_1 + iVar2) + *(int *)(iVar2 + 0x24 + param_1);
  piVar4 = (int *)(iVar2 + 0x28 + param_1);
  iVar2 = (*pcVar1)(*(int *)(param_1 + iVar2 + 0x54) - *(int *)(param_1 + iVar2 + 4),
                    *(undefined4 *)(param_1 + iVar2 + 0x3c));
  *piVar4 = *piVar4 + iVar2;
  iVar2 = (int)DAT_0002c7f6;
  iVar3 = (*pcVar1)(*(undefined4 *)(param_1 + iVar2),*(undefined4 *)(param_1 + iVar2 + 0x18));
  *(int *)(iVar2 + param_1) = *(int *)(iVar2 + param_1) - iVar3;
  iVar2 = (int)DAT_0002c7f8;
  *(int *)(param_1 + iVar2) = *(int *)(param_1 + iVar2) + *(int *)(iVar2 + 0x24 + param_1);
  piVar4 = (int *)(iVar2 + 0x28 + param_1);
  iVar2 = (*pcVar1)(*(int *)(param_1 + iVar2 + 0x54) - *(int *)(param_1 + iVar2 + 4),
                    *(undefined4 *)(param_1 + iVar2 + 0x38));
  *piVar4 = *piVar4 + iVar2;
  iVar2 = (int)DAT_0002c7fa;
  iVar3 = (*pcVar1)(*(undefined4 *)(param_1 + iVar2),*(undefined4 *)(param_1 + iVar2 + 0x14));
  *(int *)(iVar2 + param_1) = *(int *)(iVar2 + param_1) - iVar3;
  iVar2 = (int)DAT_0002c7fc;
  *(int *)(param_1 + iVar2) = *(int *)(param_1 + iVar2) + *(int *)(iVar2 + 0x24 + param_1);
  return;
}



void FUN_0002e716(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  ushort uVar2;
  int *piVar3;
  code *pcVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined *puVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  char acStack65568 [65520];
  int aiStack48 [4];
  int *local_20;
  
  pcVar4 = DAT_0002e7a8;
  piVar3 = DAT_0002e7a4;
  uVar2 = DAT_0002e78c;
  iVar6 = (int)DAT_0002e786;
  *(undefined **)(&stack0xffffffe8 + iVar6) = &stack0x0000000c + iVar6;
  *(int *)(&stack0x0000000c + iVar6) = param_1 + param_3;
  *(undefined **)(&stack0xffffffe4 + iVar6) = &stack0x00000018 + iVar6;
  *(int *)(&stack0x00000018 + iVar6) = param_1 - param_3;
  *(undefined **)((int)&local_20 + iVar6) = &stack0x00000010 + iVar6;
  *(int *)(&stack0x00000010 + iVar6) = param_2 + param_4;
  *(undefined **)(&stack0xffffffec + iVar6) = &stack0x00000014 + iVar6;
  *(int *)(&stack0x00000014 + iVar6) = param_2 - param_4;
  piVar15 = (int *)((int)&local_20 + DAT_0002e788 + iVar6);
  puVar13 = &stack0x0000001c + iVar6;
  piVar16 = (int *)((int)&local_20 + DAT_0002e78a + iVar6);
  *(undefined **)(&stack0xfffffffc + iVar6) = puVar13;
  *(undefined **)(&stack0xfffffff0 + iVar6) = &stack0x00000028 + iVar6;
  *(undefined **)(&stack0xfffffff4 + iVar6) = &stack0x00000020 + iVar6;
  *(undefined **)(&stack0xfffffff8 + iVar6) = &stack0x00000024 + iVar6;
  iVar14 = 0;
  do {
    if (4 < iVar14) {
      return;
    }
    iVar7 = (*pcVar4)(*(undefined4 *)
                       ((short)((ushort)((uint)(**(int **)(&stack0xffffffe8 + iVar6) +
                                               iVar14 * *piVar3) >> 0x10) & uVar2) * 4 +
                       DAT_0002e918),*(undefined4 *)((int)&local_20 + DAT_0002e906 + iVar6));
    *(int *)((int)&local_20 + DAT_0002e908 + iVar6) = iVar7 + piVar15[1];
    iVar7 = (*pcVar4)(*(undefined4 *)
                       ((short)((ushort)((uint)(**(int **)(&stack0xffffffe4 + iVar6) +
                                               iVar14 * *piVar3) >> 0x10) & uVar2) * 4 +
                       DAT_0002e918),*(undefined4 *)((int)&local_20 + DAT_0002e906 + iVar6));
    *(int *)((int)&local_20 + DAT_0002e90a + iVar6) = iVar7 + piVar15[1];
    iVar7 = (*pcVar4)(*(undefined4 *)
                       ((short)((ushort)((uint)(**(int **)((int)&local_20 + iVar6) +
                                               iVar14 * *piVar3) >> 0x10) & uVar2) * 4 +
                       DAT_0002e918),*(undefined4 *)((int)&local_20 + DAT_0002e90c + iVar6));
    *(int *)((int)&local_20 + DAT_0002e90e + iVar6) = iVar7 + piVar16[1];
    iVar7 = (*pcVar4)(*(undefined4 *)
                       ((short)((ushort)((uint)(**(int **)(&stack0xffffffec + iVar6) +
                                               iVar14 * *piVar3) >> 0x10) & uVar2) * 4 +
                       DAT_0002e918),*(undefined4 *)((int)&local_20 + DAT_0002e90c + iVar6));
    *(int *)((int)&local_20 + DAT_0002e910 + iVar6) = iVar7 + piVar16[1];
    *(undefined4 *)((int)aiStack48 + iVar6 + 0xc) = *(undefined4 *)(&stack0xfffffffc + iVar6);
    uVar8 = (*pcVar4)(*(undefined4 *)
                       ((short)((ushort)((uint)(iVar14 * *piVar3 +
                                               **(int **)(&stack0xffffffe8 + iVar6)) >> 0x10) &
                               uVar2) * 4 + DAT_0002e91c),
                      *(undefined4 *)((int)aiStack48 + DAT_0002e90c + iVar6 + 0xc));
    **(undefined4 **)((int)aiStack48 + iVar6 + 0xc) = uVar8;
    *(undefined4 *)((int)aiStack48 + iVar6 + 0xc) = *(undefined4 *)(&stack0xfffffff0 + iVar6);
    uVar8 = (*pcVar4)(*(undefined4 *)
                       ((short)((ushort)((uint)(iVar14 * *piVar3 +
                                               **(int **)(&stack0xffffffe4 + iVar6)) >> 0x10) &
                               uVar2) * 4 + DAT_0002e91c),
                      *(undefined4 *)((int)aiStack48 + DAT_0002e90c + iVar6 + 0xc));
    **(undefined4 **)((int)aiStack48 + iVar6 + 0xc) = uVar8;
    *(undefined4 *)((int)aiStack48 + iVar6 + 0xc) = *(undefined4 *)(&stack0xfffffff4 + iVar6);
    uVar8 = (*pcVar4)(*(undefined4 *)
                       ((short)((ushort)((uint)(iVar14 * *piVar3 +
                                               **(int **)((int)&local_20 + iVar6)) >> 0x10) & uVar2)
                        * 4 + DAT_0002e91c),
                      *(undefined4 *)((int)aiStack48 + DAT_0002e912 + iVar6 + 0xc));
    **(undefined4 **)((int)aiStack48 + iVar6 + 0xc) = uVar8;
    *(undefined4 *)((int)aiStack48 + iVar6 + 0xc) = *(undefined4 *)(&stack0xfffffff8 + iVar6);
    uVar8 = (*pcVar4)(*(undefined4 *)
                       ((short)((ushort)((uint)(iVar14 * *piVar3 +
                                               **(int **)(&stack0xffffffec + iVar6)) >> 0x10) &
                               uVar2) * 4 + DAT_0002e91c),
                      *(undefined4 *)((int)aiStack48 + DAT_0002e912 + iVar6 + 0xc));
    pcVar5 = DAT_0002e920;
    **(undefined4 **)((int)aiStack48 + iVar6 + 0xc) = uVar8;
    iVar7 = (*pcVar5)();
    cVar1 = *(char *)((int)DAT_0002e914 + *(int *)(*(int *)(iVar7 + 0x10) + 4));
    if (cVar1 == '\0') {
LAB_0002e924:
      iVar7 = 0;
      do {
        if (iVar7 == 0) {
LAB_0002e93c:
          iVar10 = (int)(char)((char)iVar7 * '\f');
          *(int *)(&stack0x0000005c + iVar10 + iVar6) = *(int *)(puVar13 + iVar7 * 4) + *piVar15;
          puVar9 = &stack0x0000005c + iVar10 + iVar6;
          iVar10 = piVar15[2];
LAB_0002e98a:
          *(int *)(puVar9 + 8) = iVar10;
        }
        else {
          if ((iVar7 == 1) || (iVar7 == 2)) {
            iVar11 = (int)(char)((char)iVar7 * '\f');
            *(int *)(&stack0x0000005c + iVar11 + iVar6) = *(int *)(puVar13 + iVar7 * 4) + *piVar16;
            iVar10 = piVar16[2];
            puVar9 = &stack0x0000005c + iVar11 + iVar6;
            goto LAB_0002e98a;
          }
          if (iVar7 == 3) goto LAB_0002e93c;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 4);
    }
    else if (cVar1 == '\x01') {
LAB_0002e998:
      iVar7 = 0;
      do {
        if (iVar7 == 0) {
LAB_0002e9b0:
          iVar10 = (int)(char)((char)iVar7 * '\f');
          *(int *)(&stack0x00000064 + iVar10 + iVar6) = *(int *)(puVar13 + iVar7 * 4) + piVar15[2];
          piVar12 = (int *)(&stack0x0000005c + iVar10 + iVar6);
          iVar10 = *piVar15;
LAB_0002e9fe:
          *piVar12 = iVar10;
        }
        else {
          if ((iVar7 == 1) || (iVar7 == 2)) {
            iVar11 = (int)(char)((char)iVar7 * '\f');
            *(int *)(&stack0x00000064 + iVar11 + iVar6) = *(int *)(puVar13 + iVar7 * 4) + piVar16[2]
            ;
            iVar10 = *piVar16;
            piVar12 = (int *)(&stack0x0000005c + iVar11 + iVar6);
            goto LAB_0002e9fe;
          }
          if (iVar7 == 3) goto LAB_0002e9b0;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 4);
    }
    else {
      if (cVar1 == '\x02') goto LAB_0002e924;
      if (cVar1 == '\x03') goto LAB_0002e998;
    }
    cVar1 = *(char *)((int)&local_20 + DAT_0002ea1e + iVar6);
    if (cVar1 == '\0') {
      *(undefined2 *)(&stack0x00000000 + iVar6) = 0;
      *(undefined2 *)(&stack0x00000004 + iVar6) = DAT_0002eb56;
      *(undefined2 *)(&stack0x00000008 + iVar6) = DAT_0002eb58;
    }
    else {
      if (cVar1 == '\x01') {
        *(undefined2 *)(&stack0x00000000 + iVar6) = 0x3c;
        *(undefined2 *)(&stack0x00000004 + iVar6) = DAT_0002eb56;
      }
      else {
        if (cVar1 != '\x02') goto LAB_0002ea58;
        *(undefined2 *)(&stack0x00000000 + iVar6) = 0x78;
        *(undefined2 *)(&stack0x00000004 + iVar6) = DAT_0002eb56;
      }
      *(undefined2 *)(&stack0x00000008 + iVar6) = DAT_0002eb58;
    }
LAB_0002ea58:
    *(undefined4 *)((int)aiStack48 + iVar6 + 0xc) = 0xc;
    *(undefined4 *)((int)aiStack48 + iVar6 + 8) =
         *(undefined4 *)((int)aiStack48 + DAT_0002eb5a + iVar6 + 0xc);
    iVar7 = (*DAT_0002eb68)();
    *(int *)((int)aiStack48 + iVar6 + 4) =
         (int)*(short *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0002eb5c) + 4) +
         (int)*(short *)(&stack0x00000008 + iVar6);
    *(int *)((int)aiStack48 + iVar6) = (int)*(short *)(&stack0x00000004 + iVar6);
    iVar7 = (*DAT_0002eb68)();
    (*DAT_0002eb6c)((int)aiStack48 + DAT_0002eb5e + iVar6,0,
                    (int)*(short *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) +
                                            (int)DAT_0002eb5c) + 4) +
                    (int)*(short *)(&stack0x00000000 + iVar6),
                    *(undefined4 *)((int)aiStack48 + iVar6));
    iVar14 = iVar14 + 1;
  } while( true );
}



int FUN_0002eac4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  ushort uVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar5 = (*DAT_0002eb74)(param_1,DAT_0002eb70,0x3c);
  pcVar4 = DAT_0002eb78;
  if (iVar5 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar5 + 0x30) = param_2;
  uVar6 = (*DAT_0002eb7c)();
  uVar7 = (*pcVar4)(uVar6 >> 0x10,DAT_0002eb80);
  pcVar3 = DAT_0002eb68;
  uVar2 = DAT_0002eb62;
  *(undefined4 *)(iVar5 + 0x38) = uVar7;
  *(undefined *)(iVar5 + 0x34) = 0;
  *(undefined4 *)(iVar5 + 0x24) = param_5;
  *(undefined4 *)(iVar5 + 0x28) = param_6;
  *(undefined4 *)(iVar5 + 0x2c) = param_7;
  local_24 = *(int *)(iVar5 + 0x24);
  local_20 = *(int *)(iVar5 + 0x28);
  local_1c = *(int *)(iVar5 + 0x2c);
  iVar8 = (*pcVar3)();
  cVar1 = *(char *)((int)DAT_0002eb64 + *(int *)(*(int *)(iVar8 + 0x10) + 4));
  if (cVar1 == '\0') {
LAB_0002eb84:
    iVar8 = (*pcVar4)(*(undefined4 *)
                       ((short)((ushort)((uint)*(undefined4 *)(iVar5 + 0x38) >> 0x10) & uVar2) * 4 +
                       DAT_0002eccc),*(undefined4 *)(iVar5 + 0x30));
    local_24 = local_24 + iVar8;
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') goto LAB_0002eb84;
      if (cVar1 != '\x03') goto LAB_0002ebd0;
    }
    iVar8 = (*pcVar4)(*(undefined4 *)
                       ((short)((ushort)((uint)*(undefined4 *)(iVar5 + 0x38) >> 0x10) & uVar2) * 4 +
                       DAT_0002eccc),*(undefined4 *)(iVar5 + 0x30));
    local_1c = local_1c + iVar8;
  }
  iVar8 = (*pcVar4)(*(undefined4 *)
                     ((short)((ushort)((uint)*(undefined4 *)(iVar5 + 0x38) >> 0x10) & uVar2) * 4 +
                     DAT_0002ecd0),*(undefined4 *)(iVar5 + 0x30));
  local_20 = local_20 + iVar8;
LAB_0002ebd0:
  iVar8 = (*pcVar3)();
  local_24 = local_24 - *(int *)(*(int *)(*(int *)(iVar8 + 0x10) + 4) + (int)DAT_0002ecc2);
  iVar8 = (*pcVar3)();
  local_20 = local_20 - *(int *)(*(int *)(*(int *)(iVar8 + 0x10) + 4) + (int)DAT_0002ecc4);
  iVar8 = (*pcVar3)();
  uVar7 = DAT_0002ecd8;
  local_1c = local_1c - *(int *)(*(int *)(*(int *)(iVar8 + 0x10) + 4) + (int)DAT_0002ecc6);
  *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(*(int *)(*DAT_0002ecd4 + 0xc) + 4);
  (*DAT_0002ecdc)(iVar5 + 8,iVar5,&local_24,(int)*(short *)(*(int *)(iVar5 + 4) + 4),uVar7);
  return iVar5;
}



void FUN_0002ed8c(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0002ee40;
  iVar2 = DAT_0002ee3c;
  *(ushort *)(*(int *)(DAT_0002ee3c + 4) + 0x20) =
       *(ushort *)(*(int *)(DAT_0002ee3c + 4) + 0x20) & 0xfffe;
  *(undefined4 *)(iVar2 + 0x14) = 1;
  *(undefined *)(iVar1 + 0x4d) = 6;
  if (*(char *)(iVar1 + 0x4c) < '\a') {
    iVar2 = iVar2 + 0x20;
    *(undefined2 *)(iVar2 + DAT_0002ee24) = 0x4a;
    *(undefined2 *)(iVar2 + DAT_0002ee26) = 0x4a;
  }
  (*DAT_0002ee4c)(iVar1,DAT_0002ee48,DAT_0002ee44,10);
  *(undefined *)(iVar1 + 0x4d) = 5;
  return;
}



void FUN_0002edd8(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0002ee40;
  iVar2 = DAT_0002ee3c;
  *(ushort *)(*(int *)(DAT_0002ee3c + 4) + 0x20) =
       *(ushort *)(*(int *)(DAT_0002ee3c + 4) + 0x20) | 1;
  *(undefined4 *)(iVar2 + 0x14) = 1;
  *(undefined *)(iVar1 + 0x4d) = 6;
  if (*(char *)(iVar1 + 0x4c) < '\a') {
    iVar2 = iVar2 + 0x20;
    *(undefined2 *)(iVar2 + DAT_0002ee24) = 0x4a;
    *(undefined2 *)(iVar2 + DAT_0002ee26) = 0x4a;
  }
  (*DAT_0002ee4c)(iVar1,DAT_0002ee44,DAT_0002ee48,10);
  *(undefined *)(iVar1 + 0x4d) = 5;
  return;
}



int FUN_0002fc10(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*DAT_0002fcb4)(param_1,DAT_0002fcb0,0x7c);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 8) = param_1;
    *(undefined4 *)(iVar1 + 0x68) = param_2;
  }
  return iVar1;
}



uint FUN_0002fed2(int *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  
  uVar2 = (int)*(short *)(param_1 + 0x18) & 0xffff;
  if (uVar2 == 0) {
    iVar3 = (*DAT_0002ffb8)();
    *param_1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0002ffac);
    iVar5 = *param_1;
    iVar3 = param_1[2];
    iVar3 = (*DAT_0002ffbc)(param_1,param_1 + 4,0,iVar5,(int)*(short *)(iVar3 + 0x2c),
                            *(undefined4 *)(iVar5 + *(short *)(iVar3 + 0x2e)),
                            *(undefined4 *)(*(short *)(iVar3 + 0x30) + iVar5),0,0);
    if (iVar3 == 0) {
      if (param_1 == (int *)0x0) {
        return 0;
      }
      uVar2 = param_1[-1];
      param_1[-1] = uVar2 | 1;
      return uVar2 | 1;
    }
    param_1[-3] = DAT_0002ffc0;
    if (param_1[0x10] == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined2 *)(param_1[0x10] + 4);
    }
    *(undefined2 *)((int)param_1 + 0x62) = uVar4;
    *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x18) + 1;
  }
  else if (uVar2 != 1) {
    return uVar2;
  }
  uVar2 = 100;
  sVar1 = *(short *)(param_1 + 0x19);
  *(ushort *)(param_1 + 0x19) = sVar1 + 1U;
  if (*(ushort *)((int)param_1 + 0x62) <= (ushort)(sVar1 + 1U)) {
    if (param_1 != (int *)0x0) {
      uVar2 = param_1[-1] | 1;
      param_1[-1] = uVar2;
    }
    return uVar2;
  }
                    // WARNING: Could not recover jumptable at 0x0002ff8c. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar2 = (*DAT_0002ffc4)(param_1 + 4);
  return uVar2;
}



void FUN_0002ffc8(int param_1,short param_2)

{
  code *pcVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  short sVar7;
  undefined4 uVar6;
  int iVar8;
  int iVar9;
  int iVar10;
  
  pcVar2 = DAT_000300cc;
  pcVar1 = DAT_000300c8;
  if ((param_1 != 0) && ((DAT_000300c4 & *(uint *)(param_1 + 0x50)) == 0)) {
    piVar3 = (int *)(*DAT_000300cc)(param_1);
    iVar8 = *piVar3;
    iVar4 = (*pcVar1)();
    iVar8 = iVar8 - *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + 8);
    iVar4 = (*pcVar2)(param_1);
    iVar9 = *(int *)(iVar4 + 4);
    iVar4 = (*pcVar1)();
    iVar9 = iVar9 - *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + 0xc);
    iVar4 = (*pcVar2)(param_1);
    iVar10 = *(int *)(iVar4 + 8);
    iVar4 = (*pcVar1)();
    iVar10 = iVar10 - *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + 0x10);
    iVar4 = (*pcVar1)();
    if (*(char *)((int)DAT_000300be + *(int *)(*(int *)(iVar4 + 0x10) + 4)) == '\x01') {
      iVar4 = (int)param_2;
    }
    else {
      iVar4 = (*DAT_000300d0)((int)param_2);
    }
    iVar5 = (*pcVar1)();
    if (*(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x10) + 0x1d) != '\0') {
      iVar4 = (*DAT_000300d0)((int)DAT_000300c0);
    }
    sVar7 = (*DAT_000300d4)(param_1,iVar4,2);
    iVar4 = (int)DAT_000300c2;
    uVar6 = (*pcVar2)(param_1);
    (*DAT_000300d8)(param_1,(int)sVar7,uVar6,3,iVar8,iVar9,iVar10,iVar4);
  }
  return;
}



void FUN_000300dc(short param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  pcVar1 = DAT_000301bc;
  iVar2 = (*DAT_000301bc)();
  iVar5 = *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x18) + 8);
  iVar2 = (*pcVar1)();
  iVar5 = iVar5 - *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + 0xc);
  iVar2 = (*pcVar1)();
  iVar6 = *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x18) + 0xc);
  iVar2 = (*pcVar1)();
  iVar6 = iVar6 - *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + 0x10);
  iVar2 = (*pcVar1)();
  iVar7 = *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x18) + 0x10);
  iVar2 = (*pcVar1)();
  iVar7 = iVar7 - *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + 0x14);
  iVar3 = (int)DAT_000301b8;
  iVar2 = (*pcVar1)();
  iVar4 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
  iVar2 = (*pcVar1)();
  (*DAT_000301c0)((int)DAT_000301ba + *(int *)(*(int *)(iVar2 + 0x10) + 0x18),(int)param_1,iVar4 + 8
                  ,2,iVar5,iVar6,iVar7,iVar3);
  return;
}



undefined4 FUN_00030180(void)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  pcVar1 = DAT_000301bc;
  piVar3 = DAT_000301c4 + 2;
  piVar4 = DAT_000301c4;
  if (DAT_000301c4 < piVar3) {
    do {
      iVar2 = (*pcVar1)();
      if ((int)*(short *)(iVar2 + 2) == *piVar4) {
        return 1;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 < piVar3);
  }
  return 0;
}



void FUN_00031aee(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00031b9c;
  iVar2 = DAT_00031b98;
  *(ushort *)(*(int *)(DAT_00031b98 + 4) + 0x20) =
       *(ushort *)(*(int *)(DAT_00031b98 + 4) + 0x20) & 0xfffe;
  *(undefined4 *)(iVar2 + 0x14) = 1;
  *(undefined *)(iVar1 + 0x4d) = 6;
  if (*(char *)(iVar1 + 0x4c) < '\a') {
    iVar2 = iVar2 + 0x20;
    *(undefined2 *)(iVar2 + DAT_00031b8a) = 0x4a;
    *(undefined2 *)(iVar2 + DAT_00031b8c) = 0x4a;
  }
  (*DAT_00031ba8)(iVar1,DAT_00031ba4,DAT_00031ba0,10);
  *(undefined *)(iVar1 + 0x4d) = 5;
  return;
}



void FUN_00031b3a(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00031b9c;
  iVar2 = DAT_00031b98;
  *(ushort *)(*(int *)(DAT_00031b98 + 4) + 0x20) =
       *(ushort *)(*(int *)(DAT_00031b98 + 4) + 0x20) | 1;
  *(undefined4 *)(iVar2 + 0x14) = 1;
  *(undefined *)(iVar1 + 0x4d) = 6;
  if (*(char *)(iVar1 + 0x4c) < '\a') {
    iVar2 = iVar2 + 0x20;
    *(undefined2 *)(iVar2 + DAT_00031b8a) = 0x4a;
    *(undefined2 *)(iVar2 + DAT_00031b8c) = 0x4a;
  }
  (*DAT_00031ba8)(iVar1,DAT_00031ba0,DAT_00031ba4,10);
  *(undefined *)(iVar1 + 0x4d) = 5;
  return;
}



int FUN_00031bac(undefined4 param_1,undefined param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*DAT_00031c94)(param_1,DAT_00031c90,(int)DAT_00031c84);
  *(undefined *)(DAT_00031c86 + iVar1) = param_2;
  iVar2 = (int)DAT_00031c88;
  *(undefined4 *)(iVar1 + iVar2) = param_1;
  *(undefined4 *)(iVar1 + iVar2 + 0x20) = 0;
  *(undefined2 *)(iVar1 + iVar2 + 0x12) = 0;
  return iVar1;
}



// WARNING: Could not reconcile some variable overlaps

uint FUN_00031db4(int *param_1)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  ushort extraout_var;
  ushort extraout_var_00;
  ushort extraout_var_01;
  ushort extraout_var_02;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  short sVar11;
  int *piVar12;
  uint uStack100;
  int iStack92;
  int local_50;
  int iStack76;
  int iStack72;
  int local_44;
  int iStack64;
  int iStack60;
  int local_38;
  int iStack52;
  int iStack48;
  int local_2c;
  int iStack40;
  int iStack36;
  
  pcVar1 = DAT_00031e30;
  if (*(char *)(*(int *)((int)param_1 + (int)DAT_00031e1e) + 0x57) == '\x03') {
    piVar12 = &local_38;
    iVar5 = (*DAT_00031e30)();
    *piVar12 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + 0xc);
    piVar12 = &iStack52;
    iVar5 = (*pcVar1)();
    *piVar12 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + 0x10);
    piVar12 = &iStack48;
    iVar5 = (*pcVar1)();
    *piVar12 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + 0x14);
  }
  else {
    piVar12 = &local_38;
    iVar5 = (*DAT_00031e30)();
    *piVar12 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + 8);
    piVar12 = &iStack52;
    iVar5 = (*pcVar1)();
    *piVar12 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + 0xc);
    piVar12 = &iStack48;
    iVar5 = (*pcVar1)();
    *piVar12 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + 0x10);
  }
  pcVar3 = DAT_00031ea4;
  uVar9 = DAT_00031ea0;
  pcVar2 = DAT_00031e9c;
  uVar6 = (int)*(char *)((int)param_1 + (int)DAT_00031e98) & 0xff;
  if (uVar6 == 0) {
    iVar5 = (int)DAT_0003205e;
    *(undefined4 *)
     (((int)*(char *)((int)param_1 + iVar5 + 0x16) & 0xffU) * 0x2c +
     **(int **)((int)param_1 + iVar5)) = 0;
    local_2c = *(int *)(((int)*(char *)((int)param_1 + iVar5 + 0x16) & 0xffU) * 0x2c +
                        **(int **)((int)param_1 + iVar5) + 0x1c) + local_38;
    iStack40 = *(int *)(((int)*(char *)((int)param_1 + DAT_0003205e + 0x16) & 0xffU) * 0x2c +
                        **(int **)((int)param_1 + (int)DAT_0003205e) + 0x20) + iStack52;
    iStack36 = *(int *)(((int)*(char *)((int)param_1 + DAT_0003205e + 0x16) & 0xffU) * 0x2c +
                        **(int **)((int)param_1 + (int)DAT_0003205e) + 0x24) + iStack48;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[8] = local_2c;
    param_1[9] = iStack40;
    param_1[10] = iStack36;
    piVar12 = &iStack64;
    uVar6 = (*DAT_00032064)();
    (*pcVar3)(uVar6 >> 0x10,DAT_00032068);
    iVar5 = (*pcVar3)(*(undefined4 *)(DAT_0003206c + (short)(extraout_var & DAT_00032060) * 4),
                      DAT_00032070);
    pcVar4 = DAT_00032064;
    *piVar12 = iVar5;
    uVar6 = (*pcVar4)();
    (*pcVar3)(uVar6 >> 0x10,DAT_00032068);
    uVar7 = (*pcVar3)(*(undefined4 *)(DAT_00032074 + (short)(extraout_var_00 & DAT_00032060) * 4),
                      DAT_00032070);
    piVar12 = &iStack60;
    uVar6 = (*DAT_00032064)();
    (*pcVar3)(uVar6 >> 0x10,DAT_00032068);
    iVar5 = (*pcVar3)(*(undefined4 *)(DAT_0003206c + (short)(extraout_var_01 & DAT_00032060) * 4),
                      uVar7);
    *piVar12 = iVar5;
    piVar12 = &local_44;
    uVar6 = (*DAT_00032064)();
    (*pcVar3)(uVar6 >> 0x10,DAT_00032068);
    iVar5 = (*pcVar3)(*(undefined4 *)(DAT_00032074 + (short)(extraout_var_02 & DAT_00032060) * 4),
                      uVar7);
    *piVar12 = iVar5;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    param_1[0xb] = param_1[0xb] + local_44;
    param_1[0xc] = param_1[0xc] + iStack64;
    param_1[0xd] = param_1[0xd] + iStack60;
    iVar5 = (*pcVar1)();
    iVar8 = (int)DAT_0003205e;
    *param_1 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_00032062);
    iVar10 = *param_1;
    uStack100 = (int)*(char *)(*(int *)((int)param_1 + iVar8) + 0x57) & 0xff;
    iVar5 = uStack100 * 4;
    iVar5 = (*DAT_000321f8)(param_1,param_1 + 0x16,0,iVar10,(int)*(short *)(iVar5 + DAT_000321f4),
                            *(undefined4 *)(*(short *)(uStack100 * 2 + DAT_000321f0) + iVar10),
                            *(undefined4 *)(iVar10 + *(short *)(iVar5 + DAT_000321ec)),0,0,iVar10,
                            iVar5);
    if ((iVar5 == 0) && (param_1 != (int *)0x0)) {
      param_1[-1] = param_1[-1] | 1;
    }
    iStack92 = 0;
    sVar11 = 0;
    do {
      iVar8 = *param_1;
      uVar6 = (int)*(char *)(*(int *)((int)param_1 + (int)DAT_000321e0) + 0x57) & 0xff;
      iVar5 = uVar6 * 4;
      iVar5 = (*DAT_000321f8)(param_1,(int)param_1 + (int)uStack100._0_2_ + (int)DAT_000321e2 + 0x18
                              ,0,iVar8,(int)*(short *)(iVar5 + DAT_00032204),
                              *(undefined4 *)(*(short *)(uVar6 * 2 + DAT_00032200) + iVar8),
                              *(undefined4 *)(iVar8 + *(short *)(iVar5 + DAT_000321fc)),0,0);
      if ((iVar5 == 0) && (param_1 != (int *)0x0)) {
        param_1[-1] = param_1[-1] | 1;
      }
      (*pcVar2)((int)param_1 + (int)sVar11 + (int)DAT_000321e2 + 0x18);
      iStack92 = iStack92 + 1;
      sVar11 = sVar11 + 0x68;
      uStack100 = (uint)(ushort)(uStack100._0_2_ + 0x68) << 0x10;
    } while (iStack92 < 3);
    param_1[-3] = DAT_00032208;
    (*DAT_0003220c)(0x11);
    iVar5 = (int)DAT_000321e4;
    *(undefined2 *)((int)param_1 + iVar5) = 0;
    iVar5 = iVar5 + 3;
    *(char *)((int)param_1 + iVar5) = *(char *)((int)param_1 + iVar5) + '\x01';
  }
  else if (uVar6 != 1) {
    if (uVar6 != 2) {
      return uVar6;
    }
    iVar5 = (*pcVar1)();
    param_1[8] = param_1[8] + *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0003247e);
    iVar5 = (*pcVar1)();
    param_1[9] = param_1[9] + *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_00032480);
    iVar5 = (*pcVar1)();
    param_1[10] = param_1[10] + *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_00032482);
    param_1[0xe] = param_1[0xe] + param_1[0xb];
    param_1[0xf] = param_1[0xf] + param_1[0xc];
    piVar12 = &local_50;
    param_1[0x10] = param_1[0x10] + param_1[0xd];
    iVar5 = (*pcVar3)(param_1[0xe],0);
    *piVar12 = iVar5;
    piVar12 = &iStack76;
    iVar5 = (*pcVar3)(param_1[0xf],0);
    *piVar12 = iVar5;
    piVar12 = &iStack72;
    iVar5 = (*pcVar3)(param_1[0x10],0);
    *piVar12 = iVar5;
    param_1[0xe] = param_1[0xe] - local_50;
    param_1[0xf] = param_1[0xf] - iStack76;
    param_1[0x10] = param_1[0x10] - iStack72;
    param_1[0x11] = param_1[0x11] + param_1[0xe];
    param_1[0x12] = param_1[0x12] + param_1[0xf];
    param_1[0x13] = param_1[0x13] + param_1[0x10];
    param_1[0x11] = param_1[0x11] & uVar9;
    param_1[0x12] = param_1[0x12] & uVar9;
    param_1[0x13] = uVar9 & param_1[0x13];
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    goto LAB_000323e6;
  }
  *(short *)((int)param_1 + (int)DAT_000321e4) = *(short *)((int)param_1 + (int)DAT_000321e4) + 1;
  iVar5 = (*pcVar1)();
  param_1[8] = param_1[8] + *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_000321e6);
  iVar5 = (*pcVar1)();
  param_1[9] = param_1[9] + *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_000321e8);
  iVar5 = (*pcVar1)();
  param_1[10] = param_1[10] + *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_000321ea);
  param_1[0xe] = param_1[0xe] + param_1[0xb];
  param_1[0xf] = param_1[0xf] + param_1[0xc];
  piVar12 = &local_50;
  param_1[0x10] = param_1[0x10] + param_1[0xd];
  iVar5 = (*pcVar3)(param_1[0xe],0);
  *piVar12 = iVar5;
  piVar12 = &iStack76;
  iVar5 = (*pcVar3)(param_1[0xf],0);
  *piVar12 = iVar5;
  piVar12 = &iStack72;
  iVar5 = (*pcVar3)(param_1[0x10],0);
  *piVar12 = iVar5;
  param_1[0xe] = param_1[0xe] - local_50;
  param_1[0xf] = param_1[0xf] - iStack76;
  param_1[0x10] = param_1[0x10] - iStack72;
  param_1[0x11] = param_1[0x11] + param_1[0xe];
  param_1[0x12] = param_1[0x12] + param_1[0xf];
  param_1[0x13] = param_1[0x13] + param_1[0x10];
  param_1[0x11] = param_1[0x11] & uVar9;
  param_1[0x12] = param_1[0x12] & uVar9;
  param_1[0x13] = uVar9 & param_1[0x13];
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  if (param_1[0x22] == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (int)*(short *)(param_1[0x22] + 4);
  }
  if (iVar5 <= (int)((int)*(short *)((int)param_1 + (int)DAT_000322e8) & 0xffffU)) {
    (*DAT_000322f4)(param_1 + 0x16,
                    *(undefined4 *)
                     ((int)*(short *)(((int)*(char *)(*(int *)((int)param_1 + (int)DAT_000322ea) +
                                                     0x57) & 0xffU) * 2 + DAT_000322f0) + *param_1))
    ;
    iVar5 = (int)DAT_000322ec;
    *(char *)((int)param_1 + iVar5) = *(char *)((int)param_1 + iVar5) + '\x01';
    *(undefined4 *)
     (((int)*(char *)((int)param_1 + (iVar5 - 1U)) & 0xffU) * 0x2c +
     **(int **)((int)param_1 + iVar5 + -0x17)) = 1;
    return iVar5 - 1U;
  }
LAB_000323e6:
  uVar9 = (*pcVar2)(param_1 + 0x16);
  return uVar9;
}



uint FUN_00032400(int param_1)

{
  char cVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  undefined4 uVar5;
  ushort extraout_var;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  short sVar12;
  short *psVar11;
  short sVar13;
  int iVar14;
  short sVar15;
  short sVar16;
  uint *puVar17;
  int iStack72;
  uint local_44;
  uint uStack64;
  uint uStack60;
  int local_38;
  int iStack52;
  int iStack48;
  int local_2c;
  int iStack40;
  int iStack36;
  
  pcVar2 = DAT_00032488;
  iVar6 = (*DAT_00032488)();
  *(int *)(param_1 + 0x20) =
       *(int *)(param_1 + 0x20) + *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) + (int)DAT_0003247e)
  ;
  iVar6 = (*pcVar2)();
  *(int *)(param_1 + 0x24) =
       *(int *)(param_1 + 0x24) + *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) + (int)DAT_00032480)
  ;
  iVar6 = (*pcVar2)();
  *(int *)(param_1 + 0x28) =
       *(int *)(param_1 + 0x28) + *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) + (int)DAT_00032482)
  ;
  (*DAT_0003248c)(param_1 + 0x58);
  pcVar3 = DAT_00032490;
  iVar6 = (int)DAT_00032484;
  uVar7 = (int)*(char *)(param_1 + iVar6 + 0x17) & 0xff;
  sVar16 = (short)*(undefined4 *)
                   (**(int **)(param_1 + iVar6) +
                    ((int)*(char *)(param_1 + iVar6 + 0x16) & 0xffU) * 0x2c + 0x28);
  if (uVar7 == 0) {
    iVar6 = (int)DAT_00032560;
    *(int *)(param_1 + 0x50) = (int)DAT_0003255e;
    pcVar4 = DAT_0003256c;
    *(int *)(param_1 + 0x54) = iVar6;
    uVar7 = (*pcVar4)();
    (*pcVar3)(uVar7 >> 0x10,DAT_00032570);
    iVar14 = (int)DAT_00032562;
    iVar10 = (short)(extraout_var & DAT_00032564) * 4;
    iVar6 = (*pcVar2)();
    cVar1 = *(char *)((int)DAT_00032566 + *(int *)(*(int *)(iVar6 + 0x10) + 4));
    if (cVar1 == '\0') {
LAB_000324dc:
      local_2c = (*pcVar3)(*(undefined4 *)(iVar10 + DAT_00032574),iVar14);
      iStack40 = (*pcVar3)(*(undefined4 *)(iVar10 + DAT_00032578),iVar14);
      iStack36 = 0;
    }
    else if (cVar1 == '\x01') {
LAB_000324f6:
      iStack36 = (*pcVar3)(*(undefined4 *)(iVar10 + DAT_00032574),iVar14);
      iStack40 = (*pcVar3)(*(undefined4 *)(iVar10 + DAT_00032578),iVar14);
      local_2c = 0;
    }
    else {
      if (cVar1 == '\x02') goto LAB_000324dc;
      if (cVar1 == '\x03') goto LAB_000324f6;
    }
    iVar6 = (int)DAT_00032568;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + local_2c;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iStack40;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iStack36;
    if (*(char *)(*(int *)(param_1 + iVar6) + 0x57) == '\x03') {
      iVar6 = (int)DAT_00032568;
      *(undefined4 *)(param_1 + iVar6 + 4) = *(undefined4 *)(*(int *)(param_1 + iVar6) + 0x20);
      *(undefined4 *)(param_1 + iVar6 + 8) = *(undefined4 *)(*(int *)(param_1 + iVar6) + 0x24);
      *(undefined4 *)(param_1 + iVar6 + 0xc) = *(undefined4 *)(*(int *)(param_1 + iVar6) + 0x28);
    }
    else if ((((*(short *)(*(int *)(param_1 + DAT_000326e4) + 0x5e) == 0) ||
              (iVar6 = (*DAT_000326f4)(),
              *(int *)(*(int *)(sVar16 * 4 + *(int *)(*(int *)(iVar6 + 0x10) + 0xc)) + 4) == 0)) ||
             (iVar6 = (*DAT_000326f4)(),
             (DAT_000326f8 &
             *(uint *)(*(int *)(*(int *)(sVar16 * 4 + *(int *)(*(int *)(iVar6 + 0x10) + 0xc)) + 4) +
                      0x50)) != 0)) ||
            (iVar6 = (*DAT_000326f4)(),
            **(char **)(sVar16 * 4 + *(int *)(*(int *)(iVar6 + 0x10) + 0xc)) < '\x01')) {
      iVar6 = (int)DAT_000326e4;
      *(undefined4 *)(param_1 + iVar6 + 4) = *(undefined4 *)(*(int *)(param_1 + iVar6) + 0x20);
      *(undefined4 *)(param_1 + iVar6 + 8) = *(undefined4 *)(*(int *)(param_1 + iVar6) + 0x24);
      *(undefined4 *)(param_1 + iVar6 + 0xc) = *(undefined4 *)(*(int *)(param_1 + iVar6) + 0x28);
    }
    sVar15 = 0;
    iStack72 = 0;
    sVar13 = 0;
    sVar12 = 0;
    do {
      iVar6 = (int)sVar12;
      *(undefined4 *)(DAT_000326e6 + param_1 + iVar6) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(DAT_000326e6 + param_1 + iVar6 + 4) = *(undefined4 *)(param_1 + 0x24);
      iVar14 = (int)sVar13;
      *(undefined4 *)(DAT_000326e6 + param_1 + iVar6 + 8) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(DAT_000326e6 + param_1 + iVar14 + 0xc) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(DAT_000326e6 + param_1 + iVar14 + 0x10) = *(undefined4 *)(param_1 + 0x48);
      iVar10 = (int)sVar15;
      *(undefined4 *)(iVar14 + DAT_000326e6 + param_1 + 0x14) = *(undefined4 *)(param_1 + 0x4c);
      piVar9 = (int *)(iVar10 + DAT_000326e6 + param_1);
      iVar6 = (*pcVar2)();
      *piVar9 = *piVar9 - *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) + (int)DAT_000326e8);
      piVar9 = (int *)(DAT_000326e6 + param_1 + iVar10 + 4);
      iVar6 = (*pcVar2)();
      *piVar9 = *piVar9 - *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) + (int)DAT_000326ea);
      piVar9 = (int *)(DAT_000326e6 + param_1 + iVar10 + 8);
      iVar6 = (*pcVar2)();
      sVar15 = sVar15 + 0x68;
      *piVar9 = *piVar9 - *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) + (int)DAT_000326ec);
      pcVar4 = DAT_000326fc;
      iStack72 = iStack72 + 1;
      sVar12 = sVar12 + 0x68;
      sVar13 = sVar13 + 0x68;
    } while (iStack72 < 3);
    iVar6 = (int)DAT_000326ee;
    *(undefined4 *)(param_1 + iVar6) = 1;
    iVar6 = iVar6 + -9;
    *(char *)(param_1 + iVar6) = *(char *)(param_1 + iVar6) + '\x01';
    (*pcVar4)(0x14);
    *(undefined2 *)(param_1 + DAT_000326f0) = 0x4b;
  }
  else if (uVar7 != 1) {
    return uVar7;
  }
  sVar12 = *(short *)(param_1 + DAT_000326f0);
  *(short *)(param_1 + DAT_000326f0) = sVar12 + -1;
  if (sVar12 < 0) {
    uVar7 = (uint)DAT_000326f2;
    *(char *)(param_1 + uVar7) = *(char *)(param_1 + uVar7) + '\x01';
    return uVar7;
  }
  if (*(char *)(*(int *)(param_1 + DAT_000327d0) + 0x57) == '\x03') {
    iVar6 = (int)DAT_000327d0;
    *(undefined4 *)(param_1 + iVar6 + 4) = *(undefined4 *)(*(int *)(param_1 + iVar6) + 0x20);
    *(undefined4 *)(param_1 + iVar6 + 8) = *(undefined4 *)(*(int *)(param_1 + iVar6) + 0x24);
    *(undefined4 *)(param_1 + iVar6 + 0xc) = *(undefined4 *)(*(int *)(param_1 + iVar6) + 0x28);
  }
  else {
    if (((*(short *)(*(int *)(param_1 + DAT_000327d0) + 0x5e) == 0) ||
        (iVar6 = (*DAT_000327dc)(),
        *(int *)(*(int *)(sVar16 * 4 + *(int *)(*(int *)(iVar6 + 0x10) + 0xc)) + 4) == 0)) ||
       ((iVar6 = (*DAT_000327dc)(),
        (DAT_000327e0 &
        *(uint *)(*(int *)(*(int *)(sVar16 * 4 + *(int *)(*(int *)(iVar6 + 0x10) + 0xc)) + 4) + 0x50
                 )) != 0 ||
        (iVar6 = (*DAT_000327dc)(),
        **(char **)(sVar16 * 4 + *(int *)(*(int *)(iVar6 + 0x10) + 0xc)) < '\x01')))) {
      *(undefined4 *)(param_1 + DAT_000327d2) = 1;
    }
    pcVar4 = DAT_000327e4;
    if (*(int *)(param_1 + DAT_000327d2) == 0) {
      iVar6 = (*pcVar2)();
      iVar10 = sVar16 * 4;
      puVar8 = (undefined4 *)
               (*pcVar4)(*(undefined4 *)
                          (*(int *)(iVar10 + *(int *)(*(int *)(iVar6 + 0x10) + 0xc)) + 4));
      *(undefined4 *)(param_1 + DAT_000327d4) = *puVar8;
      iVar6 = (*pcVar2)();
      iVar6 = (*pcVar4)(*(undefined4 *)
                         (*(int *)(iVar10 + *(int *)(*(int *)(iVar6 + 0x10) + 0xc)) + 4));
      *(undefined4 *)(param_1 + DAT_000327d6) = *(undefined4 *)(iVar6 + 4);
      iVar6 = (*pcVar2)();
      iVar6 = (*pcVar4)(*(undefined4 *)
                         (*(int *)(iVar10 + *(int *)(*(int *)(iVar6 + 0x10) + 0xc)) + 4));
      *(undefined4 *)(param_1 + DAT_000327d8) = *(undefined4 *)(iVar6 + 8);
    }
    else {
      piVar9 = (int *)(DAT_00032992 + param_1);
      iVar6 = (*pcVar2)();
      iVar10 = (int)DAT_00032994;
      *piVar9 = *piVar9 + *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) + iVar10);
      piVar9 = (int *)(iVar10 + 0x48 + param_1);
      iVar6 = (*pcVar2)();
      iVar10 = (int)DAT_00032996;
      *piVar9 = *piVar9 + *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) + iVar10);
      piVar9 = (int *)(iVar10 + 0x48 + param_1);
      iVar6 = (*pcVar2)();
      *piVar9 = *piVar9 + *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) + (int)DAT_00032998);
    }
  }
  if (*(int *)(param_1 + 0x50) < (int)DAT_0003299a) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (int)DAT_0003299c;
  }
  if (*(int *)(param_1 + 0x54) < (int)DAT_0003299e) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x70;
  }
  iVar6 = (int)DAT_00032992;
  local_44 = *(int *)(param_1 + iVar6) - *(int *)(param_1 + 0x20);
  uStack64 = *(int *)(param_1 + iVar6 + 4) - *(int *)(param_1 + 0x24);
  uStack60 = *(int *)(param_1 + iVar6 + 8) - *(int *)(param_1 + 0x28);
  puVar17 = &local_44;
  uVar7 = (*pcVar3)(local_44,*(undefined4 *)(param_1 + 0x54));
  *puVar17 = uVar7;
  puVar17 = &uStack64;
  uVar7 = (*pcVar3)(uStack64,*(undefined4 *)(param_1 + 0x54));
  *puVar17 = uVar7;
  puVar17 = &uStack60;
  uVar7 = (*pcVar3)(uStack60,*(undefined4 *)(param_1 + 0x54));
  *puVar17 = uVar7;
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + local_44;
  *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uStack64;
  *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + uStack60;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x10);
  puVar17 = &local_44;
  uVar7 = (*pcVar3)(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x50));
  *puVar17 = uVar7;
  puVar17 = &uStack64;
  uVar7 = (*pcVar3)(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x50));
  *puVar17 = uVar7;
  puVar17 = &uStack60;
  uVar7 = (*pcVar3)(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x50));
  *puVar17 = uVar7;
  *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - local_44;
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - uStack64;
  *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - uStack60;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  iVar6 = (*pcVar2)();
  cVar1 = *(char *)((int)DAT_000329a0 + *(int *)(*(int *)(iVar6 + 0x10) + 4));
  if (cVar1 == '\0') {
LAB_000329ba:
    iStack48 = (*DAT_00032a44)(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x14));
    local_38 = 0;
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') goto LAB_000329ba;
      if (cVar1 != '\x03') goto LAB_000329d8;
    }
    local_38 = (*DAT_00032a44)(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    iStack48 = 0;
  }
  iStack52 = 0;
LAB_000329d8:
  uVar5 = DAT_00032c14;
  local_44 = local_38 - *(int *)(param_1 + 0x44);
  uStack64 = iStack52 - *(int *)(param_1 + 0x48);
  uStack60 = iStack48 - *(int *)(param_1 + 0x4c);
  if ((DAT_00032a48 & local_44) == 0) {
    local_44 = DAT_00032a50 & local_44;
  }
  else {
    local_44 = DAT_00032a4c | local_44;
  }
  if ((DAT_00032a48 & uStack64) == 0) {
    uStack64 = DAT_00032a50 & uStack64;
  }
  else {
    uStack64 = DAT_00032a4c | uStack64;
  }
  if ((uStack60 & DAT_00032a48) == 0) {
    uStack60 = DAT_00032c10 & uStack60;
  }
  else {
    uStack60 = DAT_00032a4c | uStack60;
  }
  puVar17 = &local_44;
  uVar7 = (*pcVar3)(local_44,DAT_00032c14);
  *puVar17 = uVar7;
  puVar17 = &uStack64;
  uVar7 = (*pcVar3)(uStack64,uVar5);
  *puVar17 = uVar7;
  puVar17 = &uStack60;
  uVar7 = (*pcVar3)(uStack60,uVar5);
  *puVar17 = uVar7;
  *(uint *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + local_44;
  *(uint *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + uStack64;
  *(uint *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + uStack60;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x34);
  uVar5 = DAT_00032c18;
  puVar17 = &local_44;
  uVar7 = (*pcVar3)(*(undefined4 *)(param_1 + 0x38),DAT_00032c18);
  *puVar17 = uVar7;
  puVar17 = &uStack64;
  uVar7 = (*pcVar3)(*(undefined4 *)(param_1 + 0x3c),uVar5);
  *puVar17 = uVar7;
  puVar17 = &uStack60;
  uVar7 = (*pcVar3)(*(undefined4 *)(param_1 + 0x40),uVar5);
  *puVar17 = uVar7;
  *(uint *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - local_44;
  *(uint *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - uStack64;
  *(uint *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) - uStack60;
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x3c);
  uVar7 = DAT_00032c10;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & uVar7;
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & uVar7;
  *(uint *)(param_1 + 0x4c) = uVar7 & *(uint *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  iVar6 = (int)DAT_00032c08;
  local_2c = *(int *)(param_1 + 0x20) - *(int *)(param_1 + iVar6);
  iStack40 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + iVar6 + 4);
  iStack36 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + iVar6 + 8);
  iVar6 = (*pcVar3)(local_2c,local_2c);
  iVar10 = (*pcVar3)(iStack40,iStack40);
  iVar10 = iVar10 + iVar6;
  iVar6 = (*pcVar3)(iStack36,iStack36);
  iVar6 = iVar6 + iVar10;
  uVar7 = (*pcVar3)((int)DAT_00032c0a);
  if (iVar6 < (int)uVar7) {
    iVar6 = (int)DAT_00032c0c;
    iVar10 = sVar16 * 0x10;
    psVar11 = (short *)(*(int *)(*(int *)(param_1 + iVar6) + 4) + iVar10);
    *psVar11 = *psVar11 + 1;
    uVar5 = DAT_00032d54;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + iVar6) + 4) + iVar10 + 4) =
         *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + iVar6) + 4) + iVar10 + 8) =
         *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + iVar6) + 4) + iVar10 + 0xc) =
         *(undefined4 *)(param_1 + 0x1c);
    (*DAT_00032d58)(param_1,0x4a,DAT_00032d50,uVar5,5,uVar5,DAT_00032d50,5);
    uVar7 = (uint)DAT_00032d46;
    *(char *)(param_1 + uVar7) = *(char *)(param_1 + uVar7) + '\x01';
  }
  return uVar7;
}



void FUN_00034c10(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = (int *)(*DAT_00034d30)(param_1,DAT_00034d2c,(int)DAT_00034d1a);
  pcVar1 = DAT_00034d38;
  if (piVar2 != (int *)0x0) {
    iVar3 = (int)DAT_00034d1c;
    iVar4 = (int)DAT_00034d1e;
    *piVar2 = **(int **)(*DAT_00034d34 + 0xc);
    iVar5 = *piVar2;
    iVar3 = (*pcVar1)(piVar2,iVar4 + (int)piVar2,0,iVar5,4,*(undefined4 *)(iVar5 + iVar3 + 0xc),
                      *(undefined4 *)(iVar5 + iVar3),0,0);
    if ((iVar3 == 0) && (piVar2 != (int *)0x0)) {
      piVar2[-1] = piVar2[-1] | 1;
    }
    (*DAT_00034d3c)((int)DAT_00034d1e + (int)piVar2);
    *(undefined4 *)((int)piVar2 + (int)DAT_00034d20) = param_2;
    (*DAT_00034d40)(0x11);
    iVar3 = (*DAT_00034d44)();
    if (((int)DAT_00034d22 & *(uint *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_00034d24))
        == 0) {
      *(undefined *)((int)piVar2 + (int)DAT_00034d26) = 1;
    }
    else {
      *(undefined *)((int)piVar2 + (int)DAT_00034d26) = 0;
    }
  }
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_00035dfd(undefined4 param_1,undefined4 param_2,undefined *param_3,undefined param_4)

{
  *param_3 = param_4;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



uint FUN_00036408(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  uint uVar6;
  int *piVar7;
  char cVar10;
  undefined uVar11;
  undefined4 uVar8;
  int *piVar9;
  int iVar12;
  char *pcVar13;
  int iVar14;
  byte bVar15;
  undefined *puVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int local_64;
  int iStack96;
  undefined4 uStack88;
  undefined4 uStack84;
  int iStack80;
  int iStack76;
  int aiStack72 [7];
  undefined4 local_2c;
  int iStack40;
  int iStack36;
  
  pcVar4 = DAT_0003652c;
  pcVar3 = DAT_00036528;
  uVar2 = DAT_00036516;
  iVar19 = (int)DAT_00036518;
  uVar6 = (int)*(char *)((int)param_1 + (int)DAT_0003651a) & 0xff;
  uVar20 = 0;
  if (uVar6 == 0) {
    if (*DAT_00036530 != 0) {
      return 0;
    }
    iVar12 = (*DAT_0003652c)();
    uVar8 = DAT_00036534;
    iVar14 = (int)DAT_0003651e;
    *param_1 = *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + (int)DAT_0003651c);
    iVar12 = *param_1;
    iVar12 = (*DAT_00036538)(param_1,param_1 + 3,0,iVar12,4,*(undefined4 *)(iVar12 + DAT_00036520),
                             *(undefined4 *)(iVar12 + iVar14),0,uVar8);
    iVar14 = *param_1;
    uVar6 = (*DAT_00036538)(param_1,param_1 + 0x17,0,iVar14,8,*(undefined4 *)(iVar14 + DAT_00036524)
                            ,*(undefined4 *)(iVar14 + DAT_00036522),0,0);
    if ((iVar12 == 0) || (uVar6 == 0)) {
      if (param_1 == (int *)0x0) {
        return uVar6;
      }
      param_1[-1] = param_1[-1] | 1;
      return uVar6;
    }
    iVar12 = (int)DAT_00036526;
    *(undefined4 *)((int)param_1 + iVar12) = 1;
    *(undefined4 *)((int)param_1 + iVar12 + 0x1c) = 1;
    *(undefined4 *)((int)param_1 + iVar12 + 0x20) = 1;
    *(undefined4 *)((int)param_1 + iVar12 + 0x14) = 1;
    iVar12 = (*pcVar4)();
    if ((DAT_0003653c & *(uint *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x18)) == 0) {
      iVar12 = (*pcVar4)();
      uVar6 = *(uint *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x18) & DAT_00036628;
    }
    else {
      iVar12 = (*pcVar4)();
      uVar6 = *(uint *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x18) | DAT_00036540;
    }
    if (DAT_0003662c < (int)uVar6) {
      iVar12 = (*pcVar4)();
      if ((DAT_00036630 & *(uint *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x18)) == 0) {
        iVar12 = (*pcVar4)();
        uVar6 = *(uint *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x18) & DAT_00036628;
      }
      else {
        iVar12 = (*pcVar4)();
        uVar6 = *(uint *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x18) | DAT_00036634;
      }
      if (((int)uVar6 < DAT_00036638) &&
         (iVar12 = (*pcVar4)(),
         *(char *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + (int)DAT_0003661e) != '\0')) {
        *(undefined4 *)((int)param_1 + (int)DAT_00036620) = 1;
      }
    }
    iVar12 = (*pcVar4)();
    if (*(short *)(*(int *)(*(int *)(iVar12 + 0x10) + 0xc) + (int)DAT_00036622) != 0) {
      iVar12 = (*pcVar4)();
      uVar8 = (*DAT_0003663c)(param_1,(int)*(short *)(*(int *)(*(int *)(iVar12 + 0x10) + 0xc) +
                                                     (int)DAT_00036622) << 2);
      *(undefined4 *)((int)DAT_00036624 + (int)param_1) = uVar8;
    }
    if ((*(int *)((int)param_1 + (int)DAT_00036624) == 0) ||
       (iVar12 = (*DAT_00036640)(),
       *(short *)(*(int *)(*(int *)(iVar12 + 0x10) + 0xc) + (int)DAT_00036622) == 0)) {
      *(undefined4 *)((int)param_1 + (int)DAT_00036626) = 1;
    }
    else {
      for (local_64 = 0; iVar12 = (*pcVar4)(),
          local_64 < *(short *)(*(int *)(*(int *)(iVar12 + 0x10) + 0xc) + (int)DAT_00036622);
          local_64 = local_64 + 1) {
        *(int *)(local_64 * 4 + *(int *)((int)param_1 + (int)DAT_00036624)) = local_64;
      }
      for (local_64 = 0; iVar12 = (*pcVar4)(),
          local_64 < *(short *)(*(int *)(*(int *)(iVar12 + 0x10) + 0xc) + (int)DAT_000367c8);
          local_64 = local_64 + 1) {
        iVar12 = (*pcVar4)();
        iVar12 = *(short *)(*(int *)(*(int *)(iVar12 + 0x10) + 0xc) + (int)DAT_000367c8) - local_64;
        uVar6 = (*DAT_000367f8)();
        iVar12 = (*pcVar3)(uVar6 >> 0x10,iVar12);
        iVar14 = (int)DAT_000367ca;
        puVar17 = (undefined4 *)(local_64 * 4 + *(int *)((int)param_1 + (int)DAT_000367ca));
        iVar12 = (local_64 + iVar12) * 4;
        uVar8 = *puVar17;
        *puVar17 = *(undefined4 *)(*(int *)((int)param_1 + (int)DAT_000367ca) + iVar12);
        *(undefined4 *)(iVar12 + *(int *)((int)param_1 + iVar14)) = uVar8;
      }
    }
    iVar12 = (int)DAT_000367cc;
    *(undefined4 *)((int)param_1 + iVar12) = 0;
    *(undefined4 *)((int)param_1 + iVar12 + -4) = 0;
    *(undefined4 *)((int)param_1 + iVar12 + -8) = 0;
    *(undefined4 *)((int)param_1 + iVar12 + 0xc) = 0;
    *(undefined4 *)((int)param_1 + iVar12 + 8) = 0;
    *(undefined4 *)((int)param_1 + iVar12 + 4) = 0;
    iVar12 = (*pcVar4)();
    *(undefined4 *)((int)param_1 + (int)DAT_000367ce) =
         *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 8);
    iVar12 = (*pcVar4)();
    *(undefined4 *)((int)param_1 + (int)DAT_000367d0) =
         *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0xc);
    iVar12 = (*pcVar4)();
    iVar14 = (int)DAT_000367d2;
    *(undefined4 *)((int)param_1 + iVar14) =
         *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x10);
    *(undefined4 *)((int)param_1 + iVar14 + 0x30) = 0;
    *(undefined4 *)((int)param_1 + iVar14 + 0x2c) = 0;
    *(undefined4 *)((int)param_1 + iVar14 + 0x28) = 0;
    *(undefined4 *)((int)param_1 + iVar14 + 0x3c) = 0;
    *(undefined4 *)((int)param_1 + iVar14 + 0x38) = 0;
    *(undefined4 *)((int)param_1 + iVar14 + 0x34) = 0;
    iVar12 = (*pcVar4)();
    *(undefined4 *)((int)param_1 + (int)DAT_000367d4) =
         *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x14);
    iVar12 = (*pcVar4)();
    *(undefined4 *)((int)param_1 + (int)DAT_000367d6) =
         *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x18);
    iVar12 = (*pcVar4)();
    *(undefined4 *)((int)param_1 + (int)DAT_000367d8) =
         *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x1c);
    iVar12 = (*pcVar4)();
    *(undefined4 *)((int)param_1 + (int)DAT_000367da) =
         *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 8);
    iVar12 = (*pcVar4)();
    *(undefined4 *)((int)param_1 + (int)DAT_000367dc) =
         *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0xc);
    iVar14 = (*pcVar4)();
    iVar12 = DAT_000367fc;
    iVar18 = (int)DAT_000367de;
    *(undefined4 *)((int)param_1 + iVar18) =
         *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 0x18) + 0x10);
    iVar18 = iVar18 + -4;
    *(int *)((int)param_1 + iVar18) = *(int *)((int)param_1 + iVar18) + iVar12;
    iVar12 = (*pcVar4)();
    *(undefined4 *)((int)param_1 + (int)DAT_000367e0) =
         *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x14);
    iVar12 = (*pcVar4)();
    *(undefined4 *)((int)param_1 + (int)DAT_000367e2) =
         *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x18);
    iVar12 = (*pcVar4)();
    iVar14 = (int)DAT_000367e6;
    *(undefined4 *)((int)param_1 + (int)DAT_000367e4) =
         *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x1c);
    iVar12 = (int)DAT_000367e8;
    *(int *)((int)param_1 + iVar12) = iVar14;
    iVar18 = (int)DAT_000367ea;
    *(undefined4 *)((int)param_1 + iVar12 + 4) = DAT_00036800;
    iVar14 = (int)DAT_000367ec;
    *(int *)((int)param_1 + iVar12 + 8) = iVar18;
    *(int *)((int)param_1 + iVar12 + 0xc) = iVar14;
    if (*(int *)((int)param_1 + iVar12 + -0x24) == 0) {
      uVar8 = (*pcVar3)(*(undefined4 *)
                         ((short)((ushort)((uint)*(undefined4 *)((int)param_1 + (int)DAT_00036a00)
                                          >> 0x10) & uVar2) * 4 + DAT_00036a18),iVar19);
      *(undefined4 *)((int)DAT_00036a02 + (int)param_1) = uVar8;
      uVar8 = (*pcVar3)(*(undefined4 *)
                         ((short)((ushort)((uint)*(undefined4 *)((int)param_1 + (int)DAT_00036a00)
                                          >> 0x10) & uVar2) * 4 + DAT_00036a1c),iVar19);
      *(undefined4 *)((int)DAT_00036a04 + (int)param_1) = uVar8;
      iVar12 = (int)DAT_00036a06;
      *(undefined4 *)((int)param_1 + iVar12) = 0;
      piVar9 = (int *)(iVar12 + -4 + (int)param_1);
      iVar12 = (*pcVar4)();
      piVar7 = (int *)((int)DAT_00036a06 + (int)param_1);
      *piVar9 = *piVar9 + *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 8);
      iVar12 = (*pcVar4)();
      *piVar7 = *piVar7 + *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0xc);
      piVar9 = (int *)((int)DAT_00036a04 + (int)param_1);
      iVar12 = (*pcVar4)();
      *piVar9 = *piVar9 + *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x10);
    }
    else {
      iVar12 = (*pcVar4)();
      *(undefined *)((int)param_1 + (int)DAT_000367f0) =
           *(undefined *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + (int)DAT_000367ee);
      iVar12 = (*pcVar4)();
      iVar14 = *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + 0xc);
      iVar12 = (*pcVar4)();
      iVar18 = *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + (int)DAT_000367f2);
      iVar12 = (*pcVar4)();
      iVar18 = *(int *)(*(char *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + (int)DAT_000367f4) * 0x20
                        + iVar18 + 0x1c);
      iVar12 = (*pcVar4)();
      *(int *)((int)DAT_00036916 + (int)param_1) =
           iVar14 + *(int *)((int)(char)(*(char *)((int)param_1 + (int)DAT_00036914) * '\f') +
                            *(char *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + (int)DAT_00036912) *
                            0x60 + iVar18);
      iVar12 = (*pcVar4)();
      iVar14 = *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + 0x10);
      iVar12 = (*pcVar4)();
      iVar18 = *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + (int)DAT_00036918);
      iVar12 = (*pcVar4)();
      iVar18 = *(int *)(*(char *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + (int)DAT_00036912) * 0x20
                        + iVar18 + 0x1c);
      iVar12 = (*pcVar4)();
      *(int *)((int)DAT_0003691a + (int)param_1) =
           iVar14 + *(int *)((int)(char)(*(char *)((int)param_1 + (int)DAT_00036914) * '\f') +
                             *(char *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + (int)DAT_00036912) *
                             0x60 + iVar18 + 4);
      iVar12 = (*pcVar4)();
      iVar14 = *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + 0x14);
      iVar12 = (*pcVar4)();
      iVar18 = *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + (int)DAT_00036918);
      iVar12 = (*pcVar4)();
      iVar18 = *(int *)(*(char *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + (int)DAT_00036912) * 0x20
                        + iVar18 + 0x1c);
      iVar12 = (*pcVar4)();
      *(int *)((int)DAT_0003691c + (int)param_1) =
           iVar14 + *(int *)((int)(char)(*(char *)((int)param_1 + (int)DAT_00036914) * '\f') +
                             *(char *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + (int)DAT_00036912) *
                             0x60 + iVar18 + 8);
    }
    (*DAT_00036a20)();
    (*DAT_00036a28)(DAT_00036a24);
    (*DAT_00036a2c)((int)DAT_00036a02 + (int)param_1);
    (*DAT_00036a30)((int)DAT_00036a08 + (int)param_1);
    (*DAT_00036a34)();
    *(undefined4 *)((int)param_1 + (int)DAT_00036a0a) = 1;
    iVar12 = (int)DAT_00036a0c;
    param_1[-3] = DAT_00036a38;
    *(char *)((int)param_1 + iVar12) = *(char *)((int)param_1 + iVar12) + '\x01';
  }
  else if (uVar6 != 1) {
    if (uVar6 == 2) {
      cVar10 = (*DAT_00036ef4)(param_1);
      if (cVar10 == '\x02') {
        *(undefined4 *)((int)param_1 + (int)DAT_00036ede) = 0;
      }
      pcVar5 = DAT_00036ef8;
      *(short *)((int)param_1 + (int)DAT_00036ee0) =
           *(short *)((int)param_1 + (int)DAT_00036ee0) + 1;
      (*pcVar5)(param_1);
      if ((*(int *)((int)param_1 + (int)DAT_00036ee2) == 0) ||
         (7 < *(ushort *)((int)param_1 + (int)DAT_00036ee0))) {
        *(undefined4 *)((int)param_1 + (int)DAT_0003707e) = 1;
      }
      else {
        local_2c = 0;
        iStack36 = (int)DAT_00036ee4;
        iStack40 = (int)DAT_00036ee6;
        iVar19 = (int)DAT_00036ee8;
        *(undefined4 *)((int)param_1 + iVar19) = *(undefined4 *)((int)param_1 + iVar19);
        *(int *)((int)param_1 + iVar19 + 4) = *(int *)((int)param_1 + iVar19 + 4) + iStack40;
        *(int *)((int)param_1 + iVar19 + 8) = *(int *)((int)param_1 + iVar19 + 8) + iStack36;
      }
      if ((0x1e < *(ushort *)((int)param_1 + (int)DAT_00037080)) &&
         (*(int *)((int)param_1 + (int)DAT_00037082) == 0)) {
        *(undefined4 *)((int)param_1 + (int)DAT_00037082) = 1;
      }
      if (*(uint *)((int)param_1 + (int)DAT_00037084) != 1) {
        return *(uint *)((int)param_1 + (int)DAT_00037084);
      }
      uVar6 = (*DAT_00037098)(param_1);
      if ((uVar6 & 0xff) != 1) {
        return uVar6 & 0xff;
      }
      (*DAT_0003709c)(param_1,(int)DAT_00037086);
      if (*(int *)((int)param_1 + (int)DAT_00037088) == 0) {
        (*pcVar4)();
        uVar6 = (*DAT_000370a0)();
        (*pcVar3)(uVar6 >> 0x10,3);
        uVar11 = (*DAT_000370a4)();
        *(undefined *)((int)DAT_0003708c + (int)param_1) = uVar11;
        iVar19 = (*pcVar4)();
        iVar12 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_0003708e);
        iVar19 = (*pcVar4)();
        iVar12 = *(int *)(*(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00037090) *
                          0x20 + iVar12 + 0x1c);
        iVar19 = (*pcVar4)();
        iVar19 = *(int *)((int)(char)(*(char *)((int)param_1 + (int)DAT_0003708c) * '\f') +
                         *(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00037090) * 0x60
                         + iVar12);
        iVar12 = (*pcVar4)();
        *(int *)((int)param_1 + (int)DAT_00037092) =
             iVar19 + *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + 0xc);
        iVar19 = (*pcVar4)();
        iVar12 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_0003708e);
        iVar19 = (*pcVar4)();
        iVar12 = *(int *)(*(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00037090) *
                          0x20 + iVar12 + 0x1c);
        iVar19 = (*pcVar4)();
        iVar19 = *(int *)((int)(char)(*(char *)((int)param_1 + (int)DAT_0003708c) * '\f') +
                          *(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00037090) *
                          0x60 + iVar12 + 4);
        iVar12 = (*pcVar4)();
        *(int *)((int)param_1 + (int)DAT_00037094) =
             iVar19 + *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + 0x10);
        iVar19 = (*pcVar4)();
        iVar12 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_0003708e);
        iVar19 = (*pcVar4)();
        iVar12 = *(int *)(*(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00037090) *
                          0x20 + iVar12 + 0x1c);
        iVar19 = (*pcVar4)();
        iVar19 = *(int *)((int)(char)(*(char *)((int)param_1 + (int)DAT_00037202) * '\f') +
                          *(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00037090) *
                          0x60 + iVar12 + 8);
        iVar12 = (*pcVar4)();
        pcVar3 = DAT_00037218;
        *(int *)((int)param_1 + (int)DAT_00037204) =
             iVar19 + *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + 0x14);
        (*pcVar3)();
      }
      iVar19 = (int)DAT_00037206;
      *(undefined2 *)((int)param_1 + iVar19) = 0;
      uVar6 = iVar19 - 3;
      *(char *)((int)param_1 + uVar6) = *(char *)((int)param_1 + uVar6) + '\x01';
      return uVar6;
    }
    if (uVar6 != 3) {
      return uVar6;
    }
    piVar9 = &iStack80;
    iVar19 = (*DAT_0003652c)();
    *piVar9 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + 0xc) -
              *(int *)((int)param_1 + (int)DAT_00037208);
    piVar9 = &iStack76;
    iVar19 = (*pcVar4)();
    *piVar9 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + 0x10) -
              *(int *)((int)param_1 + (int)DAT_0003720a);
    piVar9 = aiStack72;
    iVar19 = (*pcVar4)();
    pcVar5 = DAT_0003721c;
    *piVar9 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + 0x14) -
              *(int *)((int)param_1 + (int)DAT_0003720c);
    (*pcVar5)(&iStack80,&uStack88);
    *(undefined4 *)((int)param_1 + (int)DAT_0003720e) = uStack88;
    iVar19 = (int)DAT_00037210;
    *(undefined4 *)((int)param_1 + iVar19) = uStack84;
    *(undefined4 *)((int)param_1 + iVar19 + 4) = 0;
    if (*(short *)((int)param_1 + (int)DAT_00037206) == 0x1e) {
      (*DAT_00037220)(0,0x3c);
      uVar8 = (*DAT_00037224)(param_1);
      *(undefined4 *)((int)DAT_00037212 + (int)param_1) = uVar8;
      iStack96 = 0;
      do {
        bVar15 = 0;
        iVar19 = (int)(short)((short)iStack96 * 0x24);
        do {
          iVar18 = (int)(short)(((short)(char)bVar15 & 0xffU) * 0x240);
          puVar17 = (undefined4 *)((int)param_1 + iVar19 + iVar18 + DAT_00037214);
          puVar17[2] = 0;
          puVar17[1] = 0;
          *puVar17 = 0;
          iVar12 = iVar19 + iVar18 + DAT_00037214;
          *(undefined4 *)((int)param_1 + iVar12 + 0x14) = 0;
          *(undefined4 *)((int)param_1 + iVar12 + 0x10) = 0;
          *(undefined4 *)((int)param_1 + iVar12 + 0xc) = 0;
          iVar12 = iVar19 + iVar18 + DAT_00037214;
          *(undefined4 *)((int)param_1 + iVar12 + 0x20) = 0;
          *(undefined4 *)((int)param_1 + iVar12 + 0x1c) = 0;
          *(undefined4 *)((int)param_1 + iVar12 + 0x18) = 0;
          iVar14 = (int)DAT_00037214;
          puVar17 = (undefined4 *)((int)param_1 + iVar19 + iVar18 + DAT_00037216);
          puVar17[2] = 0;
          puVar17[1] = 0;
          *puVar17 = 0;
          iVar12 = iVar19 + iVar18 + DAT_00037216;
          *(undefined4 *)((int)param_1 + iVar12 + 0x14) = 0;
          *(undefined4 *)((int)param_1 + iVar12 + 0x10) = 0;
          *(undefined4 *)((int)param_1 + iVar12 + 0xc) = 0;
          iVar12 = iVar19 + iVar18 + DAT_00037216;
          *(undefined4 *)((int)param_1 + iVar12 + 0x20) = 0;
          *(undefined4 *)((int)param_1 + iVar12 + 0x1c) = 0;
          *(undefined4 *)((int)param_1 + iVar12 + 0x18) = 0;
          if (bVar15 == 0) {
            uVar8 = 2;
          }
          else {
            uVar8 = 4;
          }
          (*DAT_00037344)(param_1 + 3,uVar8,0,(int)param_1 + iVar19 + iVar18 + iVar14 + 0x18);
          if (bVar15 == 0) {
            uVar8 = 2;
          }
          else {
            uVar8 = 4;
          }
          (*DAT_00037344)(param_1 + 3,uVar8,0,(int)param_1 + iVar19 + iVar18 + DAT_00037338 + 0x18);
          pcVar5 = DAT_0003734c;
          uVar8 = DAT_00037348;
          bVar15 = bVar15 + 1;
        } while (bVar15 < 2);
        iStack96 = iStack96 + 1;
      } while (iStack96 < 0x10);
      local_64 = 0;
      do {
        iVar19 = (*pcVar4)();
        (*pcVar5)((int)param_1 + (uVar20 & 0xff) + (int)DAT_0003733c,
                  (int)*(short *)(*(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_0003733a
                                          ) + 4),uVar8);
        pcVar13 = (char *)((int)param_1 + (uVar20 & 0xff) + (int)DAT_0003733c + 0x14);
        uVar6 = (*DAT_00037350)();
        cVar10 = (*pcVar3)(uVar6 >> 0x10,0xd);
        *pcVar13 = cVar10 + '\x03';
        iVar19 = (*pcVar4)();
        uVar6 = uVar20 + 0x18 & 0xff;
        (*pcVar5)((int)param_1 + uVar6 + (int)DAT_0003733c,
                  (int)*(short *)(*(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_0003733a
                                          ) + 4),uVar8);
        pcVar13 = (char *)((int)param_1 + uVar6 + (int)DAT_0003733c + 0x14);
        uVar6 = (*DAT_00037350)();
        cVar10 = (*pcVar3)(uVar6 >> 0x10,0xd);
        *pcVar13 = cVar10 + '\x03';
        local_64 = local_64 + 2;
        uVar20 = uVar20 + 0x30;
      } while (local_64 < 8);
      iVar19 = (int)DAT_0003733e;
      *(undefined4 *)((int)param_1 + iVar19) = 1;
      *(undefined4 *)((int)param_1 + iVar19 + 4) = 1;
    }
    uVar6 = (uint)DAT_00037340;
    uVar2 = *(ushort *)((int)param_1 + uVar6);
    *(ushort *)((int)param_1 + uVar6) = uVar2 + 1;
    if (uVar2 < 0x43) {
      return uVar6;
    }
    uVar6 = (uint)DAT_00037342;
    *(char *)((int)param_1 + uVar6) = *(char *)((int)param_1 + uVar6) + '\x01';
    return uVar6;
  }
  if (*(int *)((int)param_1 + (int)DAT_00036a0e) == 0) {
    uVar1 = *(ushort *)((int)param_1 + (int)DAT_00036bd6);
    *(ushort *)((int)param_1 + (int)DAT_00036bd6) = uVar1 + 1;
    if (uVar1 < 0x1f) {
      uVar6 = (uint)DAT_00036ed4;
      if (*(int *)((int)param_1 + uVar6) == 0) {
        uVar8 = (*pcVar3)(*(undefined4 *)
                           ((short)((ushort)((uint)*(undefined4 *)((int)param_1 + (int)DAT_00036ed6)
                                            >> 0x10) & uVar2) * 4 + DAT_00036eec),iVar19);
        *(undefined4 *)((int)DAT_00036ed8 + (int)param_1) = uVar8;
        uVar8 = (*pcVar3)(*(undefined4 *)
                           ((short)((ushort)((uint)*(undefined4 *)((int)param_1 + (int)DAT_00036ed6)
                                            >> 0x10) & uVar2) * 4 + DAT_00036ef0),iVar19);
        *(undefined4 *)((int)DAT_00036eda + (int)param_1) = uVar8;
        iVar19 = (int)DAT_00036edc;
        *(undefined4 *)((int)param_1 + iVar19) = 0;
        piVar9 = (int *)(iVar19 + -4 + (int)param_1);
        iVar19 = (*pcVar4)();
        *piVar9 = *piVar9 + *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 0x18) + 8);
        piVar9 = (int *)((int)DAT_00036edc + (int)param_1);
        iVar19 = (*pcVar4)();
        param_1 = (int *)((int)DAT_00036eda + (int)param_1);
        *piVar9 = *piVar9 + *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 0x18) + 0xc);
        uVar6 = (*pcVar4)();
        *param_1 = *param_1 + *(int *)(*(int *)(*(int *)(uVar6 + 0x10) + 0x18) + 0x10);
      }
    }
    else {
      uVar6 = (*DAT_00036be8)(param_1);
      uVar6 = uVar6 & 0xff;
      if (uVar6 == 1) {
        (*DAT_00036bec)(param_1,(int)DAT_00036bd8);
        iVar19 = (*pcVar4)();
        iVar12 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00036bda);
        iVar19 = (*pcVar4)();
        iVar12 = *(int *)(*(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00036bdc) *
                          0x20 + iVar12 + 0x1c);
        iVar19 = (*pcVar4)();
        iVar12 = *(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00036bdc) * 0x60 +
                 iVar12;
        (*pcVar4)();
        cVar10 = (*DAT_00036bf0)();
        iVar12 = *(int *)(iVar12 + (char)(cVar10 * '\f'));
        iVar19 = (*pcVar4)();
        *(int *)((int)param_1 + (int)DAT_00036be0) =
             iVar12 + *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + 0xc);
        iVar19 = (*pcVar4)();
        iVar12 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00036bda);
        iVar19 = (*pcVar4)();
        iVar12 = *(int *)(*(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00036bdc) *
                          0x20 + iVar12 + 0x1c);
        iVar19 = (*pcVar4)();
        iVar12 = *(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00036bdc) * 0x60 +
                 iVar12;
        (*pcVar4)();
        cVar10 = (*DAT_00036bf0)();
        iVar12 = *(int *)((char)(cVar10 * '\f') + iVar12 + 4);
        iVar19 = (*pcVar4)();
        *(int *)((int)param_1 + (int)DAT_00036be2) =
             iVar12 + *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + 0x10);
        iVar19 = (*pcVar4)();
        iVar12 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00036bda);
        iVar19 = (*pcVar4)();
        iVar12 = *(int *)(*(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00036bdc) *
                          0x20 + iVar12 + 0x1c);
        iVar19 = (*pcVar4)();
        iVar12 = *(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00036bdc) * 0x60 +
                 iVar12;
        (*pcVar4)();
        cVar10 = (*DAT_00036bf0)();
        iVar12 = *(int *)((char)(cVar10 * '\f') + iVar12 + 8);
        iVar19 = (*pcVar4)();
        *(int *)((int)param_1 + (int)DAT_00036be4) =
             iVar12 + *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + 0x14);
        if (*(int *)((int)param_1 + (int)DAT_00036be6) == 0) {
          if (*(int *)((int)param_1 + (int)DAT_00036c28) == 0) {
            puVar16 = PTR_DAT_00036dc4;
            if (*(int *)((int)param_1 + (int)DAT_00036c2c) != 0) {
              puVar16 = DAT_00036c30;
            }
          }
          else {
            puVar16 = (undefined *)(int)DAT_00036c2a;
          }
        }
        else {
          iVar19 = (*pcVar4)();
          puVar16 = (undefined *)(int)DAT_00036c26;
          *(undefined4 *)((int)param_1 + (int)DAT_00036c24) =
               *(undefined4 *)(*(int *)(*(int *)(iVar19 + 0x10) + 0x18) + 8);
        }
        *(undefined **)((int)param_1 + DAT_00036dae + 0x6c) =
             puVar16 + *(int *)((int)param_1 + (int)DAT_00036dae);
        if (*(int *)((int)param_1 + (int)DAT_00036db0) != 0) {
          *(undefined4 *)((int)param_1 + (int)DAT_00036db2) = 0;
          (*pcVar4)();
          uVar11 = (*DAT_00036dc8)();
          *(undefined *)((int)DAT_00036db6 + (int)param_1) = uVar11;
          iVar19 = (*pcVar4)();
          iVar12 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + 0xc);
          iVar19 = (*pcVar4)();
          iVar14 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00036db8);
          iVar19 = (*pcVar4)();
          iVar14 = *(int *)(*(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00036dba) *
                            0x20 + iVar14 + 0x1c);
          iVar19 = (*pcVar4)();
          *(int *)((int)DAT_00036dbc + (int)param_1) =
               iVar12 + *(int *)((int)(char)(*(char *)((int)param_1 + (int)DAT_00036db6) * '\f') +
                                *(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00036dba)
                                * 0x60 + iVar14);
          iVar19 = (*pcVar4)();
          iVar12 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + 0x10);
          iVar19 = (*pcVar4)();
          iVar14 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00036db8);
          iVar19 = (*pcVar4)();
          iVar14 = *(int *)(*(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00036dba) *
                            0x20 + iVar14 + 0x1c);
          iVar19 = (*pcVar4)();
          *(int *)((int)DAT_00036dbe + (int)param_1) =
               iVar12 + *(int *)((int)(char)(*(char *)((int)param_1 + (int)DAT_00036db6) * '\f') +
                                 *(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00036dba
                                          ) * 0x60 + iVar14 + 4);
          iVar19 = (*pcVar4)();
          iVar12 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + 0x14);
          iVar19 = (*pcVar4)();
          iVar14 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00036db8);
          iVar19 = (*pcVar4)();
          iVar14 = *(int *)(*(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00036dba) *
                            0x20 + iVar14 + 0x1c);
          iVar19 = (*pcVar4)();
          pcVar3 = DAT_00036dcc;
          *(int *)((int)DAT_00036dc0 + (int)param_1) =
               iVar12 + *(int *)((int)(char)(*(char *)((int)param_1 + (int)DAT_00036db6) * '\f') +
                                 *(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00036dba
                                          ) * 0x60 + iVar14 + 8);
          (*pcVar3)();
        }
        iVar19 = (int)DAT_00036dc2;
        *(char *)((int)param_1 + iVar19) = *(char *)((int)param_1 + iVar19) + '\x01';
        uVar6 = iVar19 + 3;
        *(undefined2 *)((int)param_1 + uVar6) = 0;
      }
    }
  }
  else {
    iVar19 = (int)DAT_00036a10;
    iVar12 = (int)DAT_00036a14;
    *(int *)((int)param_1 + iVar19) = *(int *)((int)param_1 + iVar19) - (int)DAT_00036a12;
    uVar6 = *(uint *)((int)param_1 + iVar19);
    if (((int)uVar6 < iVar12) && (param_1 != (int *)0x0)) {
      param_1[-1] = param_1[-1] | 1;
    }
  }
  return uVar6;
}



void FUN_00038b30(int param_1,ushort param_2,ushort param_3,undefined param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uStack36;
  undefined4 uStack32;
  int local_1c;
  int local_18;
  int local_14;
  
  pcVar1 = DAT_00038be4;
  if (param_2 < *(ushort *)(param_1 + DAT_00038bd6)) {
    iVar2 = (*DAT_00038be4)();
    local_1c = *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + 0xc) -
               *(int *)(param_1 + DAT_00038bd8);
    iVar2 = (*pcVar1)();
    local_18 = *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + 0x10) -
               *(int *)(param_1 + DAT_00038bda);
    iVar2 = (*pcVar1)();
    local_14 = *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + 0x14) -
               *(int *)(param_1 + DAT_00038bdc);
    (*DAT_00038be8)(&local_1c,&uStack36);
    *(undefined4 *)(param_1 + DAT_00038bde) = uStack36;
    iVar2 = (int)DAT_00038be0;
    *(undefined4 *)(param_1 + iVar2) = uStack32;
    *(undefined4 *)(param_1 + iVar2 + 4) = 0;
    if (param_3 < *(ushort *)(param_1 + DAT_00038bd6)) {
      *(undefined *)(param_1 + DAT_00038be2) = param_4;
    }
  }
  else {
    FUN_00039804(param_1);
  }
  return;
}



undefined4
FUN_00039210(short param_1,short param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  short sVar4;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar5;
  
  sVar4 = (*DAT_0003928c)((int)param_2);
  iVar1 = (*DAT_00039290)();
  iVar2 = ((int)param_1 & 0xffffU) * 4;
  sVar4 = (*DAT_00039294)(*(undefined4 *)
                           (*(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0xc) + iVar2) + 4),(int)sVar4
                          ,2);
  iVar5 = (int)DAT_00039288;
  iVar1 = (*DAT_00039290)();
  uVar3 = (*DAT_00039298)(*(undefined4 *)
                           (*(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0xc) + iVar2) + 4),(int)sVar4
                          ,param_3,3,param_5,param_6,param_7,iVar5);
  return uVar3;
}



void FUN_00039804(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_30;
  undefined4 uStack44;
  int local_28;
  int iStack36;
  int iStack32;
  int local_1c;
  int iStack24;
  int iStack20;
  
  pcVar1 = DAT_00039924;
  iVar2 = (int)DAT_00039914;
  local_1c = *(int *)(param_1 + iVar2 + -0x6c) - *(int *)(param_1 + iVar2);
  iStack24 = *(int *)(param_1 + iVar2 + -0x68) - *(int *)(param_1 + iVar2 + 4);
  iStack20 = *(int *)(param_1 + iVar2 + -100) - *(int *)(param_1 + iVar2 + 8);
  iVar2 = (*DAT_00039924)(local_1c,local_1c);
  iVar3 = (*pcVar1)(iStack24,iStack24);
  iVar4 = (*pcVar1)(iStack20,iStack20);
  iVar5 = (*pcVar1)((int)DAT_00039916);
  if (iVar5 < iVar2 + iVar3 + iVar4) {
    iVar2 = (int)DAT_00039918;
    local_28 = *(int *)(param_1 + iVar2 + 0x6c) - *(int *)(param_1 + iVar2);
    iStack36 = *(int *)(param_1 + iVar2 + 0x70) - *(int *)(param_1 + iVar2 + 4);
    iStack32 = *(int *)(param_1 + iVar2 + 0x74) - *(int *)(param_1 + iVar2 + 8);
    (*DAT_00039928)(&local_28,&local_30);
    *(undefined4 *)(param_1 + DAT_0003991a) = local_30;
    iVar2 = (int)DAT_0003991c;
    *(undefined4 *)(param_1 + iVar2) = uStack44;
    *(undefined4 *)(param_1 + iVar2 + 4) = 0;
  }
  return;
}



void FUN_0003ac18(int param_1)

{
  code *pcVar1;
  code *pcVar2;
  ushort uVar3;
  ushort extraout_var;
  ushort extraout_var_00;
  ushort extraout_var_01;
  ushort extraout_var_02;
  uint uVar4;
  undefined uVar8;
  char cVar9;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar10;
  
  pcVar1 = DAT_0003aca4;
  iVar10 = DAT_0003aca0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (*(short *)(iVar10 + DAT_0003ac72) < *(short *)(iVar10 + DAT_0003ac70) >> 4) {
    iVar10 = 2;
  }
  else if (*(short *)(iVar10 + DAT_0003ac72) < *(short *)(iVar10 + DAT_0003ac70) >> 2) {
    iVar10 = 1;
    uVar4 = (*pcVar1)();
    if ((uVar4 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x34) = 1;
    }
  }
  else {
    iVar10 = 0;
  }
  pcVar2 = DAT_0003ad44;
  if (iVar10 == 2) {
    uVar4 = (*pcVar1)();
    cVar9 = (*pcVar2)(uVar4 >> 0x10,3);
    if (cVar9 == '\0') {
      *(undefined *)(param_1 + 0x31) = 7;
      *(undefined4 *)(param_1 + 0x34) = 1;
    }
    else {
      *(undefined *)(param_1 + 0x31) = 4;
    }
  }
  else {
    uVar4 = (*pcVar1)();
    uVar8 = (*pcVar2)(uVar4 >> 0x10,8);
    *(undefined *)(param_1 + 0x31) = uVar8;
  }
  cVar9 = *(char *)(param_1 + 0x31);
  if (cVar9 == '\0') {
    *(undefined4 *)(param_1 + 0x18) = DAT_0003ad48;
  }
  else {
    uVar7 = DAT_0003ad4c;
    if ((cVar9 == '\x01') ||
       ((uVar5 = DAT_0003ad50, cVar9 != '\x02' &&
        ((uVar7 = DAT_0003ad54, cVar9 == '\x03' ||
         ((uVar5 = DAT_0003ad58, cVar9 != '\x04' &&
          ((uVar7 = DAT_0003ad5c, cVar9 == '\x05' ||
           ((uVar5 = DAT_0003ad60, cVar9 != '\x06' &&
            (uVar7 = DAT_0003ad64, uVar5 = DAT_0003aee0, cVar9 == '\a')))))))))))) {
      *(undefined4 *)(param_1 + 0x18) = uVar7;
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = uVar5;
    }
  }
  uVar7 = DAT_0003aee4;
  *(undefined *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  uVar3 = DAT_0003aed8;
  uVar4 = (*pcVar1)();
  uVar5 = (*pcVar2)(uVar4 >> 0x10,uVar7);
  uVar4 = (*pcVar1)();
  (*pcVar2)(uVar4 >> 0x10,uVar7);
  uVar5 = (*pcVar2)(*(undefined4 *)(DAT_0003aee8 + (short)(extraout_var & uVar3) * 4),uVar5);
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
  uVar4 = (*pcVar1)();
  uVar5 = (*pcVar2)(uVar4 >> 0x10,uVar7);
  uVar4 = (*pcVar1)();
  (*pcVar2)(uVar4 >> 0x10,uVar7);
  uVar5 = (*pcVar2)(*(undefined4 *)(DAT_0003aeec + (short)(extraout_var_00 & uVar3) * 4),uVar5);
  uVar4 = (*pcVar1)();
  (*pcVar2)(uVar4 >> 0x10,uVar7);
  uVar6 = (*pcVar2)(*(undefined4 *)(DAT_0003aee8 + (short)(extraout_var_01 & uVar3) * 4),uVar5);
  *(undefined4 *)(param_1 + 0x40) = uVar6;
  uVar4 = (*pcVar1)();
  (*pcVar2)(uVar4 >> 0x10,uVar7);
  uVar7 = (*pcVar2)(*(undefined4 *)(DAT_0003aeec + (short)(extraout_var_02 & uVar3) * 4),uVar5);
  *(undefined4 *)(param_1 + 0x38) = uVar7;
  return;
}



void FUN_0003ae2c(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  
  pcVar3 = DAT_0003aef0;
  iVar7 = (*DAT_0003aef0)();
  uVar8 = (*DAT_0003aef4)(param_1,(int)*(short *)(*(int *)(*(int *)(iVar7 + 0x10) + 0xc) +
                                                 (int)DAT_0003aeda) << 1);
  *(undefined4 *)(DAT_0003aedc + param_1) = uVar8;
  for (iVar7 = 0; iVar9 = (*pcVar3)(), pcVar5 = DAT_0003aefc, pcVar4 = DAT_0003aef8,
      iVar7 < *(short *)(*(int *)(*(int *)(iVar9 + 0x10) + 0xc) + (int)DAT_0003aeda);
      iVar7 = iVar7 + 1) {
    *(short *)(iVar7 * 2 + *(int *)(param_1 + DAT_0003aedc)) = (short)iVar7;
  }
  for (iVar7 = 0; iVar9 = (*pcVar3)(), pcVar6 = DAT_0003af00,
      iVar7 < *(short *)(*(int *)(*(int *)(iVar9 + 0x10) + 0xc) + (int)DAT_0003aeda);
      iVar7 = iVar7 + 1) {
    iVar9 = (*pcVar3)();
    sVar2 = *(short *)(*(int *)(*(int *)(iVar9 + 0x10) + 0xc) + (int)DAT_0003aeda);
    uVar10 = (*pcVar4)();
    iVar9 = (*pcVar5)(uVar10 >> 0x10,sVar2 - iVar7);
    iVar13 = (int)DAT_0003aedc;
    iVar14 = *(int *)(param_1 + iVar13);
    puVar12 = (undefined2 *)(iVar7 * 2 + iVar14);
    uVar1 = *puVar12;
    iVar9 = (iVar9 + iVar7) * 2;
    *puVar12 = *(undefined2 *)(iVar14 + iVar9);
    *(undefined2 *)(iVar9 + *(int *)(param_1 + iVar13)) = uVar1;
  }
  iVar7 = 0;
  while( true ) {
    iVar9 = (*pcVar3)();
    if (*(short *)(*(int *)(*(int *)(iVar9 + 0x10) + 0xc) + (int)DAT_0003b034) <= iVar7) {
      return;
    }
    iVar9 = (*pcVar3)();
    iVar13 = iVar7 * 2;
    if (((*(int *)(*(int *)(*(short *)(*(int *)(DAT_0003b02a + param_1) + iVar13) * 4 +
                           *(int *)(*(int *)(iVar9 + 0x10) + 0xc)) + 4) != 0) &&
        (iVar9 = (*pcVar3)(),
        (DAT_0003b038 &
        *(uint *)(*(int *)(*(int *)(*(short *)(*(int *)(DAT_0003b02a + param_1) + iVar13) * 4 +
                                   *(int *)(*(int *)(iVar9 + 0x10) + 0xc)) + 4) + 0x50)) == 0)) &&
       (iVar9 = (*pcVar3)(),
       '\0' < **(char **)(*(short *)(*(int *)(DAT_0003b02a + param_1) + iVar13) * 4 +
                         *(int *)(*(int *)(iVar9 + 0x10) + 0xc)))) break;
    iVar9 = (*pcVar3)();
    if (iVar7 == *(short *)(*(int *)(*(int *)(iVar9 + 0x10) + 0xc) + (int)DAT_0003b034) + -1) {
      *(undefined4 *)(param_1 + DAT_0003b036) = 1;
      iVar7 = (*pcVar3)();
      *(undefined4 *)(param_1 + DAT_0003b02e) =
           *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + 0xc);
      iVar7 = (*pcVar3)();
      *(undefined4 *)(param_1 + DAT_0003b030) =
           *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + 0x10);
      iVar7 = (*pcVar3)();
      *(undefined4 *)(param_1 + DAT_0003b032) =
           *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + 0x14);
      return;
    }
    iVar7 = iVar7 + 1;
  }
  *(undefined2 *)(param_1 + DAT_0003b02a + 6) =
       *(undefined2 *)(iVar7 * 2 + *(int *)(param_1 + DAT_0003b02a));
  iVar7 = (*pcVar3)();
  puVar11 = (undefined4 *)
            (*pcVar6)(*(undefined4 *)
                       (*(int *)(((int)*(short *)(DAT_0003b02c + param_1) & 0xffffU) * 4 +
                                *(int *)(*(int *)(iVar7 + 0x10) + 0xc)) + 4));
  *(undefined4 *)(param_1 + DAT_0003b02e) = *puVar11;
  iVar7 = (*pcVar3)();
  iVar7 = (*pcVar6)(*(undefined4 *)
                     (*(int *)(((int)*(short *)(DAT_0003b02c + param_1) & 0xffffU) * 4 +
                              *(int *)(*(int *)(iVar7 + 0x10) + 0xc)) + 4));
  *(undefined4 *)(param_1 + DAT_0003b030) = *(undefined4 *)(iVar7 + 4);
  iVar7 = (*pcVar3)();
  iVar7 = (*pcVar6)(*(undefined4 *)
                     (*(int *)(((int)*(short *)(DAT_0003b02c + param_1) & 0xffffU) * 4 +
                              *(int *)(*(int *)(iVar7 + 0x10) + 0xc)) + 4));
  *(undefined4 *)(param_1 + DAT_0003b032) = *(undefined4 *)(iVar7 + 8);
  return;
}



void FUN_0003b03c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  pcVar1 = DAT_0003b1cc;
  iVar2 = (int)DAT_0003b1c0;
  iVar6 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + iVar2 + 4);
  iVar7 = *(int *)(param_1 + 0x24);
  iVar5 = *(int *)(param_1 + iVar2 + 8);
  piVar8 = (int *)(DAT_0003b1c2 + param_1);
  iVar2 = (*DAT_0003b1cc)(*(int *)(param_1 + iVar2) - *(int *)(param_1 + 0x1c),*piVar8 - piVar8[1],
                          param_3,param_4,piVar8);
  iVar4 = (*pcVar1)(iVar4 - iVar6,
                    *(int *)(DAT_0003b1c2 + param_1) - ((int *)(DAT_0003b1c2 + param_1))[1]);
  iVar5 = (*pcVar1)(iVar5 - iVar7,
                    *(int *)(DAT_0003b1c2 + param_1) - ((int *)(DAT_0003b1c2 + param_1))[1]);
  iVar6 = (int)DAT_0003b1c4;
  iVar7 = *(int *)(param_1 + iVar6) - (*(int *)(param_1 + 0x1c) + iVar2);
  iVar4 = *(int *)(param_1 + iVar6 + 4) - (*(int *)(param_1 + 0x20) + iVar4);
  iVar5 = *(int *)(param_1 + iVar6 + 8) - (*(int *)(param_1 + 0x24) + iVar5);
  sVar3 = (*DAT_0003b1d4)((int)*(short *)(((int)*(char *)(param_1 + 0x31) & 0xffU) * 2 +
                                         DAT_0003b1d0) + (int)*(short *)(param_1 + 0x28));
  iVar2 = (*DAT_0003b1d8)();
  sVar3 = (*DAT_0003b1dc)(*(undefined4 *)
                           (*(int *)(((int)*(short *)(DAT_0003b1c6 + param_1) & 0xffffU) * 4 +
                                    *(int *)(*(int *)(iVar2 + 0x10) + 0xc)) + 4),(int)sVar3,2);
  iVar9 = (int)DAT_0003b1c4;
  iVar6 = (int)DAT_0003b1c8;
  iVar2 = (*DAT_0003b1d8)();
  (*DAT_0003b1e0)(*(undefined4 *)
                   (*(int *)(((int)*(short *)(DAT_0003b1c6 + param_1) & 0xffffU) * 4 +
                            *(int *)(*(int *)(iVar2 + 0x10) + 0xc)) + 4),(int)sVar3,iVar9 + param_1,
                  3,iVar7,iVar4,iVar5,iVar6);
  return;
}



void FUN_0003c4be(undefined *param_1)

{
  ushort extraout_var;
  ushort extraout_var_00;
  ushort extraout_var_01;
  ushort extraout_var_02;
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 unaff_r8;
  code *unaff_r9;
  uint unaff_r10;
  int unaff_r12;
  code *unaff_r13;
  int unaff_r14;
  undefined4 *in_stack_00000000;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  
  do {
    uVar1 = (*unaff_r13)(*(undefined4 *)(param_1 + 0xc));
    *in_stack_00000000 = uVar1;
    in_stack_00000000 = (undefined4 *)&stack0x00000010;
    uVar1 = (*unaff_r13)(in_stack_00000010);
    *in_stack_00000000 = uVar1;
    in_stack_00000000 = (undefined4 *)&stack0x00000014;
    uVar1 = (*unaff_r13)(in_stack_00000014);
    *in_stack_00000000 = uVar1;
    piVar4 = (int *)(*(int *)(unaff_r14 + 0x10) + unaff_r12);
    *piVar4 = *piVar4 + in_stack_0000000c;
    iVar5 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
    *(uint *)(iVar5 + 4) = *(int *)(iVar5 + 4) + in_stack_00000010;
    iVar5 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
    *(uint *)(iVar5 + 8) = *(int *)(iVar5 + 8) + in_stack_00000014;
    while( true ) {
      if (in_stack_00000004 == *(int *)(unaff_r14 + 0x20) + -1) {
        in_stack_0000000c =
             *(int *)(*(int *)(unaff_r14 + 0x10) + 0x18) -
             *(int *)((*(int *)(unaff_r14 + 0x20) + -1) * 0x24 + *(int *)(unaff_r14 + 0x10) + 0x18);
        in_stack_00000010 =
             *(int *)(*(int *)(unaff_r14 + 0x10) + 0x1c) -
             *(int *)((*(int *)(unaff_r14 + 0x20) + -1) * 0x24 + *(int *)(unaff_r14 + 0x10) + 0x1c);
        in_stack_00000014 =
             *(int *)(*(int *)(unaff_r14 + 0x10) + 0x20) -
             *(int *)((*(int *)(unaff_r14 + 0x20) + -1) * 0x24 + *(int *)(unaff_r14 + 0x10) + 0x20);
        if ((unaff_r10 & in_stack_0000000c) == 0) {
          in_stack_0000000c = DAT_0003c7d4 & in_stack_0000000c;
        }
        else {
          in_stack_0000000c = DAT_0003c7d0 | in_stack_0000000c;
        }
        if ((unaff_r10 & in_stack_00000010) == 0) {
          in_stack_00000010 = DAT_0003c7d4 & in_stack_00000010;
        }
        else {
          in_stack_00000010 = DAT_0003c7d0 | in_stack_00000010;
        }
        if ((unaff_r10 & in_stack_00000014) == 0) {
          in_stack_00000014 = DAT_0003c990 & in_stack_00000014;
        }
        else {
          in_stack_00000014 = DAT_0003c7d0 | in_stack_00000014;
        }
        in_stack_00000000 = (undefined4 *)&stack0x0000000c;
        uVar1 = (*unaff_r13)(in_stack_0000000c);
        *in_stack_00000000 = uVar1;
        in_stack_00000000 = (undefined4 *)&stack0x00000010;
        uVar1 = (*unaff_r13)(in_stack_00000010);
        *in_stack_00000000 = uVar1;
        in_stack_00000000 = (undefined4 *)&stack0x00000014;
        uVar1 = (*unaff_r13)(in_stack_00000014);
        *in_stack_00000000 = uVar1;
        piVar4 = (int *)((*(int *)(unaff_r14 + 0x20) + -1) * 0x24 + *(int *)(unaff_r14 + 0x10));
        *piVar4 = *piVar4 + in_stack_0000000c;
        iVar5 = (*(int *)(unaff_r14 + 0x20) + -1) * 0x24 + *(int *)(unaff_r14 + 0x10);
        *(uint *)(iVar5 + 4) = *(int *)(iVar5 + 4) + in_stack_00000010;
        iVar5 = (*(int *)(unaff_r14 + 0x20) + -1) * 0x24 + *(int *)(unaff_r14 + 0x10);
        *(uint *)(iVar5 + 8) = *(int *)(iVar5 + 8) + in_stack_00000014;
      }
      else {
        iVar5 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
        in_stack_0000000c = *(int *)(iVar5 + 0x3c) - *(int *)(iVar5 + 0x18);
        iVar5 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
        in_stack_00000010 = *(int *)(iVar5 + 0x40) - *(int *)(iVar5 + 0x1c);
        iVar5 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
        in_stack_00000014 = *(int *)(iVar5 + 0x44) - *(int *)(iVar5 + 0x20);
        if ((unaff_r10 & in_stack_0000000c) == 0) {
          in_stack_0000000c = DAT_0003c7d4 & in_stack_0000000c;
        }
        else {
          in_stack_0000000c = DAT_0003c7d0 | in_stack_0000000c;
        }
        if ((unaff_r10 & in_stack_00000010) == 0) {
          in_stack_00000010 = DAT_0003c7d4 & in_stack_00000010;
        }
        else {
          in_stack_00000010 = DAT_0003c7d0 | in_stack_00000010;
        }
        if ((unaff_r10 & in_stack_00000014) == 0) {
          in_stack_00000014 = DAT_0003c7d4 & in_stack_00000014;
        }
        else {
          in_stack_00000014 = DAT_0003c7d0 | in_stack_00000014;
        }
        in_stack_00000000 = (undefined4 *)&stack0x0000000c;
        uVar1 = (*unaff_r13)(in_stack_0000000c);
        *in_stack_00000000 = uVar1;
        in_stack_00000000 = (undefined4 *)&stack0x00000010;
        uVar1 = (*unaff_r13)(in_stack_00000010);
        *in_stack_00000000 = uVar1;
        in_stack_00000000 = (undefined4 *)&stack0x00000014;
        uVar1 = (*unaff_r13)(in_stack_00000014);
        *in_stack_00000000 = uVar1;
        piVar4 = (int *)(*(int *)(unaff_r14 + 0x10) + unaff_r12);
        *piVar4 = *piVar4 + in_stack_0000000c;
        iVar5 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
        *(uint *)(iVar5 + 4) = *(int *)(iVar5 + 4) + in_stack_00000010;
        iVar5 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
        *(uint *)(iVar5 + 8) = *(int *)(iVar5 + 8) + in_stack_00000014;
      }
      uVar2 = (*unaff_r9)();
      if ((uVar2 & 0x1f) == 0) {
        in_stack_00000000 = (undefined4 *)&stack0x0000001c;
        uVar2 = (*unaff_r9)();
        uVar3 = (*unaff_r13)(uVar2 >> 0x10,DAT_0003c994);
        uVar1 = unaff_r8;
        uVar2 = (*unaff_r9)();
        (*unaff_r13)(uVar2 >> 0x10,uVar1);
        uVar1 = (*unaff_r13)(*(undefined4 *)
                              (DAT_0003c998 + (short)(extraout_var & DAT_0003c98c) * 4),uVar3);
        *in_stack_00000000 = uVar1;
        uVar2 = (*unaff_r9)();
        in_stack_00000000 = (undefined4 *)(*unaff_r13)(uVar2 >> 0x10,DAT_0003c994);
        uVar1 = unaff_r8;
        uVar2 = (*unaff_r9)();
        (*unaff_r13)(uVar2 >> 0x10,uVar1);
        in_stack_00000008 =
             (*unaff_r13)(*(undefined4 *)
                           (DAT_0003c99c + (short)(extraout_var_00 & DAT_0003c98c) * 4),
                          in_stack_00000000);
        in_stack_00000000 = (undefined4 *)&stack0x00000020;
        uVar1 = unaff_r8;
        uVar2 = (*unaff_r9)();
        (*unaff_r13)(uVar2 >> 0x10,uVar1);
        uVar1 = (*unaff_r13)(*(undefined4 *)
                              (DAT_0003c998 + (short)(extraout_var_01 & DAT_0003c98c) * 4),
                             in_stack_00000008);
        *in_stack_00000000 = uVar1;
        in_stack_00000000 = (undefined4 *)&stack0x00000018;
        uVar1 = unaff_r8;
        uVar2 = (*unaff_r9)();
        (*unaff_r13)(uVar2 >> 0x10,uVar1);
        uVar1 = (*unaff_r13)(*(undefined4 *)
                              (DAT_0003c99c + (short)(extraout_var_02 & DAT_0003c98c) * 4),
                             in_stack_00000008);
        *in_stack_00000000 = uVar1;
        piVar4 = (int *)(*(int *)(unaff_r14 + 0x10) + unaff_r12);
        *piVar4 = *piVar4 + in_stack_00000018;
        iVar5 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
        *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + in_stack_0000001c;
        iVar5 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + in_stack_00000020;
      }
      piVar4 = (int *)(*(int *)(unaff_r14 + 0x10) + unaff_r12);
      piVar4[3] = piVar4[3] + *piVar4;
      iVar5 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
      iVar7 = (int)DAT_0003cad0;
      in_stack_00000000 = (undefined4 *)&stack0x0000000c;
      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + *(int *)(iVar5 + 4);
      iVar5 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
      *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + *(int *)(iVar5 + 8);
      uVar1 = (*unaff_r13)(*(undefined4 *)(*(int *)(unaff_r14 + 0x10) + unaff_r12 + 0xc),iVar7);
      *in_stack_00000000 = uVar1;
      in_stack_00000000 = (undefined4 *)&stack0x00000010;
      uVar1 = (*unaff_r13)(*(undefined4 *)(*(int *)(unaff_r14 + 0x10) + unaff_r12 + 0x10),
                           (int)DAT_0003cad0);
      iVar5 = (int)DAT_0003cad0;
      *in_stack_00000000 = uVar1;
      in_stack_00000000 = (undefined4 *)&stack0x00000014;
      uVar1 = (*unaff_r13)(*(undefined4 *)(*(int *)(unaff_r14 + 0x10) + unaff_r12 + 0x14),iVar5);
      *in_stack_00000000 = uVar1;
      iVar5 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
      *(uint *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) - in_stack_0000000c;
      iVar5 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
      *(uint *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) - in_stack_00000010;
      iVar5 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
      *(uint *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) - in_stack_00000014;
      iVar5 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
      *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + *(int *)(iVar5 + 0xc);
      iVar5 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
      *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + *(int *)(iVar5 + 0x10);
      iVar5 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
      *(int *)(iVar5 + 0x20) = *(int *)(iVar5 + 0x20) + *(int *)(iVar5 + 0x14);
      uVar2 = DAT_0003cad8;
      iVar5 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
      *(uint *)(iVar5 + 0x18) = *(uint *)(iVar5 + 0x18) & DAT_0003cad8;
      iVar5 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
      *(uint *)(iVar5 + 0x1c) = uVar2 & *(uint *)(iVar5 + 0x1c);
      iVar5 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
      *(uint *)(iVar5 + 0x20) = *(uint *)(iVar5 + 0x20) & DAT_0003cad8;
      puVar6 = (undefined4 *)(*(int *)(unaff_r14 + 0x10) + unaff_r12);
      puVar6[2] = 0;
      puVar6[1] = 0;
      *puVar6 = 0;
      iVar5 = in_stack_00000004 + 1;
      if (*(int *)(unaff_r14 + 0x20) <= iVar5) {
        in_stack_00000004 = iVar5;
        if ((*(int *)(unaff_r14 + 0x34) == 1) && (*(short *)(unaff_r14 + 0x2c) == 0x3c)) {
          in_stack_00000000 = (undefined4 *)&LAB_0000000a;
          (*DAT_0003cae4)();
          iVar5 = (*DAT_0003cae8)();
          iVar5 = *(int *)(*(int *)(iVar5 + 0x10) + 4);
          *(uint *)(iVar5 + DAT_0003cad2) = *(uint *)(iVar5 + DAT_0003cad2) | (int)DAT_0003cad4;
        }
        for (iVar5 = 0; iVar5 < *(int *)(unaff_r14 + 0x24); iVar5 = iVar5 + 1) {
          iVar7 = iVar5 * 0x38;
          if (*(ushort *)(*(int *)(unaff_r14 + 0xc) + iVar7 + 0x34) <= *(ushort *)(unaff_r14 + 0x2c)
             ) {
            if (*(short *)(unaff_r14 + 0x2c) == 0x46) {
              *(undefined2 *)(*(int *)(unaff_r14 + 0xc) + iVar7 + 0x36) = 1;
            }
            FUN_0003cc78(*(int *)(unaff_r14 + 0xc) + iVar7);
          }
        }
        return;
      }
      unaff_r12 = iVar5 * 0x24;
      if (iVar5 != 0) break;
      in_stack_0000000c =
           *(int *)((*(int *)(unaff_r14 + 0x20) + -1) * 0x24 + *(int *)(unaff_r14 + 0x10) + 0x18) -
           *(int *)(*(int *)(unaff_r14 + 0x10) + 0x18);
      in_stack_00000010 =
           *(int *)((*(int *)(unaff_r14 + 0x20) + -1) * 0x24 + *(int *)(unaff_r14 + 0x10) + 0x1c) -
           *(int *)(*(int *)(unaff_r14 + 0x10) + 0x1c);
      in_stack_00000014 =
           *(int *)((*(int *)(unaff_r14 + 0x20) + -1) * 0x24 + *(int *)(unaff_r14 + 0x10) + 0x20) -
           *(int *)(*(int *)(unaff_r14 + 0x10) + 0x20);
      if ((unaff_r10 & in_stack_0000000c) == 0) {
        in_stack_0000000c = DAT_0003c7d4 & in_stack_0000000c;
      }
      else {
        in_stack_0000000c = DAT_0003c7d0 | in_stack_0000000c;
      }
      if ((unaff_r10 & in_stack_00000010) == 0) {
        in_stack_00000010 = DAT_0003c7d4 & in_stack_00000010;
      }
      else {
        in_stack_00000010 = DAT_0003c7d0 | in_stack_00000010;
      }
      if ((unaff_r10 & in_stack_00000014) == 0) {
        in_stack_00000014 = DAT_0003c7d4 & in_stack_00000014;
      }
      else {
        in_stack_00000014 = DAT_0003c7d0 | in_stack_00000014;
      }
      in_stack_00000000 = (undefined4 *)&stack0x0000000c;
      in_stack_00000004 = iVar5;
      uVar1 = (*unaff_r13)(in_stack_0000000c);
      *in_stack_00000000 = uVar1;
      in_stack_00000000 = (undefined4 *)&stack0x00000010;
      uVar1 = (*unaff_r13)(in_stack_00000010);
      *in_stack_00000000 = uVar1;
      in_stack_00000000 = (undefined4 *)&stack0x00000014;
      uVar1 = (*unaff_r13)(in_stack_00000014);
      *in_stack_00000000 = uVar1;
      **(int **)(unaff_r14 + 0x10) = **(int **)(unaff_r14 + 0x10) + in_stack_0000000c;
      *(uint *)(*(int *)(unaff_r14 + 0x10) + 4) =
           *(int *)(*(int *)(unaff_r14 + 0x10) + 4) + in_stack_00000010;
      *(uint *)(*(int *)(unaff_r14 + 0x10) + 8) =
           *(int *)(*(int *)(unaff_r14 + 0x10) + 8) + in_stack_00000014;
    }
    in_stack_00000004 = in_stack_00000004 * 0x24;
    in_stack_0000000c =
         *(int *)(*(int *)(unaff_r14 + 0x10) + in_stack_00000004 + 0x18) -
         *(int *)(*(int *)(unaff_r14 + 0x10) + unaff_r12 + 0x18);
    in_stack_00000010 =
         *(int *)(*(int *)(unaff_r14 + 0x10) + in_stack_00000004 + 0x1c) -
         *(int *)(*(int *)(unaff_r14 + 0x10) + unaff_r12 + 0x1c);
    in_stack_00000014 =
         *(int *)(in_stack_00000004 + *(int *)(unaff_r14 + 0x10) + 0x20) -
         *(int *)(*(int *)(unaff_r14 + 0x10) + unaff_r12 + 0x20);
    if ((unaff_r10 & in_stack_0000000c) == 0) {
      in_stack_0000000c = DAT_0003c544 & in_stack_0000000c;
    }
    else {
      in_stack_0000000c = DAT_0003c540 | in_stack_0000000c;
    }
    if ((unaff_r10 & in_stack_00000010) == 0) {
      in_stack_00000010 = DAT_0003c544 & in_stack_00000010;
    }
    else {
      in_stack_00000010 = DAT_0003c540 | in_stack_00000010;
    }
    if ((unaff_r10 & in_stack_00000014) == 0) {
      in_stack_00000014 = DAT_0003c544 & in_stack_00000014;
    }
    else {
      in_stack_00000014 = DAT_0003c540 | in_stack_00000014;
    }
    in_stack_00000000 = (undefined4 *)&stack0x0000000c;
    param_1 = (undefined *)register0x0000003c;
    in_stack_00000004 = iVar5;
  } while( true );
}



void FUN_0003c982(int *param_1)

{
  ushort extraout_var;
  ushort extraout_var_00;
  ushort extraout_var_01;
  ushort extraout_var_02;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int in_r2;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 unaff_r8;
  code *unaff_r9;
  uint unaff_r10;
  int unaff_r12;
  code *unaff_r13;
  int unaff_r14;
  int in_stack_00000000;
  undefined4 uVar11;
  
  while( true ) {
    param_1[3] = in_r2;
    iVar8 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
    iVar10 = (int)DAT_0003cad0;
    *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + *(int *)(iVar8 + 4);
    iVar8 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
    *(int *)(iVar8 + 0x14) = *(int *)(iVar8 + 0x14) + *(int *)(iVar8 + 8);
    iVar8 = (*unaff_r13)(*(undefined4 *)(*(int *)(unaff_r14 + 0x10) + unaff_r12 + 0xc),iVar10);
    iVar10 = (*unaff_r13)(*(undefined4 *)(*(int *)(unaff_r14 + 0x10) + unaff_r12 + 0x10),
                          (int)DAT_0003cad0);
    iVar4 = (*unaff_r13)(*(undefined4 *)(*(int *)(unaff_r14 + 0x10) + unaff_r12 + 0x14),
                         (int)DAT_0003cad0);
    iVar7 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
    *(int *)(iVar7 + 0xc) = *(int *)(iVar7 + 0xc) - iVar8;
    iVar8 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
    *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) - iVar10;
    iVar8 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
    *(int *)(iVar8 + 0x14) = *(int *)(iVar8 + 0x14) - iVar4;
    iVar8 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
    *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + *(int *)(iVar8 + 0xc);
    iVar8 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
    *(int *)(iVar8 + 0x1c) = *(int *)(iVar8 + 0x1c) + *(int *)(iVar8 + 0x10);
    iVar8 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
    *(int *)(iVar8 + 0x20) = *(int *)(iVar8 + 0x20) + *(int *)(iVar8 + 0x14);
    uVar1 = DAT_0003cad8;
    iVar8 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
    *(uint *)(iVar8 + 0x18) = *(uint *)(iVar8 + 0x18) & DAT_0003cad8;
    iVar8 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
    *(uint *)(iVar8 + 0x1c) = uVar1 & *(uint *)(iVar8 + 0x1c);
    iVar8 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
    *(uint *)(iVar8 + 0x20) = *(uint *)(iVar8 + 0x20) & DAT_0003cad8;
    puVar9 = (undefined4 *)(*(int *)(unaff_r14 + 0x10) + unaff_r12);
    puVar9[2] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
    iVar8 = in_stack_00000000 + 1;
    if (*(int *)(unaff_r14 + 0x20) <= iVar8) break;
    unaff_r12 = iVar8 * 0x24;
    if (iVar8 == 0) {
      uVar5 = *(int *)((*(int *)(unaff_r14 + 0x20) + -1) * 0x24 + *(int *)(unaff_r14 + 0x10) + 0x18)
              - *(int *)(*(int *)(unaff_r14 + 0x10) + 0x18);
      uVar1 = *(int *)((*(int *)(unaff_r14 + 0x20) + -1) * 0x24 + *(int *)(unaff_r14 + 0x10) + 0x1c)
              - *(int *)(*(int *)(unaff_r14 + 0x10) + 0x1c);
      uVar2 = *(int *)((*(int *)(unaff_r14 + 0x20) + -1) * 0x24 + *(int *)(unaff_r14 + 0x10) + 0x20)
              - *(int *)(*(int *)(unaff_r14 + 0x10) + 0x20);
      if ((unaff_r10 & uVar5) == 0) {
        uVar5 = DAT_0003c7d4 & uVar5;
      }
      else {
        uVar5 = DAT_0003c7d0 | uVar5;
      }
      if ((unaff_r10 & uVar1) == 0) {
        uVar1 = DAT_0003c7d4 & uVar1;
      }
      else {
        uVar1 = DAT_0003c7d0 | uVar1;
      }
      if ((unaff_r10 & uVar2) == 0) {
        uVar2 = DAT_0003c7d4 & uVar2;
      }
      else {
        uVar2 = DAT_0003c7d0 | uVar2;
      }
      iVar10 = (*unaff_r13)(uVar5);
      iVar4 = (*unaff_r13)(uVar1);
      iVar7 = (*unaff_r13)(uVar2);
      **(int **)(unaff_r14 + 0x10) = **(int **)(unaff_r14 + 0x10) + iVar10;
      *(int *)(*(int *)(unaff_r14 + 0x10) + 4) = *(int *)(*(int *)(unaff_r14 + 0x10) + 4) + iVar4;
      *(int *)(*(int *)(unaff_r14 + 0x10) + 8) = *(int *)(*(int *)(unaff_r14 + 0x10) + 8) + iVar7;
    }
    else {
      in_stack_00000000 = in_stack_00000000 * 0x24;
      uVar1 = *(int *)(*(int *)(unaff_r14 + 0x10) + in_stack_00000000 + 0x18) -
              *(int *)(*(int *)(unaff_r14 + 0x10) + unaff_r12 + 0x18);
      uVar5 = *(int *)(*(int *)(unaff_r14 + 0x10) + in_stack_00000000 + 0x1c) -
              *(int *)(*(int *)(unaff_r14 + 0x10) + unaff_r12 + 0x1c);
      uVar2 = *(int *)(in_stack_00000000 + *(int *)(unaff_r14 + 0x10) + 0x20) -
              *(int *)(*(int *)(unaff_r14 + 0x10) + unaff_r12 + 0x20);
      if ((unaff_r10 & uVar1) == 0) {
        uVar1 = DAT_0003c544 & uVar1;
      }
      else {
        uVar1 = DAT_0003c540 | uVar1;
      }
      if ((unaff_r10 & uVar5) == 0) {
        uVar5 = DAT_0003c544 & uVar5;
      }
      else {
        uVar5 = DAT_0003c540 | uVar5;
      }
      if ((unaff_r10 & uVar2) == 0) {
        uVar2 = DAT_0003c544 & uVar2;
      }
      else {
        uVar2 = DAT_0003c540 | uVar2;
      }
      iVar10 = (*unaff_r13)(uVar1);
      iVar4 = (*unaff_r13)(uVar5);
      iVar7 = (*unaff_r13)(uVar2);
      piVar6 = (int *)(*(int *)(unaff_r14 + 0x10) + unaff_r12);
      *piVar6 = *piVar6 + iVar10;
      iVar10 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
      *(int *)(iVar10 + 4) = *(int *)(iVar10 + 4) + iVar4;
      iVar10 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
      *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + iVar7;
    }
    if (iVar8 == *(int *)(unaff_r14 + 0x20) + -1) {
      uVar5 = *(int *)(*(int *)(unaff_r14 + 0x10) + 0x18) -
              *(int *)((*(int *)(unaff_r14 + 0x20) + -1) * 0x24 + *(int *)(unaff_r14 + 0x10) + 0x18)
      ;
      uVar1 = *(int *)(*(int *)(unaff_r14 + 0x10) + 0x1c) -
              *(int *)((*(int *)(unaff_r14 + 0x20) + -1) * 0x24 + *(int *)(unaff_r14 + 0x10) + 0x1c)
      ;
      uVar2 = *(int *)(*(int *)(unaff_r14 + 0x10) + 0x20) -
              *(int *)((*(int *)(unaff_r14 + 0x20) + -1) * 0x24 + *(int *)(unaff_r14 + 0x10) + 0x20)
      ;
      if ((unaff_r10 & uVar5) == 0) {
        uVar5 = DAT_0003c7d4 & uVar5;
      }
      else {
        uVar5 = DAT_0003c7d0 | uVar5;
      }
      if ((unaff_r10 & uVar1) == 0) {
        uVar1 = DAT_0003c7d4 & uVar1;
      }
      else {
        uVar1 = DAT_0003c7d0 | uVar1;
      }
      if ((unaff_r10 & uVar2) == 0) {
        uVar2 = DAT_0003c990 & uVar2;
      }
      else {
        uVar2 = DAT_0003c7d0 | uVar2;
      }
      iVar10 = (*unaff_r13)(uVar5);
      iVar4 = (*unaff_r13)(uVar1);
      iVar7 = (*unaff_r13)(uVar2);
      piVar6 = (int *)((*(int *)(unaff_r14 + 0x20) + -1) * 0x24 + *(int *)(unaff_r14 + 0x10));
      *piVar6 = *piVar6 + iVar10;
      iVar10 = (*(int *)(unaff_r14 + 0x20) + -1) * 0x24 + *(int *)(unaff_r14 + 0x10);
      *(int *)(iVar10 + 4) = *(int *)(iVar10 + 4) + iVar4;
      iVar10 = (*(int *)(unaff_r14 + 0x20) + -1) * 0x24 + *(int *)(unaff_r14 + 0x10);
      *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + iVar7;
    }
    else {
      iVar10 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
      uVar5 = *(int *)(iVar10 + 0x3c) - *(int *)(iVar10 + 0x18);
      iVar10 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
      uVar1 = *(int *)(iVar10 + 0x40) - *(int *)(iVar10 + 0x1c);
      iVar10 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
      uVar2 = *(int *)(iVar10 + 0x44) - *(int *)(iVar10 + 0x20);
      if ((unaff_r10 & uVar5) == 0) {
        uVar5 = DAT_0003c7d4 & uVar5;
      }
      else {
        uVar5 = DAT_0003c7d0 | uVar5;
      }
      if ((unaff_r10 & uVar1) == 0) {
        uVar1 = DAT_0003c7d4 & uVar1;
      }
      else {
        uVar1 = DAT_0003c7d0 | uVar1;
      }
      if ((unaff_r10 & uVar2) == 0) {
        uVar2 = DAT_0003c7d4 & uVar2;
      }
      else {
        uVar2 = DAT_0003c7d0 | uVar2;
      }
      iVar10 = (*unaff_r13)(uVar5);
      iVar4 = (*unaff_r13)(uVar1);
      iVar7 = (*unaff_r13)(uVar2);
      piVar6 = (int *)(*(int *)(unaff_r14 + 0x10) + unaff_r12);
      *piVar6 = *piVar6 + iVar10;
      iVar10 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
      *(int *)(iVar10 + 4) = *(int *)(iVar10 + 4) + iVar4;
      iVar10 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
      *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + iVar7;
    }
    uVar1 = (*unaff_r9)();
    if ((uVar1 & 0x1f) == 0) {
      uVar1 = (*unaff_r9)();
      uVar3 = (*unaff_r13)(uVar1 >> 0x10,DAT_0003c994);
      uVar11 = unaff_r8;
      uVar1 = (*unaff_r9)();
      (*unaff_r13)(uVar1 >> 0x10,uVar11);
      iVar10 = (*unaff_r13)(*(undefined4 *)(DAT_0003c998 + (short)(extraout_var & DAT_0003c98c) * 4)
                            ,uVar3);
      uVar1 = (*unaff_r9)();
      uVar3 = (*unaff_r13)(uVar1 >> 0x10,DAT_0003c994);
      uVar11 = unaff_r8;
      uVar1 = (*unaff_r9)();
      (*unaff_r13)(uVar1 >> 0x10,uVar11);
      uVar3 = (*unaff_r13)(*(undefined4 *)
                            (DAT_0003c99c + (short)(extraout_var_00 & DAT_0003c98c) * 4),uVar3);
      uVar11 = unaff_r8;
      uVar1 = (*unaff_r9)();
      (*unaff_r13)(uVar1 >> 0x10,uVar11);
      iVar4 = (*unaff_r13)(*(undefined4 *)
                            (DAT_0003c998 + (short)(extraout_var_01 & DAT_0003c98c) * 4),uVar3);
      uVar11 = unaff_r8;
      uVar1 = (*unaff_r9)();
      (*unaff_r13)(uVar1 >> 0x10,uVar11);
      iVar7 = (*unaff_r13)(*(undefined4 *)
                            (DAT_0003c99c + (short)(extraout_var_02 & DAT_0003c98c) * 4),uVar3);
      piVar6 = (int *)(*(int *)(unaff_r14 + 0x10) + unaff_r12);
      *piVar6 = *piVar6 + iVar7;
      iVar7 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
      *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + iVar10;
      iVar10 = *(int *)(unaff_r14 + 0x10) + unaff_r12;
      *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + iVar4;
    }
    param_1 = (int *)(*(int *)(unaff_r14 + 0x10) + unaff_r12);
    in_r2 = param_1[3] + *param_1;
    in_stack_00000000 = iVar8;
  }
  if ((*(int *)(unaff_r14 + 0x34) == 1) && (*(short *)(unaff_r14 + 0x2c) == 0x3c)) {
    (*DAT_0003cae4)();
    iVar8 = (*DAT_0003cae8)();
    iVar8 = *(int *)(*(int *)(iVar8 + 0x10) + 4);
    *(uint *)(iVar8 + DAT_0003cad2) = *(uint *)(iVar8 + DAT_0003cad2) | (int)DAT_0003cad4;
  }
  for (iVar8 = 0; iVar8 < *(int *)(unaff_r14 + 0x24); iVar8 = iVar8 + 1) {
    iVar10 = iVar8 * 0x38;
    if (*(ushort *)(*(int *)(unaff_r14 + 0xc) + iVar10 + 0x34) <= *(ushort *)(unaff_r14 + 0x2c)) {
      if (*(short *)(unaff_r14 + 0x2c) == 0x46) {
        *(undefined2 *)(*(int *)(unaff_r14 + 0xc) + iVar10 + 0x36) = 1;
      }
      FUN_0003cc78(*(int *)(unaff_r14 + 0xc) + iVar10);
    }
  }
  return;
}



void FUN_0003cc0c(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined2 uVar6;
  int iVar5;
  
  pcVar1 = DAT_0003cda8;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  pcVar2 = DAT_0003cdac;
  uVar3 = (*DAT_0003cdac)();
  uVar4 = (*pcVar1)(uVar3 >> 0x10,param_2 + -1);
  param_1[0xc] = uVar4;
  uVar3 = (*pcVar2)();
  uVar6 = (*pcVar1)(uVar3 >> 0x10,0x32);
  *(undefined2 *)(param_1 + 0xd) = uVar6;
  uVar3 = (*pcVar2)();
  iVar5 = (*pcVar1)(uVar3 >> 0x10,(int)DAT_0003cda2);
  param_1[0xb] = -0x28 - iVar5;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  return;
}



void FUN_0003cc78(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  pcVar1 = DAT_0003cda8;
  if ((*(short *)((int)param_1 + 0x36) != 0) && (*(short *)((int)param_1 + 0x36) == 1)) {
    iVar7 = (int)DAT_0003cda4;
    iVar2 = param_1[7];
    iVar6 = DAT_0003cdb0[1];
    iVar3 = param_1[8];
    iVar5 = DAT_0003cdb0[2];
    iVar4 = (*DAT_0003cda8)(*DAT_0003cdb0 - param_1[6],iVar7);
    iVar2 = (*pcVar1)(iVar6 - iVar2,iVar7);
    iVar3 = (*pcVar1)(iVar5 - iVar3,iVar7);
    iVar5 = (int)DAT_0003cda6;
    *param_1 = *param_1 + iVar4;
    param_1[1] = param_1[1] + iVar2;
    param_1[2] = param_1[2] + iVar3;
    param_1[3] = param_1[3] + *param_1;
    param_1[4] = param_1[4] + param_1[1];
    param_1[5] = param_1[5] + param_1[2];
    iVar2 = (*pcVar1)(param_1[3],iVar5);
    iVar3 = (*pcVar1)(param_1[4],iVar5);
    iVar4 = (*pcVar1)(param_1[5],iVar5);
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
  (*DAT_0003cdb4)(param_1 + 9);
  return;
}



int FUN_0003cdb8(short param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  
  pcVar1 = DAT_0003ce74;
  uVar3 = (*DAT_0003ce78)((int)*(short *)(DAT_0003ce70 + DAT_0003ce6a + -10));
  iVar4 = (*pcVar1)(PTR_LAB_00009998_1_0003ce7c,uVar3);
  puVar2 = PTR_LAB_0003ce84;
  iVar4 = (*pcVar1)((int)param_1 << 0x10,PTR_LAB_0000b332_1_0003ce80 + iVar4);
  iVar5 = (*DAT_0003ce78)(puVar2 + iVar4,DAT_0003ce88);
  (*DAT_0003ce8c)();
  iVar6 = (*DAT_0003ce90)();
  puVar7 = puVar2 + iVar4 + (int)(puVar2 + (iVar6 - iVar5));
  iVar4 = (*DAT_0003ce94)();
  if ((*(uint *)((int)DAT_0003ce6c + *(int *)(*(int *)(iVar4 + 0x10) + 0x18)) & 0x80) != 0) {
    puVar7 = (undefined *)(*pcVar1)(puVar7,DAT_0003ce98);
  }
  iVar4 = (*DAT_0003ce94)();
  if ((*(uint *)((int)DAT_0003ce6c + *(int *)(*(int *)(iVar4 + 0x10) + 0x18)) & 0x10) != 0) {
    puVar7 = (undefined *)(*pcVar1)(puVar7,puVar2);
  }
  return (int)(short)((uint)(puVar7 + (int)puVar2) >> 0x10);
}



undefined4 FUN_0003f262(int param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  sVar1 = 0;
  do {
    if (*(char *)((int)DAT_0003f2a8 + (int)sVar1 + param_1 + 0x60) != '\x03') {
      return 0;
    }
    iVar2 = iVar2 + 1;
    sVar1 = sVar1 + DAT_0003f294;
  } while (iVar2 < 7);
  return 1;
}



void FUN_0003f2c0(int param_1)

{
  char cVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  short sVar6;
  uint uVar5;
  undefined4 uVar7;
  int iVar8;
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 uStack72;
  undefined4 uStack68;
  undefined4 local_40;
  undefined4 uStack60;
  undefined4 uStack56;
  undefined4 local_34;
  undefined4 uStack48;
  undefined4 uStack44;
  undefined4 local_28;
  undefined4 uStack36;
  undefined4 uStack32;
  
  (*DAT_0003f47c)();
  pcVar2 = DAT_0003f480;
  iVar4 = (*DAT_0003f480)();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + 8);
  iVar4 = (*pcVar2)();
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + 0xc);
  iVar4 = (*pcVar2)();
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + 0x10);
  iVar4 = (*pcVar2)();
  local_58 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + 0xc);
  iVar4 = (*pcVar2)();
  local_54 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + 0x10);
  iVar4 = (*pcVar2)();
  local_50 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + 0x14);
  iVar4 = (*pcVar2)();
  iVar8 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0003f476);
  iVar4 = (*pcVar2)();
  if (*(int *)(iVar8 + *(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0003f478) * 0x20 +
              0x1c) != 0) {
    iVar4 = (*pcVar2)();
    iVar8 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0003f476);
    iVar4 = (*pcVar2)();
    cVar1 = *(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0003f478);
    iVar4 = (*pcVar2)();
    local_58 = local_58 +
               *(int *)(*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0003f478) * 0x60 +
                        *(int *)(iVar8 + cVar1 * 0x20 + 0x1c) + 0x30);
    iVar4 = (*pcVar2)();
    iVar8 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0003f476);
    iVar4 = (*pcVar2)();
    cVar1 = *(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0003f478);
    iVar4 = (*pcVar2)();
    local_54 = local_54 +
               *(int *)(*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0003f478) * 0x60 +
                        *(int *)(iVar8 + cVar1 * 0x20 + 0x1c) + 0x34);
    iVar4 = (*pcVar2)();
    iVar8 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0003f476);
    iVar4 = (*pcVar2)();
    cVar1 = *(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0003f478);
    iVar4 = (*pcVar2)();
    local_50 = local_50 +
               *(int *)(*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0003f478) * 0x60 +
                        *(int *)(iVar8 + cVar1 * 0x20 + 0x1c) + 0x38);
  }
  iVar4 = (*pcVar2)();
  *(int *)(param_1 + 0x24) = local_58 - *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + 8) >> 5;
  iVar4 = (*pcVar2)();
  *(int *)(param_1 + 0x28) = local_54 - *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + 0xc) >> 5
  ;
  iVar4 = (*pcVar2)();
  pcVar3 = DAT_0003f484;
  *(int *)(param_1 + 0x2c) =
       local_50 - *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + 0x10) >> 5;
  (*pcVar3)(param_1 + 0x18);
  sVar6 = (*DAT_0003f534)();
  if (((sVar6 == 0) || (sVar6 == 5)) || (uVar5 = (*DAT_0003f538)(), (uVar5 & 1) == 0)) {
    *(undefined4 *)(param_1 + DAT_0003f530) = 0;
  }
  else {
    *(undefined4 *)(param_1 + DAT_0003f530) = 1;
  }
  if (*(int *)(param_1 + DAT_0003f530) == 0) {
    uStack36 = 0;
    local_28 = 0;
    uStack48 = 0;
    local_34 = 0;
    uStack32 = DAT_0003f53c;
    uStack44 = DAT_0003f540;
    (*pcVar2)();
    (*pcVar2)();
    (*pcVar2)();
    (*pcVar2)();
    (*pcVar2)();
    (*pcVar2)();
    (*pcVar2)();
    (*pcVar2)();
    (*DAT_0003f6a4)(&local_40);
    (*DAT_0003f6a4)(&local_4c);
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x48) = local_40;
    *(undefined4 *)(param_1 + 0x4c) = uStack60;
    *(undefined4 *)(param_1 + 0x50) = uStack56;
    *(undefined4 *)(param_1 + 0x54) = local_4c;
    *(undefined4 *)(param_1 + 0x58) = uStack72;
    *(undefined4 *)(param_1 + 0x5c) = uStack68;
    *(undefined4 *)(param_1 + DAT_0003f6a2) = 1;
    iVar4 = param_1 + 0x48;
  }
  else {
    uVar5 = (*DAT_0003f6a8)();
    iVar4 = DAT_0003f6b4;
    uVar7 = DAT_0003f6b0;
    if ((uVar5 & 1) == 0) {
      uVar7 = DAT_0003f6ac;
    }
    *(undefined4 *)(param_1 + 0x30) = uVar7;
    uVar7 = DAT_0003f814;
    if (*(int *)(param_1 + 0x30) < iVar4) {
      uVar7 = DAT_0003f6b8;
    }
    *(undefined4 *)(param_1 + 0x34) = uVar7;
    (*DAT_0003f818)(param_1 + 0x44);
    (*DAT_0003f81c)(param_1 + 0x38,*(undefined4 *)(param_1 + 0x30),param_1 + 0x44);
    iVar4 = param_1 + 0x38;
  }
  (*DAT_0003f820)(iVar4);
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  return;
}



uint FUN_0003f6fa(int param_1)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pcVar2 = DAT_0003f824;
  iVar3 = (*DAT_0003f824)();
  *(int *)(param_1 + 0x18) =
       *(int *)(param_1 + 0x18) + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0003f80a)
  ;
  iVar3 = (*pcVar2)();
  *(int *)(param_1 + 0x1c) =
       *(int *)(param_1 + 0x1c) + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0003f80c)
  ;
  iVar3 = (*pcVar2)();
  *(int *)(param_1 + 0x20) =
       *(int *)(param_1 + 0x20) + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0003f80e)
  ;
  uVar4 = DAT_0003f828;
  if (*(int *)(param_1 + DAT_0003f810) == 0) {
    iVar3 = (*pcVar2)();
    *(int *)(param_1 + 0x48) =
         *(int *)(param_1 + 0x48) +
         *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0003f80a);
    iVar3 = (*pcVar2)();
    *(int *)(param_1 + 0x4c) =
         *(int *)(param_1 + 0x4c) +
         *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0003f80c);
    iVar3 = (*pcVar2)();
    *(int *)(param_1 + 0x50) =
         *(int *)(param_1 + 0x50) +
         *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0003f80e);
    iVar3 = (*pcVar2)();
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0003f80a);
    iVar3 = (*pcVar2)();
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0003f80c);
    iVar3 = (*pcVar2)();
    *(int *)(param_1 + 0x5c) =
         *(int *)(param_1 + 0x5c) +
         *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0003f80e);
  }
  else {
    if ((int)(*(uint *)(param_1 + 0x30) & DAT_0003f828) < DAT_0003f82c) {
      *(undefined4 *)(param_1 + 0x34) = DAT_0003f830;
    }
    if (DAT_0003f834 < (int)(uVar4 & *(uint *)(param_1 + 0x30))) {
      *(undefined4 *)(param_1 + 0x34) = DAT_0003f838;
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34);
    (*DAT_0003f81c)(param_1 + 0x38,*(undefined4 *)(param_1 + 0x30),param_1 + 0x44);
    (*DAT_0003f83c)();
  }
  uVar4 = (int)*(char *)(param_1 + 0xd) & 0xff;
  if (uVar4 == 1) {
    uVar4 = (int)*(char *)(param_1 + DAT_0003f9b6) & 0xff;
    if ((uVar4 != 4) && (uVar4 != 5)) {
      return uVar4;
    }
    *(undefined *)(param_1 + 0xd) = 2;
  }
  else if (uVar4 != 2) {
    return uVar4;
  }
  pcVar2 = DAT_0003f9c0;
  if (*(int *)(param_1 + DAT_0003f9b8) == 0) {
    iVar9 = (int)DAT_0003f9ba;
    iVar7 = *(int *)(param_1 + 0x4c);
    iVar5 = *(int *)(param_1 + 0x58);
    iVar8 = *(int *)(param_1 + 0x50);
    iVar6 = *(int *)(param_1 + 0x5c);
    iVar3 = (*DAT_0003f9c0)(*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x48),iVar9);
    iVar5 = (*pcVar2)(iVar5 - iVar7,iVar9);
    iVar6 = (*pcVar2)(iVar6 - iVar8,iVar9);
    iVar7 = (int)DAT_0003f9bc;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar3;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar5;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar6;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x34);
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x38);
    iVar3 = (*pcVar2)(*(undefined4 *)(param_1 + 0x3c),iVar7);
    iVar5 = (*pcVar2)(*(undefined4 *)(param_1 + 0x40),iVar7);
    iVar6 = (*pcVar2)(*(undefined4 *)(param_1 + 0x44),iVar7);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - iVar3;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) - iVar5;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) - iVar6;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x3c);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  *(byte *)(param_1 + 0xe) = bVar1 + 1;
  uVar4 = (uint)bVar1;
  if (uVar4 < 0x20) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x24);
    uVar4 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x1c) = uVar4;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x2c);
  }
  return uVar4;
}



void FUN_0003f9c4(int param_1)

{
  ushort uVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  ushort extraout_var;
  ushort extraout_var_00;
  ushort extraout_var_01;
  ushort extraout_var_02;
  ushort extraout_var_03;
  ushort extraout_var_04;
  ushort extraout_var_05;
  ushort extraout_var_06;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined2 uVar10;
  int iVar11;
  
  pcVar3 = DAT_0003fb8c;
  uVar9 = DAT_0003fb88;
  pcVar2 = DAT_0003fb84;
  iVar11 = DAT_0003fb80;
  uVar1 = DAT_0003fb76;
  uVar5 = (*DAT_0003fb84)();
  (*pcVar3)(uVar5 >> 0x10,uVar9);
  uVar6 = (*pcVar3)(*(undefined4 *)(iVar11 + (short)(extraout_var & uVar1) * 4),uVar9);
  iVar4 = DAT_0003fb90;
  *(undefined4 *)(DAT_0003fb78 + param_1) = uVar6;
  uVar5 = (*pcVar2)();
  (*pcVar3)(uVar5 >> 0x10,uVar9);
  uVar6 = (*pcVar3)(*(undefined4 *)(iVar4 + (short)(extraout_var_00 & uVar1) * 4),uVar9);
  uVar5 = (*pcVar2)();
  (*pcVar3)(uVar5 >> 0x10,uVar9);
  uVar7 = (*pcVar3)(*(undefined4 *)(iVar11 + (short)(extraout_var_01 & uVar1) * 4),uVar6);
  *(undefined4 *)(DAT_0003fb7a + param_1) = uVar7;
  uVar5 = (*pcVar2)();
  (*pcVar3)(uVar5 >> 0x10,uVar9);
  uVar6 = (*pcVar3)(*(undefined4 *)(iVar4 + (short)(extraout_var_02 & uVar1) * 4),uVar6);
  *(undefined4 *)(DAT_0003fb7c + param_1) = uVar6;
  uVar5 = (*pcVar2)();
  (*pcVar3)(uVar5 >> 0x10,uVar9);
  uVar6 = (*pcVar3)(*(undefined4 *)(iVar11 + (short)(extraout_var_03 & uVar1) * 4),uVar9);
  uVar5 = (*pcVar2)();
  (*pcVar3)(uVar5 >> 0x10,uVar9);
  uVar7 = (*pcVar3)(*(undefined4 *)(iVar4 + (short)(extraout_var_04 & uVar1) * 4),uVar9);
  uVar5 = (*pcVar2)();
  (*pcVar3)(uVar5 >> 0x10,uVar9);
  uVar8 = (*pcVar3)(*(undefined4 *)(iVar11 + (short)(extraout_var_05 & uVar1) * 4),uVar7);
  uVar5 = (*pcVar2)();
  (*pcVar3)(uVar5 >> 0x10,uVar9);
  uVar9 = (*pcVar3)(*(undefined4 *)(iVar4 + (short)(extraout_var_06 & uVar1) * 4),uVar7);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x6c) = uVar9;
  *(undefined4 *)(param_1 + 0x70) = uVar6;
  *(undefined4 *)(param_1 + 0x74) = uVar8;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  iVar11 = (int)DAT_0003fb7e;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(int *)(param_1 + 0x80) = iVar11;
  *(undefined *)(param_1 + 0xb9) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  uVar5 = (*pcVar2)();
  uVar10 = (*pcVar3)(uVar5 >> 0x10,0x14);
  *(undefined2 *)(DAT_0003fc12 + param_1) = uVar10;
  *(undefined *)(param_1 + DAT_0003fc14) = 0;
  return;
}



undefined4 FUN_0003fbb2(int param_1,undefined4 param_2)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  ushort extraout_var;
  ushort extraout_var_00;
  ushort extraout_var_01;
  ushort extraout_var_02;
  ushort extraout_var_03;
  ushort extraout_var_04;
  ushort extraout_var_05;
  ushort extraout_var_06;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined2 uVar13;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar14;
  int iVar15;
  uint *puVar16;
  int *piVar17;
  undefined4 uStack72;
  uint local_44;
  uint uStack64;
  uint auStack60 [4];
  int local_2c;
  int iStack40;
  int aiStack36 [2];
  
  pcVar7 = DAT_0003fc28;
  pcVar6 = DAT_0003fc24;
  pcVar5 = DAT_0003fc20;
  uVar12 = DAT_0003fc1c;
  uVar3 = DAT_0003fc16;
  uStack72 = 0;
  cVar1 = *(char *)(param_1 + DAT_0003fc18);
  if (cVar1 == '\0') {
    (*DAT_0003fd68)(param_1,(int)*(short *)(*(int *)(*(int *)(*DAT_0003fd64 + 0xc) + 4) + 4),
                    *DAT_0003fd60);
    *(undefined *)(param_1 + DAT_0003fd54) = 1;
  }
  else if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      iVar14 = (int)DAT_00040090;
      *(undefined2 *)(param_1 + DAT_0004008e) = 0;
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + iVar14;
      *(undefined *)(param_1 + 0xb9) = 3;
    }
    else if (cVar1 != '\x03') {
      if (cVar1 == '\x04') {
        bVar4 = false;
        iVar14 = (*DAT_0003fc24)();
        *(int *)(param_1 + 0xc) =
             *(int *)(param_1 + 0xc) +
             *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_00040390);
        iVar14 = (*pcVar6)();
        *(int *)(param_1 + 0x10) =
             *(int *)(param_1 + 0x10) +
             *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_00040392);
        iVar14 = (*pcVar6)();
        *(int *)(param_1 + 0x14) =
             *(int *)(param_1 + 0x14) +
             *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_00040394);
        iVar14 = (*pcVar6)();
        *(int *)(param_1 + 0x24) =
             *(int *)(param_1 + 0x24) +
             *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_00040390);
        iVar14 = (*pcVar6)();
        *(int *)(param_1 + 0x28) =
             *(int *)(param_1 + 0x28) +
             *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_00040392);
        iVar14 = (*pcVar6)();
        iVar15 = (int)DAT_00040396;
        *(int *)(param_1 + 0x2c) =
             *(int *)(param_1 + 0x2c) +
             *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_00040394);
        local_44 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x48);
        uStack64 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x4c);
        auStack60[0] = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x50);
        puVar16 = &local_44;
        uVar9 = (*pcVar7)(local_44,iVar15);
        *puVar16 = uVar9;
        puVar16 = &uStack64;
        uVar9 = (*pcVar7)(uStack64,(int)DAT_00040396);
        iVar14 = (int)DAT_00040396;
        *puVar16 = uVar9;
        puVar16 = auStack60;
        uVar9 = (*pcVar7)(auStack60[0],iVar14);
        *puVar16 = uVar9;
        *(uint *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + local_44;
        *(uint *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + uStack64;
        *(uint *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + auStack60[0];
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x30);
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x34);
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x38);
        puVar16 = &local_44;
        uVar9 = (*pcVar7)(*(undefined4 *)(param_1 + 0x3c),0);
        *puVar16 = uVar9;
        puVar16 = &uStack64;
        uVar9 = (*pcVar7)(*(undefined4 *)(param_1 + 0x40),0);
        *puVar16 = uVar9;
        puVar16 = auStack60;
        uVar9 = (*pcVar7)(*(undefined4 *)(param_1 + 0x44),0);
        *puVar16 = uVar9;
        *(uint *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - local_44;
        *(uint *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) - uStack64;
        *(uint *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) - auStack60[0];
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x3c);
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x40);
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x44);
        *(undefined4 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
        iVar14 = (*pcVar6)();
        if (((*(int *)(*(int *)(((int)*(short *)(DAT_00040398 + param_1) & 0xffffU) * 4 +
                               *(int *)(*(int *)(iVar14 + 0x10) + 0xc)) + 4) == 0) ||
            (iVar14 = (*pcVar6)(),
            (DAT_000403dc &
            *(uint *)(*(int *)(*(int *)(((int)*(short *)(DAT_000403d8 + param_1) & 0xffffU) * 4 +
                                       *(int *)(*(int *)(iVar14 + 0x10) + 0xc)) + 4) + 0x50)) != 0))
           || (iVar14 = (*pcVar6)(),
              **(char **)(((int)*(short *)(DAT_000403d8 + param_1) & 0xffffU) * 4 +
                         *(int *)(*(int *)(iVar14 + 0x10) + 0xc)) < '\x01')) {
          bVar4 = true;
        }
        else {
          iVar14 = (*pcVar6)();
          puVar11 = (undefined4 *)
                    (*DAT_00040530)(*(undefined4 *)
                                     (*(int *)(((int)*(short *)(DAT_00040522 + param_1) & 0xffffU) *
                                               4 + *(int *)(*(int *)(iVar14 + 0x10) + 0xc)) + 4));
          pcVar5 = DAT_00040534;
          *(undefined4 *)(param_1 + 0x18) = *puVar11;
          *(undefined4 *)(param_1 + 0x1c) = puVar11[1];
          *(undefined4 *)(param_1 + 0x20) = puVar11[2];
          (*pcVar5)(param_1 + 0x18,&local_2c);
          (*DAT_0004053c)(&local_2c,param_1 + 0x18,DAT_00040538 + 0x58);
        }
        *(int *)(param_1 + DAT_00040524) = *(int *)(param_1 + DAT_00040524) + (int)DAT_00040526;
        local_44 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x48);
        uStack64 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x4c);
        auStack60[0] = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x50);
        puVar16 = &local_44;
        uVar9 = (*pcVar7)(local_44,*(undefined4 *)(param_1 + DAT_00040524));
        *puVar16 = uVar9;
        puVar16 = &uStack64;
        uVar9 = (*pcVar7)(uStack64,*(undefined4 *)(param_1 + DAT_00040524));
        *puVar16 = uVar9;
        puVar16 = auStack60;
        uVar9 = (*pcVar7)(auStack60[0],*(undefined4 *)(param_1 + DAT_00040524));
        *puVar16 = uVar9;
        *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x48) + local_44;
        *(uint *)(param_1 + 0x28) = *(int *)(param_1 + 0x4c) + uStack64;
        *(uint *)(param_1 + 0x2c) = *(int *)(param_1 + 0x50) + auStack60[0];
        iVar14 = (*pcVar6)();
        (*DAT_00040540)(DAT_0004052a + param_1,param_1 + 0x24,
                        (int)DAT_00040528 + *(int *)(*(int *)(iVar14 + 0x10) + 4));
        uVar3 = *(ushort *)(param_1 + DAT_0004052c);
        *(ushort *)(param_1 + DAT_0004052c) = uVar3 + 1;
        if (0x5a < uVar3) {
          bVar4 = true;
        }
        if ((DAT_00040544 <= *(int *)(param_1 + DAT_00040524)) && (!bVar4)) {
          uVar12 = (*DAT_00040548)();
          FUN_00040bb0(param_1,uVar12);
          bVar4 = true;
        }
        if (!bVar4) {
          return uStack72;
        }
        *(undefined *)(param_1 + DAT_0004052e) = 5;
      }
      else if (cVar1 != '\x05') {
        if (cVar1 != '\x06') {
          return 0;
        }
        uVar3 = *(ushort *)(param_1 + DAT_00040856);
        *(ushort *)(param_1 + DAT_00040856) = uVar3 + 1;
        if (uVar3 < 0x1f) {
          return 0;
        }
        return 1;
      }
      iVar14 = (*pcVar6)();
      *(int *)(param_1 + 0xc) =
           *(int *)(param_1 + 0xc) +
           *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_00040716);
      iVar14 = (*pcVar6)();
      *(int *)(param_1 + 0x10) =
           *(int *)(param_1 + 0x10) +
           *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_00040718);
      iVar14 = (*pcVar6)();
      *(int *)(param_1 + 0x14) =
           *(int *)(param_1 + 0x14) +
           *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_0004071a);
      iVar14 = (*pcVar6)();
      *(int *)(param_1 + 0x24) =
           *(int *)(param_1 + 0x24) +
           *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_00040716);
      iVar14 = (*pcVar6)();
      *(int *)(param_1 + 0x28) =
           *(int *)(param_1 + 0x28) +
           *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_00040718);
      iVar14 = (*pcVar6)();
      *(int *)(param_1 + 0x2c) =
           *(int *)(param_1 + 0x2c) +
           *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_0004071a);
      iVar14 = (*pcVar6)();
      *(int *)(param_1 + 0x18) =
           *(int *)(param_1 + 0x18) +
           *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_00040716);
      iVar14 = (*pcVar6)();
      *(int *)(param_1 + 0x1c) =
           *(int *)(param_1 + 0x1c) +
           *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_00040718);
      iVar14 = (*pcVar6)();
      iVar15 = (int)DAT_0004071c;
      *(int *)(param_1 + 0x20) =
           *(int *)(param_1 + 0x20) +
           *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_0004071a);
      local_44 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x48);
      uStack64 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x4c);
      auStack60[0] = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x50);
      puVar16 = &local_44;
      uVar9 = (*pcVar7)(local_44,iVar15);
      *puVar16 = uVar9;
      puVar16 = &uStack64;
      uVar9 = (*pcVar7)(uStack64,(int)DAT_0004071c);
      iVar14 = (int)DAT_0004071c;
      *puVar16 = uVar9;
      puVar16 = auStack60;
      uVar9 = (*pcVar7)(auStack60[0],iVar14);
      *puVar16 = uVar9;
      *(uint *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + local_44;
      *(uint *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + uStack64;
      *(uint *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + auStack60[0];
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x30);
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x34);
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x38);
      puVar16 = &local_44;
      uVar9 = (*pcVar7)(*(undefined4 *)(param_1 + 0x3c),0);
      *puVar16 = uVar9;
      puVar16 = &uStack64;
      uVar9 = (*pcVar7)(*(undefined4 *)(param_1 + 0x40),0);
      *puVar16 = uVar9;
      puVar16 = auStack60;
      uVar9 = (*pcVar7)(*(undefined4 *)(param_1 + 0x44),0);
      *puVar16 = uVar9;
      *(uint *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - local_44;
      *(uint *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) - uStack64;
      *(uint *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) - auStack60[0];
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x3c);
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x40);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x44);
      iVar14 = (int)DAT_0004084e;
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + iVar14;
      local_44 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x48);
      uStack64 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x4c);
      auStack60[0] = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x50);
      puVar16 = &local_44;
      uVar9 = (*pcVar7)(local_44,*(undefined4 *)(param_1 + DAT_00040850));
      *puVar16 = uVar9;
      puVar16 = &uStack64;
      uVar9 = (*pcVar7)(uStack64,*(undefined4 *)(param_1 + DAT_00040850));
      *puVar16 = uVar9;
      puVar16 = auStack60;
      uVar9 = (*pcVar7)(auStack60[0],*(undefined4 *)(param_1 + DAT_00040850));
      *puVar16 = uVar9;
      *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x48) + local_44;
      *(uint *)(param_1 + 0x28) = *(int *)(param_1 + 0x4c) + uStack64;
      *(uint *)(param_1 + 0x2c) = *(int *)(param_1 + 0x50) + auStack60[0];
      iVar14 = (*pcVar6)();
      (*DAT_0004085c)(DAT_00040854 + param_1,param_1 + 0x24,
                      (int)DAT_00040852 + *(int *)(*(int *)(iVar14 + 0x10) + 4));
      uVar3 = *(ushort *)(param_1 + DAT_00040856);
      *(ushort *)(param_1 + DAT_00040856) = uVar3 + 1;
      if (0x28 < uVar3) {
        iVar14 = (int)DAT_00040858;
        *(undefined *)(param_1 + iVar14) = 6;
        *(undefined2 *)(param_1 + iVar14 + -5) = 0;
      }
      iVar14 = (*pcVar6)();
      if (*(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 0xc) + (int)DAT_0004085a) <=
          *(int *)(param_1 + 0x28)) {
        return uStack72;
      }
      iVar14 = (int)DAT_00040858;
      *(undefined *)(param_1 + iVar14) = 6;
      *(undefined2 *)(param_1 + iVar14 + -5) = 0;
      return uStack72;
    }
    iVar14 = (*pcVar6)();
    *(int *)(param_1 + 0x24) =
         *(int *)(param_1 + 0x24) +
         *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_00040092);
    iVar14 = (*pcVar6)();
    *(int *)(param_1 + 0x28) =
         *(int *)(param_1 + 0x28) +
         *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_00040094);
    iVar14 = (*pcVar6)();
    iVar15 = (int)DAT_00040098;
    *(int *)(param_1 + 0x2c) =
         *(int *)(param_1 + 0x2c) +
         *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_00040096);
    iVar14 = *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x78);
    *(int *)(param_1 + 0x7c) = iVar14;
    iVar14 = (*pcVar7)(iVar14,iVar15);
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) - iVar14;
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + *(int *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_000408dc(param_1);
    (*DAT_000400a0)(param_1);
    iVar14 = (int)DAT_0004008e;
    uVar2 = *(ushort *)(param_1 + iVar14);
    *(ushort *)(param_1 + iVar14) = uVar2 + 1;
    if (uVar2 <= *(ushort *)(param_1 + iVar14 + -2)) {
      return 0;
    }
    iVar14 = (int)DAT_0004009a;
    iVar15 = (int)DAT_0004009c;
    *(undefined4 *)(param_1 + iVar14 + 4) =
         *(undefined4 *)(*(int *)(**(int **)(param_1 + iVar14) * 0x10 + *DAT_000400a4 + 0xc) + 4);
    (*DAT_000400a8)(iVar15 + param_1,param_2,param_1 + 0x24,
                    (int)*(short *)(*(int *)(param_1 + iVar14 + 4) + 4),
                    *(undefined4 *)(param_1 + iVar14));
    (*DAT_000400ac)(9);
    iVar14 = (int)DAT_0004008e;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined2 *)(param_1 + iVar14) = 0;
    *(undefined *)(param_1 + iVar14 + 5) = 4;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x2c);
    piVar17 = &iStack40;
    uVar9 = (*pcVar5)();
    uVar10 = (*pcVar7)(uVar9 >> 0x10,(int)DAT_0004009e);
    uVar9 = (*pcVar5)();
    (*pcVar7)(uVar9 >> 0x10,uVar12);
    iVar14 = (*pcVar7)(*(undefined4 *)(DAT_000400b0 + (short)(extraout_var_03 & uVar3) * 4),uVar10);
    *piVar17 = iVar14;
    uVar9 = (*pcVar5)();
    uVar10 = (*pcVar7)(uVar9 >> 0x10,(int)DAT_0004009e);
    uVar9 = (*pcVar5)();
    (*pcVar7)(uVar9 >> 0x10,uVar12);
    uVar10 = (*pcVar7)(*(undefined4 *)(DAT_000400b4 + (short)(extraout_var_04 & uVar3) * 4),uVar10);
    piVar17 = aiStack36;
    uVar9 = (*pcVar5)();
    (*pcVar7)(uVar9 >> 0x10,uVar12);
    iVar14 = (*pcVar7)(*(undefined4 *)(DAT_000400b0 + (short)(extraout_var_05 & uVar3) * 4),uVar10);
    *piVar17 = iVar14;
    piVar17 = &local_2c;
    uVar9 = (*pcVar5)();
    (*pcVar7)(uVar9 >> 0x10,uVar12);
    iVar14 = (*pcVar7)(*(undefined4 *)(DAT_000401cc + (short)(extraout_var_06 & uVar3) * 4),uVar10);
    *piVar17 = iVar14;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + local_2c;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iStack40;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + aiStack36[0];
    iVar14 = (*pcVar6)();
    if (*(short *)(*(int *)(*(int *)(iVar14 + 0x10) + 0xc) + (int)DAT_000401c6) == 0) {
      iVar14 = (*pcVar6)();
      iVar15 = (int)DAT_000401c8;
      iVar14 = *(int *)(*(int *)(iVar14 + 0x10) + 4);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar14 + 0xc);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar14 + 0x10);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar14 + 0x14);
      *(undefined *)(param_1 + iVar15) = 5;
      return uStack72;
    }
    iVar14 = (*pcVar6)();
    iVar14 = (int)*(short *)(*(int *)(*(int *)(iVar14 + 0x10) + 0xc) + (int)DAT_000401c6);
    uVar9 = (*pcVar5)();
    uVar13 = (*pcVar7)(uVar9 >> 0x10,iVar14);
    *(undefined2 *)(DAT_000401ca + param_1) = uVar13;
    iVar14 = (*pcVar6)();
    if (((*(int *)(*(int *)(((int)*(short *)(DAT_000401ca + param_1) & 0xffffU) * 4 +
                           *(int *)(*(int *)(iVar14 + 0x10) + 0xc)) + 4) != 0) &&
        (iVar14 = (*pcVar6)(),
        (DAT_000401d0 &
        *(uint *)(*(int *)(*(int *)(((int)*(short *)(DAT_000401ca + param_1) & 0xffffU) * 4 +
                                   *(int *)(*(int *)(iVar14 + 0x10) + 0xc)) + 4) + 0x50)) == 0)) &&
       (iVar14 = (*pcVar6)(),
       '\0' < **(char **)(((int)*(short *)(DAT_000401ca + param_1) & 0xffffU) * 4 +
                         *(int *)(*(int *)(iVar14 + 0x10) + 0xc)))) {
      return uStack72;
    }
    iVar14 = (*pcVar6)();
    iVar15 = (int)DAT_000401c8;
    iVar14 = *(int *)(*(int *)(iVar14 + 0x10) + 4);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar14 + 0xc);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar14 + 0x10);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar14 + 0x14);
    *(undefined *)(param_1 + iVar15) = 5;
    return uStack72;
  }
  *(short *)(param_1 + DAT_0003fd56) = *(short *)(param_1 + DAT_0003fd56) + 1;
  FUN_00040968(param_1);
  if ((*(ushort *)(param_1 + DAT_0003fd56) & 0xf) == 0) {
    uVar10 = uVar12;
    uVar9 = (*pcVar5)();
    (*pcVar7)(uVar9 >> 0x10,uVar12);
    uVar10 = (*pcVar7)(*(undefined4 *)(DAT_0003fd6c + (short)(extraout_var & uVar3) * 4),uVar10);
    *(undefined4 *)(DAT_0003fd58 + param_1) = uVar10;
    uVar10 = uVar12;
    uVar9 = (*pcVar5)();
    (*pcVar7)(uVar9 >> 0x10,uVar12);
    uVar8 = (*pcVar7)(*(undefined4 *)(DAT_0003fd70 + (short)(extraout_var_00 & uVar3) * 4),uVar10);
    uVar10 = uVar12;
    uVar9 = (*pcVar5)();
    (*pcVar7)(uVar9 >> 0x10,uVar10);
    uVar10 = (*pcVar7)(*(undefined4 *)(DAT_0003fd6c + (short)(extraout_var_01 & uVar3) * 4),uVar8);
    *(undefined4 *)(DAT_0003fd5a + param_1) = uVar10;
    uVar9 = (*pcVar5)();
    (*pcVar7)(uVar9 >> 0x10,uVar12);
    uVar12 = (*pcVar7)(*(undefined4 *)(DAT_0003fd70 + (short)(extraout_var_02 & uVar3) * 4),uVar8);
    *(undefined4 *)(DAT_0003fd5c + param_1) = uVar12;
  }
  local_44 = *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0x6c);
  uStack64 = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0x70);
  auStack60[0] = *(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0x74);
  if ((DAT_0003fd74 & local_44) == 0) {
    local_44 = DAT_0003fd7c & local_44;
  }
  else {
    local_44 = DAT_0003fd78 | local_44;
  }
  if ((DAT_0003fd74 & uStack64) == 0) {
    uStack64 = DAT_0003fd7c & uStack64;
  }
  else {
    uStack64 = DAT_0003fd78 | uStack64;
  }
  if ((auStack60[0] & DAT_0003fd74) == 0) {
    auStack60[0] = DAT_0003feec & auStack60[0];
  }
  else {
    auStack60[0] = DAT_0003fd78 | auStack60[0];
  }
  iVar14 = (int)DAT_0003fee8;
  puVar16 = &local_44;
  uVar9 = (*pcVar7)(local_44,iVar14);
  *puVar16 = uVar9;
  puVar16 = &uStack64;
  uVar9 = (*pcVar7)(uStack64,iVar14);
  *puVar16 = uVar9;
  puVar16 = auStack60;
  uVar9 = (*pcVar7)(auStack60[0],iVar14);
  *puVar16 = uVar9;
  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + local_44;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uStack64;
  *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + auStack60[0];
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x54);
  iVar14 = (int)DAT_0003feea;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x5c);
  puVar16 = &local_44;
  uVar9 = (*pcVar7)(*(undefined4 *)(param_1 + 0x60),iVar14);
  *puVar16 = uVar9;
  puVar16 = &uStack64;
  uVar9 = (*pcVar7)(*(undefined4 *)(param_1 + 100),iVar14);
  *puVar16 = uVar9;
  puVar16 = auStack60;
  uVar9 = (*pcVar7)(*(undefined4 *)(param_1 + 0x68),iVar14);
  *puVar16 = uVar9;
  *(uint *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) - local_44;
  *(uint *)(param_1 + 100) = *(int *)(param_1 + 100) - uStack64;
  *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) - auStack60[0];
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x60);
  uVar9 = DAT_0003feec;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x68);
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & uVar9;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & uVar9;
  *(uint *)(param_1 + 0x74) = uVar9 & *(uint *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  FUN_000408dc(param_1);
  (*DAT_0003fef0)(param_1);
  return uStack72;
}



void FUN_000408dc(int param_1)

{
  int iVar1;
  undefined auStack32 [12];
  undefined4 uStack20;
  undefined4 uStack16;
  undefined4 uStack12;
  
  uStack20 = 0;
  uStack16 = 0;
  uStack12 = *(undefined4 *)(param_1 + DAT_0004093e);
  (*DAT_00040948)();
  iVar1 = (*DAT_0004094c)();
  (*DAT_00040950)(*(int *)(*(int *)(iVar1 + 0x10) + 0x18) + 8);
  (*DAT_00040954)(param_1 + 0x6c);
  (*DAT_00040958)(&uStack20,auStack32);
  (*DAT_00040960)(auStack32,param_1 + 0x24,DAT_0004095c + 0x28);
  (*DAT_00040964)();
  return;
}



uint FUN_00040968(int param_1)

{
  ushort uVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *pcVar4;
  code *pcVar5;
  ushort extraout_var;
  ushort extraout_var_00;
  ushort extraout_var_01;
  ushort extraout_var_02;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int local_38;
  undefined4 uStack52;
  undefined4 *puStack48;
  int iStack44;
  int iStack40;
  int aiStack36 [2];
  
  uVar6 = (int)*(char *)(param_1 + DAT_00040a08) & 0xff;
  if (uVar6 == 0) {
    uVar6 = (uint)DAT_00040a0a;
    iVar7 = (int)DAT_00040a0e;
    *(int *)(param_1 + uVar6) = *(int *)(param_1 + uVar6) + (int)DAT_00040a0c;
    if (iVar7 <= *(int *)(param_1 + uVar6)) {
      uVar6 = (uint)DAT_00040a0a;
      *(int *)(param_1 + uVar6) = iVar7;
    }
  }
  else {
    if (uVar6 == 1) {
      iVar7 = (int)DAT_00040a10;
      *(short *)(param_1 + iVar7) = *(short *)(param_1 + iVar7) + *(short *)(iVar7 + 2 + param_1);
      *(undefined *)(param_1 + iVar7 + 8) = 2;
    }
    else if (uVar6 != 2) {
      return uVar6;
    }
    uVar6 = (int)DAT_00040a10 + 2;
    if (*(ushort *)(param_1 + DAT_00040a10) < *(ushort *)(param_1 + uVar6)) {
      iVar7 = (int)DAT_00040a0a;
      *(int *)(param_1 + iVar7) = *(int *)(param_1 + iVar7) - (int)DAT_00040a12;
      uVar6 = *(uint *)(param_1 + iVar7);
      if ((int)uVar6 < (int)DAT_00040a14) {
        *(undefined4 *)(param_1 + DAT_00040a0a) = 0;
        pcVar5 = DAT_00040a2c;
        pcVar4 = DAT_00040a28;
        uVar3 = DAT_00040a24;
        pcVar2 = DAT_00040a20;
        uVar1 = DAT_00040a18;
        iVar7 = (int)DAT_00040a16;
        puStack48 = DAT_00040a1c;
        for (local_38 = 5; local_38 != 0; local_38 = local_38 + -1) {
          piVar12 = &iStack40;
          iVar9 = iVar7;
          uVar6 = (*pcVar4)();
          uVar8 = (*pcVar5)(uVar6 >> 0x10,iVar9);
          uVar11 = uVar3;
          uVar6 = (*pcVar4)();
          (*pcVar5)(uVar6 >> 0x10,uVar11);
          iVar9 = (*pcVar5)(*(undefined4 *)(DAT_00040ba0 + (short)(extraout_var & uVar1) * 4),uVar8)
          ;
          *piVar12 = iVar9;
          iVar9 = iVar7;
          uVar6 = (*pcVar4)();
          uVar8 = (*pcVar5)(uVar6 >> 0x10,iVar9);
          uVar11 = uVar3;
          uVar6 = (*pcVar4)();
          (*pcVar5)(uVar6 >> 0x10,uVar11);
          uStack52 = (*pcVar5)(*(undefined4 *)(DAT_00040ba4 + (short)(extraout_var_00 & uVar1) * 4),
                               uVar8);
          piVar12 = aiStack36;
          uVar11 = uVar3;
          uVar6 = (*pcVar4)();
          (*pcVar5)(uVar6 >> 0x10,uVar11);
          iVar9 = (*pcVar5)(*(undefined4 *)(DAT_00040ba0 + (short)(extraout_var_01 & uVar1) * 4),
                            uStack52);
          *piVar12 = iVar9;
          piVar12 = &iStack44;
          uVar11 = uVar3;
          uVar6 = (*pcVar4)();
          (*pcVar5)(uVar6 >> 0x10,uVar11);
          iVar9 = (*pcVar5)(*(undefined4 *)(DAT_00040ba4 + (short)(extraout_var_02 & uVar1) * 4),
                            uStack52);
          *piVar12 = iVar9;
          piVar12 = &iStack44;
          iVar9 = (*pcVar2)();
          *piVar12 = *piVar12 + *(int *)(*(int *)(*(int *)(iVar9 + 0x10) + 4) + (int)DAT_00040b96);
          piVar12 = &iStack40;
          iVar9 = (*pcVar2)();
          *piVar12 = *piVar12 + *(int *)(*(int *)(*(int *)(iVar9 + 0x10) + 4) + (int)DAT_00040b98);
          piVar12 = aiStack36;
          iVar9 = (*pcVar2)();
          iVar10 = (int)DAT_00040b9c;
          *piVar12 = *piVar12 + *(int *)(*(int *)(*(int *)(iVar9 + 0x10) + 4) + (int)DAT_00040b9a);
          (*DAT_00040bac)(*(undefined4 *)(*DAT_00040ba8 + 0xc),*puStack48,param_1 + 0x24,&iStack44,0
                          ,iVar10,*(undefined4 *)(param_1 + 8),0x28);
        }
        uVar6 = (uint)DAT_00040b9e;
        *(undefined *)(param_1 + uVar6) = 3;
      }
    }
  }
  return uVar6;
}



void FUN_00040bb0(int param_1,short param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  pcVar1 = DAT_00040d5c;
  iVar2 = (*DAT_00040d5c)();
  uVar9 = *(undefined4 *)
           (*(int *)(((int)*(short *)(DAT_00040d52 + param_1) & 0xffffU) * 4 +
                    *(int *)(*(int *)(iVar2 + 0x10) + 0xc)) + 4);
  iVar2 = (*pcVar1)();
  iVar4 = *(int *)(param_1 + 0x24);
  iVar7 = *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x18) + 8);
  iVar2 = (*pcVar1)();
  iVar5 = *(int *)(param_1 + 0x28);
  iVar8 = *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x18) + 0xc);
  iVar2 = (*pcVar1)();
  iVar6 = *(int *)(param_1 + 0x2c);
  iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x18) + 0x10);
  uVar3 = (*DAT_00040d60)((int)param_2);
  uVar3 = (*DAT_00040d64)(uVar9,uVar3,2);
  (*DAT_00040d68)(uVar9,uVar3,param_1 + 0x24,3,iVar4 - iVar7,iVar5 - iVar8,iVar6 - iVar2,
                  (int)DAT_00040d54);
  return;
}



void FUN_00044920(int param_1)

{
  code *pcVar1;
  code *pcVar2;
  short sVar6;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iStack44;
  char cStack40;
  char cStack36;
  
  sVar6 = FUN_00044fbc();
  iVar3 = (int)sVar6;
  if (iVar3 < 0) {
    *(undefined4 *)(param_1 + DAT_00044a70) = 1;
  }
  pcVar2 = DAT_00044a78;
  pcVar1 = DAT_00044a74;
  iVar8 = iVar3 + 1;
  uVar7 = 0;
  iStack44 = 0;
  cStack36 = '\0';
  cStack40 = '\0';
  do {
    *(undefined *)(((int)cStack40 & 0xffU) + param_1 + 0x2c) = 0;
    if (*(int *)(param_1 + DAT_00044a70) == 0) {
      do {
        iVar8 = iVar8 + -1;
        if (iVar8 < 0) {
          iVar8 = iVar3;
        }
        iVar10 = iVar8 * 4;
        iVar4 = (*pcVar2)();
      } while (((*(int *)(*(int *)(iVar10 + *(int *)(*(int *)(iVar4 + 0x10) + 0xc)) + 4) == 0) ||
               (iVar4 = (*pcVar2)(),
               (DAT_00044a7c &
               *(uint *)(*(int *)(*(int *)(iVar10 + *(int *)(*(int *)(iVar4 + 0x10) + 0xc)) + 4) +
                        0x50)) != 0)) ||
              (iVar4 = (*pcVar2)(),
              **(char **)(iVar10 + *(int *)(*(int *)(iVar4 + 0x10) + 0xc)) < '\x01'));
      uVar9 = uVar7 & 0xff;
      iVar4 = (*pcVar2)();
      puVar5 = (undefined4 *)
               (*pcVar1)(*(undefined4 *)
                          (*(int *)(iVar10 + *(int *)(*(int *)(iVar4 + 0x10) + 0xc)) + 4));
      *(undefined4 *)(param_1 + uVar9 + 0x20) = *puVar5;
      iVar4 = (*pcVar2)();
      iVar4 = (*pcVar1)(*(undefined4 *)
                         (*(int *)(iVar10 + *(int *)(*(int *)(iVar4 + 0x10) + 0xc)) + 4));
      *(undefined4 *)(param_1 + uVar9 + 0x24) = *(undefined4 *)(iVar4 + 4);
      iVar4 = (*pcVar2)();
      iVar4 = (*pcVar1)(*(undefined4 *)
                         (*(int *)(iVar10 + *(int *)(*(int *)(iVar4 + 0x10) + 0xc)) + 4));
      *(undefined4 *)(param_1 + uVar9 + 0x28) = *(undefined4 *)(iVar4 + 8);
      *(short *)(uVar9 + param_1 + 0x1c) = (short)iVar8;
    }
    else {
      uVar9 = (int)cStack36 & 0xff;
      iVar4 = (*pcVar2)();
      *(undefined4 *)(param_1 + uVar9 + 0x20) =
           *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + 0xc);
      iVar4 = (*pcVar2)();
      *(undefined4 *)(param_1 + uVar9 + 0x24) =
           *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + 0x10);
      iVar4 = (*pcVar2)();
      *(undefined4 *)(param_1 + uVar9 + 0x28) =
           *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + 0x14);
      *(short *)(uVar9 + param_1 + 0x1c) = (short)iVar8;
    }
    iStack44 = iStack44 + 1;
    cStack36 = cStack36 + '\x14';
    cStack40 = cStack40 + '\x14';
    uVar7 = uVar7 + 0x14;
  } while (iStack44 < 8);
  return;
}



void FUN_00044ab2(int param_1)

{
  short sVar3;
  uint uVar1;
  int iVar2;
  undefined4 uVar4;
  int iVar5;
  
  sVar3 = (*DAT_00044b68)();
  if (sVar3 == 5) {
    uVar1 = (*DAT_00044b6c)();
    uVar4 = DAT_00044b8c;
    if ((uVar1 & 1) == 0) {
      uVar4 = DAT_00044b88;
    }
    iVar2 = (int)DAT_00044b60;
    *(undefined4 *)(param_1 + iVar2) = uVar4;
    *(undefined4 *)(param_1 + iVar2 + 4) = 0;
  }
  else {
    uVar1 = (*DAT_00044b6c)();
    iVar2 = (*DAT_00044b74)(uVar1 >> 0x10,DAT_00044b70);
    iVar5 = (int)DAT_00044b60;
    *(int *)(DAT_00044b60 + param_1) = iVar2 + DAT_00044b78;
    iVar2 = DAT_00044b84;
    if (*(int *)(iVar5 + param_1) < DAT_00044b7c) {
      iVar2 = DAT_00044b80;
    }
    ((int *)(iVar5 + param_1))[1] = iVar2;
  }
  (*DAT_00044b90)(param_1);
  (*DAT_00044b94)(param_1 + 0x10,*(undefined4 *)(param_1 + DAT_00044b60),param_1);
  (*DAT_00044b98)();
  (*DAT_00044b9c)(param_1 + 0x10);
  iVar2 = (*DAT_00044ba0)();
  (*DAT_00044ba4)((int)DAT_00044b62 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18) + 0x18);
  (*DAT_00044bac)(DAT_00044ba8);
  (*DAT_00044bb0)();
  *(undefined4 *)(param_1 + DAT_00044b64) = 1;
  return;
}



void FUN_00044bb4(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  pcVar1 = DAT_00044cb0;
  iVar2 = (*DAT_00044cb0)();
  uVar3 = (*DAT_00044cb4)(param_1,(int)*(short *)(*(int *)(*(int *)(iVar2 + 0x10) + 0xc) +
                                                 (int)DAT_00044ca8) << 4);
  *(undefined4 *)(DAT_00044caa + param_1) = uVar3;
  if (*(int *)(param_1 + DAT_00044caa) == 0) {
    if (param_1 != 0) {
      *(uint *)(param_1 + -4) = *(uint *)(param_1 + -4) | 1;
    }
  }
  else {
    for (iVar2 = 0; iVar4 = (*pcVar1)(),
        iVar2 < *(short *)(*(int *)(*(int *)(iVar4 + 0x10) + 0xc) + (int)DAT_00044ca8);
        iVar2 = iVar2 + 1) {
      iVar4 = (int)DAT_00044caa;
      *(undefined *)(*(int *)(param_1 + iVar4) + iVar2 * 0x10) = 0;
      iVar4 = *(int *)(param_1 + iVar4) + iVar2 * 0x10;
      *(undefined4 *)(iVar4 + 0xc) = 0;
      *(undefined4 *)(iVar4 + 8) = 0;
      *(undefined4 *)(iVar4 + 4) = 0;
    }
  }
  return;
}



undefined4 FUN_00044c30(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  do {
    if (*(char *)((uVar1 & 0xff) + param_1 + 0x2c) != '\x03') {
      return 0;
    }
    iVar2 = iVar2 + 1;
    uVar1 = uVar1 + 0x14;
  } while (iVar2 < 8);
  return 1;
}



void FUN_00044c5c(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00044cbc;
  iVar2 = DAT_00044cb8;
  *(ushort *)(*(int *)(DAT_00044cb8 + 4) + 0x20) =
       *(ushort *)(*(int *)(DAT_00044cb8 + 4) + 0x20) & 0xfffe;
  *(undefined4 *)(iVar2 + 0x14) = 1;
  *(undefined *)(iVar1 + 0x4d) = 6;
  if (*(char *)(iVar1 + 0x4c) < '\a') {
    iVar2 = iVar2 + 0x20;
    *(undefined2 *)(iVar2 + DAT_00044cac) = 0x4a;
    *(undefined2 *)(iVar2 + DAT_00044cae) = 0x4a;
  }
  (*DAT_00044cc8)(iVar1,DAT_00044cc4,DAT_00044cc0,10);
  *(undefined *)(iVar1 + 0x4d) = 5;
  return;
}



void FUN_00044ccc(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00044e1c;
  iVar2 = DAT_00044e18;
  *(ushort *)(*(int *)(DAT_00044e18 + 4) + 0x20) =
       *(ushort *)(*(int *)(DAT_00044e18 + 4) + 0x20) | 1;
  *(undefined4 *)(iVar2 + 0x14) = 1;
  *(undefined *)(iVar1 + 0x4d) = 6;
  if (*(char *)(iVar1 + 0x4c) < '\a') {
    iVar2 = iVar2 + 0x20;
    *(undefined2 *)(iVar2 + DAT_00044e0a) = 0x4a;
    *(undefined2 *)(iVar2 + DAT_00044e0c) = 0x4a;
  }
  (*DAT_00044e28)(iVar1,DAT_00044e24,DAT_00044e20,10);
  *(undefined *)(iVar1 + 0x4d) = 5;
  return;
}



void FUN_00044d16(int param_1)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  char local_24;
  
  pcVar2 = DAT_00044e30;
  pcVar1 = DAT_00044e2c;
  iVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  local_24 = '\0';
  do {
    if ((((*(int *)(param_1 + DAT_00044e0e) == 0) &&
         (iVar3 = (*DAT_00044e30)(),
         *(int *)(*(int *)(*(short *)((iVar8 * 0x14 & 0xffU) + param_1 + 0x1c) * 4 +
                          *(int *)(*(int *)(iVar3 + 0x10) + 0xc)) + 4) != 0)) &&
        (iVar3 = (*DAT_00044e30)(),
        (DAT_00044e34 &
        *(uint *)(*(int *)(*(int *)(*(short *)((iVar8 * 0x14 & 0xffU) + param_1 + 0x1c) * 4 +
                                   *(int *)(*(int *)(iVar3 + 0x10) + 0xc)) + 4) + 0x50)) == 0)) &&
       (iVar3 = (*DAT_00044e30)(),
       '\0' < **(char **)(*(short *)((uVar7 & 0xff) + param_1 + 0x1c) * 4 +
                         *(int *)(*(int *)(iVar3 + 0x10) + 0xc)))) {
      uVar9 = (int)local_24 & 0xff;
      iVar3 = (*pcVar2)();
      puVar4 = (undefined4 *)
               (*pcVar1)(*(undefined4 *)
                          (*(int *)(*(short *)(param_1 + 0x1c + uVar9) * 4 +
                                   *(int *)(*(int *)(iVar3 + 0x10) + 0xc)) + 4));
      *(undefined4 *)(param_1 + uVar9 + 0x20) = *puVar4;
      iVar3 = (*pcVar2)();
      iVar3 = (*pcVar1)(*(undefined4 *)
                         (*(int *)(*(short *)(param_1 + 0x1c + uVar9) * 4 +
                                  *(int *)(*(int *)(iVar3 + 0x10) + 0xc)) + 4));
      *(undefined4 *)(param_1 + uVar9 + 0x24) = *(undefined4 *)(iVar3 + 4);
      iVar3 = (*pcVar2)();
      iVar3 = (*pcVar1)(*(undefined4 *)
                         (*(int *)(*(short *)(param_1 + 0x1c + uVar9) * 4 +
                                  *(int *)(*(int *)(iVar3 + 0x10) + 0xc)) + 4));
      *(undefined4 *)(param_1 + uVar9 + 0x28) = *(undefined4 *)(iVar3 + 8);
    }
    else {
      uVar9 = uVar6 & 0xff;
      piVar5 = (int *)(param_1 + uVar9 + 0x20);
      iVar3 = (*pcVar2)();
      *piVar5 = *piVar5 + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_00044e10);
      piVar5 = (int *)(param_1 + uVar9 + 0x24);
      iVar3 = (*pcVar2)();
      *piVar5 = *piVar5 + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_00044e12);
      iVar10 = uVar9 + param_1 + 0x1c;
      iVar3 = (*pcVar2)();
      *(int *)(iVar10 + 0xc) =
           *(int *)(iVar10 + 0xc) +
           *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_00044e14);
    }
    uVar6 = uVar6 + 0x14;
    iVar8 = iVar8 + 1;
    local_24 = local_24 + '\x14';
    uVar7 = uVar7 + 0x14;
  } while (iVar8 < 8);
  return;
}



void FUN_00044ede(char *param_1,short param_2)

{
  code *pcVar1;
  int iVar2;
  short sVar4;
  undefined4 uVar3;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  pcVar1 = DAT_00044fa4;
  if (*param_1 != '\0') {
    iVar9 = param_2 * 4;
    iVar2 = (*DAT_00044fa4)();
    if (((*(int *)(*(int *)(iVar9 + *(int *)(*(int *)(iVar2 + 0x10) + 0xc)) + 4) != 0) &&
        (iVar2 = (*pcVar1)(),
        (DAT_00044fa8 &
        *(uint *)(*(int *)(*(int *)(iVar9 + *(int *)(*(int *)(iVar2 + 0x10) + 0xc)) + 4) + 0x50)) ==
        0)) && (iVar2 = (*pcVar1)(),
               '\0' < **(char **)(iVar9 + *(int *)(*(int *)(iVar2 + 0x10) + 0xc)))) {
      sVar4 = (*DAT_00044fac)(((int)*param_1 & 0xffU) * (int)DAT_00044fa0);
      iVar2 = (*pcVar1)();
      sVar4 = (*DAT_00044fb0)(*(undefined4 *)
                               (*(int *)(iVar9 + *(int *)(*(int *)(iVar2 + 0x10) + 0xc)) + 4),
                              (int)sVar4,2);
      iVar8 = (int)DAT_00044fa2;
      uVar5 = *(undefined4 *)(param_1 + 4);
      uVar6 = *(undefined4 *)(param_1 + 8);
      uVar7 = *(undefined4 *)(param_1 + 0xc);
      iVar2 = (*pcVar1)();
      uVar3 = (*DAT_00044fb4)(*(undefined4 *)
                               (*(int *)(iVar9 + *(int *)(*(int *)(iVar2 + 0x10) + 0xc)) + 4));
      iVar2 = (*pcVar1)();
      (*DAT_00044fb8)(*(undefined4 *)(*(int *)(iVar9 + *(int *)(*(int *)(iVar2 + 0x10) + 0xc)) + 4),
                      (int)sVar4,uVar3,3,uVar5,uVar6,uVar7,iVar8);
    }
  }
  *param_1 = '\0';
  return;
}



int FUN_00044fbc(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = DAT_00045108;
  iVar2 = (*DAT_00045108)();
  iVar2 = (int)*(short *)(*(int *)(*(int *)(iVar2 + 0x10) + 0xc) + (int)DAT_000450fe);
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      return -1;
    }
    iVar3 = (*pcVar1)();
    iVar4 = iVar2 * 4;
  } while (((*(int *)(*(int *)(iVar4 + *(int *)(*(int *)(iVar3 + 0x10) + 0xc)) + 4) == 0) ||
           (iVar3 = (*pcVar1)(),
           (DAT_0004510c &
           *(uint *)(*(int *)(*(int *)(iVar4 + *(int *)(*(int *)(iVar3 + 0x10) + 0xc)) + 4) + 0x50))
           != 0)) ||
          (iVar3 = (*pcVar1)(), **(char **)(iVar4 + *(int *)(*(int *)(iVar3 + 0x10) + 0xc)) < '\x01'
          ));
  return iVar2;
}



int FUN_00045028(undefined4 param_1,char param_2)

{
  code *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  
  iVar4 = (*DAT_00045114)(param_1,DAT_00045110,0x68);
  pcVar2 = DAT_0004511c;
  pcVar1 = DAT_00045118;
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 0x44) = param_1;
    *(char *)(iVar4 + 0x60) = param_2;
    *(int *)(iVar4 + 0x3c) = (int)param_2 << 0x19;
    uVar5 = (*pcVar1)();
    iVar6 = (*pcVar2)(uVar5 >> 0x10,DAT_00045120);
    *(int *)(iVar4 + 0x40) = iVar6 + DAT_00045124;
    *(undefined4 *)(iVar4 + 0x48) = 0;
    *(undefined4 *)(iVar4 + 0x4c) = 0;
    *(undefined4 *)(iVar4 + 0x50) = 0;
    uVar5 = (*pcVar1)();
    iVar6 = (*pcVar2)(uVar5 >> 0x10,(int)DAT_00045100);
    *(int *)(iVar4 + 0x54) = iVar6 + DAT_00045102;
    uVar5 = (*pcVar1)();
    iVar6 = (*pcVar2)(uVar5 >> 0x10,(int)DAT_00045104);
    uVar3 = DAT_00045128;
    *(int *)(iVar4 + 0x58) = iVar6 + DAT_00045106;
    *(undefined4 *)(iVar4 + 0x5c) = uVar3;
    uVar5 = (*pcVar1)();
    sVar7 = (*pcVar2)(uVar5 >> 0x10,0xf);
    *(short *)(iVar4 + 100) = sVar7 + 5;
    FUN_000453a8(iVar4);
    uVar3 = DAT_00045130;
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(*(int *)(*DAT_0004512c + 0xc) + 4);
    (*DAT_00045134)(iVar4 + 8,iVar4,iVar4 + 0x24,(int)*(short *)(*(int *)(iVar4 + 4) + 4),uVar3);
  }
  return iVar4;
}



void FUN_000453a8(int param_1)

{
  short sVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 local_38;
  undefined4 uStack52;
  undefined4 uStack48;
  undefined4 local_2c;
  undefined4 uStack40;
  int iStack36;
  
  pcVar2 = DAT_00045554;
  iVar8 = *(int *)(*(int *)(param_1 + 0x44) + 0x10);
  iVar4 = (*DAT_00045554)();
  iVar5 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + (int)DAT_00045546);
  iVar9 = *(int *)(*(int *)(param_1 + 0x44) + 0x14);
  iVar4 = (*pcVar2)();
  iVar6 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + (int)DAT_00045548);
  iVar10 = *(int *)(*(int *)(param_1 + 0x44) + 0x18);
  iVar4 = (*pcVar2)();
  pcVar3 = DAT_00045558;
  iVar7 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + (int)DAT_0004554a);
  iVar4 = (*DAT_00045558)(iVar8 - iVar5,*(undefined4 *)(param_1 + 0x50));
  iVar5 = (*pcVar3)(iVar9 - iVar6,*(undefined4 *)(param_1 + 0x50));
  iVar6 = (*pcVar3)(iVar10 - iVar7,*(undefined4 *)(param_1 + 0x50));
  iVar7 = (*pcVar2)();
  *(int *)(param_1 + 0x30) =
       *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x18) + (int)DAT_00045546) + iVar4;
  iVar4 = (*pcVar2)();
  *(int *)(param_1 + 0x34) =
       *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + (int)DAT_00045548) + iVar5;
  iVar4 = (*pcVar2)();
  *(int *)(param_1 + 0x38) =
       *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + (int)DAT_0004554a) + iVar6;
  local_2c = *(undefined4 *)(*(int *)(param_1 + 0x44) + (int)DAT_0004554c);
  uStack40 = *(undefined4 *)(*(int *)(param_1 + 0x44) + (int)DAT_0004554e);
  iStack36 = *(int *)(*(int *)(param_1 + 0x44) + (int)DAT_00045550) + *(int *)(param_1 + 0x3c);
  (*DAT_0004555c)(&local_38);
  *(undefined4 *)(param_1 + 0x30) = local_38;
  *(undefined4 *)(param_1 + 0x34) = uStack52;
  *(undefined4 *)(param_1 + 0x38) = uStack48;
  sVar1 = *(short *)(param_1 + 100);
  *(short *)(param_1 + 100) = sVar1 + -1;
  if (sVar1 < 0) {
    *(undefined2 *)(param_1 + 100) = 0xffff;
    if (*(int *)(param_1 + 0x50) < DAT_00045560) {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x40);
      iVar4 = (int)DAT_000456a6;
      iVar5 = (int)DAT_000456a8;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      iVar4 = *(int *)(param_1 + 0x5c) - iVar4;
      *(int *)(param_1 + 0x5c) = iVar4;
      if (iVar4 < iVar5) {
        *(int *)(param_1 + 0x5c) = iVar5;
      }
    }
    else {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) >> 1;
      iVar4 = (int)DAT_000456ac;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x58);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (int)DAT_000456aa;
      if (iVar4 < *(int *)(param_1 + 0x4c)) {
        *(int *)(param_1 + 0x4c) = iVar4;
      }
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x54);
  }
  else {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x4c) = 0;
    if (*(short *)(param_1 + 100) == 0) {
      (*DAT_000456b0)(0x1b);
    }
  }
  iVar7 = *(int *)(param_1 + 0x34);
  iVar4 = *(int *)((*(char *)(param_1 + 0x60) * 0x14 & 0xffU) + *(int *)(param_1 + 0x44) + 0x24);
  iVar8 = *(int *)(param_1 + 0x38);
  iVar5 = *(int *)((*(char *)(param_1 + 0x60) * 0x14 & 0xffU) + *(int *)(param_1 + 0x44) + 0x28);
  iVar6 = (*pcVar3)(*(int *)((*(char *)(param_1 + 0x60) * 0x14 & 0xffU) + *(int *)(param_1 + 0x44) +
                            0x20) - *(int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x48));
  iVar4 = (*pcVar3)(iVar4 - iVar7,*(undefined4 *)(param_1 + 0x48));
  iVar5 = (*pcVar3)(iVar5 - iVar8,*(undefined4 *)(param_1 + 0x48));
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x30) + iVar6;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x34) + iVar4;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x38) + iVar5;
  return;
}



void FUN_000458de(int param_1)

{
  ushort uVar1;
  code *pcVar2;
  code *pcVar3;
  undefined4 *puVar4;
  ushort extraout_var;
  ushort extraout_var_00;
  ushort extraout_var_01;
  ushort extraout_var_02;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  pcVar3 = DAT_00045a40;
  pcVar2 = DAT_00045a3c;
  uVar8 = DAT_00045a38;
  uVar1 = DAT_00045a2a;
  uVar5 = (*DAT_00045a3c)();
  uVar6 = (*pcVar3)(uVar5 >> 0x10,(int)DAT_00045a2c);
  uVar5 = (*pcVar2)();
  (*pcVar3)(uVar5 >> 0x10,uVar8);
  uVar6 = (*pcVar3)(*(undefined4 *)(DAT_00045a44 + (short)(extraout_var & uVar1) * 4),uVar6);
  *(undefined4 *)(param_1 + 0xc) = uVar6;
  uVar5 = (*pcVar2)();
  uVar6 = (*pcVar3)(uVar5 >> 0x10,(int)DAT_00045a2c);
  uVar5 = (*pcVar2)();
  (*pcVar3)(uVar5 >> 0x10,uVar8);
  uVar6 = (*pcVar3)(*(undefined4 *)(DAT_00045a48 + (short)(extraout_var_00 & uVar1) * 4),uVar6);
  uVar5 = (*pcVar2)();
  (*pcVar3)(uVar5 >> 0x10,uVar8);
  uVar7 = (*pcVar3)(*(undefined4 *)(DAT_00045a44 + (short)(extraout_var_01 & uVar1) * 4),uVar6);
  *(undefined4 *)(param_1 + 0x10) = uVar7;
  uVar5 = (*pcVar2)();
  (*pcVar3)(uVar5 >> 0x10,uVar8);
  uVar8 = (*pcVar3)(*(undefined4 *)(DAT_00045a48 + (short)(extraout_var_02 & uVar1) * 4),uVar6);
  *(undefined4 *)(param_1 + 8) = uVar8;
  iVar9 = (int)DAT_00045a32;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - (int)DAT_00045a2e;
  *(undefined4 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(int *)(param_1 + 0x3c) = (int)DAT_00045a30;
  uVar8 = (*pcVar3)(iVar9,*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x14) = uVar8;
  uVar8 = (*pcVar3)((int)DAT_00045a32,*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0x18) = uVar8;
  uVar5 = (*pcVar2)();
  iVar9 = (*pcVar3)(uVar5 >> 0x10,DAT_00045a4c);
  puVar4 = DAT_00045a50;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar9 + DAT_00045a34;
  *(undefined4 *)(param_1 + 0x20) = *puVar4;
  *(undefined4 *)(param_1 + 0x24) = puVar4[1];
  *(undefined4 *)(param_1 + 0x28) = puVar4[2];
  *(undefined4 *)(param_1 + 0x2c) = puVar4[3];
  *(undefined4 *)(param_1 + 0x30) = puVar4[4];
  *(undefined4 *)(param_1 + 0x34) = puVar4[5];
  *(undefined2 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar5 = (*pcVar2)();
  iVar9 = (*pcVar3)(uVar5 >> 0x10,DAT_00045a54);
  *(int *)(param_1 + 0x54) = iVar9 + DAT_00045a58;
  return;
}



void FUN_00045a0e(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 0x4c) == 0) {
    if (DAT_00045a5c <= *(int *)(param_1 + 0x38)) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x1c);
      puVar1 = DAT_00045b70;
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x2c) = *puVar1;
      *(undefined4 *)(param_1 + 0x30) = puVar1[1];
      *(undefined4 *)(param_1 + 0x34) = puVar1[2];
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined2 *)(param_1 + 0x4c) = 1;
    }
  }
  else if ((*(short *)(param_1 + 0x4c) == 1) && (DAT_00045a5c <= *(int *)(param_1 + 0x38))) {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x3c) + *DAT_00045b74;
  *(int *)(param_1 + 0x3c) = iVar2;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x54);
  (*DAT_00045b78)(param_1);
  (*DAT_00045b7c)(param_1 + 8,param_1 + 0x20,param_1 + 0x14,param_1 + 0x2c,param_1 + 0x40,
                  *(undefined4 *)(param_1 + 0x38));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00045af2(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack24;
  int iStack20;
  undefined4 uStack16;
  
  pcVar1 = _DAT_00045b80;
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar2 = (*_DAT_00045b80)();
    uStack24 = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x18) + 0x14);
    iVar2 = (*pcVar1)();
    iStack20 = *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x18) + 0x18) + _LAB_00045b83_1;
    uStack16 = *(undefined4 *)(param_1 + 0x58);
    iVar2 = (*pcVar1)();
    iVar3 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
    iVar2 = (int)_LAB_00045b6c;
    (*DAT_00045b88)();
    (*DAT_00045b8c)(iVar2 + iVar3 + 0x18);
    (*DAT_00045b90)(&uStack24);
    (*DAT_00045b94)(param_1,param_1 + 0x40,(int)_LAB_00045b6e);
    (*DAT_00045b98)();
  }
  return;
}



void FUN_00046388(int param_1,char param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  pcVar1 = DAT_00046504;
  iVar7 = (int)DAT_000464ee;
  if (*(int *)(param_1 + 0x54) < 0x10) {
    iVar8 = DAT_00046500 - *(int *)(param_1 + 0x54) * (int)DAT_000464f0;
  }
  else {
    iVar8 = iVar7;
    if ((param_2 != '\0') && (param_2 == '\x01')) {
      iVar7 = (int)DAT_000464f2;
      iVar8 = (int)DAT_000464f4;
    }
  }
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar5 = *(int *)(*(int *)(param_1 + 0x48) + 4);
  iVar4 = *(int *)(param_1 + 0x20);
  iVar6 = *(int *)(*(int *)(param_1 + 0x48) + 8);
  iVar2 = (*DAT_00046504)(**(int **)(param_1 + 0x48) - *(int *)(param_1 + 0x18),iVar7);
  iVar2 = *(int *)(param_1 + 0x3c) + iVar2;
  *(int *)(param_1 + 0x3c) = iVar2;
  iVar2 = (*pcVar1)(iVar2,iVar8);
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - iVar2;
  iVar2 = (*pcVar1)(iVar5 - iVar3,iVar7);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + iVar2;
  iVar2 = (*pcVar1)(*(undefined4 *)(param_1 + 0x40),iVar8);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) - iVar2;
  iVar7 = (*pcVar1)(iVar6 - iVar4,iVar7);
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + iVar7;
  iVar7 = (*pcVar1)(*(undefined4 *)(param_1 + 0x44),iVar8);
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) - iVar7;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x20);
  return;
}



void FUN_00046486(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack24;
  undefined4 uStack20;
  
  pcVar1 = DAT_00046504;
  *(int *)(param_1 + DAT_000464f6) = *(int *)(param_1 + DAT_000464f6) + DAT_00046508;
  uVar6 = *(undefined4 *)(param_1 + 0x3c);
  iVar2 = (*pcVar1)(uVar6);
  uVar7 = *(undefined4 *)(param_1 + 0x40);
  iVar3 = (*pcVar1)(uVar7);
  uVar8 = *(undefined4 *)(param_1 + 0x44);
  iVar4 = (*pcVar1)(uVar8);
  iVar5 = (*pcVar1)((int)DAT_000464f8);
  if (iVar5 < iVar2 + iVar3 + iVar4) {
    (*DAT_0004650c)(param_1 + 0x3c,&uStack24,param_3,param_4,uVar7,uVar8,uVar6);
    *(undefined4 *)(param_1 + DAT_000464fa) = uStack24;
    *(undefined4 *)(param_1 + DAT_000464fc) = uStack20;
  }
  return;
}



undefined4 FUN_0004655c(int param_1)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  
  pcVar2 = DAT_000465f0;
  do {
    sVar1 = *(short *)(param_1 + DAT_000465e2);
    iVar3 = (*pcVar2)();
    if (*(short *)(*(int *)(*(int *)(iVar3 + 0x10) + 0xc) + (int)DAT_000465e4) <= sVar1) {
      return 0;
    }
    iVar3 = (*pcVar2)();
    if ('\0' < **(char **)(*(short *)(DAT_000465e2 + param_1) * 4 +
                          *(int *)(*(int *)(iVar3 + 0x10) + 0xc))) {
      iVar3 = (*pcVar2)();
      iVar3 = *(int *)(*(int *)(*(short *)(DAT_000465e2 + param_1) * 4 +
                               *(int *)(*(int *)(iVar3 + 0x10) + 0xc)) + 4);
      *(int *)(param_1 + 0x4c) = iVar3;
      if ((iVar3 != 0) && ((DAT_000465f4 & *(uint *)(iVar3 + 0x50)) == 0)) {
        return 1;
      }
    }
    *(short *)(param_1 + DAT_000465e2) = *(short *)(param_1 + DAT_000465e2) + 1;
  } while( true );
}



void FUN_00047084(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + iVar1) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 5);
  *(undefined *)(param_1 + 0x22) = 0;
  return;
}



int FUN_000470a0(undefined4 param_1,undefined param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*DAT_000471c8)(param_1,DAT_000471c4,(int)DAT_000471b0);
  if (iVar1 != 0) {
    iVar2 = (int)DAT_000471b2;
    *(undefined4 *)(iVar1 + 0xc) = param_1;
    *(undefined *)(iVar1 + iVar2) = 0;
    *(undefined *)(DAT_000471b4 + iVar1) = param_2;
    iVar2 = (int)DAT_000471b6;
    *(undefined2 *)(iVar1 + iVar2) = 0;
    *(undefined4 *)(iVar1 + iVar2 + -0x10) = 0;
  }
  return iVar1;
}



uint FUN_00047430(int *param_1)

{
  ushort uVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int local_38;
  int iStack52;
  int iStack48;
  int local_2c;
  int iStack40;
  int iStack36;
  
  pcVar2 = DAT_000474e8;
  iVar5 = (*DAT_000474e8)();
  *(undefined4 *)((int)param_1 + (int)DAT_000474de) =
       *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + 8);
  iVar5 = (*pcVar2)();
  *(undefined4 *)((int)param_1 + (int)DAT_000474e0) =
       *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + 0xc);
  iVar6 = (*pcVar2)();
  iVar5 = DAT_000474ec;
  iVar7 = (int)DAT_000474e2;
  *(undefined4 *)((int)param_1 + iVar7) =
       *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x18) + 0x10);
  pcVar3 = DAT_000474f0;
  uVar8 = (int)*(char *)((int)param_1 + iVar7 + 0x2a) & 0xff;
  if (uVar8 == 0) {
    (*DAT_000474f4)(param_1,2);
    *param_1 = **(int **)(*DAT_000474f8 + 0x2c);
    iVar6 = *param_1;
    iVar6 = (*DAT_000474fc)(param_1,param_1 + 4,0,iVar6,4,*(undefined4 *)(iVar6 + 0x34),
                            *(undefined4 *)(iVar6 + 0x2c),0,0);
    if (iVar6 == 0) {
      uVar8 = (uint)DAT_000474e4;
      *(undefined4 *)(param_1[3] + uVar8) = 1;
      if (param_1 == (int *)0x0) {
        return uVar8;
      }
      param_1[-1] = param_1[-1] | 1;
      return uVar8;
    }
    iStack48 = 0;
    local_38 = 0;
    iStack52 = DAT_00047698;
    iVar6 = (*pcVar2)();
    iVar7 = *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x18) + 8);
    uVar8 = (*DAT_0004769c)();
    iVar6 = (*pcVar3)(uVar8 >> 0x10,DAT_000476a0);
    local_2c = iVar6 + iVar7 + DAT_000476a4;
    iVar6 = (*pcVar2)();
    iVar6 = *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x18) + 0xc);
    uVar8 = (*DAT_0004769c)();
    iStack40 = (*pcVar3)(uVar8 >> 0x10,DAT_000476a8);
    iStack40 = iStack40 + iVar6;
    iVar6 = (*pcVar2)();
    iStack36 = *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x18) + 0x10) + DAT_000476ac;
    param_1[0x18] = iVar5;
    *(undefined4 *)((int)param_1 + (int)DAT_0004768e) = 0;
    *(undefined4 *)((int)param_1 + (int)DAT_00047690) = 0;
    iVar6 = (int)DAT_00047692;
    *(undefined4 *)((int)param_1 + iVar6) = 0;
    *(undefined4 *)((int)param_1 + iVar6 + 0x14) = 0;
    *(undefined4 *)((int)param_1 + iVar6 + 0x10) = 0;
    *(undefined4 *)((int)param_1 + iVar6 + 0xc) = 0;
    *(undefined4 *)((int)param_1 + iVar6 + 0x20) = 0;
    *(undefined4 *)((int)param_1 + iVar6 + 0x1c) = 0;
    *(undefined4 *)((int)param_1 + iVar6 + 0x18) = 0;
    param_1[0x1b] = 0;
    param_1[0x1a] = 0;
    param_1[0x19] = 0;
    param_1[0x1e] = 0;
    param_1[0x1d] = 0;
    param_1[0x1c] = 0;
    param_1[0x1f] = local_38;
    param_1[0x20] = iStack52;
    param_1[0x21] = iStack48;
    param_1[0x24] = 0;
    param_1[0x23] = 0;
    param_1[0x22] = 0;
    param_1[0x27] = 0;
    param_1[0x26] = 0;
    pcVar4 = DAT_0004769c;
    param_1[0x25] = 0;
    param_1[0x28] = local_2c;
    param_1[0x29] = iStack40;
    param_1[0x2a] = iStack36;
    param_1[-3] = DAT_000476b0;
    *(undefined2 *)((int)param_1 + 0x106) = 0;
    uVar8 = (*pcVar4)();
    iVar6 = (*pcVar3)(uVar8 >> 0x10,8);
    pcVar4 = DAT_000476b4;
    iVar7 = 0;
    if (0 < iVar6) {
      do {
        (*pcVar4)(param_1 + 4);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar6);
    }
    *(char *)((int)param_1 + (int)DAT_00047694) =
         *(char *)((int)param_1 + (int)DAT_00047694) + '\x01';
  }
  else if (uVar8 != 1) {
    return uVar8;
  }
  piVar9 = &local_38;
  iVar6 = (*pcVar2)();
  *piVar9 = *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x18) + 0x14);
  piVar9 = &iStack52;
  iVar6 = (*pcVar2)();
  *piVar9 = *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x18) + 0x18);
  piVar9 = &iStack48;
  iVar6 = (*pcVar2)();
  *piVar9 = *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x18) + 0x1c);
  iStack52 = iStack52 + DAT_00047698;
  FUN_0004818c(param_1,0);
  iVar6 = (*pcVar3)(*(undefined4 *)(param_1[3] + (int)DAT_00047782),iVar5);
  param_1[0x18] = iVar6 + iVar5;
  uVar1 = *(ushort *)((int)param_1 + (int)DAT_00047784);
  *(ushort *)((int)param_1 + (int)DAT_00047784) = uVar1 + 1;
  uVar8 = (uint)uVar1;
  if (uVar8 == 0x5a) {
    uVar8 = (uint)DAT_00047786;
    *(undefined4 *)((int)(char)(*(char *)((int)param_1 + uVar8) * '$') + param_1[3]) = 1;
  }
  return uVar8;
}



uint FUN_0004770a(int param_1)

{
  char cVar1;
  ushort uVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  uint uVar6;
  char cVar11;
  short sVar10;
  int iVar7;
  int iVar8;
  int *piVar9;
  char *pcVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 local_4c;
  int iStack72;
  int local_44;
  int iStack64;
  int iStack60;
  undefined4 local_38;
  int iStack52;
  undefined4 uStack48;
  int local_2c;
  int iStack40;
  int aiStack36 [2];
  
  iVar7 = DAT_00047dbc;
  pcVar5 = DAT_0004779c;
  pcVar4 = DAT_00047798;
  pcVar3 = DAT_00047794;
  uVar6 = (int)*(char *)(param_1 + DAT_00047788) & 0xff;
  if (uVar6 == 0) {
    uVar6 = (*DAT_0004779c)();
    iVar7 = (*pcVar3)(uVar6 >> 0x10,(int)DAT_0004778a);
    *(int *)(DAT_0004778e + param_1) = iVar7 + DAT_0004778c;
    if (*(int *)(*(int *)(param_1 + 0xc) + (int)DAT_00047790) == 0) {
      uVar6 = (*pcVar5)();
      iVar7 = (*pcVar3)(uVar6 >> 0x10,0xe);
      iVar7 = iVar7 + 1;
    }
    else {
      uVar6 = (*pcVar5)();
      iVar7 = (*pcVar3)(uVar6 >> 0x10,0x14);
      iVar7 = iVar7 + 0x28;
    }
    *(int *)(DAT_00047956 + param_1) = iVar7;
    if (*(char *)(*(int *)(param_1 + 0xc) + 0x6c) == *(char *)(param_1 + DAT_00047958)) {
      iVar7 = (*pcVar4)();
      iVar8 = *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0004795a);
      iVar7 = (*pcVar4)();
      if (*(int *)(*(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0004795c) * 0x20 +
                   iVar8 + 0x1c) != 0) {
        piVar9 = &local_2c;
        iVar7 = (*pcVar4)();
        iVar8 = *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0004795a);
        iVar7 = (*pcVar4)();
        iVar8 = *(int *)(*(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0004795c) * 0x20
                         + iVar8 + 0x1c);
        iVar7 = (*pcVar4)();
        cVar1 = *(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0004795c);
        (*pcVar4)();
        cVar11 = (*DAT_00047960)();
        *piVar9 = *(int *)(cVar1 * 0x60 + iVar8 + (int)(char)(cVar11 * '\f'));
        piVar9 = &iStack40;
        iVar7 = (*pcVar4)();
        iVar8 = *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0004795a);
        iVar7 = (*pcVar4)();
        iVar8 = *(int *)(*(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0004795c) * 0x20
                         + iVar8 + 0x1c);
        iVar7 = (*pcVar4)();
        cVar1 = *(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0004795c);
        (*pcVar4)();
        cVar11 = (*DAT_00047960)();
        *piVar9 = *(int *)((int)(char)(cVar11 * '\f') + cVar1 * 0x60 + iVar8 + 4);
        piVar9 = aiStack36;
        iVar7 = (*pcVar4)();
        iVar8 = *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0004795a);
        iVar7 = (*pcVar4)();
        iVar8 = *(int *)(*(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0004795c) * 0x20
                         + iVar8 + 0x1c);
        iVar7 = (*pcVar4)();
        cVar1 = *(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0004795c);
        (*pcVar4)();
        cVar11 = (*DAT_00047960)();
        *piVar9 = *(int *)((int)(char)(cVar11 * '\f') + cVar1 * 0x60 + iVar8 + 8);
        iVar7 = (*pcVar3)(local_2c,local_2c);
        iVar8 = (*pcVar3)(iStack40,iStack40);
        iVar8 = iVar8 + iVar7;
        iVar7 = (*pcVar3)(aiStack36[0],aiStack36[0]);
        if (0 < iVar7 + iVar8) {
          sVar10 = (*DAT_00047af0)();
          if (sVar10 == 1) {
            iStack40 = iStack40 + DAT_00047af4;
            aiStack36[0] = aiStack36[0] - DAT_00047af8;
          }
          piVar9 = &local_2c;
          iVar7 = (*pcVar4)();
          *piVar9 = *piVar9 + *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + 0xc);
          piVar9 = &iStack40;
          iVar7 = (*pcVar4)();
          *piVar9 = *piVar9 + *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + 0x10);
          piVar9 = aiStack36;
          iVar7 = (*pcVar4)();
          *piVar9 = *piVar9 + *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + 0x14);
          *(int *)(*(int *)(param_1 + 0xc) + 0x70) = local_2c;
          *(int *)(*(int *)(param_1 + 0xc) + 0x74) = iStack40;
          iVar7 = (int)DAT_00047ae8;
          *(int *)(*(int *)(param_1 + 0xc) + 0x78) = aiStack36[0];
          *(int *)(*(int *)(param_1 + 0xc) + 0x7c) = iVar7 + param_1;
          *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x9c) = 1;
          (*DAT_00047afc)();
          (*DAT_00047b00)(*(int *)(param_1 + 0xc) + 0x70);
          (*DAT_00047b04)(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x7c));
          (*DAT_00047b08)();
        }
      }
    }
    *(char *)(param_1 + DAT_00047aea) = *(char *)(param_1 + DAT_00047aea) + '\x01';
  }
  else if (uVar6 != 1) {
    if (uVar6 != 2) {
      if (uVar6 != 3) {
        return uVar6;
      }
      uStack48 = 0;
      piVar9 = (int *)(DAT_0004806a + param_1);
      iStack52 = 0;
      local_38 = 0;
      iVar7 = (*DAT_00047798)();
      iVar8 = (int)DAT_0004806e;
      *piVar9 = *piVar9 + *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0004806c);
      piVar9 = (int *)(iVar8 + param_1);
      iVar7 = (*pcVar4)();
      iVar8 = (int)DAT_00048072;
      *piVar9 = *piVar9 + *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_00048070);
      piVar9 = (int *)(iVar8 + param_1);
      iVar7 = (*pcVar4)();
      *piVar9 = *piVar9 + *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_00048074);
      uVar6 = FUN_0004818c(param_1,0);
      return uVar6;
    }
    iVar8 = (int)DAT_00047db4;
    *(int *)(param_1 + iVar8) = *(int *)(param_1 + iVar8) + *(int *)(iVar8 + 4 + param_1);
    if ((iVar7 < *(int *)(param_1 + iVar8)) &&
       (*(int *)((int)(char)(*(char *)(param_1 + DAT_00047db6) * '$') + *(int *)(param_1 + 0xc) + 8)
        == 0)) {
      iVar7 = (int)DAT_00047db6;
      *(undefined4 *)((int)(char)(*(char *)(param_1 + iVar7) * '$') + *(int *)(param_1 + 0xc) + 8) =
           1;
      pcVar12 = (char *)(((int)*(short *)((int)(char)(*(char *)(param_1 + iVar7) * '$') +
                                          *(int *)(param_1 + 0xc) + 0x20) & 0xffffU) +
                        *(int *)(*(int *)(param_1 + 0xc) + 0x90));
      *pcVar12 = *pcVar12 + '\x01';
    }
    if (*(int *)(param_1 + DAT_00047db4) <= DAT_00047dc0) {
      iVar7 = (*pcVar4)();
      *(undefined4 *)(param_1 + DAT_00047ec0) =
           *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x18) + 8);
      iVar7 = (*pcVar4)();
      *(undefined4 *)(param_1 + DAT_00047ec2) =
           *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x18) + 0xc);
      iVar7 = (*pcVar4)();
      piVar9 = &local_44;
      *(undefined4 *)(param_1 + DAT_00047ebe) =
           *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x18) + 0x10);
      iVar7 = (*pcVar4)();
      iVar8 = *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + 0xc);
      iVar7 = (*pcVar4)();
      *piVar9 = iVar8 - *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x18) + 8);
      piVar9 = &iStack64;
      iVar7 = (*pcVar4)();
      iVar8 = *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + 0x10);
      iVar7 = (*pcVar4)();
      *piVar9 = iVar8 - *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x18) + 0xc);
      piVar9 = &iStack60;
      iVar7 = (*pcVar4)();
      iVar8 = *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + 0x14);
      iVar7 = (*pcVar4)();
      pcVar4 = DAT_00047ecc;
      *piVar9 = iVar8 - *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x18) + 0x10);
      (*pcVar4)(&local_44,&local_4c);
      local_38 = local_4c;
      uStack48 = 0;
      iStack52 = iStack72 + DAT_00047ed0;
      uVar14 = DAT_00047ed4;
      if (*(int *)(*(int *)(param_1 + 0xc) + (int)DAT_00047ec4) == 0) {
        uVar14 = 0;
      }
      FUN_0004818c(param_1,uVar14);
      local_44 = *(int *)((int)(char)(*(char *)(param_1 + DAT_00048060) * '$') +
                          *(int *)(param_1 + 0xc) + 0x14) - *(int *)(param_1 + DAT_00048062);
      iStack64 = *(int *)((int)(char)(*(char *)(param_1 + DAT_00048060) * '$') +
                          *(int *)(param_1 + 0xc) + 0x18) - *(int *)(param_1 + DAT_00048064);
      iStack60 = *(int *)((int)(char)(*(char *)(param_1 + DAT_00048060) * '$') +
                          *(int *)(param_1 + 0xc) + 0x1c) - *(int *)(param_1 + DAT_00048066);
      piVar9 = &local_44;
      iVar7 = (*pcVar3)(local_44,*(undefined4 *)(param_1 + DAT_00048068));
      *piVar9 = iVar7;
      piVar9 = &iStack64;
      iVar7 = (*pcVar3)(iStack64,*(undefined4 *)(param_1 + DAT_00048068));
      *piVar9 = iVar7;
      piVar9 = &iStack60;
      iVar7 = (*pcVar3)(iStack60,*(undefined4 *)(param_1 + DAT_00048068));
      *piVar9 = iVar7;
      iVar7 = (int)DAT_00048062;
      *(int *)(param_1 + iVar7 + 0x48) = *(int *)(param_1 + iVar7) + local_44;
      *(int *)(param_1 + iVar7 + 0x4c) = *(int *)(param_1 + iVar7 + 4) + iStack64;
      *(int *)(param_1 + iVar7 + 0x50U) = *(int *)(param_1 + iVar7 + 8) + iStack60;
      return iVar7 + 0x50U;
    }
    iVar7 = (int)DAT_00047db6;
    *(undefined4 *)
     ((int)(char)(*(char *)(param_1 + DAT_00047db6) * '$') + *(int *)(param_1 + 0xc) + 0xc) = 1;
    piVar9 = &local_44;
    iVar13 = *(int *)((int)(char)(*(char *)(param_1 + iVar7) * '$') + *(int *)(param_1 + 0xc) + 0x14
                     );
    iVar7 = (*pcVar4)();
    iVar8 = (int)DAT_00047db6;
    *piVar9 = iVar13 - *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x18) + 8);
    piVar9 = &iStack64;
    iVar7 = *(int *)((int)(char)(*(char *)(param_1 + iVar8) * '$') + *(int *)(param_1 + 0xc) + 0x18)
    ;
    iVar8 = (*pcVar4)();
    iVar13 = (int)DAT_00047db6;
    *piVar9 = iVar7 - *(int *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x18) + 0xc);
    piVar9 = &iStack60;
    iVar7 = *(int *)((int)(char)(*(char *)(param_1 + iVar13) * '$') + *(int *)(param_1 + 0xc) + 0x1c
                    );
    iVar8 = (*pcVar4)();
    iVar13 = (int)DAT_00047db4;
    *piVar9 = iVar7 - *(int *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x18) + 0x10);
    piVar9 = &local_44;
    iVar7 = (*pcVar3)(local_44,*(undefined4 *)(param_1 + iVar13));
    *piVar9 = iVar7;
    piVar9 = &iStack64;
    iVar7 = (*pcVar3)(iStack64,*(undefined4 *)(param_1 + DAT_00047db4));
    *piVar9 = iVar7;
    piVar9 = &iStack60;
    iVar7 = (*pcVar3)(iStack60,*(undefined4 *)(param_1 + DAT_00047db4));
    *piVar9 = iVar7;
    iVar7 = (*pcVar4)();
    *(int *)(param_1 + DAT_00047db8) =
         *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x18) + 8) + local_44;
    iVar7 = (*pcVar4)();
    *(int *)(param_1 + DAT_00047dba) =
         *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x18) + 0xc) + iStack64;
    iVar7 = (*pcVar4)();
    iVar8 = (int)DAT_00047ebe;
    *(int *)(param_1 + iVar8) = *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x18) + 0x10) + iStack60;
    *(undefined4 *)(param_1 + iVar8 + -0x38) = *(undefined4 *)(param_1 + iVar8 + 0x10);
    *(undefined4 *)(param_1 + iVar8 + -0x34) = *(undefined4 *)(param_1 + iVar8 + 0x14);
    uVar14 = DAT_00047ec8;
    *(undefined4 *)(param_1 + iVar8 + -0x30) = *(undefined4 *)(param_1 + iVar8 + 0x18);
    *(undefined4 *)(param_1 + -0xc) = uVar14;
    uVar6 = iVar8 + 0x2a;
    *(char *)(param_1 + uVar6) = *(char *)(param_1 + uVar6) + '\x01';
    return uVar6;
  }
  piVar9 = &local_44;
  iVar7 = (*pcVar4)();
  iVar7 = *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + 0xc);
  iVar8 = (*pcVar4)();
  *piVar9 = iVar7 - *(int *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x18) + 8);
  piVar9 = &iStack64;
  iVar7 = (*pcVar4)();
  iVar7 = *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + 0x10);
  iVar8 = (*pcVar4)();
  *piVar9 = iVar7 - *(int *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x18) + 0xc);
  piVar9 = &iStack60;
  iVar7 = (*pcVar4)();
  iVar7 = *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + 0x14);
  iVar8 = (*pcVar4)();
  pcVar3 = DAT_00047b0c;
  *piVar9 = iVar7 - *(int *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x18) + 0x10);
  (*pcVar3)(&local_44,&local_4c);
  local_38 = local_4c;
  uStack48 = 0;
  iStack52 = iStack72 + DAT_00047b10;
  if (*(int *)(*(int *)(param_1 + 0xc) + (int)DAT_00047aec) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = DAT_00047c04;
    if (*(int *)((int)(char)(*(char *)(param_1 + DAT_00047bea) * '$') + *(int *)(param_1 + 0xc) + 4)
        == 0) {
      iVar8 = (int)DAT_00047bee;
      *(undefined4 *)(DAT_00047bee + param_1) = *(undefined4 *)(param_1 + DAT_00047bec);
      iVar7 = (int)DAT_00047bf0;
      *(undefined4 *)(param_1 + iVar7 + 0x6c) = *(undefined4 *)(param_1 + iVar7);
      piVar9 = DAT_00047bf8;
      *(undefined4 *)(param_1 + iVar7 + 0x70) = *(undefined4 *)(param_1 + iVar7 + 4);
      uVar14 = DAT_00047bfc;
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(int *)(*piVar9 + 0xc) + 4);
      (*DAT_00047c00)(DAT_00047bf2 + param_1,param_1,iVar8 + param_1,
                      (int)*(short *)(*(int *)(param_1 + 4) + 4),uVar14);
      *(undefined4 *)
       ((int)(char)(*(char *)(param_1 + DAT_00047bea) * '$') + *(int *)(param_1 + 0xc) + 4) = 1;
      uVar14 = DAT_00047c04;
    }
  }
  FUN_0004818c(param_1,uVar14);
  iVar7 = (int)DAT_00047bf4;
  uVar2 = *(ushort *)(param_1 + iVar7);
  *(ushort *)(param_1 + iVar7) = uVar2 + 1;
  uVar6 = iVar7 - 10;
  if (*(int *)(param_1 + uVar6) < (int)(uint)uVar2) {
    iVar7 = (int)DAT_00047bec;
    *(undefined4 *)(param_1 + iVar7 + 0x48) = *(undefined4 *)(param_1 + iVar7);
    *(undefined4 *)(param_1 + iVar7 + 0x4c) = *(undefined4 *)(param_1 + iVar7 + 4);
    uVar14 = DAT_00047c08;
    *(undefined4 *)(param_1 + iVar7 + 0x50) = *(undefined4 *)(param_1 + iVar7 + 8);
    *(undefined4 *)(param_1 + -0xc) = uVar14;
    pcVar3 = DAT_00047c0c;
    *(undefined2 *)(param_1 + iVar7 + 0x66) = 0;
    (*pcVar3)(0x11);
    uVar6 = (uint)DAT_00047bf6;
    *(char *)(param_1 + uVar6) = *(char *)(param_1 + uVar6) + '\x01';
  }
  return uVar6;
}



void FUN_00048076(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + DAT_00048168) == '\0') {
    *(char *)(param_1 + DAT_00048168) = *(char *)(param_1 + DAT_00048168) + '\x01';
  }
  else if (*(char *)(param_1 + DAT_00048168) != '\x01') goto LAB_0004813e;
  iVar4 = (int)DAT_0004816a;
  uVar2 = (*DAT_00048180)();
  iVar3 = (*DAT_00048184)(uVar2 >> 0x10,(int)DAT_0004816c);
  *(int *)(iVar4 + param_1) = *(int *)(iVar4 + param_1) + iVar3 + DAT_0004816e;
  iVar4 = (int)DAT_00048170;
  uVar2 = (*DAT_00048180)();
  iVar3 = (*DAT_00048184)(uVar2 >> 0x10,(int)DAT_00048172);
  *(int *)(iVar4 + param_1) = *(int *)(iVar4 + param_1) + iVar3 + DAT_00048174;
  *(int *)(param_1 + DAT_00048176) = *(int *)(param_1 + DAT_00048176) + DAT_00048188;
  FUN_0004818c(param_1,0,param_3,param_4,0,0,0);
  uVar1 = *(ushort *)(param_1 + DAT_00048178);
  *(ushort *)(param_1 + DAT_00048178) = uVar1 + 1;
  if ((0x42 < uVar1) &&
     (*(undefined4 *)
       ((int)(char)(*(char *)(param_1 + DAT_0004817a) * '$') + *(int *)(param_1 + 0xc) + 0x10) = 1,
     param_1 != 0)) {
    *(uint *)(param_1 + -4) = *(uint *)(param_1 + -4) | 1;
  }
LAB_0004813e:
  if (*(int *)((int)(char)(*(char *)(param_1 + DAT_0004817a) * '$') + *(int *)(param_1 + 0xc) + 4)
      != 0) {
    *(undefined4 *)(param_1 + DAT_0004817c) = 1;
  }
  return;
}



void FUN_0004818c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6,int param_7)

{
  ushort uVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *pcVar4;
  ushort extraout_var;
  ushort extraout_var_00;
  ushort extraout_var_01;
  ushort extraout_var_02;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  
  (*DAT_00048324)(DAT_00048310 + param_1);
  pcVar2 = DAT_00048328;
  iVar5 = (int)DAT_00048312;
  iVar6 = (*DAT_00048328)();
  iVar7 = (int)DAT_00048316;
  *(int *)(iVar5 + param_1) =
       *(int *)(iVar5 + param_1) +
       *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) + (int)DAT_00048314);
  iVar5 = (*pcVar2)();
  iVar6 = (int)DAT_0004831a;
  *(int *)(iVar7 + param_1) =
       *(int *)(iVar7 + param_1) +
       *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_00048318);
  iVar5 = (*pcVar2)();
  iVar7 = (int)DAT_00048312;
  *(int *)(iVar6 + param_1) =
       *(int *)(iVar6 + param_1) +
       *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0004831c);
  pcVar2 = DAT_0004832c;
  iVar11 = *(int *)(param_1 + iVar7 + 4);
  iVar6 = *(int *)(param_1 + iVar7 + 0x40);
  iVar12 = *(int *)(param_1 + iVar7 + 8);
  iVar10 = *(int *)(param_1 + iVar7 + 0x44);
  iVar14 = (int)DAT_0004831e;
  iVar5 = (*DAT_0004832c)(*(int *)(param_1 + iVar7 + 0x3c) - *(int *)(param_1 + iVar7),iVar14);
  iVar6 = (*pcVar2)(iVar6 - iVar11,iVar14);
  iVar7 = (*pcVar2)(iVar10 - iVar12,iVar14);
  uVar8 = DAT_00048330;
  iVar10 = (int)DAT_00048320;
  *(int *)(param_1 + iVar10) = *(int *)(param_1 + iVar10) + iVar5;
  *(int *)(param_1 + iVar10 + 4) = *(int *)(param_1 + iVar10 + 4) + iVar6;
  *(int *)(param_1 + iVar10 + 8) = *(int *)(param_1 + iVar10 + 8) + iVar7;
  uVar13 = param_5 - *(int *)(param_1 + 0x7c);
  if ((uVar8 & uVar13) == 0) {
    uVar13 = uVar13 & DAT_000483a4;
  }
  else {
    uVar13 = uVar13 | DAT_00048334;
  }
  iVar5 = (*pcVar2)(uVar13,iVar14);
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + iVar5;
  uVar13 = param_6 - *(int *)(param_1 + 0x80);
  if ((uVar8 & uVar13) == 0) {
    uVar13 = uVar13 & DAT_000483a4;
  }
  else {
    uVar13 = uVar13 | DAT_000483a8;
  }
  iVar5 = (*pcVar2)(uVar13,iVar14);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + iVar5;
  if (param_2 == 0) {
    uVar13 = param_7 - *(int *)(param_1 + DAT_000483a2);
    if ((uVar13 & uVar8) == 0) {
      uVar13 = uVar13 & DAT_000483a4;
    }
    else {
      uVar13 = uVar13 | DAT_000483a8;
    }
    param_2 = (*pcVar2)(uVar13,iVar14);
    param_2 = *(int *)(param_1 + 0x6c) + param_2;
  }
  else {
    param_2 = *(int *)(param_1 + 0x6c) + param_2;
  }
  *(int *)(param_1 + 0x6c) = param_2;
  uVar1 = *(ushort *)(param_1 + DAT_0004853a);
  *(ushort *)(param_1 + DAT_0004853a) = uVar1 + 1;
  if (0xf < uVar1) {
    iVar5 = (*DAT_00048554)(*(undefined4 *)(param_1 + DAT_0004853c),
                            *(undefined4 *)(param_1 + DAT_0004853c));
    iVar6 = (*DAT_00048554)(*(undefined4 *)(param_1 + DAT_0004853e),
                            *(undefined4 *)(param_1 + DAT_0004853e));
    iVar7 = (*DAT_00048554)(*(undefined4 *)(param_1 + DAT_00048540),
                            *(undefined4 *)(param_1 + DAT_00048540));
    pcVar4 = DAT_00048560;
    uVar3 = DAT_0004855c;
    uVar1 = DAT_00048542;
    if (iVar7 + iVar6 + iVar5 < DAT_00048558) {
      uVar8 = (*DAT_00048560)();
      uVar9 = (*pcVar2)(uVar8 >> 0x10,DAT_00048564);
      uVar8 = (*pcVar4)();
      (*pcVar2)(uVar8 >> 0x10,uVar3);
      iVar5 = (*pcVar2)(*(undefined4 *)(DAT_00048568 + (short)(extraout_var & uVar1) * 4),uVar9);
      uVar8 = (*pcVar4)();
      uVar9 = (*pcVar2)(uVar8 >> 0x10,DAT_00048564);
      uVar8 = (*pcVar4)();
      (*pcVar2)(uVar8 >> 0x10,uVar3);
      uVar9 = (*pcVar2)(*(undefined4 *)(DAT_0004856c + (short)(extraout_var_00 & uVar1) * 4),uVar9);
      uVar8 = (*pcVar4)();
      (*pcVar2)(uVar8 >> 0x10,uVar3);
      iVar6 = (*pcVar2)(*(undefined4 *)(DAT_00048568 + (short)(extraout_var_01 & uVar1) * 4),uVar9);
      uVar8 = (*pcVar4)();
      (*pcVar2)(uVar8 >> 0x10,uVar3);
      iVar7 = (*pcVar2)(*(undefined4 *)(DAT_0004856c + (short)(extraout_var_02 & uVar1) * 4),uVar9);
      *(int *)(param_1 + DAT_00048544) = *(int *)(param_1 + DAT_00048544) + iVar7;
      iVar7 = (int)DAT_00048546;
      *(int *)(param_1 + iVar7) = *(int *)(param_1 + iVar7) + iVar5;
      *(int *)(param_1 + iVar7 + 4) = *(int *)(param_1 + iVar7 + 4) + iVar6;
      *(undefined2 *)(param_1 + iVar7 + 0x54) = 0;
    }
  }
  iVar5 = (int)DAT_00048548;
  iVar11 = (int)DAT_0004854e;
  *(int *)(param_1 + iVar5) = *(int *)(param_1 + iVar5) + *(int *)(iVar5 + -0xc + param_1);
  *(int *)(param_1 + iVar5 + 4) = *(int *)(param_1 + iVar5 + 4) + *(int *)(DAT_0004854a + param_1);
  *(int *)(param_1 + iVar5 + 8) = *(int *)(param_1 + iVar5 + 8) + *(int *)(DAT_0004854c + param_1);
  iVar5 = (*pcVar2)(*(undefined4 *)(param_1 + iVar5),iVar11);
  iVar6 = (*pcVar2)(*(undefined4 *)(param_1 + DAT_00048550),iVar11);
  iVar7 = (*pcVar2)(*(undefined4 *)(param_1 + DAT_00048730),iVar11);
  iVar10 = (int)DAT_00048732;
  *(int *)(param_1 + iVar10) = *(int *)(param_1 + iVar10) - iVar5;
  *(int *)(param_1 + iVar10 + 4) = *(int *)(param_1 + iVar10 + 4) - iVar6;
  *(int *)(param_1 + iVar10 + 8) = *(int *)(param_1 + iVar10 + 8) - iVar7;
  *(int *)(param_1 + iVar10 + 0xc) =
       *(int *)(param_1 + iVar10 + 0xc) + *(int *)(DAT_00048732 + param_1);
  *(int *)(param_1 + iVar10 + 0x10) =
       *(int *)(param_1 + iVar10 + 0x10) + *(int *)(DAT_00048734 + param_1);
  *(int *)(param_1 + iVar10 + 0x14) =
       *(int *)(param_1 + iVar10 + 0x14) + *(int *)(DAT_00048730 + param_1);
  *(undefined4 *)(param_1 + iVar10 + -4) = 0;
  *(undefined4 *)(param_1 + iVar10 + -8) = 0;
  *(undefined4 *)(param_1 + iVar10 + -0xc) = 0;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + *(int *)(param_1 + 0x6c);
  iVar5 = (*pcVar2)(*(undefined4 *)(param_1 + 0x70),iVar11);
  iVar6 = (*pcVar2)(*(undefined4 *)(param_1 + 0x74),iVar11);
  iVar7 = (*pcVar2)(*(undefined4 *)(param_1 + 0x78),iVar11);
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) - iVar5;
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) - iVar6;
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) - iVar7;
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x70);
  uVar8 = DAT_00048740;
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + *(int *)(param_1 + 0x74);
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + *(int *)(param_1 + 0x78);
  *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & uVar8;
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & uVar8;
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & uVar8;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + *(int *)(DAT_00048736 + param_1);
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + *(int *)(DAT_00048738 + param_1);
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + *(int *)(DAT_0004873a + param_1);
  iVar5 = (*pcVar2)(*(undefined4 *)(param_1 + 0xb8),6);
  iVar6 = (*pcVar2)(*(undefined4 *)(param_1 + DAT_0004873c),6);
  iVar7 = (*pcVar2)(*(undefined4 *)(param_1 + DAT_00048814),6);
  iVar10 = (int)DAT_00048816;
  *(int *)(param_1 + iVar10) = *(int *)(param_1 + iVar10) - iVar5;
  *(int *)(param_1 + iVar10 + 4) = *(int *)(param_1 + iVar10 + 4) - iVar6;
  *(int *)(param_1 + iVar10 + 8) = *(int *)(param_1 + iVar10 + 8) - iVar7;
  *(int *)(param_1 + iVar10 + 0xc) =
       *(int *)(param_1 + iVar10 + 0xc) + *(int *)(DAT_00048816 + param_1);
  *(int *)(param_1 + iVar10 + 0x10) =
       *(int *)(param_1 + iVar10 + 0x10) + *(int *)(DAT_00048818 + param_1);
  *(int *)(param_1 + iVar10 + 0x14) =
       *(int *)(param_1 + iVar10 + 0x14) + *(int *)(DAT_00048814 + param_1);
  *(uint *)(param_1 + iVar10 + 0xc) = *(uint *)(param_1 + iVar10 + 0xc) & uVar8;
  *(uint *)(param_1 + iVar10 + 0x10) = *(uint *)(param_1 + iVar10 + 0x10) & uVar8;
  pcVar2 = DAT_0004881c;
  *(uint *)(param_1 + iVar10 + 0x14) = uVar8 & *(uint *)(param_1 + iVar10 + 0x14);
  *(undefined4 *)(param_1 + iVar10 + -4) = 0;
  *(undefined4 *)(param_1 + iVar10 + -8) = 0;
  *(undefined4 *)(param_1 + iVar10 + -0xc) = 0;
  (*pcVar2)(param_1 + 0x10);
  return;
}



void FUN_00049338(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  uint uVar2;
  undefined2 uVar3;
  
  (*DAT_00049454)(param_1,(int)*(short *)(*(int *)(param_2 + 4) + 4),param_3,param_4,param_2);
  FUN_00049480(param_1);
  pcVar1 = DAT_0004945c;
  *(undefined4 *)(param_1 + 0x2c) = DAT_00049458;
  uVar2 = (*pcVar1)();
  uVar3 = (*DAT_00049460)(uVar2 >> 0x10,0xc);
  *(undefined2 *)(param_1 + 0x30) = uVar3;
  return;
}



void FUN_00049372(int param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = DAT_00049460;
  iVar3 = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x18) = iVar3;
  iVar3 = (*pcVar1)(iVar3,0);
  iVar3 = *(int *)(param_1 + 0x18) - iVar3;
  *(int *)(param_1 + 0x18) = iVar3;
  iVar4 = (int)DAT_0004944c;
  *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar3 & DAT_00049464;
  iVar3 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 8);
  *(int *)(param_1 + 0xc) = iVar3;
  iVar3 = (*pcVar1)(iVar3,iVar4);
  iVar3 = *(int *)(param_1 + 0xc) - iVar3;
  *(int *)(param_1 + 0xc) = iVar3;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar3;
  uVar2 = (*DAT_00049468)(param_1);
  if ((uVar2 & 2) != 0) {
    uVar2 = (*DAT_0004945c)();
    iVar3 = (*pcVar1)(uVar2 >> 0x10,(int)DAT_0004944e);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) - (iVar3 + DAT_00049450);
    FUN_00049480(param_1);
    return;
  }
  return;
}



void FUN_000493f0(int param_1,undefined4 param_2)

{
  undefined4 local_14;
  undefined4 uStack16;
  undefined4 uStack12;
  
  uStack12 = 0;
  local_14 = 0;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x10);
  uStack16 = *(undefined4 *)(param_1 + 0x1c);
  (*DAT_0004946c)();
  (*DAT_00049470)(param_2);
  (*DAT_00049474)(&local_14);
  (*DAT_00049478)(param_1,param_1 + 0x20,*(undefined4 *)(param_1 + 0x2c));
  (*DAT_0004947c)();
  return;
}



void FUN_00049480(int param_1)

{
  ushort uVar1;
  code *pcVar2;
  code *pcVar3;
  ushort extraout_var;
  ushort extraout_var_00;
  ushort extraout_var_01;
  ushort extraout_var_02;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  pcVar3 = DAT_00049598;
  pcVar2 = DAT_00049594;
  uVar7 = DAT_00049590;
  uVar1 = DAT_00049588;
  uVar4 = (*DAT_00049594)();
  uVar5 = (*pcVar3)(uVar4 >> 0x10,(int)DAT_0004958a);
  uVar4 = (*pcVar2)();
  (*pcVar3)(uVar4 >> 0x10,uVar7);
  uVar5 = (*pcVar3)(*(undefined4 *)(DAT_0004959c + (short)(extraout_var & uVar1) * 4),uVar5);
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  uVar4 = (*pcVar2)();
  uVar5 = (*pcVar3)(uVar4 >> 0x10,(int)DAT_0004958a);
  uVar4 = (*pcVar2)();
  (*pcVar3)(uVar4 >> 0x10,uVar7);
  uVar5 = (*pcVar3)(*(undefined4 *)(DAT_000495a0 + (short)(extraout_var_00 & uVar1) * 4),uVar5);
  uVar4 = (*pcVar2)();
  (*pcVar3)(uVar4 >> 0x10,uVar7);
  uVar6 = (*pcVar3)(*(undefined4 *)(DAT_0004959c + (short)(extraout_var_01 & uVar1) * 4),uVar5);
  *(undefined4 *)(param_1 + 0x28) = uVar6;
  uVar4 = (*pcVar2)();
  (*pcVar3)(uVar4 >> 0x10,uVar7);
  uVar5 = (*pcVar3)(*(undefined4 *)(DAT_000495a0 + (short)(extraout_var_02 & uVar1) * 4),uVar5);
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  uVar4 = (*pcVar2)();
  if ((uVar4 & 1) == 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - (int)DAT_0004958c;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar4 = (*pcVar2)(0,uVar7);
  uVar7 = (*pcVar3)(uVar4 >> 0x10,uVar7);
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (int)DAT_0004958e;
  uVar4 = (*pcVar2)();
  iVar8 = (*pcVar3)(uVar4 >> 0x10,DAT_000495a4);
  *(undefined **)(param_1 + 0x14) = PTR_LAB_000495a8 + *(int *)(param_1 + 0x14) + iVar8;
  return;
}



void FUN_0004b3aa(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  iVar4 = 0;
  uVar1 = (*DAT_0004b468)();
  for (; iVar4 < *(char *)((int)param_1 + 0xe); iVar4 = iVar4 + 1) {
    iVar3 = iVar4 * 4;
    iVar2 = *(int *)(*param_1 + iVar3);
    if (((iVar2 == 0) || (iVar2 == 0)) || ((*(uint *)(iVar2 + -4) & 1) != 0)) {
      *(undefined4 *)(iVar3 + *param_1) = uVar5;
    }
    else {
      *(uint *)(*(int *)(*param_1 + iVar3) + 0x14) =
           *(uint *)(*(int *)(*param_1 + iVar3) + 0x14) | uVar1;
    }
  }
  return;
}



void FUN_0004b3fe(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  iVar4 = 0;
  uVar1 = (*DAT_0004b468)();
  for (; iVar4 < *(char *)((int)param_1 + 0xe); iVar4 = iVar4 + 1) {
    iVar3 = iVar4 * 4;
    iVar2 = *(int *)(*param_1 + iVar3);
    if (((iVar2 == 0) || (iVar2 == 0)) || ((*(uint *)(iVar2 + -4) & 1) != 0)) {
      *(undefined4 *)(iVar3 + *param_1) = uVar5;
    }
    else {
      *(uint *)(*(int *)(*param_1 + iVar3) + 0x14) =
           *(uint *)(*(int *)(*param_1 + iVar3) + 0x14) & ~uVar1;
    }
  }
  return;
}



void FUN_0004bcca(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = DAT_0004bda0;
  iVar3 = (int)DAT_0004bd8e;
  *(undefined2 *)(param_1 + iVar3) = 0;
  uVar2 = DAT_0004bda4;
  *(undefined4 *)(param_1 + iVar3 + 4) = uVar1;
  uVar1 = DAT_0004bda8;
  *(undefined4 *)(param_1 + iVar3 + 8) = uVar2;
  uVar2 = DAT_0004bdac;
  *(undefined4 *)(param_1 + iVar3 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + iVar3 + 0x10) = uVar2;
  iVar3 = (int)DAT_0004bd90;
  *(undefined2 *)(param_1 + iVar3) = 10;
  *(undefined2 *)(param_1 + iVar3 + 2) = 10;
  *(undefined2 *)(param_1 + iVar3 + 4) = 10;
  *(undefined2 *)(param_1 + iVar3 + 6) = 10;
  *(undefined *)(param_1 + iVar3 + 0xc) = 0;
  *(undefined4 *)(param_1 + iVar3 + 0x10) = 0;
  return;
}



void FUN_0004be38(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  *(undefined2 *)(param_2 + 0x50) = *(undefined2 *)(param_2 + 0x12);
  *(undefined2 *)(param_2 + 0x52) = 0;
  for (iVar4 = 0; iVar4 < *(short *)(param_2 + 0x50); iVar4 = iVar4 + 1) {
    *(short *)(param_2 + 0x52) =
         *(short *)(param_2 + 0x52) +
         (short)*(undefined4 *)(iVar4 * 8 + *(int *)(param_2 + 0x40) + 4);
  }
  uVar2 = (*DAT_0004bed4)(param_1,*(short *)(param_2 + 0x52) * 100);
  pcVar1 = DAT_0004bed4;
  *(undefined4 *)(param_2 + 0x54) = uVar2;
  uVar2 = (*pcVar1)(param_1,*(short *)(param_2 + 0x52) * 0xc);
  iVar5 = 0;
  *(undefined4 *)(param_2 + 0x58) = uVar2;
  for (iVar4 = 0; iVar4 < *(short *)(param_2 + 0x50); iVar4 = iVar4 + 1) {
    if (*(int *)(iVar4 * 4 + *(int *)(param_2 + 0x44)) != 0) {
      for (iVar6 = 0; iVar6 < *(int *)(*(int *)(param_2 + 0x40) + iVar4 * 8 + 4); iVar6 = iVar6 + 1)
      {
        puVar3 = (undefined4 *)(iVar6 * 0x14 + *(int *)(*(int *)(param_2 + 0x40) + iVar4 * 8));
        (*DAT_0004c014)(iVar5 * 100 + *(int *)(param_2 + 0x54),param_1,
                        iVar5 * 0xc + *(int *)(param_2 + 0x58),puVar3[4],*puVar3,
                        *(undefined4 *)(param_1 + 0x1c),0,10);
        iVar5 = iVar5 + 1;
      }
    }
  }
  return;
}



void FUN_0004c0e4(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  for (iVar4 = 0; iVar4 < *(short *)(param_1 + 0x50); iVar4 = iVar4 + 1) {
    iVar6 = *(int *)(iVar4 * 4 + *(int *)(param_1 + 0x44));
    if (iVar6 != 0) {
      for (iVar3 = 0; iVar3 < *(int *)(*(int *)(param_1 + 0x40) + iVar4 * 8 + 4); iVar3 = iVar3 + 1)
      {
        puVar1 = (undefined4 *)(iVar5 * 0xc + *(int *)(param_1 + 0x58));
        puVar2 = (undefined4 *)(iVar3 * 0xc + iVar6);
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[1];
        puVar1[2] = puVar2[2];
        iVar5 = iVar5 + 1;
      }
    }
  }
  return;
}



void FUN_0004c170(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  pcVar1 = DAT_0004c284;
  for (iVar5 = 0; iVar5 < *(short *)(param_2 + 0x52); iVar5 = iVar5 + 1) {
    iVar4 = (int)DAT_0004c270;
    iVar3 = *(int *)(param_2 + 0x54);
    iVar2 = (*pcVar1)();
    *(undefined *)(iVar5 * 100 + iVar3 + 0x60) =
         *(undefined *)
          (iVar4 + param_1 +
           ((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_0004c272) & 0xffU) * 2 +
          1);
  }
  return;
}



int FUN_0004c1d0(int param_1,int param_2)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | DAT_0004c288;
  *(ushort *)(param_1 + DAT_0004c274) = (short)*(char *)(param_2 + 0x60) & 0xff;
  iVar1 = (int)*(char *)(param_2 + 0x5e);
  if (iVar1 == 0) {
    iVar1 = (int)DAT_0004c276;
    if (*(int *)(param_1 + iVar1) != 0) {
                    // WARNING: Could not recover jumptable at 0x0004c20c. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar1 = (**(code **)(param_1 + DAT_0004c276))(param_1);
      return iVar1;
    }
  }
  else if (iVar1 == 1) {
    iVar1 = *(int *)(param_1 + DAT_0004c278);
    if (iVar1 != 0) {
                    // WARNING: Could not recover jumptable at 0x0004c21e. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar1 = (**(code **)(param_1 + DAT_0004c278))(param_1);
      return iVar1;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = *(int *)(param_1 + DAT_0004c27a);
    if (iVar1 != 0) {
                    // WARNING: Could not recover jumptable at 0x0004c230. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar1 = (**(code **)(param_1 + DAT_0004c27a))(param_1);
      return iVar1;
    }
  }
  else if ((iVar1 == 3) && (iVar1 = *(int *)(param_1 + DAT_0004c27c), iVar1 != 0)) {
                    // WARNING: Could not recover jumptable at 0x0004c242. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar1 = (**(code **)(param_1 + DAT_0004c27c))(param_1);
    return iVar1;
  }
  return iVar1;
}



void FUN_0004c24a(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + DAT_0004c27e) < 1) {
    (*DAT_0004c28c)(param_1,(int)*(short *)(param_1 + DAT_0004c280),param_1 + 0x30,1);
    *(undefined2 *)(param_1 + DAT_0004c280) = 0;
  }
  else {
    iVar1 = (*DAT_0004c394)();
    if ((((int)DAT_0004c38a & *(uint *)(*(int *)(*(int *)(iVar1 + 0x10) + 4) + (int)DAT_0004c38c))
         != 0) && (0 < *(short *)(param_1 + DAT_0004c38e))) {
      (*DAT_0004c398)(param_1,(int)*(short *)(param_1 + DAT_0004c38e),param_1 + 0x30,1);
      *(undefined2 *)(param_1 + DAT_0004c38e) = 0;
    }
  }
  return;
}



void FUN_0004c5d4(int *param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  pcVar2 = DAT_0004c730;
  pcVar1 = DAT_0004c72c;
  uVar6 = DAT_0004c728;
  iVar4 = (int)DAT_0004c724;
  iVar5 = (int)param_2;
  iVar3 = (*DAT_0004c734)();
  if (*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x10) + 0x1b) == '\0') {
    iVar3 = (*DAT_0004c988)();
    if (*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x10) + 0x19) == '\0') {
      (*pcVar1)(0xd,iVar5);
      iVar3 = param_1[0x18] >> 0xc;
      uVar7 = uVar6;
      (*pcVar2)();
      (*pcVar1)(0x12,iVar5,param_3,param_4,uVar7,iVar3);
      iVar3 = param_1[0x19] >> 0xc;
      uVar7 = uVar6;
      (*pcVar2)();
      (*pcVar1)(0x17,iVar5,param_3,param_4,uVar7,iVar3);
      iVar3 = param_1[0x1a] >> 0xc;
      uVar7 = uVar6;
      (*pcVar2)();
      (*pcVar1)(0x1c,iVar5,param_3,param_4,uVar7,iVar3);
      iVar3 = *param_1 >> 0xc;
      uVar7 = uVar6;
      (*pcVar2)();
      (*pcVar1)(0x21,iVar5,param_3,param_4,uVar7,iVar3);
      iVar3 = param_1[1] >> 0xc;
      (*pcVar2)();
      (*pcVar1)(0x26,iVar5,param_3,param_4,uVar6,iVar3);
    }
    else {
      (*pcVar1)(0xd,iVar5);
      iVar3 = param_1[0xc] >> 0xc;
      uVar7 = uVar6;
      (*pcVar2)();
      (*pcVar1)(0x12,iVar5,param_3,param_4,uVar7,iVar3);
      iVar3 = param_1[0xd] >> 0xc;
      uVar7 = uVar6;
      (*pcVar2)();
      (*pcVar1)(0x17,iVar5,param_3,param_4,uVar7,iVar3);
      iVar3 = param_1[0xe] >> 0xc;
      uVar7 = uVar6;
      (*pcVar2)();
      (*pcVar1)(0x1c,iVar5,param_3,param_4,uVar7,iVar3);
      iVar3 = (short)((uint)param_1[0x15] >> 0x10) * iVar4 >> 0xc;
      uVar7 = uVar6;
      (*pcVar2)();
      (*pcVar1)(0x21,iVar5,param_3,param_4,uVar7,iVar3);
      iVar3 = (short)((uint)param_1[0x16] >> 0x10) * iVar4 >> 0xc;
      (*pcVar2)();
      (*pcVar1)(0x26,iVar5,param_3,param_4,uVar6,iVar3);
    }
    (*pcVar2)();
  }
  else {
    (*pcVar1)(0xd,iVar5);
    iVar3 = (short)((uint)param_1[0x1b] >> 0x10) * iVar4 >> 0xc;
    uVar7 = uVar6;
    (*pcVar2)();
    (*pcVar1)(0x12,iVar5,param_3,param_4,uVar7,iVar3);
    iVar3 = (short)((uint)param_1[0x1c] >> 0x10) * iVar4 >> 0xc;
    uVar7 = uVar6;
    (*pcVar2)();
    (*pcVar1)(0x17,iVar5,param_3,param_4,uVar7,iVar3);
    iVar3 = (short)((uint)param_1[0x1d] >> 0x10) * iVar4 >> 0xc;
    uVar7 = uVar6;
    (*pcVar2)();
    (*pcVar1)(0x1c,iVar5,param_3,param_4,uVar7,iVar3);
    iVar3 = (short)((uint)param_1[3] >> 0x10) * iVar4 >> 0xc;
    uVar7 = uVar6;
    (*pcVar2)();
    (*pcVar1)(0x21,iVar5,param_3,param_4,uVar7,iVar3);
    iVar3 = (short)((uint)param_1[4] >> 0x10) * iVar4 >> 0xc;
    (*pcVar2)();
    (*pcVar1)(0x26,iVar5,param_3,param_4,uVar6,iVar3);
    (*pcVar2)();
  }
  return;
}



void FUN_0004df18(int param_1)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_24;
  undefined4 uStack32;
  int iStack28;
  
  pcVar1 = DAT_0004e014;
  iVar3 = (*DAT_0004e014)();
  iVar6 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
  iVar3 = (*pcVar1)();
  if (((*(uint *)((int)DAT_0004e002 + *(int *)(*(int *)(iVar3 + 0x10) + 0x18)) & 2) != 0) &&
     (iVar3 = (*pcVar1)(),
     *(int *)(param_1 + 8) + 0x1eU <=
     *(uint *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0004e004))) {
    iVar3 = (*pcVar1)();
    iVar4 = (int)DAT_0004e006;
    *(undefined4 *)(param_1 + 8) =
         *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0004e004);
    pcVar2 = DAT_0004e018;
    *(uint *)(iVar6 + iVar4) = *(uint *)(iVar6 + iVar4) | 8;
    (*pcVar2)(0xd);
    iVar3 = DAT_0004e01c;
    uVar5 = (*DAT_0004e020)();
    local_24 = 0;
    uStack32 = 0;
    iStack28 = (int)DAT_0004e00a;
    (*DAT_0004e024)(iVar6,uVar5,&local_24,1);
    iVar4 = (*pcVar1)();
    if (*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x10) + 0x17) == '\0') {
      iVar4 = (int)DAT_0004e00c;
      *(short *)(iVar3 + iVar4) = *(short *)(iVar3 + iVar4) - (short)uVar5;
      if (*(short *)(iVar3 + iVar4) < 1) {
        iVar3 = (int)DAT_0004e00e;
        *(uint *)(iVar6 + iVar3) = *(uint *)(iVar6 + iVar3) & 0xffffffef;
        *(uint *)(iVar6 + iVar3) = *(uint *)(iVar6 + iVar3) | 8;
        (*DAT_0004e018)(0xf);
      }
    }
    iVar3 = (*pcVar1)();
    iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
    *(int *)(iVar3 + DAT_0004e010) = *(int *)(iVar3 + DAT_0004e010) + (int)(short)uVar5;
  }
  return;
}



void FUN_0004e028(char *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  short sVar3;
  uint *puVar4;
  int iVar5;
  
  pcVar1 = DAT_0004e0c8;
  if (param_2 == 0) {
    iVar2 = (*DAT_0004e0c8)();
    puVar4 = (uint *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x18) + (int)DAT_0004e0c0);
    *puVar4 = *puVar4 & ~((int)*(short *)(param_1 + 4) & 0xffffU);
    iVar2 = (*pcVar1)();
    *(undefined2 *)
     (((int)param_1[1] & 0xffU) * 2 + (int)DAT_0004e0c2 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18)) =
         0;
    if (param_1 != (char *)0x0) {
      *(uint *)(param_1 + -4) = *(uint *)(param_1 + -4) | 1;
    }
    if (param_1[1] == '\x02') {
      sVar3 = (*DAT_0004e0cc)(0x3c);
      iVar2 = (*pcVar1)();
      *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_0004e0c4) = (int)sVar3 << 0x10;
    }
  }
  else {
    iVar2 = (*DAT_0004e0c8)();
    iVar5 = ((int)param_1[1] & 0xffU) * 2;
    *(undefined2 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x18) + (int)DAT_0004e0c2 + iVar5) =
         *(undefined2 *)(iVar5 + DAT_0004e0d0);
    *param_1 = *param_1 + '\x01';
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_0004e45c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  code *pcVar2;
  code *pcVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  short sVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  int local_24;
  
  pcVar2 = DAT_0004e4f0;
  bVar1 = false;
  iVar14 = 0;
  local_24 = 0;
  iVar6 = param_1;
  while( true ) {
    if ((*(byte *)(_LAB_0004e4e4 + param_1 + iVar14) & 1) == 0) {
      if (iVar14 == 0) {
        iVar5 = (*pcVar2)();
        pcVar3 = DAT_0004e4f4;
        if (((int)DAT_0004e4e6 &
            *(uint *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + (int)DAT_0004e4e8)) != 0) {
          bVar1 = true;
          *(undefined2 *)(param_1 + DAT_0004e4ea) = 0x1e;
          *(byte *)(_LAB_0004e4e4 + param_1) = *(byte *)(_LAB_0004e4e4 + param_1) | 1;
          iVar6 = 0x1b;
          (*pcVar3)();
        }
      }
      else if (iVar14 == 1) {
        iVar5 = (*pcVar2)();
        pcVar3 = DAT_0004e620;
        if (((int)DAT_0004e60e &
            *(uint *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + ((int)DAT_0004e60e - 0x40U))) != 0)
        {
          bVar1 = true;
          *(undefined2 *)(param_1 + DAT_0004e610) = 0x1e;
          pbVar9 = (byte *)(DAT_0004e612 + param_1 + 1);
          *pbVar9 = *pbVar9 | 1;
          iVar6 = 0x1b;
          (*pcVar3)();
        }
      }
      else if (iVar14 == 2) {
        iVar5 = (*pcVar2)();
        pcVar3 = DAT_0004e620;
        if ((*(uint *)((int)DAT_0004e614 + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 0x80) != 0) {
          bVar1 = true;
          *(undefined2 *)(param_1 + DAT_0004e610) = 0x1e;
          pbVar9 = (byte *)(DAT_0004e612 + param_1 + 2);
          *pbVar9 = *pbVar9 | 1;
          iVar6 = 0x1b;
          (*pcVar3)();
        }
      }
      else if ((iVar14 == 3) &&
              (iVar5 = (*pcVar2)(),
              (DAT_0004e624 & *(uint *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + (int)DAT_0004e614)
              ) != 0)) {
        iVar6 = (*pcVar2)();
        iVar6 = *(int *)(*(int *)(iVar6 + 0x10) + 0x18);
        uVar11 = (uint)DAT_0004e616;
        *(uint *)(iVar6 + DAT_0004e614) = *(uint *)(iVar6 + DAT_0004e614) & DAT_0004e628;
        uVar11 = ((int)(uVar11 & (int)*(char *)(DAT_0004e612 + param_1 + 3) & 0xffU) >> 4) + 1;
        if (uVar11 < 4) {
          *(undefined2 *)(param_1 + DAT_0004e610) = 0x28;
        }
        else {
          *(undefined2 *)(DAT_0004e610 + param_1) = 0x50;
        }
        bVar1 = true;
        pbVar9 = (byte *)(DAT_0004e612 + param_1 + 3);
        iVar6 = uVar11 * 0x10;
        *pbVar9 = *pbVar9 | (byte)iVar6;
      }
      if (bVar1) {
        *(int *)(param_1 + DAT_0004e610 + -8) = (int)*(short *)(param_1 + DAT_0004e610) << 0x10;
        pbVar9 = (byte *)(DAT_0004e612 + param_1 + iVar14);
        *pbVar9 = *pbVar9 | 2;
        *(undefined4 *)(param_1 + DAT_0004e618) = 0;
      }
    }
    else if (iVar14 == 0) {
      iVar5 = (*pcVar2)();
      if (((int)DAT_0004e61a &
          *(uint *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + (int)DAT_0004e614)) == 0) {
        iVar5 = (int)DAT_0004e61c;
        *(undefined *)(DAT_0004e612 + param_1) = 0;
        *(undefined *)(iVar5 + param_1) = 0;
      }
    }
    else if (iVar14 == 1) {
      iVar5 = (*pcVar2)();
      if (((int)DAT_0004e720 &
          *(uint *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + ((int)DAT_0004e720 - 0x40U))) == 0) {
        iVar5 = (int)DAT_0004e724;
        *(undefined *)(DAT_0004e722 + param_1 + 1) = 0;
        *(undefined *)(iVar5 + param_1 + 1) = 0;
      }
    }
    else if ((iVar14 == 2) &&
            (iVar5 = (*pcVar2)(),
            (*(uint *)((int)DAT_0004e726 + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 0x80) == 0)) {
      iVar5 = (int)DAT_0004e724;
      *(undefined *)(DAT_0004e722 + param_1 + 2) = 0;
      *(undefined *)(iVar5 + param_1 + 2) = 0;
    }
    if (((*(byte *)(iVar14 + DAT_0004e722 + param_1) & 2) != 0) &&
       (*(char *)(DAT_0004e724 + param_1 + iVar14) == '\0')) break;
    iVar14 = iVar14 + 1;
    if (3 < iVar14) {
LAB_0004e73a:
      if (local_24 != 0) {
        iVar14 = (int)DAT_0004e8a0;
        *(int *)(param_1 + iVar14 + -0xc) =
             *(int *)(param_1 + iVar14 + -8) + *(short *)(param_1 + iVar14) * -0x10000;
        iVar6 = (int)(char)((char)iVar6 * '\f');
        if (*(int *)(param_1 + iVar14 + -4) == 0) {
          iVar14 = (*pcVar2)();
          puVar8 = (undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 8) + (int)DAT_0004e8a4);
          iVar14 = (int)DAT_0004e8a6;
          puVar13 = (undefined4 *)(DAT_0004e8b4 + iVar6);
          puVar12 = (undefined4 *)(DAT_0004e8a4 + 0x24 + param_1);
          *puVar12 = *puVar8;
          puVar12[1] = puVar8[1];
          pcVar2 = DAT_0004e8b8;
          puVar12[2] = puVar8[2];
          (*pcVar2)(*puVar13,puVar13[1],puVar13[2],param_4,iVar14 + param_1);
        }
        else {
          puVar12 = (undefined4 *)(DAT_0004e8b4 + iVar6);
          (*DAT_0004e8b8)(*puVar12,puVar12[1],puVar12[2],param_4,DAT_0004e8a2 + param_1);
          iVar6 = (*pcVar2)();
          puVar8 = (undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 8) + (int)DAT_0004e8a4);
          puVar12 = (undefined4 *)(DAT_0004e8a4 + 0x30 + param_1);
          *puVar12 = *puVar8;
          puVar12[1] = puVar8[1];
          puVar12[2] = puVar8[2];
        }
        pcVar2 = DAT_0004e8bc;
        iVar6 = (int)DAT_0004e8a2;
        *(int *)(param_1 + iVar6 + 0x18) =
             *(int *)(param_1 + iVar6 + 0xc) - *(int *)(param_1 + iVar6);
        *(int *)(param_1 + iVar6 + 0x1c) =
             *(int *)(param_1 + iVar6 + 0x10) - *(int *)(param_1 + iVar6 + 4);
        *(int *)(param_1 + iVar6 + 0x20) =
             *(int *)(param_1 + iVar6 + 0x14) - *(int *)(param_1 + iVar6 + 8);
        uVar7 = (*pcVar2)(*(undefined4 *)(param_1 + iVar6 + 0x18),
                          *(undefined4 *)(param_1 + iVar6 + -0x10),
                          *(undefined4 *)(param_1 + iVar6 + -0xc));
        *(undefined4 *)(DAT_0004e8a8 + param_1) = uVar7;
        iVar6 = (int)DAT_0004e8aa;
        uVar7 = (*pcVar2)(*(undefined4 *)(param_1 + iVar6 + 0x28),
                          *(undefined4 *)(param_1 + iVar6 + -4),*(undefined4 *)(param_1 + iVar6));
        *(undefined4 *)(DAT_0004e8ac + param_1) = uVar7;
        iVar6 = (int)DAT_0004e8aa;
        uVar7 = (*pcVar2)(*(undefined4 *)(param_1 + iVar6 + 0x2c),
                          *(undefined4 *)(param_1 + iVar6 + -4),*(undefined4 *)(param_1 + iVar6));
        uVar4 = DAT_0004e8b0;
        *(undefined4 *)(DAT_0004e8ae + param_1) = uVar7;
        iVar6 = (int)DAT_0004e8a8;
        *(int *)(param_1 + iVar6 + -0xc) =
             *(int *)(param_1 + iVar6 + -0x18) + *(int *)(param_1 + iVar6);
        *(int *)(param_1 + iVar6 + -8) =
             *(int *)(param_1 + iVar6 + -0x14) + *(int *)(param_1 + iVar6 + 4);
        *(int *)(param_1 + iVar6 + -4) =
             *(int *)(param_1 + iVar6 + -0x10) + *(int *)(param_1 + iVar6 + 8);
        (*DAT_0004e8c0)((int)(short)((ushort)((uint)*(undefined4 *)(param_1 + iVar6 + -4) >> 0x10) &
                                    uVar4) << 0x10 |
                        (int)(short)((ushort)((uint)*(undefined4 *)(param_1 + iVar6 + -8) >> 0x10) &
                                    uVar4) << 8 |
                        (int)(short)((ushort)((uint)*(undefined4 *)(param_1 + iVar6 + -0xc) >> 0x10)
                                    & uVar4));
      }
      return local_24;
    }
  }
  sVar10 = *(short *)(param_1 + DAT_0004e728) + -1;
  *(short *)(param_1 + DAT_0004e728) = sVar10;
  if (sVar10 < 1) {
    if (*(int *)(param_1 + DAT_0004e72a) == 0) {
      if (((iVar14 == 0) || (iVar14 == 1)) || (iVar14 == 2)) {
        *(undefined2 *)(param_1 + DAT_0004e728) = 0x3c;
      }
      else if (iVar14 == 3) {
        if ((uint)((int)((int)DAT_0004e72c & (int)*(char *)(DAT_0004e722 + param_1 + 3) & 0xffU) >>
                  4) < 4) {
          *(undefined2 *)(param_1 + DAT_0004e728) = 10;
        }
        else {
          *(undefined2 *)(param_1 + DAT_0004e728) = 0x14;
        }
      }
      iVar6 = (int)DAT_0004e728;
      *(int *)(param_1 + iVar6 + -8) = (int)*(short *)(param_1 + iVar6) << 0x10;
      *(undefined4 *)(param_1 + iVar6 + -4) = 1;
    }
    else {
      *(undefined2 *)(param_1 + DAT_0004e728) = 0;
      if (iVar14 == 3) {
        iVar6 = (int)DAT_0004e724;
        *(undefined *)(DAT_0004e722 + param_1 + 3) = 0;
        *(undefined *)(iVar6 + param_1 + 3) = 0;
      }
      else {
        *(undefined *)(DAT_0004e724 + param_1 + iVar14) = 1;
      }
    }
  }
  local_24 = 1;
  iVar6 = iVar14;
  goto LAB_0004e73a;
}



undefined4 FUN_0004e8c4(void)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_18;
  undefined4 uStack20;
  undefined4 uStack16;
  
  iVar2 = (*DAT_0004ea38)();
  uVar1 = DAT_0004ea2c;
  iVar4 = *(int *)(*(int *)(iVar2 + 0x10) + 8);
  iVar2 = (*DAT_0004ea38)();
  if ((*(uint *)((int)DAT_0004ea2e + *(int *)(*(int *)(iVar2 + 0x10) + 4)) & 8) == 0) {
    iVar2 = (int)DAT_0004ea36;
    uVar3 = (*DAT_0004ea48)((int)(short)((ushort)((uint)*(undefined4 *)(iVar4 + iVar2) >> 0x10) &
                                        uVar1) << 0x10 |
                            (int)(short)((ushort)((uint)*(undefined4 *)(iVar4 + iVar2 + -4) >> 0x10)
                                        & uVar1) << 8 |
                            (int)(short)((ushort)((uint)*(undefined4 *)(iVar4 + iVar2 + -8) >> 0x10)
                                        & uVar1));
  }
  else {
    iVar2 = (int)DAT_0004ea30;
    (*DAT_0004ea3c)((int)(short)((ushort)((uint)*(undefined4 *)(iVar4 + iVar2 + -0x18) >> 0x10) &
                                uVar1) << 0x10 |
                    (int)(short)((ushort)((uint)*(undefined4 *)(iVar4 + iVar2 + -0x1c) >> 0x10) &
                                uVar1) << 8 |
                    (int)(short)((ushort)((uint)*(undefined4 *)(iVar4 + iVar2 + -0x20) >> 0x10) &
                                uVar1),
                    (int)(short)((ushort)((uint)*(undefined4 *)(iVar4 + iVar2 + -0xc) >> 0x10) &
                                uVar1) << 0x10 |
                    (int)(short)((ushort)((uint)*(undefined4 *)(iVar4 + iVar2 + -0x10) >> 0x10) &
                                uVar1) << 8 |
                    (int)(short)((ushort)((uint)*(undefined4 *)(iVar4 + iVar2 + -0x14) >> 0x10) &
                                uVar1),
                    (int)(short)((ushort)((uint)*(undefined4 *)(iVar4 + iVar2) >> 0x10) & uVar1) <<
                    0x10 | (int)(short)((ushort)((uint)*(undefined4 *)(iVar4 + iVar2 + -4) >> 0x10)
                                       & uVar1) << 8 |
                    (int)(short)((ushort)((uint)*(undefined4 *)(iVar4 + iVar2 + -8) >> 0x10) & uVar1
                                ));
    (*DAT_0004ea40)(DAT_0004ea32 + iVar4,&local_18);
    iVar2 = (int)DAT_0004ea34;
    uVar3 = (*DAT_0004ea44)(local_18,uStack20,uStack16,
                            (int)(short)((ushort)((uint)*(undefined4 *)(iVar4 + iVar2) >> 0x10) &
                                        uVar1) << 0x10 |
                            (int)(short)((ushort)((uint)*(undefined4 *)(iVar4 + iVar2 + -4) >> 0x10)
                                        & uVar1) << 8 |
                            (int)(short)((ushort)((uint)*(undefined4 *)(iVar4 + iVar2 + -8) >> 0x10)
                                        & uVar1));
  }
  return uVar3;
}



void FUN_0004e9d6(int param_1,short param_2,short param_3)

{
  (*DAT_0004ea50)(param_1 + 0x18,*(undefined4 *)(**DAT_0004ea4c + ((int)param_2 & 0xffffU)),
                  (int)param_3);
                    // WARNING: Could not recover jumptable at 0x0004ea04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0004ea54)(param_1 + 0x18);
  return;
}



void FUN_0004ea58(int *param_1,short param_2,short param_3)

{
  (*DAT_0004eb30)(param_1 + 6,*(undefined4 *)(((int)param_2 & 0xffffU) + *param_1),(int)param_3);
                    // WARNING: Could not recover jumptable at 0x0004ea86. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0004eb34)(param_1 + 6);
  return;
}



void FUN_0004ea8a(int *param_1,short param_2)

{
  (*DAT_0004eb38)(param_1 + 6,*(undefined4 *)(((int)param_2 & 0xffffU) + *param_1));
                    // WARNING: Could not recover jumptable at 0x0004eab0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0004eb3c)(param_1 + 6);
  return;
}



void FUN_0004eae6(short param_1,short param_2)

{
  int **ppiVar1;
  
  (*DAT_0004eb50)(*DAT_0004eb48 + 10,
                  *(undefined4 *)
                   (**DAT_0004eb48 +
                   (int)*(short *)(((int)param_1 & 0xffffU) * 2 + (*DAT_0004eb48)[8])),(int)param_2)
  ;
  ppiVar1 = DAT_0004eb48;
  (*DAT_0004eb34)(*DAT_0004eb48 + 10);
                    // WARNING: Could not recover jumptable at 0x0004eae2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0004eb4c)(*ppiVar1 + 0x1e,*ppiVar1 + 10);
  return;
}



void FUN_0004ed32(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[0x13] = param_4;
  param_1[0x10] = *param_3;
  param_1[0x11] = param_3[1];
  param_1[0x12] = param_3[2];
  (*DAT_0004edb4)(param_1);
  param_1[2] = param_1 + 4;
  param_1[3] = 0;
  param_1[0x14] = param_5;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined2 *)((int)param_1 + 0x5a) = 0;
  *(undefined *)((int)param_1 + 0x5e) = 0;
  *(undefined *)((int)param_1 + 0x5f) = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  param_1[0x15] = 0;
  *(undefined *)(param_1 + 0x18) = 10;
  return;
}



int FUN_0004ee5c(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (*DAT_0004eea4)();
  pcVar1 = DAT_0004ef64;
  iVar2 = (int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 8) + 2);
  if ((iVar2 != 3) && (iVar2 == 4)) {
    iVar4 = (int)DAT_0004ef60;
    iVar2 = (*DAT_0004ef64)(*(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x14),iVar4);
    iVar2 = *(int *)(param_1 + 0x44) + iVar2;
    *(int *)(param_1 + 0x44) = iVar2;
    iVar3 = (int)DAT_0004ef62;
    iVar2 = (*pcVar1)(iVar2,iVar3);
    iVar2 = *(int *)(param_1 + 0x44) - iVar2;
    *(int *)(param_1 + 0x44) = iVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar2;
    iVar2 = (*pcVar1)(*(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x18),iVar4);
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + iVar2;
    iVar2 = (*pcVar1)(*(undefined4 *)(param_1 + 0x48),iVar3);
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) - iVar2;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x48);
    iVar2 = (*pcVar1)(*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x1c),iVar4);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar2;
    iVar2 = (*pcVar1)(*(undefined4 *)(param_1 + 0x4c),iVar3);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - iVar2;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x4c);
    FUN_0004fda0(param_1);
                    // WARNING: Could not recover jumptable at 0x0004ef4c. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar2 = (*DAT_0004ef68)(param_1);
    return iVar2;
  }
  return iVar2;
}



void FUN_0004f3c8(undefined4 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_2 * 2 + *(int *)(*(int *)(*DAT_0004f4d8 + 0xc) * 4 + DAT_0004f4dc));
  iVar1 = *(int *)(((int)*pcVar2 & 0xffU) * 4 + *(int *)(*DAT_0004f4d8 + 0x6c)) +
          ((int)pcVar2[1] & 0xffU) * 0xc;
  if (iVar1 != 0) {
                    // WARNING: Could not recover jumptable at 0x0004f404. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_0004f4e4)(iVar1,param_1,DAT_0004f4e0 + 0x28);
    return;
  }
  return;
}



void FUN_0004f40c(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = DAT_0004f4e8;
  iVar3 = 5;
  do {
    iVar2 = (*pcVar1)();
    FUN_0004f3c8((int)DAT_0004f4d2 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18) +
                 (int)(char)((char)iVar3 * '\f'),iVar3);
    iVar2 = (*pcVar1)();
    FUN_0004f3c8((int)DAT_0004f4d2 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18) +
                 (int)(char)((char)(iVar3 + -1) * '\f'),iVar3 + -1);
    iVar2 = (*pcVar1)();
    FUN_0004f3c8((int)DAT_0004f4d2 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18) +
                 (int)(char)((char)(iVar3 + -2) * '\f'),iVar3 + -2);
    iVar3 = iVar3 + -3;
  } while (-1 < iVar3);
  return;
}



void FUN_0004f47e(int param_1)

{
  int **ppiVar1;
  int iVar2;
  undefined4 local_28;
  int iStack36;
  undefined4 uStack32;
  
  ppiVar1 = DAT_0004f4ec;
  if (*DAT_0004f4f0 == '\b') {
    iVar2 = *(int *)((*DAT_0004f4ec)[0x17] + 0x24);
    if (iVar2 == 0) {
      iVar2 = (int)DAT_0004f4d4;
      *(undefined4 *)(param_1 + iVar2) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + iVar2 + 4) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + iVar2 + 8) = *(undefined4 *)(param_1 + 0x10);
      goto LAB_0004f506;
    }
  }
  else {
    iVar2 = *(int *)((*DAT_0004f4ec)[0x17] + 0x14);
    if (iVar2 == 0) {
      iVar2 = (int)DAT_0004f58a;
      *(undefined4 *)(param_1 + iVar2) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + iVar2 + 4) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + iVar2 + 8) = *(undefined4 *)(param_1 + 0x10);
      goto LAB_0004f506;
    }
  }
  (*DAT_0004f4e4)(iVar2,DAT_0004f4d4 + param_1,DAT_0004f4e0 + 0x28);
LAB_0004f506:
  iVar2 = (*DAT_0004f590)();
  if ((iVar2 == 0) || (((int)DAT_0004f58c & *(uint *)(param_1 + ((int)DAT_0004f58c - 0x3cU))) != 0))
  {
    iVar2 = 0;
  }
  else {
    iVar2 = (*DAT_0004f594)();
    iVar2 = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_0004f58e) &
                     0xffU) * 4 + DAT_0004f598);
  }
  local_28 = *(undefined4 *)(param_1 + 0x14);
  uStack32 = *(undefined4 *)(param_1 + 0x1c);
  iStack36 = *(int *)(param_1 + 0x18) + iVar2 + DAT_0004f59c;
  (*DAT_0004f5a0)();
  (*DAT_0004f5a4)(DAT_0004f58a + param_1);
  (*DAT_0004f5a8)(&local_28);
  (*DAT_0004f5ac)(*(undefined4 *)(**ppiVar1 + (*ppiVar1)[5]));
  (*DAT_0004f5b0)();
  return;
}



int FUN_0004f5b4(int param_1)

{
  char cVar1;
  short sVar2;
  code *pcVar3;
  code *pcVar4;
  short *psVar5;
  code *pcVar6;
  code *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int local_78;
  int iStack116;
  undefined4 uStack112;
  undefined4 uStack108;
  undefined4 local_68;
  undefined4 uStack100;
  undefined4 uStack96;
  undefined4 local_5c;
  undefined4 uStack88;
  int iStack84;
  undefined auStack80 [12];
  undefined4 local_44;
  undefined4 uStack64;
  uint uStack60;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack44;
  undefined4 uStack40;
  undefined4 uStack36;
  
  pcVar4 = DAT_0004f6c4;
  pcVar3 = DAT_0004f6c0;
  iVar8 = (int)DAT_0004f6a8;
  iStack116 = param_1 + 8;
  local_78 = *DAT_0004f6bc;
  if ((*(uint *)(param_1 + iVar8) & 8) == 0) {
    if ((DAT_0004f6c8 & *(uint *)(param_1 + DAT_0004f6aa)) != 0) {
      *(uint *)(param_1 + DAT_0004f6aa) = *(uint *)(param_1 + DAT_0004f6aa) & DAT_0004f6cc;
      iVar8 = (*pcVar4)();
      if (((int)DAT_0004f6ac &
          *(uint *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x18) + (int)DAT_0004f6ae)) != 0) {
        (*DAT_0004f6d0)((int)*(short *)(param_1 + DAT_0004f6b0));
        pcVar4 = DAT_0004f6d4;
        iVar8 = (int)DAT_0004f6b2;
        iVar10 = (int)DAT_0004f6b4;
        *(undefined2 *)(param_1 + iVar8) = 0;
        *(undefined2 *)(param_1 + iVar8 + 2) = 0;
        (*pcVar4)(iVar10 + param_1,&uStack112);
        local_5c = 0;
        uStack88 = 0;
        iStack84 = (int)DAT_0004f6b6;
        local_68 = uStack112;
        uStack100 = uStack108;
        uStack96 = 0;
        (*DAT_0004f6d8)(auStack80);
        (*DAT_0004f6dc)(param_1,auStack80,&local_68,(int)DAT_0004f6b8);
        iVar8 = (*pcVar3)(0x16);
        return iVar8;
      }
      uVar9 = (*DAT_0004f7f0)((int)*(short *)(param_1 + DAT_0004f7e0));
      iVar8 = (int)DAT_0004f7e2;
      *(undefined2 *)(param_1 + iVar8) = 0;
      iVar8 = iVar8 + -0x12;
      *(uint *)(param_1 + iVar8) = *(uint *)(param_1 + iVar8) | 0x10;
      iVar10 = (*pcVar4)();
      pcVar6 = DAT_0004f804;
      iVar8 = DAT_0004f7fc;
      psVar5 = DAT_0004f7f4;
      sVar2 = (short)uVar9;
      if (*(char *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x10) + 0x17) == '\0') {
        *DAT_0004f7f4 = *DAT_0004f7f4 - sVar2;
        *(short *)(param_1 + DAT_0004f7e4) = *(short *)(param_1 + DAT_0004f7e4) + sVar2;
        if (*psVar5 < 1) {
          (*pcVar3)(0xf);
          local_44 = 0;
          uStack64 = 0;
          uStack60 = (uint)DAT_0004f7e6;
          (*DAT_0004f7f8)(param_1,(int)*(short *)(param_1 + DAT_0004f7e4),&local_44,1);
          iVar8 = (int)DAT_0004f7e4;
          *(undefined2 *)(param_1 + iVar8) = 0;
          iVar8 = iVar8 + -0x10;
          *(uint *)(param_1 + iVar8) = *(uint *)(param_1 + iVar8) & 0xffffffef;
          *(uint *)(param_1 + iVar8) = *(uint *)(param_1 + iVar8) | 8;
          return iVar8;
        }
      }
      else {
        *(short *)(param_1 + DAT_0004f7e4) = *(short *)(param_1 + DAT_0004f7e4) + sVar2;
        *(undefined2 *)(iVar8 + 0x12) = *(undefined2 *)(iVar8 + 0x10);
        *(short *)(iVar8 + 0x10) = (short)PTR_LAB_0004f800;
        (*pcVar6)(0x14,0x1b);
        (*DAT_0004f80c)();
        *(undefined2 *)(iVar8 + 0x10) = *(undefined2 *)(iVar8 + 0x12);
      }
      iVar8 = (*pcVar4)();
      iVar8 = *(int *)(*(int *)(iVar8 + 0x10) + 4);
      *(int *)(iVar8 + DAT_0004f7e8) = *(int *)(iVar8 + DAT_0004f7e8) + (int)sVar2;
      (*DAT_0004f810)(param_1,uVar9,iStack116,0);
      cVar1 = *(char *)(param_1 + DAT_0004f7ea);
      if (cVar1 == '\x01') {
        *(uint *)(param_1 + DAT_0004f7ec) = *(uint *)(param_1 + DAT_0004f7ec) | 8;
        (*pcVar3)(0xd);
        uVar9 = DAT_0004f814;
      }
      else if (cVar1 == '\x02') {
        *(uint *)(param_1 + DAT_0004f7ec) = *(uint *)(param_1 + DAT_0004f7ec) | 8;
        (*pcVar3)(0xd);
        uVar9 = DAT_0004f818;
      }
      else if (cVar1 == '\x03') {
        *(uint *)(param_1 + DAT_0004f93a) = *(uint *)(param_1 + DAT_0004f93a) | 0x10;
        (*pcVar3)(0xe);
        uVar9 = DAT_0004f948;
      }
      pcVar6 = DAT_0004f94c;
      uStack44 = (*DAT_0004f94c)(uVar9,*(undefined4 *)(param_1 + DAT_0004f93c));
      uStack40 = (*pcVar6)(uVar9,*(undefined4 *)(param_1 + DAT_0004f93e));
      uStack36 = (*pcVar6)(uVar9,*(undefined4 *)(param_1 + DAT_0004f940));
      pcVar7 = DAT_0004f950;
      local_38 = (*DAT_0004f950)(&local_78,&local_78,*(undefined4 *)(param_1 + DAT_0004f93c));
      local_34 = (*pcVar7)(&local_78,&local_78,*(undefined4 *)(param_1 + DAT_0004f93e));
      local_30 = (*pcVar7)(&local_78,&local_78,*(undefined4 *)(param_1 + DAT_0004f940));
      local_38 = (*pcVar6)(uVar9,local_38);
      local_34 = (*pcVar6)(uVar9,local_34);
      local_30 = (*pcVar6)(uVar9,local_30);
      iVar8 = (*pcVar4)();
      if (*(char *)((int)DAT_0004f942 + *(int *)(*(int *)(iVar8 + 0x10) + 4)) == '\b') {
        iVar8 = (*pcVar4)();
        cVar1 = *(char *)((int)DAT_0004f944 + *(int *)(*(int *)(iVar8 + 0x10) + 4));
        if ((cVar1 == '\0') ||
           (((((cVar1 != '\x01' && (cVar1 != '\x02')) && (cVar1 != '\x03')) &&
             ((cVar1 != '\x04' && (cVar1 != '\x05')))) &&
            ((cVar1 != '\x06' && ((cVar1 != '\a' && (cVar1 == '\b')))))))) {
          (*DAT_0004f954)(0,&local_38);
        }
      }
      else {
        (*DAT_0004fa28)(0,&local_38);
      }
      (*DAT_0004fa2c)(param_1);
      iVar8 = local_78;
      (*DAT_0004fa30)(local_78 + 0x78,uStack44);
      (*DAT_0004fa34)(iVar8 + 0x78,uStack40);
      (*DAT_0004fa38)(iVar8 + 0x78,uStack36);
    }
    iVar10 = (*pcVar4)();
    iVar8 = (int)DAT_0004fa1e;
    uStack60 = (uint)DAT_0004fa1c;
    if ((uStack60 & *(uint *)(*(int *)(*(int *)(iVar10 + 0x10) + 4) + iVar8)) != 0) {
      if ((*(uint *)(param_1 + DAT_0004fa20) & 0x10) == 0) {
        iVar10 = (*pcVar4)();
        iVar8 = (int)DAT_0004fa26;
        if (((int)DAT_0004fa24 & *(uint *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x18) + iVar8)) != 0)
        {
          iVar8 = (int)DAT_0004fa22;
          *(undefined2 *)(param_1 + iVar8) = 0;
        }
      }
      else {
        iVar8 = (int)DAT_0004fa22;
        if (-1 < *(short *)(param_1 + iVar8)) {
          *(uint *)(param_1 + DAT_0004fa20) = *(uint *)(param_1 + DAT_0004fa20) & 0xffffffef;
          local_44 = 0;
          uStack64 = 0;
          (*DAT_0004fa3c)(param_1,(int)*(short *)(param_1 + DAT_0004fa22),&local_44,1);
          psVar5 = DAT_0004fa40;
          iVar8 = (int)DAT_0004fa22;
          *(undefined2 *)(param_1 + iVar8) = 0;
          if (*psVar5 < 1) {
            iVar8 = (*pcVar3)(0xf);
          }
        }
      }
    }
  }
  return iVar8;
}



void FUN_0004fa44(int param_1)

{
  int iVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 local_38;
  undefined4 local_2c;
  undefined4 uStack40;
  undefined4 uStack36;
  
  pcVar3 = DAT_0004fba4;
  pcVar2 = DAT_0004fba0;
  iVar1 = DAT_0004fb9c;
  iVar5 = DAT_0004fb98;
  uVar6 = DAT_0004fb94;
  iVar9 = *DAT_0004fb90;
  iVar4 = (*DAT_0004fba8)();
  if (iVar4 == 0) {
    iVar4 = (*pcVar3)();
    uStack40 = (*pcVar2)(-*(int *)(param_1 + DAT_0004fcdc + 0xc),
                         *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0004fcdc));
    iVar4 = (*pcVar3)();
    local_2c = (*pcVar2)(-*(int *)(param_1 + DAT_0004fcde + 0x10),
                         *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0004fcde));
    iVar4 = (*pcVar3)();
    uStack36 = (*pcVar2)(-*(int *)(param_1 + DAT_0004fcdc + 0xc),
                         *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0004fcdc));
    iVar4 = (*pcVar3)();
    local_38 = (*pcVar2)(uVar6,*(undefined4 *)
                                (*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0004fcde));
    iVar4 = (*pcVar3)();
    (*pcVar2)(iVar5,*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0004fcdc));
    iVar5 = (*pcVar3)();
    uVar6 = (*pcVar2)(iVar1,-*(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0004fcdc));
  }
  else {
    iVar4 = (*pcVar3)();
    uVar7 = *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0004fb88);
    iVar8 = *(int *)(param_1 + DAT_0004fb88 + 0xc);
    iVar4 = (*pcVar3)();
    uStack40 = (*DAT_0004fbb0)(*(undefined4 *)
                                ((short)((ushort)((uint)*(undefined4 *)
                                                         (*(int *)(*(int *)(iVar4 + 0x10) + 4) +
                                                         (int)DAT_0004fb8a) >> 0x10) & DAT_0004fb8c)
                                 * 4 + DAT_0004fbac),-iVar8,uVar7);
    iVar4 = (*pcVar3)();
    local_2c = (*pcVar2)(-*(int *)(param_1 + DAT_0004fb8e + 0x10),
                         *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0004fb8e));
    iVar4 = (*pcVar3)();
    uVar7 = *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0004fb88);
    iVar8 = *(int *)(param_1 + DAT_0004fb88 + 0xc);
    iVar4 = (*pcVar3)();
    uStack36 = (*DAT_0004fbb0)(*(undefined4 *)
                                ((short)((ushort)((uint)*(undefined4 *)
                                                         (*(int *)(*(int *)(iVar4 + 0x10) + 4) +
                                                         (int)DAT_0004fb8a) >> 0x10) & DAT_0004fb8c)
                                 * 4 + DAT_0004fbac),-iVar8,uVar7);
    iVar4 = (*pcVar3)();
    local_38 = (*pcVar2)(uVar6,*(undefined4 *)
                                (*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0004fb8e));
    iVar4 = (*pcVar3)();
    uVar6 = *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0004fb88);
    iVar4 = (*pcVar3)();
    (*DAT_0004fbb0)(*(undefined4 *)
                     ((short)((ushort)((uint)*(undefined4 *)
                                              (*(int *)(*(int *)(iVar4 + 0x10) + 4) +
                                              (int)DAT_0004fb8a) >> 0x10) & DAT_0004fb8c) * 4 +
                     DAT_0004fbac),-iVar5,uVar6);
    iVar5 = (*pcVar3)();
    iVar4 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0004fb88);
    iVar5 = (*pcVar3)();
    uVar6 = (*DAT_0004fbb0)(*(undefined4 *)
                             ((short)((ushort)((uint)*(undefined4 *)
                                                      (*(int *)(*(int *)(iVar5 + 0x10) + 4) +
                                                      (int)DAT_0004fb8a) >> 0x10) & DAT_0004fb8c) *
                              4 + DAT_0004fbac),-iVar1,-iVar4);
  }
  if ((*(uint *)(param_1 + DAT_0004fce0) & 8) == 0) {
    *(undefined4 *)(param_1 + 0x74) = local_38;
    *(undefined4 *)(param_1 + 0x7c) = uVar6;
  }
  (*DAT_0004fce4)(iVar9 + 0x78,local_2c);
  (*DAT_0004fce8)(iVar9 + 0x78,uStack40);
  (*DAT_0004fcec)(iVar9 + 0x78,uStack36);
  return;
}



void FUN_0004fcfc(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = *DAT_0004fe18;
  sVar1 = *(short *)(param_1 + DAT_0004fe10);
  uVar6 = 0;
  if (*(int *)(iVar5 + 0x58) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)*(short *)(*(int *)(iVar5 + 0x58) + 4);
  }
  if (iVar2 + -1 <= (int)*(short *)(iVar5 + 0x3e)) {
    iVar2 = *(int *)(*(int *)(iVar5 + 0x1c) * 4 + *(int *)(iVar5 + 0xc) * 0x14 + param_2);
    iVar3 = (int)DAT_0004fe12;
    sVar4 = *(short *)(param_1 + iVar3) + 1;
    *(short *)(param_1 + iVar3) = sVar4;
    sVar4 = (short)*(char *)(iVar2 + sVar4);
    *(short *)(param_1 + iVar3 + -2) = sVar4;
    if (sVar4 < 0) {
      *(undefined2 *)(param_1 + DAT_0004fe12) = 0;
      iVar2 = (int)DAT_0004fe10;
      *(short *)(param_1 + iVar2) =
           (short)*(char *)((int)*(short *)(DAT_0004fe12 + param_1) +
                           *(int *)(*(int *)(iVar5 + 0x1c) * 4 +
                                   *(int *)(iVar5 + 0xc) * 0x14 + param_2));
      if (*(short *)(param_1 + iVar2) != sVar1) {
        uVar6 = 9;
      }
    }
    else if (*(short *)(param_1 + DAT_0004fe10) != sVar1) {
      uVar6 = 9;
    }
                    // WARNING: Could not recover jumptable at 0x0004fd96. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_0004fe1c)((int)*(short *)(param_1 + DAT_0004fe10),uVar6);
    return;
  }
  return;
}



uint FUN_0004fda0(int param_1)

{
  short sVar1;
  code *pcVar2;
  char cVar4;
  int iVar3;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  short sVar9;
  int iVar10;
  
  iVar3 = DAT_0004fe20;
  pcVar2 = DAT_0004fe1c;
  iVar10 = *DAT_0004fe18;
  uVar5 = *(uint *)(param_1 + DAT_0004fe14) & 0x1f;
  uVar7 = *(uint *)(param_1 + DAT_0004fe14) & 0x20;
  if (*(char *)(DAT_0004fe20 + DAT_0004fe16) == '\b') {
    if ((*(uint *)(param_1 + DAT_0004fe14) & 1) == 0) {
      if ((*(uint *)(param_1 + DAT_0004fe14) & 0x18) != 0) {
        iVar3 = (int)DAT_0004fe10;
        *(undefined2 *)(param_1 + iVar3) = 3;
        (*DAT_0004fe1c)((int)*(short *)(param_1 + iVar3),0);
      }
    }
    else {
      iVar3 = (int)DAT_0004fe10;
      *(undefined2 *)(param_1 + iVar3) = 1;
      (*pcVar2)((int)*(short *)(param_1 + iVar3),9);
    }
    pcVar2 = DAT_0004ff00;
    if (*(int *)(iVar10 + 0x58) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)*(short *)(*(int *)(iVar10 + 0x58) + 4);
    }
    if (iVar3 + -1 <= (int)*(short *)(iVar10 + 0x3e)) {
      iVar3 = (int)DAT_0004fef8;
      *(undefined2 *)(param_1 + iVar3) = 0;
      (*pcVar2)((int)*(short *)(param_1 + iVar3),9);
    }
LAB_0004fe6c:
                    // WARNING: Could not recover jumptable at 0x0004fe7a. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar5 = (*DAT_0004ff04)();
    return uVar5;
  }
  if ((*(uint *)(param_1 + DAT_0004fefa) & 0x40) != 0) {
    if (*(int *)(iVar10 + 0x58) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)*(short *)(*(int *)(iVar10 + 0x58) + 4);
    }
    if (iVar3 + -1 <= (int)*(short *)(iVar10 + 0x3e)) {
      iVar3 = (int)DAT_0004fef8;
      *(undefined2 *)(param_1 + iVar3) = 2;
      (*DAT_0004ff00)((int)*(short *)(param_1 + iVar3),0);
    }
    goto LAB_0004fe6c;
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + DAT_0004fefa) = *(uint *)(param_1 + DAT_0004fefa) & 0xfffffffe;
  }
  else {
    *(uint *)(param_1 + DAT_0004fefa) = *(uint *)(param_1 + DAT_0004fefa) | 1;
  }
  if ((*(uint *)(param_1 + DAT_0004fefc) & 2) == 0) {
    if ((*(uint *)(param_1 + DAT_0004fefc) & 4) == 0) {
      if ((*(uint *)(param_1 + DAT_0004fefc) & 1) != 0) {
        uVar8 = 9;
        if (uVar7 == 0) {
          *(undefined2 *)(param_1 + DAT_0004fef8) = 10;
        }
        else {
          *(undefined2 *)(param_1 + DAT_0004fef8) = 0xb;
        }
LAB_0004ff54:
                    // WARNING: Could not recover jumptable at 0x0004ff66. Too many branches
                    // WARNING: Treating indirect jump as call
        uVar5 = (*DAT_00050004)((int)*(short *)(param_1 + DAT_0004fff0),uVar8);
        return uVar5;
      }
      if ((*(uint *)(param_1 + DAT_0004fefc) & 0x10) != 0) {
        if (uVar7 == 0) {
          *(undefined2 *)(param_1 + DAT_0004fef8) = 0xe;
        }
        else {
          *(undefined2 *)(param_1 + DAT_0004fff0) = 0xf;
        }
        (*DAT_00050000)(iVar10 + 0x78,*(int *)(param_1 + DAT_0004fff2) * -2);
        *(undefined2 *)(param_1 + DAT_0004fff4) = 0;
        uVar8 = 0;
        goto LAB_0004ff54;
      }
      if ((*(uint *)(param_1 + DAT_0004fff6) & 8) != 0) {
        if (uVar7 == 0) {
          *(undefined2 *)(param_1 + DAT_0004fff0) = 0xc;
        }
        else {
          *(undefined2 *)(param_1 + DAT_0004fff0) = 0xd;
        }
        (*DAT_00050000)(iVar10 + 0x78,-*(int *)(param_1 + DAT_0004fff2));
        uVar8 = 0;
        *(undefined2 *)(param_1 + DAT_0004fff4) = 0;
        goto LAB_0004ff54;
      }
      goto LAB_0004ff6a;
    }
    iVar10 = (int)DAT_0004fefe;
    *(undefined2 *)(param_1 + iVar10) = 0xffff;
    iVar10 = iVar10 + -10;
    uVar6 = *(uint *)(param_1 + iVar10) | 4;
  }
  else {
    iVar10 = (int)DAT_0004fefe;
    *(undefined2 *)(param_1 + iVar10) = 0xffff;
    iVar10 = iVar10 + -10;
    uVar6 = *(uint *)(param_1 + iVar10) | 2;
  }
  *(uint *)(param_1 + iVar10) = uVar6;
LAB_0004ff6a:
  pcVar2 = DAT_00050004;
  if ((*(uint *)(param_1 + DAT_0004fff8) & 2) == 0) {
    if ((*(uint *)(param_1 + DAT_0004fff8) & 4) == 0) {
      if (uVar5 != 0) {
        return uVar5;
      }
      sVar1 = *(short *)(iVar3 + DAT_0004fffa);
      sVar9 = *(short *)(iVar3 + DAT_0004fffc) >> 2;
      if (uVar7 == 0) {
        uVar8 = DAT_00050010;
        if (sVar9 <= sVar1) {
          uVar8 = DAT_0005000c;
        }
        FUN_0004fcfc(param_1,uVar8);
      }
      else {
        uVar8 = DAT_00050120;
        if (sVar9 <= sVar1) {
          uVar8 = DAT_00050014;
        }
        FUN_0004fcfc(param_1,uVar8);
      }
      (*DAT_00050124)();
      pcVar2 = DAT_0004fcf0;
      if (*(int *)(*DAT_0004fcf4 + 0xc) == 8) {
        if ((*(uint *)(param_1 + DAT_0004fce0) & 1) == 0) {
          cVar4 = (*DAT_0004fcf8)(0x1f);
          uVar5 = (uint)cVar4;
          if ((int)uVar5 < 0) {
            uVar5 = (*pcVar2)(0x1f);
            return uVar5;
          }
        }
        else {
          cVar4 = (*DAT_0004fcf8)(0x1c);
          uVar5 = (uint)cVar4;
          if ((int)uVar5 < 0) {
            uVar5 = (*pcVar2)(0x1c);
            return uVar5;
          }
        }
      }
      else {
        uVar5 = (uint)*(short *)(param_1 + DAT_0004fce2);
        if (((((uVar5 == 0) || (uVar5 == 1)) || (uVar5 == 5)) || (uVar5 == 6)) &&
           (uVar5 = (uint)*(short *)(*DAT_0004fcf4 + 0x3e), uVar5 == 0xc)) {
          uVar5 = (*DAT_0004fcf0)(0xb);
        }
      }
      return uVar5;
    }
    iVar3 = (int)DAT_0004fff0;
    *(undefined2 *)(param_1 + iVar3) = 0x11;
    (*pcVar2)((int)*(short *)(param_1 + iVar3),9);
    iVar3 = (int)DAT_0004fff4;
    uVar5 = 0xfffffffb;
    *(undefined2 *)(param_1 + iVar3) = 0xffff;
  }
  else {
    *(undefined2 *)(param_1 + DAT_0004fff0) = 0x10;
    (*DAT_00050008)(0x12);
    (*DAT_00050004)((int)*(short *)(param_1 + DAT_0004fff0),9);
    iVar3 = (int)DAT_0004fff4;
    *(undefined2 *)(param_1 + iVar3) = 0xffff;
    uVar5 = 0xfffffffd;
  }
  uVar7 = iVar3 - 10;
  *(uint *)(param_1 + uVar7) = *(uint *)(param_1 + uVar7) & uVar5;
  return uVar7;
}



void FUN_00050046(void)

{
  short sVar1;
  short *psVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar3 = DAT_0005012c;
  psVar2 = DAT_00050128;
  if (*(int *)(*DAT_00050130 + 0xc) != 8) {
    iVar4 = (*DAT_00050134)();
    if (iVar4 == 0) {
      sVar1 = *psVar2;
      uVar5 = *puVar3;
    }
    else {
      iVar4 = (*DAT_00050138)();
      uVar5 = *puVar3;
      sVar1 = psVar2[(int)*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0005011e) & 0xff
                    ];
    }
                    // WARNING: Could not recover jumptable at 0x000500d2. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_00050140)(uVar5,(int)sVar1,10);
    return;
  }
  iVar4 = (*DAT_00050134)();
  if (iVar4 != 0) {
    iVar4 = (*DAT_00050138)();
                    // WARNING: Could not recover jumptable at 0x00050088. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_0005013c)(*puVar3,(int)psVar2[((int)*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) +
                                                       (int)DAT_0005011e) & 0xffU) + 8],10);
    return;
  }
                    // WARNING: Could not recover jumptable at 0x0005009a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0005013c)(*puVar3,(int)psVar2[8],10);
  return;
}



void FUN_000500de(void)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = (*DAT_00050134)();
  psVar2 = DAT_00050144;
  if (iVar3 == 0) {
    sVar1 = *DAT_00050144;
    uVar4 = *DAT_00050148;
  }
  else {
    iVar3 = (*DAT_00050138)();
    uVar4 = *DAT_00050148;
    sVar1 = psVar2[(int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0005011e) & 0xff];
  }
                    // WARNING: Could not recover jumptable at 0x0005011a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00050140)(uVar4,(int)sVar1,0xf);
  return;
}



int FUN_00050ba0(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = DAT_00050ca0;
  iVar2 = DAT_00050c9c;
  sVar1 = *(short *)(DAT_00050ca0 + DAT_00050c96);
  if ((((sVar1 != 0x39) && (sVar1 != 0x3a)) && (sVar1 != 0x3b)) && (sVar1 != 0x3c)) {
    if (sVar1 == 0x3d) {
      iVar4 = (*DAT_00050ca4)();
      iVar3 = *(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_00050c98) * 0xc0000;
      iVar4 = DAT_00050c98 + -0x28;
    }
    else {
      if (sVar1 != 0x3e) {
        if (sVar1 != 0x3f) {
          return param_2;
        }
        if (*(byte *)(param_1 + 0x60) < 0xb) {
          return param_2;
        }
        iVar5 = (*DAT_00050cb4)((int)(short)param_2 << 0x10,DAT_00050cb0);
        return (int)(short)((uint)(iVar5 + iVar2) >> 0x10);
      }
      iVar3 = (*DAT_00050ca4)();
      iVar4 = (int)DAT_00050c9a;
      iVar3 = (int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_00050c98) << 0x14;
    }
    iVar5 = (*DAT_00050ca8)((int)*(short *)(iVar5 + iVar4) << 0x10,iVar3);
    (*DAT_00050cac)((int)(short)((uint)(iVar5 + iVar2) >> 0x10));
  }
  return param_2;
}



void FUN_00050dc8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_1c;
  undefined4 uStack24;
  undefined4 uStack20;
  undefined4 uStack16;
  undefined4 uStack12;
  
  (*DAT_00050efc)(*(undefined4 *)(param_1 + 0x68),param_2,param_3,1,*(undefined4 *)(param_1 + 0x2c),
                  *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),(int)DAT_00050ef0)
  ;
  *(uint *)(*(int *)(param_1 + 0x68) + 0x50) =
       *(uint *)(*(int *)(param_1 + 0x68) + 0x50) & DAT_00050f00;
  if ((*(char *)(*(int *)(param_1 + 0x68) + 0x60) != '\0') &&
     (((int)DAT_00050ef2 & *(uint *)(*(int *)(param_1 + 0x68) + 0x50)) == 0)) {
    if (-1 < *(short *)(param_1 + DAT_00050ef6)) {
      (*DAT_00050f1c)(param_1,*(undefined4 *)(*DAT_00050f18 + 0xc),
                      *(undefined4 *)(*(short *)(param_1 + DAT_00050ef6) * 4 + DAT_00050f14),
                      param_1 + 0x14,(int)DAT_00050ef2,0,0xf,0);
    }
    if (param_1 != 0) {
      *(uint *)(param_1 + -4) = *(uint *)(param_1 + -4) | 1;
    }
    return;
  }
  (*DAT_00050f04)(param_1 + 0x2c,&uStack16);
  local_1c = uStack16;
  uStack24 = uStack12;
  uStack20 = (*DAT_00050f08)();
  (*DAT_00050f0c)(param_1,param_1 + 0x14,&local_1c,(int)DAT_00050ef4);
  *(undefined *)(param_1 + 100) = 2;
  *(undefined4 *)(param_1 + 0x58) = 10;
  (*DAT_00050f10)(0x16);
  return;
}



undefined4 FUN_00050ea2(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (*DAT_00050f20)();
  cVar1 = *(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_00050ef8);
  iVar2 = (*DAT_00050f24)();
  iVar2 = (*DAT_00050f28)(iVar2 << 0x10,(int)cVar1 << 0x10);
  uVar3 = FUN_00050ba0(*(undefined4 *)(param_1 + 0x68),
                       (int)(short)((uint)(iVar2 + DAT_00050f2c) >> 0x10));
  uVar3 = (*DAT_00050f30)(*(undefined4 *)(param_1 + 0x68),uVar3,0);
  return uVar3;
}



int FUN_000516d6(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_000517a8;
  iVar2 = (int)*DAT_000517a0;
  if (iVar2 != 0x39) {
    if (iVar2 == 0x3b) {
      *(undefined4 *)(param_1 + 0x10) = DAT_000517a4;
      return 0x3b;
    }
    if (iVar2 == 0x3f) {
      *(undefined4 *)(param_1 + 0x10) = DAT_000517ac;
      return 0x3f;
    }
    if (iVar2 == 0x40) {
      *(int *)(param_1 + 0x10) = DAT_000517a8;
      return iVar1;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = DAT_000517b0;
  return iVar2;
}



undefined4 FUN_000524e4(short param_1,char param_2)

{
  int iVar1;
  
  iVar1 = (*DAT_00052624)();
  if (((int)*(short *)(iVar1 + 4) == ((int)param_2 & 0xffU)) &&
     (iVar1 = (*DAT_00052624)(), (int)*(short *)(iVar1 + 8) == ((int)param_1 & 0xffffU))) {
    return 1;
  }
  return 0;
}



void FUN_00052eb8(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  pcVar1 = DAT_00053068;
  iVar2 = (*DAT_00053068)();
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_00053060)
  ;
  iVar2 = (*pcVar1)();
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_00053062)
  ;
  iVar2 = (*pcVar1)();
  *(int *)(param_1 + 0x5c) =
       *(int *)(param_1 + 0x5c) + *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_00053064)
  ;
  pcVar1 = DAT_0005306c;
  if (*(int *)(param_1 + DAT_00053066) == 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x3c);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x44);
    iVar2 = (*pcVar1)(*(undefined4 *)(param_1 + 0x48),0);
    iVar3 = (*pcVar1)(*(undefined4 *)(param_1 + 0x4c),0);
    iVar4 = (*pcVar1)(*(undefined4 *)(param_1 + 0x50),0);
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) - iVar2;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - iVar3;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - iVar4;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x48);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x4c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x2c);
  iVar5 = *(int *)(*(int *)(param_1 + 100) + 4);
  iVar3 = *(int *)(param_1 + 0x58);
  iVar6 = *(int *)(*(int *)(param_1 + 100) + 8);
  iVar4 = *(int *)(param_1 + 0x5c);
  iVar2 = (*pcVar1)(**(int **)(param_1 + 100) - *(int *)(param_1 + 0x54),
                    *(undefined4 *)(param_1 + 0x68));
  iVar3 = (*pcVar1)(iVar5 - iVar3,*(undefined4 *)(param_1 + 0x68));
  iVar4 = (*pcVar1)(iVar6 - iVar4,*(undefined4 *)(param_1 + 0x68));
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x54) + iVar2;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x58) + iVar3;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x5c) + iVar4;
  return;
}



void FUN_00053070(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x34);
  iVar4 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x38);
  iVar5 = (int)DAT_0005315c;
  iVar1 = (*DAT_00053160)();
  (*DAT_00053164)((int)DAT_0005315e + *(int *)(*(int *)(iVar1 + 0x10) + 0x18),
                  (int)*(short *)(param_1 + 0x70),param_1 + 0x24,2,iVar2,iVar3,iVar4,iVar5);
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_00053ace(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Could not reconcile some variable overlaps

void FUN_00053da8(int param_1,int *param_2,int *param_3,int param_4)

{
  short sVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined auStack40 [4];
  undefined4 uStack36;
  int local_20;
  int iStack28;
  int iStack24;
  
  sVar1 = *(short *)(param_4 + 0xc);
  local_20 = *param_3 - *param_2;
  iStack28 = param_3[1] - param_2[1];
  iStack24 = param_3[2] - param_2[2];
  (*DAT_00053ea8)(&local_20,auStack40);
  uVar3 = (*DAT_00053ec8)(*(undefined4 *)(param_4 + 0x10),
                          *(undefined4 *)((short)(uStack36._0_2_ & DAT_00053ea0) * 4 + DAT_00053ec4)
                         );
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  iVar4 = DAT_00053ecc;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_4 + 0x14);
  uVar3 = (*DAT_00053ec8)(*(undefined4 *)(param_4 + 0x10),
                          *(undefined4 *)((short)(uStack36._0_2_ & DAT_00053ea0) * 4 + iVar4));
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  pcVar2 = DAT_00053ed0;
  iVar5 = (int)sVar1 << 0x10;
  iVar4 = (*DAT_00053ed0)(local_20,iVar5);
  *(int *)(param_1 + 0x14) = iVar4 - (*(int *)(param_1 + 0x20) >> 1) * (int)sVar1;
  iVar4 = (*pcVar2)(iStack28,iVar5);
  *(int *)(param_1 + 0x18) = iVar4 - (*(int *)(param_1 + 0x24) >> 1) * (int)sVar1;
  iVar4 = (*pcVar2)(iStack24,iVar5);
  pcVar2 = DAT_00053ed4;
  *(int *)(param_1 + 0x1c) = iVar4 - (*(int *)(param_1 + 0x28) >> 1) * (int)sVar1;
  iVar4 = (*pcVar2)();
  *(int *)(param_1 + 0x14) =
       *(int *)(param_1 + 0x14) + *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_00053ea2)
  ;
  iVar4 = (*pcVar2)();
  *(int *)(param_1 + 0x18) =
       *(int *)(param_1 + 0x18) + *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_00053ea4)
  ;
  iVar4 = (*pcVar2)();
  *(int *)(param_1 + 0x1c) =
       *(int *)(param_1 + 0x1c) + *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_00053ea6)
  ;
  return;
}



int * FUN_00053ed8(int *param_1,undefined4 param_2,char *param_3)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  
  piVar6 = *(int **)(((int)*param_3 & 0xffU) * 0x10 + *DAT_0005419c + 0xc);
  if (*(short *)(param_3 + 2) == 0) {
    iVar2 = (*DAT_000541a0)();
    piVar3 = (int *)(*DAT_000541a8)(*(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x18),DAT_000541b4,0x4c
                                   );
    *piVar3 = *piVar6;
    piVar3[1] = piVar6[1];
    *(undefined *)(piVar3 + 0xc) = 0;
    iVar2 = (*DAT_000541ac)(piVar3,8);
    piVar3[0xb] = iVar2;
    (*DAT_000541b8)(piVar3[0xb],(int)*(short *)(piVar6[1] + 4),*(undefined4 *)(param_3 + 8));
    uVar4 = (*DAT_000541bc)();
    pcVar1 = DAT_000541c0;
    for (uVar4 = uVar4 & 0xf; uVar4 != 0; uVar4 = uVar4 - 1) {
      (*pcVar1)(piVar3[0xb]);
    }
  }
  else {
    iVar2 = (*DAT_000541a0)();
    piVar3 = (int *)(*DAT_000541a8)(*(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x18),DAT_000541a4,0x4c
                                   );
    *piVar3 = *piVar6;
    piVar3[1] = piVar6[1];
    *(undefined *)(piVar3 + 0xc) = 1;
    iVar2 = (*DAT_000541ac)(piVar3,0x50);
    piVar3[0xb] = iVar2;
    iVar2 = *piVar3;
    if (*(short *)(param_3 + 6) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(iVar2 + ((int)*(short *)(param_3 + 6) & 0xffffU));
    }
    (*DAT_000541b0)(piVar3,piVar3[0xb],0,iVar2,(int)*(short *)(param_3 + 2),uVar5,
                    *(undefined4 *)(iVar2 + ((int)*(short *)(param_3 + 4) & 0xffffU)),0,0);
  }
  piVar3[2] = *param_1;
  piVar3[3] = param_1[1];
  piVar3[4] = param_1[2];
  FUN_00053da8(piVar3,param_1,param_2,param_3);
  *(undefined2 *)((int)piVar3 + 0x32) = *(undefined2 *)(param_3 + 0xe);
  *(undefined2 *)(piVar3 + 0xd) = *(undefined2 *)(param_3 + 0x18);
  *(char *)((int)piVar3 + 0x36) = param_3[0x1a];
  if (*(int *)(param_3 + 0x1c) != 0) {
    (*DAT_000541c8)(*(undefined4 *)(((int)param_3[0x2a] & 0xffU) * 0x10 + *DAT_0005419c + 0xc),
                    *(undefined4 *)(param_3 + 0x1c),param_1,0,0,DAT_000541c4,0,0);
  }
  iVar2 = *(int *)(param_3 + 0x20);
  piVar3[0xe] = iVar2;
  if (iVar2 != 0) {
    *(char *)(piVar3 + 0xf) = param_3[0x2b];
    *(undefined2 *)((int)piVar3 + 0x46) = *(undefined2 *)(param_3 + 0x28);
  }
  iVar2 = *(int *)(param_3 + 0x24);
  piVar3[0x10] = iVar2;
  if (iVar2 != 0) {
    *(char *)(piVar3 + 0x11) = param_3[0x2c];
  }
  *(undefined *)(piVar3 + 0x12) = 0xff;
  return piVar3;
}



void FUN_0005428e(void)

{
  int iVar1;
  int unaff_r13;
  int unaff_r14;
  
  iVar1 = *(int *)(unaff_r13 + 0x20);
  *(int *)(unaff_r14 + 0x38) = iVar1;
  if (iVar1 != 0) {
    *(undefined *)(unaff_r14 + 0x3c) = *(undefined *)(unaff_r13 + 0x2b);
    *(undefined2 *)(unaff_r14 + 0x46) = *(undefined2 *)(unaff_r13 + 0x28);
  }
  iVar1 = *(int *)(unaff_r13 + 0x24);
  *(int *)(unaff_r14 + 0x40) = iVar1;
  if (iVar1 != 0) {
    *(undefined *)(unaff_r14 + 0x44) = *(undefined *)(unaff_r13 + 0x2c);
  }
  if (-1 < *(char *)(unaff_r13 + 0x2d)) {
    *(undefined *)(unaff_r14 + 0x48) = *(undefined *)(unaff_r13 + 0x2d);
  }
  return;
}



void FUN_000542ca(void)

{
  return;
}



void FUN_000542d2(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005447e(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005453b(void)

{
  int in_r0;
  undefined2 unaff_r8;
  int unaff_r10;
  int *unaff_r12;
  
  *(int *)(in_r0 * 2) = in_r0;
  *(undefined2 *)(unaff_r10 + in_r0) = unaff_r8;
  *unaff_r12 = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000547a0(void)

{
  undefined2 in_r0;
  undefined2 uVar1;
  int in_gbr;
  
  *(undefined2 *)(in_gbr + 0x158) = in_r0;
  func_0x000542fe();
  *(undefined2 *)(in_gbr + 0x11a) = *(undefined2 *)(in_gbr + 0x156);
  func_0x00053b04();
  uVar1 = FUN_000542ca();
  *(undefined2 *)(in_gbr + 0x118) = uVar1;
  FUN_00053ace();
  uVar1 = FUN_000542d2();
  *(undefined2 *)(in_gbr + 0x116) = uVar1;
  func_0x00053ad6();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00054887(undefined4 param_1,int param_2)

{
  int in_r0;
  undefined unaff_r11;
  
  *(undefined *)(param_2 + in_r0) = unaff_r11;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00054962(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00054ba0(undefined4 param_1,int param_2)

{
  undefined *in_r0;
  undefined uVar1;
  undefined *unaff_r8;
  undefined4 unaff_r14;
  
  uVar1 = SUB41(in_r0,0);
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *(undefined4 *)(param_2 + -4) = unaff_r14;
  *unaff_r8 = uVar1;
  *(undefined4 *)(param_2 + -8) = unaff_r14;
  *unaff_r8 = uVar1;
  *(undefined4 *)(param_2 + -0xc) = unaff_r14;
  *unaff_r8 = uVar1;
  *(undefined4 *)(param_2 + -0x10) = unaff_r14;
  *unaff_r8 = uVar1;
  *(undefined4 *)(param_2 + -0x14) = unaff_r14;
  *(undefined4 *)(param_2 + -0x18) = unaff_r14;
  *(undefined4 *)(param_2 + -0x1c) = unaff_r14;
  *(undefined4 *)(param_2 + -0x20) = unaff_r14;
  *(undefined4 *)(param_2 + -0x24) = unaff_r14;
  *(undefined4 *)(param_2 + -0x28) = unaff_r14;
  *(undefined4 *)(param_2 + -0x2c) = unaff_r14;
  *(undefined4 *)(param_2 + -0x30) = unaff_r14;
  *(undefined4 *)(param_2 + -0x34) = unaff_r14;
  *(undefined4 *)(param_2 + -0x38) = unaff_r14;
  *(undefined4 *)(param_2 + -0x3c) = unaff_r14;
  *(undefined4 *)(param_2 + -0x40) = unaff_r14;
  *(undefined4 *)(param_2 + -0x44) = unaff_r14;
  *(undefined4 *)(param_2 + -0x48) = unaff_r14;
  *(undefined4 *)(param_2 + -0x4c) = unaff_r14;
  *(undefined4 *)(param_2 + -0x50) = unaff_r14;
  *(undefined4 *)(param_2 + -0x54) = unaff_r14;
  *(undefined4 *)(param_2 + -0x58) = unaff_r14;
  *(undefined4 *)(param_2 + -0x5c) = unaff_r14;
  *(undefined4 *)(param_2 + -0x60) = unaff_r14;
  *(undefined4 *)(param_2 + -100) = unaff_r14;
  *(undefined4 *)(param_2 + -0x68) = unaff_r14;
  *(undefined4 *)(param_2 + -0x6c) = unaff_r14;
  *(undefined4 *)(param_2 + -0x70) = unaff_r14;
  *(undefined4 *)(param_2 + -0x74) = unaff_r14;
  *(undefined4 *)(param_2 + -0x78) = unaff_r14;
  *(undefined4 *)(param_2 + -0x7c) = unaff_r14;
  *(undefined4 *)(param_2 + -0x80) = unaff_r14;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00054bb4(undefined4 param_1,int param_2)

{
  undefined *in_r0;
  undefined uVar1;
  undefined *unaff_r8;
  undefined4 unaff_r14;
  
  uVar1 = SUB41(in_r0,0);
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *in_r0 = uVar1;
  *(undefined4 *)(param_2 + -4) = unaff_r14;
  *unaff_r8 = uVar1;
  *(undefined4 *)(param_2 + -8) = unaff_r14;
  *unaff_r8 = uVar1;
  *(undefined4 *)(param_2 + -0xc) = unaff_r14;
  *unaff_r8 = uVar1;
  *(undefined4 *)(param_2 + -0x10) = unaff_r14;
  *unaff_r8 = uVar1;
  *(undefined4 *)(param_2 + -0x14) = unaff_r14;
  *(undefined4 *)(param_2 + -0x18) = unaff_r14;
  *(undefined4 *)(param_2 + -0x1c) = unaff_r14;
  *(undefined4 *)(param_2 + -0x20) = unaff_r14;
  *(undefined4 *)(param_2 + -0x24) = unaff_r14;
  *(undefined4 *)(param_2 + -0x28) = unaff_r14;
  *(undefined4 *)(param_2 + -0x2c) = unaff_r14;
  *(undefined4 *)(param_2 + -0x30) = unaff_r14;
  *(undefined4 *)(param_2 + -0x34) = unaff_r14;
  *(undefined4 *)(param_2 + -0x38) = unaff_r14;
  *(undefined4 *)(param_2 + -0x3c) = unaff_r14;
  *(undefined4 *)(param_2 + -0x40) = unaff_r14;
  *(undefined4 *)(param_2 + -0x44) = unaff_r14;
  *(undefined4 *)(param_2 + -0x48) = unaff_r14;
  *(undefined4 *)(param_2 + -0x4c) = unaff_r14;
  *(undefined4 *)(param_2 + -0x50) = unaff_r14;
  *(undefined4 *)(param_2 + -0x54) = unaff_r14;
  *(undefined4 *)(param_2 + -0x58) = unaff_r14;
  *(undefined4 *)(param_2 + -0x5c) = unaff_r14;
  *(undefined4 *)(param_2 + -0x60) = unaff_r14;
  *(undefined4 *)(param_2 + -100) = unaff_r14;
  *(undefined4 *)(param_2 + -0x68) = unaff_r14;
  *(undefined4 *)(param_2 + -0x6c) = unaff_r14;
  *(undefined4 *)(param_2 + -0x70) = unaff_r14;
  *(undefined4 *)(param_2 + -0x74) = unaff_r14;
  *(undefined4 *)(param_2 + -0x78) = unaff_r14;
  *(undefined4 *)(param_2 + -0x7c) = unaff_r14;
  *(undefined4 *)(param_2 + -0x80) = unaff_r14;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000551d3(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00055686(undefined4 param_1,int param_2)

{
  undefined2 in_r0;
  int in_r1;
  
  *(undefined2 *)(in_r1 + 8) = in_r0;
  *(undefined2 *)(in_r1 + 8) = in_r0;
  *(undefined2 *)(param_2 + 0xe) = in_r0;
  *(undefined2 *)(param_2 + 0xe) = in_r0;
  *(undefined2 *)(in_r1 + 8) = in_r0;
  *(undefined2 *)(param_2 + 0xe) = in_r0;
  *(undefined2 *)(param_2 + 0xe) = in_r0;
  *(undefined2 *)(param_2 + 0xe) = in_r0;
  *(undefined2 *)(param_2 + 0xe) = in_r0;
  *(undefined2 *)(param_2 + 0xe) = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00055692(undefined4 param_1,int param_2)

{
  undefined2 in_r0;
  
  *(undefined2 *)(param_2 + 0xe) = in_r0;
  *(undefined2 *)(param_2 + 0xe) = in_r0;
  *(undefined2 *)(param_2 + 0xe) = in_r0;
  *(undefined2 *)(param_2 + 0xe) = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000556e3(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00055961(void)

{
  int in_r0;
  undefined4 in_r1;
  
  *(undefined4 *)(in_r0 * 2) = in_r1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00055a95(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00055ae9(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00055ed3(undefined4 param_1,int param_2,int param_3)

{
  int in_r0;
  int iVar1;
  int *piVar2;
  undefined4 in_r2;
  int extraout_r2;
  undefined uVar3;
  int iVar4;
  
  *(undefined4 *)(param_3 + in_r0) = in_r2;
  iVar1 = FUN_000556e3();
  iVar4 = (int)sRam00055fa7;
  piVar2 = (int *)(iVar1 + -2);
  *piVar2 = extraout_r2 + 0x61;
  *(int *)(param_2 + -1) = iVar4 + 2;
  uVar3 = (undefined)(extraout_r2 + 0x61);
  *(undefined *)piVar2 = uVar3;
  *(undefined *)piVar2 = uVar3;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000560c5(undefined4 param_1)

{
  int in_r0;
  int unaff_r10;
  
  *(undefined4 *)(unaff_r10 + in_r0) = param_1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005626d(undefined4 *param_1)

{
  undefined4 unaff_r8;
  
  *param_1 = unaff_r8;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00056392(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005639b(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005640d(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_r0;
  undefined4 in_r1;
  undefined4 *unaff_r12;
  int unaff_r13;
  undefined4 *unaff_r14;
  
  *(undefined4 *)(unaff_r13 + 0x38) = in_r1;
  *unaff_r14 = in_r0;
  *unaff_r12 = in_r0;
  *(undefined4 *)(unaff_r13 + 0x38) = in_r1;
  *unaff_r14 = in_r0;
  *unaff_r12 = in_r0;
  *(undefined4 *)(unaff_r13 + 0x38) = in_r1;
  *unaff_r14 = in_r0;
  *unaff_r12 = in_r0;
  *(undefined4 *)(unaff_r13 + 0x38) = in_r1;
  *unaff_r14 = in_r0;
  *unaff_r12 = in_r0;
  *(undefined4 *)(unaff_r13 + 0x38) = in_r1;
  *unaff_r14 = in_r0;
  *unaff_r12 = in_r0;
  *(undefined4 *)(unaff_r13 + 0x38) = in_r1;
  *unaff_r14 = in_r0;
  *unaff_r12 = in_r0;
  *(undefined4 *)(unaff_r13 + 0x38) = in_r1;
  *unaff_r14 = in_r0;
  *unaff_r12 = in_r0;
  *(undefined4 *)(unaff_r13 + 0x38) = in_r1;
  *unaff_r14 = in_r0;
  *unaff_r12 = in_r0;
  *(undefined4 *)(unaff_r13 + 0x10) = param_3;
  *unaff_r12 = in_r0;
  *(undefined4 *)(unaff_r13 + 0x10) = param_3;
  *unaff_r12 = in_r0;
  *(undefined4 *)(unaff_r13 + 0x10) = param_3;
  *unaff_r12 = in_r0;
  *(undefined4 *)(unaff_r13 + 0x38) = in_r1;
  *unaff_r14 = in_r0;
  *unaff_r12 = in_r0;
  *(undefined4 *)(unaff_r13 + 0x38) = in_r1;
  *unaff_r14 = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00056577(void)

{
  undefined2 in_r0;
  undefined2 *unaff_r12;
  
  *unaff_r12 = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00056a79(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00056dae(void)

{
  undefined4 in_r1;
  int unaff_r14;
  int in_vbr;
  
                    // WARNING: Could not recover jumptable at 0x00056db0. Too many branches
                    // WARNING: Treating indirect jump as call
  *(undefined4 *)(unaff_r14 + 0x38) = in_r1;
  (*(code *)(in_vbr + 0x56db4))();
  return;
}



void FUN_00056dba(void)

{
  undefined4 in_r1;
  int unaff_r14;
  int in_vbr;
  
                    // WARNING: Could not recover jumptable at 0x00056dbc. Too many branches
                    // WARNING: Treating indirect jump as call
  *(undefined4 *)(unaff_r14 + 0x38) = in_r1;
  (*(code *)(in_vbr + 0x56dc0))();
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_00056e09(void)

{
  undefined4 in_r0;
  undefined4 *unaff_r14;
  
  *unaff_r14 = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00056e49(int param_1)

{
  undefined4 in_r0;
  
  *(undefined4 *)(param_1 + 0x1c) = in_r0;
  FUN_0005765b();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_00056e85(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00056e99(int param_1)

{
  int in_r0;
  int *unaff_r14;
  
  *unaff_r14 = in_r0;
  *(int *)(param_1 + 0x1c) = (int)*(char *)(*(int *)(in_r0 + 8) + 5);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00056ec9(void)

{
  undefined4 in_r0;
  undefined4 *unaff_r14;
  
  *unaff_r14 = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00056ee5(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00057011(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_r0;
  undefined *unaff_r11;
  int unaff_r12;
  undefined4 *unaff_r14;
  
  *unaff_r14 = in_r0;
  *unaff_r14 = in_r0;
  *unaff_r14 = in_r0;
  *unaff_r14 = in_r0;
  *unaff_r14 = in_r0;
  *unaff_r11 = (char)in_r0;
  *(undefined4 *)(unaff_r12 + -1) = param_3;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00057021(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_r0;
  undefined *unaff_r11;
  int unaff_r12;
  undefined4 *unaff_r14;
  
  *unaff_r14 = in_r0;
  *unaff_r14 = in_r0;
  *unaff_r11 = (char)in_r0;
  *(undefined4 *)(unaff_r12 + -1) = param_3;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00057031(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000570cf(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000576a7(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_00057889(void)

{
  FUN_000570cf();
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000578c1(void)

{
  short *unaff_r12;
  int in_gbr;
  
  *unaff_r12 = (short)*(char *)(in_gbr + 0x13);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000579d6(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00057aaa(void)

{
  undefined *in_r0;
  
  *in_r0 = (char)in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00057ace(void)

{
  undefined in_r0;
  undefined *in_gbr;
  
  *in_gbr = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00057af2(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00057b04(undefined4 param_1,undefined4 param_2,int param_3)

{
  int in_r0;
  
  *(int *)(param_3 + in_r0) = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00057bca(undefined4 param_1,undefined4 param_2,int param_3)

{
  int in_r0;
  
  *(int *)(param_3 + in_r0) = in_r0;
  if (in_r0 != -0x7c) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00057c12(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00057cf0(int param_1)

{
  FUN_00057746();
  func_0x0005775a();
  func_0x0005776e();
  func_0x00057782();
  func_0x00057796();
  FUN_000577aa();
  func_0x000577be();
  func_0x000577d2();
  func_0x000577e6();
  func_0x000577fa(param_1 + 2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00057d06(int param_1)

{
  FUN_000577aa();
  func_0x000577be();
  func_0x000577d2();
  func_0x000577e6();
  func_0x000577fa(param_1 + 2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00057d6b(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005804a(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005850e(void)

{
  Sleep_Standby();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_000587da(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00058b53(void)

{
  undefined *in_r0;
  undefined in_r2;
  
  *in_r0 = in_r2;
  *in_r0 = in_r2;
  *in_r0 = in_r2;
  *in_r0 = in_r2;
  *in_r0 = in_r2;
  *in_r0 = in_r2;
  *in_r0 = (char)in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000590ab(undefined4 param_1,undefined *param_2)

{
  undefined in_r3;
  
  *param_2 = in_r3;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00059c2e(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00059ceb(void)

{
  FUN_0005a629();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00059f16(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005a0f3(void)

{
  int in_r0;
  
  *(int *)(in_r0 * 2) = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005a18c(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005a2c3(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005a629(void)

{
  int in_r0;
  undefined4 in_r2;
  
  *(int *)(in_r0 + 0xc) = in_r0 + 4;
  *(int *)(in_r0 + 0x1c) = in_r0 + 4;
  *(undefined4 *)(in_r0 + 0x3c) = in_r2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005a64d(void)

{
  int in_r0;
  undefined4 in_r2;
  
  *(int *)(in_r0 + 0xc) = in_r0 + 4;
  *(int *)(in_r0 + 0x1c) = in_r0 + 4;
  *(undefined4 *)(in_r0 + 0x3c) = in_r2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005a92e(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005b0b7(void)

{
  int in_r0;
  undefined4 in_r2;
  
  *(undefined4 *)(in_r0 * 2) = in_r2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005b23f(void)

{
  int in_r0;
  undefined4 in_r2;
  
  *(undefined4 *)(in_r0 * 2) = in_r2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005b2d9(undefined4 param_1,int param_2)

{
  int in_r0;
  undefined4 in_r2;
  
  *(undefined4 *)(param_2 + 0x38) = in_r2;
  *(undefined4 *)(in_r0 * 2) = in_r2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005b40f(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005b59d(void)

{
  int in_r0;
  undefined4 in_r2;
  
  *(undefined4 *)(in_r0 * 2) = in_r2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005b5eb(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005b607(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005b623(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005b65b(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005b677(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005b83d(void)

{
  int in_r0;
  undefined4 in_r2;
  
  *(undefined4 *)(in_r0 * 2) = in_r2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions
// WARNING: Control flow encountered bad instruction data

void FUN_0005b981(void)

{
  undefined4 in_r2;
  int unaff_r14;
  byte in_sr;
  
  if ((in_sr & 1) != 0) {
    *(undefined4 *)(unaff_r14 + 0x3c) = in_r2;
                    // WARNING: Unimplemented instruction - Truncating control flow here
    halt_unimplemented();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions
// WARNING: Control flow encountered bad instruction data

void FUN_0005b9b9(void)

{
  undefined4 in_r2;
  int unaff_r13;
  byte in_sr;
  
  if ((in_sr & 1) != 0) {
    *(undefined4 *)(unaff_r13 + 0x3c) = in_r2;
                    // WARNING: Unimplemented instruction - Truncating control flow here
    halt_unimplemented();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005baa3(void)

{
  int in_r0;
  undefined in_r1;
  
  *(undefined *)(in_r0 * 2) = in_r1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005bbbb(void)

{
  int in_r0;
  undefined in_r1;
  
  *(undefined *)(in_r0 * 2) = in_r1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005c2bf(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005c39f(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005c3d7(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005c4b7(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005c5cf(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005ceab(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005cefd(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005cf05(void)

{
  int in_r0;
  undefined4 in_r1;
  
  *(undefined4 *)(in_r0 * 2) = in_r1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005cf23(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005cf7d(void)

{
  int in_r0;
  undefined4 in_r3;
  undefined4 *in_r7;
  undefined4 in_mach;
  
  *(undefined4 *)(in_r0 + -4) = in_mach;
  *in_r7 = in_r3;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005cf9b(void)

{
  undefined *in_r0;
  undefined4 in_r2;
  
  *(undefined4 *)(*(int *)(in_r0 + 8) + 0x3c) = in_r2;
  *in_r0 = (char)in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_0005cfb9(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int in_r0;
  undefined4 in_r3;
  
  *param_3 = in_r3;
                    // WARNING: Could not recover jumptable at 0x0005cfc1. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(in_r0 + 0x5cfc5))();
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005d011(void)

{
  int in_r0;
  undefined4 in_r2;
  
  *(undefined4 *)(in_r0 * 2) = in_r2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005d02f(void)

{
  int in_r0;
  undefined4 in_r1;
  
  *(undefined4 *)(in_r0 * 2) = in_r1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005d04d(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005d06b(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005d0a7(void)

{
  int in_r0;
  int in_gbr;
  
  *(undefined *)(in_gbr + in_r0) = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005d13d(void)

{
  char cVar1;
  undefined4 in_r2;
  undefined4 in_r3;
  int in_gbr;
  
  cVar1 = *(char *)(in_gbr + 3);
  *(undefined4 *)in_r3 = in_r3;
  *(undefined4 *)(cVar1 * 2) = in_r2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005d15b(void)

{
  undefined4 *in_r0;
  undefined4 in_r2;
  undefined4 in_r3;
  
  *in_r0 = in_r3;
  *(undefined4 *)((int)in_r0 * 2) = in_r2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005d179(void)

{
  undefined4 *in_r0;
  undefined4 in_r2;
  undefined4 in_r3;
  
  *in_r0 = in_r3;
  *(undefined4 *)((int)in_r0 * 2) = in_r2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005d1d1(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005d1ef(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005d20d(void)

{
  int in_r0;
  
  *(int *)(in_r0 * 2) = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005d22b(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_0005d267(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005d291(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_0005d2a3(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_0005d2c1(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_0005d2df(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_0005d31b(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005d39f(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005d3ab(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005d3c3(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005d3db(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_0005d463(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005d4ab(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005d7f9(void)

{
  int in_r0;
  
  *(BADSPACEBASE **)(in_r0 + 0x38) = register0x0000003c;
  FUN_0005e3fd();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005d81d(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005dcff(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005dd43(void)

{
  undefined in_r0;
  int in_gbr;
  
  *(undefined *)(in_gbr + 0xc0) = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005dd5b(void)

{
  FUN_0005e577((int)DAT_0005dd73);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005de0d(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005e3fd(void)

{
  uint uVar1;
  int in_r2;
  uint *unaff_r8;
  uint in_sr;
  
  *unaff_r8 = in_sr;
  uVar1 = *(uint *)(in_r2 + in_sr);
  *unaff_r8 = uVar1;
  *(undefined4 *)((int)unaff_r8 * 2) =
       *(undefined4 *)(in_r2 + (in_sr & 0xfffffffe | (uint)(uVar1 == 0)));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005e47d(void)

{
  undefined4 in_r0;
  undefined4 *unaff_r8;
  
  *unaff_r8 = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005e53f(void)

{
  undefined in_r2;
  int unaff_r11;
  
  *(undefined *)(unaff_r11 + 6) = in_r2;
  *(undefined *)(unaff_r11 + 6) = in_r2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_0005e557(void)

{
  undefined4 in_r0;
  undefined4 *unaff_r8;
  
  *unaff_r8 = in_r0;
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005e577(void)

{
  undefined in_r0;
  undefined *in_r3;
  
  *in_r3 = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined4 FUN_0005e5b7(void)

{
  undefined4 in_r0;
  
  return in_r0;
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_0005e5c3(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0005e617(void)

{
  int in_r0;
  undefined4 in_r1;
  int in_r2;
  
  *(undefined4 *)(*(int *)(in_r2 + in_r0) + -1) = in_r1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0005e619(void)

{
  int in_r0;
  undefined4 in_r1;
  int in_r2;
  
  *(undefined4 *)(*(int *)(in_r2 + in_r0) + -1) = in_r1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005e627(void)

{
  int in_r0;
  undefined4 in_r1;
  
  *(undefined4 *)(in_r0 + -1) = in_r1;
  func_0x0005de33();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005e629(void)

{
  int in_r0;
  undefined4 in_r1;
  
  *(undefined4 *)(in_r0 + -1) = in_r1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005e64b(void)

{
  int in_r0;
  undefined4 in_r1;
  
  *(undefined4 *)(in_r0 + -1) = in_r1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005e66d(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0005e68f(void)

{
  int in_r0;
  int in_gbr;
  
  *(byte *)(in_gbr + in_r0) = *(byte *)(in_gbr + in_r0) & 0xb9;
  *(byte *)(in_gbr + in_r0) = *(byte *)(in_gbr + in_r0) & 0xce;
  *(byte *)(in_gbr + in_r0) = *(byte *)(in_gbr + in_r0) & 0xb9;
  *(byte *)(in_gbr + in_r0) = *(byte *)(in_gbr + in_r0) & 0xda;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0005e6a3(void)

{
  int in_r0;
  int in_gbr;
  
  *(byte *)(in_gbr + in_r0) = *(byte *)(in_gbr + in_r0) & 0xb9;
  *(byte *)(in_gbr + in_r0) = *(byte *)(in_gbr + in_r0) & 0xda;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005e6b1(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005e6b7(void)

{
  int in_r0;
  int unaff_r8;
  undefined4 unaff_r12;
  
  *(undefined4 *)(unaff_r8 + in_r0) = unaff_r12;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005e8a7(void)

{
  undefined4 in_r0;
  
  *(undefined4 *)in_r0 = in_r0;
  func_0x0005d8ad();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


