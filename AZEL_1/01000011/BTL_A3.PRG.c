#include "BTL_A3.PRG.h"



int FUN_000000ac(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short extraout_var;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = DAT_0000011c;
  iVar4 = *(int *)(DAT_0000011c + 0x18);
  iVar6 = (short)((*DAT_00000110 * 2 + *DAT_00000114) * 0x70) + DAT_00000118;
  sVar1 = *(short *)(iVar6 + 0x34);
  iVar5 = *(int *)(DAT_0000011c + 0x1c);
  sVar2 = *(short *)(iVar6 + 0x36);
  iVar6 = (*DAT_00000120)(*(undefined4 *)(DAT_0000011c + 0x20),
                          *(short *)(iVar6 + 0x38) * 0x10000 - *(int *)(iVar6 + 8));
  (*DAT_00000124)(iVar4 * sVar1 + iVar5 * sVar2 + iVar6,*(undefined4 *)(iVar3 + 0x1c));
  return (int)extraout_var;
}



void FUN_00000128(int param_1)

{
  code *pcVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  
  iVar10 = (*DAT_000001c0)();
  pcVar1 = DAT_000001c4;
  *(int *)(*(int *)(iVar10 + 0x10) + 0x1c) = param_1;
  (*pcVar1)();
  (*DAT_000001c8)();
  pcVar1 = DAT_000001cc;
  iVar10 = (int)DAT_000001ba;
  (*DAT_000001cc)(DAT_000001d4,DAT_000001d0,iVar10,0);
  (*pcVar1)(DAT_000001dc,DAT_000001d8,iVar10,0);
  (*pcVar1)(DAT_000001e4,DAT_000001e0,iVar10,0);
  (*DAT_000001ec)(DAT_000001e8);
  (*DAT_000001f4)(DAT_000001f0);
  (*DAT_000001fc)(DAT_000001f8);
  pcVar2 = DAT_0000020c;
  iVar10 = DAT_00000200;
  *(ushort *)(*(int *)(DAT_00000200 + 4) + 0xe) =
       DAT_000001bc | *(ushort *)(*(int *)(DAT_00000200 + 4) + 0xe) & (ushort)PTR_LAB_00000204;
  *(undefined4 *)(iVar10 + 0x14) = 1;
  pcVar1 = DAT_000001c0;
  *(undefined4 *)(*(int *)(iVar10 + 4) + 0x10) = DAT_00000208;
  *(undefined4 *)(iVar10 + 0x14) = 1;
  iVar11 = (*pcVar1)();
  switch(*(undefined2 *)(iVar11 + 6)) {
  case 0:
  case 1:
  case 3:
  case 5:
  case 6:
  case 7:
  case 8:
    puVar13 = DAT_0000022c;
    break;
  case 2:
  case 4:
  case 9:
    puVar13 = DAT_000003ac;
    break;
  default:
    goto switchD_000001b6_caseD_a;
  }
  (*pcVar2)(0,*puVar13);
switchD_000001b6_caseD_a:
  (*pcVar2)(1,DAT_000003b0);
  iVar11 = DAT_000003b8;
  (*DAT_000003bc)(6,DAT_000003b8,DAT_00000388 + DAT_000003b8,DAT_000003b4,(int)DAT_00000386);
  (*DAT_000003bc)(7,DAT_0000038c + iVar11,DAT_0000038a + iVar11,DAT_000003c0,(int)DAT_00000386);
  (*DAT_000003c8)(5,DAT_000003c4);
  uVar6 = DAT_000003cc;
  uVar3 = DAT_0000038e;
  *DAT_000003d0 = DAT_0000038e;
  uVar4 = DAT_00000392;
  *(uint *)(*(int *)(iVar10 + 4) + (int)DAT_00000390) =
       *(uint *)(*(int *)(iVar10 + 4) + (int)DAT_00000390) & uVar6 | (uint)PTR_LAB_000003d4;
  *DAT_000003d8 = uVar4;
  uVar4 = DAT_00000396;
  *(uint *)(*(int *)(iVar10 + 4) + (int)DAT_00000394) =
       uVar6 & *(uint *)(*(int *)(iVar10 + 4) + (int)DAT_00000394) | (uint)PTR_LAB_000003dc;
  uVar5 = DAT_0000039c;
  iVar11 = (int)DAT_00000398;
  *(undefined2 *)(*(int *)(iVar10 + 4) + iVar11) = uVar4;
  *(undefined2 *)(*(int *)(iVar10 + 4) + iVar11 + 2) = DAT_0000039a;
  *(undefined2 *)(*(int *)(iVar10 + 4) + iVar11 + 4) = uVar5;
  *(undefined2 *)(*(int *)(iVar10 + 4) + iVar11 + 6) = uVar5;
  *(undefined4 *)(iVar10 + 0x14) = 1;
  *(undefined2 *)(*(int *)(iVar10 + 4) + iVar11 + 8) = DAT_0000039e;
  *(undefined2 *)(*(int *)(iVar10 + 4) + iVar11 + 10) = uVar3;
  uVar8 = DAT_000003e4;
  *(undefined2 *)(*(int *)(iVar10 + 4) + iVar11 + 0xc) = 3;
  uVar7 = DAT_000003e0;
  *(undefined4 *)(iVar10 + 0x14) = 1;
  pcVar1 = DAT_000003e8;
  *(undefined4 *)(param_1 + 0x3c) = uVar7;
  (*pcVar1)(uVar8);
  iVar12 = (int)DAT_000003a0;
  iVar11 = (int)(short)DAT_000003a2;
  *(ushort *)(*(int *)(iVar10 + 4) + iVar12) =
       *(ushort *)(*(int *)(iVar10 + 4) + iVar12) & (ushort)PTR_LAB_0000f8fe_1_000003ec |
       DAT_000003a2;
  *(undefined4 *)(iVar10 + 0x14) = 1;
  *(ushort *)(*(int *)(iVar10 + 4) + iVar12) =
       *(ushort *)(iVar12 + *(int *)(iVar10 + 4)) & (ushort)PTR_LAB_000003f0 | 3;
  puVar9 = PTR_LAB_0000cffe_1_000003f4;
  *(undefined4 *)(iVar10 + 0x14) = 1;
  *(ushort *)(iVar12 + *(int *)(iVar10 + 4)) =
       *(ushort *)(*(int *)(iVar10 + 4) + iVar12) & (ushort)puVar9 | (ushort)(iVar11 << 2);
  *(undefined4 *)(iVar10 + 0x14) = 1;
  *(undefined *)(param_1 + 0x50) = 0x10;
  *(undefined *)(param_1 + 0x51) = 0x12;
  *(undefined *)(param_1 + 0x52) = 0x14;
  iVar12 = *(int *)(iVar10 + 4);
  *(ushort *)(iVar12 + DAT_000003a4) =
       (short)*(char *)(param_1 + 0x50) | (ushort)((int)*(char *)(param_1 + 0x51) << 8);
  iVar11 = (int)DAT_000003a6;
  *(short *)(iVar12 + iVar11) = (short)*(char *)(param_1 + 0x52);
  *(undefined2 *)(iVar12 + iVar11 + 2) = 0;
  *(undefined2 *)(iVar12 + iVar11 + 4) = 0;
  *(undefined4 *)(iVar10 + 0x14) = 1;
  uVar7 = DAT_000003f8;
  iVar11 = (int)DAT_000003a8;
  *(undefined *)(param_1 + 0x55) = 8;
  *(short *)(*(int *)(iVar10 + 4) + iVar11) = (short)*(char *)(param_1 + 0x55);
  pcVar1 = DAT_000003fc;
  *(undefined4 *)(iVar10 + 0x14) = 1;
  (*pcVar1)(uVar7);
  uVar7 = DAT_00000400;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x40) = uVar7;
  iVar10 = (int)DAT_0000049a;
  *(undefined4 *)(param_1 + 0x44) = DAT_000004a0;
  *(int *)(param_1 + 0x48) = iVar10;
  return;
}



void FUN_0000041c(int param_1)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  
  pcVar3 = DAT_000004b4;
  iVar2 = DAT_000004b0;
  uVar1 = DAT_0000049e;
  iVar6 = (int)DAT_0000049c;
  puVar8 = *(undefined4 **)((*DAT_000004a8 * 2 + *DAT_000004ac) * 4 + DAT_000004a4);
  iVar7 = *(int *)(param_1 + 0x4c);
  do {
    iVar4 = (*pcVar3)(*(undefined4 *)(param_1 + 0x48),
                      *(undefined4 *)
                       ((short)((ushort)((uint)iVar7 >> 0x10) & uVar1) * 4 + DAT_000004b8));
    uVar5 = (*pcVar3)(*puVar8,iVar4 + iVar2);
    *puVar8 = uVar5;
    iVar6 = iVar6 + -1;
    puVar8 = puVar8 + 1;
    iVar7 = iVar7 + *(int *)(param_1 + 0x44);
  } while (iVar6 != 0);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x40);
  return;
}



void FUN_000006b4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  piVar1 = DAT_0000070c;
  iVar8 = (short)((*DAT_00000700 * 2 + *DAT_00000704) * 0x70) + DAT_00000708;
  iVar3 = DAT_00000710;
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
  pcVar2 = DAT_00000864;
  *(undefined2 *)(iVar8 + 0x40) = 0;
  (*pcVar2)(DAT_00000860 - iVar3,-iVar5);
  uVar7 = *(undefined4 *)(param_1 + 0x3c);
  (*DAT_00000868)(uVar7);
  (*DAT_0000086c)(-iVar4);
  iVar5 = (int)*(short *)(iVar8 + 0x34) - (int)*(short *)(iVar8 + 0x3c);
  iVar4 = (int)*(short *)(iVar8 + 0x36) - (int)*(short *)(iVar8 + 0x3e);
  iVar6 = (int)*(short *)(iVar8 + 0x38) - (int)*(short *)(iVar8 + 0x40);
  iVar3 = (*DAT_00000870)(*(undefined4 *)(param_1 + 0x3c),*(int *)(param_1 + 0xc) << 4,param_3,
                          param_4,uVar7);
  pcVar2 = DAT_00000870;
  piVar1[9] = (((iVar3 - *piVar1 * iVar5) - piVar1[1] * iVar4) - piVar1[2] * iVar6) +
              *(short *)(iVar8 + 0x3c) * -0x10000;
  iVar3 = (*pcVar2)(*(undefined4 *)(param_1 + 0x3c),*(int *)(param_1 + 0x14) << 4);
  piVar1[10] = (((iVar3 - piVar1[3] * iVar5) - piVar1[4] * iVar4) - piVar1[5] * iVar6) +
               *(short *)(iVar8 + 0x3e) * -0x10000;
  piVar1[0xb] = ((((*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x38)) * 0x10 - piVar1[6] * iVar5)
                 - piVar1[7] * iVar4) - piVar1[8] * iVar6) + *(short *)(iVar8 + 0x40) * -0x10000;
  return;
}



char FUN_00001200(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x34) + 0x49);
  if (cVar1 == '\x02') {
    *(undefined *)(param_1 + 8) = 1;
    *(byte *)(*(int *)(param_1 + 0x34) + 0x48) = *(byte *)(*(int *)(param_1 + 0x34) + 0x48) | 1;
    *(undefined *)(*(int *)(param_1 + 0x34) + 0x49) = 0;
    cVar1 = 'I';
  }
  else if (cVar1 == '\x03') {
    *(undefined *)(param_1 + 8) = 2;
    *(byte *)(*(int *)(param_1 + 0x34) + 0x48) = *(byte *)(*(int *)(param_1 + 0x34) + 0x48) | 1;
    *(undefined *)(*(int *)(param_1 + 0x34) + 0x49) = 0;
    cVar1 = 'I';
  }
  else if (cVar1 == '\x04') {
    *(undefined *)(*(int *)(param_1 + 0x34) + 0x49) = 0;
    cVar1 = '\v';
    *(undefined *)(param_1 + 8) = 0xb;
  }
  return cVar1;
}



uint FUN_00001280(int param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  pcVar3 = DAT_000013a4;
  piVar2 = DAT_000013a0;
  iVar9 = (int)DAT_0000139a;
  uVar4 = (int)*(char *)(param_1 + 9) & 0xff;
  if (uVar4 == 0) {
    uVar4 = (int)*(char *)(*(int *)(param_1 + 0x34) + 0x49) & 0xff;
    if (uVar4 != 1) {
      return uVar4;
    }
    *(byte *)(*(int *)(param_1 + 0x34) + 0x48) =
         *(byte *)(*(int *)(param_1 + 0x34) + 0x48) & (byte)DAT_0000139c;
    *(byte *)(*(int *)(param_1 + 0x34) + 0x48) = *(byte *)(*(int *)(param_1 + 0x34) + 0x48) | 2;
    *(undefined *)(param_1 + 9) = 1;
    return 1;
  }
  if (uVar4 != 1) {
    if (uVar4 != 2) {
      if (uVar4 == 3) {
        iVar9 = *(int *)(*(int *)(param_1 + 0x38) + 0x30);
        uVar4 = (uint)*(short *)(*(int *)(param_1 + 0x38) + 0x16);
        if (iVar9 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = (int)*(short *)(iVar9 + 4);
        }
        if ((int)uVar4 < iVar9 + -1) {
          return uVar4;
        }
        (*DAT_0000160c)(*(undefined4 *)(param_1 + 0x38),
                        *(undefined4 *)
                         (**(int **)(((int)**(char **)(param_1 + 0x3c) & 0xffU) * 0x10 +
                                     *DAT_000013a0 + 0xc) +
                         ((int)**(short **)(*(char **)(param_1 + 0x3c) + 0xc) & 0xffffU)));
        *(byte *)(*(int *)(param_1 + 0x34) + 0x48) =
             *(byte *)(*(int *)(param_1 + 0x34) + 0x48) & (byte)DAT_00001600;
        *(undefined *)(param_1 + 9) = 4;
        return 4;
      }
      if (uVar4 != 4) {
        return uVar4;
      }
      uVar4 = 0;
      *(undefined *)(param_1 + 8) = 0;
      goto LAB_00001554;
    }
    iVar5 = (*DAT_000013a4)();
    iVar8 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + 8);
    iVar5 = (*pcVar3)();
    *(int *)(param_1 + 0x44) = iVar8 - *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + 0xc);
    iVar5 = (*pcVar3)();
    iVar8 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + 0xc);
    iVar5 = (*pcVar3)();
    *(int *)(param_1 + 0x48) = iVar8 - *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + 0x10);
    iVar5 = (*pcVar3)();
    iVar8 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + 0x10);
    iVar5 = (*pcVar3)();
    *(int *)(param_1 + 0x4c) = iVar8 - *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + 0x14);
    iVar5 = (*pcVar3)();
    cVar1 = *(char *)((int)DAT_000014f8 + *(int *)(*(int *)(iVar5 + 0x10) + 4));
    if (cVar1 == '\0') {
      iVar5 = 0x4c;
LAB_00001416:
      iVar9 = *(int *)(param_1 + iVar5) - iVar9;
    }
    else {
      if (cVar1 == '\x01') {
        iVar5 = 0x44;
        goto LAB_00001416;
      }
      if (cVar1 == '\x02') {
        iVar5 = 0x4c;
        iVar9 = *(int *)(param_1 + 0x4c) + iVar9;
      }
      else {
        if (cVar1 != '\x03') goto LAB_0000142c;
        iVar5 = 0x44;
        iVar9 = *(int *)(param_1 + 0x44) + iVar9;
      }
    }
    *(int *)(param_1 + iVar5) = iVar9;
LAB_0000142c:
    uVar4 = (uint)*(short *)(*(int *)(param_1 + 0x38) + 0x16);
    if (uVar4 != 0x1e) {
      return uVar4;
    }
    iVar9 = (*pcVar3)();
    iVar5 = *(int *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x18) + 8) - **(int **)(param_1 + 0x1c);
    iVar9 = (*pcVar3)();
    iVar6 = *(int *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x18) + 0xc) -
            *(int *)(*(int *)(param_1 + 0x1c) + 4);
    iVar9 = (*pcVar3)();
    iVar8 = *(int *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x18) + 0x10) -
            *(int *)(*(int *)(param_1 + 0x1c) + 8);
    uVar13 = 0;
    iVar9 = (*pcVar3)();
    iVar7 = *(int *)(*(int *)(iVar9 + 0x10) + 0x18) + 8;
    iVar9 = (*pcVar3)();
    (*DAT_000014fc)((int)DAT_000014fa + *(int *)(*(int *)(iVar9 + 0x10) + 0x18),0x1b,iVar7,3,iVar5,
                    iVar6,iVar8,uVar13);
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar13 = DAT_00001500;
    iVar9 = (*pcVar3)();
    (*DAT_00001508)(*(undefined4 *)(*piVar2 + 0x6c),DAT_00001504,
                    *(int *)(*(int *)(iVar9 + 0x10) + 0x18) + 8,0,uVar10,uVar13,uVar11,uVar12);
    (*DAT_0000150c)(0x67);
    *(undefined *)(param_1 + 9) = 3;
    return 3;
  }
  iVar5 = (*DAT_000013a4)();
  iVar8 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + 8);
  iVar5 = (*pcVar3)();
  *(int *)(param_1 + 0x44) = iVar8 - *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + 0xc);
  iVar5 = (*pcVar3)();
  iVar8 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + 0xc);
  iVar5 = (*pcVar3)();
  *(int *)(param_1 + 0x48) = iVar8 - *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + 0x10);
  iVar5 = (*pcVar3)();
  iVar8 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + 0x10);
  iVar5 = (*pcVar3)();
  *(int *)(param_1 + 0x4c) = iVar8 - *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + 0x14);
  iVar5 = (*pcVar3)();
  cVar1 = *(char *)((int)DAT_0000139e + *(int *)(*(int *)(iVar5 + 0x10) + 4));
  if (cVar1 == '\0') {
    iVar5 = 0x4c;
LAB_00001358:
    iVar9 = *(int *)(param_1 + iVar5) - iVar9;
LAB_0000136c:
    *(int *)(param_1 + iVar5) = iVar9;
  }
  else {
    if (cVar1 == '\x01') {
      iVar5 = 0x44;
      goto LAB_00001358;
    }
    if (cVar1 == '\x02') {
      iVar5 = 0x4c;
      iVar9 = *(int *)(param_1 + 0x4c) + iVar9;
      goto LAB_0000136c;
    }
    if (cVar1 == '\x03') {
      iVar5 = 0x44;
      iVar9 = *(int *)(param_1 + 0x44) + iVar9;
      goto LAB_0000136c;
    }
  }
  (*DAT_000013a8)(*(undefined4 *)(param_1 + 0x38),
                  *(undefined4 *)
                   (**(int **)(((int)**(char **)(param_1 + 0x3c) & 0xffU) * 0x10 + *piVar2 + 0xc) +
                   ((int)*(short *)(*(int *)(*(char **)(param_1 + 0x3c) + 0xc) + 2) & 0xffffU)));
  uVar4 = 2;
LAB_00001554:
  *(char *)(param_1 + 9) = (char)uVar4;
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_00001568(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = (int)*(char *)(param_1 + 9) & 0xff;
  if (uVar2 != 0) {
    if (uVar2 != 1) {
      if (uVar2 != 2) {
        return uVar2;
      }
      *(undefined *)(param_1 + 8) = 0;
      *(undefined *)(param_1 + 9) = 0;
      return 0;
    }
    if ((*(int *)(param_1 + DAT_0000170e) != 0) &&
       (uVar2 = *(uint *)(*(int *)(param_1 + DAT_0000170e) + -4), (uVar2 & 1) == 0)) {
      return uVar2;
    }
    *(byte *)(*(int *)(param_1 + 0x34) + 0x48) =
         *(byte *)(*(int *)(param_1 + 0x34) + 0x48) & (byte)DAT_00001710;
    uVar2 = (int)*(char *)(param_1 + 9) + 1;
    *(char *)(param_1 + 9) = (char)uVar2;
    return uVar2;
  }
  iVar3 = (*DAT_00001610)();
  if (((int)_LAB_00001602 & *(uint *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_00001604)) ==
      0) {
    return (int)DAT_00001604;
  }
  uVar2 = (int)*(char *)(*(int *)(param_1 + 0x34) + 0x49) & 0xff;
  if (uVar2 != 1) {
    return uVar2;
  }
  *(byte *)(*(int *)(param_1 + 0x34) + 0x48) =
       *(byte *)(*(int *)(param_1 + 0x34) + 0x48) & (byte)DAT_00001606;
  *(byte *)(*(int *)(param_1 + 0x34) + 0x48) = *(byte *)(*(int *)(param_1 + 0x34) + 0x48) | 2;
  iVar3 = (*DAT_00001610)();
  cVar1 = *(char *)((int)DAT_00001608 + *(int *)(*(int *)(iVar3 + 0x10) + 4));
  if (cVar1 == '\x01') {
    iVar3 = *(int *)(param_1 + 0x60) + DAT_00001614;
  }
  else {
    if (cVar1 != '\x03') goto LAB_000015e8;
    iVar3 = *(int *)(param_1 + 0x60) - DAT_00001614;
  }
  *(int *)(param_1 + 0x60) = iVar3;
LAB_000015e8:
  uVar4 = FUN_0000208a(param_1);
  *(undefined4 *)(DAT_0000160a + param_1) = uVar4;
  (*DAT_00001618)(0x68);
  uVar2 = (int)*(char *)(param_1 + 9) + 1;
  *(char *)(param_1 + 9) = (char)uVar2;
  return uVar2;
}



void FUN_000016e4(undefined4 *param_1,undefined4 *param_2,undefined2 param_3)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar3 = (*DAT_00001718)();
  sVar1 = DAT_00001714;
  if ((*(short *)(iVar3 + 6) != 8) && (*(short *)(iVar3 + 6) != 9)) {
    sVar1 = DAT_00001880;
  }
  iVar4 = (*DAT_00001890)(*(undefined4 *)(*DAT_00001888 + (int)sVar1 + 0xc),DAT_0000188c,0x3c);
  *(undefined4 *)(iVar4 + 8) = *param_1;
  *(undefined4 *)(iVar4 + 0xc) = param_1[1];
  *(undefined4 *)(iVar4 + 0x10) = param_1[2];
  *(undefined4 *)(iVar4 + 0x20) = *param_2;
  *(undefined4 *)(iVar4 + 0x24) = param_2[1];
  pcVar2 = DAT_00001894;
  uVar6 = (uint)DAT_00001882;
  iVar7 = (int)DAT_00001884;
  *(undefined4 *)(iVar4 + 0x28) = param_2[2];
  uVar5 = (*pcVar2)();
  *(uint *)(iVar4 + 0x14) = (uVar5 & uVar6) + iVar7;
  uVar5 = (*pcVar2)();
  *(uint *)(iVar4 + 0x18) = (uVar5 & uVar6) + iVar7;
  uVar5 = (*pcVar2)();
  iVar3 = DAT_00001898;
  *(uint *)(iVar4 + 0x1c) = (uVar5 & uVar6) + iVar7;
  uVar5 = (*pcVar2)();
  *(uint *)(iVar4 + 0x2c) = ((uVar5 & 0x1f) - 0xf) * iVar3;
  uVar5 = (*pcVar2)();
  *(uint *)(iVar4 + 0x30) = ((uVar5 & 0x1f) - 0xf) * iVar3;
  uVar5 = (*pcVar2)();
  *(uint *)(iVar4 + 0x34) = ((uVar5 & 0x1f) - 0xf) * iVar3;
  *(undefined2 *)(iVar4 + 0x38) = param_3;
  return;
}



void FUN_000017b6(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  (*DAT_000018a4)(param_1,*(undefined4 *)
                           (((int)**(char **)(param_1 + 0x3c) & 0xffU) * 0x10 + *DAT_00001888 + 0xc)
                  ,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x1c),
                  *(undefined4 *)(param_1 + 0x28),0,0,0xffffffd4,DAT_000018a0,0,0,0,DAT_0000189c,0);
  iVar2 = 0;
  do {
    iVar1 = *(int *)(*(int *)(param_1 + 0x68) + 0x30) + iVar3;
    FUN_000016e4(iVar1 + 4,iVar1 + 0x1c,(int)*(short *)(iVar1 + 0x40));
    iVar1 = *(int *)(*(int *)(param_1 + 0x68) + 0x30) + iVar3 + 0x54;
    FUN_000016e4(iVar1 + 4,iVar1 + 0x1c,(int)*(short *)(iVar1 + 0x40));
    iVar1 = *(int *)(*(int *)(param_1 + 0x68) + 0x30) + iVar3 + 0xa8;
    FUN_000016e4(iVar1 + 4,iVar1 + 0x1c,(int)*(short *)(iVar1 + 0x40));
    iVar2 = iVar2 + 3;
    iVar3 = iVar3 + 0xfc;
  } while (iVar2 < 6);
  return;
}



uint FUN_00001860(int param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  
  pcVar1 = DAT_000018a8;
  uVar2 = (int)*(char *)(param_1 + 9) & 0xff;
  if (uVar2 == 0) {
    for (iVar3 = 0; iVar3 < *(short *)(param_1 + 0xc); iVar3 = iVar3 + 1) {
      (*pcVar1)(iVar3 * 100 + *(int *)(param_1 + 0x14));
    }
    *(undefined2 *)(param_1 + 0xc) = 0;
    iVar3 = *(int *)(param_1 + 0x40);
    *(byte *)(iVar3 + 0x31) = *(byte *)(iVar3 + 0x31) | 1;
    *(byte *)(iVar3 + 0x31) = *(byte *)(iVar3 + 0x31) | 8;
    FUN_000017b6(param_1);
    uVar2 = 0x48;
    *(byte *)(*(int *)(param_1 + 0x34) + 0x48) = *(byte *)(*(int *)(param_1 + 0x34) + 0x48) | 0x40;
    if (param_1 != 0) {
      uVar2 = *(uint *)(param_1 + -4) | 1;
      *(uint *)(param_1 + -4) = uVar2;
    }
  }
  return uVar2;
}



void FUN_00001d52(int param_1)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  
  pcVar1 = DAT_00001dec;
  uVar2 = (*DAT_00001dec)();
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (uVar2 & DAT_00001df0) + DAT_00001df4;
  uVar2 = (*pcVar1)();
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + (uVar2 & DAT_00001df0) + DAT_00001df4;
  uVar2 = (*pcVar1)();
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + (uVar2 & DAT_00001df8) + DAT_00001dfc;
  piVar3 = (int *)(*DAT_00001e00)(*(undefined4 *)(param_1 + 0x14),(int)*(short *)(param_1 + 0xc));
  if (piVar3 != (int *)0x0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *piVar3;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + piVar3[1];
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + piVar3[2];
  }
  return;
}



void FUN_00001e04(int param_1)

{
  int iVar1;
  short local_10 [4];
  
  if ((*(byte *)(*(int *)(param_1 + 0x34) + 0x48) & 4) == 0) {
    iVar1 = (*DAT_00001ef4)(param_1,*(undefined4 *)(param_1 + 0x14),(int)*(short *)(param_1 + 0xc),
                            local_10);
    if (iVar1 != 0) {
      *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + local_10[0];
      *(undefined *)(param_1 + 0x12) = 1;
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      FUN_00001d52(param_1);
      local_10[0] = *(short *)(param_1 + 0x10) - local_10[0];
      *(short *)(param_1 + 0x10) = local_10[0];
      if (local_10[0] < 1) {
        (*DAT_00001ef8)(param_1,*(undefined4 *)(param_1 + 0x14),(int)*(short *)(param_1 + 0xc),0,
                        *(undefined4 *)(param_1 + 0x40));
        *(byte *)(*(int *)(param_1 + 0x34) + 0x48) = *(byte *)(*(int *)(param_1 + 0x34) + 0x48) | 4;
        (*DAT_00001f00)(param_1,(int)*(short *)(param_1 + 0xe),*(undefined4 *)(param_1 + 0x1c),1);
        (*DAT_00001efc)(0x66);
        *(undefined *)(param_1 + 8) = 0xb;
        *(undefined *)(param_1 + 9) = 0;
      }
      else {
        (*DAT_00001ef8)(param_1,*(undefined4 *)(param_1 + 0x14),(int)*(short *)(param_1 + 0xc),1,
                        *(undefined4 *)(param_1 + 0x40));
        (*DAT_00001efc)(0x65);
      }
    }
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (iVar1 = (*DAT_00001f04)(),
       ((int)DAT_00001eee & *(uint *)(*(int *)(*(int *)(iVar1 + 0x10) + 4) + (int)DAT_00001ef0)) !=
       0)) {
      (*DAT_00001f00)(param_1,(int)*(short *)(param_1 + 0xe),*(undefined4 *)(param_1 + 0x1c),1);
      *(undefined2 *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  return;
}



undefined4 * FUN_0000208a(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*DAT_000020b0)(param_1,DAT_000020ac,0x10);
  *puVar1 = *(undefined4 *)(param_1 + 0x68);
  puVar1[3] = param_1;
  return puVar1;
}



uint FUN_00003076(int param_1)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined uVar8;
  int iVar9;
  int local_44;
  short asStack64 [2];
  int iStack60;
  int iStack56;
  int iStack52;
  int iStack48;
  undefined auStack44 [16];
  
  uVar3 = (uint)*(char *)(*(int *)(param_1 + 0x34) + 0x48);
  if ((uVar3 & 4) != 0) {
    return uVar3 & 0xff;
  }
  uVar7 = *(undefined4 *)(param_1 + 0x14);
  iVar4 = (*DAT_000030fc)(param_1,uVar7,(int)*(short *)(param_1 + 0xc),asStack64);
  uVar8 = (undefined)uVar7;
  if (iVar4 != 0) {
    *(undefined *)(param_1 + 0x12) = 1;
    *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + asStack64[0];
    pcVar2 = DAT_00003100;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    (*pcVar2)(0x65);
    pcVar2 = DAT_00003104;
    uVar3 = (uint)DAT_000030de;
    iVar4 = (int)DAT_000030e0;
    for (local_44 = 0; local_44 < *(short *)(param_1 + 0xc); local_44 = local_44 + 1) {
      if ((DAT_00003240 & *(uint *)(local_44 * 100 + *(int *)(param_1 + 0x14) + 0x50)) != 0) {
        (*DAT_00003248)(local_44 * 0xc + *(int *)(param_1 + 0x18),auStack44,DAT_00003244 + 0x58);
        iVar6 = local_44 * 100;
        iStack60 = 2;
        do {
          iVar9 = -*(int *)(*(int *)(param_1 + 0x14) + iVar6 + 0x34);
          uVar5 = (*pcVar2)();
          iStack56 = (uVar5 & uVar3) + iVar9 + iVar4;
          iVar9 = -*(int *)(*(int *)(param_1 + 0x14) + iVar6 + 0x38);
          uVar5 = (*pcVar2)();
          iStack52 = (uVar5 & uVar3) + iVar9 + iVar4;
          iVar9 = -*(int *)(*(int *)(param_1 + 0x14) + iVar6 + 0x3c);
          uVar5 = (*pcVar2)();
          iStack48 = (uVar5 & uVar3) + iVar9 + iVar4;
          (*DAT_00003258)(*(undefined4 *)(*DAT_00003254 + (int)DAT_0000323e + 0xc),DAT_00003250,
                          auStack44,&iStack56,0,DAT_0000324c,0,0);
          iStack60 = iStack60 + -1;
        } while (iStack60 != 0);
      }
    }
    asStack64[0] = *(short *)(param_1 + 0x10) - asStack64[0];
    *(short *)(param_1 + 0x10) = asStack64[0];
    if (asStack64[0] < 1) {
      (*DAT_0000325c)(param_1,*(undefined4 *)(param_1 + 0x14),(int)*(short *)(param_1 + 0xc),0,
                      *(undefined4 *)(param_1 + 0x40));
      *(byte *)(*(int *)(param_1 + 0x34) + 0x48) = *(byte *)(*(int *)(param_1 + 0x34) + 0x48) | 4;
      (*DAT_00003260)(param_1,(int)*(short *)(param_1 + 0xe),*(undefined4 *)(param_1 + 0x1c),1);
      uVar3 = DAT_00003264;
      for (iVar4 = 0; iVar4 < *(short *)(param_1 + 0xc); iVar4 = iVar4 + 1) {
        iVar6 = iVar4 * 100 + *(int *)(param_1 + 0x14);
        *(uint *)(iVar6 + 0x50) = *(uint *)(iVar6 + 0x50) & uVar3;
      }
      *(undefined *)(param_1 + 8) = 0xb;
      *(undefined *)(param_1 + 9) = 0;
      return 0;
    }
    uVar7 = *(undefined4 *)(param_1 + 0x14);
    (*DAT_0000325c)(param_1,uVar7,(int)*(short *)(param_1 + 0xc),1,*(undefined4 *)(param_1 + 0x40));
    uVar8 = (undefined)uVar7;
  }
  if ((*(char *)(param_1 + 0x12) != '\0') &&
     (iVar4 = (*DAT_0000333c)(),
     ((int)DAT_00003334 & *(uint *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_00003336)) != 0)
     ) {
    iVar4 = (int)*(short *)(param_1 + 0xe);
    (*DAT_00003340)(param_1,iVar4,*(undefined4 *)(param_1 + 0x1c),1);
    uVar8 = (undefined)iVar4;
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  iVar4 = (*DAT_0000333c)();
  cVar1 = *(char *)((int)DAT_00003338 + *(int *)(*(int *)(iVar4 + 0x10) + 4));
  if (cVar1 == '\0') {
LAB_000032be:
    uVar8 = 0x14;
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') goto LAB_000032be;
      if (cVar1 != '\x03') goto LAB_000032c4;
    }
    uVar8 = 5;
  }
LAB_000032c4:
  for (iVar4 = 0; iVar4 < *(short *)(param_1 + 0xc); iVar4 = iVar4 + 1) {
    *(undefined *)(iVar4 * 100 + *(int *)(param_1 + 0x14) + 0x60) = uVar8;
  }
  return (int)*(short *)(param_1 + 0xc);
}



int FUN_00004ab8(int param_1)

{
  undefined uVar1;
  short sVar5;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  
  sVar5 = *(short *)(param_1 + 0x12) + -1;
  *(short *)(param_1 + 0x12) = sVar5;
  iVar2 = (int)sVar5;
  if (iVar2 < 0) {
    (*DAT_00004c58)();
    iVar3 = (*DAT_00004c5c)();
    (*DAT_00004c58)();
    (*DAT_00004c5c)();
    iVar4 = (*DAT_00004c5c)();
    puVar6 = (undefined *)(param_1 + 0xc + iVar3);
    uVar1 = *puVar6;
    *puVar6 = *(undefined *)(param_1 + 0xc + iVar4);
    *(undefined *)(param_1 + 0xc + iVar4) = uVar1;
    iVar2 = DAT_00004c60;
    iVar7 = iVar3 * 0x4c;
    *(undefined4 *)(*(int *)(param_1 + 4) + iVar7 + 100) =
         *(undefined4 *)
          ((int)(char)(*(char *)(param_1 + 0xc + iVar3) * '\f') +
          (short)(((short)*(char *)(param_1 + 0xb) & 0xffU) * 0x48) + DAT_00004c60);
    iVar8 = iVar4 * 0x4c;
    *(undefined4 *)(*(int *)(param_1 + 4) + iVar7 + 0x68) =
         *(undefined4 *)
          ((short)(((short)*(char *)(param_1 + 0xb) & 0xffU) * 0x48) + iVar2 +
           (int)(char)(*(char *)(param_1 + 0xc + iVar3) * '\f') + 4);
    *(undefined4 *)(*(int *)(param_1 + 4) + iVar7 + 0x6c) =
         *(undefined4 *)
          ((short)(((short)*(char *)(param_1 + 0xb) & 0xffU) * 0x48) + iVar2 +
           (int)(char)(*(char *)(param_1 + 0xc + iVar3) * '\f') + 8);
    *(undefined4 *)(*(int *)(param_1 + 4) + iVar8 + 100) =
         *(undefined4 *)
          ((int)(char)(*(char *)(param_1 + 0xc + iVar4) * '\f') +
          (short)(((short)*(char *)(param_1 + 0xb) & 0xffU) * 0x48) + iVar2);
    *(undefined4 *)(*(int *)(param_1 + 4) + iVar8 + 0x68) =
         *(undefined4 *)
          ((short)(((short)*(char *)(param_1 + 0xb) & 0xffU) * 0x48) + iVar2 +
           (int)(char)(*(char *)(param_1 + 0xc + iVar4) * '\f') + 4);
    *(undefined4 *)(*(int *)(param_1 + 4) + iVar8 + 0x6c) =
         *(undefined4 *)
          ((short)(((short)*(char *)(param_1 + 0xb) & 0xffU) * 0x48) + iVar2 +
           (int)(char)(*(char *)(param_1 + 0xc + iVar4) * '\f') + 8);
    iVar2 = (int)DAT_00004c54;
    *(short *)(param_1 + 0x12) = DAT_00004c54;
  }
  return iVar2;
}



uint FUN_00005938(int param_1)

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
  
  FUN_00006038();
  iVar5 = (*DAT_000059e4)();
  pcVar2 = DAT_000059e8;
  if (iVar5 == 1) {
    return 1;
  }
  *(int *)(param_1 + DAT_000059c6) = *(int *)(param_1 + DAT_000059c6) + 1;
  (*pcVar2)(param_1);
  (*DAT_000059ec)(param_1);
  (*DAT_000059cc)(param_1);
  (*DAT_000059f0)(param_1);
  (*DAT_000059f4)(param_1);
  FUN_000063ac(param_1);
  FUN_00006206(param_1);
  FUN_00006318(param_1);
  pcVar2 = DAT_000059f8;
  bVar1 = 0;
  iVar5 = (*DAT_000059f8)();
  if (*(short *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_000059c8) < 1) {
    return (int)DAT_000059c8;
  }
  iVar6 = (*DAT_000059fc)();
  pcVar3 = DAT_00005b00;
  iVar5 = DAT_00005afc;
  if (iVar6 == 0) {
    iVar5 = (int)DAT_000059ca;
    *(undefined4 *)(param_1 + iVar5) = 0;
    uVar7 = iVar5 - 4;
    goto LAB_00005fc0;
  }
  iVar13 = (int)DAT_00005aec;
  iVar8 = (*pcVar2)();
  iVar6 = DAT_00005e40;
  if (*(char *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x10) + 0x1f) == '\0') {
    uVar7 = (uint)*pcVar3;
    if (uVar7 != 1) {
      if (uVar7 != 2) {
        return uVar7;
      }
      iVar5 = (int)DAT_00005d40;
      *(int *)(DAT_00005d3c + param_1) = pcVar3[2] * -0x200;
      *(int *)(DAT_00005d3e + param_1) = (int)pcVar3[3] << 8;
      if ((*(ushort *)(pcVar3 + iVar5) & *(ushort *)(pcVar3 + 6)) == 0) {
        if ((*(ushort *)(pcVar3 + DAT_00005d4a) & *(ushort *)(pcVar3 + 6)) == 0) goto LAB_00005cf0;
        if (((int)*(short *)(param_1 + DAT_00005d42) & 0x20U) != 0) {
          return (int)*(short *)(param_1 + DAT_00005d42);
        }
        iVar5 = (*pcVar2)();
        if ((*(uint *)((int)DAT_00005d44 + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 8) != 0)
        goto LAB_00005cf0;
        (*pcVar2)();
        bVar10 = (*DAT_00005d54)();
        iVar5 = (*pcVar2)();
        if ((bVar10 & *(byte *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_00005d48)) == 0) {
          (*DAT_00005d58)(2,0x1e);
          goto LAB_00005cf0;
        }
      }
      else {
        if (((int)*(short *)(param_1 + DAT_00005d42) & 0x40U) != 0) {
          return (int)*(short *)(param_1 + DAT_00005d42);
        }
        iVar5 = (*pcVar2)();
        if ((*(uint *)((int)DAT_00005d44 + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 8) != 0)
        goto LAB_00005cf0;
        (*pcVar2)();
        bVar10 = (*DAT_00005d54)();
        iVar5 = (*pcVar2)();
        if ((bVar10 & *(byte *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_00005d48)) == 0) {
          (*DAT_00005d58)(1,0x1e);
          goto LAB_00005cf0;
        }
      }
      bVar1 = 1;
LAB_00005cf0:
      iVar5 = (*pcVar2)();
      if (!(bool)((*(uint *)((int)DAT_00005d44 + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 8) != 0
                 | bVar1)) {
        return 0;
      }
      if (((*(ushort *)(pcVar3 + DAT_00005d4c + 0x4e) | *(ushort *)(pcVar3 + DAT_00005d4c + 0x4c)) &
          *(ushort *)(pcVar3 + 8)) == 0) {
        return (int)(short)*(ushort *)(pcVar3 + DAT_00005d4c + 0x4c);
      }
                    // WARNING: Could not recover jumptable at 0x00005d38. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar7 = (*DAT_00005d60)(5);
      return uVar7;
    }
    if ((*(ushort *)(pcVar3 + DAT_00005aee) & *(ushort *)(pcVar3 + 6)) == 0) {
      if ((*(ushort *)(pcVar3 + DAT_00005af8) & *(ushort *)(pcVar3 + 6)) == 0) goto LAB_00005b1c;
      if (((int)*(short *)(param_1 + DAT_00005af0) & 0x20U) != 0) {
        return (int)*(short *)(param_1 + DAT_00005af0);
      }
      iVar6 = (*pcVar2)();
      if ((*(uint *)((int)DAT_00005af2 + *(int *)(*(int *)(iVar6 + 0x10) + 0x18)) & 8) != 0)
      goto LAB_00005b1c;
      (*pcVar2)();
      bVar10 = (*DAT_00005b08)();
      iVar6 = (*pcVar2)();
      if ((bVar10 & *(byte *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) + (int)DAT_00005af6)) == 0) {
        (*DAT_00005c04)(2,0x1e);
        goto LAB_00005b1c;
      }
    }
    else {
      if (((int)*(short *)(param_1 + DAT_00005af0) & 0x40U) != 0) {
        return (int)*(short *)(param_1 + DAT_00005af0);
      }
      iVar6 = (*pcVar2)();
      if ((*(uint *)((int)DAT_00005af2 + *(int *)(*(int *)(iVar6 + 0x10) + 0x18)) & 8) != 0)
      goto LAB_00005b1c;
      (*pcVar2)();
      bVar10 = (*DAT_00005b08)();
      iVar6 = (*pcVar2)();
      if ((bVar10 & *(byte *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) + (int)DAT_00005af6)) == 0) {
        (*DAT_00005b0c)(1,0x1e);
        goto LAB_00005b1c;
      }
    }
    bVar1 = 1;
LAB_00005b1c:
    iVar6 = (*pcVar2)();
    if (((bool)((*(uint *)((int)DAT_00005bf2 + *(int *)(*(int *)(iVar6 + 0x10) + 0x18)) & 8) != 0 |
               bVar1)) &&
       (((*(ushort *)(pcVar3 + DAT_00005bf4 + 0x4e) | *(ushort *)(pcVar3 + DAT_00005bf4 + 0x4c)) &
        *(ushort *)(pcVar3 + 8)) != 0)) {
      (*DAT_00005c08)(5);
    }
    iVar6 = (int)DAT_00005bf6;
    iVar8 = (int)DAT_00005bf8;
    if ((*(ushort *)(pcVar3 + DAT_00005bfa) & *(ushort *)(pcVar3 + 6)) == 0) {
      if ((*(ushort *)(pcVar3 + DAT_00005c00) & *(ushort *)(pcVar3 + 6)) == 0) {
        if (*(int *)(param_1 + DAT_00005bfc) - iVar8 < 1) {
          if (-1 < *(int *)(param_1 + DAT_00005bfc) + iVar8) {
            uVar7 = (uint)DAT_00005bfc;
            *(undefined4 *)(param_1 + uVar7) = 0;
            return uVar7;
          }
          iVar6 = *(int *)(param_1 + DAT_00005bfc) + iVar8;
        }
        else {
          iVar6 = *(int *)(param_1 + DAT_00005bfc) - iVar8;
        }
      }
      else if (iVar5 < *(int *)(param_1 + DAT_00005bfc) - iVar6) {
        iVar6 = *(int *)(param_1 + DAT_00005bfc) - iVar6;
      }
      else {
        if (iVar5 <= *(int *)(param_1 + DAT_00005bfc) + iVar13) {
          uVar7 = (uint)DAT_00005bfc;
          *(int *)(param_1 + uVar7) = iVar5;
          return uVar7;
        }
        iVar6 = *(int *)(param_1 + DAT_00005bfc) + iVar13;
      }
    }
    else {
      if (DAT_00005c0c <= *(int *)(param_1 + DAT_00005bfc) + iVar6) {
        if (DAT_00005c0c < *(int *)(param_1 + DAT_00005bfc) + (int)DAT_00005bfe) {
          uVar7 = (uint)DAT_00005bfc;
          *(int *)(param_1 + uVar7) = *(int *)(param_1 + uVar7) - iVar13;
          return uVar7;
        }
        uVar7 = (uint)DAT_00005bfc;
        *(int *)(param_1 + uVar7) = DAT_00005c0c;
        return uVar7;
      }
      iVar6 = *(int *)(param_1 + DAT_00005bfc) + iVar6;
    }
    uVar7 = (uint)DAT_00005bfc;
    *(int *)(param_1 + uVar7) = iVar6;
    return uVar7;
  }
  iVar8 = (int)DAT_00005e30;
  iVar12 = (int)DAT_00005e32;
  uVar7 = (uint)*pcVar3;
  if (uVar7 != 1) {
    if (uVar7 != 2) {
      return uVar7;
    }
    *(int *)(DAT_0000602e + param_1) = (int)pcVar3[3] << 8;
    *(int *)(DAT_0000602a + param_1) = pcVar3[2] * -0x100;
    if ((*(ushort *)(param_1 + DAT_00006032) & 0x78) == 0) {
      iVar5 = (*pcVar2)();
      if ((*(uint *)((int)DAT_0000602c + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 8) == 0) {
        return 0;
      }
      iVar5 = (int)DAT_0000602e;
      *(undefined4 *)(param_1 + iVar5) = 0;
      sVar4 = DAT_00006030;
      *(undefined4 *)(param_1 + iVar5 + 4) = 0;
      if (((*(ushort *)(pcVar3 + sVar4 + 0x48) | *(ushort *)(pcVar3 + sVar4 + 0x4a) |
            *(ushort *)(pcVar3 + sVar4 + 0x4e) | *(ushort *)(pcVar3 + sVar4 + 0x4c)) &
          *(ushort *)(pcVar3 + 8)) == 0) {
        return (int)(short)*(ushort *)(pcVar3 + sVar4 + 0x4c);
      }
                    // WARNING: Could not recover jumptable at 0x00006014. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar7 = (*DAT_00006034)(5);
      return uVar7;
    }
    *(undefined4 *)(param_1 + DAT_0000602e) = 0;
    uVar7 = (uint)DAT_0000602a;
    goto LAB_00005fc0;
  }
  if ((*(ushort *)(pcVar3 + DAT_00005e34) & *(ushort *)(pcVar3 + 6)) == 0) {
    if ((*(ushort *)(pcVar3 + DAT_00005e3c) & *(ushort *)(pcVar3 + 6)) == 0) {
      if ((*(ushort *)(param_1 + DAT_00005e36) & 0x78) != 0) {
        iVar5 = (int)DAT_00005e38;
        *(undefined4 *)(param_1 + iVar5) = 0;
        uVar7 = iVar5 + 4;
        goto LAB_00005fc0;
      }
      if (0 < *(int *)(param_1 + DAT_00005e38) - iVar12) {
        iVar11 = *(int *)(param_1 + DAT_00005e38) - iVar12;
        goto LAB_00005e2c;
      }
      if (-1 < *(int *)(param_1 + DAT_00005f10) + iVar12) {
        *(undefined4 *)(param_1 + DAT_00005f10) = 0;
        goto LAB_00005e5c;
      }
      iVar9 = (int)DAT_00005f10;
      iVar11 = *(int *)(param_1 + iVar9) + iVar12;
    }
    else {
      if ((*(ushort *)(param_1 + DAT_00005e36) & 0x10) != 0) {
        uVar7 = (uint)DAT_00005e38;
        goto LAB_00005fc0;
      }
      if (iVar5 < *(int *)(param_1 + DAT_00005e38) - iVar8) {
        iVar11 = *(int *)(param_1 + DAT_00005e38) - iVar8;
      }
      else {
        if (iVar5 <= *(int *)(param_1 + DAT_00005e38) + iVar13) {
          *(int *)(param_1 + DAT_00005e38) = iVar5;
          goto LAB_00005e5c;
        }
        iVar11 = *(int *)(param_1 + DAT_00005e38) + iVar13;
      }
LAB_00005e2c:
      iVar9 = (int)DAT_00005e38;
    }
    *(int *)(param_1 + iVar9) = iVar11;
  }
  else {
    if ((*(ushort *)(param_1 + DAT_00005e36) & 8) != 0) {
      uVar7 = (uint)DAT_00005e38;
      goto LAB_00005fc0;
    }
    if (*(int *)(param_1 + DAT_00005e38) + iVar8 < DAT_00005e40) {
      iVar11 = *(int *)(param_1 + DAT_00005e38) + iVar8;
      goto LAB_00005e2c;
    }
    if (DAT_00005e40 < *(int *)(param_1 + DAT_00005e38) + (int)DAT_00005e3a) {
      *(int *)(param_1 + DAT_00005e38) = *(int *)(param_1 + DAT_00005e38) - iVar13;
    }
    else {
      *(int *)(param_1 + DAT_00005e38) = DAT_00005e40;
    }
  }
LAB_00005e5c:
  if ((*(ushort *)(pcVar3 + DAT_00005f12) & *(ushort *)(pcVar3 + 6)) == 0) {
    if ((*(ushort *)(pcVar3 + DAT_00005f1a) & *(ushort *)(pcVar3 + 6)) != 0) {
      if ((*(ushort *)(param_1 + DAT_00005f14) & 0x20) != 0) {
        uVar7 = (uint)DAT_00005f16;
LAB_00005fc0:
        *(undefined4 *)(param_1 + uVar7) = 0;
        return uVar7;
      }
      if (0 < *(int *)(param_1 + DAT_00005f16)) goto LAB_00005ece;
      if (iVar5 < *(int *)(param_1 + DAT_00005f16) - iVar8) {
        iVar8 = *(int *)(param_1 + DAT_00005f16) - iVar8;
      }
      else {
        if (iVar5 <= *(int *)(param_1 + DAT_00005f16) + iVar13) {
          *(int *)(param_1 + DAT_00005f16) = iVar5;
          goto LAB_00005f48;
        }
        iVar8 = *(int *)(param_1 + DAT_00005f16) + iVar13;
      }
      goto LAB_00005ef6;
    }
    if ((*(ushort *)(param_1 + DAT_00005f14) & 0x78) != 0) {
      iVar5 = (int)DAT_00005f10;
      *(undefined4 *)(param_1 + iVar5) = 0;
      uVar7 = iVar5 + 4;
      goto LAB_00005fc0;
    }
    if (*(int *)(param_1 + DAT_0000602a) - iVar12 < 1) {
      if (-1 < *(int *)(param_1 + DAT_0000602a) + iVar12) {
        *(undefined4 *)(param_1 + DAT_0000602a) = 0;
        goto LAB_00005f48;
      }
      iVar5 = (int)DAT_0000602a;
      iVar8 = *(int *)(param_1 + iVar5) + iVar12;
    }
    else {
      iVar5 = (int)DAT_0000602a;
      iVar8 = *(int *)(param_1 + iVar5) - iVar12;
    }
  }
  else {
    if ((*(ushort *)(param_1 + DAT_00005f14) & 0x40) != 0) {
      uVar7 = (uint)DAT_00005f16;
      goto LAB_00005fc0;
    }
    if (*(int *)(param_1 + DAT_00005f16) < 0) {
LAB_00005ece:
      *(undefined4 *)(param_1 + DAT_00005f16) = 0;
      goto LAB_00005f48;
    }
    if (iVar6 <= *(int *)(param_1 + DAT_00005f16) + iVar8) {
      if (iVar6 < *(int *)(param_1 + DAT_00005f16) + (int)DAT_00005f18) {
        *(int *)(param_1 + DAT_00005f16) = *(int *)(param_1 + DAT_00005f16) - iVar13;
      }
      else {
        *(int *)(param_1 + DAT_00005f16) = iVar6;
      }
      goto LAB_00005f48;
    }
    iVar8 = *(int *)(param_1 + DAT_00005f16) + iVar8;
LAB_00005ef6:
    iVar5 = (int)DAT_00005f16;
  }
  *(int *)(param_1 + iVar5) = iVar8;
LAB_00005f48:
  iVar5 = (*pcVar2)();
  if ((*(uint *)((int)DAT_0000602c + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 8) == 0) {
    return 0;
  }
  iVar5 = (int)DAT_0000602e;
  *(undefined4 *)(param_1 + iVar5) = 0;
  sVar4 = DAT_00006030;
  *(undefined4 *)(param_1 + iVar5 + 4) = 0;
  if (((*(ushort *)(pcVar3 + sVar4 + 0x48) | *(ushort *)(pcVar3 + sVar4 + 0x4a) |
        *(ushort *)(pcVar3 + sVar4 + 0x4e) | *(ushort *)(pcVar3 + sVar4 + 0x4c)) &
      *(ushort *)(pcVar3 + 8)) == 0) {
    return (int)(short)*(ushort *)(pcVar3 + sVar4 + 0x4c);
  }
                    // WARNING: Could not recover jumptable at 0x00005f98. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar7 = (*DAT_00006034)(5);
  return uVar7;
}



void FUN_00006038(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar2 = (*DAT_00006120)();
  pcVar1 = DAT_00006124;
  if (*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x10) + 0x16) == '\0') goto LAB_00006142;
  iVar5 = (int)DAT_0000610e;
  iVar2 = (*DAT_00006124)((int)DAT_00006110);
  if (iVar2 == 0) {
    iVar2 = (*pcVar1)((int)DAT_00006114);
    if (iVar2 != 0) {
      if (*(int *)(param_1 + DAT_00006112) < 0) {
        iVar2 = (int)DAT_00006112;
        *(int *)(param_1 + iVar2) = *(int *)(param_1 + iVar2) + iVar2 + -0x2d;
      }
      else {
        *(undefined4 *)(param_1 + DAT_00006112) = 0;
      }
      puVar4 = (undefined4 *)(DAT_00006116 + param_1);
      puVar3 = (undefined4 *)(DAT_00006118 + param_1);
      *puVar3 = *puVar4;
      puVar3[1] = puVar4[1];
      puVar3[2] = puVar4[2];
      goto LAB_00006142;
    }
    iVar2 = (*pcVar1)((int)DAT_0000611a);
    if (iVar2 == 0) {
      iVar2 = (*pcVar1)((int)DAT_0000611c);
      if (iVar2 != 0) {
        if (*(int *)(param_1 + DAT_00006112) < 0) {
          *(int *)(param_1 + DAT_00006112) = *(int *)(param_1 + DAT_00006112) + 0x25;
        }
        else {
          *(undefined4 *)(param_1 + DAT_000061f8) = 0;
        }
        puVar4 = (undefined4 *)(DAT_000061fa + param_1);
        puVar3 = (undefined4 *)(DAT_000061fc + param_1);
        *puVar3 = *puVar4;
        puVar3[1] = puVar4[1];
        puVar3[2] = puVar4[2];
      }
      goto LAB_00006142;
    }
    if (iVar5 < *(int *)(param_1 + DAT_00006112)) {
      *(int *)(param_1 + DAT_00006112) = *(int *)(param_1 + DAT_00006112) + -0x25;
    }
    else {
      *(int *)(param_1 + DAT_00006112) = iVar5;
    }
  }
  else if (iVar5 < *(int *)(param_1 + DAT_00006112)) {
    iVar2 = (int)DAT_00006112;
    *(int *)(param_1 + iVar2) = *(int *)(param_1 + iVar2) - (iVar2 + -0x2d);
  }
  else {
    *(int *)(param_1 + DAT_00006112) = iVar5;
  }
  puVar4 = (undefined4 *)(DAT_00006116 + param_1);
  puVar3 = (undefined4 *)(DAT_00006118 + param_1);
  *puVar3 = *puVar4;
  puVar3[1] = puVar4[1];
  puVar3[2] = puVar4[2];
LAB_00006142:
  *(int *)(DAT_000061fe + param_1) =
       *(int *)(param_1 + DAT_000061fa) + *(int *)(param_1 + DAT_000061fe);
  iVar2 = (int)DAT_00006200;
  *(int *)(param_1 + iVar2) = *(int *)(param_1 + DAT_00006202) + *(int *)(param_1 + DAT_00006200);
  iVar5 = (int)DAT_00006204;
  *(int *)(param_1 + iVar5) = *(int *)(param_1 + DAT_000061f8) + *(int *)(param_1 + iVar2 + 4);
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



void FUN_00006206(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = DAT_00006310;
  iVar3 = DAT_0000630c;
  iVar2 = (*DAT_00006310)();
  if ((((int)DAT_000062f6 & *(uint *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_000062f8)) !=
       0) && ((*(ushort *)(iVar3 + 10) & 1) != 0)) {
    iVar2 = (*pcVar1)();
    iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
    *(uint *)(iVar2 + DAT_000062f8) = *(uint *)(iVar2 + DAT_000062f8) & (int)DAT_000062fa;
  }
  if ((((*(ushort *)(param_1 + DAT_000062fc) & 2) == 0) &&
      (iVar2 = (*pcVar1)(), 0 < *(short *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_000062fe)
      )) && (iVar2 = FUN_00006dcc(), iVar2 != 0)) {
    if ((('\0' < *(char *)(param_1 + DAT_00006300)) &&
        (iVar2 = (*pcVar1)(),
        ((int)DAT_000062f6 & *(uint *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_000062f8)) ==
        0)) && ((*(ushort *)(DAT_00006302 + iVar3) & *(ushort *)(iVar3 + 6)) != 0)) {
      iVar2 = (*pcVar1)();
      if ((*(uint *)((int)DAT_00006304 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18)) & 1) != 0) {
                    // WARNING: Could not recover jumptable at 0x0000629c. Too many branches
                    // WARNING: Treating indirect jump as call
        (*DAT_00006314)(5);
        return;
      }
      iVar2 = (*pcVar1)();
      if (0 < *(short *)(*(int *)(*(int *)(iVar2 + 0x10) + 0xc) + (int)DAT_00006306)) {
        iVar3 = (*pcVar1)();
        iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
        *(uint *)(iVar3 + DAT_000062f8) = *(uint *)(iVar3 + DAT_000062f8) & 0xffffffbf;
        FUN_00006bdc(3);
        *(undefined2 *)(param_1 + DAT_00006308) = 0;
        *(undefined2 *)(param_1 + DAT_0000630a) = 0;
        return;
      }
    }
    if ((*(ushort *)(DAT_00006302 + iVar3) & *(ushort *)(iVar3 + 8)) != 0) {
                    // WARNING: Could not recover jumptable at 0x000062e8. Too many branches
                    // WARNING: Treating indirect jump as call
      (*DAT_00006314)(5);
      return;
    }
  }
  return;
}



void FUN_00006318(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = DAT_00006428;
  if ((*(ushort *)(param_1 + DAT_00006416) & 1) == 0) {
    iVar2 = (*DAT_00006428)();
    if ((0 < *(short *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_00006418)) &&
       (iVar3 = FUN_00006dcc(), iVar2 = DAT_0000642c, iVar3 != 0)) {
      if ((*(char *)(param_1 + DAT_0000641a) < '\x01') ||
         (((*(ushort *)(DAT_0000641c + DAT_0000642c) & *(ushort *)(DAT_0000642c + 6)) == 0 ||
          (iVar3 = (*pcVar1)(),
          *(short *)(*(int *)(*(int *)(iVar3 + 0x10) + 0xc) + (int)DAT_0000641e) < 1)))) {
        if ((*(ushort *)(DAT_0000641c + iVar2) & *(ushort *)(iVar2 + 8)) != 0) {
                    // WARNING: Could not recover jumptable at 0x0000639e. Too many branches
                    // WARNING: Treating indirect jump as call
          (*DAT_00006430)(5);
          return;
        }
      }
      else {
        iVar2 = (*pcVar1)();
        iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
        *(uint *)(iVar2 + DAT_00006420) = *(uint *)(iVar2 + DAT_00006420) & 0xffffffbf;
        FUN_00006bdc(0);
        *(undefined2 *)(param_1 + DAT_00006422) = 0;
      }
    }
  }
  return;
}



void FUN_000063ac(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_00006428;
  if ((*(ushort *)(param_1 + DAT_00006416) & 4) == 0) {
    iVar2 = (*DAT_00006428)();
    if (((0 < *(short *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_00006418)) &&
        (iVar2 = FUN_00006dcc(), iVar2 != 0)) &&
       (iVar2 = (*pcVar1)(),
       (DAT_00006434 & *(uint *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_00006420)) == 0)) {
      if (('\0' < *(char *)(param_1 + DAT_0000641a)) &&
         ((*(ushort *)(DAT_00006424 + DAT_0000642c) & *(ushort *)(DAT_0000642c + 6)) != 0)) {
        iVar2 = (*pcVar1)();
        iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
        *(uint *)(iVar2 + DAT_00006420) = *(uint *)(iVar2 + DAT_00006420) & 0xffffffbf;
LAB_00006448:
        FUN_00006bdc(0xc);
        iVar2 = (*pcVar1)();
                    // WARNING: Could not recover jumptable at 0x0000645a. Too many branches
                    // WARNING: Treating indirect jump as call
        (*DAT_00006484)(*(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x20));
        return;
      }
      if ((DAT_00006480 & *(ushort *)(param_1 + DAT_0000647e)) == 0) {
        if ((*(ushort *)(DAT_0000642c + 6) & 8) != 0) goto LAB_00006448;
        if ((*(ushort *)(DAT_00006482 + DAT_0000642c) & *(ushort *)(DAT_0000642c + 8)) != 0) {
                    // WARNING: Could not recover jumptable at 0x00006472. Too many branches
                    // WARNING: Treating indirect jump as call
          (*DAT_00006488)(5);
          return;
        }
      }
    }
  }
  return;
}



int FUN_0000648c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = DAT_00006620;
  pcVar4 = DAT_0000661c;
  pcVar3 = DAT_00006618;
  iVar2 = DAT_00006614;
  puVar1 = PTR_LAB_00006610;
  iVar6 = (*DAT_00006620)();
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
    uVar9 = *(undefined4 *)(param_1 + DAT_0000660a);
    uVar8 = DAT_00006628;
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
    if (*(int *)(*(short *)(iVar6 + 4) * 4 + DAT_00006630) == 0) {
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
    if (*(int *)(*(short *)(iVar6 + 4) * 4 + DAT_0000689c) == 0) {
      (*pcVar3)(1,8);
      (*pcVar4)();
    }
    else {
      (*pcVar5)();
      (*pcVar5)();
      (*pcVar5)();
      (*pcVar5)();
      (*pcVar3)(1,8);
      (*DAT_000068a0)();
      (*pcVar4)();
      (*pcVar5)();
      (*pcVar5)();
      (*pcVar5)();
      (*pcVar5)();
      (*pcVar3)(1,9);
      (*pcVar4)();
    }
    (*pcVar3)(1,10);
    uVar9 = *(undefined4 *)(param_1 + DAT_000069e0);
    uVar8 = DAT_000069f4;
    (*pcVar4)();
    (*pcVar3)(1,0xb,param_3,param_4,uVar8,uVar9);
    uVar10 = (int)*(char *)(param_1 + DAT_000069e2) & 0xff;
    uVar8 = DAT_000069f8;
    (*pcVar4)();
    (*pcVar3)(1,0xc,param_3,param_4,uVar8,uVar10);
    uVar10 = (int)*(char *)(param_1 + DAT_000069e4) & 0xff;
    uVar8 = DAT_000069fc;
    (*pcVar4)();
    (*pcVar3)(1,0xd,param_3,param_4,uVar8,uVar10);
    (*pcVar4)();
    (*pcVar3)(1,0xe);
    if (*(int *)(param_1 + DAT_000069e8) < 0) {
      iVar6 = (*DAT_00006a08)();
      uVar8 = DAT_00006a10;
    }
    else {
      iVar6 = (*DAT_00006a08)();
      uVar8 = DAT_00006a0c;
    }
    iVar6 = iVar6 >> 0xc;
    (*pcVar4)();
    (*pcVar3)(1,0xf,param_3,param_4,uVar8,iVar6);
    iVar6 = (*pcVar5)();
    iVar6 = (int)*(short *)(iVar6 + 4);
    uVar8 = DAT_00006a14;
    (*pcVar4)();
    (*pcVar3)(1,0x10,param_3,param_4,uVar8,iVar6);
    (*pcVar5)();
    (*pcVar4)();
    iVar6 = (int)*(short *)(iVar2 + 0x12);
    *(short *)(iVar2 + 0x10) = *(short *)(iVar2 + 0x12);
  }
  return iVar6;
}



void FUN_00006bdc(undefined param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  int iVar2;
  int iVar3;
  
  UNRECOVERED_JUMPTABLE = DAT_00006ca8;
  iVar1 = (*DAT_00006ca8)();
  iVar3 = *(int *)(*(int *)(iVar1 + 0x10) + 4);
  (*UNRECOVERED_JUMPTABLE)();
  *(undefined *)(iVar3 + DAT_00006c96) = param_1;
  iVar1 = (*UNRECOVERED_JUMPTABLE)();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 4);
  *(uint *)(iVar1 + DAT_00006c98) = *(uint *)(iVar1 + DAT_00006c98) | (int)DAT_00006c9a;
  iVar1 = (*UNRECOVERED_JUMPTABLE)();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 4);
  *(uint *)(iVar1 + DAT_00006c98) = *(uint *)(iVar1 + DAT_00006c98) & (int)DAT_00006c9c;
  iVar1 = (*UNRECOVERED_JUMPTABLE)();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 4);
  *(uint *)(iVar1 + DAT_00006c98) = *(uint *)(iVar1 + DAT_00006c98) & (int)DAT_00006c9e;
  iVar1 = (*UNRECOVERED_JUMPTABLE)();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 4);
  *(uint *)(iVar1 + DAT_00006c98) = *(uint *)(iVar1 + DAT_00006c98) | 0x10;
  iVar1 = (*UNRECOVERED_JUMPTABLE)();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 4);
  *(uint *)(iVar1 + DAT_00006c98) = *(uint *)(iVar1 + DAT_00006c98) | 0x20;
  iVar1 = (*UNRECOVERED_JUMPTABLE)();
  iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + 4);
  iVar1 = (int)DAT_00006c98;
  *(uint *)(iVar2 + iVar1) = *(uint *)(iVar2 + iVar1) | iVar1 + 0x78U;
  iVar1 = (int)DAT_00006ca0;
  *(undefined *)(iVar3 + iVar1) = 0;
  UNRECOVERED_JUMPTABLE = DAT_00006cac;
  *(undefined2 *)(iVar3 + iVar1 + -9) = 0;
  *(undefined2 *)(iVar3 + iVar1 + -7) = 0;
  *(undefined2 *)(iVar3 + DAT_00006ca2) = 0;
  iVar1 = (int)DAT_00006ca4;
  *(undefined4 *)(iVar3 + iVar1) = 0;
  *(undefined4 *)(iVar3 + iVar1 + 4) = 0;
  *(undefined4 *)(iVar3 + iVar1 + 8) = 0;
                    // WARNING: Could not recover jumptable at 0x00006c8a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(iVar3);
  return;
}



undefined4 FUN_00006dcc(void)

{
  int iVar1;
  
  iVar1 = (*DAT_00006e1c)();
  if ((*(uint *)((int)DAT_00006e0e + *(int *)(*(int *)(iVar1 + 0x10) + 4)) & 0x10) == 0) {
    return 1;
  }
  return 0;
}



int FUN_00006ebe(uint param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 & 0xffff) == 0) {
    iVar1 = (*DAT_00006f38)();
    iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + 4);
    iVar1 = (int)DAT_00006f30;
    *(ushort *)(iVar2 + iVar1) = *(ushort *)(iVar2 + iVar1) & (ushort)PTR_LAB_0000f0fe_1_00006f44;
  }
  else {
    iVar1 = (*DAT_00006f38)();
    iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + 4);
    iVar1 = (int)DAT_00006f30;
    *(ushort *)(iVar2 + iVar1) = *(ushort *)(iVar2 + iVar1) | (ushort)((param_1 & 0xf) << 8);
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00007118(undefined4 param_1)

{
  undefined4 uVar1;
  undefined auStack16 [16];
  
  (*_LAB_0000717c)();
  (*_LAB_00007180)(&stack0x00000000);
  (*_LAB_00007184)(&stack0x00000018);
  (*_LAB_00007188)(&stack0x0000000c,auStack16);
  (*DAT_00007190)(auStack16,param_1,_LAB_0000718c + 0x28);
  uVar1 = (*DAT_00007194)();
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00007cdc(short *param_1,char *param_2,short *param_3,short param_4,undefined2 *param_5,
                 int param_6)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  short sVar5;
  int unaff_r11;
  undefined2 *puVar6;
  
  iVar2 = DAT_00007dc4;
  sVar5 = *param_1;
  do {
    if (*param_2 == '\0') {
      return;
    }
    puVar6 = *(undefined2 **)(undefined4 *)(iVar2 + 0x14);
    if (param_6 == 0) {
      cVar1 = *param_2;
      iVar4 = DAT_00007dc0;
LAB_00007d22:
      unaff_r11 = (cVar1 + -0x30) * 0xc + iVar4;
    }
    else if (param_6 == 1) {
      cVar1 = *param_2;
      iVar4 = DAT_00007dc8;
      goto LAB_00007d22;
    }
    *puVar6 = DAT_00007db8;
    puVar6[2] = _LAB_00007dbc;
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



void FUN_0000827c(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = param_1;
  piVar3 = param_2;
  piVar4 = param_3;
  while( true ) {
    (*DAT_0000834c)(piVar1,piVar3,param_3);
    (*DAT_00008350)(((int)*(short *)param_4 & 0xffffU) * (int)DAT_00008348 + param_2[0xb]);
    (*DAT_00008354)(((int)*(short *)param_4 & 0xffffU) * (int)DAT_00008348 + param_2[0xb] + 0xc);
    piVar1 = param_1 + ((int)*(short *)param_4 & 0xffffU) * 0xe;
    if (*piVar4 == 0) {
      *piVar1 = 0;
    }
    else {
      *piVar1 = *piVar4;
      iVar2 = *DAT_00008358;
      piVar1[1] = *(int *)(iVar2 + 0xc);
      piVar1[2] = *(int *)(iVar2 + 0x1c);
      piVar1[3] = *(int *)(iVar2 + 0x2c);
      (*DAT_0000835c)(piVar1 + 7);
    }
    *(short *)param_4 = *(short *)param_4 + 1;
    if (piVar4[1] != 0) {
      FUN_0000827c(param_1,param_2,piVar4[1],param_4);
    }
    (*DAT_00008360)();
    if (piVar4[2] == 0) break;
    piVar3 = (int *)piVar4[2];
    piVar1 = param_2;
    param_3 = param_4;
    piVar4 = piVar3;
  }
  return;
}



void FUN_0000832e(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  int *piVar5;
  
  pcVar1 = DAT_00008364;
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
        uVar3 = (*DAT_000084cc)();
        *(undefined2 *)(piVar5 + 0xd) = uVar3;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_000086dc(void)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  (*DAT_00008824)();
  iVar1 = (*DAT_00008824)();
  iVar3 = 0;
  sVar2 = 0;
  iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 4);
  do {
    if ('\0' < *(char *)((int)sVar2 + _LAB_00008819_1 + iVar1)) {
      iVar4 = iVar4 + 1;
    }
    if ('\0' < *(char *)((int)(short)(sVar2 + 0xc) + _LAB_00008819_1 + iVar1)) {
      iVar4 = iVar4 + 1;
    }
    if ('\0' < *(char *)((int)(short)(sVar2 + 0x18) + _LAB_00008819_1 + iVar1)) {
      iVar4 = iVar4 + 1;
    }
    iVar3 = iVar3 + 4;
    if ('\0' < *(char *)((int)(short)(sVar2 + 0x24) + _LAB_00008819_1 + iVar1)) {
      iVar4 = iVar4 + 1;
    }
    sVar2 = sVar2 + 0x30;
  } while (iVar3 < _DAT_00008818);
  return iVar4;
}



bool FUN_0000875e(int param_1)

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
  
  pcVar1 = DAT_00008824;
  (*DAT_00008824)();
  local_2c = *(undefined4 *)(param_1 + 0x10);
  iStack40 = *(int *)(param_1 + 0x14);
  uStack36 = *(undefined4 *)(param_1 + 0x18);
  local_20 = **(undefined4 **)(param_1 + 4);
  uStack28 = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
  iStack24 = *(int *)(*(int *)(param_1 + 4) + 8);
  if ((((((*(uint *)(param_1 + 0x50) & 1) == 0) && ((DAT_00008828 & *(uint *)(param_1 + 0x50)) == 0)
        ) && (iVar2 = (*pcVar1)(param_1 + 0x10,param_1),
             *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 0xc) + (int)DAT_0000881c) <= iStack40)) &&
      (iVar2 = (*pcVar1)(),
      iStack40 <= *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 0xc) + (int)DAT_0000881e))) &&
     ((iVar2 = (*pcVar1)(),
      (*(uint *)((int)DAT_00008820 + *(int *)(*(int *)(iVar2 + 0x10) + 4)) & 1) != 0 ||
      ((*(uint *)(param_1 + 0x50) & 2) == 0)))) {
    (*DAT_00008a80)(&iStack72,&local_4c);
    bVar3 = iStack24 <= local_4c;
    iVar2 = (*pcVar1)();
    if (*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x10) + 0x1f) == '\0') {
      bVar3 = true;
    }
    else {
      (*DAT_00008a80)(&iStack72,&local_4c);
      if ((iStack24 < iStack72) || (local_4c < iStack24)) {
        bVar3 = false;
      }
      else {
        (*DAT_00008a84)(asStack68,asStack64);
        sStack56 = (*DAT_00008a88)((int)asStack68[0],local_20,iStack24);
        sStack60 = (*DAT_00008a88)((int)asStack64[0],uStack28,iStack24);
        (*DAT_00008a8c)(&local_34);
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



undefined4 * FUN_000088ee(int param_1,int param_2)

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
    puVar1 = (undefined4 *)(*DAT_00008a90)(iVar2);
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
      puVar1 = (undefined4 *)FUN_000088ee(param_1);
    }
    param_1 = iVar7 + 1;
    iVar2 = param_2;
  } while (param_1 < param_2);
  return puVar1;
}



void FUN_00008994(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
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
  
  uVar2 = DAT_00008a98;
  pcVar1 = DAT_00008a94;
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
  (*DAT_00008a94)(&local_48,DAT_00008a98,param_3);
  uStack68 = param_2[1];
  uStack56 = uStack68;
  uStack44 = uStack68;
  uStack32 = uStack68;
  (*pcVar1)(&local_48,uVar2,param_3);
  local_48 = *param_2;
  uStack68 = param_1[1];
  uStack60 = *param_2;
  uStack56 = param_1[1];
  (*pcVar1)(&local_48,uVar2,param_3);
  local_48 = *param_1;
  uStack60 = local_48;
  uStack48 = local_48;
  uStack36 = local_48;
  (*pcVar1)(&local_48,uVar2,param_3);
  return;
}



void FUN_00008a34(int *param_1)

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
  FUN_00008994(&iStack20,&local_20,param_1[2]);
  return;
}



int FUN_00008d30(int param_1)

{
  (*DAT_00008e64)(*(undefined4 *)(param_1 + 4),param_1 + 0x10,DAT_00008e60 + 0x28);
  return param_1 + 0x10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00008d54(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  *(int **)(param_1 + 0xc) = param_2;
  *(int *)(param_1 + 0x28) = *param_2;
  *(int *)(param_1 + 0x2c) = param_2[1];
  pcVar1 = _LAB_00008e68;
  *(int *)(param_1 + 0x30) = param_2[2];
  (*pcVar1)(param_1 + 0x28,param_1 + 0x1c);
  iVar2 = (*DAT_00008e6c)();
  if (*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x10) + 0x14) != '\0') {
    (*DAT_00008e70)(10,0xf);
    iVar2 = param_2[2] >> 0xc;
    iVar4 = param_2[1] >> 0xc;
    iVar3 = *param_2 >> 0xc;
    uVar5 = DAT_00008e74;
    (*DAT_00008e5c)();
    (*DAT_00008e70)(10,0x10,param_3,param_4,uVar5,iVar3,iVar4,iVar2);
    (*DAT_00008e5c)();
  }
  return;
}



void FUN_000096c0(int *param_1,int *param_2,int *param_3)

{
  *param_3 = (int)(*param_1 + *param_2 + (uint)(*param_1 + *param_2 < 0)) >> 1;
  param_3[1] = (int)(param_1[1] + param_2[1] + (uint)(param_1[1] + param_2[1] < 0)) >> 1;
  param_3[2] = (int)(param_1[2] + param_2[2] + (uint)(param_1[2] + param_2[2] < 0)) >> 1;
  return;
}



int FUN_00009778(int param_1,short param_2)

{
  short extraout_var;
  undefined4 uVar1;
  
  uVar1 = (*DAT_0000980c)(DAT_00009808,((int)*(char *)(param_1 + 0x60) & 0xffU) << 0x10,DAT_00009804
                         );
  (*DAT_00009810)((int)param_2 << 0x10,uVar1);
  return (int)extraout_var;
}



int FUN_00009b40(void)

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
  
  pcVar1 = DAT_00009be8;
  iVar3 = (*DAT_00009be8)();
  pcVar2 = DAT_00009bec;
  iVar3 = (int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x10) + 0x17);
  if (iVar3 != 0) {
    iVar3 = (*DAT_00009bec)((int)DAT_00009bd6);
    cVar9 = iVar3 != 0;
    iVar3 = (*pcVar2)((int)DAT_00009bd8);
    if (iVar3 != 0) {
      cVar9 = '\x02';
    }
    iVar3 = (*pcVar2)((int)DAT_00009bda);
    if (iVar3 != 0) {
      cVar9 = '\x03';
    }
    iVar3 = (*pcVar2)((int)DAT_00009bdc);
    if (iVar3 != 0) {
      cVar9 = '\x04';
    }
    iVar3 = (*pcVar2)((int)DAT_00009bde);
    if (iVar3 != 0) {
      cVar9 = '\x05';
    }
    iVar3 = (*pcVar2)((int)DAT_00009be0);
    if (iVar3 != 0) {
      cVar9 = '\x06';
    }
    iVar3 = (*DAT_00009bf0)((int)DAT_00009be2);
    pcVar2 = DAT_00009bf4;
    if (iVar3 != 0) {
      cVar9 = '\a';
    }
    if (cVar9 != '\0') {
      if (cVar9 == '\a') {
        local_20 = (int)DAT_00009be4;
        iStack28 = local_20;
        iStack24 = local_20;
      }
      else {
        uVar4 = (*DAT_00009bf4)();
        local_20 = (uVar4 & (int)DAT_00009d1c) + (int)DAT_00009d1e;
        uVar4 = (*pcVar2)();
        iStack28 = (uVar4 & (int)DAT_00009d20) + (int)DAT_00009d22;
        uVar4 = (*pcVar2)();
        iStack24 = (uVar4 & (int)DAT_00009d1c) + (int)DAT_00009d1e;
      }
      (*DAT_00009d28)(&local_20,auStack40);
      (*pcVar2)();
      iVar5 = (*DAT_00009d2c)();
      uVar6 = (*DAT_00009d30)();
      iVar3 = local_20;
      iVar10 = iStack28;
      iVar11 = iStack24;
      iVar7 = (*pcVar1)();
      iVar8 = *(int *)(*(int *)(iVar7 + 0x10) + 0x18);
      iVar7 = (*pcVar1)();
      (*DAT_00009d34)((int)DAT_00009d24 + *(int *)(*(int *)(iVar7 + 0x10) + 0x18),1,iVar8 + 8,
                      iVar5 + 1,iVar3,iVar10,iVar11,uVar6);
      pcVar1 = DAT_00009d40;
      iVar10 = DAT_00009d38;
      *(undefined2 *)(DAT_00009d38 + 0x12) = *(undefined2 *)(DAT_00009d38 + 0x10);
      *(short *)(iVar10 + 0x10) = (short)PTR_LAB_00009d3c;
      (*pcVar1)(0xc,4);
      pcVar2 = DAT_00009d44;
      (*DAT_00009d44)();
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



int FUN_00009d54(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar2 = DAT_00009e80;
  iVar5 = (*DAT_00009e80)();
  iVar9 = *(int *)(*(int *)(iVar5 + 0x10) + 4);
  iVar8 = (int)DAT_00009e6a;
  iVar5 = (*pcVar2)();
  iVar5 = (int)*(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x10) + 0x20);
  if (iVar5 != 0) {
    iVar5 = (*DAT_00009e84)();
    if ((iVar5 != 0) && (*(char *)(iVar9 + DAT_00009e6c) == '\f')) {
      iVar5 = (*DAT_00009e88)((int)DAT_00009e6e);
      if (iVar5 != 0) {
        iVar5 = (*pcVar2)();
        *(undefined *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x10) + 4) = 0;
      }
      iVar5 = (*DAT_00009e88)((int)DAT_00009e70);
      if (iVar5 != 0) {
        iVar5 = (*pcVar2)();
        *(undefined *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x10) + 4) = 1;
      }
      pcVar3 = DAT_00009e8c;
      iVar5 = (*pcVar2)();
      cVar1 = *(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x10) + 4);
      if (cVar1 == '\0') {
        iVar5 = (*pcVar3)((int)DAT_00009e72);
        if (iVar5 != 0) {
          iVar5 = (*pcVar2)();
          piVar6 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_00009e74)
                           & 0xffU) * 4 + DAT_00009e76 + iVar9);
          *piVar6 = *piVar6 + (int)DAT_00009e78;
        }
        iVar5 = (*pcVar3)((int)DAT_00009e7a);
        if (iVar5 != 0) {
          iVar5 = (*pcVar2)();
          piVar6 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_00009e74)
                           & 0xffU) * 4 + DAT_00009e76 + iVar9);
          *piVar6 = *piVar6 + (int)DAT_00009e7c;
        }
        iVar5 = (*pcVar2)();
        iVar7 = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_00009e74) &
                         0xffU) * 4 + DAT_00009e76 + iVar9);
        iVar5 = (*pcVar2)();
        *(int *)(iVar8 + iVar9 + 4) =
             iVar7 + *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0xc) + (int)DAT_00009e7e);
      }
      else if (cVar1 == '\x01') {
        iVar5 = (*pcVar3)((int)DAT_00009ff2);
        if (iVar5 != 0) {
          iVar5 = (*pcVar2)();
          piVar6 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_00009ff4)
                           & 0xffU) * 4 + DAT_00009ff6 + iVar9);
          *piVar6 = *piVar6 + (int)DAT_00009ff8;
        }
        iVar5 = (*pcVar3)((int)DAT_00009ffa);
        if (iVar5 != 0) {
          iVar5 = (*pcVar2)();
          piVar6 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_00009ff4)
                           & 0xffU) * 4 + DAT_00009ff6 + iVar9);
          *piVar6 = *piVar6 + (int)DAT_00009ffc;
        }
        iVar5 = (*pcVar2)();
        *(undefined4 *)(iVar9 + DAT_00009ff4 + 0x48) =
             *(undefined4 *)
              (((int)*(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_00009ff4) & 0xffU) *
               4 + DAT_00009ff6 + iVar9);
      }
    }
    pcVar3 = DAT_0000a00c;
    iVar8 = DAT_0000a004;
    *(undefined2 *)(DAT_0000a004 + 0x12) = *(undefined2 *)(DAT_0000a004 + 0x10);
    *(short *)(iVar8 + 0x10) = (short)PTR_LAB_0000a008;
    (*pcVar3)(0xc,0x16);
    pcVar4 = DAT_0000a010;
    iVar5 = (*pcVar2)();
    iVar5 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0xc) + (int)DAT_00009ffe) >> 0xc;
    uVar10 = DAT_0000a014;
    (*pcVar4)();
    (*pcVar3)(0xc,0x17,param_3,param_4,uVar10,iVar5);
    iVar9 = *(int *)(iVar9 + DAT_0000a000);
    iVar7 = iVar9 >> 0xc;
    iVar5 = (*pcVar2)();
    iVar5 = iVar9 - *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0xc) + (int)DAT_00009ffe) >> 0xc;
    uVar10 = DAT_0000a018;
    (*pcVar4)();
    (*pcVar3)(0xc,0x18,param_3,param_4,uVar10,iVar5,iVar7);
    (*pcVar4)();
    iVar5 = (int)*(short *)(iVar8 + 0x12);
    *(short *)(iVar8 + 0x10) = *(short *)(iVar8 + 0x12);
  }
  return iVar5;
}



void FUN_0000a020(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (*DAT_0000a124)();
  iVar4 = *(int *)(*(int *)(iVar2 + 0x10) + 0x1c);
  iVar2 = (*DAT_0000a124)();
  if (*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x10) + 0x10) != '\0') {
    iVar2 = (int)DAT_0000a118;
    if ((*(ushort *)(DAT_0000a11a + DAT_0000a128) & *(ushort *)(DAT_0000a128 + 0xc)) == 0) {
      if (((*(ushort *)(DAT_0000a11c + DAT_0000a128) & *(ushort *)(DAT_0000a128 + 0xc)) != 0) &&
         (iVar3 = *(int *)(iVar4 + 0x3c) - iVar2, *(int *)(iVar4 + 0x3c) = iVar3, iVar3 < iVar2)) {
        *(int *)(iVar4 + 0x3c) = iVar2;
      }
    }
    else {
      iVar2 = *(int *)(iVar4 + 0x3c) + iVar2;
      *(int *)(iVar4 + 0x3c) = iVar2;
      if (DAT_0000a12c < iVar2) {
        *(int *)(iVar4 + 0x3c) = DAT_0000a12c;
      }
    }
    pcVar1 = DAT_0000a138;
    iVar2 = DAT_0000a130;
    *(undefined2 *)(DAT_0000a130 + 0x12) = *(undefined2 *)(DAT_0000a130 + 0x10);
    *(short *)(iVar2 + 0x10) = (short)PTR_LAB_0000a134;
    (*pcVar1)(1,0x10);
    (*DAT_0000a140)();
    (*DAT_0000a148)();
    *(undefined2 *)(iVar2 + 0x10) = *(undefined2 *)(iVar2 + 0x12);
  }
  return;
}



void FUN_0000a584(short *param_1)

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
  
  pcVar4 = DAT_0000a814;
  cVar3 = *(char *)((int)param_1 + 0x25);
  if (cVar3 == '\0') {
    sVar1 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe) + 4);
    sVar2 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe) + 2);
    iStack24 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe)) * -0x20;
LAB_0000a682:
    iStack28 = (int)sVar2 << 5;
    local_20 = (int)sVar1 << 5;
  }
  else if (cVar3 == '\x01') {
    local_20 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe)) * -0x20;
    sVar1 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe) + 2);
    sVar2 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe) + 4);
LAB_0000a6c8:
    iStack28 = (int)sVar1 << 5;
    iStack24 = (int)sVar2 << 5;
  }
  else {
    if (cVar3 == '\x02') {
      sVar1 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe) + 4);
      sVar2 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe) + 2);
      iStack24 = (int)*(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe)) << 5;
      goto LAB_0000a682;
    }
    if (cVar3 == '\x03') {
      local_20 = (int)*(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe)) << 5;
      sVar1 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe) + 2);
      sVar2 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe) + 4);
      goto LAB_0000a6c8;
    }
  }
  if (*(int *)(param_1 + 0x14) == 0) goto LAB_0000a700;
  cVar3 = *(char *)((int)param_1 + 0x25);
  if (cVar3 == '\0') {
LAB_0000a6f0:
    local_20 = -local_20;
  }
  else {
    if (cVar3 != '\x01') {
      if (cVar3 == '\x02') goto LAB_0000a6f0;
      if (cVar3 != '\x03') goto LAB_0000a700;
    }
    iStack24 = -iStack24;
  }
LAB_0000a700:
  iVar5 = (*DAT_0000a814)();
  iVar8 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + 8);
  iVar5 = (*pcVar4)();
  iVar7 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0000a80e);
  iVar5 = (*pcVar4)();
  iVar9 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + 0xc);
  iVar5 = (*pcVar4)();
  iVar6 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0000a810);
  iVar5 = (*pcVar4)();
  iVar10 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + 0x10);
  iVar5 = (*pcVar4)();
  iVar5 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0000a812);
  *(int *)(param_1 + 2) = iVar8 + iVar7 + local_20;
  *(int *)(param_1 + 4) = iVar9 + iVar6 + iStack28;
  *(int *)(param_1 + 6) = iVar10 + iVar5 + iStack24;
  return;
}



uint FUN_0000a78c(short *param_1)

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
  
  pcVar1 = DAT_0000a814;
  iVar3 = (*DAT_0000a814)();
  iVar9 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + 8);
  iVar3 = (*pcVar1)();
  iVar9 = iVar9 + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0000a80e);
  iVar3 = (*pcVar1)();
  iVar10 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + 0xc);
  iVar3 = (*pcVar1)();
  iVar10 = iVar10 + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0000a810);
  iVar3 = (*pcVar1)();
  iVar11 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + 0x10);
  iVar3 = (*pcVar1)();
  pcVar2 = DAT_0000a818;
  iVar11 = iVar11 + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0000a812);
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
    uVar5 = (*DAT_0000a9e0)((int)*param_1 << 0x10,DAT_0000a9dc);
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



void FUN_0000a9e4(short *param_1)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  pcVar2 = DAT_0000aafc;
  sVar1 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe));
  iVar3 = (*DAT_0000aafc)();
  iVar4 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0000aaf4);
  iVar3 = (*pcVar2)();
  *(int *)(param_1 + 2) =
       sVar1 * 0x100 + iVar4 + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + 0x6c);
  sVar1 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe) + 2);
  iVar3 = (*pcVar2)();
  iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
  iVar5 = (int)DAT_0000aaf6;
  iVar4 = (*pcVar2)();
  *(int *)(param_1 + 4) =
       sVar1 * 0x100 +
       *(int *)(iVar5 + iVar3 +
               ((int)*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0000aaf8) & 0xffU) *
               4);
  sVar1 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0xe) + 4);
  iVar3 = (*pcVar2)();
  iVar4 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0000aafa);
  iVar3 = (*pcVar2)();
  *(int *)(param_1 + 6) =
       sVar1 * 0x100 + iVar4 + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + 0x74);
  iVar3 = (*pcVar2)();
  if (*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x10) + 0x1b) != '\0') {
    (*DAT_0000ab00)(5,0x16);
    (*DAT_0000ab08)();
  }
  return;
}



void FUN_0000ab0c(short *param_1)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  
  pcVar2 = DAT_0000abe0;
  sVar1 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0x10));
  iVar3 = (*DAT_0000abe0)();
  *(int *)(param_1 + 8) =
       sVar1 * 0x100 + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0000abda);
  sVar1 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0x10) + 2);
  iVar3 = (*pcVar2)();
  *(int *)(param_1 + 10) =
       sVar1 * 0x100 + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0000abdc);
  sVar1 = *(short *)(*param_1 * 6 + *(int *)(param_1 + 0x10) + 4);
  iVar3 = (*pcVar2)();
  *(int *)(param_1 + 0xc) =
       sVar1 * 0x100 + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0000abde);
  iVar3 = (*pcVar2)();
  if (*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x10) + 0x1b) != '\0') {
    (*DAT_0000abe4)(5,0x17);
    (*DAT_0000abec)();
  }
  return;
}



void FUN_0000abf0(short *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_0000ace8;
  iVar2 = (*DAT_0000ace8)();
  *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_0000ace0) =
       (int)*(short *)(*param_1 * 6 + *(int *)(param_1 + 0x12)) << 8;
  iVar2 = (*pcVar1)();
  *(int *)((int)DAT_0000ace2 + *(int *)(*(int *)(iVar2 + 0x10) + 4)) =
       (int)*(short *)(*param_1 * 6 + *(int *)(param_1 + 0x12) + 2) << 8;
  iVar2 = (*pcVar1)();
  *(int *)((int)DAT_0000ace4 + *(int *)(*(int *)(iVar2 + 0x10) + 4)) =
       (int)*(short *)(*param_1 * 6 + *(int *)(param_1 + 0x12) + 4) << 8;
  iVar2 = (*pcVar1)();
  if (*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x10) + 0x1b) != '\0') {
    (*DAT_0000acec)(5,0x18);
    (*DAT_0000acf4)();
  }
  return;
}



void FUN_0000acf8(short *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_0000adf0;
  iVar2 = (*DAT_0000adf0)();
  *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_0000ade8) =
       (int)*(short *)(*param_1 * 6 + *(int *)(param_1 + 0x14)) << 8;
  iVar2 = (*pcVar1)();
  *(int *)((int)DAT_0000adea + *(int *)(*(int *)(iVar2 + 0x10) + 4)) =
       (int)*(short *)(*param_1 * 6 + *(int *)(param_1 + 0x14) + 2) << 8;
  iVar2 = (*pcVar1)();
  *(int *)((int)DAT_0000adec + *(int *)(*(int *)(iVar2 + 0x10) + 4)) =
       (int)*(short *)(*param_1 * 6 + *(int *)(param_1 + 0x14) + 4) << 8;
  iVar2 = (*pcVar1)();
  if (*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x10) + 0x1b) != '\0') {
    (*DAT_0000adf4)(5,0x19);
    (*DAT_0000adfc)();
  }
  return;
}



void FUN_0000c266(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = (*DAT_0000c318)(param_1,DAT_0000c314,0xc);
  iVar4 = (*DAT_0000c31c)(9,0);
  iVar2 = DAT_0000c304;
  iVar1 = DAT_0000c300;
  if (iVar4 != 0) {
    if (iVar3 != 0) {
      *(uint *)(iVar3 + -4) = *(uint *)(iVar3 + -4) | 1;
      return;
    }
    return;
  }
  if (*(char *)(DAT_0000c300 + 0x4c) <= *(char *)(DAT_0000c300 + 0x4d)) {
    *(undefined2 *)(DAT_0000c304 + DAT_0000c2f4) = 8;
    *(undefined2 *)(iVar2 + DAT_0000c2f6) = 8;
  }
  if (param_2 != 0) {
    uVar5 = (*DAT_0000c320)(iVar1);
                    // WARNING: Could not recover jumptable at 0x0000c2ce. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_0000c30c)(iVar1,uVar5,DAT_0000c324,0x1e);
    return;
  }
  uVar5 = (*DAT_0000c320)(iVar1);
                    // WARNING: Could not recover jumptable at 0x0000c2e6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0000c30c)(iVar1,uVar5,PTR_LAB_0000c308,0x1e);
  return;
}



void FUN_0000c8ec(undefined4 param_1,int param_2,int *param_3)

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
  
  pcVar1 = DAT_0000ca1c;
  iVar6 = (int)DAT_0000ca14;
  iVar7 = (int)DAT_0000ca16;
  iVar8 = (int)DAT_0000ca18;
  iVar9 = (int)DAT_0000ca1a;
  iVar5 = 0;
  if (0 < param_2) {
    do {
      (*pcVar1)();
      iStack44 = (*DAT_0000ca20)();
      iStack44 = iStack44 + iVar6;
      (*pcVar1)();
      iStack40 = (*DAT_0000ca20)();
      iStack40 = iStack40 + iVar6;
      (*pcVar1)();
      iStack36 = (*DAT_0000ca20)();
      iStack36 = iStack36 + iVar7;
      uVar2 = (*pcVar1)();
      (*pcVar1)();
      iVar3 = (*DAT_0000ca20)();
      local_38 = *param_3;
      iStack52 = param_3[1];
      iStack48 = param_3[2];
      (*pcVar1)();
      iVar4 = (*DAT_0000ca20)();
      local_38 = local_38 + iVar4 + iVar8;
      (*pcVar1)();
      iVar4 = (*DAT_0000ca20)();
      iStack52 = iStack52 + iVar4 + iVar8;
      (*pcVar1)();
      iVar4 = (*DAT_0000ca20)();
      iStack48 = iStack48 + iVar4 + iVar8;
      (*DAT_0000ca24)(param_1,&local_38,&iStack44,iVar3 + iVar9,uVar2 & 0x19,3);
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
  }
  return;
}



void FUN_0000cd32(undefined4 param_1,short param_2,short param_3)

{
  int iVar1;
  
  iVar1 = (*DAT_0000cd70)((int)param_2 << 0x10,(int)param_3 << 0x10);
                    // WARNING: Could not recover jumptable at 0x0000cd5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0000cd78)(param_1,DAT_0000cd74 - iVar1);
  return;
}



void FUN_0000e0b0(undefined4 *param_1)

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
  
  piVar7 = DAT_0000e268;
  iVar6 = DAT_0000e264;
  uVar5 = DAT_0000e25a;
  sVar1 = *(short *)((int)param_1 + 6);
  puVar11 = (undefined4 *)(DAT_0000e264 + 0x14);
  iVar12 = *(int *)(*DAT_0000e260 + 0xc);
  sVar2 = *(short *)((int)param_1 + 0xe);
  uVar8 = *param_1;
  sVar3 = *(short *)((int)param_1 + 2);
  puVar10 = (undefined2 *)*puVar11;
  *puVar10 = DAT_0000e25a;
  puVar10[2] = *(undefined2 *)(piVar7[1] + 10);
  puVar10[3] = *(short *)(*(int *)(iVar12 + 4) + 4) + *(short *)(piVar7[1] + 6);
  puVar10[4] = *(short *)(*(int *)(iVar12 + 4) + 4) + *(short *)(piVar7[1] + 2);
  puVar10[5] = *(undefined2 *)(piVar7[1] + 8);
  puVar10[6] = (short)uVar8 + -3;
  puVar10[7] = -sVar1;
  puVar10[10] = sVar3 + 3;
  puVar10[0xb] = -sVar2;
  iVar9 = *(int *)(iVar6 + 0x34);
  *(short *)(iVar9 + 4) = (short)((uint)(*(int *)(iVar6 + DAT_0000e25c) << 0xc) >> 0x10);
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
  *(short *)(iVar9 + 4) = (short)((uint)(*(int *)(iVar6 + DAT_0000e25c) << 0xc) >> 0x10);
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
  *(short *)(iVar9 + 4) = (short)((uint)(*(int *)(iVar6 + DAT_0000e25c) << 0xc) >> 0x10);
  *(short *)(iVar9 + 6) = (short)((uint)puVar10 >> 3);
  *(int *)(iVar6 + 0x34) = iVar9 + 8;
  *(int *)(iVar6 + 0x30) = *(int *)(iVar6 + 0x30) + 1;
  *(undefined4 *)(iVar6 + 0x14) = puVar10 + 0x10;
  *(int *)(iVar6 + 0x20) = *(int *)(iVar6 + 0x20) + 1;
  return;
}



void FUN_0000e97a(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0000ead0;
  param_1[6] = (int)(param_1[9] - param_1[3]) >> 1;
  param_1[7] = (int)(param_1[10] - param_1[4]) >> 1;
  param_1[8] = (int)(param_1[0xb] - param_1[5]) >> 1;
  param_1[0xc] = 0;
  uVar1 = (*DAT_0000ead4)(uVar1,(int)*(short *)(param_1 + 0xe) << 0x10);
  param_1[0xd] = uVar1;
  *param_1 = param_1[3];
  param_1[1] = param_1[4];
  param_1[2] = param_1[5];
  return;
}



bool FUN_0000e9c2(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  pcVar2 = DAT_0000eadc;
  bVar1 = DAT_0000ead0 <= param_1[0xc];
  if (bVar1) {
    param_1[0xc] = DAT_0000ead0;
    param_1[0xd] = 0;
    *param_1 = param_1[9];
    param_1[1] = param_1[10];
    param_1[2] = param_1[0xb];
  }
  else {
    iVar5 = param_1[6];
    uVar6 = *(undefined4 *)
             ((short)((ushort)((uint)param_1[0xc] >> 0x10) & DAT_0000eace) * 4 + DAT_0000ead8);
    iVar4 = param_1[3];
    iVar3 = (*DAT_0000eadc)(uVar6,iVar5);
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



uint FUN_0000ef44(int *param_1)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  pcVar1 = DAT_0000f030;
  iVar3 = (*DAT_0000f030)();
  pcVar2 = DAT_0000f034;
  iVar7 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar4 = (*pcVar2)();
  uVar4 = uVar4 & 1;
  iVar3 = (*pcVar1)();
  uVar5 = (int)*(char *)((int)DAT_0000f024 + *(int *)(*(int *)(iVar3 + 0x10) + 4)) & 0xff;
  if (uVar5 == 0) {
    iVar3 = (*pcVar1)();
    param_1[2] = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0000f024)
                          & 0xffU) * 4 + DAT_0000f026 + iVar7) >> 1;
    if (uVar4 == 0) {
      iVar3 = (*pcVar1)();
      uVar4 = (uint)DAT_0000f024;
      *param_1 = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU) * 4
                         + DAT_0000f026 + iVar7) >> 1;
      return uVar4;
    }
    iVar3 = (*pcVar1)();
    uVar4 = (uint)DAT_0000f024;
    piVar6 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU) * 4 +
                    DAT_0000f026 + iVar7);
LAB_0000f08e:
    *param_1 = -(*piVar6 >> 1);
  }
  else {
    if (uVar5 == 1) {
      iVar3 = (*pcVar1)();
      *param_1 = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0000f024)
                          & 0xffU) * 4 + DAT_0000f026 + iVar7) >> 1;
      if (uVar4 == 0) {
        iVar3 = (*pcVar1)();
        uVar4 = (uint)DAT_0000f168;
        param_1[2] = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU)
                              * 4 + DAT_0000f16a + iVar7) >> 1;
        return uVar4;
      }
      iVar3 = (*pcVar1)();
      uVar4 = (uint)DAT_0000f024;
      piVar6 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU) * 4 +
                      DAT_0000f026 + iVar7);
    }
    else {
      if (uVar5 == 2) {
        iVar3 = (*pcVar1)();
        param_1[2] = -(*(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) +
                                               (int)DAT_0000f168) & 0xffU) * 4 +
                               DAT_0000f16a + iVar7) >> 1);
        if (uVar4 == 0) {
          iVar3 = (*pcVar1)();
          uVar4 = (uint)DAT_0000f168;
          *param_1 = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU)
                              * 4 + DAT_0000f16a + iVar7) >> 1;
          return uVar4;
        }
        iVar3 = (*pcVar1)();
        uVar4 = (uint)DAT_0000f168;
        piVar6 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU) * 4
                        + DAT_0000f16a + iVar7);
        goto LAB_0000f08e;
      }
      if (uVar5 != 3) {
        return uVar5;
      }
      iVar3 = (*pcVar1)();
      *param_1 = -(*(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0000f168
                                           ) & 0xffU) * 4 + DAT_0000f16a + iVar7) >> 1);
      if (uVar4 == 0) {
        iVar3 = (*pcVar1)();
        uVar4 = (uint)DAT_0000f168;
        param_1[2] = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU)
                              * 4 + DAT_0000f16a + iVar7) >> 1;
        return uVar4;
      }
      iVar3 = (*pcVar1)();
      uVar4 = (uint)DAT_0000f168;
      piVar6 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU) * 4 +
                      DAT_0000f16a + iVar7);
    }
    param_1[2] = -(*piVar6 >> 1);
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_0000f120(int *param_1)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  pcVar1 = _DAT_0000f16c;
  iVar3 = (*_DAT_0000f16c)();
  pcVar2 = _LAB_0000f16f_1;
  iVar7 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar4 = (*pcVar2)();
  uVar4 = uVar4 & 1;
  iVar3 = (*pcVar1)();
  uVar5 = (int)*(char *)((int)DAT_0000f168 + *(int *)(*(int *)(iVar3 + 0x10) + 4)) & 0xff;
  if (uVar5 == 0) {
    iVar3 = (*pcVar1)();
    param_1[2] = -*(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0000f2b4)
                           & 0xffU) * 4 + DAT_0000f2b6 + iVar7);
    if (uVar4 == 0) {
      iVar3 = (*pcVar1)();
      uVar4 = (uint)DAT_0000f2b4;
      *param_1 = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU) * 4
                         + DAT_0000f2b6 + iVar7);
      return uVar4;
    }
    iVar3 = (*pcVar1)();
    uVar4 = (uint)DAT_0000f2b4;
    piVar6 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU) * 4 +
                    DAT_0000f2b6 + iVar7);
LAB_0000f254:
    *param_1 = -*piVar6;
  }
  else {
    if (uVar5 == 1) {
      iVar3 = (*pcVar1)();
      *param_1 = -*(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0000f2b4)
                           & 0xffU) * 4 + DAT_0000f2b6 + iVar7);
      if (uVar4 == 0) {
        iVar3 = (*pcVar1)();
        uVar4 = (uint)DAT_0000f2b4;
        param_1[2] = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU)
                              * 4 + DAT_0000f2b6 + iVar7);
        return uVar4;
      }
      iVar3 = (*pcVar1)();
      uVar4 = (uint)DAT_0000f2b4;
      piVar6 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU) * 4 +
                      DAT_0000f2b6 + iVar7);
    }
    else {
      if (uVar5 == 2) {
        iVar3 = (*pcVar1)();
        param_1[2] = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) +
                                             (int)DAT_0000f2b4) & 0xffU) * 4 + DAT_0000f2b6 + iVar7)
        ;
        if (uVar4 == 0) {
          iVar3 = (*pcVar1)();
          uVar4 = (uint)DAT_0000f2b4;
          *param_1 = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU)
                              * 4 + DAT_0000f2b6 + iVar7);
          return uVar4;
        }
        iVar3 = (*pcVar1)();
        uVar4 = (uint)DAT_0000f2b4;
        piVar6 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU) * 4
                        + DAT_0000f2b6 + iVar7);
        goto LAB_0000f254;
      }
      if (uVar5 != 3) {
        return uVar5;
      }
      iVar3 = (*pcVar1)();
      *param_1 = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0000f2b4)
                          & 0xffU) * 4 + DAT_0000f2b6 + iVar7);
      if (uVar4 == 0) {
        iVar3 = (*pcVar1)();
        uVar4 = (uint)DAT_0000f3ac;
        param_1[2] = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU)
                              * 4 + DAT_0000f3ae + iVar7);
        return uVar4;
      }
      iVar3 = (*pcVar1)();
      uVar4 = (uint)DAT_0000f2b4;
      piVar6 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + uVar4) & 0xffU) * 4 +
                      DAT_0000f2b6 + iVar7);
    }
    param_1[2] = -*piVar6;
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_0000f2de(int *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  pcVar1 = DAT_0000f3b8;
  iVar2 = (*DAT_0000f3b8)();
  iVar4 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar2 = (*pcVar1)();
  uVar3 = (int)*(char *)((int)DAT_0000f3ac + *(int *)(*(int *)(iVar2 + 0x10) + 4)) & 0xff;
  if (uVar3 == 0) {
    iVar2 = (*pcVar1)();
    uVar3 = (uint)_LAB_0000f3b0;
    iVar2 = -*(int *)(iVar4 + uVar3) -
            *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_0000f3ac) &
                     0xffU) * 4 + DAT_0000f3ae + iVar4);
LAB_0000f37e:
    param_1[2] = iVar2;
  }
  else {
    if (uVar3 == 1) {
      iVar2 = (*pcVar1)();
      uVar3 = (uint)DAT_0000f3b2;
      iVar2 = -*(int *)(iVar4 + uVar3) -
              *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_0000f3ac) &
                       0xffU) * 4 + DAT_0000f3ae + iVar4);
    }
    else {
      if (uVar3 == 2) {
        iVar2 = (*pcVar1)();
        uVar3 = (uint)DAT_0000f3ae;
        iVar2 = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_0000f3ac) &
                         0xffU) * 4 + DAT_0000f3ae + iVar4) + *(int *)(iVar4 + uVar3);
        goto LAB_0000f37e;
      }
      if (uVar3 != 3) {
        return uVar3;
      }
      iVar2 = (*pcVar1)();
      uVar3 = (uint)DAT_0000f3b4;
      iVar2 = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_0000f3ac) &
                       0xffU) * 4 + DAT_0000f3ae + iVar4) + *(int *)(iVar4 + uVar3);
    }
    *param_1 = iVar2;
  }
  return uVar3;
}



void FUN_0000f3bc(int param_1)

{
  char cVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  
  pcVar3 = DAT_0000f4d4;
  pcVar2 = DAT_0000f4d0;
  uVar7 = DAT_0000f4cc;
  iVar4 = (*DAT_0000f4d4)();
  cVar1 = *(char *)((int)DAT_0000f4c8 + *(int *)(*(int *)(iVar4 + 0x10) + 4));
  if (cVar1 == '\0') {
    iVar4 = (*pcVar3)();
    iVar4 = *(int *)(*(int *)(iVar4 + 0x10) + 4);
    iVar8 = (int)DAT_0000f4ca;
    iVar5 = (*pcVar3)();
    iVar4 = (*pcVar2)(uVar7,*(undefined4 *)
                             (iVar8 + iVar4 +
                             ((int)*(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) +
                                            (int)DAT_0000f4c8) & 0xffU) * 4));
LAB_0000f460:
    *(int *)(param_1 + 0xc) = iVar4;
  }
  else {
    if (cVar1 == '\x01') {
      iVar4 = (*pcVar3)();
      iVar8 = (int)DAT_0000f4ca;
      iVar4 = *(int *)(*(int *)(iVar4 + 0x10) + 4);
      iVar5 = (*pcVar3)();
      iVar4 = (*pcVar2)(uVar7,*(undefined4 *)
                               (iVar8 + iVar4 +
                               ((int)*(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) +
                                              (int)DAT_0000f4c8) & 0xffU) * 4));
    }
    else {
      if (cVar1 == '\x02') {
        iVar4 = (*pcVar3)();
        iVar4 = *(int *)(*(int *)(iVar4 + 0x10) + 4);
        iVar8 = (int)DAT_0000f4ca;
        iVar5 = (*pcVar3)();
        iVar4 = (*pcVar2)(uVar7,*(undefined4 *)
                                 (iVar8 + iVar4 +
                                 ((int)*(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) +
                                                (int)DAT_0000f4c8) & 0xffU) * 4));
        iVar4 = -iVar4;
        goto LAB_0000f460;
      }
      if (cVar1 != '\x03') goto LAB_0000f48a;
      iVar4 = (*pcVar3)();
      iVar4 = *(int *)(*(int *)(iVar4 + 0x10) + 4);
      iVar8 = (int)DAT_0000f4ca;
      iVar5 = (*pcVar3)();
      iVar4 = (*pcVar2)(uVar7,*(undefined4 *)
                               (iVar8 + iVar4 +
                               ((int)*(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) +
                                              (int)DAT_0000f4c8) & 0xffU) * 4));
      iVar4 = -iVar4;
    }
    *(int *)(param_1 + 4) = iVar4;
  }
LAB_0000f48a:
  uVar6 = (*DAT_0000f4d8)();
  if ((uVar6 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x20) = DAT_0000f4e0;
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = DAT_0000f4dc;
  }
  (*DAT_0000f4d8)();
  iVar4 = (*DAT_0000f4e4)();
  if (iVar4 == 0) {
    *(undefined **)(param_1 + 0x1c) = PTR_LAB_0002d82c_1_0000f4e8;
  }
  else if (iVar4 == 1) {
    *(undefined4 *)(param_1 + 0x1c) = DAT_0000f5e4;
  }
  else if (iVar4 == 2) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  uVar7 = (*pcVar2)(DAT_0000f5e8,*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x10) = uVar7;
  uVar7 = (*pcVar2)(DAT_0000f5e8,*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x14) = uVar7;
  return;
}



uint FUN_0000f514(int param_1)

{
  code *pcVar1;
  code *pcVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  uVar4 = (*DAT_0000f5ec)();
  pcVar2 = DAT_0000f5f0;
  iVar5 = (*DAT_0000f5f0)();
  uVar7 = DAT_0000f5f8;
  iVar5 = *(int *)(*(int *)(iVar5 + 0x10) + 8);
  if ((uVar4 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x14) = DAT_0000f600;
    *(undefined4 *)(param_1 + 0x20) = DAT_0000f604;
    uVar7 = DAT_0000f608;
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = DAT_0000f5f4;
    *(undefined4 *)(param_1 + 0x20) = uVar7;
    uVar7 = DAT_0000f5fc;
  }
  *(undefined4 *)(iVar5 + 0x6c) = uVar7;
  iVar5 = (*pcVar2)();
  iVar9 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + 0x10);
  iVar5 = (*pcVar2)();
  puVar3 = PTR_LAB_0002d82c_1_0000f610;
  if (iVar9 - *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + 0xc) < 0) {
    *(undefined4 *)(param_1 + 0x10) = DAT_0000f614;
    *(undefined4 *)(param_1 + 0x1c) = DAT_0000f5e4;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = DAT_0000f60c;
    *(undefined **)(param_1 + 0x1c) = puVar3;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  pcVar1 = DAT_0000f5ec;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar6 = (*pcVar1)();
  uVar7 = DAT_0000f61c;
  pcVar1 = DAT_0000f618;
  uVar6 = uVar6 & 1;
  iVar5 = (*pcVar2)();
  uVar4 = (int)*(char *)((int)DAT_0000f5dc + *(int *)(*(int *)(iVar5 + 0x10) + 4)) & 0xff;
  if (uVar4 == 0) {
    if (uVar6 == 0) {
      iVar5 = (*pcVar2)();
      uVar8 = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0000f5e0);
    }
    else {
      iVar5 = (*pcVar2)();
      uVar8 = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0000f5de);
    }
    uVar4 = (*pcVar1)(uVar7,uVar8);
    *(uint *)(param_1 + 0xc) = uVar4;
  }
  else if (uVar4 == 1) {
    if (uVar6 == 0) {
      iVar5 = (*pcVar2)();
      uVar8 = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0000f706);
    }
    else {
      iVar5 = (*pcVar2)();
      uVar8 = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0000f704);
    }
    uVar4 = (*pcVar1)(uVar7,uVar8);
    *(uint *)(param_1 + 4) = uVar4;
  }
  else if (uVar4 == 2) {
    if (uVar6 == 0) {
      iVar5 = (*pcVar2)();
      uVar8 = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0000f70a);
    }
    else {
      iVar5 = (*pcVar2)();
      uVar8 = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0000f708);
    }
    iVar5 = (*pcVar1)(uVar7,uVar8);
    uVar4 = -iVar5;
    *(uint *)(param_1 + 0xc) = uVar4;
  }
  else if (uVar4 == 3) {
    if (uVar6 == 0) {
      iVar5 = (*pcVar2)();
      uVar8 = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0000f704);
    }
    else {
      iVar5 = (*pcVar2)();
      uVar8 = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0000f706);
    }
    iVar5 = (*pcVar1)(uVar7,uVar8);
    uVar4 = -iVar5;
    *(uint *)(param_1 + 4) = uVar4;
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char FUN_0000f6a6(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  uVar5 = (*_LAB_0000f70c)();
  pcVar1 = DAT_0000f710;
  iVar6 = (*DAT_0000f710)();
  uVar3 = DAT_0000f720;
  uVar9 = DAT_0000f71c;
  uVar2 = DAT_0000f718;
  uVar8 = DAT_0000f714;
  iVar6 = *(int *)(*(int *)(iVar6 + 0x10) + 8);
  if ((uVar5 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x14) = DAT_0000f71c;
    *(undefined4 *)(param_1 + 0x20) = uVar3;
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = DAT_0000f714;
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    uVar9 = uVar8;
  }
  *(undefined4 *)(iVar6 + 0x6c) = uVar9;
  iVar6 = (*pcVar1)();
  iVar10 = *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) + 0x10);
  iVar6 = (*pcVar1)();
  puVar4 = PTR_LAB_0000f728;
  if (iVar10 - *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x18) + 0xc) < 0) {
    *(undefined4 *)(param_1 + 0x10) = DAT_0000f84c;
    *(undefined4 *)(param_1 + 0x1c) = DAT_0000f850;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = DAT_0000f724;
    *(undefined **)(param_1 + 0x1c) = puVar4;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar6 = (*pcVar1)();
  cVar7 = *(char *)((int)DAT_0000f848 + *(int *)(*(int *)(iVar6 + 0x10) + 4));
  if (cVar7 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = DAT_0000f854;
    return cVar7;
  }
  uVar8 = DAT_0000f854;
  if (cVar7 != '\x01') {
    if (cVar7 == '\x02') {
      *(undefined4 *)(param_1 + 0xc) = DAT_0000f858;
      return cVar7;
    }
    uVar8 = DAT_0000f858;
    if (cVar7 != '\x03') {
      return cVar7;
    }
  }
  *(undefined4 *)(param_1 + 4) = uVar8;
  return cVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_0000f77c(int *param_1,int param_2)

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
  
  pcVar1 = _DAT_0000f85c;
  iVar3 = (*_DAT_0000f85c)();
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
    uVar2 = _LAB_0000f863_1;
    pcVar1 = _LAB_0000f85f_1;
    iVar7 = *(int *)(iVar3 + 0x14);
    iVar4 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + 0x10);
    iVar3 = (*_LAB_0000f85f_1)(_LAB_0000f863_1,iVar5 - iVar8);
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



void FUN_0000f9a0(int param_1)

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
  
  iVar2 = (*DAT_0000fa20)();
  uVar8 = DAT_0000fb74;
  pcVar1 = DAT_0000fb70;
  iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 8);
  if (param_1 == 0) {
    iVar9 = (int)DAT_0000fa1c;
    local_34 = *(int *)(iVar2 + iVar9 + -0x50) - *(int *)(iVar2 + iVar9);
    iStack48 = *(int *)(iVar2 + iVar9 + -0x4c) - *(int *)(iVar2 + iVar9 + 4);
    iStack44 = *(int *)(iVar2 + iVar9 + -0x48) - *(int *)(iVar2 + iVar9 + 8);
    local_28 = *(int *)(iVar2 + iVar9 + -0x44) - *(int *)(iVar2 + iVar9 + 0xc);
    iStack36 = *(int *)(iVar2 + iVar9 + -0x40) - *(int *)(iVar2 + iVar9 + 0x10);
    iStack32 = *(int *)(iVar2 + iVar9 + -0x3c) - *(int *)(iVar2 + iVar9 + 0x14);
  }
  else if (param_1 == 1) {
    iVar9 = (int)DAT_0000fb68;
    local_34 = *(int *)(iVar2 + iVar9 + 0x50) - *(int *)(iVar2 + iVar9);
    iStack48 = *(int *)(iVar2 + iVar9 + 0x54) - *(int *)(iVar2 + iVar9 + 4);
    iStack44 = *(int *)(iVar2 + iVar9 + 0x58) - *(int *)(iVar2 + iVar9 + 8);
    local_28 = *(int *)(iVar2 + iVar9 + 0x5c) - *(int *)(iVar2 + iVar9 + 0xc);
    iStack36 = *(int *)(iVar2 + iVar9 + 0x60) - *(int *)(iVar2 + iVar9 + 0x10);
    iStack32 = *(int *)(iVar2 + iVar9 + 100) - *(int *)(iVar2 + iVar9 + 0x14);
  }
  uVar3 = (*DAT_0000fb70)(DAT_0000fb74,local_34);
  uVar4 = (*pcVar1)(uVar8,iStack48);
  uVar5 = (*pcVar1)(uVar8,iStack44);
  uVar6 = (*pcVar1)(uVar8,local_28);
  uVar7 = (*pcVar1)(uVar8,iStack36);
  uVar8 = (*pcVar1)(uVar8,iStack32);
  iVar9 = (int)DAT_0000fb68;
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



void FUN_0001034e(char *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  
  if ((*param_1 == '\0') && ((param_1[1] & 2U) != 0)) {
    param_1[1] = param_1[1] & 0xfd;
    iVar1 = DAT_000103ec;
    iVar2 = (*DAT_000103f4)((int)*(short *)(DAT_000103ec + DAT_000103e6) << 0x10,DAT_000103f0,
                            param_3,(int)param_2);
    sVar4 = (short)((uint)(iVar2 + DAT_000103f8) >> 0x10);
    sVar3 = *(short *)(iVar1 + DAT_000103e6) - *(short *)(iVar1 + DAT_000103e8);
    if (sVar4 <= sVar3) {
      sVar3 = sVar4;
    }
    *(short *)(iVar1 + DAT_000103e8) = *(short *)(iVar1 + DAT_000103e8) + sVar3;
  }
  return;
}



void FUN_00010350(char *param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  
  if ((*param_1 == '\0') && ((param_1[1] & 2U) != 0)) {
    param_1[1] = param_1[1] & 0xfd;
    iVar1 = DAT_000103ec;
    iVar2 = (*DAT_000103f4)((int)*(short *)(DAT_000103ec + DAT_000103e6) << 0x10,DAT_000103f0);
    sVar4 = (short)((uint)(iVar2 + DAT_000103f8) >> 0x10);
    sVar3 = *(short *)(iVar1 + DAT_000103e6) - *(short *)(iVar1 + DAT_000103e8);
    if (sVar4 <= sVar3) {
      sVar3 = sVar4;
    }
    *(short *)(iVar1 + DAT_000103e8) = *(short *)(iVar1 + DAT_000103e8) + sVar3;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000103a4(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = _DAT_000103fc;
  if ((*(byte *)(param_1 + 1) & 8) == 0) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 8;
    iVar2 = (*pcVar1)();
    if ((_LAB_000103ff_1 & *(uint *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x18) + (int)DAT_000103ea))
        == 0) {
      *(undefined *)(param_1 + 2) = 1;
    }
    iVar2 = (*_DAT_000103fc)();
    iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
    *(uint *)(iVar2 + DAT_000103ea) = *(uint *)(iVar2 + DAT_000103ea) | _LAB_000103ff_1;
  }
  return;
}



void FUN_000104e8(void)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  short sVar4;
  
  pcVar1 = DAT_000105cc;
  iVar3 = (*DAT_000105cc)();
  iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
  *(uint *)(iVar3 + DAT_000105b8) = *(uint *)(iVar3 + DAT_000105b8) & 0xffffff80;
  iVar3 = (*pcVar1)();
  *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_000105ba) = 0;
  iVar3 = (*pcVar1)();
  *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_000105bc) = 0;
  iVar3 = (*pcVar1)();
  *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_000105be) = 0;
  iVar3 = (*pcVar1)();
  *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_000105c0) = 0;
  iVar3 = (*pcVar1)();
  *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_000105c2) = 0;
  iVar3 = (*pcVar1)();
  pcVar2 = DAT_000105d0;
  *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_000105c4) = 0;
  sVar4 = (*pcVar2)(0x3c);
  iVar3 = (*pcVar1)();
  *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_000105c6) = (int)sVar4 << 0x10;
  return;
}



void FUN_000107a0(short *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
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
    iVar1 = (*DAT_00010880)();
    if (extraout_r2 < iVar1) {
      iVar1 = extraout_r2;
    }
    if (0 < iVar1) {
      local_14 = *param_1 + DAT_0001087a;
      sStack16 = (short)iVar1 + *param_1 + DAT_0001087a;
      sStack18 = 0x70 - param_1[1];
      sStack10 = (-sVar2 - param_1[1]) + 0x70;
      sStack14 = sStack18;
      local_c = sStack16;
      local_8 = local_14;
      sStack6 = sStack10;
      (*DAT_00010884)((int)DAT_0001087c,&local_14,(int)param_7,0,&local_14);
    }
  }
  return;
}



void FUN_00010ba0(int param_1)

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
  
  psVar7 = DAT_00010d28;
  psVar6 = DAT_00010d24;
  pcVar5 = DAT_00010d20;
  puVar17 = DAT_00010d1c;
  sVar1 = *DAT_00010d28;
  sVar2 = *DAT_00010d24;
  iVar10 = (*DAT_00010d20)();
  sVar12 = sVar2 + sVar1 + *(short *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x20) + 0x16) +
           DAT_00010d18;
  sVar2 = psVar6[1];
  sVar1 = psVar7[1];
  iVar11 = (*pcVar5)();
  piVar9 = DAT_00010d34;
  piVar8 = DAT_00010d30;
  iVar10 = DAT_00010d2c;
  uVar4 = DAT_00010d1a;
  sVar3 = *(short *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x20) + 0x18);
  puVar16 = (undefined4 *)(DAT_00010d2c + 0x14);
  puVar14 = (undefined2 *)*puVar16;
  puVar15 = *(undefined2 **)(DAT_00010d2c + 0x24);
  *(undefined2 **)(DAT_00010d2c + 0x24) = puVar15 + 4;
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
    iVar11 = (*DAT_00010d38)();
    if (iVar11 != 0) {
      puVar17 = DAT_00010d3c;
    }
    bVar13 = *(char *)(param_1 + 0x26) + 1;
    *(byte *)(param_1 + 0x26) = bVar13;
    if (0xf < bVar13) {
      *(undefined *)(param_1 + 0x25) = 0;
    }
  }
  psVar7 = DAT_00010d40;
  psVar6 = DAT_00010d24;
  sVar1 = *DAT_00010d40;
  sVar2 = *DAT_00010d24;
  iVar11 = (*pcVar5)();
  sVar12 = sVar2 + sVar1 + *(short *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x20) + 0x16) +
           DAT_00010d18;
  sVar2 = psVar6[1];
  sVar1 = psVar7[1];
  iVar11 = (*pcVar5)();
  piVar8 = DAT_00010df0;
  uVar4 = DAT_00010dee;
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



void FUN_00011394(void)

{
  if (*DAT_000114a0 == '\b') {
                    // WARNING: Could not recover jumptable at 0x0001139e. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_000114a4)(0x21);
    return;
  }
                    // WARNING: Could not recover jumptable at 0x000113a4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_000114a4)(0x1a);
  return;
}



undefined4 FUN_00011726(void)

{
  int iVar1;
  code *unaff_r11;
  undefined4 in_stack_00000000;
  short sStack00000004;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000010;
  
  iVar1 = (*unaff_r11)();
  (*DAT_000117b0)(*(undefined4 *)(*(int *)(iVar1 + 0x10) + 4),-(int)sStack00000004,in_stack_00000000
                  ,1);
  return in_stack_00000010;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00011754(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*_DAT_000117b4)();
  (*_LAB_000117b7_1)(param_1,*(int *)(*(int *)(iVar1 + 0x10) + 0x18) + 8,(int)param_2);
  uVar2 = *(undefined4 *)(_LAB_000117bb_1 + ((int)param_2 & 0xffU) * 4);
  iVar1 = (*_DAT_000117b4)();
  (*DAT_000117c0)(param_1,*(int *)(*(int *)(iVar1 + 0x10) + 0x18) + 8,uVar2,2);
  FUN_00011394();
  return;
}



uint FUN_00012350(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  pcVar1 = DAT_00012484;
  param_2[2] = 0;
  iVar2 = (*pcVar1)();
  uVar3 = (int)*(char *)((int)DAT_0001247e + *(int *)(*(int *)(iVar2 + 0x10) + 4)) & 0xff;
  if (uVar3 == 0) {
    iVar2 = (*pcVar1)();
    param_2[2] = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_0001247e)
                          & 0xffU) * 4 + DAT_00012480 + param_1) >> 2;
    iVar2 = (*pcVar1)();
    uVar3 = (uint)DAT_0001247e;
    iVar2 = -(*(int *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + uVar3) & 0xffU) * 4 +
                      DAT_00012480 + param_1) >> 2);
LAB_00012432:
    *param_2 = iVar2;
  }
  else {
    if (uVar3 == 1) {
      iVar2 = (*pcVar1)();
      *param_2 = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_0001247e)
                          & 0xffU) * 4 + DAT_00012480 + param_1) >> 2;
      iVar2 = (*pcVar1)();
      uVar3 = (uint)DAT_0001247e;
      piVar4 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + uVar3) & 0xffU) * 4 +
                      DAT_00012480 + param_1);
    }
    else {
      if (uVar3 == 2) {
        iVar2 = (*pcVar1)();
        param_2[2] = -(*(int *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) +
                                               (int)DAT_0001247e) & 0xffU) * 4 +
                               DAT_00012480 + param_1) >> 2);
        iVar2 = (*pcVar1)();
        uVar3 = (uint)DAT_0001247e;
        iVar2 = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + uVar3) & 0xffU) * 4
                        + DAT_00012480 + param_1) >> 2;
        goto LAB_00012432;
      }
      if (uVar3 != 3) {
        return uVar3;
      }
      iVar2 = (*pcVar1)();
      *param_2 = -(*(int *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_0001247e
                                           ) & 0xffU) * 4 + DAT_00012480 + param_1) >> 2);
      iVar2 = (*pcVar1)();
      uVar3 = (uint)DAT_0001247e;
      piVar4 = (int *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + uVar3) & 0xffU) * 4 +
                      DAT_00012480 + param_1);
    }
    param_2[2] = -(*piVar4 >> 2);
  }
  return uVar3;
}



void FUN_00012aa2(int param_1,char param_2)

{
  int iVar1;
  short sVar2;
  
  iVar1 = (*DAT_00012b90)();
  if (*(char *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x10) + 0x15) == '\0') {
    sVar2 = (*DAT_00012b98)((int)*(short *)((short)(*(short *)(param_1 + DAT_00012b7e) * 0xc) +
                                           DAT_00012b94));
    *DAT_00012b9c = *DAT_00012b9c - sVar2;
    *(char *)(param_1 + DAT_00012b80) = *(char *)(param_1 + DAT_00012b80) - param_2;
  }
                    // WARNING: Could not recover jumptable at 0x00012af2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00012ba0)(3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00012af6(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (*DAT_00012b90)();
  iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 8);
  if (param_2 == 0) {
    sVar1 = *(short *)(param_1 + DAT_00012b7c);
    *(short *)(param_1 + DAT_00012b7c) = sVar1 + 1;
    if (0x27 < sVar1) {
      (*DAT_00012ba4)();
      *(undefined2 *)(param_1 + DAT_00012b7c) = 0;
      iVar3 = (int)_LAB_00012b82;
      *(undefined4 *)(iVar2 + iVar3) = 0;
      iVar3 = iVar3 + 4;
      goto LAB_00012b5c;
    }
  }
  else if ((param_2 == 1) &&
          (sVar1 = *(short *)(param_1 + DAT_00012b7c),
          *(short *)(param_1 + DAT_00012b7c) = sVar1 + 1, 0x28 < sVar1)) {
    *(undefined2 *)(param_1 + DAT_00012b7c) = 0;
    *(undefined4 *)(iVar2 + _LAB_00012b82) = 0;
    iVar3 = (int)DAT_00012b84;
LAB_00012b5c:
    *(undefined4 *)(iVar2 + iVar3) = 0;
    *(char *)(param_1 + DAT_00012b7a) = *(char *)(param_1 + DAT_00012b7a) + '\x01';
    return 1;
  }
  return 0;
}



uint FUN_00012c54(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar2 = DAT_00012cb0;
  iVar3 = (*DAT_00012cb0)();
  uVar9 = (uint)DAT_00012cae;
  cVar1 = *(char *)(DAT_00012cbc + (short)(*(short *)(param_1 + DAT_00012ca2) * 0xc));
  iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 8);
  if (cVar1 != '\0') {
    if ((cVar1 != '\x01') && (cVar1 != '\x02')) {
      iVar3 = (*pcVar2)();
      iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
      uVar5 = (uint)DAT_00013166;
      *(uint *)(iVar3 + uVar5) = *(uint *)(iVar3 + uVar5) | uVar9;
LAB_0001314c:
      return uVar5;
    }
    if (((int)*(short *)(param_1 + DAT_00012e1e) & 0xffffU) == (int)DAT_00012e20) {
      iVar4 = (*pcVar2)();
      iVar4 = *(int *)(*(int *)(iVar4 + 0x10) + 4);
      *(uint *)(iVar4 + DAT_00012e22) = *(uint *)(iVar4 + DAT_00012e22) | 4;
      *(undefined2 *)(param_1 + DAT_00012e24) = 0;
      iVar4 = (int)DAT_00012e26;
      *(undefined4 *)(iVar3 + iVar4) = 0;
      *(undefined4 *)(iVar3 + iVar4 + 4) = 0;
      *(char *)(param_1 + DAT_00012e28) = *(char *)(param_1 + DAT_00012e28) + '\x01';
      uVar9 = FUN_00012aa2(param_1,2);
      return uVar9;
    }
    FUN_00012af6(param_1,1);
    if ((int)*(short *)(param_1 + DAT_00012e8c) != 10) {
      return (int)*(short *)(param_1 + DAT_00012e8c);
    }
    uVar8 = (uint)DAT_00012e8e;
    iVar3 = ((int)*(short *)(param_1 + (uVar8 - 0x5e)) & 0xffffU) - (int)DAT_00012e90;
    uVar5 = (uint)(short)(&switchD_00012e88::switchdataD_00012e94)[iVar3];
    switch(iVar3) {
    case 0:
      iVar3 = (*pcVar2)();
      iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
      *(uint *)(iVar3 + DAT_00013022) = *(uint *)(iVar3 + DAT_00013022) | uVar8;
      (*DAT_00013040)(param_1);
      goto LAB_00012f32;
    default:
      goto LAB_0001314c;
    case 6:
      iVar3 = (*pcVar2)();
      iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
      *(uint *)(iVar3 + DAT_00013022) = *(uint *)(iVar3 + DAT_00013022) | (int)DAT_00013038;
      iVar3 = (*pcVar2)();
      *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_0001303a) = 0xffff;
      iVar3 = (*pcVar2)();
      iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
      *(uint *)(iVar3 + DAT_0001303c) = *(uint *)(iVar3 + DAT_0001303c) | uVar9;
      uVar7 = 3;
      break;
    case 0xf:
      iVar3 = (*pcVar2)();
      iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
      *(uint *)(iVar3 + DAT_00013022) = *(uint *)(iVar3 + DAT_00013022) | uVar8;
      (*DAT_00013048)(param_1);
LAB_00012f32:
      uVar9 = FUN_00012aa2(param_1,2);
      return uVar9;
    case 0x11:
      iVar3 = (*pcVar2)();
      (*DAT_00013044)(param_1,*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + 8);
      iVar3 = (*pcVar2)();
      iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
      *(uint *)(iVar3 + DAT_00013022) = *(uint *)(iVar3 + DAT_00013022) | uVar8;
      iVar3 = (*pcVar2)();
      *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_00013026) = DAT_00013024;
      uVar7 = 2;
      break;
    case 0x16:
    case 0x17:
    case 0x18:
      iVar3 = (*DAT_0001304c)((int)*(short *)(param_1 + DAT_00013028));
      goto LAB_00012ff0;
    case 0x19:
      FUN_00012aa2(param_1,1);
      iVar3 = (*pcVar2)();
      iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
      *(uint *)(iVar3 + DAT_00013022) = *(uint *)(iVar3 + DAT_00013022) & 0xffffff80;
      iVar3 = (*pcVar2)();
      *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_0001302a) = 0;
      iVar3 = (*pcVar2)();
      *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_0001302c) = 0;
      iVar3 = (*pcVar2)();
      *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_0001302e) = 0;
      iVar3 = (*pcVar2)();
      *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_00013030) = 0;
      iVar3 = (*pcVar2)();
      *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_00013032) = 0;
      iVar3 = (*pcVar2)();
      *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_00013034) = 0;
      sVar6 = (*DAT_00013050)(0x3c);
      iVar3 = (*pcVar2)();
      *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_00013036) = (int)sVar6 << 0x10;
                    // WARNING: Could not recover jumptable at 0x00012fd4. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar9 = (*DAT_00013054)(param_1,10);
      return uVar9;
    case 0x1a:
      iVar3 = (*DAT_00013174)((int)*DAT_00013170 << 0x10,PTR_LAB_0001316c);
      uVar7 = 1;
      iVar3 = (int)(short)((uint)(iVar3 + DAT_00013178) >> 0x10);
      goto LAB_00012c0e;
    case 0x1b:
      iVar3 = (*pcVar2)();
      iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
      *(uint *)(iVar3 + DAT_00013162) = *(uint *)(iVar3 + DAT_00013162) | uVar9;
      iVar3 = (*pcVar2)();
      *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_00013168) = 0xffff;
      iVar3 = (*pcVar2)();
      uVar7 = 3;
      iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
      *(uint *)(iVar3 + DAT_00013166) = *(uint *)(iVar3 + DAT_00013166) | uVar9;
      break;
    case 0x1c:
      iVar3 = (*pcVar2)();
      *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_0001315e) = 0xffff;
      iVar3 = (*pcVar2)();
      *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_00013160) = 0;
      iVar3 = (*pcVar2)();
      iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
      *(uint *)(iVar3 + DAT_00013162) = *(uint *)(iVar3 + DAT_00013162) & 0xfffffffb;
      iVar3 = (*pcVar2)();
      iVar4 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
      iVar3 = (int)DAT_00013162;
      *(uint *)(iVar4 + iVar3) = *(uint *)(iVar4 + iVar3) | iVar3 + 0x40U;
      sVar6 = (*DAT_0001317c)(0x3c);
      iVar3 = (*pcVar2)();
      *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_00013164) = (int)sVar6 << 0x10;
      iVar3 = (*pcVar2)();
      iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
      *(uint *)(iVar3 + DAT_00013166) = *(uint *)(iVar3 + DAT_00013166) | uVar9;
      uVar7 = 3;
      break;
    case 0x1e:
      iVar3 = (*DAT_00013064)((int)*DAT_00013060 << 0x10,PTR_LAB_0001305c,PTR_LAB_00013058);
      iVar3 = (int)(short)((uint)(iVar3 + DAT_00013068) >> 0x10);
LAB_00012ff0:
      uVar7 = 0;
LAB_00012c0e:
      (*DAT_00012cb8)(param_1,iVar3,uVar7,param_4,in_pr,unaff_r14);
      uVar9 = (int)*(short *)(param_1 + DAT_00012ca2) & 0xffff;
      if (((uVar9 == (int)DAT_00012ca4) || (uVar9 == (int)DAT_00012ca6)) ||
         (uVar9 == (int)DAT_00012ca8)) {
        uVar7 = 1;
      }
      else {
        if ((uVar9 != (int)DAT_00012caa) && (uVar9 != (int)DAT_00012cac)) {
          return uVar9;
        }
        uVar7 = 3;
      }
      uVar9 = FUN_00012aa2(param_1,uVar7);
      return uVar9;
    }
    uVar9 = FUN_00012aa2(param_1,uVar7);
    return uVar9;
  }
  iVar3 = FUN_00012af6(param_1,0);
  if (iVar3 == 0) goto LAB_00012ba8;
  switch(((int)*(short *)(param_1 + DAT_00012cea) & 0xffffU) - (int)DAT_00012cec) {
  case 0:
    uVar7 = 0;
    goto LAB_00012d86;
  case 1:
    uVar7 = 1;
    goto LAB_00012d86;
  case 2:
    uVar7 = 2;
LAB_00012d86:
    (*DAT_00012cf4)(param_1,uVar7);
    break;
  case 4:
    uVar7 = 1;
    goto LAB_00012d74;
  case 5:
    uVar7 = 2;
    goto LAB_00012d74;
  case 6:
    (*DAT_00012e3c)(param_1);
    break;
  case 7:
    (*DAT_00012e50)(param_1);
    break;
  case 8:
    uVar7 = 1;
    goto LAB_00012d32;
  case 10:
    (*DAT_00012e44)(param_1,0);
    break;
  case 0xb:
    (*DAT_00012e34)(param_1);
    break;
  case 0xc:
    (*DAT_00012e4c)(param_1);
    break;
  case 0xd:
    iVar3 = (*pcVar2)();
    (*DAT_00012e38)(param_1,0,(int)DAT_00012e1c + *(int *)(*(int *)(iVar3 + 0x10) + 0x18) + 0x18);
    break;
  case 0xe:
    (*DAT_00012e2c)(param_1,8);
    break;
  case 0xf:
    uVar7 = 0;
LAB_00012d32:
    (*DAT_00012e30)(param_1,uVar7);
    break;
  case 0x10:
    uVar7 = 0;
LAB_00012d74:
    (*DAT_00012cf0)(param_1,uVar7);
    break;
  case 0x11:
    (*DAT_00012e48)(param_1);
    break;
  case 0x13:
    (*DAT_00012e40)(param_1);
  }
LAB_00012ba8:
  iVar3 = (*DAT_00012cb0)();
  iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 8);
  if ((int)*(short *)(DAT_00012c9a + param_1) != 0x27) {
    return (int)*(short *)(DAT_00012c9a + param_1);
  }
  *(int *)(iVar3 + 100) = *(int *)(iVar3 + 100) - *(int *)(DAT_00012c9c + iVar3);
  *(int *)(iVar3 + 0x68) = *(int *)(iVar3 + 0x68) - *(int *)(DAT_00012c9e + iVar3);
  *(undefined4 *)(DAT_00012ca0 + iVar3) = *(undefined4 *)(iVar3 + 100);
  *(undefined4 *)(iVar3 + 0xb8) = *(undefined4 *)(iVar3 + 0x68);
  pcVar2 = DAT_00012cb4;
  *(undefined4 *)(iVar3 + 0xbc) = *(undefined4 *)(iVar3 + 0x6c);
  (*pcVar2)();
  uVar9 = FUN_00012aa2(param_1,2);
  return uVar9;
}



int FUN_00013698(int param_1)

{
  code *pcVar1;
  int iVar2;
  short sVar4;
  int iVar3;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  pcVar1 = DAT_000136e0;
  iVar6 = 1;
  uVar7 = (uint)DAT_000136d6;
  switch(*(undefined2 *)(param_1 + DAT_000136d8)) {
  case 1:
    uVar5 = 0;
    goto LAB_00013774;
  case 2:
    uVar5 = 1;
    goto LAB_00013774;
  case 3:
    uVar5 = 2;
LAB_00013774:
    iVar3 = (*DAT_000136dc)(param_1,uVar5);
    break;
  case 4:
    iVar3 = (*DAT_000136e0)();
    iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
    *(uint *)(iVar3 + DAT_0001389e) = *(uint *)(iVar3 + DAT_0001389e) | 4;
    iVar3 = (*pcVar1)();
    iVar2 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
    iVar3 = (int)DAT_0001389e;
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
    iVar3 = (*DAT_000138b4)((int)*(short *)(param_1 + DAT_0001389c));
    goto LAB_000138d4;
  default:
    iVar6 = (*DAT_000136e0)();
    iVar6 = *(int *)(*(int *)(iVar6 + 0x10) + 4);
    iVar3 = (int)DAT_0001399a;
    *(uint *)(iVar6 + iVar3) = *(uint *)(iVar6 + iVar3) | uVar7;
LAB_000138d4:
    iVar6 = 0;
    break;
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
    iVar3 = (*DAT_000138b8)((int)*(short *)(param_1 + DAT_0001389c));
    iVar6 = iVar3;
    break;
  case 0x30:
    iVar3 = (*DAT_000136e0)();
    (*DAT_000138bc)(param_1,*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + 8);
    iVar3 = (*pcVar1)();
    iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
    *(uint *)(iVar3 + DAT_000138a0) = *(uint *)(iVar3 + DAT_000138a0) | (int)DAT_000138a2;
    iVar3 = (*pcVar1)();
    *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_000138a6) = DAT_000138a4;
    iVar3 = (*pcVar1)();
    iVar2 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
    iVar3 = (int)DAT_0001389e;
    *(uint *)(iVar2 + iVar3) = *(uint *)(iVar2 + iVar3) | uVar7;
    break;
  case 0x31:
    iVar3 = (*DAT_000136e0)();
    iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
    *(uint *)(iVar3 + DAT_000138a0) = *(uint *)(iVar3 + DAT_000138a0) | (int)DAT_000138a8;
    iVar3 = (*pcVar1)();
    *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_000138aa) = 0xffff;
    iVar2 = (*pcVar1)();
    iVar3 = (int)DAT_0001389e;
    iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
    *(uint *)(iVar2 + iVar3) = *(uint *)(iVar2 + iVar3) | uVar7;
    break;
  case 0x32:
    iVar3 = (*DAT_000136e0)();
    iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
    *(uint *)(iVar3 + DAT_000138a0) = *(uint *)(iVar3 + DAT_000138a0) | uVar7;
    iVar3 = (*pcVar1)();
    *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_000138ac) = 0xffff;
    iVar2 = (*pcVar1)();
    iVar3 = (int)DAT_0001389e;
    iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
    *(uint *)(iVar2 + iVar3) = *(uint *)(iVar2 + iVar3) | uVar7;
    break;
  case 0x33:
    iVar3 = (*DAT_000136e0)();
    *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_000138ae) = 0xffff;
    iVar3 = (*pcVar1)();
    *(undefined2 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_000138b0) = 0;
    iVar3 = (*pcVar1)();
    iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
    *(uint *)(iVar3 + DAT_000138a0) = *(uint *)(iVar3 + DAT_000138a0) & 0xfffffffb;
    iVar3 = (*pcVar1)();
    iVar2 = (int)DAT_000138a0;
    iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
    *(uint *)(iVar3 + iVar2) = *(uint *)(iVar3 + iVar2) | iVar2 + 0x40U;
    sVar4 = (*DAT_000138c0)(0x3c);
    iVar3 = (*pcVar1)();
    *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_000138b2) = (int)sVar4 << 0x10;
    iVar3 = (*pcVar1)();
    iVar2 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
    iVar3 = (int)DAT_0001389e;
    *(uint *)(iVar2 + iVar3) = *(uint *)(iVar2 + iVar3) | uVar7;
  }
  if (iVar6 != 0) {
                    // WARNING: Could not recover jumptable at 0x000138f0. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar6 = (*DAT_000139a4)((int)*(short *)(param_1 + DAT_0001399c));
    return iVar6;
  }
  return iVar3;
}



undefined4 FUN_00014bd0(undefined4 *param_1,short *param_2)

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
  
  (*DAT_00014d1c)(&iStack28,&iStack24);
  if ((iStack28 < (int)param_1[2]) && ((int)param_1[2] < iStack24)) {
    (*DAT_00014d20)(local_24,asStack32);
    sVar2 = (*DAT_00014d24)((int)local_24[0],*param_1,param_1[2]);
    *param_2 = sVar2;
    sVar2 = (*DAT_00014d24)((int)asStack32[0],param_1[1],param_1[2]);
    pcVar1 = DAT_00014d28;
    param_2[1] = sVar2;
    (*pcVar1)(&local_14);
    if ((param_2[1] <= sStack18) &&
       (((sStack14 <= param_2[1] && (local_14 <= *param_2)) && (*param_2 <= local_10)))) {
      return 1;
    }
  }
  return 0;
}



void FUN_00014c62(short *param_1,short *param_2,int *param_3)

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



void FUN_00014ca4(short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  
  sVar1 = param_2[1];
  *param_3 = *param_1 - (*param_2 >> 1);
  param_3[1] = param_1[1] + (sVar1 >> 1);
  return;
}



int FUN_00015fb0(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (*DAT_00016084)(param_1,DAT_00016080,0x28);
  if (iVar1 != 0) {
    *(char *)(iVar1 + 2) = param_3;
    if (param_3 < '\0') {
      *(undefined4 *)(iVar1 + -0x10) = DAT_00016088;
    }
    *(undefined *)(iVar1 + 3) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = param_2;
    puVar2 = (undefined4 *)(*(char *)(iVar1 + 3) * 0xc + *(int *)(iVar1 + 0x1c));
    *(undefined4 *)(iVar1 + 0x10) = *puVar2;
    *(undefined4 *)(iVar1 + 0x14) = puVar2[1];
    *(undefined4 *)(iVar1 + 0x18) = puVar2[2];
    FUN_00016128(iVar1);
    FUN_00016138(iVar1);
    return iVar1;
  }
  return 0;
}



void FUN_00016128(int param_1)

{
  *(undefined4 *)(param_1 + 4) = DAT_00016134;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



void FUN_00016138(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  pcVar1 = DAT_00016264;
  *DAT_00016260 = 0;
  (*pcVar1)(3,0x19,0x26,4);
  pcVar1 = DAT_00016268;
  iVar2 = (*DAT_00016268)();
  iVar4 = *(int *)((int)DAT_00016256 + *(int *)(*(int *)(iVar2 + 0x10) + 4));
  iVar2 = (*pcVar1)();
  (*DAT_0001626c)(*(undefined4 *)
                   (*(int *)(*(char *)((int)DAT_00016258 + *(int *)(*(int *)(iVar2 + 0x10) + 4)) *
                             0x20 + iVar4 + 0xc) + *(short *)(param_1 + 0x10) * 4));
  *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(param_1 + 0x12);
  if ((*(int *)(param_1 + 0x14) == 0) ||
     (iVar2 = (*pcVar1)(), *(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x10) + 5) != '\0')) {
    *(undefined *)(param_1 + 2) = 1;
  }
  else {
    uVar3 = (*DAT_00016274)(param_1,DAT_00016270,(int)DAT_0001625a,*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    *(undefined *)(param_1 + 2) = 2;
    *(undefined4 *)(param_1 + 4) =
         *(undefined4 *)(*(int *)(**(int **)(param_1 + 0x20) + (int)DAT_0001625c) + 0x10);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



int FUN_0001629e(int param_1)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar2 = DAT_000163a8;
  iVar3 = (int)*(char *)(param_1 + 1);
  if (iVar3 == 0) {
    sVar1 = *(short *)(param_1 + 0x12);
    *(short *)(param_1 + 0x12) = sVar1 + -1;
    iVar3 = (int)sVar1;
    if (iVar3 < 0) {
      (*DAT_000163a0)(3,0x19,0x26,4);
      (*DAT_000163a4)();
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
      (*DAT_000163a0)(3,0x19,0x26,4);
      iVar3 = (*DAT_000163ac)();
      iVar5 = *(int *)((int)DAT_0001639c + *(int *)(*(int *)(iVar3 + 0x10) + 4));
      iVar3 = (*DAT_000163ac)();
      (*DAT_000163b0)(*(undefined4 *)
                       (*(int *)(*(char *)((int)DAT_0001639e + *(int *)(*(int *)(iVar3 + 0x10) + 4))
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



void FUN_000163b4(undefined *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (*DAT_00016420)((int)DAT_0001641c);
  if (iVar1 != 0) {
    *param_1 = 2;
    *(undefined2 *)(param_1 + 0x12) = 0;
    (*DAT_00016424)(3,0x19,0x26,4);
    (*DAT_00016428)();
    if ((*(int *)(param_1 + 0x20) != 0) &&
       (iVar1 = (*DAT_0001642c)(*(int *)(param_1 + 0x20)), iVar1 != 0)) {
      puVar2 = *(undefined4 **)(param_1 + 0x20);
      if ((puVar2 != (undefined4 *)0x0) && ((*DAT_0001607c)(*puVar2), puVar2 != (undefined4 *)0x0))
      {
        puVar2[-1] = puVar2[-1] | 1;
      }
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0001675a(int param_1,int *param_2,int param_3,short *param_4,int param_5)

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
        if ((_LAB_00016864 & *(uint *)(iVar4 + 0x50)) != 0) {
          uStack36 = 1;
          *param_4 = *param_4 + *(short *)(iVar4 + 0x58);
          if (param_5 != 0) {
            (*DAT_00016868)(param_1,iVar4,0);
          }
          *(byte *)(*(int *)(param_1 + 4) + 0x31) = *(byte *)(*(int *)(param_1 + 4) + 0x31) | 2;
          *(uint *)(iVar4 + 0x50) = *(uint *)(iVar4 + 0x50) & DAT_00016860;
          *(uint *)(iVar4 + 0x50) = *(uint *)(iVar4 + 0x50) & DAT_0001686c;
          uVar1 = (*DAT_00016870)(iVar4);
          (*DAT_00016878)(uVar1,0,PTR_LAB_00016874,1);
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



int FUN_0001687c(int *param_1,int param_2)

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
        if ((DAT_00016938 & *(uint *)(iVar2 + 0x50)) != 0) {
          iVar4 = iVar4 + *(short *)(iVar2 + 0x58);
        }
      }
    }
  }
  return iVar4;
}



undefined4 FUN_00016b5e(undefined4 param_1,char *param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  
  piVar1 = *(int **)(((int)*param_2 & 0xffU) * 0x10 + *DAT_00016cdc + 0xc);
  psVar4 = (short *)(param_3 * 8 + *(int *)(param_2 + 8));
  uVar2 = (*DAT_00016ce0)(param_1,0x50);
  iVar3 = *piVar1;
  (*DAT_00016ce4)(param_1,uVar2,0,iVar3,(int)*psVar4,0,
                  *(undefined4 *)(iVar3 + ((int)psVar4[1] & 0xffffU)),0,*(undefined4 *)(psVar4 + 2))
  ;
  return uVar2;
}



int FUN_00016bcc(undefined4 param_1,int param_2,short *param_3,int *param_4,int *param_5)

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
    iVar3 = (*DAT_00016ce0)(param_1,sVar4 * 100);
    *param_4 = iVar3;
    piVar5 = param_5;
    iVar3 = (*DAT_00016ce0)(param_1,sVar4 * 0xc);
    sVar4 = 0;
    *piVar5 = iVar3;
    for (iVar3 = 0; iVar1 = (int)*(short *)(param_2 + 0x12), iVar3 < iVar1; iVar3 = iVar3 + 1) {
      if (*(int *)(iVar3 * 4 + *(int *)(param_2 + 0x44)) != 0) {
        for (iVar1 = 0; iVar1 < *(int *)(*(int *)(param_2 + 0x40) + iVar3 * 8 + 4);
            iVar1 = iVar1 + 1) {
          *(undefined4 *)(sVar4 * 100 + *param_4 + 0x50) = 0;
          puVar2 = (undefined4 *)(iVar1 * 0x14 + *(int *)(*(int *)(param_2 + 0x40) + iVar3 * 8));
          (*DAT_00016ce8)(*param_4 + sVar4 * 100,0,sVar4 * 0xc + *param_5,puVar2[4],*puVar2,0,0,10);
          sVar4 = sVar4 + 1;
        }
      }
    }
  }
  return iVar1;
}



void FUN_00016fb4(int param_1,int param_2)

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



void FUN_00017b76(int param_1,uint param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined uVar3;
  uint uVar4;
  
  pcVar1 = DAT_00017cc0;
  if ((param_2 & DAT_00017bc0) == 0) {
    param_2 = DAT_00017cbc & param_2;
  }
  else {
    param_2 = DAT_00017bc4 | param_2;
  }
  uVar4 = (uint)DAT_00017cb2;
  if (((int)param_2 < DAT_00017cc4) || (DAT_00017cc8 <= (int)param_2)) {
    if (((int)param_2 < DAT_00017ccc) || (DAT_00017cc4 <= (int)param_2)) {
      if (((int)param_2 < DAT_00017cc8) || (DAT_00017cd0 <= (int)param_2)) {
        if (*(char *)(param_1 + DAT_00017d8a) != '\0') {
          iVar2 = (*DAT_00017cc0)();
          iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
          *(uint *)(iVar2 + DAT_00017d8c) = *(uint *)(iVar2 + DAT_00017d8c) | uVar4;
          *(undefined *)(param_1 + DAT_00017d8a + 1) = *(undefined *)(param_1 + DAT_00017d8a);
          iVar2 = (*pcVar1)();
          iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
          *(uint *)(iVar2 + DAT_00017d8e) = *(uint *)(iVar2 + DAT_00017d8e) | 2;
        }
        if (param_3 == 0) {
          *(undefined *)(param_1 + DAT_00017d8a) = 2;
          return;
        }
        uVar3 = 0;
      }
      else {
        if (*(char *)(param_1 + DAT_00017cb4) != '\x03') {
          iVar2 = (*DAT_00017cc0)();
          iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
          *(uint *)(iVar2 + DAT_00017cb6) = *(uint *)(iVar2 + DAT_00017cb6) | uVar4;
          *(undefined *)(param_1 + DAT_00017cb4 + 1) = *(undefined *)(param_1 + DAT_00017cb4);
          iVar2 = (*pcVar1)();
          iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
          *(uint *)(iVar2 + DAT_00017cb8) = *(uint *)(iVar2 + DAT_00017cb8) | 2;
        }
        if (param_3 == 0) {
          *(undefined *)(param_1 + DAT_00017d8a) = 1;
          return;
        }
        uVar3 = 3;
      }
    }
    else {
      if (*(char *)(param_1 + DAT_00017cb4) != '\x01') {
        iVar2 = (*DAT_00017cc0)();
        iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
        *(uint *)(iVar2 + DAT_00017cb6) = *(uint *)(iVar2 + DAT_00017cb6) | uVar4;
        *(undefined *)(param_1 + DAT_00017cb4 + 1) = *(undefined *)(param_1 + DAT_00017cb4);
        iVar2 = (*pcVar1)();
        iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
        *(uint *)(iVar2 + DAT_00017cb8) = *(uint *)(iVar2 + DAT_00017cb8) | 2;
      }
      if (param_3 == 0) {
        *(undefined *)(param_1 + DAT_00017cb4) = 3;
        return;
      }
      uVar3 = 1;
    }
    *(undefined *)(param_1 + DAT_00017d8a) = uVar3;
  }
  else {
    if (*(char *)(param_1 + DAT_00017cb4) != '\x02') {
      iVar2 = (*DAT_00017cc0)();
      iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
      *(uint *)(iVar2 + DAT_00017cb6) = *(uint *)(iVar2 + DAT_00017cb6) | uVar4;
      *(undefined *)(param_1 + DAT_00017cb4 + 1) = *(undefined *)(param_1 + DAT_00017cb4);
      iVar2 = (*pcVar1)();
      iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
      *(uint *)(iVar2 + DAT_00017cb8) = *(uint *)(iVar2 + DAT_00017cb8) | 2;
    }
    if (param_3 == 0) {
      *(undefined *)(param_1 + DAT_00017cb4) = 0;
    }
    else {
      *(undefined *)(param_1 + DAT_00017cb4) = 2;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_00017d50(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (int)*(char *)(param_1 + DAT_00017d8a) & 0xff;
  if (uVar1 == 0) {
    uVar1 = (uint)DAT_00017d90;
    *(undefined4 *)(param_1 + uVar1) = 0;
  }
  else if (uVar1 == 1) {
    uVar1 = (uint)DAT_00017d90;
    *(undefined4 *)(param_1 + uVar1) = _LAB_00017d9b_1;
  }
  else {
    uVar2 = _DAT_00017d98;
    if ((uVar1 == 2) || (uVar2 = DAT_00017da0, uVar1 == 3)) {
      uVar1 = (uint)DAT_00017d90;
      *(undefined4 *)(param_1 + uVar1) = uVar2;
    }
  }
  return uVar1;
}



int FUN_00018150(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + DAT_00018216);
  if ((uVar2 & DAT_00018228) == 0) {
    uVar2 = uVar2 & DAT_00018230;
  }
  else {
    uVar2 = uVar2 | DAT_0001822c;
  }
  if (((int)uVar2 < DAT_00018234) || (DAT_00018238 <= (int)uVar2)) {
    *(undefined4 *)(param_1 + DAT_0001821a + 0xc) = *(undefined4 *)(param_1 + DAT_0001821a);
  }
  else {
    *(undefined4 *)(param_1 + DAT_00018218 + 0x14) = *(undefined4 *)(param_1 + DAT_00018218);
  }
  if ((int)uVar2 < 1) {
    iVar1 = DAT_0001821c + 4;
    *(undefined4 *)(param_1 + iVar1) = *(undefined4 *)(param_1 + DAT_0001821c);
  }
  else {
    iVar1 = DAT_0001821e + 0xc;
    *(undefined4 *)(param_1 + iVar1) = *(undefined4 *)(param_1 + DAT_0001821e);
  }
  return iVar1;
}



int FUN_000181ec(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00018222 + param_1;
  if (*(int *)(iVar2 + 4) < *(int *)(param_1 + DAT_00018224)) {
    iVar1 = (int)DAT_00018224;
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + iVar1);
  }
  else {
    iVar1 = (int)DAT_00018226;
    if (*(int *)(param_1 + iVar1) < *(int *)(iVar2 + 4)) {
      iVar1 = (int)DAT_00018226;
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + iVar1);
    }
  }
  return iVar1;
}



void FUN_0001823c(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00018384;
  param_1[6] = (int)(param_1[9] - param_1[3]) >> 1;
  param_1[7] = (int)(param_1[10] - param_1[4]) >> 1;
  param_1[8] = (int)(param_1[0xb] - param_1[5]) >> 1;
  param_1[0x18] = 0;
  uVar1 = (*DAT_00018388)(uVar1,(int)*(short *)(param_1 + 0x1a) << 0x10);
  param_1[0x19] = uVar1;
  *param_1 = param_1[3];
  param_1[1] = param_1[4];
  param_1[2] = param_1[5];
  return;
}



bool FUN_0001828a(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  pcVar2 = DAT_00018390;
  bVar1 = DAT_00018384 <= param_1[0x18];
  if (bVar1) {
    param_1[0x18] = DAT_00018384;
    param_1[0x19] = 0;
    *param_1 = param_1[9];
    param_1[1] = param_1[10];
    param_1[2] = param_1[0xb];
  }
  else {
    iVar5 = param_1[6];
    uVar6 = *(undefined4 *)
             ((short)((ushort)((uint)param_1[0x18] >> 0x10) & DAT_00018382) * 4 + DAT_0001838c);
    iVar4 = param_1[3];
    iVar3 = (*DAT_00018390)(uVar6,iVar5);
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



void FUN_00018330(int param_1)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x3c) >> 1;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x40) >> 1;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x44) >> 1;
  *(undefined4 *)(param_1 + 0x60) = 0;
  uVar1 = (*DAT_00018388)(DAT_00018384,(int)*(short *)(param_1 + 0x68) << 0x10);
  *(undefined4 *)(param_1 + 100) = uVar1;
  return;
}



void FUN_000184b6(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  pcVar1 = DAT_00018538;
  uVar5 = *(undefined4 *)
           ((short)((ushort)((uint)*(undefined4 *)(param_1 + 0x60) >> 0x10) & DAT_0001852c) * 4 +
           DAT_00018534);
  iVar4 = *(int *)(param_1 + 0x48);
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar2 = (*DAT_00018538)(uVar5,iVar4);
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



undefined4 FUN_0001853c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  (*DAT_000185b8)();
  iVar1 = (*DAT_000185b8)();
  if (*(char *)((int)DAT_000185b2 + *(int *)(*(int *)(iVar1 + 0x10) + 4)) != '\n') {
    (*DAT_000185bc)();
                    // WARNING: Could not recover jumptable at 0x00018568. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar2 = (*DAT_000185c0)(2);
    return uVar2;
  }
  return 10;
}



void FUN_00019bde(int param_1)

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
  
  iVar6 = (*DAT_00019d80)();
  uVar2 = *(ushort *)((int)DAT_00019d7a + *(int *)(*(int *)(iVar6 + 0x10) + 4));
  iVar7 = (*DAT_00019d80)();
  piVar11 = DAT_00019d90;
  iVar5 = DAT_00019d8c;
  iVar12 = DAT_00019d88;
  iVar6 = DAT_00019d84;
  uVar3 = DAT_00019d7c;
  uVar8 = ((int)*(short *)((int)DAT_00019d7a + *(int *)(*(int *)(iVar7 + 0x10) + 4)) & 0xffffU) >> 4
  ;
  iVar7 = DAT_00019d8c;
  if ((uVar2 & 1) != 0) {
    puVar13 = (undefined4 *)(DAT_00019d8c + 0x14);
    puVar14 = (undefined2 *)*puVar13;
    uVar10 = *(uint *)(DAT_00019d8c + 0x24);
    *(uint *)(DAT_00019d8c + 0x24) = uVar10 + 8;
    *puVar14 = uVar3;
    puVar14[2] = *(ushort *)(iVar6 + 10) | 4;
    puVar14[3] = *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4) + *(short *)(iVar6 + 6);
    puVar14[4] = *(short *)(iVar6 + 2) + *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4);
    pcVar4 = DAT_00019d94;
    puVar14[5] = *(undefined2 *)(iVar6 + 8);
    puVar14[6] = *(undefined2 *)(param_1 + 0x1a);
    puVar14[7] = -*(short *)(param_1 + 0x1c);
    iVar7 = iVar5;
    iVar9 = (*pcVar4)(0xf);
    pcVar4 = DAT_00019d94;
    *extraout_r3 = *(undefined2 *)(iVar9 * 8 + iVar12);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_00019d94;
    *(undefined2 *)(extraout_r3_00 + 2) = *(undefined2 *)(iVar9 * 8 + iVar12 + 2);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_00019d94;
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
    pcVar4 = DAT_00019d94;
    puVar14[4] = *(short *)(iVar6 + 0xe) + *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4);
    puVar14[5] = *(undefined2 *)(iVar6 + 0x14);
    puVar14[6] = *(undefined2 *)(param_1 + 0x1a);
    puVar14[7] = -*(short *)(param_1 + 0x1c);
    iVar9 = (*pcVar4)();
    *extraout_r3_03 = *(undefined2 *)(iVar9 * 8 + iVar12);
    iVar9 = (*DAT_0001a130)();
    pcVar4 = DAT_0001a130;
    *(undefined2 *)(extraout_r3_04 + 2) = *(undefined2 *)(iVar9 * 8 + iVar12 + 2);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001a130;
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
    pcVar4 = DAT_0001a130;
    puVar14[5] = *(undefined2 *)(iVar6 + 0x20);
    puVar14[6] = *(undefined2 *)(param_1 + 0x1a);
    puVar14[7] = -*(short *)(param_1 + 0x1c);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001a130;
    *extraout_r3_07 = *(undefined2 *)(iVar9 * 8 + iVar12);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001a130;
    *(undefined2 *)(extraout_r3_08 + 2) = *(undefined2 *)(iVar9 * 8 + iVar12 + 2);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001a130;
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
    pcVar4 = DAT_0001a130;
    puVar15[5] = *(undefined2 *)(iVar6 + 0x2c);
    puVar15[6] = *(undefined2 *)(param_1 + 0x1a);
    puVar15[7] = -*(short *)(param_1 + 0x1c);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001a130;
    *puVar14 = *(undefined2 *)(iVar12 + iVar9 * 8);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001a130;
    puVar14[1] = *(undefined2 *)(iVar9 * 8 + iVar12 + 2);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001a130;
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
  iVar12 = DAT_0001a134;
  iVar7 = iVar5;
  if ((uVar8 & 1) != 0) {
    puVar14 = *(undefined2 **)(undefined4 *)(iVar5 + 0x14);
    uVar10 = *(uint *)(iVar5 + 0x24);
    *(uint *)(iVar5 + 0x24) = uVar10 + 8;
    *puVar14 = uVar3;
    puVar14[2] = *(ushort *)(iVar6 + 10) | 4;
    puVar14[3] = *(short *)(iVar6 + 6) + *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4);
    pcVar4 = DAT_0001a130;
    puVar14[4] = *(short *)(iVar6 + 2) + *(short *)(*(int *)(*(int *)(*piVar11 + 0xc) + 4) + 4);
    puVar14[5] = *(undefined2 *)(iVar6 + 8);
    puVar14[6] = *(undefined2 *)(param_1 + 0x1a);
    puVar14[7] = -*(short *)(param_1 + 0x1c);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001a130;
    *extraout_r3_11 = *(undefined2 *)(iVar9 * 8 + iVar12);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001a130;
    *(undefined2 *)(extraout_r3_12 + 2) = *(undefined2 *)(iVar9 * 8 + iVar12 + 2);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001a130;
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
    pcVar4 = DAT_0001a130;
    puVar14[5] = *(undefined2 *)(iVar6 + 0x14);
    puVar14[6] = *(undefined2 *)(param_1 + 0x1a);
    puVar14[7] = -*(short *)(param_1 + 0x1c);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001a130;
    *extraout_r3_15 = *(undefined2 *)(iVar9 * 8 + iVar12);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001a130;
    *(undefined2 *)(extraout_r3_16 + 2) = *(undefined2 *)(iVar9 * 8 + iVar12 + 2);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001a348;
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
    pcVar4 = DAT_0001a348;
    puVar14[5] = *(undefined2 *)(iVar6 + 0x20);
    puVar14[6] = *(undefined2 *)(param_1 + 0x1a);
    puVar14[7] = -*(short *)(param_1 + 0x1c);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001a348;
    *extraout_r3_19 = *(undefined2 *)(iVar9 * 8 + iVar12);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001a348;
    *(undefined2 *)(extraout_r3_20 + 2) = *(undefined2 *)(iVar9 * 8 + iVar12 + 2);
    iVar9 = (*pcVar4)();
    pcVar4 = DAT_0001a348;
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
    pcVar4 = DAT_0001a348;
    puVar15[6] = *(undefined2 *)(param_1 + 0x1a);
    puVar15[7] = -*(short *)(param_1 + 0x1c);
    iVar6 = (*pcVar4)();
    pcVar4 = DAT_0001a348;
    *puVar14 = *(undefined2 *)(iVar12 + iVar6 * 8);
    iVar6 = (*pcVar4)();
    pcVar4 = DAT_0001a348;
    puVar14[1] = *(undefined2 *)(iVar6 * 8 + iVar12 + 2);
    iVar6 = (*pcVar4)();
    pcVar4 = DAT_0001a348;
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
  iVar5 = (*DAT_00019b5c)();
  iVar12 = DAT_00019b68;
  piVar11 = DAT_00019b64;
  iVar6 = DAT_00019b60;
  uVar3 = DAT_00019b5a;
  bVar1 = *(byte *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_00019b58);
  if ((bVar1 & 1) != 0) {
    puVar13 = (undefined4 *)(DAT_00019b68 + 0x14);
    puVar14 = (undefined2 *)*puVar13;
    *puVar14 = DAT_00019b5a;
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



void FUN_0001a34c(int param_1)

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
  
  piVar5 = DAT_0001a4b8;
  puVar4 = DAT_0001a4b0;
  uVar3 = DAT_0001a4ac;
  sVar1 = *(short *)(param_1 + 0x1a);
  sVar2 = *(short *)(param_1 + 0x1c);
  puVar9 = (undefined2 *)*DAT_0001a4b0;
  puVar10 = (undefined2 *)DAT_0001a4b0[4];
  DAT_0001a4b0[4] = puVar10 + 4;
  *puVar9 = uVar3;
  puVar9[2] = *(ushort *)(DAT_0001a4b4 + 10) | 4;
  puVar9[3] = *(short *)(*(int *)(*(int *)(*piVar5 + 0xc) + 4) + 4) + *(short *)(DAT_0001a4b4 + 6);
  pcVar6 = DAT_0001a4c0;
  iVar8 = DAT_0001a4bc;
  puVar9[4] = *(short *)(*(int *)(*(int *)(*piVar5 + 0xc) + 4) + 4) + *(short *)(DAT_0001a4b4 + 2);
  puVar9[5] = *(undefined2 *)(DAT_0001a4b4 + 8);
  puVar9[6] = sVar1 + 0x10;
  puVar9[7] = -(sVar2 + -0xd);
  iVar7 = (*pcVar6)();
  pcVar6 = DAT_0001a4c0;
  *puVar10 = *(undefined2 *)(iVar8 + iVar7 * 8);
  iVar7 = (*pcVar6)();
  pcVar6 = DAT_0001a4c0;
  puVar10[1] = *(undefined2 *)(iVar7 * 8 + iVar8 + 2);
  iVar7 = (*pcVar6)();
  pcVar6 = DAT_0001a4c0;
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



void FUN_0001a43e(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  
  iVar3 = DAT_0001a4c8;
  iVar2 = DAT_0001a4c4;
  piVar1 = DAT_0001a4b8;
  puVar5 = (undefined4 *)(DAT_0001a4c4 + 0x14);
  puVar4 = (undefined2 *)*puVar5;
  *puVar4 = DAT_0001a4ac;
  puVar4[2] = *(undefined2 *)(iVar3 + 10);
  puVar4[3] = *(short *)(*(int *)(*(int *)(*piVar1 + 0xc) + 4) + 4) + *(short *)(DAT_0001a4c8 + 6);
  puVar4[4] = *(short *)(*(int *)(*(int *)(*piVar1 + 0xc) + 4) + 4) + *(short *)(DAT_0001a4c8 + 2);
  puVar4[5] = *(undefined2 *)(DAT_0001a4c8 + 8);
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



void FUN_0001a4cc(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  
  piVar2 = DAT_0001a614;
  iVar3 = DAT_0001a610;
  iVar1 = DAT_0001a60c;
  puVar5 = (undefined4 *)(DAT_0001a60c + 0x14);
  puVar4 = (undefined2 *)*puVar5;
  *puVar4 = DAT_0001a606;
  puVar4[2] = *(undefined2 *)(iVar3 + 10);
  puVar4[3] = *(short *)(*(int *)(*(int *)(*piVar2 + 0xc) + 4) + 4) + *(short *)(DAT_0001a610 + 6);
  puVar4[4] = *(short *)(*(int *)(*(int *)(*piVar2 + 0xc) + 4) + 4) + *(short *)(DAT_0001a610 + 2);
  puVar4[5] = *(undefined2 *)(DAT_0001a610 + 8);
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
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001a53a(int param_1)

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
  
  pcVar2 = DAT_0001a618;
  iVar4 = (*DAT_0001a618)();
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
  (*DAT_0001a61c)(&local_20,auStack40);
  (*DAT_0001a628)(DAT_0001a624,
                  *(undefined4 *)((short)(uStack36._0_2_ & _LAB_0001a608) * 4 + DAT_0001a620));
  uVar3 = DAT_0001a630;
  pcVar2 = DAT_0001a628;
  uVar1 = _LAB_0001a608;
  *(short *)(param_1 + 0x16) = extraout_var + -7;
  (*pcVar2)(uVar3,*(undefined4 *)((short)(uStack36._0_2_ & uVar1) * 4 + DAT_0001a62c));
  *(short *)(param_1 + 0x18) = (-*(short *)(param_1 + 0xe) - extraout_var_00) + -0x3a;
  *(undefined2 *)(param_1 + 0x1a) = 0xffed;
  *(short *)(param_1 + 0x1c) = -0x31 - *(short *)(param_1 + 0xe);
  return;
}



void FUN_0001a848(undefined4 *param_1)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = DAT_0001aa08;
  iVar1 = DAT_0001aa04;
  *(undefined2 *)(DAT_0001aa04 + 0x12) = *(undefined2 *)(DAT_0001aa04 + 0x10);
  *(short *)(iVar1 + 0x10) = (short)((param_1[2] & 0xf) << 0xc);
  (*pcVar2)(*param_1,param_1[1]);
  (*DAT_0001aa10)();
  *(undefined2 *)(iVar1 + 0x10) = *(undefined2 *)(iVar1 + 0x12);
  return;
}



void FUN_0001a89c(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = DAT_0001aa1c;
  puVar1 = DAT_0001aa18;
  *DAT_0001aa18 = param_1[2];
  (*UNRECOVERED_JUMPTABLE)(*param_1,param_1[1],0x10,2);
  puVar1[1] = puVar1[3];
  UNRECOVERED_JUMPTABLE = DAT_0001aa20;
  puVar1[2] = puVar1[4];
                    // WARNING: Could not recover jumptable at 0x0001a8c6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1[3]);
  return;
}



void FUN_0001a8ca(undefined4 *param_1)

{
  int iVar1;
  
  (*DAT_0001aa1c)(*param_1,param_1[1],0x10,2,param_1);
  iVar1 = DAT_0001aa18;
  *(undefined4 *)(DAT_0001aa18 + 4) = *(undefined4 *)(DAT_0001aa18 + 0xc);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 0x10);
                    // WARNING: Could not recover jumptable at 0x0001a8ec. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0001aa24)();
  return;
}



void FUN_0001a984(int *param_1,short param_2)

{
  undefined4 uVar1;
  int iStack24;
  int iStack20;
  int iStack16;
  undefined4 uStack12;
  
  uVar1 = (*DAT_0001aa38)(param_2);
  (*DAT_0001aa3c)(0,*param_1,param_1[1],uVar1);
  iStack24 = *param_1 + 2;
  iStack20 = param_1[1];
  iStack16 = param_1[2];
  uStack12 = *(undefined4 *)((short)(param_2 * 0xc) + DAT_0001aa40);
  FUN_0001a89c(&iStack24);
  return;
}



byte FUN_0001aa44(void)

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
  
  pcVar4 = DAT_0001ab5c;
  iVar5 = (*DAT_0001ab5c)();
  iVar5 = *(int *)(*(short *)(iVar5 + 4) * 4 + DAT_0001ab60);
  if (iVar5 == 0) {
    iVar11 = 4;
    iVar5 = 4;
  }
  else {
    (*pcVar4)();
    iVar11 = (*DAT_0001ab64)();
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
    iVar10 = *(int *)(*(int *)(*(int *)(iVar9 + 0x10) + 4) + (int)DAT_0001ab58);
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
    (*DAT_0001ac6c)(2,4);
    (*DAT_0001ac74)();
  }
  iVar5 = DAT_0001ac78;
  local_2c = 0;
  iVar10 = 0;
  iVar9 = 0;
  iVar11 = 0;
  do {
    iVar6 = (*pcVar4)();
    if (*(short *)(iVar10 * 2 + (int)DAT_0001ac68 + *(int *)(*(int *)(iVar6 + 0x10) + 4)) < 0) {
      return bVar12;
    }
    iVar6 = (*pcVar4)();
    if ((int)((int)*(char *)(*(short *)(iVar10 * 2 +
                                       (int)DAT_0001ac68 + *(int *)(*(int *)(iVar6 + 0x10) + 4)) * 2
                            + iVar5) & 0xffU) < (int)DAT_0001ac6a) {
      iVar6 = (*pcVar4)();
      pcVar7 = (char *)(*(short *)((int)DAT_0001ac68 + *(int *)(*(int *)(iVar6 + 0x10) + 4) +
                                  local_2c) * 2 + iVar5);
      *pcVar7 = *pcVar7 + '\x01';
    }
    iVar6 = (*pcVar4)();
    if (*(byte *)(*(short *)((int)DAT_0001ac68 + *(int *)(*(int *)(iVar6 + 0x10) + 4) + iVar11) * 2
                  + iVar5 + 1) < bVar12) {
      iVar6 = (*pcVar4)();
      *(byte *)(*(short *)((int)DAT_0001ac68 + *(int *)(*(int *)(iVar6 + 0x10) + 4) + iVar9) * 2 +
                iVar5 + 1) = bVar12;
    }
    iVar10 = iVar10 + 1;
    iVar9 = iVar9 + 2;
    local_2c = local_2c + 2;
    iVar11 = iVar11 + 2;
  } while (iVar10 < 10);
  return bVar12;
}



void FUN_0001aca2(int param_1,uint param_2)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  char cStack24;
  char cStack20;
  
  pcVar2 = DAT_0001ad40;
  iVar3 = (*DAT_0001ad40)();
  iVar3 = *(int *)(*(short *)(iVar3 + 4) * 4 + DAT_0001ad44);
  if (iVar3 != 0) {
    (*DAT_0001ad48)();
    cStack24 = (*DAT_0001ad4c)();
    iVar4 = (*pcVar2)();
    cStack20 = *(char *)(*(short *)(iVar4 + 8) * 6 + iVar3 + 4);
    iVar4 = (*pcVar2)();
    param_2 = (uint)*(char *)(*(short *)(iVar4 + 8) * 6 + iVar3 + 5);
  }
  if (((param_1 != 0) && (param_1 != 1)) && (param_1 != 2)) {
    if (param_1 == 3) {
      if ((iVar3 != 0) && (((int)cStack24 & 0xffU) < ((int)cStack20 & 0xffU))) {
        iVar4 = (*pcVar2)();
        (*DAT_0001ad50)(*(undefined2 *)(iVar3 + *(short *)(iVar4 + 8) * 6));
      }
    }
    else if (((param_1 == 4) && (iVar3 != 0)) && (((int)cStack24 & 0xffU) < (param_2 & 0xff))) {
      iVar4 = (*pcVar2)();
      (*DAT_0001ae30)(*(undefined2 *)(*(short *)(iVar4 + 8) * 6 + iVar3 + 2));
    }
  }
  iVar4 = (*pcVar2)();
  if (-1 < *(short *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0001ae2a)) {
    FUN_0001a848(DAT_0001ae34);
    iVar4 = (*pcVar2)();
    FUN_0001a984(DAT_0001ae38,
                 (int)*(short *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0001ae2a));
    iVar4 = (*pcVar2)();
    if (*(short *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0001ae2a) < 0x4d) {
      iVar4 = (*pcVar2)();
      uVar5 = (int)*(char *)(*(short *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0001ae2a) +
                            DAT_0001ae3c) & 0xff;
    }
    else {
      iVar4 = (*pcVar2)();
      bVar1 = *(byte *)(((uint)((int)*(short *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) +
                                               (int)DAT_0001ae2a) + (int)DAT_0001ae2c) >> 3) +
                       DAT_0001ae40);
      iVar4 = (*pcVar2)();
      uVar5 = -(((bVar1 & *(byte *)(DAT_0001ae44 +
                                   ((int)*(short *)((int)DAT_0001ae2a +
                                                   *(int *)(*(int *)(iVar4 + 0x10) + 4)) +
                                    (int)DAT_0001ae2c & 7U))) == 0) - 1);
    }
    if ((int)uVar5 < 99) {
      iVar4 = (*pcVar2)();
      if (*(short *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0001ae2a) < 0x4d) {
        iVar4 = (*pcVar2)();
        iVar4 = (int)*(short *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0001ae2a);
        *(char *)(iVar4 + DAT_0001ae3c) = *(char *)(iVar4 + DAT_0001ae3c) + '\x01';
      }
      else {
        iVar4 = (*pcVar2)();
        pbVar6 = (byte *)(DAT_0001af0c +
                         ((uint)((int)*(short *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) +
                                                (int)DAT_0001af08) + (int)DAT_0001af0a) >> 3));
        iVar4 = (*pcVar2)();
        *pbVar6 = *pbVar6 | *(byte *)(DAT_0001af10 +
                                     ((int)*(short *)((int)DAT_0001af08 +
                                                     *(int *)(*(int *)(iVar4 + 0x10) + 4)) +
                                      (int)DAT_0001af0a & 7U));
      }
    }
  }
  iVar4 = (*pcVar2)();
  if ((*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x10) + 0x17) != '\0') && (iVar3 != 0)) {
    (*DAT_0001af14)(1,0xe);
    (*pcVar2)();
    (*pcVar2)();
    (*pcVar2)();
    (*pcVar2)();
    (*pcVar2)();
    (*DAT_0001af1c)();
  }
  return;
}



void FUN_0001af20(int param_1)

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
  
  iVar3 = DAT_0001b074;
  iVar2 = DAT_0001b070;
  if (param_1 != 0) {
    sVar1 = *(short *)(DAT_0001b070 + DAT_0001b062 + 2);
    iVar6 = (*DAT_0001b07c)(DAT_0001b074,(int)*(short *)(DAT_0001b070 + DAT_0001b062) << 0x10,
                            DAT_0001b078);
    iVar6 = DAT_0001b080 + iVar6;
    iVar7 = (*DAT_0001b07c)(iVar3,(int)sVar1 << 0x10,DAT_0001b078);
    pcVar4 = DAT_0001b084;
    iVar7 = DAT_0001b080 + iVar7;
    iVar8 = (*DAT_0001b084)(iVar6,param_1 << 0x10);
    iVar9 = (int)DAT_0001b064;
    uVar10 = (int)(short)((uint)(iVar8 + iVar3) >> 0x10) & 0xffff;
    *(uint *)(iVar2 + iVar9) = *(int *)(iVar2 + iVar9) + uVar10;
    *(uint *)(iVar2 + iVar9 + 0x5c) = *(int *)(iVar2 + iVar9 + 0x5c) + uVar10;
    iVar6 = (*pcVar4)((int)PTR_LAB_0001b088 - iVar6,param_1 << 0x10);
    iVar8 = (int)DAT_0001b066;
    uVar10 = (int)(short)((uint)(iVar6 + iVar3) >> 0x10) & 0xffff;
    *(uint *)(iVar2 + iVar8) = *(int *)(iVar2 + iVar8) + uVar10;
    *(uint *)(iVar2 + iVar8 + 0x5c) = *(int *)(iVar2 + iVar8 + 0x5c) + uVar10;
    iVar6 = (*pcVar4)(iVar7,param_1 << 0x10);
    puVar5 = PTR_LAB_0001b088;
    iVar8 = (int)DAT_0001b068;
    uVar10 = (int)(short)((uint)(iVar6 + iVar3) >> 0x10) & 0xffff;
    *(uint *)(iVar2 + iVar8) = *(int *)(iVar2 + iVar8) + uVar10;
    *(uint *)(iVar2 + iVar8 + 0x5c) = *(int *)(iVar2 + iVar8 + 0x5c) + uVar10;
    iVar6 = (*pcVar4)((int)puVar5 - iVar7,param_1 << 0x10);
    iVar7 = (int)DAT_0001b06a;
    uVar10 = (int)(short)((uint)(iVar6 + iVar3) >> 0x10) & 0xffff;
    *(uint *)(iVar2 + iVar7) = *(int *)(iVar2 + iVar7) + uVar10;
    *(uint *)(iVar2 + iVar7 + 0x5c) = *(int *)(iVar2 + iVar7 + 0x5c) + uVar10;
  }
  return;
}



void FUN_0001b002(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = DAT_0001b08c;
  iVar1 = DAT_0001b070;
  iVar3 = 4;
  do {
    if ((iVar3 < 1) ||
       (*(undefined *)(param_1 + 0x75 + iVar3) = *(undefined *)(DAT_0001b06c + iVar1 + iVar3),
       *(char *)(iVar3 + param_1 + 0x75) == 'b')) {
      return;
    }
    uVar4 = (int)*(char *)(param_1 + 0x75 + iVar3) & 0xff;
    if (uVar4 < 99) {
      do {
        if (*(uint *)(DAT_0001b06e + iVar1 + iVar3 * 4) < *(uint *)((uVar4 + 1) * 0xc + iVar2)) {
          *(char *)(DAT_0001b06c + iVar1 + iVar3) = (char)uVar4;
          break;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < 99);
    }
    iVar3 = iVar3 + -1;
  } while( true );
}



uint FUN_0001b0a2(int param_1)

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
  
  iVar1 = DAT_0001b22c;
  *(undefined *)(param_1 + 0x73) = *(undefined *)(DAT_0001b22c + DAT_0001b21c);
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  iVar4 = DAT_0001b238;
  pcVar3 = DAT_0001b234;
  pcVar2 = DAT_0001b230;
  uVar5 = (int)*(char *)(param_1 + 0x73) & 0xff;
  if (uVar5 != 0x62) {
    uVar15 = (int)*(char *)(param_1 + 0x73) & 0xff;
    if (uVar15 < 99) {
      do {
        if (*(uint *)(iVar1 + DAT_0001b21e) < *(uint *)((uVar15 + 1) * 0xc + DAT_0001b23c)) {
          *(char *)(iVar1 + DAT_0001b358) = (char)uVar15;
          *(char *)(param_1 + 0x74) = (char)uVar15 - *(char *)(param_1 + 0x73);
          return 0x74;
        }
        iVar16 = (uVar15 + 1) * 0xc + DAT_0001b23c;
        iVar11 = DAT_0001b220 + iVar1;
        uVar14 = *(int *)(iVar11 + 8) + *(int *)(iVar11 + 0x10);
        uVar5 = uVar14 >> 1;
        uVar14 = uVar14 >> 2;
        uVar12 = *(int *)(iVar11 + 4) + *(int *)(iVar11 + 0xc);
        uVar10 = uVar12 >> 1;
        uVar12 = uVar12 >> 2;
        uVar6 = (*pcVar3)(*(int *)(iVar11 + 8) - uVar14,uVar5);
        iVar11 = (*pcVar2)((int)*(char *)(iVar16 + 10) << 0x10,uVar6);
        sVar9 = (short)((uint)(iVar11 + iVar4) >> 0x10);
        uVar6 = (*pcVar3)(*(int *)(iVar1 + DAT_0001b222) - uVar12,uVar10);
        iVar11 = (*pcVar2)(((int)*(char *)(iVar16 + 8) & 0xffU) << 0x10,uVar6);
        uVar6 = (*pcVar3)(*(int *)(iVar1 + DAT_0001b224) - uVar14,uVar5);
        iVar7 = (*pcVar2)((int)*(char *)(iVar16 + 9) << 0x10,uVar6);
        uVar6 = (*pcVar3)(*(int *)(iVar1 + DAT_0001b226) - uVar12,uVar10);
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
        *(short *)(DAT_0001b228 + iVar1) =
             *(short *)(DAT_0001b228 + iVar1) + *(char *)(iVar16 + 6) + sVar9;
        uVar5 = (int)*(char *)(iVar16 + 7) + (int)sVar13;
        *(short *)(DAT_0001b22a + iVar1) = *(short *)(DAT_0001b22a + iVar1) + (short)uVar5;
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < 99);
    }
    else {
      uVar5 = 0x73;
    }
  }
  return uVar5;
}



void FUN_0001b270(int param_1)

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
        FUN_0001a984((uint)bVar2 * 0x10 + DAT_0001b35c,
                     (int)*(short *)(iVar3 * 2 + param_1 + 0x12 + iVar1 * 0x10));
        bVar2 = bVar2 + 1;
      }
    }
    iVar1 = iVar1 + 1;
    if (5 < iVar1) {
      if (bVar2 != 0) {
        FUN_0001a848(DAT_0001b360);
        return;
      }
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001b308(int param_1)

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
  
  iVar3 = _LAB_0001b364;
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
    iVar7 = *(int *)(iVar13 * 4 + _LAB_0001b368);
    *(undefined *)(param_1 + 0x7a + iVar13) = 0;
    iVar10 = 0;
    while (*(short *)(iVar10 * 8 + iVar7 + 6) != 0) {
      iVar11 = 0;
      iVar8 = 1;
      iVar4 = iVar10 * 8 + iVar7;
      do {
        if ((int)((int)*(char *)(iVar4 + iVar8) & 0xffU) <=
            *(char *)(DAT_0001b446 + iVar3 + iVar8) + 1) {
          iVar11 = iVar11 + 1;
        }
        if ((int)((int)*(char *)(iVar4 + iVar8 + 1) & 0xffU) <=
            *(char *)(DAT_0001b446 + iVar3 + iVar8 + 1) + 1) {
          iVar11 = iVar11 + 1;
        }
        iVar9 = iVar8 + 3;
        if ((int)((int)*(char *)(iVar4 + iVar8 + 2) & 0xffU) <=
            *(char *)(DAT_0001b446 + iVar3 + iVar8 + 2) + 1) {
          iVar11 = iVar11 + 1;
        }
        iVar8 = iVar8 + 4;
        if ((int)((int)*(char *)(iVar4 + iVar9) & 0xffU) <=
            *(char *)(DAT_0001b446 + iVar3 + iVar9) + 1) {
          iVar11 = iVar11 + 1;
        }
      } while (iVar8 < 5);
      if (3 < iVar11) {
        sVar1 = *(short *)(iVar10 * 8 + iVar7 + 6);
        iVar4 = (int)sVar1;
        if (iVar4 < 0x4d) {
          bVar2 = *(byte *)(sVar1 + DAT_0001b44c);
        }
        else {
          bVar2 = *(byte *)(DAT_0001b454 + (DAT_0001b448 + iVar4 & 7U)) &
                  *(byte *)(DAT_0001b450 + ((uint)(DAT_0001b448 + iVar4) >> 3));
        }
        if (bVar2 == 0) {
          iVar4 = iVar10 * 8 + iVar7;
          if (*(short *)(iVar4 + 6) < 0x4d) {
            *(undefined *)(*(short *)(iVar4 + 6) + DAT_0001b44c) = 1;
          }
          else {
            uVar5 = (uint)((int)DAT_0001b572 + (int)*(short *)(iVar4 + 6)) >> 3;
            *(byte *)(DAT_0001b584 + uVar5) =
                 *(byte *)(uVar5 + DAT_0001b584) |
                 *(byte *)(DAT_0001b580 + ((int)*(short *)(iVar4 + 6) + (int)DAT_0001b572 & 7U));
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



undefined4 FUN_0001b4c8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((DAT_0001b574 & *(ushort *)(DAT_0001b588 + 6)) == 0) {
    uVar1 = 0;
  }
  else {
    if ((*(ushort *)(DAT_0001b588 + 6) & 4) == 0) {
      if ((*(ushort *)(DAT_0001b588 + 6) & 1) == 0) {
        if ((*(ushort *)(DAT_0001b588 + 6) & 2) == 0) {
          return 0;
        }
        iVar2 = (*DAT_0001b58c)();
        iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
        *(uint *)(iVar2 + DAT_0001b576) = *(uint *)(iVar2 + DAT_0001b576) | (int)(short)DAT_0001b574
        ;
        return 1;
      }
      iVar2 = (*DAT_0001b58c)();
      iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
      *(uint *)(iVar2 + DAT_0001b576) = *(uint *)(iVar2 + DAT_0001b576) | (int)DAT_0001b57a;
    }
    else {
      iVar2 = (*DAT_0001b58c)();
      iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
      *(uint *)(iVar2 + DAT_0001b576) = *(uint *)(iVar2 + DAT_0001b576) | (int)DAT_0001b578;
    }
    uVar1 = 1;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0001b53e(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((DAT_0001b574 & *(ushort *)(DAT_0001b588 + 6)) == 0) {
    return 0;
  }
  if ((_LAB_0001b57c & *(ushort *)(DAT_0001b588 + 6)) == 0) {
    if ((DAT_0001b662 & *(ushort *)(DAT_0001b588 + 6)) != 0) {
      iVar1 = (*DAT_0001b670)();
      uVar2 = 1;
      iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 0x18);
      *(uint *)(iVar1 + DAT_0001b664) = *(uint *)(iVar1 + DAT_0001b664) | (int)DAT_0001b666;
    }
  }
  else {
    iVar1 = (*DAT_0001b58c)();
    iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 0x18);
    *(uint *)(iVar1 + DAT_0001b576) = *(uint *)(iVar1 + DAT_0001b576) | (int)_LAB_0001b57e;
    uVar2 = 1;
  }
  return uVar2;
}



int FUN_0001b5b6(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = DAT_0001b670;
  iVar2 = FUN_0001b4c8();
  if (iVar2 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      iVar2 = (*pcVar1)();
      iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
      *(uint *)(iVar2 + DAT_0001b664) = *(uint *)(iVar2 + DAT_0001b664) | (int)DAT_0001b668;
    }
    else if (param_1 == 2) {
      iVar2 = (*pcVar1)();
      iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
      *(uint *)(iVar2 + DAT_0001b664) = *(uint *)(iVar2 + DAT_0001b664) | (int)DAT_0001b66a;
    }
    else if ((param_1 == 3) || (param_1 == 4)) {
      iVar2 = (*pcVar1)();
      iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
      *(uint *)(iVar2 + DAT_0001b664) = *(uint *)(iVar2 + DAT_0001b664) | (int)DAT_0001b66c;
    }
  }
  iVar2 = FUN_0001b53e();
  if (iVar2 == 0) {
    if (*(int *)(*DAT_0001b674 + 0xc) == 2) {
      iVar3 = (*pcVar1)();
      iVar2 = (int)DAT_0001b664;
      iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
      *(uint *)(iVar3 + iVar2) = *(uint *)(iVar3 + iVar2) | (int)DAT_0001b666;
    }
    else {
      iVar2 = (*pcVar1)();
      iVar3 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
      iVar2 = (int)DAT_0001b664;
      *(uint *)(iVar3 + iVar2) = *(uint *)(iVar3 + iVar2) | (int)DAT_0001b666;
    }
  }
  return iVar2;
}



void FUN_0001c148(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = DAT_0001c1e4;
  iVar1 = DAT_0001c1e0;
  *(undefined2 *)(DAT_0001c1e0 + 0x12) = *(undefined2 *)(DAT_0001c1e0 + 0x10);
  *(short *)(iVar1 + 0x10) = (short)(((int)*(char *)(param_1 + 0x10) & 0xfU) << 0xc);
  (*pcVar2)(*(undefined *)(param_1 + 0xe),*(undefined *)(param_1 + 0xf));
  (*DAT_0001c1ec)();
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined2 *)(iVar1 + 0x10) = *(undefined2 *)(iVar1 + 0x12);
  return;
}



void FUN_0001c19a(uint param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
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
  
  pcVar5 = DAT_0001c200;
  iVar4 = DAT_0001c1fc;
  puVar3 = PTR_LAB_0003fffe_1_0001c1f8;
  puVar2 = PTR_LAB_0001fffe_1_0001c1f4;
  iVar1 = DAT_0001c1f0;
  iVar7 = ((param_2 & 0xff) * -8 + 0x68) * 0x10000;
  iVar9 = (int)DAT_0001c1de;
  iVar8 = ((param_1 & 0xff) * 8 + (int)DAT_0001c1dc) * 0x10000;
  for (local_50 = 10; 3 < local_50; local_50 = local_50 + -4) {
    uStack36 = 0;
    iStack44 = iVar8;
    iStack40 = iVar7;
    uVar6 = (*pcVar5)();
    local_38 = (uVar6 & (uint)puVar3) + DAT_0001c3c8;
    uVar6 = (*pcVar5)();
    local_34 = (uVar6 & (uint)puVar3) + iVar4;
    uStack48 = 0;
    local_44 = 0;
    iStack64 = 0;
    uStack60 = 0;
    uVar6 = (*pcVar5)();
    local_44 = (int)DAT_0001c3c2;
    local_38 = (uVar6 & (uint)puVar2) + iVar1;
    iStack64 = iVar9;
    (*DAT_0001c3d4)(*(undefined4 *)(*DAT_0001c3d0 + 0xc),DAT_0001c3cc,&iStack44,&local_38);
    uStack36 = 0;
    iStack44 = iVar8;
    iStack40 = iVar7;
    uVar6 = (*pcVar5)();
    local_38 = (uVar6 & (uint)puVar3) + DAT_0001c3c8;
    uVar6 = (*pcVar5)();
    local_34 = (uVar6 & (uint)puVar3) + iVar4;
    uStack48 = 0;
    local_44 = 0;
    iStack64 = 0;
    uStack60 = 0;
    uVar6 = (*pcVar5)();
    local_44 = (int)DAT_0001c3c2;
    local_38 = (uVar6 & (uint)puVar2) + iVar1;
    iStack64 = iVar9;
    (*DAT_0001c3d4)(*(undefined4 *)(*DAT_0001c3d0 + 0xc),DAT_0001c3cc,&iStack44,&local_38);
    uStack36 = 0;
    iStack44 = iVar8;
    iStack40 = iVar7;
    uVar6 = (*pcVar5)();
    local_38 = (uVar6 & (uint)puVar3) + DAT_0001c3c8;
    uVar6 = (*pcVar5)();
    local_34 = (uVar6 & (uint)puVar3) + iVar4;
    uStack48 = 0;
    local_44 = 0;
    iStack64 = 0;
    uStack60 = 0;
    uVar6 = (*pcVar5)();
    local_44 = (int)DAT_0001c3c2;
    local_38 = (uVar6 & (uint)puVar2) + iVar1;
    local_7c = iVar4;
    local_80 = &local_44;
    iStack64 = iVar9;
    (*DAT_0001c3d4)(*(undefined4 *)(*DAT_0001c3d0 + 0xc),DAT_0001c3cc,&iStack44,&local_38);
    uStack36 = 0;
    iStack44 = iVar8;
    iStack40 = iVar7;
    uVar6 = (*pcVar5)();
    local_38 = (uVar6 & (uint)puVar3) + DAT_0001c3c8;
    uVar6 = (*pcVar5)();
    local_34 = (uVar6 & (uint)puVar3) + iVar4;
    uStack48 = 0;
    local_44 = 0;
    iStack64 = 0;
    uStack60 = 0;
    uVar6 = (*pcVar5)();
    local_44 = (int)DAT_0001c3c2;
    local_38 = (uVar6 & (uint)puVar2) + iVar1;
    local_84 = 0x3c;
    iStack64 = iVar9;
    (*DAT_0001c4e8)(*(undefined4 *)(*DAT_0001c4e4 + 0xc),DAT_0001c4e0,&iStack44,&local_38,&local_44,
                    iVar4,(int)&local_84 + (int)DAT_0001c3c4);
  }
  for (; -1 < local_50; local_50 = local_50 + -1) {
    uStack36 = 0;
    iStack44 = iVar8;
    iStack40 = iVar7;
    uVar6 = (*pcVar5)();
    local_38 = (uVar6 & (uint)puVar3) + DAT_0001c4ec;
    uVar6 = (*pcVar5)();
    local_34 = (uVar6 & (uint)puVar3) + iVar4;
    uStack48 = 0;
    local_44 = 0;
    iStack64 = 0;
    uStack60 = 0;
    uVar6 = (*pcVar5)();
    local_44 = (int)DAT_0001c4dc;
    local_38 = (uVar6 & (uint)puVar2) + iVar1;
    iStack64 = iVar9;
    (*DAT_0001c4e8)(*(undefined4 *)(*DAT_0001c4e4 + 0xc),DAT_0001c4e0,&iStack44,&local_38);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001c490(uint param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
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
  
  pcVar4 = _LAB_0001c4f0;
  pcVar3 = DAT_0001c4e8;
  piVar2 = DAT_0001c4e4;
  uVar1 = DAT_0001c4e0;
  iStack72 = ((param_1 & 0xff) * 8 + (int)DAT_0001c4de) * 0x10000;
  iStack80 = ((param_2 & 0xff) * -8 + 0x68) * 0x10000;
  local_58 = param_3 >> 1;
  iStack84 = local_58;
  uStack76 = param_4;
  for (iVar6 = 0x14; 3 < iVar6; iVar6 = iVar6 + -4) {
    iStack44 = iStack72;
    iStack40 = iStack80;
    uStack36 = 0;
    (*pcVar4)();
    local_38 = (*DAT_0001c6c4)();
    local_38 = local_38 - local_58;
    (*pcVar4)();
    local_34 = (*DAT_0001c6c4)();
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
    local_38 = (*DAT_0001c6c4)();
    local_38 = local_38 - local_58;
    (*pcVar4)();
    local_34 = (*DAT_0001c6c4)();
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
    local_38 = (*DAT_0001c6c4)();
    local_38 = local_38 - local_58;
    (*pcVar4)();
    iVar5 = (*DAT_0001c6c4)();
    local_34 = iVar5 - iStack84;
    uStack48 = 0;
    local_44 = 0;
    uStack60 = 0;
    uStack64 = uStack76;
    local_80[1] = (int)param_6;
    local_80[0] = *(int *)((int)local_80 + _LAB_0001c6bc + 4);
    local_84 = *(undefined4 *)((int)local_80 + (int)DAT_0001c6be);
    local_88 = &local_44;
    (*pcVar3)(*(undefined4 *)(*piVar2 + 0xc),uVar1,&iStack44,&local_38);
    iStack44 = iStack72;
    iStack40 = iStack80;
    uStack36 = 0;
    (*pcVar4)();
    local_38 = (*DAT_0001c6c4)();
    local_38 = local_38 - local_58;
    (*pcVar4)();
    iVar5 = (*DAT_0001c6c4)();
    local_34 = iVar5 - iStack84;
    uStack48 = 0;
    local_44 = 0;
    uStack60 = 0;
    uStack64 = uStack76;
    local_90[1] = (int)*(short *)((int)&local_88 + (int)DAT_0001c6c0);
    local_90[0] = *(int *)((int)local_90 + DAT_0001c6c2 + 4);
    (*pcVar3)(*(undefined4 *)(*piVar2 + 0xc),uVar1,&iStack44,&local_38,&local_44,
              *(undefined4 *)((int)local_90 + (int)DAT_0001c780));
  }
  for (; -1 < iVar6; iVar6 = iVar6 + -1) {
    uStack36 = 0;
    iStack44 = iStack72;
    iStack40 = iStack80;
    (*pcVar4)();
    local_38 = (*DAT_0001c784)();
    local_38 = local_38 - local_58;
    (*pcVar4)();
    local_34 = (*DAT_0001c784)();
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



void FUN_0001c788(uint param_1,uint param_2)

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
  
  iVar3 = (int)DAT_0001c91e;
  puVar15 = (undefined4 *)(&stack0xffffffe8 + iVar3);
  *(undefined4 *)(&stack0xffffffe8 + iVar3) = *DAT_0001c924;
  *(undefined4 *)(&stack0xffffffec + iVar3) = DAT_0001c924[1];
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = DAT_0001c924[2];
  *(undefined4 *)(&stack0xfffffff4 + iVar3) = DAT_0001c924[3];
  *(undefined4 *)(&stack0xfffffff8 + iVar3) = DAT_0001c924[4];
  *(undefined4 *)(&stack0xfffffffc + iVar3) = DAT_0001c924[5];
  *(undefined4 *)(&stack0x00000000 + iVar3) = DAT_0001c924[6];
  *(undefined4 *)(&stack0x00000004 + iVar3) = DAT_0001c924[7];
  *(undefined4 *)(&stack0x00000008 + iVar3) = DAT_0001c924[8];
  uVar13 = 0x10;
  *(undefined4 *)(&stack0x0000000c + iVar3) = DAT_0001c924[9];
  *(undefined4 *)(&stack0x00000010 + iVar3) = DAT_0001c924[10];
  *(undefined4 *)(&stack0x00000014 + iVar3) = DAT_0001c924[0xb];
  *(undefined4 *)(&stack0x00000018 + iVar3) = DAT_0001c924[0xc];
  *(undefined4 *)(&stack0x0000001c + iVar3) = DAT_0001c924[0xd];
  *(undefined4 *)(&stack0x00000020 + iVar3) = DAT_0001c924[0xe];
  *(undefined4 *)(&stack0x00000024 + iVar3) = DAT_0001c924[0xf];
  *(undefined4 *)(&stack0x00000030 + iVar3) = 0;
  *(undefined4 *)(&stack0x0000002c + iVar3) = 0;
  *(undefined4 *)(&stack0x00000028 + iVar3) = 0;
  *(uint *)(&stack0xffffffe4 + iVar3) = (param_1 & 0xff) << 3;
  iVar10 = (int)DAT_0001c920;
  iVar11 = (int)DAT_0001c922;
  *(uint *)((int)aiStack64 + iVar3 + 0x20) = (param_2 & 0xff) << 3;
  do {
    uVar4 = (*DAT_0001c928)();
    iVar5 = (*DAT_0001c92c)(uVar4 >> 0x10,uVar13);
    uVar8 = puVar15[iVar5];
    puVar15[iVar5] = puVar15[uVar13 - 1];
    puVar15[uVar13 - 1] = uVar8;
    piVar6 = (int *)(&stack0x00000034 + ((uVar13 + iVar11) * 0xc & 0xff) + iVar3);
    *piVar6 = ((uVar13 & 3) * 2 + *(int *)(&stack0xffffffe4 + iVar3) + iVar10) * 0x10000;
    piVar6[1] = ((((int)uVar13 >> 2 & 3U) * -4 + 0x70) - *(int *)((int)aiStack64 + iVar3 + 0x20)) *
                0x10000;
    piVar6[2] = 0;
    uVar14 = uVar13 - 1;
    uVar4 = (*DAT_0001c928)();
    iVar5 = (*DAT_0001c92c)(uVar4 >> 0x10,uVar14);
    uVar2 = DAT_0001c93c;
    pcVar1 = DAT_0001c938;
    piVar6 = DAT_0001c934;
    uVar8 = DAT_0001c930;
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
    *(undefined4 *)((int)aiStack64 + iVar3 + 0x18) = DAT_0001c940;
    *(undefined4 *)((int)aiStack64 + iVar3 + 0x14) = uVar2;
    *(undefined **)((int)aiStack64 + iVar3 + 0x10) = &stack0x00000028 + iVar3;
    (*pcVar1)(*(undefined4 *)(*piVar6 + 0xc),uVar8,puVar12,&stack0x00000028 + iVar3);
    *(undefined4 *)((int)aiStack64 + iVar3 + 0xc) = puVar15[1];
    *(undefined4 *)((int)aiStack64 + iVar3 + 8) = DAT_0001ca18;
    *(undefined4 *)((int)aiStack64 + iVar3 + 4) = uVar2;
    *(undefined **)((int)aiStack64 + iVar3) = &stack0x00000028 + iVar3;
    (*pcVar1)(*(undefined4 *)(*piVar6 + 0xc),uVar8,puVar12 + 0xc,&stack0x00000028 + iVar3);
    puVar12 = puVar12 + 0x18;
  }
  return;
}



void FUN_0001c97e(undefined4 param_1,int param_2,undefined2 param_3,undefined param_4,int param_5)

{
  int *piVar1;
  
  piVar1 = (int *)(*DAT_0001ca20)(param_1,DAT_0001ca1c,0x18);
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

void FUN_0001cae4(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined2 param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cStack28;
  
  puVar2 = (undefined4 *)(*_LAB_0001cb6c)(param_1,_LAB_0001cb68,0x1c);
  *(undefined2 *)(puVar2 + 3) = 0;
  *(undefined2 *)((int)puVar2 + 0xe) = param_4;
  *puVar2 = param_2;
  uVar4 = *param_2;
  uVar3 = param_2[3];
  (*DAT_0001cb70)(param_3);
  pcVar1 = DAT_0001cb70;
  *(char *)((int)puVar2 + 0x17) = ((char)uVar4 + (char)uVar3) - cStack28;
  *(char *)(puVar2 + 6) = (char)param_2[1];
  (*pcVar1)(param_3);
  *(ushort *)(puVar2 + 5) = (short)cStack28 & 0xff;
  puVar2[2] = param_3;
  puVar2[1] = param_3;
  *(char *)((int)puVar2 + 0x19) = (char)param_2[2];
  return;
}



int FUN_0001d088(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 *param_5,int param_6,int param_7,short param_8)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar5 = DAT_0001d1a0;
  if (param_8 != 0) {
    uVar5 = DAT_0001d19c;
  }
  iVar2 = (*DAT_0001d1a4)(param_1,uVar5,0x44);
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
    pcVar1 = DAT_0001d1a8;
    *(int *)(iVar2 + 0x34) = param_6;
    (*pcVar1)(iVar2 + 8,(int)*(short *)(*(int *)(param_1 + 4) + 4),param_2);
    *(short *)(iVar2 + 0x40) = param_8;
    if (param_8 != 0) {
      uVar3 = (*DAT_0001d1ac)();
      pcVar1 = DAT_0001d18c;
      for (uVar3 = uVar3 & 0x1f; uVar3 != 0; uVar3 = uVar3 - 1) {
        (*pcVar1)(iVar2 + 8);
      }
    }
    if (param_7 == 0) {
      if (param_6 != DAT_0001d1b4) {
        *(undefined4 *)(iVar2 + -0xc) = DAT_0001d1b8;
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
      *(undefined4 *)(iVar2 + -0xc) = DAT_0001d1b0;
    }
  }
  return iVar2;
}



undefined4 FUN_0001d2ec(int *param_1)

{
  short *psVar1;
  uint uVar2;
  
  psVar1 = DAT_0001d3e0;
  uVar2 = 0;
  if (*param_1 < (int)DAT_0001d3e0[6]) {
    uVar2 = 1;
    if (*param_1 < (int)DAT_0001d3e0[2]) {
      *param_1 = (int)DAT_0001d3e0[2];
    }
  }
  else if (((int)DAT_0001d3e0[7] < *param_1) && (uVar2 = 1, (int)DAT_0001d3e0[3] < *param_1)) {
    *param_1 = (int)DAT_0001d3e0[3];
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

undefined4 FUN_0001d3e4(int *param_1,int *param_2,undefined2 *param_3,undefined4 param_4)

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
  
  pcVar3 = DAT_0001d530;
  iVar2 = DAT_0001d52c;
  iVar9 = ((int)*(char *)((int)param_1 + 7) & 0xffU) * 0x1c + *param_1;
  local_2c = *param_2;
  iStack40 = param_2[1];
  iStack36 = param_2[2];
  uStack60 = (*DAT_0001d530)(*(undefined4 *)(iVar9 + 0x14),param_4);
  uStack60 = uStack60 + local_2c;
  uStack56 = (*pcVar3)(*(undefined4 *)(iVar9 + 0x18),param_4);
  uStack52 = uStack60;
  uStack56 = uStack56 + iStack40;
  iVar4 = (*pcVar3)(*(undefined4 *)(iVar9 + 0xc),param_4);
  uStack48 = uStack56;
  uStack52 = uStack52 + iVar4;
  iVar4 = (*pcVar3)(*(undefined4 *)(iVar9 + 0x10),param_4);
  uStack48 = uStack48 - iVar4;
  iVar4 = FUN_0001d2ec(&uStack60);
  uVar1 = DAT_0001d52a;
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

undefined4 FUN_0001d534(int *param_1,int *param_2,undefined4 param_3)

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
  
  pcVar3 = DAT_0001d658;
  iVar2 = DAT_0001d654;
  iVar8 = ((int)*(char *)((int)param_1 + 7) & 0xffU) * 0x1c + *param_1;
  local_2c = *param_2;
  iStack40 = param_2[1];
  iStack36 = param_2[2];
  local_3c = (*DAT_0001d658)(*(undefined4 *)(iVar8 + 0x14),param_3);
  local_3c = local_3c + local_2c;
  uStack56 = (*pcVar3)(*(undefined4 *)(iVar8 + 0x18),param_3);
  local_34 = local_3c;
  uStack56 = uStack56 + iStack40;
  iVar4 = (*pcVar3)(*(undefined4 *)(iVar8 + 0xc),param_3);
  local_30 = uStack56;
  local_34 = local_34 + iVar4;
  iVar4 = (*pcVar3)(*(undefined4 *)(iVar8 + 0x10),param_3);
  local_30 = local_30 - iVar4;
  iVar4 = FUN_0001d2ec(&local_3c);
  uVar1 = DAT_0001d650;
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



void FUN_0001e150(int param_1)

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
  
  piVar16 = DAT_0001e24c;
  iVar8 = DAT_0001e248;
  sVar6 = DAT_0001e238;
  sVar11 = *DAT_0001e240 + *(short *)(param_1 + 0x1a) + DAT_0001e238;
  sVar12 = *DAT_0001e240 + *(short *)(param_1 + 0x1a) + *DAT_0001e244 + DAT_0001e238;
  sVar4 = DAT_0001e240[1];
  sVar1 = *(short *)(param_1 + 0x1c);
  sVar5 = DAT_0001e240[1];
  sVar2 = *(short *)(param_1 + 0x1c);
  sVar3 = DAT_0001e244[1];
  puVar15 = (undefined4 *)(DAT_0001e248 + 0x14);
  puVar14 = (undefined2 *)*puVar15;
  *puVar14 = DAT_0001e23a;
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
  psVar17 = DAT_0001e254;
  piVar16 = DAT_0001e250;
  *(short *)(iVar18 + 6) = (short)((uint)puVar14 >> 3);
  uVar7 = DAT_0001e23c;
  *(int *)(iVar8 + 0x34) = iVar18 + 8;
  piVar9 = DAT_0001e258;
  *(int *)(iVar8 + 0x30) = *(int *)(iVar8 + 0x30) + 1;
  *puVar15 = puVar14 + 0x10;
  psVar13 = psVar17 + 4;
  *(int *)(iVar8 + 0x20) = *(int *)(iVar8 + 0x20) + 1;
  for (; piVar10 = DAT_0001e484, psVar17 <= psVar13; psVar17 = psVar17 + 2) {
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
  sVar1 = *DAT_0001e480;
  sVar4 = DAT_0001e480[1];
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
  piVar16 = DAT_0001e48c;
  sVar3 = *(short *)(param_1 + 0x16);
  sVar1 = *DAT_0001e488;
  sVar4 = DAT_0001e488[1];
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



uint FUN_0001e42e(int param_1)

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
  local_38 = DAT_0001e490;
  iVar11 = (*DAT_0001e494)(0x1e);
  bVar4 = 0xe < iVar11;
  iVar12 = (*DAT_0001e494)();
  pcVar7 = DAT_0001e498;
  for (iVar11 = 5; 3 < iVar11; iVar11 = iVar11 + -4) {
    (*pcVar7)();
    uVar13 = (*DAT_0001e59c)();
    if ((*(uint *)(DAT_0001e59a + extraout_r3) & uVar13) == 0) {
      *(undefined *)(param_1 + 1 + iVar11) = 0;
    }
    else {
      iVar20 = iVar11 + 1;
      *(undefined *)(param_1 + 1 + iVar11) = 1;
      uVar19 = uVar19 + 1;
    }
    (*pcVar7)();
    uVar13 = (*DAT_0001e59c)();
    if ((*(uint *)(DAT_0001e59a + extraout_r3_00) & uVar13) == 0) {
      *(undefined *)(param_1 + 1 + iVar11 + -1) = 0;
    }
    else {
      *(undefined *)(param_1 + 1 + iVar11 + -1) = 1;
      uVar19 = uVar19 + 1;
      iVar20 = iVar11;
    }
    (*pcVar7)();
    uVar13 = (*DAT_0001e59c)();
    if ((*(uint *)(DAT_0001e59a + extraout_r3_01) & uVar13) == 0) {
      *(undefined *)(param_1 + 1 + iVar11 + -2) = 0;
    }
    else {
      iVar20 = iVar11 + -1;
      *(undefined *)(param_1 + 1 + iVar11 + -2) = 1;
      uVar19 = uVar19 + 1;
    }
    (*pcVar7)();
    uVar13 = (*DAT_0001e59c)();
    if ((*(uint *)(DAT_0001e59a + extraout_r3_02) & uVar13) == 0) {
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
    uVar13 = (*DAT_0001e59c)();
    if ((*(uint *)(DAT_0001e59a + extraout_r2) & uVar13) == 0) {
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
      *(char *)(param_1 + 0xd) = (char)DAT_0001e600 + (char)iVar20;
      iVar11 = (*pcVar7)();
      uVar19 = ((int)*(char *)(param_1 + 0xd) & 0xffU) * 2;
      bVar5 = bVar4;
      if (0x78 < *(short *)((int)DAT_0001e602 + *(int *)(*(int *)(iVar11 + 0x10) + 0x18) + uVar19))
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
      if (0x78 < *(short *)((int)DAT_0001e746 + *(int *)(*(int *)(iVar11 + 0x10) + 0x18) + uVar19))
      {
        bVar6 = true;
      }
    }
  }
  if (!bVar5) {
    if ((bVar6) && (iVar11 = (*DAT_0001e74c)(), iVar11 != 0)) {
      local_38 = DAT_0001e750;
    }
    puVar9 = DAT_0001e75c;
    uVar8 = DAT_0001e74a;
    sVar14 = *(short *)(param_1 + 0x16) + *DAT_0001e754 + *DAT_0001e758 + DAT_0001e748;
    sVar3 = DAT_0001e754[1];
    sVar1 = *(short *)(param_1 + 0x18);
    sVar2 = DAT_0001e758[1];
    puVar16 = (undefined2 *)*DAT_0001e75c;
    puVar17 = (undefined2 *)DAT_0001e75c[4];
    DAT_0001e75c[4] = puVar17 + 4;
    *puVar16 = uVar8;
    piVar10 = DAT_0001e764;
    piVar18 = (int *)(iVar20 * 4 + DAT_0001e760);
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



void FUN_0001e80a(uint param_1,short *param_2,undefined2 *param_3,uint param_4)

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
    param_1 = DAT_0001e858 + param_4;
  }
  iVar8 = (*DAT_0001e85c)(param_1);
  iVar6 = DAT_0001e864;
  piVar5 = DAT_0001e860;
  uVar4 = DAT_0001e84e;
  while (iVar8 != 0) {
    bVar10 = (*DAT_0001e9b8)();
    uVar9 = (*DAT_0001e9bc)();
    iVar8 = (*DAT_0001e9b8)(uVar9);
    uVar7 = DAT_0001e9b6;
    if (((bVar3) || (bVar10 != 0)) || (iVar8 == 0)) {
      puVar13 = (undefined4 *)((uint)bVar10 * 0xc + DAT_0001e9c0);
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
FUN_0001e970(int param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4,undefined param_5
            )

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*DAT_0001e9c8)(param_1,DAT_0001e9c4,0x20);
  *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(*(int *)(param_1 + 4) + 4);
  *puVar1 = param_2;
  *(undefined2 *)(puVar1 + 1) = *param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  *(undefined *)(puVar1 + 7) = param_5;
  puVar1[6] = 0;
  return 0x1c;
}



undefined4 FUN_0001ec04(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_0001ee98;
  iVar2 = (*DAT_0001ee98)(0,8);
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



uint FUN_0001ee9c(short *param_1,int param_2)

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
  
  iVar6 = DAT_0001ef6c;
  iVar9 = *DAT_0001ef68;
  sVar2 = *(short *)(DAT_0001ef6c + DAT_0001ef54);
  sVar8 = (*DAT_0001ef74)((int)*(short *)((short)((short)param_2 * 0xc) + DAT_0001ef70));
  pcVar4 = DAT_0001ef78;
  bVar3 = sVar2 < sVar8;
  iVar5 = (*DAT_0001ef78)();
  if (*(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0001ef56) < '\x02') {
    if (((param_2 == DAT_0001ef58) || (param_2 == DAT_0001ef5a)) || (param_2 == DAT_0001ef5c)) {
      iVar5 = (*pcVar4)();
      bVar3 = *(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0001ef56) == '\0' || bVar3;
      if (*(short *)(iVar6 + DAT_0001ef60) == *(short *)(iVar6 + DAT_0001ef62)) {
        bVar3 = true;
      }
    }
    else if (param_2 == DAT_0001ef5e) {
      iVar5 = (*pcVar4)();
      bVar3 = *(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0001ef56) == '\0' || bVar3;
      iVar5 = (*pcVar4)();
      if ((*(uint *)((int)DAT_0001ef64 + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 0x7f) == 0) {
        bVar3 = true;
      }
    }
    else {
      bVar3 = true;
    }
  }
  cVar1 = *(char *)(iVar6 + DAT_0001ef9e);
  switch(param_2 - DAT_0001efa0) {
  case 0:
  case 0xf:
  case 0x11:
    iVar6 = (*pcVar4)();
    uVar7 = (uint)DAT_0001f17a;
    if (((int)DAT_0001f178 & *(uint *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x18) + uVar7)) != 0) {
      bVar3 = true;
    }
    break;
  default:
    iVar6 = (*pcVar4)();
    uVar7 = (uint)DAT_0001f17c;
    if (*(short *)(*(int *)(*(int *)(iVar6 + 0x10) + 0xc) + uVar7) == 0) {
      bVar3 = true;
    }
    break;
  case 6:
    if ((cVar1 != '\x06') && (*(int *)(iVar9 + 0x1c) != 2)) {
      bVar3 = true;
    }
    iVar6 = (*pcVar4)();
    if (*(char *)((int)DAT_0001f0bc + *(int *)(*(int *)(iVar6 + 0x10) + 4)) != '\x03') {
      bVar3 = true;
    }
    iVar6 = (*pcVar4)();
    uVar7 = *(uint *)((int)DAT_0001f0be + *(int *)(*(int *)(iVar6 + 0x10) + 0x18));
    if ((uVar7 & 0x80) != 0) {
      bVar3 = true;
    }
    break;
  case 0x16:
  case 0x17:
  case 0x18:
    uVar7 = (uint)DAT_0001f176;
    if (*(short *)(iVar6 + DAT_0001f174) == *(short *)(iVar6 + uVar7)) {
      bVar3 = true;
    }
    break;
  case 0x19:
    iVar6 = (*pcVar4)();
    uVar7 = *(uint *)((int)DAT_0001f17a + *(int *)(*(int *)(iVar6 + 0x10) + 0x18));
    if ((uVar7 & 0x7f) == 0) {
      bVar3 = true;
    }
    break;
  case 0x1a:
    if ((cVar1 != '\x06') && (*(int *)(iVar9 + 0x1c) != 4)) {
      bVar3 = true;
    }
    iVar5 = (*pcVar4)();
    if (*(char *)((int)DAT_0001f0bc + *(int *)(*(int *)(iVar5 + 0x10) + 4)) != '\x03') {
      bVar3 = true;
    }
    uVar7 = (uint)DAT_0001f0c4;
    if (*(short *)(iVar6 + DAT_0001f0c2) == *(short *)(iVar6 + uVar7)) {
      bVar3 = true;
    }
    break;
  case 0x1b:
    if ((cVar1 != '\x06') && (*(int *)(iVar9 + 0x1c) != 1)) {
      bVar3 = true;
    }
    iVar6 = (*pcVar4)();
    if (*(char *)((int)DAT_0001f0bc + *(int *)(*(int *)(iVar6 + 0x10) + 4)) != '\x03') {
      bVar3 = true;
    }
    iVar6 = (*pcVar4)();
    uVar7 = (uint)DAT_0001f0be;
    if (((int)DAT_0001f0c0 & *(uint *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x18) + uVar7)) != 0) {
      bVar3 = true;
    }
    break;
  case 0x1c:
    if ((cVar1 != '\x06') && (*(int *)(iVar9 + 0x1c) != 3)) {
      bVar3 = true;
    }
    iVar6 = (*pcVar4)();
    if (*(char *)((int)DAT_0001f0bc + *(int *)(*(int *)(iVar6 + 0x10) + 4)) != '\x03') {
      bVar3 = true;
    }
    iVar6 = (*pcVar4)();
    uVar7 = (int)DAT_0001f0c6 - 0x40;
    if (((int)DAT_0001f0c6 & *(uint *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x18) + uVar7)) != 0) {
      bVar3 = true;
    }
    break;
  case 0x1d:
    uVar7 = FUN_0001ec04();
    if (uVar7 != 0) {
      bVar3 = true;
    }
    break;
  case 0x1e:
    if ((cVar1 != '\x06') && (*(int *)(iVar9 + 0x1c) != 0)) {
      bVar3 = true;
    }
    iVar5 = (*pcVar4)();
    if (*(char *)((int)DAT_0001f172 + *(int *)(*(int *)(iVar5 + 0x10) + 4)) != '\x03') {
      bVar3 = true;
    }
    uVar7 = (uint)DAT_0001f176;
    if (*(short *)(iVar6 + DAT_0001f174) == *(short *)(iVar6 + uVar7)) {
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



uint FUN_0001f17e(undefined2 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = false;
  uVar3 = (uint)(short)(&switchD_0001f1bc::switchdataD_0001f1d0)[param_2 + -1];
  switch(param_2 + -1) {
  case 0:
  case 1:
  case 2:
    iVar2 = (*DAT_0001f1cc)();
    uVar3 = (uint)DAT_0001f450;
    if (*(short *)(*(int *)(*(int *)(iVar2 + 0x10) + 0xc) + uVar3) < 1) {
      bVar1 = true;
    }
    break;
  case 3:
    uVar3 = FUN_0001ec04();
    if (uVar3 != 0) {
      bVar1 = true;
    }
    break;
  case 4:
  case 0x25:
  case 0x26:
  case 0x27:
    if (*(short *)(DAT_0001f1c8 + DAT_0001f1c0) == *(short *)(DAT_0001f1c8 + DAT_0001f1c2)) {
      bVar1 = true;
    }
    break;
  case 5:
  case 0x28:
  case 0x29:
  case 0x2a:
    if (*(short *)(DAT_0001f1c8 + DAT_0001f1c4) == *(short *)(DAT_0001f1c8 + DAT_0001f1c6)) {
      bVar1 = true;
    }
    break;
  case 0x2b:
    if ((*(short *)(DAT_0001f1c8 + DAT_0001f1c0) == *(short *)(DAT_0001f1c8 + DAT_0001f1c2)) &&
       (*(short *)(DAT_0001f1c8 + DAT_0001f1c4) == *(short *)(DAT_0001f1c8 + DAT_0001f1c6))) {
      bVar1 = true;
    }
    break;
  case 0x2c:
    iVar2 = (*DAT_0001f1cc)();
    uVar3 = (uint)DAT_0001f334;
    if ((*(uint *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x18) + uVar3) & 1) == 0) {
      bVar1 = true;
    }
    break;
  case 0x2d:
    iVar2 = (*DAT_0001f1cc)();
    uVar3 = *(uint *)((int)DAT_0001f334 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18));
    if ((uVar3 & 2) == 0) {
      bVar1 = true;
    }
    break;
  case 0x2e:
    iVar2 = (*DAT_0001f1cc)();
    uVar3 = *(uint *)((int)DAT_0001f334 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18));
    if ((uVar3 & 0x7f) == 0) {
      bVar1 = true;
    }
    break;
  case 0x2f:
    iVar2 = (*DAT_0001f1cc)();
    uVar3 = (uint)DAT_0001f334;
    if (((int)DAT_0001f336 & *(uint *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x18) + uVar3)) != 0) {
      bVar1 = true;
    }
    break;
  case 0x30:
    iVar2 = (*DAT_0001f1cc)();
    uVar3 = *(uint *)((int)DAT_0001f334 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18));
    if ((uVar3 & 0x80) != 0) {
      bVar1 = true;
    }
    break;
  case 0x31:
    iVar2 = (*DAT_0001f1cc)();
    uVar3 = (uint)DAT_0001f44c;
    if (((int)DAT_0001f44a & *(uint *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x18) + uVar3)) != 0) {
      bVar1 = true;
    }
    break;
  case 0x32:
    iVar2 = (*DAT_0001f1cc)();
    uVar3 = (int)DAT_0001f44e - 0x40;
    if (((int)DAT_0001f44e & *(uint *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x18) + uVar3)) != 0) {
      bVar1 = true;
    }
    break;
  case 0x33:
    iVar2 = (*DAT_0001f1cc)();
    uVar3 = *(uint *)((int)DAT_0001f334 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18));
    if ((uVar3 & 4) == 0) {
      bVar1 = true;
    }
    break;
  case 0x34:
    iVar2 = (*DAT_0001f1cc)();
    uVar3 = *(uint *)((int)DAT_0001f334 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18));
    if ((uVar3 & 8) == 0) {
      bVar1 = true;
    }
    break;
  case 0x35:
    iVar2 = (*DAT_0001f1cc)();
    uVar3 = *(uint *)((int)DAT_0001f334 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18));
    if ((uVar3 & 0x10) == 0) {
      bVar1 = true;
    }
    break;
  case 0x36:
    iVar2 = (*DAT_0001f1cc)();
    uVar3 = *(uint *)((int)DAT_0001f334 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18));
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



int FUN_0001f958(undefined4 param_1,int param_2)

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
        bVar2 = *(byte *)(iVar3 + DAT_0001fa14);
      }
      else {
        bVar2 = *(byte *)(DAT_0001fa1c + (DAT_0001fa0e + iVar3 & 7U)) &
                *(byte *)(((uint)(DAT_0001fa0e + iVar3) >> 3) + DAT_0001fa18);
      }
      if ((bVar2 != 0) &&
         (((cVar1 = *(char *)((short)((short)iVar3 * 0xc) + DAT_0001fa10 + 1), cVar1 == '\x06' ||
           (cVar1 == '\a')) || (cVar1 == '\b')))) {
        iVar5 = iVar5 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x38);
  }
  else if (param_2 == 3) {
    for (puVar8 = DAT_0001fa20; puVar8 < DAT_0001fa20 + 6; puVar8 = puVar8 + 1) {
      uVar7 = *puVar8;
      uVar6 = uVar7 + 0x28;
      uVar4 = uVar7;
      for (; uVar7 < uVar6; uVar7 = uVar7 + 8) {
        if (*(short *)(uVar7 + 6) != 0) {
          iVar3 = (int)*(short *)(uVar4 + 6);
          if (iVar3 < 0x4d) {
            bVar2 = *(byte *)(*(short *)(uVar4 + 6) + DAT_0001fa14);
          }
          else {
            bVar2 = *(byte *)(DAT_0001fac0 + (DAT_0001fab8 + iVar3 & 7U)) &
                    *(byte *)(((uint)(DAT_0001fab8 + iVar3) >> 3) + DAT_0001fabc);
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
        bVar2 = *(byte *)(iVar3 + DAT_0001fac4);
      }
      else {
        bVar2 = *(byte *)(DAT_0001fac0 + (DAT_0001fab8 + iVar3 & 7U)) &
                *(byte *)(((uint)(DAT_0001fab8 + iVar3) >> 3) + DAT_0001fabc);
      }
      if ((bVar2 != 0) &&
         (((cVar1 = *(char *)((short)((short)iVar3 * 0xc) + DAT_0001fa10 + 1), cVar1 == '\x03' ||
           (cVar1 == '\x04')) || (cVar1 == '\x05')))) {
        iVar5 = iVar5 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x42);
  }
  return iVar5;
}



int FUN_0001fac8(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  code *pcVar5;
  
  pcVar5 = DAT_0001fb98;
  iVar4 = (*DAT_0001fb98)();
  iVar4 = (int)*(short *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x20) + 0x18);
  if (iVar4 != -0x18) {
    return iVar4;
  }
  (*DAT_0001fb9c)(6,0x17,0x20,2);
  (*DAT_0001fba0)(1);
  puVar3 = DAT_0001fba4;
  DAT_0001fba4[7] = *DAT_0001fba4;
  *puVar3 = 0;
  cVar1 = *param_1;
  cVar2 = *DAT_0001fba8;
  if (cVar1 == '\0') {
    iVar4 = (*pcVar5)();
    if (*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0001fb94) < '\x01') {
      pcVar5 = (code *)0x1d;
    }
    else {
      pcVar5 = (code *)0x15;
    }
    goto LAB_0001fc52;
  }
  if (cVar1 == '\x01') {
    iVar4 = (*pcVar5)();
    if ((*(uint *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + (int)DAT_0001fb96) & 1) == 0) {
      iVar4 = (*pcVar5)();
      if (*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0001fb94) < '\x01') {
        pcVar5 = (code *)0x1d;
      }
      else {
        pcVar5 = (code *)0x16;
      }
      goto LAB_0001fc52;
    }
  }
  else {
    if (cVar1 == '\x02') {
      iVar4 = FUN_0001f958(param_1,(int)*param_1);
      if (iVar4 < 1) {
        pcVar5 = (code *)0x19;
      }
      else {
        iVar4 = (*pcVar5)();
        if (*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0001fb94) < '\x01') {
          pcVar5 = (code *)0x1d;
        }
        else {
          pcVar5 = (code *)0x11;
        }
      }
      goto LAB_0001fc52;
    }
    if (cVar1 == '\x03') {
      if ((cVar2 == '\b') || (iVar4 = FUN_0001f958(param_1,(int)*param_1), iVar4 < 1)) {
        pcVar5 = (code *)0x1a;
        goto LAB_0001fc52;
      }
      iVar4 = (*pcVar5)();
      if ((*(uint *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + (int)DAT_0001fc7c) & 1) == 0) {
        iVar4 = (*pcVar5)();
        if (*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0001fc7e) < '\x01') {
          pcVar5 = (code *)0x1d;
        }
        else {
          pcVar5 = (code *)0x12;
        }
        goto LAB_0001fc52;
      }
    }
    else {
      if (cVar1 == '\x04') {
        iVar4 = FUN_0001f958(param_1,(int)*param_1);
        if (iVar4 < 1) {
          pcVar5 = (code *)0x1b;
        }
        else {
          iVar4 = (*pcVar5)();
          if (*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0001fc7e) < '\x01') {
            pcVar5 = (code *)0x1d;
          }
          else {
            pcVar5 = (code *)0x13;
          }
        }
        goto LAB_0001fc52;
      }
      if (cVar1 != '\x05') goto LAB_0001fc52;
      if ((cVar2 == '\0') || (cVar2 == '\x06')) {
        pcVar5 = (code *)0x17;
        goto LAB_0001fc52;
      }
      if (cVar2 == '\b') {
        pcVar5 = (code *)0x18;
        goto LAB_0001fc52;
      }
      iVar4 = (*pcVar5)();
      if ((*(uint *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + (int)DAT_0001fc7c) & 1) == 0) {
        iVar4 = (*pcVar5)();
        if (*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0001fc7e) < '\x01') {
          pcVar5 = (code *)0x1d;
        }
        else {
          pcVar5 = (code *)0x14;
        }
        goto LAB_0001fc52;
      }
    }
  }
  pcVar5 = (code *)&LAB_0000001c;
LAB_0001fc52:
  (*DAT_0001fc84)(*(undefined4 *)((short)pcVar5 * 4 + DAT_0001fc80));
  pcVar5 = DAT_0001fc88;
  *puVar3 = puVar3[7];
  iVar4 = (*pcVar5)();
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  return iVar4;
}



void FUN_0001fc8c(int param_1)

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
  
  pcVar4 = DAT_0001fce0;
  iVar5 = DAT_0001fcdc;
  iVar10 = (short)((short)param_1 * 0xc) + DAT_0001fce4;
  iVar9 = *DAT_0001fcd8;
  cVar1 = *(char *)(iVar10 + 1);
  iVar6 = param_1;
  if (((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) {
    sVar2 = *(short *)(DAT_0001fcdc + DAT_0001fd1a);
    sVar7 = (*DAT_0001fd20)((int)*(short *)(iVar10 + 2));
    if (sVar2 < sVar7) {
      iVar6 = 0x4b;
    }
    switch(param_1 - DAT_0001fd1c) {
    case 0:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x18:
      iVar10 = (*pcVar4)();
      if (*(char *)((int)DAT_0001fda6 + *(int *)(*(int *)(iVar10 + 0x10) + 4)) != '\x03') {
        iVar6 = 0x4c;
      }
      break;
    default:
      iVar10 = (*pcVar4)();
      if (*(char *)(*(int *)(*(int *)(iVar10 + 0x10) + 4) + (int)DAT_0001fda6) < '\x02') {
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
      if (*(char *)(*(int *)(*(int *)(iVar10 + 0x10) + 4) + (int)DAT_0001fda6) == '\0') {
        iVar6 = 0x4c;
      }
    }
  }
  else if ((((cVar1 == '\x03') || (cVar1 == '\x04')) || (cVar1 == '\x05')) &&
          (param_1 == *(short *)(DAT_0001fcdc + DAT_0001fda8))) {
    uVar8 = *(undefined4 *)(DAT_0001fdac + 8);
    goto LAB_0002014a;
  }
  sVar11 = (short)iVar6;
  sVar2 = *(short *)(iVar5 + DAT_0001fea0);
  sVar7 = *(short *)(iVar5 + DAT_0001fea2);
  cVar1 = *(char *)(iVar5 + DAT_0001fea2 + -0xf);
  sVar3 = *(short *)(iVar5 + DAT_0001fea4);
  if (param_1 == 4) {
LAB_00020028:
    iVar5 = (*DAT_000200b4)();
    if (iVar5 != 0) {
      sVar11 = 0x47;
    }
    goto LAB_0002010c;
  }
  if (param_1 == 5) {
LAB_0001fef4:
    if (sVar2 == sVar7) {
      sVar11 = 0x42;
    }
  }
  else if (param_1 == 6) {
LAB_0001ff1e:
    if (sVar3 == *(short *)(iVar5 + DAT_0001ffa8)) {
      sVar11 = 0x43;
    }
  }
  else {
    if (((param_1 == 0x26) || (param_1 == 0x27)) || (param_1 == 0x28)) goto LAB_0001fef4;
    if (((param_1 == 0x29) || (param_1 == 0x2a)) || (param_1 == 0x2b)) goto LAB_0001ff1e;
    if (param_1 == 0x2c) {
      if ((sVar2 == sVar7) && (sVar3 == *DAT_0001ffac)) {
        sVar11 = 0x46;
      }
    }
    else if (param_1 == 0x2d) {
      iVar5 = (*pcVar4)();
      if ((*(uint *)((int)DAT_0001ffaa + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 1) == 0) {
        sVar11 = 0x44;
      }
    }
    else if (param_1 == 0x2e) {
      iVar5 = (*pcVar4)();
      if ((*(uint *)((int)DAT_0001ffaa + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 2) == 0) {
        sVar11 = 0x44;
      }
    }
    else if (param_1 == 0x2f) {
LAB_00020010:
      iVar5 = (*pcVar4)();
      if ((*(uint *)((int)DAT_000200aa + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 0x7f) == 0) {
        sVar11 = 0x44;
      }
    }
    else {
      if (param_1 == 0x30) goto LAB_00020036;
      if (param_1 == 0x31) {
        iVar5 = (*pcVar4)();
        if ((*(uint *)((int)DAT_000200aa + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 0x80) != 0) {
          sVar11 = 0x48;
        }
      }
      else if (param_1 == 0x32) {
        iVar5 = (*pcVar4)();
        if (((int)DAT_000201ae &
            *(uint *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + (int)DAT_000201b0)) != 0) {
          sVar11 = 0x48;
        }
      }
      else if (param_1 == 0x33) {
        iVar5 = (*pcVar4)();
        if (((int)DAT_000201b2 &
            *(uint *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + ((int)DAT_000201b2 - 0x40U))) != 0)
        {
          sVar11 = 0x48;
        }
      }
      else if (param_1 == 0x34) {
        iVar5 = (*pcVar4)();
        if ((*(uint *)((int)DAT_000200aa + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 4) == 0) {
          sVar11 = 0x44;
        }
      }
      else if (param_1 == 0x35) {
        iVar5 = (*pcVar4)();
        if ((*(uint *)((int)DAT_000200aa + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 8) == 0) {
          sVar11 = 0x44;
        }
      }
      else if (param_1 == 0x36) {
        iVar5 = (*pcVar4)();
        if ((*(uint *)((int)DAT_000200aa + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 0x10) == 0) {
          sVar11 = 0x44;
        }
      }
      else if (param_1 == 0x37) {
        iVar5 = (*pcVar4)();
        if ((*(uint *)((int)DAT_000200aa + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 0x20) == 0) {
          sVar11 = 0x44;
        }
      }
      else if (param_1 == DAT_0001fea6) {
LAB_00020036:
        iVar5 = (*pcVar4)();
        if (((int)DAT_000200ac &
            *(uint *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + (int)DAT_000200aa)) != 0) {
          sVar11 = 0x48;
        }
      }
      else if (param_1 == DAT_0001fea8) {
        iVar6 = (*pcVar4)();
        if ((*(uint *)((int)DAT_000200aa + *(int *)(*(int *)(iVar6 + 0x10) + 0x18)) & 0x80) != 0) {
          sVar11 = 0x48;
        }
        if ((*(char *)(iVar5 + DAT_000200ae) != '\x06') && (*(int *)(iVar9 + 0x1c) != 2)) {
          sVar11 = 0x4a;
        }
      }
      else {
        if ((param_1 == DAT_0001feaa) || (param_1 == DAT_0001feac)) goto LAB_00020036;
        if ((param_1 == DAT_0001feae) || ((param_1 == DAT_0001ff98 || (param_1 == DAT_0001ff9a))))
        goto LAB_0001fef4;
        if (param_1 == DAT_0001ff9c) goto LAB_00020010;
        if (param_1 == DAT_0001ff9e) {
          if (sVar3 == *(short *)(iVar5 + DAT_0001ffa8)) {
            sVar11 = 0x43;
          }
          if ((cVar1 != '\x06') && (*(int *)(iVar9 + 0x1c) != 4)) {
            sVar11 = 0x4a;
          }
        }
        else if (param_1 == DAT_0001ffa0) {
          iVar6 = (*pcVar4)();
          if (((int)DAT_000200b0 &
              *(uint *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x18) + (int)DAT_000200aa)) != 0) {
            sVar11 = 0x48;
          }
          if ((*(char *)(iVar5 + DAT_000200ae) != '\x06') && (*(int *)(iVar9 + 0x1c) != 1)) {
            sVar11 = 0x4a;
          }
        }
        else if (param_1 == DAT_0001ffa2) {
          iVar6 = (*pcVar4)();
          if (((int)DAT_000201b2 &
              *(uint *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x18) + ((int)DAT_000201b2 - 0x40U))) != 0
             ) {
            sVar11 = 0x48;
          }
          if ((*(char *)(iVar5 + DAT_000201b4) != '\x06') && (*(int *)(iVar9 + 0x1c) != 3)) {
            sVar11 = 0x4a;
          }
        }
        else {
          if (param_1 == DAT_0001ffa4) goto LAB_00020028;
          if (param_1 == DAT_0001ffa6) {
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
LAB_0002010c:
  cVar1 = *(char *)(DAT_000201b8 + (short)((short)param_1 * 0xc));
  if (((cVar1 == '\0') || (cVar1 == '\x06')) &&
     (iVar5 = (*pcVar4)(),
     *(short *)(*(int *)(*(int *)(iVar5 + 0x10) + 0xc) + (int)DAT_000201b6) < 1)) {
    sVar11 = 0x45;
  }
  uVar8 = *(undefined4 *)((short)(sVar11 * 0xc) + DAT_000201bc);
LAB_0002014a:
                    // WARNING: Could not recover jumptable at 0x0002015a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_000201c0)(uVar8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00020170(int param_1,uint param_2)

{
  undefined4 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  
  iVar2 = (*_DAT_000201c4)();
  if (*(short *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x20) + 0x18) != -0x18) {
    return;
  }
  (*_LAB_000201c7_1)(6,0x17,0x20,2);
  if (param_1 == -1) {
    (*DAT_000201cc)(1);
                    // WARNING: Could not recover jumptable at 0x000201aa. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_000201d0)();
    return;
  }
  (*DAT_000202dc)(0);
  puVar1 = DAT_000202e0;
  DAT_000202e0[7] = *DAT_000202e0;
  *puVar1 = 0;
  if ((param_2 & 1) == 0) {
    (*DAT_000202e8)(*(undefined4 *)((short)((short)param_1 * 0xc) + DAT_000202e4));
  }
  else {
    FUN_0001fc8c(param_1);
  }
  UNRECOVERED_JUMPTABLE = DAT_000202ec;
  *puVar1 = puVar1[7];
                    // WARNING: Could not recover jumptable at 0x00020212. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_00020220(void)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = DAT_000202f8;
  iVar1 = DAT_000202f0;
  *(undefined2 *)(DAT_000202f0 + 0x12) = *(undefined2 *)(DAT_000202f0 + 0x10);
  *(short *)(iVar1 + 0x10) = (short)DAT_000202f4;
  (*pcVar2)(6,3);
  (*DAT_00020304)();
  *(undefined2 *)(iVar1 + 0x10) = *(undefined2 *)(iVar1 + 0x12);
  return;
}



void FUN_00020258(int param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = DAT_00020308;
  if (param_2 == '\0') {
    iVar2 = (int)DAT_000202d6;
    uVar3 = 4;
    *(undefined4 *)(param_1 + iVar2) = DAT_00020308;
    *(undefined4 *)(param_1 + iVar2 + 8) = 0;
    iVar2 = iVar2 + 0x14;
  }
  else {
    if (param_2 != '\x01') goto LAB_0002028c;
    uVar3 = 8;
    iVar2 = (int)DAT_000202d6;
    *(undefined4 *)(param_1 + iVar2) = 0;
    *(undefined4 *)(param_1 + iVar2 + 8) = uVar1;
    iVar2 = (int)DAT_000202d8;
  }
  *(undefined2 *)(param_1 + iVar2) = uVar3;
LAB_0002028c:
  (*DAT_0002030c)(DAT_000202da + param_1);
  *(short *)(param_1 + 0x14) =
       (short)((uint)(*(int *)(param_1 + DAT_000202da) + DAT_00020310) >> 0x10);
  return;
}



void FUN_000202a8(int param_1,int param_2,int param_3)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = (*DAT_00020314)();
  if (*(short *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x20) + 0x18) == -0x18) {
    if ((*(ushort *)(DAT_00020318 + 8) & 0xf0) == 0) {
      psVar2 = (short *)((*(char *)(param_3 + 3) * 5 + (int)*(char *)(param_3 + 5)) * 4 + param_2);
      if ((*(ushort *)(DAT_00020318 + 8) & 6) == 0) {
        if ((*(ushort *)(DAT_00020318 + 8) & 1) != 0) {
          *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffdf;
        }
      }
      else if ((psVar2[1] & 1U) == 0) {
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffdf;
      }
      else {
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x20;
      }
      FUN_00020170((int)*psVar2,(*(uint *)(param_1 + 0x20) & 0x20) != 0);
      return;
    }
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffdf;
  }
  return;
}



void FUN_00020384(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    (*DAT_00020418)(5);
    FUN_0001fac8(param_1);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_00020cb6(char *param_1,int param_2)

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
  
  pcVar2 = DAT_00020d60;
  uVar10 = 0;
  iVar9 = param_2 * 4;
  sVar5 = *(short *)(param_1 + 0xc) + *(short *)(param_1 + 0x14) + *(short *)(DAT_00020d5c + iVar9)
          + _DAT_00020d36;
  sVar6 = (-((short *)(DAT_00020d5c + iVar9))[1] - *(short *)(param_1 + 0xe)) + 0x70;
  if ((param_2 == 0) || (param_2 == 1)) {
    iVar4 = (*DAT_00020d60)();
    if ('\0' < *(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)_LAB_00020d37_1)) {
      uVar10 = 1;
    }
  }
  else if (param_2 == 2) {
    iVar4 = (*DAT_00020e34)(param_1,2);
    if (iVar4 < 1) {
      uVar10 = 2;
    }
    else {
      iVar4 = (*pcVar2)();
      if ('\0' < *(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_00020e30)) {
        uVar10 = 1;
      }
    }
  }
  else if (param_2 == 3) {
    if (*DAT_00020e38 == '\b') {
      uVar10 = 2;
      param_1[7] = '\x01';
    }
    else {
      iVar4 = (*DAT_00020e34)(param_1,3);
      if (iVar4 < 1) {
        uVar10 = 0;
      }
      else {
        iVar4 = (*pcVar2)();
        if ('\0' < *(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_00020e30)) {
          uVar10 = 1;
        }
      }
    }
  }
  else if (param_2 == 4) {
    iVar4 = (*DAT_00020e34)(param_1,4);
    if (iVar4 < 1) {
      uVar10 = 2;
      param_1[8] = '\x01';
    }
    else {
      iVar4 = (*pcVar2)();
      if ('\0' < *(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_00020e30)) {
        uVar10 = 1;
      }
    }
  }
  else if (param_2 == 5) {
    iVar4 = (*DAT_00020d60)();
    uVar10 = (uint)('\0' < *(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_00020e30));
    cVar1 = *DAT_00020e38;
    if (((cVar1 == '\0') || (cVar1 == '\x06')) || (cVar1 == '\b')) {
      uVar10 = 2;
      param_1[9] = '\x01';
    }
  }
  piVar3 = DAT_00020e40;
  iVar4 = DAT_00020e3c;
  puVar11 = (undefined4 *)(DAT_00020e3c + 0x14);
  if (uVar10 == 0) {
    puVar7 = (undefined2 *)*puVar11;
    *puVar7 = DAT_00020e32;
    piVar8 = (int *)(DAT_0002100c + iVar9);
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
        *puVar7 = DAT_00020e32;
        piVar8 = (int *)(DAT_00021010 + iVar9);
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
        *puVar7 = DAT_00020e32;
        piVar8 = (int *)(DAT_00021014 + iVar9);
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
    *puVar7 = DAT_00020e32;
    piVar8 = (int *)(DAT_00021018 + iVar9);
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



undefined4 FUN_000215e0(int *param_1,short param_2,int param_3,int param_4,int param_5)

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
      (*DAT_00021668)(param_1 + 0x17,0);
    }
  }
  else {
    (*DAT_00021668)(param_1 + 0x17,*(undefined4 *)(((int)param_2 & 0xffffU) + *param_1));
    if (param_5 != 0) {
      uVar3 = (*DAT_0002166c)();
      pcVar1 = DAT_00021670;
      for (uVar3 = uVar3 & 0x1f; uVar3 != 0; uVar3 = uVar3 - 1) {
        (*pcVar1)(param_1 + 0x17);
      }
    }
  }
  return 1;
}



uint FUN_000222ac(int param_1)

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
  
  iVar10 = ***(int ***)(param_1 + DAT_000222f6);
  (*DAT_00022304)(param_1 + 0x5c);
  pcVar2 = DAT_000222fc;
  uVar4 = (int)*(char *)(param_1 + DAT_000222f0) & 0xff;
  if (uVar4 == 0) {
    iVar5 = (*DAT_000222fc)();
    pcVar3 = DAT_00022468;
    uVar4 = (uint)DAT_00022456;
    if (((int)DAT_00022454 & *(uint *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + uVar4)) != 0) {
      for (iVar5 = 0; iVar5 < *(short *)(param_1 + DAT_0002245a); iVar5 = iVar5 + 1) {
        (*pcVar3)(iVar5 * 100 + *(int *)(param_1 + DAT_00022458));
      }
      *(undefined2 *)(param_1 + DAT_0002245a) = 0;
      iVar5 = DAT_0002246c;
      iVar6 = (char)((*(byte *)(iVar10 + 4) & 1) * '0') + DAT_0002246c;
      iVar7 = (*pcVar2)();
      *(int *)(param_1 + 0x20) =
           *(int *)(param_1 + 0x20) +
           *(int *)((char)(*(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0002245c) *
                          '\f') + iVar6) * 0x400;
      bVar1 = *(byte *)(iVar10 + 4);
      iVar6 = (*pcVar2)();
      *(int *)(param_1 + 0x24) =
           *(int *)(param_1 + 0x24) +
           *(int *)((int)(char)(*(char *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) + (int)DAT_0002245c)
                               * '\f') + (char)((bVar1 & 1) * '0') + iVar5 + 4) * 0x400;
      bVar1 = *(byte *)(iVar10 + 4);
      iVar10 = (*pcVar2)();
      iVar6 = (int)DAT_0002245e;
      *(int *)(param_1 + 0x28) =
           *(int *)(param_1 + 0x28) +
           *(int *)(iVar5 + (char)((bVar1 & 1) * '0') +
                    (int)(char)(*(char *)(*(int *)(*(int *)(iVar10 + 0x10) + 4) + (int)DAT_0002245c)
                               * '\f') + 8) * 0x400;
      if (*(char *)(*(int *)(param_1 + iVar6) + 0x2c) == '\x04') {
        iVar10 = (int)DAT_00022462;
        *(short *)(param_1 + DAT_00022460 + -0x74) = DAT_00022460;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(int *)(param_1 + 0x30) = iVar10;
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
      else {
        *(undefined2 *)(param_1 + 0xb8) = 0x3c;
        iVar5 = *(int *)(param_1 + 0x1c);
        iVar10 = *(int *)(param_1 + 0x28);
        uVar8 = (*DAT_00022470)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x14),
                                (int)*(short *)(param_1 + 0xb8) << 0x10);
        *(undefined4 *)(param_1 + 0x2c) = uVar8;
        *(undefined4 *)(param_1 + 0x30) = 0;
        uVar8 = (*DAT_00022470)(iVar10 - iVar5,(int)*(short *)(param_1 + DAT_00022464) << 0x10);
        *(undefined4 *)(param_1 + 0x34) = uVar8;
      }
      uVar4 = (uint)DAT_00022466;
      *(char *)(param_1 + uVar4) = *(char *)(param_1 + uVar4) + '\x01';
    }
  }
  else if (uVar4 == 1) {
    uVar4 = (uint)DAT_0002257e;
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
        *(uint *)(iVar10 + DAT_00022580) = *(uint *)(iVar10 + DAT_00022580) & DAT_00022588;
      }
      iVar10 = ((int)*(char *)(param_1 + DAT_00022582 + -0x22) & 0xffU) * 0x20 +
               *(int *)(*(int *)(param_1 + DAT_00022582) + 0x14);
      *(byte *)(iVar10 + 0x18) = *(byte *)(iVar10 + 0x18) & (byte)DAT_00022584;
      iVar10 = ((int)*(char *)(param_1 + DAT_00022582 + -0x22) & 0xffU) * 0x20 +
               *(int *)(*(int *)(param_1 + DAT_00022582) + 0x14);
      *(byte *)(iVar10 + 0x18) = *(byte *)(iVar10 + 0x18) | 8;
      iVar10 = ((int)*(char *)(param_1 + DAT_00022582 + -0x22) & 0xffU) * 0x20 +
               *(int *)(*(int *)(param_1 + DAT_00022582) + 0x14);
      *(byte *)(iVar10 + 0x18) = *(byte *)(iVar10 + 0x18) | 4;
      uVar4 = *(uint *)(param_1 + DAT_00022586);
      if (uVar4 != 0) {
        if (*(int *)(param_1 + DAT_00022586) != 0) {
          *(uint *)(*(int *)(param_1 + DAT_00022586) + -4) =
               *(uint *)(*(int *)(param_1 + DAT_00022586) + -4) | 1;
        }
        uVar4 = (uint)DAT_00022586;
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

uint FUN_0002258c(int param_1)

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
  
  pcVar2 = DAT_00022688;
  iVar7 = *(int *)(param_1 + DAT_0002267c);
  iVar12 = DAT_0002268c +
           ((int)*(char *)(((int)*(char *)(DAT_00022680 + param_1) & 0xffU) +
                          *(int *)(DAT_0002267e + param_1) + 0xd) & 0xffU) * 4;
  iVar8 = (*DAT_00022688)();
  cVar1 = *(char *)(((int)*(char *)(((int)*(char *)(*(int *)(*(int *)(iVar8 + 0x10) + 4) +
                                                   (int)DAT_00022682) & 0xffU) + iVar12) & 0xffU) +
                   iVar7 + 0x14);
  if ((*(byte *)(param_1 + 0xb0) & 8) == 0) {
    uVar10 = (int)*(char *)(param_1 + DAT_000227ee) & 0xff;
    if (((int)*(char *)(param_1 + DAT_000227ee) & 0x10U) == 0) {
      if (cVar1 != '\0') {
        iVar7 = (*pcVar2)();
        uVar10 = (uint)DAT_0002293a;
        if (*(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + uVar10) == '\0') {
          iVar7 = (*pcVar2)();
          uVar10 = (uint)*(char *)((int)DAT_0002293c + *(int *)(*(int *)(iVar7 + 0x10) + 4));
          if (uVar10 == 4) {
            for (iVar7 = 0; uVar10 = (uint)DAT_00022944, iVar7 < *(short *)(param_1 + uVar10);
                iVar7 = iVar7 + 1) {
              sVar11 = *(short *)(iVar7 * 100 + *(int *)(param_1 + DAT_0002293e) + 0x5a);
              iVar8 = (*pcVar2)();
              if ((int)sVar11 ==
                  *(short *)(*(int *)(*(int *)(iVar8 + 0x10) + 4) + (int)DAT_00022940) + 1) {
                iVar7 = (*pcVar2)();
                iVar8 = (int)DAT_00022942;
                *(short *)(param_1 + iVar8) =
                     *(short *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_00022940) * 2 + 0x1e
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
      (*DAT_00022804)(param_1 + 0x5c);
      uVar10 = (uint)DAT_000227ea;
      sVar11 = *(short *)(param_1 + uVar10) + -1;
      *(short *)(param_1 + uVar10) = sVar11;
      uVar6 = DAT_00022808;
      if (sVar11 < 0) {
        for (iVar7 = 0; iVar7 < *(short *)(param_1 + DAT_000227e6); iVar7 = iVar7 + 1) {
          iVar8 = iVar7 * 100 + *(int *)(param_1 + DAT_000227e4);
          *(uint *)(iVar8 + 0x50) = *(uint *)(iVar8 + 0x50) & uVar6;
        }
        iVar7 = (int)DAT_000227ee;
        *(byte *)(param_1 + iVar7) = *(byte *)(param_1 + iVar7) & (char)DAT_000227ee + 0x3fU;
        iVar7 = ((int)*(char *)(param_1 + iVar7 + -2) & 0xffU) * 0x20 +
                *(int *)(*(int *)(param_1 + iVar7 + 0x20) + 0x14);
        *(byte *)(iVar7 + 0x18) = *(byte *)(iVar7 + 0x18) | 0x20;
        uVar10 = 0x18;
      }
    }
  }
  else {
    uVar10 = (uint)DAT_00022684;
    sVar11 = *(short *)(param_1 + uVar10) + -1;
    *(short *)(param_1 + uVar10) = sVar11;
    pcVar3 = DAT_00022690;
    if (sVar11 < 0) {
      iVar7 = ((int)*(char *)(*(int *)(param_1 + DAT_0002267c) + 0x18) & 0xffU) << 0xc;
      if (cVar1 == '\x01') {
        uVar10 = (*DAT_00022690)();
        if ((DAT_00022694 & uVar10) == 0) {
          (*pcVar3)();
          local_28._0_2_ = (ushort)((uint)DAT_0002269c >> 0x10) & extraout_var_00;
        }
        else {
          (*pcVar3)();
          local_28._0_2_ = (ushort)((uint)DAT_00022698 >> 0x10) | extraout_var;
        }
        uVar10 = (*pcVar3)();
        if ((DAT_00022694 & uVar10) == 0) {
          (*pcVar3)();
          uStack36._0_2_ = (ushort)((uint)DAT_0002269c >> 0x10) & extraout_var_02;
        }
        else {
          (*pcVar3)();
          uStack36._0_2_ = (ushort)((uint)DAT_00022698 >> 0x10) | extraout_var_01;
        }
      }
      else if (cVar1 == '\x02') {
        local_28._0_2_ = 0;
        uVar10 = (*DAT_00022690)();
        if ((DAT_00022694 & uVar10) == 0) {
          (*pcVar3)();
          uStack36._0_2_ = (ushort)((uint)DAT_000227f0 >> 0x10) & extraout_var_04;
        }
        else {
          (*pcVar3)();
          uStack36._0_2_ = (ushort)((uint)DAT_00022698 >> 0x10) | extraout_var_03;
        }
      }
      uVar4 = DAT_000227e2;
      iVar8 = (*DAT_000227f8)(iVar7,*(undefined4 *)
                                     ((short)(local_28._0_2_ & DAT_000227e2) * 4 + DAT_000227f4));
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar8;
      uVar13 = *(undefined4 *)((short)(uStack36._0_2_ & uVar4) * 4 + DAT_000227f4);
      uVar9 = (*DAT_000227f8)(iVar7,*(undefined4 *)
                                     ((short)(local_28._0_2_ & uVar4) * 4 + DAT_000227fc));
      iVar8 = (*DAT_000227f8)(uVar9,uVar13);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar8;
      uVar13 = *(undefined4 *)((short)(uStack36._0_2_ & uVar4) * 4 + DAT_000227fc);
      uVar9 = (*DAT_000227f8)(iVar7,*(undefined4 *)
                                     ((short)(local_28._0_2_ & uVar4) * 4 + DAT_000227fc));
      iVar7 = (*DAT_000227f8)(uVar9,uVar13);
      uVar10 = DAT_00022800;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar7;
      for (iVar7 = 0; iVar7 < *(short *)(param_1 + DAT_000227e6); iVar7 = iVar7 + 1) {
        iVar8 = iVar7 * 100 + *(int *)(param_1 + DAT_000227e4);
        *(uint *)(iVar8 + 0x50) = *(uint *)(iVar8 + 0x50) | uVar10;
      }
      iVar7 = (*pcVar2)();
      uVar5 = DAT_000227ec;
      iVar8 = (int)DAT_000227ea;
      *(short *)(param_1 + iVar8) =
           *(short *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_000227e8) * 2 + 0xf;
      uVar10 = iVar8 - 8;
      *(byte *)(param_1 + uVar10) = *(byte *)(param_1 + uVar10) & (byte)uVar5;
      *(byte *)(param_1 + uVar10) = *(byte *)(param_1 + uVar10) | 0x10;
    }
  }
  return uVar10;
}



// WARNING: Could not reconcile some variable overlaps

uint FUN_0002289a(int param_1)

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
  
  pcVar2 = DAT_00022950;
  iVar6 = *(int *)(param_1 + DAT_00022946);
  iVar12 = DAT_00022954 +
           ((int)*(char *)(((int)*(char *)(DAT_0002294a + param_1) & 0xffU) +
                          *(int *)(DAT_00022948 + param_1) + 0xd) & 0xffU) * 4;
  iVar7 = (*DAT_00022950)();
  cVar1 = *(char *)(((int)*(char *)(((int)*(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) +
                                                   (int)DAT_0002294c) & 0xffU) + iVar12) & 0xffU) +
                   iVar6 + 0x10);
  if ((*(byte *)(param_1 + 0xb0) & 8) == 0) {
    uVar9 = (int)*(char *)(param_1 + DAT_00022ba8) & 0xff;
    if (((int)*(char *)(param_1 + DAT_00022ba8) & 0x10U) == 0) {
      if (cVar1 != '\0') {
        iVar6 = (*pcVar2)();
        uVar9 = (int)*(char *)((int)DAT_00022bb0 + *(int *)(*(int *)(iVar6 + 0x10) + 4)) & 0xff;
        if (uVar9 == 3) {
          iVar6 = (*pcVar2)();
          uVar9 = (uint)*(char *)((int)DAT_00022bb2 + *(int *)(*(int *)(iVar6 + 0x10) + 4));
          if (uVar9 == 4) {
            for (iVar6 = 0; uVar9 = (uint)DAT_00022bae, iVar6 < *(short *)(param_1 + uVar9);
                iVar6 = iVar6 + 1) {
              sVar11 = *(short *)(*(int *)(param_1 + DAT_00022bac) + iVar6 * 100 + 0x5a);
              iVar7 = (*pcVar2)();
              if ((sVar11 <= *(short *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_00022bb4))
                 && (*(short *)(*(int *)(param_1 + DAT_00022bac) + iVar6 * 100 + 0x5a) != 0)) {
                iVar6 = (*pcVar2)();
                iVar7 = (int)DAT_00022baa;
                *(short *)(param_1 + iVar7) =
                     *(short *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) + (int)DAT_00022bb4) * 2 + 0xf;
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
      (*DAT_00022bb8)(param_1 + 0x5c);
      uVar9 = (uint)DAT_00022baa;
      sVar11 = *(short *)(param_1 + uVar9) + -1;
      *(short *)(param_1 + uVar9) = sVar11;
      uVar10 = DAT_00022bbc;
      if (sVar11 < 0) {
        for (iVar6 = 0; iVar6 < *(short *)(param_1 + DAT_00022bae); iVar6 = iVar6 + 1) {
          iVar7 = iVar6 * 100 + *(int *)(param_1 + DAT_00022bac);
          *(uint *)(iVar7 + 0x50) = *(uint *)(iVar7 + 0x50) & uVar10;
        }
        iVar6 = (int)DAT_00022ba8;
        *(byte *)(param_1 + iVar6) = *(byte *)(param_1 + iVar6) & (char)DAT_00022ba8 + 0x3fU;
        iVar6 = ((int)*(char *)(param_1 + iVar6 + -2) & 0xffU) * 0x20 +
                *(int *)(*(int *)(param_1 + iVar6 + 0x20) + 0x14);
        *(byte *)(iVar6 + 0x18) = *(byte *)(iVar6 + 0x18) | 0x20;
        uVar9 = 0x18;
      }
    }
  }
  else {
    uVar9 = (uint)DAT_00022942;
    sVar11 = *(short *)(param_1 + uVar9) + -1;
    *(short *)(param_1 + uVar9) = sVar11;
    pcVar3 = DAT_0002295c;
    uVar10 = DAT_00022958;
    if (sVar11 < 0) {
      iVar6 = ((int)*(char *)(*(int *)(param_1 + DAT_00022946) + 0x18) & 0xffU) << 0xc;
      if (cVar1 == '\x01') {
        uVar9 = (*DAT_0002295c)();
        if ((uVar10 & uVar9) == 0) {
          (*pcVar3)();
          local_28._0_2_ = (ushort)((uint)DAT_00022a88 >> 0x10) & extraout_var_00;
        }
        else {
          (*pcVar3)();
          local_28._0_2_ = (ushort)((uint)DAT_00022a84 >> 0x10) | extraout_var;
        }
        uVar9 = (*pcVar3)();
        if ((uVar10 & uVar9) == 0) {
          (*pcVar3)();
          uStack36._0_2_ = (ushort)((uint)DAT_00022a88 >> 0x10) & extraout_var_02;
        }
        else {
          (*pcVar3)();
          uStack36._0_2_ = (ushort)((uint)DAT_00022a84 >> 0x10) | extraout_var_01;
        }
      }
      else if (cVar1 == '\x02') {
        local_28._0_2_ = 0;
        uVar9 = (*DAT_0002295c)();
        if ((uVar10 & uVar9) == 0) {
          (*pcVar3)();
          uStack36._0_2_ = (ushort)((uint)DAT_00022a88 >> 0x10) & extraout_var_04;
        }
        else {
          (*pcVar3)();
          uStack36._0_2_ = (ushort)((uint)DAT_00022a84 >> 0x10) | extraout_var_03;
        }
      }
      pcVar3 = DAT_00022a8c;
      uVar4 = DAT_00022a76;
      iVar7 = (*DAT_00022a8c)(iVar6,*(undefined4 *)
                                     ((short)(local_28._0_2_ & DAT_00022a76) * 4 + DAT_00022a90));
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar7;
      uVar13 = *(undefined4 *)((short)(uStack36._0_2_ & uVar4) * 4 + DAT_00022a90);
      uVar8 = (*pcVar3)(iVar6,*(undefined4 *)((short)(local_28._0_2_ & uVar4) * 4 + DAT_00022a94));
      iVar7 = (*pcVar3)(uVar8,uVar13);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar7;
      uVar13 = *(undefined4 *)((short)(uStack36._0_2_ & uVar4) * 4 + DAT_00022a94);
      uVar8 = (*pcVar3)(iVar6,*(undefined4 *)((short)(local_28._0_2_ & uVar4) * 4 + DAT_00022a94));
      iVar6 = (*pcVar3)(uVar8,uVar13);
      uVar10 = DAT_00022a98;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar6;
      for (iVar6 = 0; iVar6 < *(short *)(param_1 + DAT_00022a7a); iVar6 = iVar6 + 1) {
        iVar7 = iVar6 * 100 + *(int *)(param_1 + DAT_00022a78);
        *(uint *)(iVar7 + 0x50) = *(uint *)(iVar7 + 0x50) | uVar10;
      }
      iVar6 = (*pcVar2)();
      uVar5 = DAT_00022a80;
      iVar7 = (int)DAT_00022a7e;
      *(short *)(param_1 + iVar7) =
           *(short *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) + (int)DAT_00022a7c) * 2 + 0x19;
      uVar9 = iVar7 - 8;
      *(byte *)(param_1 + uVar9) = *(byte *)(param_1 + uVar9) & (byte)uVar5;
      *(byte *)(param_1 + uVar9) = *(byte *)(param_1 + uVar9) | 0x10;
    }
  }
  return uVar9;
}



uint FUN_00022bc0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  
  pcVar1 = DAT_00022c94;
  uVar2 = (int)*(char *)(param_1 + DAT_00022c8a) & 0xff;
  if (uVar2 == 0) {
    for (iVar4 = 0; iVar4 < *(short *)(param_1 + DAT_00022c8e); iVar4 = iVar4 + 1) {
      (*pcVar1)(iVar4 * 100 + *(int *)(param_1 + DAT_00022c8c));
    }
    iVar4 = (int)DAT_00022c8e;
    *(undefined2 *)(param_1 + iVar4) = 0;
    if (((int)*(char *)(*(int *)(param_1 + iVar4 + 0x16) + 0x2e) & 0xffU) != 0xffffffff) {
      (*DAT_00022c98)(*(undefined *)(*(int *)(param_1 + DAT_00022c90) + 0x2e));
    }
    if ((*(int *)(param_1 + DAT_00022c92) != 0) && (*(int *)(param_1 + DAT_00022c92) != 0)) {
      *(uint *)(*(int *)(param_1 + DAT_00022c92) + -4) =
           *(uint *)(*(int *)(param_1 + DAT_00022c92) + -4) | 1;
    }
    *(char *)(param_1 + DAT_00022c8a) = *(char *)(param_1 + DAT_00022c8a) + '\x01';
  }
  else if (uVar2 != 1) {
    return uVar2;
  }
  cVar3 = *(char *)(*(int *)(param_1 + DAT_00022c90) + 0x2c);
  if (cVar3 == '\0') {
    iVar4 = (*DAT_00022df4)();
    (*DAT_00022dfc)(param_1 + 8,(int)DAT_00022de8 + *(int *)(*(int *)(iVar4 + 0x10) + 4),
                    PTR_LAB_00022df8,0);
  }
  else if (cVar3 != '\x01') {
    if (cVar3 == '\x02') {
      iVar4 = (*DAT_00022df4)();
      (*DAT_00022dfc)(param_1 + 8,(int)DAT_00022de8 + *(int *)(*(int *)(iVar4 + 0x10) + 4),
                      PTR_LAB_00022df8,0);
    }
    else if (cVar3 != '\x03') {
      if (cVar3 == '\x04') {
        iVar4 = ((int)*(char *)(param_1 + DAT_00022dea + -0x22) & 0xffU) * 0x20 +
                *(int *)(*(int *)(param_1 + DAT_00022dea) + 0x14);
        *(byte *)(iVar4 + 0x18) = *(byte *)(iVar4 + 0x18) & (byte)DAT_00022dec;
        iVar4 = ((int)*(char *)(param_1 + DAT_00022dea + -0x22) & 0xffU) * 0x20 +
                *(int *)(*(int *)(param_1 + DAT_00022dea) + 0x14);
        *(byte *)(iVar4 + 0x18) = *(byte *)(iVar4 + 0x18) | 4;
        uVar2 = (uint)DAT_00022df0;
        cVar3 = '\x03';
      }
      else {
        if (cVar3 != '\x05') goto LAB_00022d1c;
        iVar4 = ((int)*(char *)(param_1 + DAT_00022e64 + -0x22) & 0xffU) * 0x20 +
                *(int *)(*(int *)(param_1 + DAT_00022e64) + 0x14);
        *(byte *)(iVar4 + 0x18) = *(byte *)(iVar4 + 0x18) & (byte)DAT_00022e66;
        iVar4 = ((int)*(char *)(param_1 + DAT_00022e64 + -0x22) & 0xffU) * 0x20 +
                *(int *)(*(int *)(param_1 + DAT_00022e64) + 0x14);
        *(byte *)(iVar4 + 0x18) = *(byte *)(iVar4 + 0x18) | 4;
        uVar2 = (uint)DAT_00022e68;
        cVar3 = *(char *)(param_1 + uVar2) + '\x01';
      }
      *(char *)(param_1 + uVar2) = cVar3;
      return uVar2;
    }
LAB_00022d1c:
    iVar4 = ((int)*(char *)(param_1 + DAT_00022dea + -0x22) & 0xffU) * 0x20 +
            *(int *)(*(int *)(param_1 + DAT_00022dea) + 0x14);
    *(byte *)(iVar4 + 0x18) = *(byte *)(iVar4 + 0x18) & (byte)DAT_00022dec;
    iVar4 = ((int)*(char *)(param_1 + DAT_00022dea + -0x22) & 0xffU) * 0x20 +
            *(int *)(*(int *)(param_1 + DAT_00022dea) + 0x14);
    *(byte *)(iVar4 + 0x18) = *(byte *)(iVar4 + 0x18) | 4;
    uVar2 = (*DAT_00022e0c)(param_1,*(undefined4 *)
                                     (((int)*(char *)(*(int *)(param_1 + DAT_00022dee) + 1) & 0xffU)
                                      * 0x10 + *DAT_00022e08 + 0xc),param_1 + 0x5c,param_1 + 8,
                            param_1 + 0x38,0,0,0xffffffd4,DAT_00022e04,0,0,0,DAT_00022e00,0);
    if (param_1 != 0) {
      *(uint *)(param_1 + -4) = *(uint *)(param_1 + -4) | 1;
      return uVar2;
    }
    return uVar2;
  }
  iVar4 = ((int)*(char *)(param_1 + DAT_00022dea + -0x22) & 0xffU) * 0x20 +
          *(int *)(*(int *)(param_1 + DAT_00022dea) + 0x14);
  *(byte *)(iVar4 + 0x18) = *(byte *)(iVar4 + 0x18) & (byte)DAT_00022dec;
  iVar4 = ((int)*(char *)(param_1 + DAT_00022dea + -0x22) & 0xffU) * 0x20 +
          *(int *)(*(int *)(param_1 + DAT_00022dea) + 0x14);
  *(byte *)(iVar4 + 0x18) = *(byte *)(iVar4 + 0x18) | 4;
  if (param_1 != 0) {
    *(uint *)(param_1 + -4) = *(uint *)(param_1 + -4) | 1;
  }
  return 0x18;
}



void FUN_0002325c(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + DAT_000232cc);
  iVar4 = DAT_000232e8 +
          ((int)*(char *)(((int)*(char *)(DAT_000232d0 + param_1) & 0xffU) +
                         *(int *)(DAT_000232ce + param_1) + 0xd) & 0xffU) * 4;
  iVar3 = (*DAT_000232ec)();
  uVar1 = *(undefined *)
           (iVar2 + 0x28 +
           ((int)*(char *)(iVar4 + ((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) +
                                                  (int)DAT_000232d2) & 0xffU)) & 0xffU));
  for (iVar2 = 0; iVar2 < *(short *)(param_1 + DAT_000232d6); iVar2 = iVar2 + 1) {
    *(undefined *)(iVar2 * 100 + *(int *)(param_1 + DAT_000232d4) + 0x60) = uVar1;
  }
  return;
}



undefined4 FUN_000238d8(int param_1,undefined4 param_2,undefined param_3,undefined param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = (*DAT_00023a18)(*(undefined4 *)
                           (((int)*(char *)(param_1 + 1) & 0xffU) * 0x10 + *DAT_00023a14 + 0xc),
                          DAT_00023a10,(int)DAT_00023a06);
  iVar3 = (int)DAT_00023a0a;
  *(undefined4 *)(iVar2 + DAT_00023a08) = param_2;
  iVar5 = (int)DAT_00023a0c;
  *(undefined *)(iVar3 + iVar2) = param_3;
  *(undefined *)(iVar5 + iVar2) = param_4;
  iVar3 = ((int)*(char *)(iVar2 + DAT_00023a08 + -0x22) & 0xffU) * 0x20 +
          *(int *)(*(int *)(iVar2 + DAT_00023a08) + 0x14);
  *(byte *)(iVar3 + 0x18) = *(byte *)(iVar3 + 0x18) | *(byte *)(DAT_00023a0c + iVar2);
  iVar3 = (int)DAT_00023a08;
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
  cVar1 = *(char *)(((int)*(char *)(DAT_00023a0c + iVar2) & 0xffU) + *(int *)(iVar2 + iVar3) + 0xd);
  if (cVar1 == '\0') {
    *(undefined4 *)(iVar2 + 0x3c) = 0;
    goto LAB_00023a28;
  }
  uVar4 = DAT_00023a1c;
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      *(undefined4 *)(iVar2 + 0x3c) = DAT_00023a20;
      goto LAB_00023a28;
    }
    uVar4 = DAT_00023b3c;
    if (cVar1 != '\x03') goto LAB_00023a28;
  }
  *(undefined4 *)(iVar2 + 0x3c) = uVar4;
LAB_00023a28:
  iVar3 = (int)DAT_00023b36;
  *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(iVar2 + 0x38);
  *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar2 + 0x3c);
  *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(iVar2 + 0x40);
  iVar2 = ((int)*(char *)(iVar2 + iVar3 + -0x22) & 0xffU) * 0x20 +
          *(int *)(*(int *)(iVar2 + iVar3) + 0x14);
  *(byte *)(iVar2 + 0x18) = *(byte *)(iVar2 + 0x18) & (byte)DAT_00023b38;
  return 0x18;
}



void FUN_00023a66(int param_1,undefined4 *param_2,uint param_3)

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



void FUN_00023eea(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(*(int *)(param_1 + 0x18) + 4) == 0) {
    if (*(char *)(*(int *)(param_1 + 0x18) + 8) == '\x05') {
      (*DAT_00023fd8)(0);
    }
    else {
      (*DAT_00023fe0)((int)*(char *)(DAT_00023fdc +
                                    ((int)*(char *)(*(int *)(param_1 + 0x18) + 8) & 0xffU)));
    }
  }
  else {
    for (iVar2 = 0; *(char *)(iVar2 + *(int *)(*(int *)(param_1 + 0x18) + 4)) != '\x0e';
        iVar2 = iVar2 + 1) {
    }
    (*DAT_00023fc0)();
    iVar2 = (*DAT_00023fc4)();
    iVar1 = (*DAT_00023fc8)();
    if (*(char *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x10) + 0x1b) != '\0') {
      (*DAT_00023fcc)(5,6);
      (*DAT_00023fd4)();
    }
    (*DAT_00023fd8)(*(undefined *)(*(int *)(*(int *)(param_1 + 0x18) + 4) + iVar2));
  }
  if (*(char *)(*(int *)(param_1 + 0x18) + 10) != -1) {
                    // WARNING: Could not recover jumptable at 0x00023f9a. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_00023fe4)((int)*(char *)(*(int *)(param_1 + 0x18) + 10),0x1e,0);
    return;
  }
  return;
}



undefined4 FUN_00024104(int param_1)

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
    cVar1 = *(char *)(DAT_00024288 + (char)(*(char *)(param_1 + 0x38) * '\x03') + iVar9);
    uVar11 = (int)cVar1 & 0xff;
    if (*(char *)(param_1 + 0x1c + uVar11) != '\0') {
      iVar5 = DAT_0002428c + ((int)*(char *)(uVar11 + param_1 + 0x25) & 0xffU) * 4;
      iVar2 = (*DAT_00024290)();
      iVar10 = ((int)cVar1 & 0xffU) * 4;
      uVar7 = (uint)*(char *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) +
                                             (int)DAT_00024280) & 0xffU) + iVar5);
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
            if (uVar7 == (int)DAT_00024282) {
              uVar4 = *(undefined *)(param_1 + 0x22 + uVar11);
            }
            else {
              uVar4 = (undefined)uVar7;
            }
            *(undefined *)(param_1 + 0x1f + uVar11) = uVar4;
            iVar2 = (*DAT_00024290)();
            iVar3 = 0;
            *(undefined2 *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_00024284) + 2)
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



void FUN_00024412(int param_1)

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



int FUN_000244a4(int param_1,int param_2)

{
  code *pcVar1;
  byte bVar3;
  byte bVar4;
  int iVar2;
  byte *pbVar5;
  
  pcVar1 = DAT_000244cc;
  bVar3 = *(byte *)(param_2 + 9) & 6;
  bVar4 = (byte)DAT_000245d8;
  if (bVar3 == 2) {
    *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & bVar4;
    *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) | 2;
    iVar2 = (*pcVar1)();
    iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
    *(uint *)(iVar2 + DAT_000245da) = *(uint *)(iVar2 + DAT_000245da) | 2;
    pbVar5 = (byte *)(((int)*(char *)(param_1 + 0x34) & 0xffU) + param_1 + 0x25);
    bVar4 = *pbVar5 + 1;
  }
  else if (bVar3 == 4) {
    *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & bVar4;
    *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) | 4;
    iVar2 = (*pcVar1)();
    iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
    *(uint *)(iVar2 + DAT_000245da) = *(uint *)(iVar2 + DAT_000245da) | 2;
    pbVar5 = (byte *)(((int)*(char *)(param_1 + 0x34) & 0xffU) + param_1 + 0x25);
    bVar4 = *pbVar5 + 3;
  }
  else {
    if (bVar3 != 6) goto LAB_00024568;
    *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & bVar4;
    *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) | 6;
    iVar2 = (*pcVar1)();
    iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
    *(uint *)(iVar2 + DAT_000245da) = *(uint *)(iVar2 + DAT_000245da) | 2;
    pbVar5 = (byte *)(((int)*(char *)(param_1 + 0x34) & 0xffU) + param_1 + 0x25);
    bVar4 = *pbVar5 + 2;
  }
  *pbVar5 = bVar4 & 3;
LAB_00024568:
  iVar2 = (*pcVar1)();
  iVar2 = (int)*(short *)(iVar2 + 4);
  if (iVar2 == 5) {
    iVar2 = (*pcVar1)();
    iVar2 = (int)*(char *)((int)DAT_000245dc + *(int *)(*(int *)(iVar2 + 0x10) + 4));
    if ((((iVar2 == 4) || (iVar2 == 5)) || (iVar2 == 8)) || ((iVar2 == 9 || (iVar2 == 10)))) {
                    // WARNING: Could not recover jumptable at 0x000245a8. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar2 = (*DAT_000245e0)(0x6f);
      return iVar2;
    }
  }
  else if (iVar2 == 7) {
    iVar2 = (*pcVar1)();
    iVar2 = (int)*(char *)((int)DAT_000245dc + *(int *)(*(int *)(iVar2 + 0x10) + 4));
    if (iVar2 == 1) {
                    // WARNING: Could not recover jumptable at 0x000245ca. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar2 = (*DAT_000245e0)(0x70);
      return iVar2;
    }
  }
  return iVar2;
}



uint FUN_000245e4(int param_1)

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
  uVar1 = (*DAT_0002467c)(uVar2,0x3c);
  return uVar1;
}



undefined4 FUN_0002462e(int param_1)

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
  if (((*(char *)(param_1 + 7) == '\x02') && (iVar1 = (*DAT_00024680)(), iVar1 != 0)) &&
     (*(char *)(param_1 + 0x28) == '\0')) {
    for (iVar1 = 0; iVar1 < (int)((int)*(char *)(param_1 + 3) & 0xffU); iVar1 = iVar1 + 1) {
      bVar3 = *(byte *)(*(int *)(param_1 + 0x2c) + iVar1 * 0x20 + 0x18) & 3;
      iVar9 = (int)(char)bVar3;
      iVar5 = DAT_000247c4 + ((int)*(char *)(iVar9 + param_1 + 0x25) & 0xffU) * 4;
      iVar2 = (*DAT_000247c8)();
      uVar8 = (uint)*(char *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) +
                                             (int)DAT_000247be) & 0xffU) + iVar5);
      if ((*(byte *)(*(int *)(param_1 + 0x2c) + iVar1 * 0x20 + 0x18) & 8) == 0) {
        iVar2 = (char)bVar3 * 4;
        iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x30) + 4 + iVar2) + 0x24);
        if (iVar5 != 0) {
          if (*(char *)(iVar5 + 0x14 + (uVar8 & 0xff)) != '\0') {
            *(undefined *)(param_1 + 0x47 + iVar1) = 1;
            *(undefined *)(param_1 + 0x22 + iVar9) = *(undefined *)(param_1 + 0x1f + iVar9);
            uVar7 = (int)*(char *)(iVar5 + 0x18 + (uVar8 & 0xff)) & 0xff;
            if (uVar7 == (int)DAT_000247c0) {
              uVar4 = *(undefined *)(param_1 + 0x22 + iVar9);
            }
            else {
              uVar4 = (undefined)uVar7;
            }
            *(undefined *)(param_1 + 0x1f + iVar9) = uVar4;
            iVar9 = (*DAT_000247c8)();
            iVar6 = 0;
            *(undefined2 *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x10) + 4) + (int)DAT_000247c2) + 2)
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



bool FUN_000247e6(int param_1)

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
  
  iVar2 = (*DAT_000248e0)();
  if (iVar2 != 0) {
    for (iVar2 = 0; iVar2 < (int)((int)*(char *)(param_1 + 3) & 0xffU); iVar2 = iVar2 + 1) {
      bVar5 = *(byte *)(*(int *)(param_1 + 0x2c) + iVar2 * 0x20 + 0x18) & 3;
      iVar9 = (int)(char)bVar5;
      iVar6 = DAT_000248e4 + ((int)*(char *)(iVar9 + param_1 + 0x25) & 0xffU) * 4;
      iVar3 = (*DAT_000248e8)();
      bVar1 = *(byte *)(*(int *)(param_1 + 0x2c) + iVar2 * 0x20 + 0x18);
      uVar8 = (uint)*(char *)(((int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) +
                                             (int)DAT_000248d8) & 0xffU) + iVar6);
      if ((((bVar1 & 8) == 0) && ((bVar1 & 0x20) != 0)) &&
         (*(char *)(param_1 + 0x47 + iVar2) == '\0')) {
        iVar3 = (char)bVar5 * 4;
        iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x30) + 4 + iVar3) + 0x20);
        if (iVar6 != 0) {
          iVar4 = (*DAT_000248e8)();
          *(undefined2 *)(*(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_000248da) + 2) =
               *(undefined2 *)(iVar6 + 0x20);
          if (*(char *)(iVar6 + 0x14 + (uVar8 & 0xff)) != '\0') {
            *(undefined *)(param_1 + 0x22 + iVar9) = *(undefined *)(param_1 + 0x1f + iVar9);
            uVar7 = (int)*(char *)(iVar6 + 0x18 + (uVar8 & 0xff)) & 0xff;
            if (uVar7 == (int)DAT_000248dc) {
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



void FUN_000256aa(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  short sVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int local_24;
  
  puVar2 = (undefined4 *)(*DAT_00025798)(param_1,DAT_00025794,(int)DAT_0002577c);
  *puVar2 = param_3;
  (*DAT_000257a4)((int)DAT_0002577a + (int)puVar2,
                  (int)*(short *)(*(int *)(*(int *)(*DAT_000257a0 + 0xc) + 4) + 4),DAT_0002579c);
  pcVar1 = DAT_000257a8;
  sVar4 = 0;
  uVar6 = (uint)DAT_0002577e;
  local_24 = 0;
  iVar7 = (int)DAT_00025780;
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
  *(undefined2 *)((int)puVar2 + (int)DAT_00025782) = 0x3c;
  return;
}



uint FUN_000257ac(char *param_1)

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
        (*DAT_000259bc)(param_1,*(undefined *)(*(int *)(iVar8 * 4 + iVar7 + 4) + 1));
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
            (*DAT_000259c0)(param_1,(int)*(char *)(iVar7 + 0x20 + iVar8));
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
      if (*DAT_000259c4 != 0) {
        return *DAT_000259c4;
      }
      iVar8 = 0;
      local_28 = 0;
      do {
        for (iVar6 = 0; iVar6 < (int)((int)*(char *)(iVar7 + 1 + iVar8) & 0xffU); iVar6 = iVar6 + 1)
        {
          (*DAT_000259c8)(*(undefined4 *)(iVar7 + 4 + iVar8 * 4),param_1 + 0x18,local_28,iVar8);
          local_28 = local_28 + 1;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 3);
      (*DAT_000259cc)(*(undefined *)(iVar7 + 0x15),(int)*(char *)(iVar7 + 0x16),
                      (int)*(char *)(iVar7 + 0x17));
      param_1[1] = '\x01';
      param_1[2] = '\0';
    }
    iVar7 = (*DAT_000259d0)();
    uVar5 = (uint)*(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x10) + 0x17);
    if (uVar5 != 0) {
      (*DAT_000259d4)(0x1e,7);
      uVar5 = (*DAT_000259dc)();
    }
  }
  return uVar5;
}



void FUN_00026be8(void)

{
  int iVar1;
  
  iVar1 = (*DAT_00026c60)();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 8);
  *(undefined4 *)(iVar1 + DAT_00026c5a) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  return;
}



void FUN_00026c02(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (*DAT_00026c60)();
  iVar3 = *(int *)(*(int *)(iVar1 + 0x10) + 4);
  iVar1 = (*DAT_00026c60)();
  iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + 8);
  iVar1 = (int)DAT_00026c5c;
  *(undefined4 *)(iVar3 + iVar1) = param_1;
  *(undefined4 *)(iVar2 + DAT_00026c5e) = *(undefined4 *)(iVar3 + iVar1);
  return;
}



void FUN_00026c64(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  int iStack24;
  int iStack20;
  
  iVar1 = (*DAT_00026d9c)();
  iVar3 = *(int *)(*(int *)(iVar1 + 0x10) + 4);
  iVar1 = (*DAT_00026d9c)();
  iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + 8);
  iVar1 = (int)DAT_00026d96;
  local_1c = **(int **)(iVar3 + iVar1) - **(int **)(iVar3 + iVar1 + -4);
  iStack24 = *(int *)(*(int *)(iVar3 + iVar1) + 4) - *(int *)(*(int *)(iVar3 + iVar1 + -4) + 4);
  iStack20 = *(int *)(*(int *)(iVar3 + iVar1) + 8) - *(int *)(*(int *)(iVar3 + iVar1 + -4) + 8);
  (*DAT_00026da0)(&local_1c,param_1);
  iVar1 = (int)DAT_00026d98;
  *(undefined4 *)(iVar1 + iVar3) = *param_1;
  ((undefined4 *)(iVar1 + iVar3))[1] = param_1[1];
  *(undefined4 *)(iVar2 + 100) = *param_1;
  *(undefined4 *)(iVar2 + 0x68) = param_1[1];
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00026ce2(undefined4 *param_1)

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
  
  pcVar2 = DAT_00026d9c;
  iVar3 = (*DAT_00026d9c)();
  iVar7 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
  iVar3 = (*pcVar2)();
  iVar6 = *(int *)(*(int *)(iVar3 + 0x10) + 8);
  iVar3 = (int)DAT_00026d96;
  local_24 = **(int **)(iVar7 + iVar3) - **(int **)(iVar7 + iVar3 + -4);
  iStack32 = *(int *)(*(int *)(iVar7 + iVar3) + 4) - *(int *)(*(int *)(iVar7 + iVar3 + -4) + 4);
  iStack28 = *(int *)(*(int *)(iVar7 + iVar3) + 8) - *(int *)(*(int *)(iVar7 + iVar3 + -4) + 8);
  (*DAT_00026da0)(&local_24,param_1);
  uVar4 = *param_1;
  uVar5 = param_1[1];
  if ((uVar5 & DAT_00026da4) == 0) {
    uVar5 = _LAB_00026dab_1 & uVar5;
  }
  else {
    uVar5 = _DAT_00026da8 | uVar5;
  }
  iVar3 = (*pcVar2)();
  cVar1 = *(char *)((int)_LAB_00026d9a + *(int *)(*(int *)(iVar3 + 0x10) + 4));
  if (cVar1 == '\0') {
    if ((int)uVar5 < 0) {
      uStack40 = DAT_00026e6c;
      if ((int)DAT_00026e6c <= (int)uVar5) {
        uStack40 = uVar5;
      }
    }
    else {
      uStack40 = DAT_00026db0;
      if ((int)uVar5 < (int)DAT_00026db0) {
        uStack40 = uVar5;
      }
    }
  }
  else if (cVar1 == '\x01') {
    if ((int)uVar5 < DAT_00026e78) {
      uStack40 = DAT_00026e80;
      if ((int)DAT_00026e80 <= (int)uVar5) {
        uStack40 = uVar5;
      }
    }
    else {
      uStack40 = DAT_00026e7c;
      if ((int)uVar5 < (int)DAT_00026e7c) {
        uStack40 = uVar5;
      }
    }
  }
  else if (cVar1 == '\x02') {
    if ((int)uVar5 < 0) {
      uStack40 = DAT_00026e74;
      if ((int)uVar5 < (int)DAT_00026e74) {
        uStack40 = uVar5;
      }
    }
    else {
      uStack40 = DAT_00026e70;
      if ((int)DAT_00026e70 <= (int)uVar5) {
        uStack40 = uVar5;
      }
    }
  }
  else {
    uStack40 = uVar5;
    if (cVar1 == '\x03') {
      if ((int)uVar5 < DAT_00026e84) {
        uStack40 = DAT_00026e8c;
        if ((int)DAT_00026e8c <= (int)uVar5) {
          uStack40 = uVar5;
        }
      }
      else {
        uStack40 = DAT_00026e88;
        if ((int)uVar5 < (int)DAT_00026e88) {
          uStack40 = uVar5;
        }
      }
    }
  }
  iVar3 = (int)DAT_00026e68;
  *(undefined4 *)(iVar3 + iVar7) = uVar4;
  ((undefined4 *)(iVar3 + iVar7))[1] = uStack40;
  *(undefined4 *)(iVar6 + 100) = uVar4;
  *(uint *)(iVar6 + 0x68) = uStack40;
  return;
}



int FUN_00026e90(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*DAT_00026f78)();
  iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + 8);
  *(undefined4 *)(iVar2 + DAT_00026f6c) = *param_1;
  iVar1 = (int)DAT_00026f6e;
  *(undefined4 *)(iVar2 + iVar1) = param_1[1];
  return iVar1;
}



void FUN_00026eb8(void)

{
  int iVar1;
  int iVar2;
  undefined auStack16 [12];
  
  iVar1 = (*DAT_00026f78)();
  iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + 8);
  iVar1 = (int)DAT_00026f70;
  *(undefined4 *)(iVar2 + iVar1 + -0x38) = **(undefined4 **)(iVar2 + iVar1);
  *(undefined4 *)(iVar2 + iVar1 + -0x34) = *(undefined4 *)(*(int *)(iVar2 + iVar1) + 4);
  *(undefined4 *)(iVar2 + iVar1 + -0x30) = *(undefined4 *)(*(int *)(iVar2 + iVar1) + 8);
  FUN_00026c64(auStack16);
  FUN_00026e90(auStack16);
  iVar1 = (int)DAT_00026f72;
  *(undefined4 *)(iVar2 + iVar1) = 0;
  *(undefined4 *)(iVar2 + iVar1 + 4) = 0;
  *(undefined4 *)(iVar2 + iVar1 + 8) = 0;
  iVar1 = (int)DAT_00026f74;
  *(undefined4 *)(iVar2 + iVar1) = 0;
  *(undefined4 *)(iVar2 + iVar1 + 4) = 0;
  *(undefined4 *)(iVar2 + iVar1 + 8) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000275f6(int *param_1)

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
  
  iVar3 = _LAB_000276f4;
  psVar2 = _LAB_000276f0;
  pcVar1 = _LAB_000276ec;
  puVar5 = _LAB_000276e8 + 0x18;
  for (puVar6 = _LAB_000276e8; puVar6 < puVar5; puVar6 = puVar6 + 2) {
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



void FUN_0002832c(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack32;
  undefined4 uStack28;
  int iStack24;
  
  iVar3 = DAT_000283e4;
  uVar2 = DAT_000283e0;
  uVar1 = DAT_000283cc;
  iStack32 = (*DAT_000283ec)(DAT_000283e0,
                             *(undefined4 *)
                              (DAT_000283e4 +
                              (short)((ushort)((uint)*param_1 >> 0x10) & DAT_000283cc) * 4),
                             *(undefined4 *)
                              ((short)((ushort)((uint)param_1[1] >> 0x10) & DAT_000283cc) * 4 +
                              DAT_000283e8));
  iStack32 = -iStack32;
  uStack28 = (*DAT_000283f0)(uVar2,*(undefined4 *)
                                    ((short)((ushort)((uint)*param_1 >> 0x10) & uVar1) * 4 +
                                    DAT_000283e8));
  iStack24 = (*DAT_000283ec)(uVar2,*(undefined4 *)
                                    (iVar3 + (short)((ushort)((uint)*param_1 >> 0x10) & uVar1) * 4),
                             *(undefined4 *)
                              (iVar3 + (short)((ushort)((uint)param_1[1] >> 0x10) & uVar1) * 4));
  iStack24 = -iStack24;
  (*DAT_000283f4)(&iStack32,param_2);
  return;
}



uint FUN_000287da(int param_1)

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
  
  pcVar2 = DAT_00028834;
  if ((*(uint *)(param_1 + DAT_00028826) & 4) != 0) {
    sVar1 = *(short *)(param_1 + DAT_0002882e);
    *(short *)(param_1 + DAT_0002882e) = sVar1 + -1;
    if (sVar1 < 1) {
      iVar3 = (*pcVar2)();
      puVar5 = (undefined4 *)(DAT_00028830 + param_1);
      puVar6 = (undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 8) + (int)DAT_00028832);
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      puVar6[2] = puVar5[2];
      *(uint *)(param_1 + DAT_00028826) = *(uint *)(param_1 + DAT_00028826) & 0xfffffffb;
    }
    else {
      iVar3 = (int)DAT_00028996;
      iVar8 = (int)DAT_00028994;
      iVar9 = (int)DAT_00028994;
      *(int *)(DAT_00028994 + param_1) =
           *(int *)(DAT_00028994 + param_1) + *(int *)(param_1 + iVar3);
      *(int *)(iVar9 + param_1 + 4) = *(int *)(iVar9 + param_1 + 4) + *(int *)(param_1 + iVar3 + 4);
      *(int *)(iVar8 + param_1 + 8) = *(int *)(iVar8 + param_1 + 8) + *(int *)(param_1 + iVar3 + 8);
      iVar3 = (*pcVar2)();
      puVar5 = (undefined4 *)(DAT_00028994 + param_1);
      puVar6 = (undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 8) + (int)DAT_00028998);
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      puVar6[2] = puVar5[2];
    }
  }
  uVar4 = *(uint *)(param_1 + DAT_0002899a);
  if ((uVar4 & 8) != 0) {
    sVar1 = *(short *)(param_1 + DAT_0002899c);
    *(short *)(param_1 + DAT_0002899c) = sVar1 + -1;
    if (sVar1 < 1) {
      iVar3 = (*pcVar2)();
      puVar5 = (undefined4 *)(DAT_0002899e + param_1);
      puVar6 = (undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 8) + (int)DAT_000289a0);
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      puVar6[2] = puVar5[2];
      uVar4 = (uint)DAT_0002899a;
      *(uint *)(param_1 + uVar4) = *(uint *)(param_1 + uVar4) & 0xfffffff7;
    }
    else {
      iVar3 = (int)DAT_000289a2;
      iVar8 = (int)DAT_00028994;
      piVar7 = (int *)(DAT_00028994 + param_1 + 0xc);
      iVar9 = (int)DAT_00028994;
      *piVar7 = *piVar7 + *(int *)(param_1 + iVar3);
      *(int *)(iVar8 + param_1 + 0x10) =
           *(int *)(iVar8 + param_1 + 0x10) + *(int *)(param_1 + iVar3 + 4);
      *(int *)(iVar9 + param_1 + 0x14) =
           *(int *)(iVar9 + param_1 + 0x14) + *(int *)(param_1 + iVar3 + 8);
      iVar3 = (*pcVar2)();
      puVar5 = (undefined4 *)(DAT_000289a4 + param_1);
      puVar6 = (undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 8) + (int)DAT_000289a0);
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      uVar4 = puVar5[2];
      puVar6[2] = uVar4;
    }
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0002893c(int param_1)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = (*_LAB_000289ab_1)();
  if (*(char *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x10) + 0x12) != '\0') {
    if ((_DAT_000289a6 & *(ushort *)(_LAB_000289af_1 + 8)) == 0) {
      if (((_LAB_000289b3_1 & (int)*(short *)(_LAB_000289af_1 + 8)) != 0) &&
         (bVar2 = *(char *)(param_1 + _LAB_000289a7_1) + 1,
         *(byte *)(param_1 + _LAB_000289a7_1) = bVar2, 4 < bVar2)) {
        *(undefined *)(param_1 + _LAB_000289a7_1) = 0;
      }
    }
    else {
      bVar2 = *(char *)(param_1 + _LAB_000289a7_1) - 1;
      *(byte *)(param_1 + _LAB_000289a7_1) = bVar2;
      if (4 < bVar2) {
        *(undefined *)(param_1 + _LAB_000289a7_1) = 4;
      }
    }
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps

int * FUN_000289b8(int param_1)

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
  
  iVar3 = (*DAT_00028a3c)();
  if (*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x10) + 0x12) == '\0') {
    return (int *)0x12;
  }
  piVar4 = (int *)((int)*(char *)(param_1 + DAT_00028a30) & 0xff);
  if (piVar4 == (int *)0x0) {
    puVar5 = (undefined4 *)(DAT_00028a32 + param_1);
    local_14._0_2_ = (short)((uint)*puVar5 >> 0x10);
    iStack16._0_2_ = (short)((uint)puVar5[1] >> 0x10);
    iStack12._0_2_ = (short)((uint)puVar5[2] >> 0x10);
  }
  else {
    sVar1 = DAT_00028a34;
    if (piVar4 != (int *)0x1) {
      if (piVar4 == (int *)0x2) {
        puVar5 = (undefined4 *)(DAT_00028a36 + param_1);
        local_14._0_2_ = (short)((uint)*puVar5 >> 0x10);
        iStack16._0_2_ = (short)((uint)puVar5[1] >> 0x10);
        iStack12._0_2_ = (short)((uint)puVar5[2] >> 0x10);
        goto LAB_00028a40;
      }
      sVar1 = DAT_00028a38;
      if (piVar4 != (int *)&LAB_00000002_1) {
        return piVar4;
      }
    }
    puVar5 = (undefined4 *)(sVar1 + param_1);
    local_14._0_2_ = (short)((uint)*puVar5 >> 0x10);
    iStack16._0_2_ = (short)((uint)puVar5[1] >> 0x10);
    iStack12._0_2_ = (short)((uint)puVar5[2] >> 0x10);
  }
LAB_00028a40:
  local_14 = (int)local_14._0_2_;
  iStack16 = (int)iStack16._0_2_;
  iStack12 = (int)iStack12._0_2_;
  if (((*(ushort *)(DAT_00028b48 + 0x78) & 4) != 0) && (-0x1f < local_14)) {
    local_14 = local_14 + -1;
  }
  if (((*(ushort *)(DAT_00028b48 + 0x78) & 1) != 0) && (-0x1f < iStack16)) {
    iStack16 = iStack16 + -1;
  }
  if (((*(ushort *)(DAT_00028b48 + 0x78) & 2) != 0) && (-0x1f < iStack12)) {
    iStack12 = iStack12 + -1;
  }
  if (((DAT_00028b38 & *(ushort *)(DAT_00028b48 + 0x78)) != 0) && (local_14 < 0x1f)) {
    local_14 = local_14 + 1;
  }
  if (((DAT_00028b3a & *(ushort *)(DAT_00028b48 + 0x78)) != 0) && (iStack16 < 0x1f)) {
    iStack16 = iStack16 + 1;
  }
  if (((DAT_00028b3c & *(ushort *)(DAT_00028b48 + 0x78)) != 0) && (iStack12 < 0x1f)) {
    iStack12 = iStack12 + 1;
  }
  local_14 = local_14 << 0x10;
  iStack16 = iStack16 << 0x10;
  iStack12 = iStack12 << 0x10;
  piVar4 = (int *)((int)*(char *)(param_1 + DAT_00028b3e) & 0xff);
  if (piVar4 == (int *)0x0) {
    piVar6 = (int *)(DAT_00028b40 + param_1);
    *piVar6 = local_14;
    piVar6[1] = iStack16;
    piVar6[2] = iStack12;
  }
  else {
    sVar1 = DAT_00028b42;
    if ((piVar4 == (int *)0x1) ||
       ((sVar2 = DAT_00028b44, piVar4 != (int *)0x2 &&
        (sVar2 = DAT_00028c62, sVar1 = DAT_00028b46, piVar4 == (int *)&LAB_00000002_1)))) {
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



void FUN_00028b64(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (*DAT_00028c78)();
  iVar1 = DAT_00028c80;
  iVar4 = DAT_00028c7c;
  if (*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x10) + 0x12) != '\0') {
    if (*(char *)(param_1 + DAT_00028c64) == '\x04') {
      if ((DAT_00028c66 & *(ushort *)(DAT_00028c80 + 0x78)) != 0) {
        *(int *)(param_1 + DAT_00028c68) = *(int *)(param_1 + DAT_00028c68) + DAT_00028c7c;
      }
      if ((*(ushort *)(iVar1 + 0x78) & 4) != 0) {
        *(int *)(param_1 + DAT_00028c68) = *(int *)(param_1 + DAT_00028c68) - iVar4;
      }
      if ((DAT_00028c6a & *(ushort *)(iVar1 + 0x78)) != 0) {
        *(int *)(param_1 + DAT_00028c6c) = *(int *)(param_1 + DAT_00028c6c) + iVar4;
      }
      if ((*(ushort *)(iVar1 + 0x78) & 1) != 0) {
        *(int *)(param_1 + DAT_00028c6c) = *(int *)(param_1 + DAT_00028c6c) - iVar4;
      }
    }
    uVar2 = DAT_00028c84;
    iVar4 = (int)DAT_00028c68;
    *(uint *)(param_1 + iVar4) = *(uint *)(param_1 + iVar4) & DAT_00028c84;
    *(uint *)(param_1 + iVar4 + 4) = *(uint *)(param_1 + iVar4 + 4) & uVar2;
  }
  return;
}



void FUN_00028ef0(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
  pcVar1 = DAT_00028fb8;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar2 = (*pcVar1)();
  pcVar1 = DAT_00028fb8;
  *(undefined4 *)(param_1 + 100) =
       *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_00028fa0);
  iVar2 = (*pcVar1)();
  *(undefined4 *)(param_1 + 0x68) =
       *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_00028fa4);
  iVar2 = (int)DAT_00028fa6;
  *(undefined4 *)(param_1 + iVar2) = 0;
  *(undefined4 *)(param_1 + iVar2 + -4) = 0;
  return;
}



void FUN_00028f36(int param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_00028fb8)();
  if (*(char *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x10) + 0xb) == '\0') {
    (*DAT_00028fbc)(param_1);
    FUN_00028fd8(param_1);
    (*DAT_00028fc0)(DAT_00028fa8 + param_1);
    (*DAT_00028fc4)(param_1);
    (*DAT_00028fc8)(DAT_00028faa + param_1,DAT_00028fa8 + param_1);
    if ((*(uint *)(param_1 + DAT_00028fa0) & 2) == 0) {
      (*DAT_00028fd0)(param_1);
    }
    else {
      (*DAT_00028fcc)(param_1);
    }
                    // WARNING: Could not recover jumptable at 0x00028f92. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_00028fd4)(DAT_00028fac + param_1,DAT_00028fa8 + param_1);
    return;
  }
  return;
}



void FUN_00028fd8(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  pcVar1 = DAT_00029194;
  iVar2 = (int)DAT_0002917a;
  iVar3 = (*DAT_00029194)(*(int *)(param_1 + iVar2 + 0x2c) - *(int *)(param_1 + iVar2 + -0x24),
                          *(undefined4 *)(param_1 + iVar2 + 0x24));
  *(int *)(iVar2 + param_1) = *(int *)(iVar2 + param_1) + iVar3;
  iVar2 = (int)DAT_0002917a;
  iVar3 = (*pcVar1)(*(undefined4 *)(param_1 + iVar2),*(undefined4 *)(param_1 + iVar2 + 0x28));
  *(int *)(iVar2 + param_1) = *(int *)(iVar2 + param_1) - iVar3;
  iVar2 = (int)DAT_0002917c;
  *(int *)(param_1 + iVar2) = *(int *)(param_1 + iVar2) + *(int *)(iVar2 + 0x24 + param_1);
  piVar4 = (int *)(iVar2 + 0x28 + param_1);
  iVar2 = (*pcVar1)(*(int *)(param_1 + iVar2 + 0x54) - *(int *)(param_1 + iVar2 + 4),
                    *(undefined4 *)(param_1 + iVar2 + 0x48));
  *piVar4 = *piVar4 + iVar2;
  iVar2 = (int)DAT_0002917e;
  iVar3 = (*pcVar1)(*(undefined4 *)(param_1 + iVar2),*(undefined4 *)(param_1 + iVar2 + 0x24));
  *(int *)(iVar2 + param_1) = *(int *)(iVar2 + param_1) - iVar3;
  iVar2 = (int)DAT_00029180;
  *(int *)(param_1 + iVar2) = *(int *)(param_1 + iVar2) + *(int *)(iVar2 + 0x24 + param_1);
  piVar4 = (int *)(iVar2 + 0x28 + param_1);
  iVar2 = (*pcVar1)(*(int *)(param_1 + iVar2 + 0x54) - *(int *)(param_1 + iVar2 + 4),
                    *(undefined4 *)(param_1 + iVar2 + 0x44));
  *piVar4 = *piVar4 + iVar2;
  iVar2 = (int)DAT_00029182;
  iVar3 = (*pcVar1)(*(undefined4 *)(param_1 + iVar2),*(undefined4 *)(param_1 + iVar2 + 0x20));
  *(int *)(iVar2 + param_1) = *(int *)(iVar2 + param_1) - iVar3;
  iVar2 = (int)DAT_00029184;
  *(int *)(param_1 + iVar2) = *(int *)(param_1 + iVar2) + *(int *)(iVar2 + 0x24 + param_1);
  piVar4 = (int *)(iVar2 + 0x28 + param_1);
  iVar2 = (*pcVar1)(*(int *)(param_1 + iVar2 + 0x54) - *(int *)(param_1 + iVar2 + 4),
                    *(undefined4 *)(param_1 + iVar2 + 0x40));
  *piVar4 = *piVar4 + iVar2;
  iVar2 = (int)DAT_00029186;
  iVar3 = (*pcVar1)(*(undefined4 *)(param_1 + iVar2),*(undefined4 *)(param_1 + iVar2 + 0x1c));
  *(int *)(iVar2 + param_1) = *(int *)(iVar2 + param_1) - iVar3;
  iVar2 = (int)DAT_00029188;
  *(int *)(param_1 + iVar2) = *(int *)(param_1 + iVar2) + *(int *)(iVar2 + 0x24 + param_1);
  piVar4 = (int *)(iVar2 + 0x28 + param_1);
  iVar2 = (*pcVar1)(*(int *)(param_1 + iVar2 + 0x54) - *(int *)(param_1 + iVar2 + 4),
                    *(undefined4 *)(param_1 + iVar2 + 0x3c));
  *piVar4 = *piVar4 + iVar2;
  iVar2 = (int)DAT_0002918a;
  iVar3 = (*pcVar1)(*(undefined4 *)(param_1 + iVar2),*(undefined4 *)(param_1 + iVar2 + 0x18));
  *(int *)(iVar2 + param_1) = *(int *)(iVar2 + param_1) - iVar3;
  iVar2 = (int)DAT_0002918c;
  *(int *)(param_1 + iVar2) = *(int *)(param_1 + iVar2) + *(int *)(iVar2 + 0x24 + param_1);
  piVar4 = (int *)(iVar2 + 0x28 + param_1);
  iVar2 = (*pcVar1)(*(int *)(param_1 + iVar2 + 0x54) - *(int *)(param_1 + iVar2 + 4),
                    *(undefined4 *)(param_1 + iVar2 + 0x38));
  *piVar4 = *piVar4 + iVar2;
  iVar2 = (int)DAT_0002918e;
  iVar3 = (*pcVar1)(*(undefined4 *)(param_1 + iVar2),*(undefined4 *)(param_1 + iVar2 + 0x14));
  *(int *)(iVar2 + param_1) = *(int *)(iVar2 + param_1) - iVar3;
  iVar2 = (int)DAT_00029190;
  *(int *)(param_1 + iVar2) = *(int *)(param_1 + iVar2) + *(int *)(iVar2 + 0x24 + param_1);
  return;
}



void FUN_0002b0aa(int param_1,int param_2,int param_3,int param_4)

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
  
  pcVar4 = DAT_0002b13c;
  piVar3 = DAT_0002b138;
  uVar2 = DAT_0002b120;
  iVar6 = (int)DAT_0002b11a;
  *(undefined **)(&stack0xffffffe8 + iVar6) = &stack0x0000000c + iVar6;
  *(int *)(&stack0x0000000c + iVar6) = param_1 + param_3;
  *(undefined **)(&stack0xffffffe4 + iVar6) = &stack0x00000018 + iVar6;
  *(int *)(&stack0x00000018 + iVar6) = param_1 - param_3;
  *(undefined **)((int)&local_20 + iVar6) = &stack0x00000010 + iVar6;
  *(int *)(&stack0x00000010 + iVar6) = param_2 + param_4;
  *(undefined **)(&stack0xffffffec + iVar6) = &stack0x00000014 + iVar6;
  *(int *)(&stack0x00000014 + iVar6) = param_2 - param_4;
  piVar15 = (int *)((int)&local_20 + DAT_0002b11c + iVar6);
  puVar13 = &stack0x0000001c + iVar6;
  piVar16 = (int *)((int)&local_20 + DAT_0002b11e + iVar6);
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
                       DAT_0002b2ac),*(undefined4 *)((int)&local_20 + DAT_0002b29a + iVar6));
    *(int *)((int)&local_20 + DAT_0002b29c + iVar6) = iVar7 + piVar15[1];
    iVar7 = (*pcVar4)(*(undefined4 *)
                       ((short)((ushort)((uint)(**(int **)(&stack0xffffffe4 + iVar6) +
                                               iVar14 * *piVar3) >> 0x10) & uVar2) * 4 +
                       DAT_0002b2ac),*(undefined4 *)((int)&local_20 + DAT_0002b29a + iVar6));
    *(int *)((int)&local_20 + DAT_0002b29e + iVar6) = iVar7 + piVar15[1];
    iVar7 = (*pcVar4)(*(undefined4 *)
                       ((short)((ushort)((uint)(**(int **)((int)&local_20 + iVar6) +
                                               iVar14 * *piVar3) >> 0x10) & uVar2) * 4 +
                       DAT_0002b2ac),*(undefined4 *)((int)&local_20 + DAT_0002b2a0 + iVar6));
    *(int *)((int)&local_20 + DAT_0002b2a2 + iVar6) = iVar7 + piVar16[1];
    iVar7 = (*pcVar4)(*(undefined4 *)
                       ((short)((ushort)((uint)(**(int **)(&stack0xffffffec + iVar6) +
                                               iVar14 * *piVar3) >> 0x10) & uVar2) * 4 +
                       DAT_0002b2ac),*(undefined4 *)((int)&local_20 + DAT_0002b2a0 + iVar6));
    *(int *)((int)&local_20 + DAT_0002b2a4 + iVar6) = iVar7 + piVar16[1];
    *(undefined4 *)((int)aiStack48 + iVar6 + 0xc) = *(undefined4 *)(&stack0xfffffffc + iVar6);
    uVar8 = (*pcVar4)(*(undefined4 *)
                       ((short)((ushort)((uint)(iVar14 * *piVar3 +
                                               **(int **)(&stack0xffffffe8 + iVar6)) >> 0x10) &
                               uVar2) * 4 + DAT_0002b2b0),
                      *(undefined4 *)((int)aiStack48 + DAT_0002b2a0 + iVar6 + 0xc));
    **(undefined4 **)((int)aiStack48 + iVar6 + 0xc) = uVar8;
    *(undefined4 *)((int)aiStack48 + iVar6 + 0xc) = *(undefined4 *)(&stack0xfffffff0 + iVar6);
    uVar8 = (*pcVar4)(*(undefined4 *)
                       ((short)((ushort)((uint)(iVar14 * *piVar3 +
                                               **(int **)(&stack0xffffffe4 + iVar6)) >> 0x10) &
                               uVar2) * 4 + DAT_0002b2b0),
                      *(undefined4 *)((int)aiStack48 + DAT_0002b2a0 + iVar6 + 0xc));
    **(undefined4 **)((int)aiStack48 + iVar6 + 0xc) = uVar8;
    *(undefined4 *)((int)aiStack48 + iVar6 + 0xc) = *(undefined4 *)(&stack0xfffffff4 + iVar6);
    uVar8 = (*pcVar4)(*(undefined4 *)
                       ((short)((ushort)((uint)(iVar14 * *piVar3 +
                                               **(int **)((int)&local_20 + iVar6)) >> 0x10) & uVar2)
                        * 4 + DAT_0002b2b0),
                      *(undefined4 *)((int)aiStack48 + DAT_0002b2a6 + iVar6 + 0xc));
    **(undefined4 **)((int)aiStack48 + iVar6 + 0xc) = uVar8;
    *(undefined4 *)((int)aiStack48 + iVar6 + 0xc) = *(undefined4 *)(&stack0xfffffff8 + iVar6);
    uVar8 = (*pcVar4)(*(undefined4 *)
                       ((short)((ushort)((uint)(iVar14 * *piVar3 +
                                               **(int **)(&stack0xffffffec + iVar6)) >> 0x10) &
                               uVar2) * 4 + DAT_0002b2b0),
                      *(undefined4 *)((int)aiStack48 + DAT_0002b2a6 + iVar6 + 0xc));
    pcVar5 = DAT_0002b2b4;
    **(undefined4 **)((int)aiStack48 + iVar6 + 0xc) = uVar8;
    iVar7 = (*pcVar5)();
    cVar1 = *(char *)((int)DAT_0002b2a8 + *(int *)(*(int *)(iVar7 + 0x10) + 4));
    if (cVar1 == '\0') {
LAB_0002b2b8:
      iVar7 = 0;
      do {
        if (iVar7 == 0) {
LAB_0002b2d0:
          iVar10 = (int)(char)((char)iVar7 * '\f');
          *(int *)(&stack0x0000005c + iVar10 + iVar6) = *(int *)(puVar13 + iVar7 * 4) + *piVar15;
          puVar9 = &stack0x0000005c + iVar10 + iVar6;
          iVar10 = piVar15[2];
LAB_0002b31e:
          *(int *)(puVar9 + 8) = iVar10;
        }
        else {
          if ((iVar7 == 1) || (iVar7 == 2)) {
            iVar11 = (int)(char)((char)iVar7 * '\f');
            *(int *)(&stack0x0000005c + iVar11 + iVar6) = *(int *)(puVar13 + iVar7 * 4) + *piVar16;
            iVar10 = piVar16[2];
            puVar9 = &stack0x0000005c + iVar11 + iVar6;
            goto LAB_0002b31e;
          }
          if (iVar7 == 3) goto LAB_0002b2d0;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 4);
    }
    else if (cVar1 == '\x01') {
LAB_0002b32c:
      iVar7 = 0;
      do {
        if (iVar7 == 0) {
LAB_0002b344:
          iVar10 = (int)(char)((char)iVar7 * '\f');
          *(int *)(&stack0x00000064 + iVar10 + iVar6) = *(int *)(puVar13 + iVar7 * 4) + piVar15[2];
          piVar12 = (int *)(&stack0x0000005c + iVar10 + iVar6);
          iVar10 = *piVar15;
LAB_0002b392:
          *piVar12 = iVar10;
        }
        else {
          if ((iVar7 == 1) || (iVar7 == 2)) {
            iVar11 = (int)(char)((char)iVar7 * '\f');
            *(int *)(&stack0x00000064 + iVar11 + iVar6) = *(int *)(puVar13 + iVar7 * 4) + piVar16[2]
            ;
            iVar10 = *piVar16;
            piVar12 = (int *)(&stack0x0000005c + iVar11 + iVar6);
            goto LAB_0002b392;
          }
          if (iVar7 == 3) goto LAB_0002b344;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 4);
    }
    else {
      if (cVar1 == '\x02') goto LAB_0002b2b8;
      if (cVar1 == '\x03') goto LAB_0002b32c;
    }
    cVar1 = *(char *)((int)&local_20 + DAT_0002b3b2 + iVar6);
    if (cVar1 == '\0') {
      *(undefined2 *)(&stack0x00000000 + iVar6) = 0;
      *(undefined2 *)(&stack0x00000004 + iVar6) = DAT_0002b4ea;
      *(undefined2 *)(&stack0x00000008 + iVar6) = DAT_0002b4ec;
    }
    else {
      if (cVar1 == '\x01') {
        *(undefined2 *)(&stack0x00000000 + iVar6) = 0x3c;
        *(undefined2 *)(&stack0x00000004 + iVar6) = DAT_0002b4ea;
      }
      else {
        if (cVar1 != '\x02') goto LAB_0002b3ec;
        *(undefined2 *)(&stack0x00000000 + iVar6) = 0x78;
        *(undefined2 *)(&stack0x00000004 + iVar6) = DAT_0002b4ea;
      }
      *(undefined2 *)(&stack0x00000008 + iVar6) = DAT_0002b4ec;
    }
LAB_0002b3ec:
    *(undefined4 *)((int)aiStack48 + iVar6 + 0xc) = 0xc;
    *(undefined4 *)((int)aiStack48 + iVar6 + 8) =
         *(undefined4 *)((int)aiStack48 + DAT_0002b4ee + iVar6 + 0xc);
    iVar7 = (*DAT_0002b4fc)();
    *(int *)((int)aiStack48 + iVar6 + 4) =
         (int)*(short *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0002b4f0) + 4) +
         (int)*(short *)(&stack0x00000008 + iVar6);
    *(int *)((int)aiStack48 + iVar6) = (int)*(short *)(&stack0x00000004 + iVar6);
    iVar7 = (*DAT_0002b4fc)();
    (*DAT_0002b500)((int)aiStack48 + DAT_0002b4f2 + iVar6,0,
                    (int)*(short *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) +
                                            (int)DAT_0002b4f0) + 4) +
                    (int)*(short *)(&stack0x00000000 + iVar6),
                    *(undefined4 *)((int)aiStack48 + iVar6));
    iVar14 = iVar14 + 1;
  } while( true );
}



int FUN_0002b458(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  iVar5 = (*DAT_0002b508)(param_1,DAT_0002b504,0x3c);
  pcVar4 = DAT_0002b50c;
  if (iVar5 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar5 + 0x30) = param_2;
  uVar6 = (*DAT_0002b510)();
  uVar7 = (*pcVar4)(uVar6 >> 0x10,DAT_0002b514);
  pcVar3 = DAT_0002b4fc;
  uVar2 = DAT_0002b4f6;
  *(undefined4 *)(iVar5 + 0x38) = uVar7;
  *(undefined *)(iVar5 + 0x34) = 0;
  *(undefined4 *)(iVar5 + 0x24) = param_5;
  *(undefined4 *)(iVar5 + 0x28) = param_6;
  *(undefined4 *)(iVar5 + 0x2c) = param_7;
  local_24 = *(int *)(iVar5 + 0x24);
  local_20 = *(int *)(iVar5 + 0x28);
  local_1c = *(int *)(iVar5 + 0x2c);
  iVar8 = (*pcVar3)();
  cVar1 = *(char *)((int)DAT_0002b4f8 + *(int *)(*(int *)(iVar8 + 0x10) + 4));
  if (cVar1 == '\0') {
LAB_0002b518:
    iVar8 = (*pcVar4)(*(undefined4 *)
                       ((short)((ushort)((uint)*(undefined4 *)(iVar5 + 0x38) >> 0x10) & uVar2) * 4 +
                       DAT_0002b660),*(undefined4 *)(iVar5 + 0x30));
    local_24 = local_24 + iVar8;
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') goto LAB_0002b518;
      if (cVar1 != '\x03') goto LAB_0002b564;
    }
    iVar8 = (*pcVar4)(*(undefined4 *)
                       ((short)((ushort)((uint)*(undefined4 *)(iVar5 + 0x38) >> 0x10) & uVar2) * 4 +
                       DAT_0002b660),*(undefined4 *)(iVar5 + 0x30));
    local_1c = local_1c + iVar8;
  }
  iVar8 = (*pcVar4)(*(undefined4 *)
                     ((short)((ushort)((uint)*(undefined4 *)(iVar5 + 0x38) >> 0x10) & uVar2) * 4 +
                     DAT_0002b664),*(undefined4 *)(iVar5 + 0x30));
  local_20 = local_20 + iVar8;
LAB_0002b564:
  iVar8 = (*pcVar3)();
  local_24 = local_24 - *(int *)(*(int *)(*(int *)(iVar8 + 0x10) + 4) + (int)DAT_0002b656);
  iVar8 = (*pcVar3)();
  local_20 = local_20 - *(int *)(*(int *)(*(int *)(iVar8 + 0x10) + 4) + (int)DAT_0002b658);
  iVar8 = (*pcVar3)();
  uVar7 = DAT_0002b66c;
  local_1c = local_1c - *(int *)(*(int *)(*(int *)(iVar8 + 0x10) + 4) + (int)DAT_0002b65a);
  *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(*(int *)(*DAT_0002b668 + 0xc) + 4);
  (*DAT_0002b670)(iVar5 + 8,iVar5,&local_24,(int)*(short *)(*(int *)(iVar5 + 4) + 4),uVar7);
  return iVar5;
}



void FUN_0002b720(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0002b7d4;
  iVar2 = DAT_0002b7d0;
  *(ushort *)(*(int *)(DAT_0002b7d0 + 4) + 0x20) =
       *(ushort *)(*(int *)(DAT_0002b7d0 + 4) + 0x20) & 0xfffe;
  *(undefined4 *)(iVar2 + 0x14) = 1;
  *(undefined *)(iVar1 + 0x4d) = 6;
  if (*(char *)(iVar1 + 0x4c) < '\a') {
    iVar2 = iVar2 + 0x20;
    *(undefined2 *)(iVar2 + DAT_0002b7b8) = 0x4a;
    *(undefined2 *)(iVar2 + DAT_0002b7ba) = 0x4a;
  }
  (*DAT_0002b7e0)(iVar1,DAT_0002b7dc,DAT_0002b7d8,10);
  *(undefined *)(iVar1 + 0x4d) = 5;
  return;
}



void FUN_0002b76c(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0002b7d4;
  iVar2 = DAT_0002b7d0;
  *(ushort *)(*(int *)(DAT_0002b7d0 + 4) + 0x20) =
       *(ushort *)(*(int *)(DAT_0002b7d0 + 4) + 0x20) | 1;
  *(undefined4 *)(iVar2 + 0x14) = 1;
  *(undefined *)(iVar1 + 0x4d) = 6;
  if (*(char *)(iVar1 + 0x4c) < '\a') {
    iVar2 = iVar2 + 0x20;
    *(undefined2 *)(iVar2 + DAT_0002b7b8) = 0x4a;
    *(undefined2 *)(iVar2 + DAT_0002b7ba) = 0x4a;
  }
  (*DAT_0002b7e0)(iVar1,DAT_0002b7d8,DAT_0002b7dc,10);
  *(undefined *)(iVar1 + 0x4d) = 5;
  return;
}



int FUN_0002c5a4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*DAT_0002c648)(param_1,DAT_0002c644,0x7c);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 8) = param_1;
    *(undefined4 *)(iVar1 + 0x68) = param_2;
  }
  return iVar1;
}



uint FUN_0002c866(int *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  
  uVar2 = (int)*(short *)(param_1 + 0x18) & 0xffff;
  if (uVar2 == 0) {
    iVar3 = (*DAT_0002c94c)();
    *param_1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0002c940);
    iVar5 = *param_1;
    iVar3 = param_1[2];
    iVar3 = (*DAT_0002c950)(param_1,param_1 + 4,0,iVar5,(int)*(short *)(iVar3 + 0x2c),
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
    param_1[-3] = DAT_0002c954;
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
                    // WARNING: Could not recover jumptable at 0x0002c920. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar2 = (*DAT_0002c958)(param_1 + 4);
  return uVar2;
}



void FUN_0002c95c(int param_1,short param_2)

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
  
  pcVar2 = DAT_0002ca60;
  pcVar1 = DAT_0002ca5c;
  if ((param_1 != 0) && ((DAT_0002ca58 & *(uint *)(param_1 + 0x50)) == 0)) {
    piVar3 = (int *)(*DAT_0002ca60)(param_1);
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
    if (*(char *)((int)DAT_0002ca52 + *(int *)(*(int *)(iVar4 + 0x10) + 4)) == '\x01') {
      iVar4 = (int)param_2;
    }
    else {
      iVar4 = (*DAT_0002ca64)((int)param_2);
    }
    iVar5 = (*pcVar1)();
    if (*(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x10) + 0x1d) != '\0') {
      iVar4 = (*DAT_0002ca64)((int)DAT_0002ca54);
    }
    sVar7 = (*DAT_0002ca68)(param_1,iVar4,2);
    iVar4 = (int)DAT_0002ca56;
    uVar6 = (*pcVar2)(param_1);
    (*DAT_0002ca6c)(param_1,(int)sVar7,uVar6,3,iVar8,iVar9,iVar10,iVar4);
  }
  return;
}



void FUN_0002ca70(short param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  pcVar1 = DAT_0002cb50;
  iVar2 = (*DAT_0002cb50)();
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
  iVar3 = (int)DAT_0002cb4c;
  iVar2 = (*pcVar1)();
  iVar4 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
  iVar2 = (*pcVar1)();
  (*DAT_0002cb54)((int)DAT_0002cb4e + *(int *)(*(int *)(iVar2 + 0x10) + 0x18),(int)param_1,iVar4 + 8
                  ,2,iVar5,iVar6,iVar7,iVar3);
  return;
}



undefined4 FUN_0002cb14(void)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  pcVar1 = DAT_0002cb50;
  piVar3 = DAT_0002cb58 + 2;
  piVar4 = DAT_0002cb58;
  if (DAT_0002cb58 < piVar3) {
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



void FUN_0002e482(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0002e530;
  iVar2 = DAT_0002e52c;
  *(ushort *)(*(int *)(DAT_0002e52c + 4) + 0x20) =
       *(ushort *)(*(int *)(DAT_0002e52c + 4) + 0x20) & 0xfffe;
  *(undefined4 *)(iVar2 + 0x14) = 1;
  *(undefined *)(iVar1 + 0x4d) = 6;
  if (*(char *)(iVar1 + 0x4c) < '\a') {
    iVar2 = iVar2 + 0x20;
    *(undefined2 *)(iVar2 + DAT_0002e51e) = 0x4a;
    *(undefined2 *)(iVar2 + DAT_0002e520) = 0x4a;
  }
  (*DAT_0002e53c)(iVar1,DAT_0002e538,DAT_0002e534,10);
  *(undefined *)(iVar1 + 0x4d) = 5;
  return;
}



void FUN_0002e4ce(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0002e530;
  iVar2 = DAT_0002e52c;
  *(ushort *)(*(int *)(DAT_0002e52c + 4) + 0x20) =
       *(ushort *)(*(int *)(DAT_0002e52c + 4) + 0x20) | 1;
  *(undefined4 *)(iVar2 + 0x14) = 1;
  *(undefined *)(iVar1 + 0x4d) = 6;
  if (*(char *)(iVar1 + 0x4c) < '\a') {
    iVar2 = iVar2 + 0x20;
    *(undefined2 *)(iVar2 + DAT_0002e51e) = 0x4a;
    *(undefined2 *)(iVar2 + DAT_0002e520) = 0x4a;
  }
  (*DAT_0002e53c)(iVar1,DAT_0002e534,DAT_0002e538,10);
  *(undefined *)(iVar1 + 0x4d) = 5;
  return;
}



int FUN_0002e540(undefined4 param_1,undefined param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*DAT_0002e628)(param_1,DAT_0002e624,(int)DAT_0002e618);
  *(undefined *)(DAT_0002e61a + iVar1) = param_2;
  iVar2 = (int)DAT_0002e61c;
  *(undefined4 *)(iVar1 + iVar2) = param_1;
  *(undefined4 *)(iVar1 + iVar2 + 0x20) = 0;
  *(undefined2 *)(iVar1 + iVar2 + 0x12) = 0;
  return iVar1;
}



// WARNING: Could not reconcile some variable overlaps

uint FUN_0002e748(int *param_1)

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
  
  pcVar1 = DAT_0002e7c4;
  if (*(char *)(*(int *)((int)param_1 + (int)DAT_0002e7b2) + 0x57) == '\x03') {
    piVar12 = &local_38;
    iVar5 = (*DAT_0002e7c4)();
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
    iVar5 = (*DAT_0002e7c4)();
    *piVar12 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + 8);
    piVar12 = &iStack52;
    iVar5 = (*pcVar1)();
    *piVar12 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + 0xc);
    piVar12 = &iStack48;
    iVar5 = (*pcVar1)();
    *piVar12 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + 0x10);
  }
  pcVar3 = DAT_0002e838;
  uVar9 = DAT_0002e834;
  pcVar2 = DAT_0002e830;
  uVar6 = (int)*(char *)((int)param_1 + (int)DAT_0002e82c) & 0xff;
  if (uVar6 == 0) {
    iVar5 = (int)DAT_0002e9f2;
    *(undefined4 *)
     (((int)*(char *)((int)param_1 + iVar5 + 0x16) & 0xffU) * 0x2c +
     **(int **)((int)param_1 + iVar5)) = 0;
    local_2c = *(int *)(((int)*(char *)((int)param_1 + iVar5 + 0x16) & 0xffU) * 0x2c +
                        **(int **)((int)param_1 + iVar5) + 0x1c) + local_38;
    iStack40 = *(int *)(((int)*(char *)((int)param_1 + DAT_0002e9f2 + 0x16) & 0xffU) * 0x2c +
                        **(int **)((int)param_1 + (int)DAT_0002e9f2) + 0x20) + iStack52;
    iStack36 = *(int *)(((int)*(char *)((int)param_1 + DAT_0002e9f2 + 0x16) & 0xffU) * 0x2c +
                        **(int **)((int)param_1 + (int)DAT_0002e9f2) + 0x24) + iStack48;
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
    uVar6 = (*DAT_0002e9f8)();
    (*pcVar3)(uVar6 >> 0x10,DAT_0002e9fc);
    iVar5 = (*pcVar3)(*(undefined4 *)(DAT_0002ea00 + (short)(extraout_var & DAT_0002e9f4) * 4),
                      DAT_0002ea04);
    pcVar4 = DAT_0002e9f8;
    *piVar12 = iVar5;
    uVar6 = (*pcVar4)();
    (*pcVar3)(uVar6 >> 0x10,DAT_0002e9fc);
    uVar7 = (*pcVar3)(*(undefined4 *)(DAT_0002ea08 + (short)(extraout_var_00 & DAT_0002e9f4) * 4),
                      DAT_0002ea04);
    piVar12 = &iStack60;
    uVar6 = (*DAT_0002e9f8)();
    (*pcVar3)(uVar6 >> 0x10,DAT_0002e9fc);
    iVar5 = (*pcVar3)(*(undefined4 *)(DAT_0002ea00 + (short)(extraout_var_01 & DAT_0002e9f4) * 4),
                      uVar7);
    *piVar12 = iVar5;
    piVar12 = &local_44;
    uVar6 = (*DAT_0002e9f8)();
    (*pcVar3)(uVar6 >> 0x10,DAT_0002e9fc);
    iVar5 = (*pcVar3)(*(undefined4 *)(DAT_0002ea08 + (short)(extraout_var_02 & DAT_0002e9f4) * 4),
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
    iVar8 = (int)DAT_0002e9f2;
    *param_1 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0002e9f6);
    iVar10 = *param_1;
    uStack100 = (int)*(char *)(*(int *)((int)param_1 + iVar8) + 0x57) & 0xff;
    iVar5 = uStack100 * 4;
    iVar5 = (*DAT_0002eb8c)(param_1,param_1 + 0x16,0,iVar10,(int)*(short *)(iVar5 + DAT_0002eb88),
                            *(undefined4 *)(*(short *)(uStack100 * 2 + DAT_0002eb84) + iVar10),
                            *(undefined4 *)(iVar10 + *(short *)(iVar5 + DAT_0002eb80)),0,0,iVar10,
                            iVar5);
    if ((iVar5 == 0) && (param_1 != (int *)0x0)) {
      param_1[-1] = param_1[-1] | 1;
    }
    iStack92 = 0;
    sVar11 = 0;
    do {
      iVar8 = *param_1;
      uVar6 = (int)*(char *)(*(int *)((int)param_1 + (int)DAT_0002eb74) + 0x57) & 0xff;
      iVar5 = uVar6 * 4;
      iVar5 = (*DAT_0002eb8c)(param_1,(int)param_1 + (int)uStack100._0_2_ + (int)DAT_0002eb76 + 0x18
                              ,0,iVar8,(int)*(short *)(iVar5 + DAT_0002eb98),
                              *(undefined4 *)(*(short *)(uVar6 * 2 + DAT_0002eb94) + iVar8),
                              *(undefined4 *)(iVar8 + *(short *)(iVar5 + DAT_0002eb90)),0,0);
      if ((iVar5 == 0) && (param_1 != (int *)0x0)) {
        param_1[-1] = param_1[-1] | 1;
      }
      (*pcVar2)((int)param_1 + (int)sVar11 + (int)DAT_0002eb76 + 0x18);
      iStack92 = iStack92 + 1;
      sVar11 = sVar11 + 0x68;
      uStack100 = (uint)(ushort)(uStack100._0_2_ + 0x68) << 0x10;
    } while (iStack92 < 3);
    param_1[-3] = DAT_0002eb9c;
    (*DAT_0002eba0)(0x11);
    iVar5 = (int)DAT_0002eb78;
    *(undefined2 *)((int)param_1 + iVar5) = 0;
    iVar5 = iVar5 + 3;
    *(char *)((int)param_1 + iVar5) = *(char *)((int)param_1 + iVar5) + '\x01';
  }
  else if (uVar6 != 1) {
    if (uVar6 != 2) {
      return uVar6;
    }
    iVar5 = (*pcVar1)();
    param_1[8] = param_1[8] + *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0002ee12);
    iVar5 = (*pcVar1)();
    param_1[9] = param_1[9] + *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0002ee14);
    iVar5 = (*pcVar1)();
    param_1[10] = param_1[10] + *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0002ee16);
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
    goto LAB_0002ed7a;
  }
  *(short *)((int)param_1 + (int)DAT_0002eb78) = *(short *)((int)param_1 + (int)DAT_0002eb78) + 1;
  iVar5 = (*pcVar1)();
  param_1[8] = param_1[8] + *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0002eb7a);
  iVar5 = (*pcVar1)();
  param_1[9] = param_1[9] + *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0002eb7c);
  iVar5 = (*pcVar1)();
  param_1[10] = param_1[10] + *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0002eb7e);
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
  if (iVar5 <= (int)((int)*(short *)((int)param_1 + (int)DAT_0002ec7c) & 0xffffU)) {
    (*DAT_0002ec88)(param_1 + 0x16,
                    *(undefined4 *)
                     ((int)*(short *)(((int)*(char *)(*(int *)((int)param_1 + (int)DAT_0002ec7e) +
                                                     0x57) & 0xffU) * 2 + DAT_0002ec84) + *param_1))
    ;
    iVar5 = (int)DAT_0002ec80;
    *(char *)((int)param_1 + iVar5) = *(char *)((int)param_1 + iVar5) + '\x01';
    *(undefined4 *)
     (((int)*(char *)((int)param_1 + (iVar5 - 1U)) & 0xffU) * 0x2c +
     **(int **)((int)param_1 + iVar5 + -0x17)) = 1;
    return iVar5 - 1U;
  }
LAB_0002ed7a:
  uVar9 = (*pcVar2)(param_1 + 0x16);
  return uVar9;
}



uint FUN_0002ed94(int param_1)

{
  char cVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined4 uVar6;
  ushort extraout_var;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  short sVar13;
  short *psVar12;
  short sVar14;
  int iVar15;
  short sVar16;
  short sVar17;
  uint *puVar18;
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
  
  pcVar2 = DAT_0002ee1c;
  iVar7 = (*DAT_0002ee1c)();
  *(int *)(param_1 + 0x20) =
       *(int *)(param_1 + 0x20) + *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0002ee12)
  ;
  iVar7 = (*pcVar2)();
  *(int *)(param_1 + 0x24) =
       *(int *)(param_1 + 0x24) + *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0002ee14)
  ;
  iVar7 = (*pcVar2)();
  *(int *)(param_1 + 0x28) =
       *(int *)(param_1 + 0x28) + *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0002ee16)
  ;
  (*DAT_0002ee20)(param_1 + 0x58);
  pcVar3 = DAT_0002ee24;
  iVar7 = (int)DAT_0002ee18;
  uVar8 = (int)*(char *)(param_1 + iVar7 + 0x17) & 0xff;
  sVar17 = (short)*(undefined4 *)
                   (**(int **)(param_1 + iVar7) +
                    ((int)*(char *)(param_1 + iVar7 + 0x16) & 0xffU) * 0x2c + 0x28);
  if (uVar8 == 0) {
    iVar7 = (int)DAT_0002eef4;
    *(int *)(param_1 + 0x50) = (int)DAT_0002eef2;
    pcVar4 = DAT_0002ef00;
    *(int *)(param_1 + 0x54) = iVar7;
    uVar8 = (*pcVar4)();
    (*pcVar3)(uVar8 >> 0x10,DAT_0002ef04);
    iVar15 = (int)DAT_0002eef6;
    iVar11 = (short)(extraout_var & DAT_0002eef8) * 4;
    iVar7 = (*pcVar2)();
    cVar1 = *(char *)((int)DAT_0002eefa + *(int *)(*(int *)(iVar7 + 0x10) + 4));
    if (cVar1 == '\0') {
LAB_0002ee70:
      local_2c = (*pcVar3)(*(undefined4 *)(iVar11 + DAT_0002ef08),iVar15);
      iStack40 = (*pcVar3)(*(undefined4 *)(iVar11 + DAT_0002ef0c),iVar15);
      iStack36 = 0;
    }
    else if (cVar1 == '\x01') {
LAB_0002ee8a:
      iStack36 = (*pcVar3)(*(undefined4 *)(iVar11 + DAT_0002ef08),iVar15);
      iStack40 = (*pcVar3)(*(undefined4 *)(iVar11 + DAT_0002ef0c),iVar15);
      local_2c = 0;
    }
    else {
      if (cVar1 == '\x02') goto LAB_0002ee70;
      if (cVar1 == '\x03') goto LAB_0002ee8a;
    }
    iVar7 = (int)DAT_0002eefc;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + local_2c;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iStack40;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iStack36;
    if (*(char *)(*(int *)(param_1 + iVar7) + 0x57) == '\x03') {
      iVar7 = (int)DAT_0002eefc;
      *(undefined4 *)(param_1 + iVar7 + 4) = *(undefined4 *)(*(int *)(param_1 + iVar7) + 0x20);
      *(undefined4 *)(param_1 + iVar7 + 8) = *(undefined4 *)(*(int *)(param_1 + iVar7) + 0x24);
      *(undefined4 *)(param_1 + iVar7 + 0xc) = *(undefined4 *)(*(int *)(param_1 + iVar7) + 0x28);
    }
    else if ((((*(short *)(*(int *)(param_1 + DAT_0002f078) + 0x5e) == 0) ||
              (iVar7 = (*DAT_0002f088)(),
              *(int *)(*(int *)(sVar17 * 4 + *(int *)(*(int *)(iVar7 + 0x10) + 0xc)) + 4) == 0)) ||
             (iVar7 = (*DAT_0002f088)(),
             (DAT_0002f08c &
             *(uint *)(*(int *)(*(int *)(sVar17 * 4 + *(int *)(*(int *)(iVar7 + 0x10) + 0xc)) + 4) +
                      0x50)) != 0)) ||
            (iVar7 = (*DAT_0002f088)(),
            **(char **)(sVar17 * 4 + *(int *)(*(int *)(iVar7 + 0x10) + 0xc)) < '\x01')) {
      iVar7 = (int)DAT_0002f078;
      *(undefined4 *)(param_1 + iVar7 + 4) = *(undefined4 *)(*(int *)(param_1 + iVar7) + 0x20);
      *(undefined4 *)(param_1 + iVar7 + 8) = *(undefined4 *)(*(int *)(param_1 + iVar7) + 0x24);
      *(undefined4 *)(param_1 + iVar7 + 0xc) = *(undefined4 *)(*(int *)(param_1 + iVar7) + 0x28);
    }
    sVar16 = 0;
    iStack72 = 0;
    sVar14 = 0;
    sVar13 = 0;
    do {
      iVar7 = (int)sVar13;
      *(undefined4 *)(DAT_0002f07a + param_1 + iVar7) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(DAT_0002f07a + param_1 + iVar7 + 4) = *(undefined4 *)(param_1 + 0x24);
      iVar15 = (int)sVar14;
      *(undefined4 *)(DAT_0002f07a + param_1 + iVar7 + 8) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(DAT_0002f07a + param_1 + iVar15 + 0xc) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(DAT_0002f07a + param_1 + iVar15 + 0x10) = *(undefined4 *)(param_1 + 0x48);
      iVar11 = (int)sVar16;
      *(undefined4 *)(iVar15 + DAT_0002f07a + param_1 + 0x14) = *(undefined4 *)(param_1 + 0x4c);
      piVar10 = (int *)(iVar11 + DAT_0002f07a + param_1);
      iVar7 = (*pcVar2)();
      *piVar10 = *piVar10 - *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0002f07c);
      piVar10 = (int *)(DAT_0002f07a + param_1 + iVar11 + 4);
      iVar7 = (*pcVar2)();
      *piVar10 = *piVar10 - *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0002f07e);
      piVar10 = (int *)(DAT_0002f07a + param_1 + iVar11 + 8);
      iVar7 = (*pcVar2)();
      sVar16 = sVar16 + 0x68;
      *piVar10 = *piVar10 - *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0002f080);
      pcVar4 = DAT_0002f090;
      iStack72 = iStack72 + 1;
      sVar13 = sVar13 + 0x68;
      sVar14 = sVar14 + 0x68;
    } while (iStack72 < 3);
    iVar7 = (int)DAT_0002f082;
    *(undefined4 *)(param_1 + iVar7) = 1;
    iVar7 = iVar7 + -9;
    *(char *)(param_1 + iVar7) = *(char *)(param_1 + iVar7) + '\x01';
    (*pcVar4)(0x14);
    *(undefined2 *)(param_1 + DAT_0002f084) = 0x4b;
  }
  else if (uVar8 != 1) {
    return uVar8;
  }
  sVar13 = *(short *)(param_1 + DAT_0002f084);
  *(short *)(param_1 + DAT_0002f084) = sVar13 + -1;
  if (sVar13 < 0) {
    uVar8 = (uint)DAT_0002f086;
    *(char *)(param_1 + uVar8) = *(char *)(param_1 + uVar8) + '\x01';
    return uVar8;
  }
  if (*(char *)(*(int *)(param_1 + DAT_0002f164) + 0x57) == '\x03') {
    iVar7 = (int)DAT_0002f164;
    *(undefined4 *)(param_1 + iVar7 + 4) = *(undefined4 *)(*(int *)(param_1 + iVar7) + 0x20);
    *(undefined4 *)(param_1 + iVar7 + 8) = *(undefined4 *)(*(int *)(param_1 + iVar7) + 0x24);
    *(undefined4 *)(param_1 + iVar7 + 0xc) = *(undefined4 *)(*(int *)(param_1 + iVar7) + 0x28);
  }
  else {
    if (((*(short *)(*(int *)(param_1 + DAT_0002f164) + 0x5e) == 0) ||
        (iVar7 = (*DAT_0002f170)(),
        *(int *)(*(int *)(sVar17 * 4 + *(int *)(*(int *)(iVar7 + 0x10) + 0xc)) + 4) == 0)) ||
       ((iVar7 = (*DAT_0002f170)(),
        (DAT_0002f174 &
        *(uint *)(*(int *)(*(int *)(sVar17 * 4 + *(int *)(*(int *)(iVar7 + 0x10) + 0xc)) + 4) + 0x50
                 )) != 0 ||
        (iVar7 = (*DAT_0002f170)(),
        **(char **)(sVar17 * 4 + *(int *)(*(int *)(iVar7 + 0x10) + 0xc)) < '\x01')))) {
      *(undefined4 *)(param_1 + DAT_0002f166) = 1;
    }
    pcVar4 = DAT_0002f178;
    if (*(int *)(param_1 + DAT_0002f166) == 0) {
      iVar7 = (*pcVar2)();
      iVar11 = sVar17 * 4;
      puVar9 = (undefined4 *)
               (*pcVar4)(*(undefined4 *)
                          (*(int *)(iVar11 + *(int *)(*(int *)(iVar7 + 0x10) + 0xc)) + 4));
      *(undefined4 *)(param_1 + DAT_0002f168) = *puVar9;
      iVar7 = (*pcVar2)();
      iVar7 = (*pcVar4)(*(undefined4 *)
                         (*(int *)(iVar11 + *(int *)(*(int *)(iVar7 + 0x10) + 0xc)) + 4));
      *(undefined4 *)(param_1 + DAT_0002f16a) = *(undefined4 *)(iVar7 + 4);
      iVar7 = (*pcVar2)();
      iVar7 = (*pcVar4)(*(undefined4 *)
                         (*(int *)(iVar11 + *(int *)(*(int *)(iVar7 + 0x10) + 0xc)) + 4));
      *(undefined4 *)(param_1 + DAT_0002f16c) = *(undefined4 *)(iVar7 + 8);
    }
    else {
      piVar10 = (int *)(DAT_0002f326 + param_1);
      iVar7 = (*pcVar2)();
      iVar11 = (int)DAT_0002f328;
      *piVar10 = *piVar10 + *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + iVar11);
      piVar10 = (int *)(iVar11 + 0x48 + param_1);
      iVar7 = (*pcVar2)();
      iVar11 = (int)DAT_0002f32a;
      *piVar10 = *piVar10 + *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + iVar11);
      piVar10 = (int *)(iVar11 + 0x48 + param_1);
      iVar7 = (*pcVar2)();
      *piVar10 = *piVar10 + *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_0002f32c);
    }
  }
  if (*(int *)(param_1 + 0x50) < (int)DAT_0002f32e) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (int)DAT_0002f330;
  }
  if (*(int *)(param_1 + 0x54) < (int)DAT_0002f332) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x70;
  }
  iVar7 = (int)DAT_0002f326;
  local_44 = *(int *)(param_1 + iVar7) - *(int *)(param_1 + 0x20);
  uStack64 = *(int *)(param_1 + iVar7 + 4) - *(int *)(param_1 + 0x24);
  uStack60 = *(int *)(param_1 + iVar7 + 8) - *(int *)(param_1 + 0x28);
  puVar18 = &local_44;
  uVar8 = (*pcVar3)(local_44,*(undefined4 *)(param_1 + 0x54));
  *puVar18 = uVar8;
  puVar18 = &uStack64;
  uVar8 = (*pcVar3)(uStack64,*(undefined4 *)(param_1 + 0x54));
  *puVar18 = uVar8;
  puVar18 = &uStack60;
  uVar8 = (*pcVar3)(uStack60,*(undefined4 *)(param_1 + 0x54));
  *puVar18 = uVar8;
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + local_44;
  *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uStack64;
  *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + uStack60;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x10);
  puVar18 = &local_44;
  uVar8 = (*pcVar3)(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x50));
  *puVar18 = uVar8;
  puVar18 = &uStack64;
  uVar8 = (*pcVar3)(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x50));
  *puVar18 = uVar8;
  puVar18 = &uStack60;
  uVar8 = (*pcVar3)(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x50));
  *puVar18 = uVar8;
  *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - local_44;
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - uStack64;
  *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - uStack60;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  iVar7 = (*pcVar2)();
  cVar1 = *(char *)((int)DAT_0002f334 + *(int *)(*(int *)(iVar7 + 0x10) + 4));
  if (cVar1 == '\0') {
LAB_0002f34e:
    iStack48 = (*DAT_0002f3d8)(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x14));
    local_38 = 0;
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') goto LAB_0002f34e;
      if (cVar1 != '\x03') goto LAB_0002f36c;
    }
    local_38 = (*DAT_0002f3d8)(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    iStack48 = 0;
  }
  iStack52 = 0;
LAB_0002f36c:
  puVar5 = PTR_LAB_0002f5a8;
  local_44 = local_38 - *(int *)(param_1 + 0x44);
  uStack64 = iStack52 - *(int *)(param_1 + 0x48);
  uStack60 = iStack48 - *(int *)(param_1 + 0x4c);
  if ((DAT_0002f3dc & local_44) == 0) {
    local_44 = DAT_0002f3e4 & local_44;
  }
  else {
    local_44 = DAT_0002f3e0 | local_44;
  }
  if ((DAT_0002f3dc & uStack64) == 0) {
    uStack64 = DAT_0002f3e4 & uStack64;
  }
  else {
    uStack64 = DAT_0002f3e0 | uStack64;
  }
  if ((uStack60 & DAT_0002f3dc) == 0) {
    uStack60 = DAT_0002f5a4 & uStack60;
  }
  else {
    uStack60 = DAT_0002f3e0 | uStack60;
  }
  puVar18 = &local_44;
  uVar8 = (*pcVar3)(local_44,PTR_LAB_0002f5a8);
  *puVar18 = uVar8;
  puVar18 = &uStack64;
  uVar8 = (*pcVar3)(uStack64,puVar5);
  *puVar18 = uVar8;
  puVar18 = &uStack60;
  uVar8 = (*pcVar3)(uStack60,puVar5);
  *puVar18 = uVar8;
  *(uint *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + local_44;
  *(uint *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + uStack64;
  *(uint *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + uStack60;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x34);
  uVar6 = DAT_0002f5ac;
  puVar18 = &local_44;
  uVar8 = (*pcVar3)(*(undefined4 *)(param_1 + 0x38),DAT_0002f5ac);
  *puVar18 = uVar8;
  puVar18 = &uStack64;
  uVar8 = (*pcVar3)(*(undefined4 *)(param_1 + 0x3c),uVar6);
  *puVar18 = uVar8;
  puVar18 = &uStack60;
  uVar8 = (*pcVar3)(*(undefined4 *)(param_1 + 0x40),uVar6);
  *puVar18 = uVar8;
  *(uint *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - local_44;
  *(uint *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - uStack64;
  *(uint *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) - uStack60;
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x3c);
  uVar8 = DAT_0002f5a4;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & uVar8;
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & uVar8;
  *(uint *)(param_1 + 0x4c) = uVar8 & *(uint *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  iVar7 = (int)DAT_0002f59c;
  local_2c = *(int *)(param_1 + 0x20) - *(int *)(param_1 + iVar7);
  iStack40 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + iVar7 + 4);
  iStack36 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + iVar7 + 8);
  iVar7 = (*pcVar3)(local_2c,local_2c);
  iVar11 = (*pcVar3)(iStack40,iStack40);
  iVar11 = iVar11 + iVar7;
  iVar7 = (*pcVar3)(iStack36,iStack36);
  iVar7 = iVar7 + iVar11;
  uVar8 = (*pcVar3)((int)DAT_0002f59e);
  if (iVar7 < (int)uVar8) {
    iVar7 = (int)DAT_0002f5a0;
    iVar11 = sVar17 * 0x10;
    psVar12 = (short *)(*(int *)(*(int *)(param_1 + iVar7) + 4) + iVar11);
    *psVar12 = *psVar12 + 1;
    uVar6 = DAT_0002f6e8;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + iVar7) + 4) + iVar11 + 4) =
         *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + iVar7) + 4) + iVar11 + 8) =
         *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + iVar7) + 4) + iVar11 + 0xc) =
         *(undefined4 *)(param_1 + 0x1c);
    (*DAT_0002f6ec)(param_1,0x4a,DAT_0002f6e4,uVar6,5,uVar6,DAT_0002f6e4,5);
    uVar8 = (uint)DAT_0002f6da;
    *(char *)(param_1 + uVar8) = *(char *)(param_1 + uVar8) + '\x01';
  }
  return uVar8;
}



void FUN_000315a4(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = (int *)(*DAT_000316c4)(param_1,DAT_000316c0,(int)DAT_000316ae);
  pcVar1 = DAT_000316cc;
  if (piVar2 != (int *)0x0) {
    iVar3 = (int)DAT_000316b0;
    iVar4 = (int)DAT_000316b2;
    *piVar2 = **(int **)(*DAT_000316c8 + 0xc);
    iVar5 = *piVar2;
    iVar3 = (*pcVar1)(piVar2,iVar4 + (int)piVar2,0,iVar5,4,*(undefined4 *)(iVar5 + iVar3 + 0xc),
                      *(undefined4 *)(iVar5 + iVar3),0,0);
    if ((iVar3 == 0) && (piVar2 != (int *)0x0)) {
      piVar2[-1] = piVar2[-1] | 1;
    }
    (*DAT_000316d0)((int)DAT_000316b2 + (int)piVar2);
    *(undefined4 *)((int)piVar2 + (int)DAT_000316b4) = param_2;
    (*DAT_000316d4)(0x11);
    iVar3 = (*DAT_000316d8)();
    if (((int)DAT_000316b6 & *(uint *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + (int)DAT_000316b8))
        == 0) {
      *(undefined *)((int)piVar2 + (int)DAT_000316ba) = 1;
    }
    else {
      *(undefined *)((int)piVar2 + (int)DAT_000316ba) = 0;
    }
  }
  return;
}



uint FUN_00032d9c(int *param_1)

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
  
  pcVar4 = DAT_00032ec0;
  pcVar3 = DAT_00032ebc;
  uVar2 = DAT_00032eaa;
  iVar19 = (int)DAT_00032eac;
  uVar6 = (int)*(char *)((int)param_1 + (int)DAT_00032eae) & 0xff;
  uVar20 = 0;
  if (uVar6 == 0) {
    if (*DAT_00032ec4 != 0) {
      return 0;
    }
    iVar12 = (*DAT_00032ec0)();
    uVar8 = DAT_00032ec8;
    iVar14 = (int)DAT_00032eb2;
    *param_1 = *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + (int)DAT_00032eb0);
    iVar12 = *param_1;
    iVar12 = (*DAT_00032ecc)(param_1,param_1 + 3,0,iVar12,4,*(undefined4 *)(iVar12 + DAT_00032eb4),
                             *(undefined4 *)(iVar12 + iVar14),0,uVar8);
    iVar14 = *param_1;
    uVar6 = (*DAT_00032ecc)(param_1,param_1 + 0x17,0,iVar14,8,*(undefined4 *)(iVar14 + DAT_00032eb8)
                            ,*(undefined4 *)(iVar14 + DAT_00032eb6),0,0);
    if ((iVar12 == 0) || (uVar6 == 0)) {
      if (param_1 == (int *)0x0) {
        return uVar6;
      }
      param_1[-1] = param_1[-1] | 1;
      return uVar6;
    }
    iVar12 = (int)DAT_00032eba;
    *(undefined4 *)((int)param_1 + iVar12) = 1;
    *(undefined4 *)((int)param_1 + iVar12 + 0x1c) = 1;
    *(undefined4 *)((int)param_1 + iVar12 + 0x20) = 1;
    *(undefined4 *)((int)param_1 + iVar12 + 0x14) = 1;
    iVar12 = (*pcVar4)();
    if ((DAT_00032ed0 & *(uint *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x18)) == 0) {
      iVar12 = (*pcVar4)();
      uVar6 = *(uint *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x18) & DAT_00032fbc;
    }
    else {
      iVar12 = (*pcVar4)();
      uVar6 = *(uint *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x18) | DAT_00032ed4;
    }
    if (DAT_00032fc0 < (int)uVar6) {
      iVar12 = (*pcVar4)();
      if ((DAT_00032fc4 & *(uint *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x18)) == 0) {
        iVar12 = (*pcVar4)();
        uVar6 = *(uint *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x18) & DAT_00032fbc;
      }
      else {
        iVar12 = (*pcVar4)();
        uVar6 = *(uint *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x18) | DAT_00032fc8;
      }
      if (((int)uVar6 < DAT_00032fcc) &&
         (iVar12 = (*pcVar4)(),
         *(char *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + (int)DAT_00032fb2) != '\0')) {
        *(undefined4 *)((int)param_1 + (int)DAT_00032fb4) = 1;
      }
    }
    iVar12 = (*pcVar4)();
    if (*(short *)(*(int *)(*(int *)(iVar12 + 0x10) + 0xc) + (int)DAT_00032fb6) != 0) {
      iVar12 = (*pcVar4)();
      uVar8 = (*DAT_00032fd0)(param_1,(int)*(short *)(*(int *)(*(int *)(iVar12 + 0x10) + 0xc) +
                                                     (int)DAT_00032fb6) << 2);
      *(undefined4 *)((int)DAT_00032fb8 + (int)param_1) = uVar8;
    }
    if ((*(int *)((int)param_1 + (int)DAT_00032fb8) == 0) ||
       (iVar12 = (*DAT_00032fd4)(),
       *(short *)(*(int *)(*(int *)(iVar12 + 0x10) + 0xc) + (int)DAT_00032fb6) == 0)) {
      *(undefined4 *)((int)param_1 + (int)DAT_00032fba) = 1;
    }
    else {
      for (local_64 = 0; iVar12 = (*pcVar4)(),
          local_64 < *(short *)(*(int *)(*(int *)(iVar12 + 0x10) + 0xc) + (int)DAT_00032fb6);
          local_64 = local_64 + 1) {
        *(int *)(local_64 * 4 + *(int *)((int)param_1 + (int)DAT_00032fb8)) = local_64;
      }
      for (local_64 = 0; iVar12 = (*pcVar4)(),
          local_64 < *(short *)(*(int *)(*(int *)(iVar12 + 0x10) + 0xc) + (int)DAT_0003315c);
          local_64 = local_64 + 1) {
        iVar12 = (*pcVar4)();
        iVar12 = *(short *)(*(int *)(*(int *)(iVar12 + 0x10) + 0xc) + (int)DAT_0003315c) - local_64;
        uVar6 = (*DAT_0003318c)();
        iVar12 = (*pcVar3)(uVar6 >> 0x10,iVar12);
        iVar14 = (int)DAT_0003315e;
        puVar17 = (undefined4 *)(local_64 * 4 + *(int *)((int)param_1 + (int)DAT_0003315e));
        iVar12 = (local_64 + iVar12) * 4;
        uVar8 = *puVar17;
        *puVar17 = *(undefined4 *)(*(int *)((int)param_1 + (int)DAT_0003315e) + iVar12);
        *(undefined4 *)(iVar12 + *(int *)((int)param_1 + iVar14)) = uVar8;
      }
    }
    iVar12 = (int)DAT_00033160;
    *(undefined4 *)((int)param_1 + iVar12) = 0;
    *(undefined4 *)((int)param_1 + iVar12 + -4) = 0;
    *(undefined4 *)((int)param_1 + iVar12 + -8) = 0;
    *(undefined4 *)((int)param_1 + iVar12 + 0xc) = 0;
    *(undefined4 *)((int)param_1 + iVar12 + 8) = 0;
    *(undefined4 *)((int)param_1 + iVar12 + 4) = 0;
    iVar12 = (*pcVar4)();
    *(undefined4 *)((int)param_1 + (int)DAT_00033162) =
         *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 8);
    iVar12 = (*pcVar4)();
    *(undefined4 *)((int)param_1 + (int)DAT_00033164) =
         *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0xc);
    iVar12 = (*pcVar4)();
    iVar14 = (int)DAT_00033166;
    *(undefined4 *)((int)param_1 + iVar14) =
         *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x10);
    *(undefined4 *)((int)param_1 + iVar14 + 0x30) = 0;
    *(undefined4 *)((int)param_1 + iVar14 + 0x2c) = 0;
    *(undefined4 *)((int)param_1 + iVar14 + 0x28) = 0;
    *(undefined4 *)((int)param_1 + iVar14 + 0x3c) = 0;
    *(undefined4 *)((int)param_1 + iVar14 + 0x38) = 0;
    *(undefined4 *)((int)param_1 + iVar14 + 0x34) = 0;
    iVar12 = (*pcVar4)();
    *(undefined4 *)((int)param_1 + (int)DAT_00033168) =
         *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x14);
    iVar12 = (*pcVar4)();
    *(undefined4 *)((int)param_1 + (int)DAT_0003316a) =
         *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x18);
    iVar12 = (*pcVar4)();
    *(undefined4 *)((int)param_1 + (int)DAT_0003316c) =
         *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x1c);
    iVar12 = (*pcVar4)();
    *(undefined4 *)((int)param_1 + (int)DAT_0003316e) =
         *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 8);
    iVar12 = (*pcVar4)();
    *(undefined4 *)((int)param_1 + (int)DAT_00033170) =
         *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0xc);
    iVar12 = (*pcVar4)();
    puVar16 = PTR_LAB_00033190;
    iVar14 = (int)DAT_00033172;
    *(undefined4 *)((int)param_1 + iVar14) =
         *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x10);
    iVar14 = iVar14 + -4;
    *(undefined **)((int)param_1 + iVar14) = puVar16 + *(int *)((int)param_1 + iVar14);
    iVar12 = (*pcVar4)();
    *(undefined4 *)((int)param_1 + (int)DAT_00033174) =
         *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x14);
    iVar12 = (*pcVar4)();
    *(undefined4 *)((int)param_1 + (int)DAT_00033176) =
         *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x18);
    iVar12 = (*pcVar4)();
    iVar14 = (int)DAT_0003317a;
    *(undefined4 *)((int)param_1 + (int)DAT_00033178) =
         *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x1c);
    iVar12 = (int)DAT_0003317c;
    *(int *)((int)param_1 + iVar12) = iVar14;
    iVar18 = (int)DAT_0003317e;
    *(undefined **)((int)param_1 + iVar12 + 4) = PTR_LAB_00033194;
    iVar14 = (int)DAT_00033180;
    *(int *)((int)param_1 + iVar12 + 8) = iVar18;
    *(int *)((int)param_1 + iVar12 + 0xc) = iVar14;
    if (*(int *)((int)param_1 + iVar12 + -0x24) == 0) {
      uVar8 = (*pcVar3)(*(undefined4 *)
                         ((short)((ushort)((uint)*(undefined4 *)((int)param_1 + (int)DAT_00033394)
                                          >> 0x10) & uVar2) * 4 + DAT_000333ac),iVar19);
      *(undefined4 *)((int)DAT_00033396 + (int)param_1) = uVar8;
      uVar8 = (*pcVar3)(*(undefined4 *)
                         ((short)((ushort)((uint)*(undefined4 *)((int)param_1 + (int)DAT_00033394)
                                          >> 0x10) & uVar2) * 4 + DAT_000333b0),iVar19);
      *(undefined4 *)((int)DAT_00033398 + (int)param_1) = uVar8;
      iVar12 = (int)DAT_0003339a;
      *(undefined4 *)((int)param_1 + iVar12) = 0;
      piVar9 = (int *)(iVar12 + -4 + (int)param_1);
      iVar12 = (*pcVar4)();
      piVar7 = (int *)((int)DAT_0003339a + (int)param_1);
      *piVar9 = *piVar9 + *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 8);
      iVar12 = (*pcVar4)();
      *piVar7 = *piVar7 + *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0xc);
      piVar9 = (int *)((int)DAT_00033398 + (int)param_1);
      iVar12 = (*pcVar4)();
      *piVar9 = *piVar9 + *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x18) + 0x10);
    }
    else {
      iVar12 = (*pcVar4)();
      *(undefined *)((int)param_1 + (int)DAT_00033184) =
           *(undefined *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + (int)DAT_00033182);
      iVar12 = (*pcVar4)();
      iVar14 = *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + 0xc);
      iVar12 = (*pcVar4)();
      iVar18 = *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + (int)DAT_00033186);
      iVar12 = (*pcVar4)();
      iVar18 = *(int *)(*(char *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + (int)DAT_00033188) * 0x20
                        + iVar18 + 0x1c);
      iVar12 = (*pcVar4)();
      *(int *)((int)DAT_000332aa + (int)param_1) =
           iVar14 + *(int *)((int)(char)(*(char *)((int)param_1 + (int)DAT_000332a8) * '\f') +
                            *(char *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + (int)DAT_000332a6) *
                            0x60 + iVar18);
      iVar12 = (*pcVar4)();
      iVar14 = *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + 0x10);
      iVar12 = (*pcVar4)();
      iVar18 = *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + (int)DAT_000332ac);
      iVar12 = (*pcVar4)();
      iVar18 = *(int *)(*(char *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + (int)DAT_000332a6) * 0x20
                        + iVar18 + 0x1c);
      iVar12 = (*pcVar4)();
      *(int *)((int)DAT_000332ae + (int)param_1) =
           iVar14 + *(int *)((int)(char)(*(char *)((int)param_1 + (int)DAT_000332a8) * '\f') +
                             *(char *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + (int)DAT_000332a6) *
                             0x60 + iVar18 + 4);
      iVar12 = (*pcVar4)();
      iVar14 = *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + 0x14);
      iVar12 = (*pcVar4)();
      iVar18 = *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + (int)DAT_000332ac);
      iVar12 = (*pcVar4)();
      iVar18 = *(int *)(*(char *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + (int)DAT_000332a6) * 0x20
                        + iVar18 + 0x1c);
      iVar12 = (*pcVar4)();
      *(int *)((int)DAT_000332b0 + (int)param_1) =
           iVar14 + *(int *)((int)(char)(*(char *)((int)param_1 + (int)DAT_000332a8) * '\f') +
                             *(char *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + (int)DAT_000332a6) *
                             0x60 + iVar18 + 8);
    }
    (*DAT_000333b4)();
    (*DAT_000333bc)(DAT_000333b8);
    (*DAT_000333c0)((int)DAT_00033396 + (int)param_1);
    (*DAT_000333c4)((int)DAT_0003339c + (int)param_1);
    (*DAT_000333c8)();
    *(undefined4 *)((int)param_1 + (int)DAT_0003339e) = 1;
    iVar12 = (int)DAT_000333a0;
    param_1[-3] = DAT_000333cc;
    *(char *)((int)param_1 + iVar12) = *(char *)((int)param_1 + iVar12) + '\x01';
  }
  else if (uVar6 != 1) {
    if (uVar6 == 2) {
      cVar10 = (*DAT_00033888)(param_1);
      if (cVar10 == '\x02') {
        *(undefined4 *)((int)param_1 + (int)DAT_00033872) = 0;
      }
      pcVar5 = DAT_0003388c;
      *(short *)((int)param_1 + (int)DAT_00033874) =
           *(short *)((int)param_1 + (int)DAT_00033874) + 1;
      (*pcVar5)(param_1);
      if ((*(int *)((int)param_1 + (int)DAT_00033876) == 0) ||
         (7 < *(ushort *)((int)param_1 + (int)DAT_00033874))) {
        *(undefined4 *)((int)param_1 + (int)DAT_00033a12) = 1;
      }
      else {
        local_2c = 0;
        iStack36 = (int)DAT_00033878;
        iStack40 = (int)DAT_0003387a;
        iVar19 = (int)DAT_0003387c;
        *(undefined4 *)((int)param_1 + iVar19) = *(undefined4 *)((int)param_1 + iVar19);
        *(int *)((int)param_1 + iVar19 + 4) = *(int *)((int)param_1 + iVar19 + 4) + iStack40;
        *(int *)((int)param_1 + iVar19 + 8) = *(int *)((int)param_1 + iVar19 + 8) + iStack36;
      }
      if ((0x1e < *(ushort *)((int)param_1 + (int)DAT_00033a14)) &&
         (*(int *)((int)param_1 + (int)DAT_00033a16) == 0)) {
        *(undefined4 *)((int)param_1 + (int)DAT_00033a16) = 1;
      }
      if (*(uint *)((int)param_1 + (int)DAT_00033a18) != 1) {
        return *(uint *)((int)param_1 + (int)DAT_00033a18);
      }
      uVar6 = (*DAT_00033a2c)(param_1);
      if ((uVar6 & 0xff) != 1) {
        return uVar6 & 0xff;
      }
      (*DAT_00033a30)(param_1,(int)DAT_00033a1a);
      if (*(int *)((int)param_1 + (int)DAT_00033a1c) == 0) {
        (*pcVar4)();
        uVar6 = (*DAT_00033a34)();
        (*pcVar3)(uVar6 >> 0x10,3);
        uVar11 = (*DAT_00033a38)();
        *(undefined *)((int)DAT_00033a20 + (int)param_1) = uVar11;
        iVar19 = (*pcVar4)();
        iVar12 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00033a22);
        iVar19 = (*pcVar4)();
        iVar12 = *(int *)(*(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00033a24) *
                          0x20 + iVar12 + 0x1c);
        iVar19 = (*pcVar4)();
        iVar19 = *(int *)((int)(char)(*(char *)((int)param_1 + (int)DAT_00033a20) * '\f') +
                         *(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00033a24) * 0x60
                         + iVar12);
        iVar12 = (*pcVar4)();
        *(int *)((int)param_1 + (int)DAT_00033a26) =
             iVar19 + *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + 0xc);
        iVar19 = (*pcVar4)();
        iVar12 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00033a22);
        iVar19 = (*pcVar4)();
        iVar12 = *(int *)(*(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00033a24) *
                          0x20 + iVar12 + 0x1c);
        iVar19 = (*pcVar4)();
        iVar19 = *(int *)((int)(char)(*(char *)((int)param_1 + (int)DAT_00033a20) * '\f') +
                          *(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00033a24) *
                          0x60 + iVar12 + 4);
        iVar12 = (*pcVar4)();
        *(int *)((int)param_1 + (int)DAT_00033a28) =
             iVar19 + *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + 0x10);
        iVar19 = (*pcVar4)();
        iVar12 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00033a22);
        iVar19 = (*pcVar4)();
        iVar12 = *(int *)(*(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00033a24) *
                          0x20 + iVar12 + 0x1c);
        iVar19 = (*pcVar4)();
        iVar19 = *(int *)((int)(char)(*(char *)((int)param_1 + (int)DAT_00033b96) * '\f') +
                          *(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00033a24) *
                          0x60 + iVar12 + 8);
        iVar12 = (*pcVar4)();
        pcVar3 = DAT_00033bac;
        *(int *)((int)param_1 + (int)DAT_00033b98) =
             iVar19 + *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 4) + 0x14);
        (*pcVar3)();
      }
      iVar19 = (int)DAT_00033b9a;
      *(undefined2 *)((int)param_1 + iVar19) = 0;
      uVar6 = iVar19 - 3;
      *(char *)((int)param_1 + uVar6) = *(char *)((int)param_1 + uVar6) + '\x01';
      return uVar6;
    }
    if (uVar6 != 3) {
      return uVar6;
    }
    piVar9 = &iStack80;
    iVar19 = (*DAT_00032ec0)();
    *piVar9 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + 0xc) -
              *(int *)((int)param_1 + (int)DAT_00033b9c);
    piVar9 = &iStack76;
    iVar19 = (*pcVar4)();
    *piVar9 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + 0x10) -
              *(int *)((int)param_1 + (int)DAT_00033b9e);
    piVar9 = aiStack72;
    iVar19 = (*pcVar4)();
    pcVar5 = DAT_00033bb0;
    *piVar9 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + 0x14) -
              *(int *)((int)param_1 + (int)DAT_00033ba0);
    (*pcVar5)(&iStack80,&uStack88);
    *(undefined4 *)((int)param_1 + (int)DAT_00033ba2) = uStack88;
    iVar19 = (int)DAT_00033ba4;
    *(undefined4 *)((int)param_1 + iVar19) = uStack84;
    *(undefined4 *)((int)param_1 + iVar19 + 4) = 0;
    if (*(short *)((int)param_1 + (int)DAT_00033b9a) == 0x1e) {
      (*DAT_00033bb4)(0,0x3c);
      uVar8 = (*DAT_00033bb8)(param_1);
      *(undefined4 *)((int)DAT_00033ba6 + (int)param_1) = uVar8;
      iStack96 = 0;
      do {
        bVar15 = 0;
        iVar19 = (int)(short)((short)iStack96 * 0x24);
        do {
          iVar18 = (int)(short)(((short)(char)bVar15 & 0xffU) * 0x240);
          puVar17 = (undefined4 *)((int)param_1 + iVar19 + iVar18 + DAT_00033ba8);
          puVar17[2] = 0;
          puVar17[1] = 0;
          *puVar17 = 0;
          iVar12 = iVar19 + iVar18 + DAT_00033ba8;
          *(undefined4 *)((int)param_1 + iVar12 + 0x14) = 0;
          *(undefined4 *)((int)param_1 + iVar12 + 0x10) = 0;
          *(undefined4 *)((int)param_1 + iVar12 + 0xc) = 0;
          iVar12 = iVar19 + iVar18 + DAT_00033ba8;
          *(undefined4 *)((int)param_1 + iVar12 + 0x20) = 0;
          *(undefined4 *)((int)param_1 + iVar12 + 0x1c) = 0;
          *(undefined4 *)((int)param_1 + iVar12 + 0x18) = 0;
          iVar14 = (int)DAT_00033ba8;
          puVar17 = (undefined4 *)((int)param_1 + iVar19 + iVar18 + DAT_00033baa);
          puVar17[2] = 0;
          puVar17[1] = 0;
          *puVar17 = 0;
          iVar12 = iVar19 + iVar18 + DAT_00033baa;
          *(undefined4 *)((int)param_1 + iVar12 + 0x14) = 0;
          *(undefined4 *)((int)param_1 + iVar12 + 0x10) = 0;
          *(undefined4 *)((int)param_1 + iVar12 + 0xc) = 0;
          iVar12 = iVar19 + iVar18 + DAT_00033baa;
          *(undefined4 *)((int)param_1 + iVar12 + 0x20) = 0;
          *(undefined4 *)((int)param_1 + iVar12 + 0x1c) = 0;
          *(undefined4 *)((int)param_1 + iVar12 + 0x18) = 0;
          if (bVar15 == 0) {
            uVar8 = 2;
          }
          else {
            uVar8 = 4;
          }
          (*DAT_00033cd8)(param_1 + 3,uVar8,0,(int)param_1 + iVar19 + iVar18 + iVar14 + 0x18);
          if (bVar15 == 0) {
            uVar8 = 2;
          }
          else {
            uVar8 = 4;
          }
          (*DAT_00033cd8)(param_1 + 3,uVar8,0,(int)param_1 + iVar19 + iVar18 + DAT_00033ccc + 0x18);
          pcVar5 = DAT_00033ce0;
          uVar8 = DAT_00033cdc;
          bVar15 = bVar15 + 1;
        } while (bVar15 < 2);
        iStack96 = iStack96 + 1;
      } while (iStack96 < 0x10);
      local_64 = 0;
      do {
        iVar19 = (*pcVar4)();
        (*pcVar5)((int)param_1 + (uVar20 & 0xff) + (int)DAT_00033cd0,
                  (int)*(short *)(*(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00033cce
                                          ) + 4),uVar8);
        pcVar13 = (char *)((int)param_1 + (uVar20 & 0xff) + (int)DAT_00033cd0 + 0x14);
        uVar6 = (*DAT_00033ce4)();
        cVar10 = (*pcVar3)(uVar6 >> 0x10,0xd);
        *pcVar13 = cVar10 + '\x03';
        iVar19 = (*pcVar4)();
        uVar6 = uVar20 + 0x18 & 0xff;
        (*pcVar5)((int)param_1 + uVar6 + (int)DAT_00033cd0,
                  (int)*(short *)(*(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00033cce
                                          ) + 4),uVar8);
        pcVar13 = (char *)((int)param_1 + uVar6 + (int)DAT_00033cd0 + 0x14);
        uVar6 = (*DAT_00033ce4)();
        cVar10 = (*pcVar3)(uVar6 >> 0x10,0xd);
        *pcVar13 = cVar10 + '\x03';
        local_64 = local_64 + 2;
        uVar20 = uVar20 + 0x30;
      } while (local_64 < 8);
      iVar19 = (int)DAT_00033cd2;
      *(undefined4 *)((int)param_1 + iVar19) = 1;
      *(undefined4 *)((int)param_1 + iVar19 + 4) = 1;
    }
    uVar6 = (uint)DAT_00033cd4;
    uVar2 = *(ushort *)((int)param_1 + uVar6);
    *(ushort *)((int)param_1 + uVar6) = uVar2 + 1;
    if (uVar2 < 0x43) {
      return uVar6;
    }
    uVar6 = (uint)DAT_00033cd6;
    *(char *)((int)param_1 + uVar6) = *(char *)((int)param_1 + uVar6) + '\x01';
    return uVar6;
  }
  if (*(int *)((int)param_1 + (int)DAT_000333a2) == 0) {
    uVar1 = *(ushort *)((int)param_1 + (int)DAT_0003356a);
    *(ushort *)((int)param_1 + (int)DAT_0003356a) = uVar1 + 1;
    if (uVar1 < 0x1f) {
      uVar6 = (uint)DAT_00033868;
      if (*(int *)((int)param_1 + uVar6) == 0) {
        uVar8 = (*pcVar3)(*(undefined4 *)
                           ((short)((ushort)((uint)*(undefined4 *)((int)param_1 + (int)DAT_0003386a)
                                            >> 0x10) & uVar2) * 4 + DAT_00033880),iVar19);
        *(undefined4 *)((int)DAT_0003386c + (int)param_1) = uVar8;
        uVar8 = (*pcVar3)(*(undefined4 *)
                           ((short)((ushort)((uint)*(undefined4 *)((int)param_1 + (int)DAT_0003386a)
                                            >> 0x10) & uVar2) * 4 + DAT_00033884),iVar19);
        *(undefined4 *)((int)DAT_0003386e + (int)param_1) = uVar8;
        iVar19 = (int)DAT_00033870;
        *(undefined4 *)((int)param_1 + iVar19) = 0;
        piVar9 = (int *)(iVar19 + -4 + (int)param_1);
        iVar19 = (*pcVar4)();
        *piVar9 = *piVar9 + *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 0x18) + 8);
        piVar9 = (int *)((int)DAT_00033870 + (int)param_1);
        iVar19 = (*pcVar4)();
        param_1 = (int *)((int)DAT_0003386e + (int)param_1);
        *piVar9 = *piVar9 + *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 0x18) + 0xc);
        uVar6 = (*pcVar4)();
        *param_1 = *param_1 + *(int *)(*(int *)(*(int *)(uVar6 + 0x10) + 0x18) + 0x10);
      }
    }
    else {
      uVar6 = (*DAT_0003357c)(param_1);
      uVar6 = uVar6 & 0xff;
      if (uVar6 == 1) {
        (*DAT_00033580)(param_1,(int)DAT_0003356c);
        iVar19 = (*pcVar4)();
        iVar12 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_0003356e);
        iVar19 = (*pcVar4)();
        iVar12 = *(int *)(*(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00033570) *
                          0x20 + iVar12 + 0x1c);
        iVar19 = (*pcVar4)();
        iVar12 = *(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00033570) * 0x60 +
                 iVar12;
        (*pcVar4)();
        cVar10 = (*DAT_00033584)();
        iVar12 = *(int *)(iVar12 + (char)(cVar10 * '\f'));
        iVar19 = (*pcVar4)();
        *(int *)((int)param_1 + (int)DAT_00033574) =
             iVar12 + *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + 0xc);
        iVar19 = (*pcVar4)();
        iVar12 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_0003356e);
        iVar19 = (*pcVar4)();
        iVar12 = *(int *)(*(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00033570) *
                          0x20 + iVar12 + 0x1c);
        iVar19 = (*pcVar4)();
        iVar12 = *(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00033570) * 0x60 +
                 iVar12;
        (*pcVar4)();
        cVar10 = (*DAT_00033584)();
        iVar12 = *(int *)((char)(cVar10 * '\f') + iVar12 + 4);
        iVar19 = (*pcVar4)();
        *(int *)((int)param_1 + (int)DAT_00033576) =
             iVar12 + *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + 0x10);
        iVar19 = (*pcVar4)();
        iVar12 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_0003356e);
        iVar19 = (*pcVar4)();
        iVar12 = *(int *)(*(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00033570) *
                          0x20 + iVar12 + 0x1c);
        iVar19 = (*pcVar4)();
        iVar12 = *(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_00033570) * 0x60 +
                 iVar12;
        (*pcVar4)();
        cVar10 = (*DAT_00033584)();
        iVar12 = *(int *)((char)(cVar10 * '\f') + iVar12 + 8);
        iVar19 = (*pcVar4)();
        *(int *)((int)param_1 + (int)DAT_00033578) =
             iVar12 + *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + 0x14);
        if (*(int *)((int)param_1 + (int)DAT_0003357a) == 0) {
          if (*(int *)((int)param_1 + (int)DAT_000335bc) == 0) {
            puVar16 = PTR_LAB_00033758;
            if (*(int *)((int)param_1 + (int)DAT_000335c0) != 0) {
              puVar16 = PTR_DAT_000335c4;
            }
          }
          else {
            puVar16 = (undefined *)(int)DAT_000335be;
          }
        }
        else {
          iVar19 = (*pcVar4)();
          puVar16 = (undefined *)(int)DAT_000335ba;
          *(undefined4 *)((int)param_1 + (int)DAT_000335b8) =
               *(undefined4 *)(*(int *)(*(int *)(iVar19 + 0x10) + 0x18) + 8);
        }
        *(undefined **)((int)param_1 + DAT_00033742 + 0x6c) =
             puVar16 + *(int *)((int)param_1 + (int)DAT_00033742);
        if (*(int *)((int)param_1 + (int)DAT_00033744) != 0) {
          *(undefined4 *)((int)param_1 + (int)DAT_00033746) = 0;
          (*pcVar4)();
          uVar11 = (*DAT_0003375c)();
          *(undefined *)((int)DAT_0003374a + (int)param_1) = uVar11;
          iVar19 = (*pcVar4)();
          iVar12 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + 0xc);
          iVar19 = (*pcVar4)();
          iVar14 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_0003374c);
          iVar19 = (*pcVar4)();
          iVar14 = *(int *)(*(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_0003374e) *
                            0x20 + iVar14 + 0x1c);
          iVar19 = (*pcVar4)();
          *(int *)((int)DAT_00033750 + (int)param_1) =
               iVar12 + *(int *)((int)(char)(*(char *)((int)param_1 + (int)DAT_0003374a) * '\f') +
                                *(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_0003374e)
                                * 0x60 + iVar14);
          iVar19 = (*pcVar4)();
          iVar12 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + 0x10);
          iVar19 = (*pcVar4)();
          iVar14 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_0003374c);
          iVar19 = (*pcVar4)();
          iVar14 = *(int *)(*(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_0003374e) *
                            0x20 + iVar14 + 0x1c);
          iVar19 = (*pcVar4)();
          *(int *)((int)DAT_00033752 + (int)param_1) =
               iVar12 + *(int *)((int)(char)(*(char *)((int)param_1 + (int)DAT_0003374a) * '\f') +
                                 *(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_0003374e
                                          ) * 0x60 + iVar14 + 4);
          iVar19 = (*pcVar4)();
          iVar12 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + 0x14);
          iVar19 = (*pcVar4)();
          iVar14 = *(int *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_0003374c);
          iVar19 = (*pcVar4)();
          iVar14 = *(int *)(*(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_0003374e) *
                            0x20 + iVar14 + 0x1c);
          iVar19 = (*pcVar4)();
          pcVar3 = DAT_00033760;
          *(int *)((int)DAT_00033754 + (int)param_1) =
               iVar12 + *(int *)((int)(char)(*(char *)((int)param_1 + (int)DAT_0003374a) * '\f') +
                                 *(char *)(*(int *)(*(int *)(iVar19 + 0x10) + 4) + (int)DAT_0003374e
                                          ) * 0x60 + iVar14 + 8);
          (*pcVar3)();
        }
        iVar19 = (int)DAT_00033756;
        *(char *)((int)param_1 + iVar19) = *(char *)((int)param_1 + iVar19) + '\x01';
        uVar6 = iVar19 + 3;
        *(undefined2 *)((int)param_1 + uVar6) = 0;
      }
    }
  }
  else {
    iVar19 = (int)DAT_000333a4;
    iVar12 = (int)DAT_000333a8;
    *(int *)((int)param_1 + iVar19) = *(int *)((int)param_1 + iVar19) - (int)DAT_000333a6;
    uVar6 = *(uint *)((int)param_1 + iVar19);
    if (((int)uVar6 < iVar12) && (param_1 != (int *)0x0)) {
      param_1[-1] = param_1[-1] | 1;
    }
  }
  return uVar6;
}



void FUN_000354c4(int param_1,ushort param_2,ushort param_3,undefined param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uStack36;
  undefined4 uStack32;
  int local_1c;
  int local_18;
  int local_14;
  
  pcVar1 = DAT_00035578;
  if (param_2 < *(ushort *)(param_1 + DAT_0003556a)) {
    iVar2 = (*DAT_00035578)();
    local_1c = *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + 0xc) -
               *(int *)(param_1 + DAT_0003556c);
    iVar2 = (*pcVar1)();
    local_18 = *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + 0x10) -
               *(int *)(param_1 + DAT_0003556e);
    iVar2 = (*pcVar1)();
    local_14 = *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + 0x14) -
               *(int *)(param_1 + DAT_00035570);
    (*DAT_0003557c)(&local_1c,&uStack36);
    *(undefined4 *)(param_1 + DAT_00035572) = uStack36;
    iVar2 = (int)DAT_00035574;
    *(undefined4 *)(param_1 + iVar2) = uStack32;
    *(undefined4 *)(param_1 + iVar2 + 4) = 0;
    if (param_3 < *(ushort *)(param_1 + DAT_0003556a)) {
      *(undefined *)(param_1 + DAT_00035576) = param_4;
    }
  }
  else {
    FUN_00036198(param_1);
  }
  return;
}



undefined4
FUN_00035ba4(short param_1,short param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  short sVar4;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar5;
  
  sVar4 = (*DAT_00035c20)((int)param_2);
  iVar1 = (*DAT_00035c24)();
  iVar2 = ((int)param_1 & 0xffffU) * 4;
  sVar4 = (*DAT_00035c28)(*(undefined4 *)
                           (*(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0xc) + iVar2) + 4),(int)sVar4
                          ,2);
  iVar5 = (int)DAT_00035c1c;
  iVar1 = (*DAT_00035c24)();
  uVar3 = (*DAT_00035c2c)(*(undefined4 *)
                           (*(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0xc) + iVar2) + 4),(int)sVar4
                          ,param_3,3,param_5,param_6,param_7,iVar5);
  return uVar3;
}



void FUN_00036198(int param_1)

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
  
  pcVar1 = DAT_000362b8;
  iVar2 = (int)DAT_000362a8;
  local_1c = *(int *)(param_1 + iVar2 + -0x6c) - *(int *)(param_1 + iVar2);
  iStack24 = *(int *)(param_1 + iVar2 + -0x68) - *(int *)(param_1 + iVar2 + 4);
  iStack20 = *(int *)(param_1 + iVar2 + -100) - *(int *)(param_1 + iVar2 + 8);
  iVar2 = (*DAT_000362b8)(local_1c,local_1c);
  iVar3 = (*pcVar1)(iStack24,iStack24);
  iVar4 = (*pcVar1)(iStack20,iStack20);
  iVar5 = (*pcVar1)((int)DAT_000362aa);
  if (iVar5 < iVar2 + iVar3 + iVar4) {
    iVar2 = (int)DAT_000362ac;
    local_28 = *(int *)(param_1 + iVar2 + 0x6c) - *(int *)(param_1 + iVar2);
    iStack36 = *(int *)(param_1 + iVar2 + 0x70) - *(int *)(param_1 + iVar2 + 4);
    iStack32 = *(int *)(param_1 + iVar2 + 0x74) - *(int *)(param_1 + iVar2 + 8);
    (*DAT_000362bc)(&local_28,&local_30);
    *(undefined4 *)(param_1 + DAT_000362ae) = local_30;
    iVar2 = (int)DAT_000362b0;
    *(undefined4 *)(param_1 + iVar2) = uStack44;
    *(undefined4 *)(param_1 + iVar2 + 4) = 0;
  }
  return;
}



void FUN_000375ac(int param_1)

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
  
  pcVar1 = DAT_00037638;
  iVar10 = DAT_00037634;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (*(short *)(iVar10 + DAT_00037606) < *(short *)(iVar10 + DAT_00037604) >> 4) {
    iVar10 = 2;
  }
  else if (*(short *)(iVar10 + DAT_00037606) < *(short *)(iVar10 + DAT_00037604) >> 2) {
    iVar10 = 1;
    uVar4 = (*pcVar1)();
    if ((uVar4 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x34) = 1;
    }
  }
  else {
    iVar10 = 0;
  }
  pcVar2 = DAT_000376d8;
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
    *(undefined4 *)(param_1 + 0x18) = DAT_000376dc;
  }
  else {
    uVar7 = DAT_000376e0;
    if ((cVar9 == '\x01') ||
       ((uVar5 = DAT_000376e4, cVar9 != '\x02' &&
        ((uVar7 = DAT_000376e8, cVar9 == '\x03' ||
         ((uVar5 = DAT_000376ec, cVar9 != '\x04' &&
          ((uVar7 = DAT_000376f0, cVar9 == '\x05' ||
           ((uVar5 = DAT_000376f4, cVar9 != '\x06' &&
            (uVar7 = DAT_000376f8, uVar5 = DAT_00037874, cVar9 == '\a')))))))))))) {
      *(undefined4 *)(param_1 + 0x18) = uVar7;
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = uVar5;
    }
  }
  uVar7 = DAT_00037878;
  *(undefined *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  uVar3 = DAT_0003786c;
  uVar4 = (*pcVar1)();
  uVar5 = (*pcVar2)(uVar4 >> 0x10,uVar7);
  uVar4 = (*pcVar1)();
  (*pcVar2)(uVar4 >> 0x10,uVar7);
  uVar5 = (*pcVar2)(*(undefined4 *)(DAT_0003787c + (short)(extraout_var & uVar3) * 4),uVar5);
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
  uVar4 = (*pcVar1)();
  uVar5 = (*pcVar2)(uVar4 >> 0x10,uVar7);
  uVar4 = (*pcVar1)();
  (*pcVar2)(uVar4 >> 0x10,uVar7);
  uVar5 = (*pcVar2)(*(undefined4 *)(DAT_00037880 + (short)(extraout_var_00 & uVar3) * 4),uVar5);
  uVar4 = (*pcVar1)();
  (*pcVar2)(uVar4 >> 0x10,uVar7);
  uVar6 = (*pcVar2)(*(undefined4 *)(DAT_0003787c + (short)(extraout_var_01 & uVar3) * 4),uVar5);
  *(undefined4 *)(param_1 + 0x40) = uVar6;
  uVar4 = (*pcVar1)();
  (*pcVar2)(uVar4 >> 0x10,uVar7);
  uVar7 = (*pcVar2)(*(undefined4 *)(DAT_00037880 + (short)(extraout_var_02 & uVar3) * 4),uVar5);
  *(undefined4 *)(param_1 + 0x38) = uVar7;
  return;
}



void FUN_000377c0(int param_1)

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
  
  pcVar3 = DAT_00037884;
  iVar7 = (*DAT_00037884)();
  uVar8 = (*DAT_00037888)(param_1,(int)*(short *)(*(int *)(*(int *)(iVar7 + 0x10) + 0xc) +
                                                 (int)DAT_0003786e) << 1);
  *(undefined4 *)(DAT_00037870 + param_1) = uVar8;
  for (iVar7 = 0; iVar9 = (*pcVar3)(), pcVar5 = DAT_00037890, pcVar4 = DAT_0003788c,
      iVar7 < *(short *)(*(int *)(*(int *)(iVar9 + 0x10) + 0xc) + (int)DAT_0003786e);
      iVar7 = iVar7 + 1) {
    *(short *)(iVar7 * 2 + *(int *)(param_1 + DAT_00037870)) = (short)iVar7;
  }
  for (iVar7 = 0; iVar9 = (*pcVar3)(), pcVar6 = DAT_00037894,
      iVar7 < *(short *)(*(int *)(*(int *)(iVar9 + 0x10) + 0xc) + (int)DAT_0003786e);
      iVar7 = iVar7 + 1) {
    iVar9 = (*pcVar3)();
    sVar2 = *(short *)(*(int *)(*(int *)(iVar9 + 0x10) + 0xc) + (int)DAT_0003786e);
    uVar10 = (*pcVar4)();
    iVar9 = (*pcVar5)(uVar10 >> 0x10,sVar2 - iVar7);
    iVar13 = (int)DAT_00037870;
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
    if (*(short *)(*(int *)(*(int *)(iVar9 + 0x10) + 0xc) + (int)DAT_000379c8) <= iVar7) {
      return;
    }
    iVar9 = (*pcVar3)();
    iVar13 = iVar7 * 2;
    if (((*(int *)(*(int *)(*(short *)(*(int *)(DAT_000379be + param_1) + iVar13) * 4 +
                           *(int *)(*(int *)(iVar9 + 0x10) + 0xc)) + 4) != 0) &&
        (iVar9 = (*pcVar3)(),
        (DAT_000379cc &
        *(uint *)(*(int *)(*(int *)(*(short *)(*(int *)(DAT_000379be + param_1) + iVar13) * 4 +
                                   *(int *)(*(int *)(iVar9 + 0x10) + 0xc)) + 4) + 0x50)) == 0)) &&
       (iVar9 = (*pcVar3)(),
       '\0' < **(char **)(*(short *)(*(int *)(DAT_000379be + param_1) + iVar13) * 4 +
                         *(int *)(*(int *)(iVar9 + 0x10) + 0xc)))) break;
    iVar9 = (*pcVar3)();
    if (iVar7 == *(short *)(*(int *)(*(int *)(iVar9 + 0x10) + 0xc) + (int)DAT_000379c8) + -1) {
      *(undefined4 *)(param_1 + DAT_000379ca) = 1;
      iVar7 = (*pcVar3)();
      *(undefined4 *)(param_1 + DAT_000379c2) =
           *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + 0xc);
      iVar7 = (*pcVar3)();
      *(undefined4 *)(param_1 + DAT_000379c4) =
           *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + 0x10);
      iVar7 = (*pcVar3)();
      *(undefined4 *)(param_1 + DAT_000379c6) =
           *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + 0x14);
      return;
    }
    iVar7 = iVar7 + 1;
  }
  *(undefined2 *)(param_1 + DAT_000379be + 6) =
       *(undefined2 *)(iVar7 * 2 + *(int *)(param_1 + DAT_000379be));
  iVar7 = (*pcVar3)();
  puVar11 = (undefined4 *)
            (*pcVar6)(*(undefined4 *)
                       (*(int *)(((int)*(short *)(DAT_000379c0 + param_1) & 0xffffU) * 4 +
                                *(int *)(*(int *)(iVar7 + 0x10) + 0xc)) + 4));
  *(undefined4 *)(param_1 + DAT_000379c2) = *puVar11;
  iVar7 = (*pcVar3)();
  iVar7 = (*pcVar6)(*(undefined4 *)
                     (*(int *)(((int)*(short *)(DAT_000379c0 + param_1) & 0xffffU) * 4 +
                              *(int *)(*(int *)(iVar7 + 0x10) + 0xc)) + 4));
  *(undefined4 *)(param_1 + DAT_000379c4) = *(undefined4 *)(iVar7 + 4);
  iVar7 = (*pcVar3)();
  iVar7 = (*pcVar6)(*(undefined4 *)
                     (*(int *)(((int)*(short *)(DAT_000379c0 + param_1) & 0xffffU) * 4 +
                              *(int *)(*(int *)(iVar7 + 0x10) + 0xc)) + 4));
  *(undefined4 *)(param_1 + DAT_000379c6) = *(undefined4 *)(iVar7 + 8);
  return;
}



void FUN_000379d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar1 = DAT_00037b60;
  iVar2 = (int)DAT_00037b54;
  iVar6 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + iVar2 + 4);
  iVar7 = *(int *)(param_1 + 0x24);
  iVar5 = *(int *)(param_1 + iVar2 + 8);
  piVar8 = (int *)(DAT_00037b56 + param_1);
  iVar2 = (*DAT_00037b60)(*(int *)(param_1 + iVar2) - *(int *)(param_1 + 0x1c),*piVar8 - piVar8[1],
                          param_3,param_4,piVar8);
  iVar4 = (*pcVar1)(iVar4 - iVar6,
                    *(int *)(DAT_00037b56 + param_1) - ((int *)(DAT_00037b56 + param_1))[1]);
  iVar5 = (*pcVar1)(iVar5 - iVar7,
                    *(int *)(DAT_00037b56 + param_1) - ((int *)(DAT_00037b56 + param_1))[1]);
  iVar6 = (int)DAT_00037b58;
  iVar7 = *(int *)(param_1 + iVar6) - (*(int *)(param_1 + 0x1c) + iVar2);
  iVar4 = *(int *)(param_1 + iVar6 + 4) - (*(int *)(param_1 + 0x20) + iVar4);
  iVar5 = *(int *)(param_1 + iVar6 + 8) - (*(int *)(param_1 + 0x24) + iVar5);
  sVar3 = (*DAT_00037b68)((int)*(short *)(((int)*(char *)(param_1 + 0x31) & 0xffU) * 2 +
                                         DAT_00037b64) + (int)*(short *)(param_1 + 0x28));
  iVar2 = (*DAT_00037b6c)();
  sVar3 = (*DAT_00037b70)(*(undefined4 *)
                           (*(int *)(((int)*(short *)(DAT_00037b5a + param_1) & 0xffffU) * 4 +
                                    *(int *)(*(int *)(iVar2 + 0x10) + 0xc)) + 4),(int)sVar3,2);
  iVar9 = (int)DAT_00037b58;
  iVar6 = (int)DAT_00037b5c;
  iVar2 = (*DAT_00037b6c)();
  (*DAT_00037b74)(*(undefined4 *)
                   (*(int *)(((int)*(short *)(DAT_00037b5a + param_1) & 0xffffU) * 4 +
                            *(int *)(*(int *)(iVar2 + 0x10) + 0xc)) + 4),(int)sVar3,iVar9 + param_1,
                  3,iVar7,iVar4,iVar5,iVar6);
  return;
}



void FUN_000395a0(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined2 uVar6;
  int iVar5;
  
  pcVar1 = DAT_0003973c;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  pcVar2 = DAT_00039740;
  uVar3 = (*DAT_00039740)();
  uVar4 = (*pcVar1)(uVar3 >> 0x10,param_2 + -1);
  param_1[0xc] = uVar4;
  uVar3 = (*pcVar2)();
  uVar6 = (*pcVar1)(uVar3 >> 0x10,0x32);
  *(undefined2 *)(param_1 + 0xd) = uVar6;
  uVar3 = (*pcVar2)();
  iVar5 = (*pcVar1)(uVar3 >> 0x10,(int)DAT_00039736);
  param_1[0xb] = -0x28 - iVar5;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  return;
}



void FUN_0003960c(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  pcVar1 = DAT_0003973c;
  if ((*(short *)((int)param_1 + 0x36) != 0) && (*(short *)((int)param_1 + 0x36) == 1)) {
    iVar7 = (int)DAT_00039738;
    iVar2 = param_1[7];
    iVar6 = DAT_00039744[1];
    iVar3 = param_1[8];
    iVar5 = DAT_00039744[2];
    iVar4 = (*DAT_0003973c)(*DAT_00039744 - param_1[6],iVar7);
    iVar2 = (*pcVar1)(iVar6 - iVar2,iVar7);
    iVar3 = (*pcVar1)(iVar5 - iVar3,iVar7);
    iVar5 = (int)DAT_0003973a;
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
  (*DAT_00039748)(param_1 + 9);
  return;
}



int FUN_0003974c(short param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  
  pcVar1 = DAT_00039808;
  uVar3 = (*DAT_0003980c)((int)*(short *)(DAT_00039804 + DAT_000397fe + -10));
  iVar4 = (*pcVar1)(PTR_LAB_00009998_1_00039810,uVar3);
  puVar2 = PTR_LAB_00039818;
  iVar4 = (*pcVar1)((int)param_1 << 0x10,PTR_LAB_0000b332_1_00039814 + iVar4);
  iVar5 = (*DAT_0003980c)(puVar2 + iVar4,DAT_0003981c);
  (*DAT_00039820)();
  iVar6 = (*DAT_00039824)();
  puVar7 = puVar2 + iVar4 + (int)(puVar2 + (iVar6 - iVar5));
  iVar4 = (*DAT_00039828)();
  if ((*(uint *)((int)DAT_00039800 + *(int *)(*(int *)(iVar4 + 0x10) + 0x18)) & 0x80) != 0) {
    puVar7 = (undefined *)(*pcVar1)(puVar7,PTR_LAB_0003982c);
  }
  iVar4 = (*DAT_00039828)();
  if ((*(uint *)((int)DAT_00039800 + *(int *)(*(int *)(iVar4 + 0x10) + 0x18)) & 0x10) != 0) {
    puVar7 = (undefined *)(*pcVar1)(puVar7,puVar2);
  }
  return (int)(short)((uint)(puVar7 + (int)puVar2) >> 0x10);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0003ad86(void)

{
  undefined *puVar1;
  code *pcVar2;
  int in_r0;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  code *unaff_r9;
  int iVar7;
  code *unaff_r13;
  int unaff_r14;
  
  iVar3 = (*unaff_r13)();
  iVar3 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + 0xc);
  iVar4 = (*unaff_r13)();
  if (in_r0 < (iVar3 - *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)_DAT_0003ae16)) +
              DAT_0003ae20) {
    iVar3 = (*unaff_r13)();
    iVar4 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + 0xc);
    iVar3 = (*unaff_r13)();
    iVar3 = DAT_0003ae20 +
            (iVar4 - *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)_DAT_0003ae16));
  }
  else {
    iVar3 = (*unaff_r13)();
    iVar3 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)_DAT_0003ae16) + _LAB_0003ae1b_1;
  }
  *(int *)(unaff_r14 + 0x2c) = iVar3;
  iVar3 = (*unaff_r13)();
  *(int *)(unaff_r14 + 0x1c) =
       *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)_LAB_0003ae17_1) +
       *(int *)(unaff_r14 + 0x28);
  iVar3 = (*unaff_r13)();
  *(int *)(unaff_r14 + 0x20) =
       *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)_DAT_0003ae16) +
       *(int *)(unaff_r14 + 0x2c);
  iVar3 = (*unaff_r13)();
  puVar1 = PTR_LAB_0003ae24;
  *(int *)(unaff_r14 + 0x24) =
       *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)_LAB_0003ae19_1) +
       *(int *)(unaff_r14 + 0x30);
  for (iVar3 = 0; iVar3 < *(short *)(unaff_r14 + 0x6e); iVar3 = iVar3 + 1) {
    iVar4 = (*unaff_r13)();
    if ((*(uint *)(*(int *)(*(int *)(iVar3 * 4 + *(int *)(*(int *)(iVar4 + 0x10) + 0xc)) + 4) + 0x50
                  ) & (uint)puVar1) == 0) {
      iVar6 = *(int *)(unaff_r14 + 8);
      iVar7 = iVar3 * 0xc;
      iVar4 = (*unaff_r13)();
      *(undefined4 *)(iVar6 + iVar7) =
           *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0xc) + iVar3 * 4) + 4);
      *(int *)(*(int *)(unaff_r14 + 8) + iVar7 + 4) = unaff_r14 + 0x1c;
      *(char *)(*(int *)(unaff_r14 + 8) + iVar7 + 8) = (char)iVar3;
      (*DAT_0003af78)();
    }
  }
  (*DAT_0003af7c)();
  *(undefined **)(unaff_r14 + 0x50) = PTR_DAT_0003af80;
  (*unaff_r13)();
  (*unaff_r9)(unaff_r14 + 0x40);
  (*DAT_0003af84)(unaff_r14 + 0x40);
  (*DAT_0003af88)(unaff_r14 + 0x1c);
  pcVar2 = DAT_0003af90;
  *(short *)(unaff_r14 + 0x6c) = *(short *)(unaff_r14 + 0x6c) + 1;
  sVar5 = *(short *)(unaff_r14 + 0x6e) * 3 + 0x46;
  *(short *)(unaff_r14 + 0x66) = sVar5;
  *(short *)(unaff_r14 + 100) = sVar5;
  (*pcVar2)();
  (*pcVar2)();
  (*pcVar2)();
  return;
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_0003af9a(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



undefined4 FUN_0003bbf6(int param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  sVar1 = 0;
  do {
    if (*(char *)((int)DAT_0003bc3c + (int)sVar1 + param_1 + 0x60) != '\x03') {
      return 0;
    }
    iVar2 = iVar2 + 1;
    sVar1 = sVar1 + DAT_0003bc28;
  } while (iVar2 < 7);
  return 1;
}



void FUN_0003bc54(int param_1)

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
  undefined *puStack32;
  
  (*DAT_0003be10)();
  pcVar2 = DAT_0003be14;
  iVar4 = (*DAT_0003be14)();
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
  iVar8 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0003be0a);
  iVar4 = (*pcVar2)();
  if (*(int *)(iVar8 + *(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0003be0c) * 0x20 +
              0x1c) != 0) {
    iVar4 = (*pcVar2)();
    iVar8 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0003be0a);
    iVar4 = (*pcVar2)();
    cVar1 = *(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0003be0c);
    iVar4 = (*pcVar2)();
    local_58 = local_58 +
               *(int *)(*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0003be0c) * 0x60 +
                        *(int *)(iVar8 + cVar1 * 0x20 + 0x1c) + 0x30);
    iVar4 = (*pcVar2)();
    iVar8 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0003be0a);
    iVar4 = (*pcVar2)();
    cVar1 = *(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0003be0c);
    iVar4 = (*pcVar2)();
    local_54 = local_54 +
               *(int *)(*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0003be0c) * 0x60 +
                        *(int *)(iVar8 + cVar1 * 0x20 + 0x1c) + 0x34);
    iVar4 = (*pcVar2)();
    iVar8 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0003be0a);
    iVar4 = (*pcVar2)();
    cVar1 = *(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0003be0c);
    iVar4 = (*pcVar2)();
    local_50 = local_50 +
               *(int *)(*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0003be0c) * 0x60 +
                        *(int *)(iVar8 + cVar1 * 0x20 + 0x1c) + 0x38);
  }
  iVar4 = (*pcVar2)();
  *(int *)(param_1 + 0x24) = local_58 - *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + 8) >> 5;
  iVar4 = (*pcVar2)();
  *(int *)(param_1 + 0x28) = local_54 - *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + 0xc) >> 5
  ;
  iVar4 = (*pcVar2)();
  pcVar3 = DAT_0003be18;
  *(int *)(param_1 + 0x2c) =
       local_50 - *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + 0x10) >> 5;
  (*pcVar3)(param_1 + 0x18);
  sVar6 = (*DAT_0003bec8)();
  if (((sVar6 == 0) || (sVar6 == 5)) || (uVar5 = (*DAT_0003becc)(), (uVar5 & 1) == 0)) {
    *(undefined4 *)(param_1 + DAT_0003bec4) = 0;
  }
  else {
    *(undefined4 *)(param_1 + DAT_0003bec4) = 1;
  }
  if (*(int *)(param_1 + DAT_0003bec4) == 0) {
    uStack36 = 0;
    local_28 = 0;
    uStack48 = 0;
    local_34 = 0;
    puStack32 = PTR_DAT_0003bed0;
    uStack44 = DAT_0003bed4;
    (*pcVar2)();
    (*pcVar2)();
    (*pcVar2)();
    (*pcVar2)();
    (*pcVar2)();
    (*pcVar2)();
    (*pcVar2)();
    (*pcVar2)();
    (*DAT_0003c038)(&local_40);
    (*DAT_0003c038)(&local_4c);
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
    *(undefined4 *)(param_1 + DAT_0003c036) = 1;
    iVar4 = param_1 + 0x48;
  }
  else {
    uVar5 = (*DAT_0003c03c)();
    iVar4 = DAT_0003c048;
    uVar7 = DAT_0003c044;
    if ((uVar5 & 1) == 0) {
      uVar7 = DAT_0003c040;
    }
    *(undefined4 *)(param_1 + 0x30) = uVar7;
    uVar7 = DAT_0003c1a8;
    if (*(int *)(param_1 + 0x30) < iVar4) {
      uVar7 = DAT_0003c04c;
    }
    *(undefined4 *)(param_1 + 0x34) = uVar7;
    (*DAT_0003c1ac)(param_1 + 0x44);
    (*DAT_0003c1b0)(param_1 + 0x38,*(undefined4 *)(param_1 + 0x30),param_1 + 0x44);
    iVar4 = param_1 + 0x38;
  }
  (*DAT_0003c1b4)(iVar4);
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  return;
}



uint FUN_0003c08e(int param_1)

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
  
  pcVar2 = DAT_0003c1b8;
  iVar3 = (*DAT_0003c1b8)();
  *(int *)(param_1 + 0x18) =
       *(int *)(param_1 + 0x18) + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0003c19e)
  ;
  iVar3 = (*pcVar2)();
  *(int *)(param_1 + 0x1c) =
       *(int *)(param_1 + 0x1c) + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0003c1a0)
  ;
  iVar3 = (*pcVar2)();
  *(int *)(param_1 + 0x20) =
       *(int *)(param_1 + 0x20) + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0003c1a2)
  ;
  uVar4 = DAT_0003c1bc;
  if (*(int *)(param_1 + DAT_0003c1a4) == 0) {
    iVar3 = (*pcVar2)();
    *(int *)(param_1 + 0x48) =
         *(int *)(param_1 + 0x48) +
         *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0003c19e);
    iVar3 = (*pcVar2)();
    *(int *)(param_1 + 0x4c) =
         *(int *)(param_1 + 0x4c) +
         *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0003c1a0);
    iVar3 = (*pcVar2)();
    *(int *)(param_1 + 0x50) =
         *(int *)(param_1 + 0x50) +
         *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0003c1a2);
    iVar3 = (*pcVar2)();
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0003c19e);
    iVar3 = (*pcVar2)();
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0003c1a0);
    iVar3 = (*pcVar2)();
    *(int *)(param_1 + 0x5c) =
         *(int *)(param_1 + 0x5c) +
         *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0003c1a2);
  }
  else {
    if ((int)(*(uint *)(param_1 + 0x30) & DAT_0003c1bc) < DAT_0003c1c0) {
      *(undefined4 *)(param_1 + 0x34) = DAT_0003c1c4;
    }
    if (DAT_0003c1c8 < (int)(uVar4 & *(uint *)(param_1 + 0x30))) {
      *(undefined4 *)(param_1 + 0x34) = DAT_0003c1cc;
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34);
    (*DAT_0003c1b0)(param_1 + 0x38,*(undefined4 *)(param_1 + 0x30),param_1 + 0x44);
    (*DAT_0003c1d0)();
  }
  uVar4 = (int)*(char *)(param_1 + 0xd) & 0xff;
  if (uVar4 == 1) {
    uVar4 = (int)*(char *)(param_1 + DAT_0003c34a) & 0xff;
    if ((uVar4 != 4) && (uVar4 != 5)) {
      return uVar4;
    }
    *(undefined *)(param_1 + 0xd) = 2;
  }
  else if (uVar4 != 2) {
    return uVar4;
  }
  pcVar2 = DAT_0003c354;
  if (*(int *)(param_1 + DAT_0003c34c) == 0) {
    iVar9 = (int)DAT_0003c34e;
    iVar7 = *(int *)(param_1 + 0x4c);
    iVar5 = *(int *)(param_1 + 0x58);
    iVar8 = *(int *)(param_1 + 0x50);
    iVar6 = *(int *)(param_1 + 0x5c);
    iVar3 = (*DAT_0003c354)(*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x48),iVar9);
    iVar5 = (*pcVar2)(iVar5 - iVar7,iVar9);
    iVar6 = (*pcVar2)(iVar6 - iVar8,iVar9);
    iVar7 = (int)DAT_0003c350;
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



void FUN_0003c358(int param_1)

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
  
  pcVar3 = DAT_0003c520;
  uVar9 = DAT_0003c51c;
  pcVar2 = DAT_0003c518;
  iVar11 = DAT_0003c514;
  uVar1 = DAT_0003c50a;
  uVar5 = (*DAT_0003c518)();
  (*pcVar3)(uVar5 >> 0x10,uVar9);
  uVar6 = (*pcVar3)(*(undefined4 *)(iVar11 + (short)(extraout_var & uVar1) * 4),uVar9);
  iVar4 = DAT_0003c524;
  *(undefined4 *)(DAT_0003c50c + param_1) = uVar6;
  uVar5 = (*pcVar2)();
  (*pcVar3)(uVar5 >> 0x10,uVar9);
  uVar6 = (*pcVar3)(*(undefined4 *)(iVar4 + (short)(extraout_var_00 & uVar1) * 4),uVar9);
  uVar5 = (*pcVar2)();
  (*pcVar3)(uVar5 >> 0x10,uVar9);
  uVar7 = (*pcVar3)(*(undefined4 *)(iVar11 + (short)(extraout_var_01 & uVar1) * 4),uVar6);
  *(undefined4 *)(DAT_0003c50e + param_1) = uVar7;
  uVar5 = (*pcVar2)();
  (*pcVar3)(uVar5 >> 0x10,uVar9);
  uVar6 = (*pcVar3)(*(undefined4 *)(iVar4 + (short)(extraout_var_02 & uVar1) * 4),uVar6);
  *(undefined4 *)(DAT_0003c510 + param_1) = uVar6;
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
  iVar11 = (int)DAT_0003c512;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(int *)(param_1 + 0x80) = iVar11;
  *(undefined *)(param_1 + 0xb9) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  uVar5 = (*pcVar2)();
  uVar10 = (*pcVar3)(uVar5 >> 0x10,0x14);
  *(undefined2 *)(DAT_0003c5a6 + param_1) = uVar10;
  *(undefined *)(param_1 + DAT_0003c5a8) = 0;
  return;
}



undefined4 FUN_0003c546(int param_1,undefined4 param_2)

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
  
  pcVar7 = DAT_0003c5bc;
  pcVar6 = DAT_0003c5b8;
  pcVar5 = DAT_0003c5b4;
  uVar12 = DAT_0003c5b0;
  uVar3 = DAT_0003c5aa;
  uStack72 = 0;
  cVar1 = *(char *)(param_1 + DAT_0003c5ac);
  if (cVar1 == '\0') {
    (*DAT_0003c6fc)(param_1,(int)*(short *)(*(int *)(*(int *)(*DAT_0003c6f8 + 0xc) + 4) + 4),
                    *DAT_0003c6f4);
    *(undefined *)(param_1 + DAT_0003c6e8) = 1;
  }
  else if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      iVar14 = (int)DAT_0003ca24;
      *(undefined2 *)(param_1 + DAT_0003ca22) = 0;
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + iVar14;
      *(undefined *)(param_1 + 0xb9) = 3;
    }
    else if (cVar1 != '\x03') {
      if (cVar1 == '\x04') {
        bVar4 = false;
        iVar14 = (*DAT_0003c5b8)();
        *(int *)(param_1 + 0xc) =
             *(int *)(param_1 + 0xc) +
             *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_0003cd24);
        iVar14 = (*pcVar6)();
        *(int *)(param_1 + 0x10) =
             *(int *)(param_1 + 0x10) +
             *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_0003cd26);
        iVar14 = (*pcVar6)();
        *(int *)(param_1 + 0x14) =
             *(int *)(param_1 + 0x14) +
             *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_0003cd28);
        iVar14 = (*pcVar6)();
        *(int *)(param_1 + 0x24) =
             *(int *)(param_1 + 0x24) +
             *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_0003cd24);
        iVar14 = (*pcVar6)();
        *(int *)(param_1 + 0x28) =
             *(int *)(param_1 + 0x28) +
             *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_0003cd26);
        iVar14 = (*pcVar6)();
        iVar15 = (int)DAT_0003cd2a;
        *(int *)(param_1 + 0x2c) =
             *(int *)(param_1 + 0x2c) +
             *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_0003cd28);
        local_44 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x48);
        uStack64 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x4c);
        auStack60[0] = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x50);
        puVar16 = &local_44;
        uVar9 = (*pcVar7)(local_44,iVar15);
        *puVar16 = uVar9;
        puVar16 = &uStack64;
        uVar9 = (*pcVar7)(uStack64,(int)DAT_0003cd2a);
        iVar14 = (int)DAT_0003cd2a;
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
        if (((*(int *)(*(int *)(((int)*(short *)(DAT_0003cd2c + param_1) & 0xffffU) * 4 +
                               *(int *)(*(int *)(iVar14 + 0x10) + 0xc)) + 4) == 0) ||
            (iVar14 = (*pcVar6)(),
            (DAT_0003cd70 &
            *(uint *)(*(int *)(*(int *)(((int)*(short *)(DAT_0003cd6c + param_1) & 0xffffU) * 4 +
                                       *(int *)(*(int *)(iVar14 + 0x10) + 0xc)) + 4) + 0x50)) != 0))
           || (iVar14 = (*pcVar6)(),
              **(char **)(((int)*(short *)(DAT_0003cd6c + param_1) & 0xffffU) * 4 +
                         *(int *)(*(int *)(iVar14 + 0x10) + 0xc)) < '\x01')) {
          bVar4 = true;
        }
        else {
          iVar14 = (*pcVar6)();
          puVar11 = (undefined4 *)
                    (*DAT_0003cec4)(*(undefined4 *)
                                     (*(int *)(((int)*(short *)(DAT_0003ceb6 + param_1) & 0xffffU) *
                                               4 + *(int *)(*(int *)(iVar14 + 0x10) + 0xc)) + 4));
          pcVar5 = DAT_0003cec8;
          *(undefined4 *)(param_1 + 0x18) = *puVar11;
          *(undefined4 *)(param_1 + 0x1c) = puVar11[1];
          *(undefined4 *)(param_1 + 0x20) = puVar11[2];
          (*pcVar5)(param_1 + 0x18,&local_2c);
          (*DAT_0003ced0)(&local_2c,param_1 + 0x18,DAT_0003cecc + 0x58);
        }
        *(int *)(param_1 + DAT_0003ceb8) = *(int *)(param_1 + DAT_0003ceb8) + (int)DAT_0003ceba;
        local_44 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x48);
        uStack64 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x4c);
        auStack60[0] = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x50);
        puVar16 = &local_44;
        uVar9 = (*pcVar7)(local_44,*(undefined4 *)(param_1 + DAT_0003ceb8));
        *puVar16 = uVar9;
        puVar16 = &uStack64;
        uVar9 = (*pcVar7)(uStack64,*(undefined4 *)(param_1 + DAT_0003ceb8));
        *puVar16 = uVar9;
        puVar16 = auStack60;
        uVar9 = (*pcVar7)(auStack60[0],*(undefined4 *)(param_1 + DAT_0003ceb8));
        *puVar16 = uVar9;
        *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x48) + local_44;
        *(uint *)(param_1 + 0x28) = *(int *)(param_1 + 0x4c) + uStack64;
        *(uint *)(param_1 + 0x2c) = *(int *)(param_1 + 0x50) + auStack60[0];
        iVar14 = (*pcVar6)();
        (*DAT_0003ced4)(DAT_0003cebe + param_1,param_1 + 0x24,
                        (int)DAT_0003cebc + *(int *)(*(int *)(iVar14 + 0x10) + 4));
        uVar3 = *(ushort *)(param_1 + DAT_0003cec0);
        *(ushort *)(param_1 + DAT_0003cec0) = uVar3 + 1;
        if (0x5a < uVar3) {
          bVar4 = true;
        }
        if ((DAT_0003ced8 <= *(int *)(param_1 + DAT_0003ceb8)) && (!bVar4)) {
          uVar12 = (*DAT_0003cedc)();
          FUN_0003d544(param_1,uVar12);
          bVar4 = true;
        }
        if (!bVar4) {
          return uStack72;
        }
        *(undefined *)(param_1 + DAT_0003cec2) = 5;
      }
      else if (cVar1 != '\x05') {
        if (cVar1 != '\x06') {
          return 0;
        }
        uVar3 = *(ushort *)(param_1 + DAT_0003d1ea);
        *(ushort *)(param_1 + DAT_0003d1ea) = uVar3 + 1;
        if (uVar3 < 0x1f) {
          return 0;
        }
        return 1;
      }
      iVar14 = (*pcVar6)();
      *(int *)(param_1 + 0xc) =
           *(int *)(param_1 + 0xc) +
           *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_0003d0aa);
      iVar14 = (*pcVar6)();
      *(int *)(param_1 + 0x10) =
           *(int *)(param_1 + 0x10) +
           *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_0003d0ac);
      iVar14 = (*pcVar6)();
      *(int *)(param_1 + 0x14) =
           *(int *)(param_1 + 0x14) +
           *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_0003d0ae);
      iVar14 = (*pcVar6)();
      *(int *)(param_1 + 0x24) =
           *(int *)(param_1 + 0x24) +
           *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_0003d0aa);
      iVar14 = (*pcVar6)();
      *(int *)(param_1 + 0x28) =
           *(int *)(param_1 + 0x28) +
           *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_0003d0ac);
      iVar14 = (*pcVar6)();
      *(int *)(param_1 + 0x2c) =
           *(int *)(param_1 + 0x2c) +
           *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_0003d0ae);
      iVar14 = (*pcVar6)();
      *(int *)(param_1 + 0x18) =
           *(int *)(param_1 + 0x18) +
           *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_0003d0aa);
      iVar14 = (*pcVar6)();
      *(int *)(param_1 + 0x1c) =
           *(int *)(param_1 + 0x1c) +
           *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_0003d0ac);
      iVar14 = (*pcVar6)();
      iVar15 = (int)DAT_0003d0b0;
      *(int *)(param_1 + 0x20) =
           *(int *)(param_1 + 0x20) +
           *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_0003d0ae);
      local_44 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x48);
      uStack64 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x4c);
      auStack60[0] = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x50);
      puVar16 = &local_44;
      uVar9 = (*pcVar7)(local_44,iVar15);
      *puVar16 = uVar9;
      puVar16 = &uStack64;
      uVar9 = (*pcVar7)(uStack64,(int)DAT_0003d0b0);
      iVar14 = (int)DAT_0003d0b0;
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
      iVar14 = (int)DAT_0003d1e2;
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + iVar14;
      local_44 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x48);
      uStack64 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x4c);
      auStack60[0] = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x50);
      puVar16 = &local_44;
      uVar9 = (*pcVar7)(local_44,*(undefined4 *)(param_1 + DAT_0003d1e4));
      *puVar16 = uVar9;
      puVar16 = &uStack64;
      uVar9 = (*pcVar7)(uStack64,*(undefined4 *)(param_1 + DAT_0003d1e4));
      *puVar16 = uVar9;
      puVar16 = auStack60;
      uVar9 = (*pcVar7)(auStack60[0],*(undefined4 *)(param_1 + DAT_0003d1e4));
      *puVar16 = uVar9;
      *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x48) + local_44;
      *(uint *)(param_1 + 0x28) = *(int *)(param_1 + 0x4c) + uStack64;
      *(uint *)(param_1 + 0x2c) = *(int *)(param_1 + 0x50) + auStack60[0];
      iVar14 = (*pcVar6)();
      (*DAT_0003d1f0)(DAT_0003d1e8 + param_1,param_1 + 0x24,
                      (int)DAT_0003d1e6 + *(int *)(*(int *)(iVar14 + 0x10) + 4));
      uVar3 = *(ushort *)(param_1 + DAT_0003d1ea);
      *(ushort *)(param_1 + DAT_0003d1ea) = uVar3 + 1;
      if (0x28 < uVar3) {
        iVar14 = (int)DAT_0003d1ec;
        *(undefined *)(param_1 + iVar14) = 6;
        *(undefined2 *)(param_1 + iVar14 + -5) = 0;
      }
      iVar14 = (*pcVar6)();
      if (*(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 0xc) + (int)DAT_0003d1ee) <=
          *(int *)(param_1 + 0x28)) {
        return uStack72;
      }
      iVar14 = (int)DAT_0003d1ec;
      *(undefined *)(param_1 + iVar14) = 6;
      *(undefined2 *)(param_1 + iVar14 + -5) = 0;
      return uStack72;
    }
    iVar14 = (*pcVar6)();
    *(int *)(param_1 + 0x24) =
         *(int *)(param_1 + 0x24) +
         *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_0003ca26);
    iVar14 = (*pcVar6)();
    *(int *)(param_1 + 0x28) =
         *(int *)(param_1 + 0x28) +
         *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_0003ca28);
    iVar14 = (*pcVar6)();
    iVar15 = (int)DAT_0003ca2c;
    *(int *)(param_1 + 0x2c) =
         *(int *)(param_1 + 0x2c) +
         *(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 4) + (int)DAT_0003ca2a);
    iVar14 = *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x78);
    *(int *)(param_1 + 0x7c) = iVar14;
    iVar14 = (*pcVar7)(iVar14,iVar15);
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) - iVar14;
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + *(int *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_0003d270(param_1);
    (*DAT_0003ca34)(param_1);
    iVar14 = (int)DAT_0003ca22;
    uVar2 = *(ushort *)(param_1 + iVar14);
    *(ushort *)(param_1 + iVar14) = uVar2 + 1;
    if (uVar2 <= *(ushort *)(param_1 + iVar14 + -2)) {
      return 0;
    }
    iVar14 = (int)DAT_0003ca2e;
    iVar15 = (int)DAT_0003ca30;
    *(undefined4 *)(param_1 + iVar14 + 4) =
         *(undefined4 *)(*(int *)(**(int **)(param_1 + iVar14) * 0x10 + *DAT_0003ca38 + 0xc) + 4);
    (*DAT_0003ca3c)(iVar15 + param_1,param_2,param_1 + 0x24,
                    (int)*(short *)(*(int *)(param_1 + iVar14 + 4) + 4),
                    *(undefined4 *)(param_1 + iVar14));
    (*DAT_0003ca40)(9);
    iVar14 = (int)DAT_0003ca22;
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
    uVar10 = (*pcVar7)(uVar9 >> 0x10,(int)DAT_0003ca32);
    uVar9 = (*pcVar5)();
    (*pcVar7)(uVar9 >> 0x10,uVar12);
    iVar14 = (*pcVar7)(*(undefined4 *)(DAT_0003ca44 + (short)(extraout_var_03 & uVar3) * 4),uVar10);
    *piVar17 = iVar14;
    uVar9 = (*pcVar5)();
    uVar10 = (*pcVar7)(uVar9 >> 0x10,(int)DAT_0003ca32);
    uVar9 = (*pcVar5)();
    (*pcVar7)(uVar9 >> 0x10,uVar12);
    uVar10 = (*pcVar7)(*(undefined4 *)(DAT_0003ca48 + (short)(extraout_var_04 & uVar3) * 4),uVar10);
    piVar17 = aiStack36;
    uVar9 = (*pcVar5)();
    (*pcVar7)(uVar9 >> 0x10,uVar12);
    iVar14 = (*pcVar7)(*(undefined4 *)(DAT_0003ca44 + (short)(extraout_var_05 & uVar3) * 4),uVar10);
    *piVar17 = iVar14;
    piVar17 = &local_2c;
    uVar9 = (*pcVar5)();
    (*pcVar7)(uVar9 >> 0x10,uVar12);
    iVar14 = (*pcVar7)(*(undefined4 *)(DAT_0003cb60 + (short)(extraout_var_06 & uVar3) * 4),uVar10);
    *piVar17 = iVar14;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + local_2c;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iStack40;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + aiStack36[0];
    iVar14 = (*pcVar6)();
    if (*(short *)(*(int *)(*(int *)(iVar14 + 0x10) + 0xc) + (int)DAT_0003cb5a) == 0) {
      iVar14 = (*pcVar6)();
      iVar15 = (int)DAT_0003cb5c;
      iVar14 = *(int *)(*(int *)(iVar14 + 0x10) + 4);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar14 + 0xc);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar14 + 0x10);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar14 + 0x14);
      *(undefined *)(param_1 + iVar15) = 5;
      return uStack72;
    }
    iVar14 = (*pcVar6)();
    iVar14 = (int)*(short *)(*(int *)(*(int *)(iVar14 + 0x10) + 0xc) + (int)DAT_0003cb5a);
    uVar9 = (*pcVar5)();
    uVar13 = (*pcVar7)(uVar9 >> 0x10,iVar14);
    *(undefined2 *)(DAT_0003cb5e + param_1) = uVar13;
    iVar14 = (*pcVar6)();
    if (((*(int *)(*(int *)(((int)*(short *)(DAT_0003cb5e + param_1) & 0xffffU) * 4 +
                           *(int *)(*(int *)(iVar14 + 0x10) + 0xc)) + 4) != 0) &&
        (iVar14 = (*pcVar6)(),
        (DAT_0003cb64 &
        *(uint *)(*(int *)(*(int *)(((int)*(short *)(DAT_0003cb5e + param_1) & 0xffffU) * 4 +
                                   *(int *)(*(int *)(iVar14 + 0x10) + 0xc)) + 4) + 0x50)) == 0)) &&
       (iVar14 = (*pcVar6)(),
       '\0' < **(char **)(((int)*(short *)(DAT_0003cb5e + param_1) & 0xffffU) * 4 +
                         *(int *)(*(int *)(iVar14 + 0x10) + 0xc)))) {
      return uStack72;
    }
    iVar14 = (*pcVar6)();
    iVar15 = (int)DAT_0003cb5c;
    iVar14 = *(int *)(*(int *)(iVar14 + 0x10) + 4);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar14 + 0xc);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar14 + 0x10);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar14 + 0x14);
    *(undefined *)(param_1 + iVar15) = 5;
    return uStack72;
  }
  *(short *)(param_1 + DAT_0003c6ea) = *(short *)(param_1 + DAT_0003c6ea) + 1;
  FUN_0003d2fc(param_1);
  if ((*(ushort *)(param_1 + DAT_0003c6ea) & 0xf) == 0) {
    uVar10 = uVar12;
    uVar9 = (*pcVar5)();
    (*pcVar7)(uVar9 >> 0x10,uVar12);
    uVar10 = (*pcVar7)(*(undefined4 *)(DAT_0003c700 + (short)(extraout_var & uVar3) * 4),uVar10);
    *(undefined4 *)(DAT_0003c6ec + param_1) = uVar10;
    uVar10 = uVar12;
    uVar9 = (*pcVar5)();
    (*pcVar7)(uVar9 >> 0x10,uVar12);
    uVar8 = (*pcVar7)(*(undefined4 *)(DAT_0003c704 + (short)(extraout_var_00 & uVar3) * 4),uVar10);
    uVar10 = uVar12;
    uVar9 = (*pcVar5)();
    (*pcVar7)(uVar9 >> 0x10,uVar10);
    uVar10 = (*pcVar7)(*(undefined4 *)(DAT_0003c700 + (short)(extraout_var_01 & uVar3) * 4),uVar8);
    *(undefined4 *)(DAT_0003c6ee + param_1) = uVar10;
    uVar9 = (*pcVar5)();
    (*pcVar7)(uVar9 >> 0x10,uVar12);
    uVar12 = (*pcVar7)(*(undefined4 *)(DAT_0003c704 + (short)(extraout_var_02 & uVar3) * 4),uVar8);
    *(undefined4 *)(DAT_0003c6f0 + param_1) = uVar12;
  }
  local_44 = *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0x6c);
  uStack64 = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0x70);
  auStack60[0] = *(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0x74);
  if ((DAT_0003c708 & local_44) == 0) {
    local_44 = DAT_0003c710 & local_44;
  }
  else {
    local_44 = DAT_0003c70c | local_44;
  }
  if ((DAT_0003c708 & uStack64) == 0) {
    uStack64 = DAT_0003c710 & uStack64;
  }
  else {
    uStack64 = DAT_0003c70c | uStack64;
  }
  if ((auStack60[0] & DAT_0003c708) == 0) {
    auStack60[0] = DAT_0003c880 & auStack60[0];
  }
  else {
    auStack60[0] = DAT_0003c70c | auStack60[0];
  }
  iVar14 = (int)DAT_0003c87c;
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
  iVar14 = (int)DAT_0003c87e;
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
  uVar9 = DAT_0003c880;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x68);
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & uVar9;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & uVar9;
  *(uint *)(param_1 + 0x74) = uVar9 & *(uint *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  FUN_0003d270(param_1);
  (*DAT_0003c884)(param_1);
  return uStack72;
}



void FUN_0003d270(int param_1)

{
  int iVar1;
  undefined auStack32 [12];
  undefined4 uStack20;
  undefined4 uStack16;
  undefined4 uStack12;
  
  uStack20 = 0;
  uStack16 = 0;
  uStack12 = *(undefined4 *)(param_1 + DAT_0003d2d2);
  (*DAT_0003d2dc)();
  iVar1 = (*DAT_0003d2e0)();
  (*DAT_0003d2e4)(*(int *)(*(int *)(iVar1 + 0x10) + 0x18) + 8);
  (*DAT_0003d2e8)(param_1 + 0x6c);
  (*DAT_0003d2ec)(&uStack20,auStack32);
  (*DAT_0003d2f4)(auStack32,param_1 + 0x24,DAT_0003d2f0 + 0x28);
  (*DAT_0003d2f8)();
  return;
}



uint FUN_0003d2fc(int param_1)

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
  
  uVar6 = (int)*(char *)(param_1 + DAT_0003d39c) & 0xff;
  if (uVar6 == 0) {
    uVar6 = (uint)DAT_0003d39e;
    iVar7 = (int)DAT_0003d3a2;
    *(int *)(param_1 + uVar6) = *(int *)(param_1 + uVar6) + (int)DAT_0003d3a0;
    if (iVar7 <= *(int *)(param_1 + uVar6)) {
      uVar6 = (uint)DAT_0003d39e;
      *(int *)(param_1 + uVar6) = iVar7;
    }
  }
  else {
    if (uVar6 == 1) {
      iVar7 = (int)DAT_0003d3a4;
      *(short *)(param_1 + iVar7) = *(short *)(param_1 + iVar7) + *(short *)(iVar7 + 2 + param_1);
      *(undefined *)(param_1 + iVar7 + 8) = 2;
    }
    else if (uVar6 != 2) {
      return uVar6;
    }
    uVar6 = (int)DAT_0003d3a4 + 2;
    if (*(ushort *)(param_1 + DAT_0003d3a4) < *(ushort *)(param_1 + uVar6)) {
      iVar7 = (int)DAT_0003d39e;
      *(int *)(param_1 + iVar7) = *(int *)(param_1 + iVar7) - (int)DAT_0003d3a6;
      uVar6 = *(uint *)(param_1 + iVar7);
      if ((int)uVar6 < (int)DAT_0003d3a8) {
        *(undefined4 *)(param_1 + DAT_0003d39e) = 0;
        pcVar5 = DAT_0003d3c0;
        pcVar4 = DAT_0003d3bc;
        uVar3 = DAT_0003d3b8;
        pcVar2 = DAT_0003d3b4;
        uVar1 = DAT_0003d3ac;
        iVar7 = (int)DAT_0003d3aa;
        puStack48 = DAT_0003d3b0;
        for (local_38 = 5; local_38 != 0; local_38 = local_38 + -1) {
          piVar12 = &iStack40;
          iVar9 = iVar7;
          uVar6 = (*pcVar4)();
          uVar8 = (*pcVar5)(uVar6 >> 0x10,iVar9);
          uVar11 = uVar3;
          uVar6 = (*pcVar4)();
          (*pcVar5)(uVar6 >> 0x10,uVar11);
          iVar9 = (*pcVar5)(*(undefined4 *)(DAT_0003d534 + (short)(extraout_var & uVar1) * 4),uVar8)
          ;
          *piVar12 = iVar9;
          iVar9 = iVar7;
          uVar6 = (*pcVar4)();
          uVar8 = (*pcVar5)(uVar6 >> 0x10,iVar9);
          uVar11 = uVar3;
          uVar6 = (*pcVar4)();
          (*pcVar5)(uVar6 >> 0x10,uVar11);
          uStack52 = (*pcVar5)(*(undefined4 *)(DAT_0003d538 + (short)(extraout_var_00 & uVar1) * 4),
                               uVar8);
          piVar12 = aiStack36;
          uVar11 = uVar3;
          uVar6 = (*pcVar4)();
          (*pcVar5)(uVar6 >> 0x10,uVar11);
          iVar9 = (*pcVar5)(*(undefined4 *)(DAT_0003d534 + (short)(extraout_var_01 & uVar1) * 4),
                            uStack52);
          *piVar12 = iVar9;
          piVar12 = &iStack44;
          uVar11 = uVar3;
          uVar6 = (*pcVar4)();
          (*pcVar5)(uVar6 >> 0x10,uVar11);
          iVar9 = (*pcVar5)(*(undefined4 *)(DAT_0003d538 + (short)(extraout_var_02 & uVar1) * 4),
                            uStack52);
          *piVar12 = iVar9;
          piVar12 = &iStack44;
          iVar9 = (*pcVar2)();
          *piVar12 = *piVar12 + *(int *)(*(int *)(*(int *)(iVar9 + 0x10) + 4) + (int)DAT_0003d52a);
          piVar12 = &iStack40;
          iVar9 = (*pcVar2)();
          *piVar12 = *piVar12 + *(int *)(*(int *)(*(int *)(iVar9 + 0x10) + 4) + (int)DAT_0003d52c);
          piVar12 = aiStack36;
          iVar9 = (*pcVar2)();
          iVar10 = (int)DAT_0003d530;
          *piVar12 = *piVar12 + *(int *)(*(int *)(*(int *)(iVar9 + 0x10) + 4) + (int)DAT_0003d52e);
          (*DAT_0003d540)(*(undefined4 *)(*DAT_0003d53c + 0xc),*puStack48,param_1 + 0x24,&iStack44,0
                          ,iVar10,*(undefined4 *)(param_1 + 8),0x28);
        }
        uVar6 = (uint)DAT_0003d532;
        *(undefined *)(param_1 + uVar6) = 3;
      }
    }
  }
  return uVar6;
}



void FUN_0003d544(int param_1,short param_2)

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
  
  pcVar1 = DAT_0003d6f0;
  iVar2 = (*DAT_0003d6f0)();
  uVar9 = *(undefined4 *)
           (*(int *)(((int)*(short *)(DAT_0003d6e6 + param_1) & 0xffffU) * 4 +
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
  uVar3 = (*DAT_0003d6f4)((int)param_2);
  uVar3 = (*DAT_0003d6f8)(uVar9,uVar3,2);
  (*DAT_0003d6fc)(uVar9,uVar3,param_1 + 0x24,3,iVar4 - iVar7,iVar5 - iVar8,iVar6 - iVar2,
                  (int)DAT_0003d6e8);
  return;
}



void FUN_000412b4(int param_1)

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
  
  sVar6 = FUN_00041950();
  iVar3 = (int)sVar6;
  if (iVar3 < 0) {
    *(undefined4 *)(param_1 + DAT_00041404) = 1;
  }
  pcVar2 = DAT_0004140c;
  pcVar1 = DAT_00041408;
  iVar8 = iVar3 + 1;
  uVar7 = 0;
  iStack44 = 0;
  cStack36 = '\0';
  cStack40 = '\0';
  do {
    *(undefined *)(((int)cStack40 & 0xffU) + param_1 + 0x2c) = 0;
    if (*(int *)(param_1 + DAT_00041404) == 0) {
      do {
        iVar8 = iVar8 + -1;
        if (iVar8 < 0) {
          iVar8 = iVar3;
        }
        iVar10 = iVar8 * 4;
        iVar4 = (*pcVar2)();
      } while (((*(int *)(*(int *)(iVar10 + *(int *)(*(int *)(iVar4 + 0x10) + 0xc)) + 4) == 0) ||
               (iVar4 = (*pcVar2)(),
               (DAT_00041410 &
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



void FUN_00041446(int param_1)

{
  short sVar3;
  uint uVar1;
  int iVar2;
  undefined4 uVar4;
  int iVar5;
  
  sVar3 = (*DAT_000414fc)();
  if (sVar3 == 5) {
    uVar1 = (*DAT_00041500)();
    uVar4 = DAT_00041520;
    if ((uVar1 & 1) == 0) {
      uVar4 = DAT_0004151c;
    }
    iVar2 = (int)DAT_000414f4;
    *(undefined4 *)(param_1 + iVar2) = uVar4;
    *(undefined4 *)(param_1 + iVar2 + 4) = 0;
  }
  else {
    uVar1 = (*DAT_00041500)();
    iVar2 = (*DAT_00041508)(uVar1 >> 0x10,DAT_00041504);
    iVar5 = (int)DAT_000414f4;
    *(int *)(DAT_000414f4 + param_1) = iVar2 + DAT_0004150c;
    iVar2 = DAT_00041518;
    if (*(int *)(iVar5 + param_1) < DAT_00041510) {
      iVar2 = DAT_00041514;
    }
    ((int *)(iVar5 + param_1))[1] = iVar2;
  }
  (*DAT_00041524)(param_1);
  (*DAT_00041528)(param_1 + 0x10,*(undefined4 *)(param_1 + DAT_000414f4),param_1);
  (*DAT_0004152c)();
  (*DAT_00041530)(param_1 + 0x10);
  iVar2 = (*DAT_00041534)();
  (*DAT_00041538)((int)DAT_000414f6 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18) + 0x18);
  (*DAT_00041540)(DAT_0004153c);
  (*DAT_00041544)();
  *(undefined4 *)(param_1 + DAT_000414f8) = 1;
  return;
}



void FUN_00041548(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  pcVar1 = DAT_00041644;
  iVar2 = (*DAT_00041644)();
  uVar3 = (*DAT_00041648)(param_1,(int)*(short *)(*(int *)(*(int *)(iVar2 + 0x10) + 0xc) +
                                                 (int)DAT_0004163c) << 4);
  *(undefined4 *)(DAT_0004163e + param_1) = uVar3;
  if (*(int *)(param_1 + DAT_0004163e) == 0) {
    if (param_1 != 0) {
      *(uint *)(param_1 + -4) = *(uint *)(param_1 + -4) | 1;
    }
  }
  else {
    for (iVar2 = 0; iVar4 = (*pcVar1)(),
        iVar2 < *(short *)(*(int *)(*(int *)(iVar4 + 0x10) + 0xc) + (int)DAT_0004163c);
        iVar2 = iVar2 + 1) {
      iVar4 = (int)DAT_0004163e;
      *(undefined *)(*(int *)(param_1 + iVar4) + iVar2 * 0x10) = 0;
      iVar4 = *(int *)(param_1 + iVar4) + iVar2 * 0x10;
      *(undefined4 *)(iVar4 + 0xc) = 0;
      *(undefined4 *)(iVar4 + 8) = 0;
      *(undefined4 *)(iVar4 + 4) = 0;
    }
  }
  return;
}



undefined4 FUN_000415c4(int param_1)

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



void FUN_000415f0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00041650;
  iVar2 = DAT_0004164c;
  *(ushort *)(*(int *)(DAT_0004164c + 4) + 0x20) =
       *(ushort *)(*(int *)(DAT_0004164c + 4) + 0x20) & 0xfffe;
  *(undefined4 *)(iVar2 + 0x14) = 1;
  *(undefined *)(iVar1 + 0x4d) = 6;
  if (*(char *)(iVar1 + 0x4c) < '\a') {
    iVar2 = iVar2 + 0x20;
    *(undefined2 *)(iVar2 + DAT_00041640) = 0x4a;
    *(undefined2 *)(iVar2 + DAT_00041642) = 0x4a;
  }
  (*DAT_0004165c)(iVar1,DAT_00041658,DAT_00041654,10);
  *(undefined *)(iVar1 + 0x4d) = 5;
  return;
}



void FUN_00041660(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_000417b0;
  iVar2 = DAT_000417ac;
  *(ushort *)(*(int *)(DAT_000417ac + 4) + 0x20) =
       *(ushort *)(*(int *)(DAT_000417ac + 4) + 0x20) | 1;
  *(undefined4 *)(iVar2 + 0x14) = 1;
  *(undefined *)(iVar1 + 0x4d) = 6;
  if (*(char *)(iVar1 + 0x4c) < '\a') {
    iVar2 = iVar2 + 0x20;
    *(undefined2 *)(iVar2 + DAT_0004179e) = 0x4a;
    *(undefined2 *)(iVar2 + DAT_000417a0) = 0x4a;
  }
  (*DAT_000417bc)(iVar1,DAT_000417b8,DAT_000417b4,10);
  *(undefined *)(iVar1 + 0x4d) = 5;
  return;
}



void FUN_000416aa(int param_1)

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
  
  pcVar2 = DAT_000417c4;
  pcVar1 = DAT_000417c0;
  iVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  local_24 = '\0';
  do {
    if ((((*(int *)(param_1 + DAT_000417a2) == 0) &&
         (iVar3 = (*DAT_000417c4)(),
         *(int *)(*(int *)(*(short *)((iVar8 * 0x14 & 0xffU) + param_1 + 0x1c) * 4 +
                          *(int *)(*(int *)(iVar3 + 0x10) + 0xc)) + 4) != 0)) &&
        (iVar3 = (*DAT_000417c4)(),
        (DAT_000417c8 &
        *(uint *)(*(int *)(*(int *)(*(short *)((iVar8 * 0x14 & 0xffU) + param_1 + 0x1c) * 4 +
                                   *(int *)(*(int *)(iVar3 + 0x10) + 0xc)) + 4) + 0x50)) == 0)) &&
       (iVar3 = (*DAT_000417c4)(),
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
      *piVar5 = *piVar5 + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_000417a4);
      piVar5 = (int *)(param_1 + uVar9 + 0x24);
      iVar3 = (*pcVar2)();
      *piVar5 = *piVar5 + *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_000417a6);
      iVar10 = uVar9 + param_1 + 0x1c;
      iVar3 = (*pcVar2)();
      *(int *)(iVar10 + 0xc) =
           *(int *)(iVar10 + 0xc) +
           *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_000417a8);
    }
    uVar6 = uVar6 + 0x14;
    iVar8 = iVar8 + 1;
    local_24 = local_24 + '\x14';
    uVar7 = uVar7 + 0x14;
  } while (iVar8 < 8);
  return;
}



void FUN_00041872(char *param_1,short param_2)

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
  
  pcVar1 = DAT_00041938;
  if (*param_1 != '\0') {
    iVar9 = param_2 * 4;
    iVar2 = (*DAT_00041938)();
    if (((*(int *)(*(int *)(iVar9 + *(int *)(*(int *)(iVar2 + 0x10) + 0xc)) + 4) != 0) &&
        (iVar2 = (*pcVar1)(),
        (DAT_0004193c &
        *(uint *)(*(int *)(*(int *)(iVar9 + *(int *)(*(int *)(iVar2 + 0x10) + 0xc)) + 4) + 0x50)) ==
        0)) && (iVar2 = (*pcVar1)(),
               '\0' < **(char **)(iVar9 + *(int *)(*(int *)(iVar2 + 0x10) + 0xc)))) {
      sVar4 = (*DAT_00041940)(((int)*param_1 & 0xffU) * (int)DAT_00041934);
      iVar2 = (*pcVar1)();
      sVar4 = (*DAT_00041944)(*(undefined4 *)
                               (*(int *)(iVar9 + *(int *)(*(int *)(iVar2 + 0x10) + 0xc)) + 4),
                              (int)sVar4,2);
      iVar8 = (int)DAT_00041936;
      uVar5 = *(undefined4 *)(param_1 + 4);
      uVar6 = *(undefined4 *)(param_1 + 8);
      uVar7 = *(undefined4 *)(param_1 + 0xc);
      iVar2 = (*pcVar1)();
      uVar3 = (*DAT_00041948)(*(undefined4 *)
                               (*(int *)(iVar9 + *(int *)(*(int *)(iVar2 + 0x10) + 0xc)) + 4));
      iVar2 = (*pcVar1)();
      (*DAT_0004194c)(*(undefined4 *)(*(int *)(iVar9 + *(int *)(*(int *)(iVar2 + 0x10) + 0xc)) + 4),
                      (int)sVar4,uVar3,3,uVar5,uVar6,uVar7,iVar8);
    }
  }
  *param_1 = '\0';
  return;
}



int FUN_00041950(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = DAT_00041a9c;
  iVar2 = (*DAT_00041a9c)();
  iVar2 = (int)*(short *)(*(int *)(*(int *)(iVar2 + 0x10) + 0xc) + (int)DAT_00041a92);
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      return -1;
    }
    iVar3 = (*pcVar1)();
    iVar4 = iVar2 * 4;
  } while (((*(int *)(*(int *)(iVar4 + *(int *)(*(int *)(iVar3 + 0x10) + 0xc)) + 4) == 0) ||
           (iVar3 = (*pcVar1)(),
           (DAT_00041aa0 &
           *(uint *)(*(int *)(*(int *)(iVar4 + *(int *)(*(int *)(iVar3 + 0x10) + 0xc)) + 4) + 0x50))
           != 0)) ||
          (iVar3 = (*pcVar1)(), **(char **)(iVar4 + *(int *)(*(int *)(iVar3 + 0x10) + 0xc)) < '\x01'
          ));
  return iVar2;
}



int FUN_000419bc(undefined4 param_1,char param_2)

{
  code *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  
  iVar4 = (*DAT_00041aa8)(param_1,DAT_00041aa4,0x68);
  pcVar2 = DAT_00041ab0;
  pcVar1 = DAT_00041aac;
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 0x44) = param_1;
    *(char *)(iVar4 + 0x60) = param_2;
    *(int *)(iVar4 + 0x3c) = (int)param_2 << 0x19;
    uVar5 = (*pcVar1)();
    iVar6 = (*pcVar2)(uVar5 >> 0x10,DAT_00041ab4);
    *(int *)(iVar4 + 0x40) = iVar6 + DAT_00041ab8;
    *(undefined4 *)(iVar4 + 0x48) = 0;
    *(undefined4 *)(iVar4 + 0x4c) = 0;
    *(undefined4 *)(iVar4 + 0x50) = 0;
    uVar5 = (*pcVar1)();
    iVar6 = (*pcVar2)(uVar5 >> 0x10,(int)DAT_00041a94);
    *(int *)(iVar4 + 0x54) = iVar6 + DAT_00041a96;
    uVar5 = (*pcVar1)();
    iVar6 = (*pcVar2)(uVar5 >> 0x10,(int)DAT_00041a98);
    uVar3 = DAT_00041abc;
    *(int *)(iVar4 + 0x58) = iVar6 + DAT_00041a9a;
    *(undefined4 *)(iVar4 + 0x5c) = uVar3;
    uVar5 = (*pcVar1)();
    sVar7 = (*pcVar2)(uVar5 >> 0x10,0xf);
    *(short *)(iVar4 + 100) = sVar7 + 5;
    FUN_00041d3c(iVar4);
    uVar3 = DAT_00041ac4;
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(*(int *)(*DAT_00041ac0 + 0xc) + 4);
    (*DAT_00041ac8)(iVar4 + 8,iVar4,iVar4 + 0x24,(int)*(short *)(*(int *)(iVar4 + 4) + 4),uVar3);
  }
  return iVar4;
}



void FUN_00041d3c(int param_1)

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
  
  pcVar2 = DAT_00041ee8;
  iVar8 = *(int *)(*(int *)(param_1 + 0x44) + 0x10);
  iVar4 = (*DAT_00041ee8)();
  iVar5 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + (int)DAT_00041eda);
  iVar9 = *(int *)(*(int *)(param_1 + 0x44) + 0x14);
  iVar4 = (*pcVar2)();
  iVar6 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + (int)DAT_00041edc);
  iVar10 = *(int *)(*(int *)(param_1 + 0x44) + 0x18);
  iVar4 = (*pcVar2)();
  pcVar3 = DAT_00041eec;
  iVar7 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + (int)DAT_00041ede);
  iVar4 = (*DAT_00041eec)(iVar8 - iVar5,*(undefined4 *)(param_1 + 0x50));
  iVar5 = (*pcVar3)(iVar9 - iVar6,*(undefined4 *)(param_1 + 0x50));
  iVar6 = (*pcVar3)(iVar10 - iVar7,*(undefined4 *)(param_1 + 0x50));
  iVar7 = (*pcVar2)();
  *(int *)(param_1 + 0x30) =
       *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x18) + (int)DAT_00041eda) + iVar4;
  iVar4 = (*pcVar2)();
  *(int *)(param_1 + 0x34) =
       *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + (int)DAT_00041edc) + iVar5;
  iVar4 = (*pcVar2)();
  *(int *)(param_1 + 0x38) =
       *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x18) + (int)DAT_00041ede) + iVar6;
  local_2c = *(undefined4 *)(*(int *)(param_1 + 0x44) + (int)DAT_00041ee0);
  uStack40 = *(undefined4 *)(*(int *)(param_1 + 0x44) + (int)DAT_00041ee2);
  iStack36 = *(int *)(*(int *)(param_1 + 0x44) + (int)DAT_00041ee4) + *(int *)(param_1 + 0x3c);
  (*DAT_00041ef0)(&local_38);
  *(undefined4 *)(param_1 + 0x30) = local_38;
  *(undefined4 *)(param_1 + 0x34) = uStack52;
  *(undefined4 *)(param_1 + 0x38) = uStack48;
  sVar1 = *(short *)(param_1 + 100);
  *(short *)(param_1 + 100) = sVar1 + -1;
  if (sVar1 < 0) {
    *(undefined2 *)(param_1 + 100) = 0xffff;
    if (*(int *)(param_1 + 0x50) < DAT_00041ef4) {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x40);
      iVar4 = (int)DAT_0004203a;
      iVar5 = (int)DAT_0004203c;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      iVar4 = *(int *)(param_1 + 0x5c) - iVar4;
      *(int *)(param_1 + 0x5c) = iVar4;
      if (iVar4 < iVar5) {
        *(int *)(param_1 + 0x5c) = iVar5;
      }
    }
    else {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) >> 1;
      iVar4 = (int)DAT_00042040;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x58);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (int)DAT_0004203e;
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
      (*DAT_00042044)(0x1b);
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



void FUN_00042272(int param_1)

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
  
  pcVar3 = DAT_000423d4;
  pcVar2 = DAT_000423d0;
  uVar8 = DAT_000423cc;
  uVar1 = DAT_000423be;
  uVar5 = (*DAT_000423d0)();
  uVar6 = (*pcVar3)(uVar5 >> 0x10,(int)DAT_000423c0);
  uVar5 = (*pcVar2)();
  (*pcVar3)(uVar5 >> 0x10,uVar8);
  uVar6 = (*pcVar3)(*(undefined4 *)(DAT_000423d8 + (short)(extraout_var & uVar1) * 4),uVar6);
  *(undefined4 *)(param_1 + 0xc) = uVar6;
  uVar5 = (*pcVar2)();
  uVar6 = (*pcVar3)(uVar5 >> 0x10,(int)DAT_000423c0);
  uVar5 = (*pcVar2)();
  (*pcVar3)(uVar5 >> 0x10,uVar8);
  uVar6 = (*pcVar3)(*(undefined4 *)(DAT_000423dc + (short)(extraout_var_00 & uVar1) * 4),uVar6);
  uVar5 = (*pcVar2)();
  (*pcVar3)(uVar5 >> 0x10,uVar8);
  uVar7 = (*pcVar3)(*(undefined4 *)(DAT_000423d8 + (short)(extraout_var_01 & uVar1) * 4),uVar6);
  *(undefined4 *)(param_1 + 0x10) = uVar7;
  uVar5 = (*pcVar2)();
  (*pcVar3)(uVar5 >> 0x10,uVar8);
  uVar8 = (*pcVar3)(*(undefined4 *)(DAT_000423dc + (short)(extraout_var_02 & uVar1) * 4),uVar6);
  *(undefined4 *)(param_1 + 8) = uVar8;
  iVar9 = (int)DAT_000423c6;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - (int)DAT_000423c2;
  *(undefined4 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(int *)(param_1 + 0x3c) = (int)DAT_000423c4;
  uVar8 = (*pcVar3)(iVar9,*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x14) = uVar8;
  uVar8 = (*pcVar3)((int)DAT_000423c6,*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0x18) = uVar8;
  uVar5 = (*pcVar2)();
  iVar9 = (*pcVar3)(uVar5 >> 0x10,DAT_000423e0);
  puVar4 = DAT_000423e4;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar9 + DAT_000423c8;
  *(undefined4 *)(param_1 + 0x20) = *puVar4;
  *(undefined4 *)(param_1 + 0x24) = puVar4[1];
  *(undefined4 *)(param_1 + 0x28) = puVar4[2];
  *(undefined4 *)(param_1 + 0x2c) = puVar4[3];
  *(undefined4 *)(param_1 + 0x30) = puVar4[4];
  *(undefined4 *)(param_1 + 0x34) = puVar4[5];
  *(undefined2 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar5 = (*pcVar2)();
  iVar9 = (*pcVar3)(uVar5 >> 0x10,DAT_000423e8);
  *(int *)(param_1 + 0x54) = iVar9 + DAT_000423ec;
  return;
}



void FUN_000423a2(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 0x4c) == 0) {
    if (DAT_000423f0 <= *(int *)(param_1 + 0x38)) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x1c);
      puVar1 = DAT_00042504;
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
  else if ((*(short *)(param_1 + 0x4c) == 1) && (DAT_000423f0 <= *(int *)(param_1 + 0x38))) {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x3c) + *DAT_00042508;
  *(int *)(param_1 + 0x3c) = iVar2;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x54);
  (*DAT_0004250c)(param_1);
  (*DAT_00042510)(param_1 + 8,param_1 + 0x20,param_1 + 0x14,param_1 + 0x2c,param_1 + 0x40,
                  *(undefined4 *)(param_1 + 0x38));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00042486(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack24;
  int iStack20;
  undefined4 uStack16;
  
  pcVar1 = _DAT_00042514;
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar2 = (*_DAT_00042514)();
    uStack24 = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x18) + 0x14);
    iVar2 = (*pcVar1)();
    iStack20 = *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x18) + 0x18) + _LAB_00042517_1;
    uStack16 = *(undefined4 *)(param_1 + 0x58);
    iVar2 = (*pcVar1)();
    iVar3 = *(int *)(*(int *)(iVar2 + 0x10) + 0x18);
    iVar2 = (int)_LAB_00042500;
    (*DAT_0004251c)();
    (*DAT_00042520)(iVar2 + iVar3 + 0x18);
    (*DAT_00042524)(&uStack24);
    (*DAT_00042528)(param_1,param_1 + 0x40,(int)_LAB_00042502);
    (*DAT_0004252c)();
  }
  return;
}



void FUN_00042d1c(int param_1,char param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  pcVar1 = DAT_00042e98;
  iVar7 = (int)DAT_00042e82;
  if (*(int *)(param_1 + 0x54) < 0x10) {
    iVar8 = DAT_00042e94 - *(int *)(param_1 + 0x54) * (int)DAT_00042e84;
  }
  else {
    iVar8 = iVar7;
    if ((param_2 != '\0') && (param_2 == '\x01')) {
      iVar7 = (int)DAT_00042e86;
      iVar8 = (int)DAT_00042e88;
    }
  }
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar5 = *(int *)(*(int *)(param_1 + 0x48) + 4);
  iVar4 = *(int *)(param_1 + 0x20);
  iVar6 = *(int *)(*(int *)(param_1 + 0x48) + 8);
  iVar2 = (*DAT_00042e98)(**(int **)(param_1 + 0x48) - *(int *)(param_1 + 0x18),iVar7);
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



void FUN_00042e1a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar1 = DAT_00042e98;
  *(int *)(param_1 + DAT_00042e8a) = *(int *)(param_1 + DAT_00042e8a) + DAT_00042e9c;
  uVar6 = *(undefined4 *)(param_1 + 0x3c);
  iVar2 = (*pcVar1)(uVar6);
  uVar7 = *(undefined4 *)(param_1 + 0x40);
  iVar3 = (*pcVar1)(uVar7);
  uVar8 = *(undefined4 *)(param_1 + 0x44);
  iVar4 = (*pcVar1)(uVar8);
  iVar5 = (*pcVar1)((int)DAT_00042e8c);
  if (iVar5 < iVar2 + iVar3 + iVar4) {
    (*DAT_00042ea0)(param_1 + 0x3c,&uStack24,param_3,param_4,uVar7,uVar8,uVar6);
    *(undefined4 *)(param_1 + DAT_00042e8e) = uStack24;
    *(undefined4 *)(param_1 + DAT_00042e90) = uStack20;
  }
  return;
}



undefined4 FUN_00042ef0(int param_1)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  
  pcVar2 = DAT_00042f84;
  do {
    sVar1 = *(short *)(param_1 + DAT_00042f76);
    iVar3 = (*pcVar2)();
    if (*(short *)(*(int *)(*(int *)(iVar3 + 0x10) + 0xc) + (int)DAT_00042f78) <= sVar1) {
      return 0;
    }
    iVar3 = (*pcVar2)();
    if ('\0' < **(char **)(*(short *)(DAT_00042f76 + param_1) * 4 +
                          *(int *)(*(int *)(iVar3 + 0x10) + 0xc))) {
      iVar3 = (*pcVar2)();
      iVar3 = *(int *)(*(int *)(*(short *)(DAT_00042f76 + param_1) * 4 +
                               *(int *)(*(int *)(iVar3 + 0x10) + 0xc)) + 4);
      *(int *)(param_1 + 0x4c) = iVar3;
      if ((iVar3 != 0) && ((DAT_00042f88 & *(uint *)(iVar3 + 0x50)) == 0)) {
        return 1;
      }
    }
    *(short *)(param_1 + DAT_00042f76) = *(short *)(param_1 + DAT_00042f76) + 1;
  } while( true );
}



void FUN_00043a18(int param_1)

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



int FUN_00043a34(undefined4 param_1,undefined param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*DAT_00043b5c)(param_1,DAT_00043b58,(int)DAT_00043b44);
  if (iVar1 != 0) {
    iVar2 = (int)DAT_00043b46;
    *(undefined4 *)(iVar1 + 0xc) = param_1;
    *(undefined *)(iVar1 + iVar2) = 0;
    *(undefined *)(DAT_00043b48 + iVar1) = param_2;
    iVar2 = (int)DAT_00043b4a;
    *(undefined2 *)(iVar1 + iVar2) = 0;
    *(undefined4 *)(iVar1 + iVar2 + -0x10) = 0;
  }
  return iVar1;
}



uint FUN_00043dc4(int *param_1)

{
  ushort uVar1;
  code *pcVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
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
  
  pcVar2 = DAT_00043e7c;
  iVar6 = (*DAT_00043e7c)();
  *(undefined4 *)((int)param_1 + (int)DAT_00043e72) =
       *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x18) + 8);
  iVar6 = (*pcVar2)();
  *(undefined4 *)((int)param_1 + (int)DAT_00043e74) =
       *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x18) + 0xc);
  iVar6 = (*pcVar2)();
  puVar3 = PTR_DAT_00043e80;
  iVar7 = (int)DAT_00043e76;
  *(undefined4 *)((int)param_1 + iVar7) =
       *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x18) + 0x10);
  pcVar4 = DAT_00043e84;
  uVar8 = (int)*(char *)((int)param_1 + iVar7 + 0x2a) & 0xff;
  if (uVar8 == 0) {
    (*DAT_00043e88)(param_1,2);
    *param_1 = **(int **)(*DAT_00043e8c + 0x2c);
    iVar6 = *param_1;
    iVar6 = (*DAT_00043e90)(param_1,param_1 + 4,0,iVar6,4,*(undefined4 *)(iVar6 + 0x34),
                            *(undefined4 *)(iVar6 + 0x2c),0,0);
    if (iVar6 == 0) {
      uVar8 = (uint)DAT_00043e78;
      *(undefined4 *)(param_1[3] + uVar8) = 1;
      if (param_1 == (int *)0x0) {
        return uVar8;
      }
      param_1[-1] = param_1[-1] | 1;
      return uVar8;
    }
    iStack48 = 0;
    local_38 = 0;
    iStack52 = DAT_0004402c;
    iVar6 = (*pcVar2)();
    iVar7 = *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x18) + 8);
    uVar8 = (*DAT_00044030)();
    iVar6 = (*pcVar4)(uVar8 >> 0x10,DAT_00044034);
    local_2c = iVar6 + iVar7 + DAT_00044038;
    iVar6 = (*pcVar2)();
    iVar6 = *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x18) + 0xc);
    uVar8 = (*DAT_00044030)();
    iStack40 = (*pcVar4)(uVar8 >> 0x10,DAT_0004403c);
    iStack40 = iStack40 + iVar6;
    iVar6 = (*pcVar2)();
    iStack36 = *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x18) + 0x10) + DAT_00044040;
    param_1[0x18] = (int)puVar3;
    *(undefined4 *)((int)param_1 + (int)DAT_00044022) = 0;
    *(undefined4 *)((int)param_1 + (int)DAT_00044024) = 0;
    iVar6 = (int)DAT_00044026;
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
    pcVar5 = DAT_00044030;
    param_1[0x25] = 0;
    param_1[0x28] = local_2c;
    param_1[0x29] = iStack40;
    param_1[0x2a] = iStack36;
    param_1[-3] = DAT_00044044;
    *(undefined2 *)((int)param_1 + 0x106) = 0;
    uVar8 = (*pcVar5)();
    iVar6 = (*pcVar4)(uVar8 >> 0x10,8);
    pcVar5 = DAT_00044048;
    iVar7 = 0;
    if (0 < iVar6) {
      do {
        (*pcVar5)(param_1 + 4);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar6);
    }
    *(char *)((int)param_1 + (int)DAT_00044028) =
         *(char *)((int)param_1 + (int)DAT_00044028) + '\x01';
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
  iStack52 = iStack52 + DAT_0004402c;
  FUN_00044b20(param_1,0);
  iVar6 = (*pcVar4)(*(undefined4 *)(param_1[3] + (int)DAT_00044116),puVar3);
  param_1[0x18] = (int)(puVar3 + iVar6);
  uVar1 = *(ushort *)((int)param_1 + (int)DAT_00044118);
  *(ushort *)((int)param_1 + (int)DAT_00044118) = uVar1 + 1;
  uVar8 = (uint)uVar1;
  if (uVar8 == 0x5a) {
    uVar8 = (uint)DAT_0004411a;
    *(undefined4 *)((int)(char)(*(char *)((int)param_1 + uVar8) * '$') + param_1[3]) = 1;
  }
  return uVar8;
}



uint FUN_0004409e(int param_1)

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
  
  iVar7 = DAT_00044750;
  pcVar5 = DAT_00044130;
  pcVar4 = DAT_0004412c;
  pcVar3 = DAT_00044128;
  uVar6 = (int)*(char *)(param_1 + DAT_0004411c) & 0xff;
  if (uVar6 == 0) {
    uVar6 = (*DAT_00044130)();
    iVar7 = (*pcVar3)(uVar6 >> 0x10,(int)DAT_0004411e);
    *(int *)(DAT_00044122 + param_1) = iVar7 + DAT_00044120;
    if (*(int *)(*(int *)(param_1 + 0xc) + (int)DAT_00044124) == 0) {
      uVar6 = (*pcVar5)();
      iVar7 = (*pcVar3)(uVar6 >> 0x10,0xe);
      iVar7 = iVar7 + 1;
    }
    else {
      uVar6 = (*pcVar5)();
      iVar7 = (*pcVar3)(uVar6 >> 0x10,0x14);
      iVar7 = iVar7 + 0x28;
    }
    *(int *)(DAT_000442ea + param_1) = iVar7;
    if (*(char *)(*(int *)(param_1 + 0xc) + 0x6c) == *(char *)(param_1 + DAT_000442ec)) {
      iVar7 = (*pcVar4)();
      iVar8 = *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_000442ee);
      iVar7 = (*pcVar4)();
      if (*(int *)(*(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_000442f0) * 0x20 +
                   iVar8 + 0x1c) != 0) {
        piVar9 = &local_2c;
        iVar7 = (*pcVar4)();
        iVar8 = *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_000442ee);
        iVar7 = (*pcVar4)();
        iVar8 = *(int *)(*(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_000442f0) * 0x20
                         + iVar8 + 0x1c);
        iVar7 = (*pcVar4)();
        cVar1 = *(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_000442f0);
        (*pcVar4)();
        cVar11 = (*DAT_000442f4)();
        *piVar9 = *(int *)(cVar1 * 0x60 + iVar8 + (int)(char)(cVar11 * '\f'));
        piVar9 = &iStack40;
        iVar7 = (*pcVar4)();
        iVar8 = *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_000442ee);
        iVar7 = (*pcVar4)();
        iVar8 = *(int *)(*(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_000442f0) * 0x20
                         + iVar8 + 0x1c);
        iVar7 = (*pcVar4)();
        cVar1 = *(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_000442f0);
        (*pcVar4)();
        cVar11 = (*DAT_000442f4)();
        *piVar9 = *(int *)((int)(char)(cVar11 * '\f') + cVar1 * 0x60 + iVar8 + 4);
        piVar9 = aiStack36;
        iVar7 = (*pcVar4)();
        iVar8 = *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_000442ee);
        iVar7 = (*pcVar4)();
        iVar8 = *(int *)(*(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_000442f0) * 0x20
                         + iVar8 + 0x1c);
        iVar7 = (*pcVar4)();
        cVar1 = *(char *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_000442f0);
        (*pcVar4)();
        cVar11 = (*DAT_000442f4)();
        *piVar9 = *(int *)((int)(char)(cVar11 * '\f') + cVar1 * 0x60 + iVar8 + 8);
        iVar7 = (*pcVar3)(local_2c,local_2c);
        iVar8 = (*pcVar3)(iStack40,iStack40);
        iVar8 = iVar8 + iVar7;
        iVar7 = (*pcVar3)(aiStack36[0],aiStack36[0]);
        if (0 < iVar7 + iVar8) {
          sVar10 = (*DAT_00044484)();
          if (sVar10 == 1) {
            iStack40 = iStack40 + DAT_00044488;
            aiStack36[0] = aiStack36[0] - DAT_0004448c;
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
          iVar7 = (int)DAT_0004447c;
          *(int *)(*(int *)(param_1 + 0xc) + 0x78) = aiStack36[0];
          *(int *)(*(int *)(param_1 + 0xc) + 0x7c) = iVar7 + param_1;
          *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x9c) = 1;
          (*DAT_00044490)();
          (*DAT_00044494)(*(int *)(param_1 + 0xc) + 0x70);
          (*DAT_00044498)(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x7c));
          (*DAT_0004449c)();
        }
      }
    }
    *(char *)(param_1 + DAT_0004447e) = *(char *)(param_1 + DAT_0004447e) + '\x01';
  }
  else if (uVar6 != 1) {
    if (uVar6 != 2) {
      if (uVar6 != 3) {
        return uVar6;
      }
      uStack48 = 0;
      piVar9 = (int *)(DAT_000449fe + param_1);
      iStack52 = 0;
      local_38 = 0;
      iVar7 = (*DAT_0004412c)();
      iVar8 = (int)DAT_00044a02;
      *piVar9 = *piVar9 + *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_00044a00);
      piVar9 = (int *)(iVar8 + param_1);
      iVar7 = (*pcVar4)();
      iVar8 = (int)DAT_00044a06;
      *piVar9 = *piVar9 + *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_00044a04);
      piVar9 = (int *)(iVar8 + param_1);
      iVar7 = (*pcVar4)();
      *piVar9 = *piVar9 + *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + (int)DAT_00044a08);
      uVar6 = FUN_00044b20(param_1,0);
      return uVar6;
    }
    iVar8 = (int)DAT_00044748;
    *(int *)(param_1 + iVar8) = *(int *)(param_1 + iVar8) + *(int *)(iVar8 + 4 + param_1);
    if ((iVar7 < *(int *)(param_1 + iVar8)) &&
       (*(int *)((int)(char)(*(char *)(param_1 + DAT_0004474a) * '$') + *(int *)(param_1 + 0xc) + 8)
        == 0)) {
      iVar7 = (int)DAT_0004474a;
      *(undefined4 *)((int)(char)(*(char *)(param_1 + iVar7) * '$') + *(int *)(param_1 + 0xc) + 8) =
           1;
      pcVar12 = (char *)(((int)*(short *)((int)(char)(*(char *)(param_1 + iVar7) * '$') +
                                          *(int *)(param_1 + 0xc) + 0x20) & 0xffffU) +
                        *(int *)(*(int *)(param_1 + 0xc) + 0x90));
      *pcVar12 = *pcVar12 + '\x01';
    }
    if (*(int *)(param_1 + DAT_00044748) <= DAT_00044754) {
      iVar7 = (*pcVar4)();
      *(undefined4 *)(param_1 + DAT_00044854) =
           *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x18) + 8);
      iVar7 = (*pcVar4)();
      *(undefined4 *)(param_1 + DAT_00044856) =
           *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x18) + 0xc);
      iVar7 = (*pcVar4)();
      piVar9 = &local_44;
      *(undefined4 *)(param_1 + DAT_00044852) =
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
      pcVar4 = DAT_00044860;
      *piVar9 = iVar8 - *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x18) + 0x10);
      (*pcVar4)(&local_44,&local_4c);
      local_38 = local_4c;
      uStack48 = 0;
      iStack52 = iStack72 + DAT_00044864;
      uVar14 = DAT_00044868;
      if (*(int *)(*(int *)(param_1 + 0xc) + (int)DAT_00044858) == 0) {
        uVar14 = 0;
      }
      FUN_00044b20(param_1,uVar14);
      local_44 = *(int *)((int)(char)(*(char *)(param_1 + DAT_000449f4) * '$') +
                          *(int *)(param_1 + 0xc) + 0x14) - *(int *)(param_1 + DAT_000449f6);
      iStack64 = *(int *)((int)(char)(*(char *)(param_1 + DAT_000449f4) * '$') +
                          *(int *)(param_1 + 0xc) + 0x18) - *(int *)(param_1 + DAT_000449f8);
      iStack60 = *(int *)((int)(char)(*(char *)(param_1 + DAT_000449f4) * '$') +
                          *(int *)(param_1 + 0xc) + 0x1c) - *(int *)(param_1 + DAT_000449fa);
      piVar9 = &local_44;
      iVar7 = (*pcVar3)(local_44,*(undefined4 *)(param_1 + DAT_000449fc));
      *piVar9 = iVar7;
      piVar9 = &iStack64;
      iVar7 = (*pcVar3)(iStack64,*(undefined4 *)(param_1 + DAT_000449fc));
      *piVar9 = iVar7;
      piVar9 = &iStack60;
      iVar7 = (*pcVar3)(iStack60,*(undefined4 *)(param_1 + DAT_000449fc));
      *piVar9 = iVar7;
      iVar7 = (int)DAT_000449f6;
      *(int *)(param_1 + iVar7 + 0x48) = *(int *)(param_1 + iVar7) + local_44;
      *(int *)(param_1 + iVar7 + 0x4c) = *(int *)(param_1 + iVar7 + 4) + iStack64;
      *(int *)(param_1 + iVar7 + 0x50U) = *(int *)(param_1 + iVar7 + 8) + iStack60;
      return iVar7 + 0x50U;
    }
    iVar7 = (int)DAT_0004474a;
    *(undefined4 *)
     ((int)(char)(*(char *)(param_1 + DAT_0004474a) * '$') + *(int *)(param_1 + 0xc) + 0xc) = 1;
    piVar9 = &local_44;
    iVar13 = *(int *)((int)(char)(*(char *)(param_1 + iVar7) * '$') + *(int *)(param_1 + 0xc) + 0x14
                     );
    iVar7 = (*pcVar4)();
    iVar8 = (int)DAT_0004474a;
    *piVar9 = iVar13 - *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x18) + 8);
    piVar9 = &iStack64;
    iVar7 = *(int *)((int)(char)(*(char *)(param_1 + iVar8) * '$') + *(int *)(param_1 + 0xc) + 0x18)
    ;
    iVar8 = (*pcVar4)();
    iVar13 = (int)DAT_0004474a;
    *piVar9 = iVar7 - *(int *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x18) + 0xc);
    piVar9 = &iStack60;
    iVar7 = *(int *)((int)(char)(*(char *)(param_1 + iVar13) * '$') + *(int *)(param_1 + 0xc) + 0x1c
                    );
    iVar8 = (*pcVar4)();
    iVar13 = (int)DAT_00044748;
    *piVar9 = iVar7 - *(int *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x18) + 0x10);
    piVar9 = &local_44;
    iVar7 = (*pcVar3)(local_44,*(undefined4 *)(param_1 + iVar13));
    *piVar9 = iVar7;
    piVar9 = &iStack64;
    iVar7 = (*pcVar3)(iStack64,*(undefined4 *)(param_1 + DAT_00044748));
    *piVar9 = iVar7;
    piVar9 = &iStack60;
    iVar7 = (*pcVar3)(iStack60,*(undefined4 *)(param_1 + DAT_00044748));
    *piVar9 = iVar7;
    iVar7 = (*pcVar4)();
    *(int *)(param_1 + DAT_0004474c) =
         *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x18) + 8) + local_44;
    iVar7 = (*pcVar4)();
    *(int *)(param_1 + DAT_0004474e) =
         *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x18) + 0xc) + iStack64;
    iVar7 = (*pcVar4)();
    iVar8 = (int)DAT_00044852;
    *(int *)(param_1 + iVar8) = *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x18) + 0x10) + iStack60;
    *(undefined4 *)(param_1 + iVar8 + -0x38) = *(undefined4 *)(param_1 + iVar8 + 0x10);
    *(undefined4 *)(param_1 + iVar8 + -0x34) = *(undefined4 *)(param_1 + iVar8 + 0x14);
    uVar14 = DAT_0004485c;
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
  pcVar3 = DAT_000444a0;
  *piVar9 = iVar7 - *(int *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x18) + 0x10);
  (*pcVar3)(&local_44,&local_4c);
  local_38 = local_4c;
  uStack48 = 0;
  iStack52 = iStack72 + DAT_000444a4;
  if (*(int *)(*(int *)(param_1 + 0xc) + (int)DAT_00044480) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = DAT_00044598;
    if (*(int *)((int)(char)(*(char *)(param_1 + DAT_0004457e) * '$') + *(int *)(param_1 + 0xc) + 4)
        == 0) {
      iVar8 = (int)DAT_00044582;
      *(undefined4 *)(DAT_00044582 + param_1) = *(undefined4 *)(param_1 + DAT_00044580);
      iVar7 = (int)DAT_00044584;
      *(undefined4 *)(param_1 + iVar7 + 0x6c) = *(undefined4 *)(param_1 + iVar7);
      piVar9 = DAT_0004458c;
      *(undefined4 *)(param_1 + iVar7 + 0x70) = *(undefined4 *)(param_1 + iVar7 + 4);
      uVar14 = DAT_00044590;
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(int *)(*piVar9 + 0xc) + 4);
      (*DAT_00044594)(DAT_00044586 + param_1,param_1,iVar8 + param_1,
                      (int)*(short *)(*(int *)(param_1 + 4) + 4),uVar14);
      *(undefined4 *)
       ((int)(char)(*(char *)(param_1 + DAT_0004457e) * '$') + *(int *)(param_1 + 0xc) + 4) = 1;
      uVar14 = DAT_00044598;
    }
  }
  FUN_00044b20(param_1,uVar14);
  iVar7 = (int)DAT_00044588;
  uVar2 = *(ushort *)(param_1 + iVar7);
  *(ushort *)(param_1 + iVar7) = uVar2 + 1;
  uVar6 = iVar7 - 10;
  if (*(int *)(param_1 + uVar6) < (int)(uint)uVar2) {
    iVar7 = (int)DAT_00044580;
    *(undefined4 *)(param_1 + iVar7 + 0x48) = *(undefined4 *)(param_1 + iVar7);
    *(undefined4 *)(param_1 + iVar7 + 0x4c) = *(undefined4 *)(param_1 + iVar7 + 4);
    uVar14 = DAT_0004459c;
    *(undefined4 *)(param_1 + iVar7 + 0x50) = *(undefined4 *)(param_1 + iVar7 + 8);
    *(undefined4 *)(param_1 + -0xc) = uVar14;
    pcVar3 = DAT_000445a0;
    *(undefined2 *)(param_1 + iVar7 + 0x66) = 0;
    (*pcVar3)(0x11);
    uVar6 = (uint)DAT_0004458a;
    *(char *)(param_1 + uVar6) = *(char *)(param_1 + uVar6) + '\x01';
  }
  return uVar6;
}



void FUN_00044a0a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + DAT_00044afc) == '\0') {
    *(char *)(param_1 + DAT_00044afc) = *(char *)(param_1 + DAT_00044afc) + '\x01';
  }
  else if (*(char *)(param_1 + DAT_00044afc) != '\x01') goto LAB_00044ad2;
  iVar4 = (int)DAT_00044afe;
  uVar2 = (*DAT_00044b14)();
  iVar3 = (*DAT_00044b18)(uVar2 >> 0x10,(int)DAT_00044b00);
  *(int *)(iVar4 + param_1) = *(int *)(iVar4 + param_1) + iVar3 + DAT_00044b02;
  iVar4 = (int)DAT_00044b04;
  uVar2 = (*DAT_00044b14)();
  iVar3 = (*DAT_00044b18)(uVar2 >> 0x10,(int)DAT_00044b06);
  *(int *)(iVar4 + param_1) = *(int *)(iVar4 + param_1) + iVar3 + DAT_00044b08;
  *(int *)(param_1 + DAT_00044b0a) = *(int *)(param_1 + DAT_00044b0a) + DAT_00044b1c;
  FUN_00044b20(param_1,0,param_3,param_4,0,0,0);
  uVar1 = *(ushort *)(param_1 + DAT_00044b0c);
  *(ushort *)(param_1 + DAT_00044b0c) = uVar1 + 1;
  if ((0x42 < uVar1) &&
     (*(undefined4 *)
       ((int)(char)(*(char *)(param_1 + DAT_00044b0e) * '$') + *(int *)(param_1 + 0xc) + 0x10) = 1,
     param_1 != 0)) {
    *(uint *)(param_1 + -4) = *(uint *)(param_1 + -4) | 1;
  }
LAB_00044ad2:
  if (*(int *)((int)(char)(*(char *)(param_1 + DAT_00044b0e) * '$') + *(int *)(param_1 + 0xc) + 4)
      != 0) {
    *(undefined4 *)(param_1 + DAT_00044b10) = 1;
  }
  return;
}



void FUN_00044b20(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
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
  
  (*DAT_00044cb8)(DAT_00044ca4 + param_1);
  pcVar2 = DAT_00044cbc;
  iVar5 = (int)DAT_00044ca6;
  iVar6 = (*DAT_00044cbc)();
  iVar7 = (int)DAT_00044caa;
  *(int *)(iVar5 + param_1) =
       *(int *)(iVar5 + param_1) +
       *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 4) + (int)DAT_00044ca8);
  iVar5 = (*pcVar2)();
  iVar6 = (int)DAT_00044cae;
  *(int *)(iVar7 + param_1) =
       *(int *)(iVar7 + param_1) +
       *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_00044cac);
  iVar5 = (*pcVar2)();
  iVar7 = (int)DAT_00044ca6;
  *(int *)(iVar6 + param_1) =
       *(int *)(iVar6 + param_1) +
       *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_00044cb0);
  pcVar2 = DAT_00044cc0;
  iVar11 = *(int *)(param_1 + iVar7 + 4);
  iVar6 = *(int *)(param_1 + iVar7 + 0x40);
  iVar12 = *(int *)(param_1 + iVar7 + 8);
  iVar10 = *(int *)(param_1 + iVar7 + 0x44);
  iVar14 = (int)DAT_00044cb2;
  iVar5 = (*DAT_00044cc0)(*(int *)(param_1 + iVar7 + 0x3c) - *(int *)(param_1 + iVar7),iVar14);
  iVar6 = (*pcVar2)(iVar6 - iVar11,iVar14);
  iVar7 = (*pcVar2)(iVar10 - iVar12,iVar14);
  uVar8 = DAT_00044cc4;
  iVar10 = (int)DAT_00044cb4;
  *(int *)(param_1 + iVar10) = *(int *)(param_1 + iVar10) + iVar5;
  *(int *)(param_1 + iVar10 + 4) = *(int *)(param_1 + iVar10 + 4) + iVar6;
  *(int *)(param_1 + iVar10 + 8) = *(int *)(param_1 + iVar10 + 8) + iVar7;
  uVar13 = param_5 - *(int *)(param_1 + 0x7c);
  if ((uVar8 & uVar13) == 0) {
    uVar13 = uVar13 & DAT_00044d38;
  }
  else {
    uVar13 = uVar13 | DAT_00044cc8;
  }
  iVar5 = (*pcVar2)(uVar13,iVar14);
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + iVar5;
  uVar13 = param_6 - *(int *)(param_1 + 0x80);
  if ((uVar8 & uVar13) == 0) {
    uVar13 = uVar13 & DAT_00044d38;
  }
  else {
    uVar13 = uVar13 | DAT_00044d3c;
  }
  iVar5 = (*pcVar2)(uVar13,iVar14);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + iVar5;
  if (param_2 == 0) {
    uVar13 = param_7 - *(int *)(param_1 + DAT_00044d36);
    if ((uVar13 & uVar8) == 0) {
      uVar13 = uVar13 & DAT_00044d38;
    }
    else {
      uVar13 = uVar13 | DAT_00044d3c;
    }
    param_2 = (*pcVar2)(uVar13,iVar14);
    param_2 = *(int *)(param_1 + 0x6c) + param_2;
  }
  else {
    param_2 = *(int *)(param_1 + 0x6c) + param_2;
  }
  *(int *)(param_1 + 0x6c) = param_2;
  uVar1 = *(ushort *)(param_1 + DAT_00044ece);
  *(ushort *)(param_1 + DAT_00044ece) = uVar1 + 1;
  if (0xf < uVar1) {
    iVar5 = (*DAT_00044ee8)(*(undefined4 *)(param_1 + DAT_00044ed0),
                            *(undefined4 *)(param_1 + DAT_00044ed0));
    iVar6 = (*DAT_00044ee8)(*(undefined4 *)(param_1 + DAT_00044ed2),
                            *(undefined4 *)(param_1 + DAT_00044ed2));
    iVar7 = (*DAT_00044ee8)(*(undefined4 *)(param_1 + DAT_00044ed4),
                            *(undefined4 *)(param_1 + DAT_00044ed4));
    pcVar4 = DAT_00044ef4;
    uVar3 = DAT_00044ef0;
    uVar1 = DAT_00044ed6;
    if (iVar7 + iVar6 + iVar5 < DAT_00044eec) {
      uVar8 = (*DAT_00044ef4)();
      uVar9 = (*pcVar2)(uVar8 >> 0x10,DAT_00044ef8);
      uVar8 = (*pcVar4)();
      (*pcVar2)(uVar8 >> 0x10,uVar3);
      iVar5 = (*pcVar2)(*(undefined4 *)(DAT_00044efc + (short)(extraout_var & uVar1) * 4),uVar9);
      uVar8 = (*pcVar4)();
      uVar9 = (*pcVar2)(uVar8 >> 0x10,DAT_00044ef8);
      uVar8 = (*pcVar4)();
      (*pcVar2)(uVar8 >> 0x10,uVar3);
      uVar9 = (*pcVar2)(*(undefined4 *)(DAT_00044f00 + (short)(extraout_var_00 & uVar1) * 4),uVar9);
      uVar8 = (*pcVar4)();
      (*pcVar2)(uVar8 >> 0x10,uVar3);
      iVar6 = (*pcVar2)(*(undefined4 *)(DAT_00044efc + (short)(extraout_var_01 & uVar1) * 4),uVar9);
      uVar8 = (*pcVar4)();
      (*pcVar2)(uVar8 >> 0x10,uVar3);
      iVar7 = (*pcVar2)(*(undefined4 *)(DAT_00044f00 + (short)(extraout_var_02 & uVar1) * 4),uVar9);
      *(int *)(param_1 + DAT_00044ed8) = *(int *)(param_1 + DAT_00044ed8) + iVar7;
      iVar7 = (int)DAT_00044eda;
      *(int *)(param_1 + iVar7) = *(int *)(param_1 + iVar7) + iVar5;
      *(int *)(param_1 + iVar7 + 4) = *(int *)(param_1 + iVar7 + 4) + iVar6;
      *(undefined2 *)(param_1 + iVar7 + 0x54) = 0;
    }
  }
  iVar5 = (int)DAT_00044edc;
  iVar11 = (int)DAT_00044ee2;
  *(int *)(param_1 + iVar5) = *(int *)(param_1 + iVar5) + *(int *)(iVar5 + -0xc + param_1);
  *(int *)(param_1 + iVar5 + 4) = *(int *)(param_1 + iVar5 + 4) + *(int *)(DAT_00044ede + param_1);
  *(int *)(param_1 + iVar5 + 8) = *(int *)(param_1 + iVar5 + 8) + *(int *)(DAT_00044ee0 + param_1);
  iVar5 = (*pcVar2)(*(undefined4 *)(param_1 + iVar5),iVar11);
  iVar6 = (*pcVar2)(*(undefined4 *)(param_1 + DAT_00044ee4),iVar11);
  iVar7 = (*pcVar2)(*(undefined4 *)(param_1 + DAT_000450c4),iVar11);
  iVar10 = (int)DAT_000450c6;
  *(int *)(param_1 + iVar10) = *(int *)(param_1 + iVar10) - iVar5;
  *(int *)(param_1 + iVar10 + 4) = *(int *)(param_1 + iVar10 + 4) - iVar6;
  *(int *)(param_1 + iVar10 + 8) = *(int *)(param_1 + iVar10 + 8) - iVar7;
  *(int *)(param_1 + iVar10 + 0xc) =
       *(int *)(param_1 + iVar10 + 0xc) + *(int *)(DAT_000450c6 + param_1);
  *(int *)(param_1 + iVar10 + 0x10) =
       *(int *)(param_1 + iVar10 + 0x10) + *(int *)(DAT_000450c8 + param_1);
  *(int *)(param_1 + iVar10 + 0x14) =
       *(int *)(param_1 + iVar10 + 0x14) + *(int *)(DAT_000450c4 + param_1);
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
  uVar8 = DAT_000450d4;
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + *(int *)(param_1 + 0x74);
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + *(int *)(param_1 + 0x78);
  *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & uVar8;
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & uVar8;
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & uVar8;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + *(int *)(DAT_000450ca + param_1);
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + *(int *)(DAT_000450cc + param_1);
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + *(int *)(DAT_000450ce + param_1);
  iVar5 = (*pcVar2)(*(undefined4 *)(param_1 + 0xb8),6);
  iVar6 = (*pcVar2)(*(undefined4 *)(param_1 + DAT_000450d0),6);
  iVar7 = (*pcVar2)(*(undefined4 *)(param_1 + DAT_000451a8),6);
  iVar10 = (int)DAT_000451aa;
  *(int *)(param_1 + iVar10) = *(int *)(param_1 + iVar10) - iVar5;
  *(int *)(param_1 + iVar10 + 4) = *(int *)(param_1 + iVar10 + 4) - iVar6;
  *(int *)(param_1 + iVar10 + 8) = *(int *)(param_1 + iVar10 + 8) - iVar7;
  *(int *)(param_1 + iVar10 + 0xc) =
       *(int *)(param_1 + iVar10 + 0xc) + *(int *)(DAT_000451aa + param_1);
  *(int *)(param_1 + iVar10 + 0x10) =
       *(int *)(param_1 + iVar10 + 0x10) + *(int *)(DAT_000451ac + param_1);
  *(int *)(param_1 + iVar10 + 0x14) =
       *(int *)(param_1 + iVar10 + 0x14) + *(int *)(DAT_000451a8 + param_1);
  *(uint *)(param_1 + iVar10 + 0xc) = *(uint *)(param_1 + iVar10 + 0xc) & uVar8;
  *(uint *)(param_1 + iVar10 + 0x10) = *(uint *)(param_1 + iVar10 + 0x10) & uVar8;
  pcVar2 = DAT_000451b0;
  *(uint *)(param_1 + iVar10 + 0x14) = uVar8 & *(uint *)(param_1 + iVar10 + 0x14);
  *(undefined4 *)(param_1 + iVar10 + -4) = 0;
  *(undefined4 *)(param_1 + iVar10 + -8) = 0;
  *(undefined4 *)(param_1 + iVar10 + -0xc) = 0;
  (*pcVar2)(param_1 + 0x10);
  return;
}



void FUN_00044ff6(void)

{
  uint uVar1;
  code *pcVar2;
  int in_r0;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_r2;
  undefined4 unaff_r12;
  code *unaff_r13;
  int unaff_r14;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  *(undefined4 *)(unaff_r14 + in_r0) = in_r2;
  *(int *)(unaff_r14 + 0x74) = *(int *)(unaff_r14 + 0x74) - in_stack_00000008;
  *(int *)(unaff_r14 + 0x78) = *(int *)(unaff_r14 + 0x78) - in_stack_0000000c;
  *(int *)(unaff_r14 + 0x7c) = *(int *)(unaff_r14 + 0x7c) + *(int *)(unaff_r14 + 0x70);
  uVar1 = DAT_000450d4;
  *(int *)(unaff_r14 + 0x80) = *(int *)(unaff_r14 + 0x80) + *(int *)(unaff_r14 + 0x74);
  *(int *)(unaff_r14 + 0x84) = *(int *)(unaff_r14 + 0x84) + *(int *)(unaff_r14 + 0x78);
  *(uint *)(unaff_r14 + 0x7c) = *(uint *)(unaff_r14 + 0x7c) & uVar1;
  *(uint *)(unaff_r14 + 0x80) = *(uint *)(unaff_r14 + 0x80) & uVar1;
  *(uint *)(unaff_r14 + 0x84) = *(uint *)(unaff_r14 + 0x84) & uVar1;
  *(undefined4 *)(unaff_r14 + 0x6c) = unaff_r12;
  *(undefined4 *)(unaff_r14 + 0x68) = unaff_r12;
  *(undefined4 *)(unaff_r14 + 100) = unaff_r12;
  *(int *)(unaff_r14 + 0xb8) = *(int *)(unaff_r14 + 0xb8) + *(int *)(DAT_000450ca + unaff_r14);
  *(int *)(unaff_r14 + 0xbc) = *(int *)(unaff_r14 + 0xbc) + *(int *)(DAT_000450cc + unaff_r14);
  *(int *)(unaff_r14 + 0xc0) = *(int *)(unaff_r14 + 0xc0) + *(int *)(DAT_000450ce + unaff_r14);
  iVar3 = (*unaff_r13)(*(undefined4 *)(unaff_r14 + 0xb8),6);
  iVar4 = (*unaff_r13)(*(undefined4 *)(unaff_r14 + DAT_000450d0),6);
  iVar5 = (*unaff_r13)(*(undefined4 *)(unaff_r14 + DAT_000451a8),6);
  iVar6 = (int)DAT_000451aa;
  *(int *)(unaff_r14 + iVar6) = *(int *)(unaff_r14 + iVar6) - iVar3;
  *(int *)(unaff_r14 + iVar6 + 4) = *(int *)(unaff_r14 + iVar6 + 4) - iVar4;
  *(int *)(unaff_r14 + iVar6 + 8) = *(int *)(unaff_r14 + iVar6 + 8) - iVar5;
  *(int *)(unaff_r14 + iVar6 + 0xc) =
       *(int *)(unaff_r14 + iVar6 + 0xc) + *(int *)(DAT_000451aa + unaff_r14);
  *(int *)(unaff_r14 + iVar6 + 0x10) =
       *(int *)(unaff_r14 + iVar6 + 0x10) + *(int *)(DAT_000451ac + unaff_r14);
  *(int *)(unaff_r14 + iVar6 + 0x14) =
       *(int *)(unaff_r14 + iVar6 + 0x14) + *(int *)(DAT_000451a8 + unaff_r14);
  *(uint *)(unaff_r14 + iVar6 + 0xc) = *(uint *)(unaff_r14 + iVar6 + 0xc) & uVar1;
  *(uint *)(unaff_r14 + iVar6 + 0x10) = *(uint *)(unaff_r14 + iVar6 + 0x10) & uVar1;
  pcVar2 = DAT_000451b0;
  *(uint *)(unaff_r14 + iVar6 + 0x14) = uVar1 & *(uint *)(unaff_r14 + iVar6 + 0x14);
  *(undefined4 *)(unaff_r14 + iVar6 + -4) = unaff_r12;
  *(undefined4 *)(unaff_r14 + iVar6 + -8) = unaff_r12;
  *(undefined4 *)(unaff_r14 + iVar6 + -0xc) = unaff_r12;
  (*pcVar2)(unaff_r14 + 0x10);
  return;
}



void FUN_00045ccc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  uint uVar2;
  undefined2 uVar3;
  
  (*DAT_00045de8)(param_1,(int)*(short *)(*(int *)(param_2 + 4) + 4),param_3,param_4,param_2);
  FUN_00045e14(param_1);
  pcVar1 = DAT_00045df0;
  *(undefined4 *)(param_1 + 0x2c) = DAT_00045dec;
  uVar2 = (*pcVar1)();
  uVar3 = (*DAT_00045df4)(uVar2 >> 0x10,0xc);
  *(undefined2 *)(param_1 + 0x30) = uVar3;
  return;
}



void FUN_00045d06(int param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = DAT_00045df4;
  iVar3 = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x18) = iVar3;
  iVar3 = (*pcVar1)(iVar3,0);
  iVar3 = *(int *)(param_1 + 0x18) - iVar3;
  *(int *)(param_1 + 0x18) = iVar3;
  iVar4 = (int)DAT_00045de0;
  *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar3 & DAT_00045df8;
  iVar3 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 8);
  *(int *)(param_1 + 0xc) = iVar3;
  iVar3 = (*pcVar1)(iVar3,iVar4);
  iVar3 = *(int *)(param_1 + 0xc) - iVar3;
  *(int *)(param_1 + 0xc) = iVar3;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar3;
  uVar2 = (*DAT_00045dfc)(param_1);
  if ((uVar2 & 2) != 0) {
    uVar2 = (*DAT_00045df0)();
    iVar3 = (*pcVar1)(uVar2 >> 0x10,(int)DAT_00045de2);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) - (iVar3 + DAT_00045de4);
    FUN_00045e14(param_1);
    return;
  }
  return;
}



void FUN_00045d84(int param_1,undefined4 param_2)

{
  undefined4 local_14;
  undefined4 uStack16;
  undefined4 uStack12;
  
  uStack12 = 0;
  local_14 = 0;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x10);
  uStack16 = *(undefined4 *)(param_1 + 0x1c);
  (*DAT_00045e00)();
  (*DAT_00045e04)(param_2);
  (*DAT_00045e08)(&local_14);
  (*DAT_00045e0c)(param_1,param_1 + 0x20,*(undefined4 *)(param_1 + 0x2c));
  (*DAT_00045e10)();
  return;
}



void FUN_00045e14(int param_1)

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
  
  pcVar3 = DAT_00045f2c;
  pcVar2 = DAT_00045f28;
  uVar7 = DAT_00045f24;
  uVar1 = DAT_00045f1c;
  uVar4 = (*DAT_00045f28)();
  uVar5 = (*pcVar3)(uVar4 >> 0x10,(int)DAT_00045f1e);
  uVar4 = (*pcVar2)();
  (*pcVar3)(uVar4 >> 0x10,uVar7);
  uVar5 = (*pcVar3)(*(undefined4 *)(DAT_00045f30 + (short)(extraout_var & uVar1) * 4),uVar5);
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  uVar4 = (*pcVar2)();
  uVar5 = (*pcVar3)(uVar4 >> 0x10,(int)DAT_00045f1e);
  uVar4 = (*pcVar2)();
  (*pcVar3)(uVar4 >> 0x10,uVar7);
  uVar5 = (*pcVar3)(*(undefined4 *)(DAT_00045f34 + (short)(extraout_var_00 & uVar1) * 4),uVar5);
  uVar4 = (*pcVar2)();
  (*pcVar3)(uVar4 >> 0x10,uVar7);
  uVar6 = (*pcVar3)(*(undefined4 *)(DAT_00045f30 + (short)(extraout_var_01 & uVar1) * 4),uVar5);
  *(undefined4 *)(param_1 + 0x28) = uVar6;
  uVar4 = (*pcVar2)();
  (*pcVar3)(uVar4 >> 0x10,uVar7);
  uVar5 = (*pcVar3)(*(undefined4 *)(DAT_00045f34 + (short)(extraout_var_02 & uVar1) * 4),uVar5);
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  uVar4 = (*pcVar2)();
  if ((uVar4 & 1) == 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - (int)DAT_00045f20;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar4 = (*pcVar2)(0,uVar7);
  uVar7 = (*pcVar3)(uVar4 >> 0x10,uVar7);
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (int)DAT_00045f22;
  uVar4 = (*pcVar2)();
  iVar8 = (*pcVar3)(uVar4 >> 0x10,DAT_00045f38);
  *(undefined **)(param_1 + 0x14) = PTR_LAB_00045f3c + *(int *)(param_1 + 0x14) + iVar8;
  return;
}



void FUN_00047d3e(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  iVar4 = 0;
  uVar1 = (*DAT_00047dfc)();
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



void FUN_00047d92(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  iVar4 = 0;
  uVar1 = (*DAT_00047dfc)();
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



void FUN_0004865e(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = DAT_00048734;
  iVar3 = (int)DAT_00048722;
  *(undefined2 *)(param_1 + iVar3) = 0;
  uVar2 = DAT_00048738;
  *(undefined4 *)(param_1 + iVar3 + 4) = uVar1;
  uVar1 = DAT_0004873c;
  *(undefined4 *)(param_1 + iVar3 + 8) = uVar2;
  uVar2 = DAT_00048740;
  *(undefined4 *)(param_1 + iVar3 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + iVar3 + 0x10) = uVar2;
  iVar3 = (int)DAT_00048724;
  *(undefined2 *)(param_1 + iVar3) = 10;
  *(undefined2 *)(param_1 + iVar3 + 2) = 10;
  *(undefined2 *)(param_1 + iVar3 + 4) = 10;
  *(undefined2 *)(param_1 + iVar3 + 6) = 10;
  *(undefined *)(param_1 + iVar3 + 0xc) = 0;
  *(undefined4 *)(param_1 + iVar3 + 0x10) = 0;
  return;
}



void FUN_000487cc(int param_1,int param_2)

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
  uVar2 = (*DAT_00048868)(param_1,*(short *)(param_2 + 0x52) * 100);
  pcVar1 = DAT_00048868;
  *(undefined4 *)(param_2 + 0x54) = uVar2;
  uVar2 = (*pcVar1)(param_1,*(short *)(param_2 + 0x52) * 0xc);
  iVar5 = 0;
  *(undefined4 *)(param_2 + 0x58) = uVar2;
  for (iVar4 = 0; iVar4 < *(short *)(param_2 + 0x50); iVar4 = iVar4 + 1) {
    if (*(int *)(iVar4 * 4 + *(int *)(param_2 + 0x44)) != 0) {
      for (iVar6 = 0; iVar6 < *(int *)(*(int *)(param_2 + 0x40) + iVar4 * 8 + 4); iVar6 = iVar6 + 1)
      {
        puVar3 = (undefined4 *)(iVar6 * 0x14 + *(int *)(*(int *)(param_2 + 0x40) + iVar4 * 8));
        (*DAT_000489a8)(iVar5 * 100 + *(int *)(param_2 + 0x54),param_1,
                        iVar5 * 0xc + *(int *)(param_2 + 0x58),puVar3[4],*puVar3,
                        *(undefined4 *)(param_1 + 0x1c),0,10);
        iVar5 = iVar5 + 1;
      }
    }
  }
  return;
}



void FUN_00048a78(int param_1)

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



void FUN_00048b04(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  pcVar1 = DAT_00048c18;
  for (iVar5 = 0; iVar5 < *(short *)(param_2 + 0x52); iVar5 = iVar5 + 1) {
    iVar4 = (int)DAT_00048c04;
    iVar3 = *(int *)(param_2 + 0x54);
    iVar2 = (*pcVar1)();
    *(undefined *)(iVar5 * 100 + iVar3 + 0x60) =
         *(undefined *)
          (iVar4 + param_1 +
           ((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_00048c06) & 0xffU) * 2 +
          1);
  }
  return;
}



int FUN_00048b64(int param_1,int param_2)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | DAT_00048c1c;
  *(ushort *)(param_1 + DAT_00048c08) = (short)*(char *)(param_2 + 0x60) & 0xff;
  iVar1 = (int)*(char *)(param_2 + 0x5e);
  if (iVar1 == 0) {
    iVar1 = (int)DAT_00048c0a;
    if (*(int *)(param_1 + iVar1) != 0) {
                    // WARNING: Could not recover jumptable at 0x00048ba0. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar1 = (**(code **)(param_1 + DAT_00048c0a))(param_1);
      return iVar1;
    }
  }
  else if (iVar1 == 1) {
    iVar1 = *(int *)(param_1 + DAT_00048c0c);
    if (iVar1 != 0) {
                    // WARNING: Could not recover jumptable at 0x00048bb2. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar1 = (**(code **)(param_1 + DAT_00048c0c))(param_1);
      return iVar1;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = *(int *)(param_1 + DAT_00048c0e);
    if (iVar1 != 0) {
                    // WARNING: Could not recover jumptable at 0x00048bc4. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar1 = (**(code **)(param_1 + DAT_00048c0e))(param_1);
      return iVar1;
    }
  }
  else if ((iVar1 == 3) && (iVar1 = *(int *)(param_1 + DAT_00048c10), iVar1 != 0)) {
                    // WARNING: Could not recover jumptable at 0x00048bd6. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar1 = (**(code **)(param_1 + DAT_00048c10))(param_1);
    return iVar1;
  }
  return iVar1;
}



void FUN_00048bde(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + DAT_00048c12) < 1) {
    (*DAT_00048c20)(param_1,(int)*(short *)(param_1 + DAT_00048c14),param_1 + 0x30,1);
    *(undefined2 *)(param_1 + DAT_00048c14) = 0;
  }
  else {
    iVar1 = (*DAT_00048d28)();
    if ((((int)DAT_00048d1e & *(uint *)(*(int *)(*(int *)(iVar1 + 0x10) + 4) + (int)DAT_00048d20))
         != 0) && (0 < *(short *)(param_1 + DAT_00048d22))) {
      (*DAT_00048d2c)(param_1,(int)*(short *)(param_1 + DAT_00048d22),param_1 + 0x30,1);
      *(undefined2 *)(param_1 + DAT_00048d22) = 0;
    }
  }
  return;
}



void FUN_00048f68(int *param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  pcVar2 = DAT_000490c4;
  pcVar1 = DAT_000490c0;
  uVar6 = DAT_000490bc;
  iVar4 = (int)DAT_000490b8;
  iVar5 = (int)param_2;
  iVar3 = (*DAT_000490c8)();
  if (*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x10) + 0x1b) == '\0') {
    iVar3 = (*DAT_0004931c)();
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



void FUN_0004a8ac(int param_1)

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
  
  pcVar1 = DAT_0004a9a8;
  iVar3 = (*DAT_0004a9a8)();
  iVar6 = *(int *)(*(int *)(iVar3 + 0x10) + 0x18);
  iVar3 = (*pcVar1)();
  if (((*(uint *)((int)DAT_0004a996 + *(int *)(*(int *)(iVar3 + 0x10) + 0x18)) & 2) != 0) &&
     (iVar3 = (*pcVar1)(),
     *(int *)(param_1 + 8) + 0x1eU <=
     *(uint *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0004a998))) {
    iVar3 = (*pcVar1)();
    iVar4 = (int)DAT_0004a99a;
    *(undefined4 *)(param_1 + 8) =
         *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0004a998);
    pcVar2 = DAT_0004a9ac;
    *(uint *)(iVar6 + iVar4) = *(uint *)(iVar6 + iVar4) | 8;
    (*pcVar2)(0xd);
    iVar3 = DAT_0004a9b0;
    uVar5 = (*DAT_0004a9b4)();
    local_24 = 0;
    uStack32 = 0;
    iStack28 = (int)DAT_0004a99e;
    (*DAT_0004a9b8)(iVar6,uVar5,&local_24,1);
    iVar4 = (*pcVar1)();
    if (*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x10) + 0x17) == '\0') {
      iVar4 = (int)DAT_0004a9a0;
      *(short *)(iVar3 + iVar4) = *(short *)(iVar3 + iVar4) - (short)uVar5;
      if (*(short *)(iVar3 + iVar4) < 1) {
        iVar3 = (int)DAT_0004a9a2;
        *(uint *)(iVar6 + iVar3) = *(uint *)(iVar6 + iVar3) & 0xffffffef;
        *(uint *)(iVar6 + iVar3) = *(uint *)(iVar6 + iVar3) | 8;
        (*DAT_0004a9ac)(0xf);
      }
    }
    iVar3 = (*pcVar1)();
    iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 4);
    *(int *)(iVar3 + DAT_0004a9a4) = *(int *)(iVar3 + DAT_0004a9a4) + (int)(short)uVar5;
  }
  return;
}



void FUN_0004a9bc(char *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  short sVar3;
  uint *puVar4;
  int iVar5;
  
  pcVar1 = DAT_0004aa5c;
  if (param_2 == 0) {
    iVar2 = (*DAT_0004aa5c)();
    puVar4 = (uint *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x18) + (int)DAT_0004aa54);
    *puVar4 = *puVar4 & ~((int)*(short *)(param_1 + 4) & 0xffffU);
    iVar2 = (*pcVar1)();
    *(undefined2 *)
     (((int)param_1[1] & 0xffU) * 2 + (int)DAT_0004aa56 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18)) =
         0;
    if (param_1 != (char *)0x0) {
      *(uint *)(param_1 + -4) = *(uint *)(param_1 + -4) | 1;
    }
    if (param_1[1] == '\x02') {
      sVar3 = (*DAT_0004aa60)(0x3c);
      iVar2 = (*pcVar1)();
      *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_0004aa58) = (int)sVar3 << 0x10;
    }
  }
  else {
    iVar2 = (*DAT_0004aa5c)();
    iVar5 = ((int)param_1[1] & 0xffU) * 2;
    *(undefined2 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x18) + (int)DAT_0004aa56 + iVar5) =
         *(undefined2 *)(iVar5 + DAT_0004aa64);
    *param_1 = *param_1 + '\x01';
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_0004adf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar2 = DAT_0004ae84;
  bVar1 = false;
  iVar14 = 0;
  local_24 = 0;
  iVar6 = param_1;
  while( true ) {
    if ((*(byte *)(_LAB_0004ae78 + param_1 + iVar14) & 1) == 0) {
      if (iVar14 == 0) {
        iVar5 = (*pcVar2)();
        pcVar3 = DAT_0004ae88;
        if (((int)DAT_0004ae7a &
            *(uint *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + (int)DAT_0004ae7c)) != 0) {
          bVar1 = true;
          *(undefined2 *)(param_1 + DAT_0004ae7e) = 0x1e;
          *(byte *)(_LAB_0004ae78 + param_1) = *(byte *)(_LAB_0004ae78 + param_1) | 1;
          iVar6 = 0x1b;
          (*pcVar3)();
        }
      }
      else if (iVar14 == 1) {
        iVar5 = (*pcVar2)();
        pcVar3 = DAT_0004afb4;
        if (((int)DAT_0004afa2 &
            *(uint *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + ((int)DAT_0004afa2 - 0x40U))) != 0)
        {
          bVar1 = true;
          *(undefined2 *)(param_1 + DAT_0004afa4) = 0x1e;
          pbVar9 = (byte *)(DAT_0004afa6 + param_1 + 1);
          *pbVar9 = *pbVar9 | 1;
          iVar6 = 0x1b;
          (*pcVar3)();
        }
      }
      else if (iVar14 == 2) {
        iVar5 = (*pcVar2)();
        pcVar3 = DAT_0004afb4;
        if ((*(uint *)((int)DAT_0004afa8 + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 0x80) != 0) {
          bVar1 = true;
          *(undefined2 *)(param_1 + DAT_0004afa4) = 0x1e;
          pbVar9 = (byte *)(DAT_0004afa6 + param_1 + 2);
          *pbVar9 = *pbVar9 | 1;
          iVar6 = 0x1b;
          (*pcVar3)();
        }
      }
      else if ((iVar14 == 3) &&
              (iVar5 = (*pcVar2)(),
              (DAT_0004afb8 & *(uint *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + (int)DAT_0004afa8)
              ) != 0)) {
        iVar6 = (*pcVar2)();
        iVar6 = *(int *)(*(int *)(iVar6 + 0x10) + 0x18);
        uVar11 = (uint)DAT_0004afaa;
        *(uint *)(iVar6 + DAT_0004afa8) = *(uint *)(iVar6 + DAT_0004afa8) & DAT_0004afbc;
        uVar11 = ((int)(uVar11 & (int)*(char *)(DAT_0004afa6 + param_1 + 3) & 0xffU) >> 4) + 1;
        if (uVar11 < 4) {
          *(undefined2 *)(param_1 + DAT_0004afa4) = 0x28;
        }
        else {
          *(undefined2 *)(DAT_0004afa4 + param_1) = 0x50;
        }
        bVar1 = true;
        pbVar9 = (byte *)(DAT_0004afa6 + param_1 + 3);
        iVar6 = uVar11 * 0x10;
        *pbVar9 = *pbVar9 | (byte)iVar6;
      }
      if (bVar1) {
        *(int *)(param_1 + DAT_0004afa4 + -8) = (int)*(short *)(param_1 + DAT_0004afa4) << 0x10;
        pbVar9 = (byte *)(DAT_0004afa6 + param_1 + iVar14);
        *pbVar9 = *pbVar9 | 2;
        *(undefined4 *)(param_1 + DAT_0004afac) = 0;
      }
    }
    else if (iVar14 == 0) {
      iVar5 = (*pcVar2)();
      if (((int)DAT_0004afae &
          *(uint *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + (int)DAT_0004afa8)) == 0) {
        iVar5 = (int)DAT_0004afb0;
        *(undefined *)(DAT_0004afa6 + param_1) = 0;
        *(undefined *)(iVar5 + param_1) = 0;
      }
    }
    else if (iVar14 == 1) {
      iVar5 = (*pcVar2)();
      if (((int)DAT_0004b0b4 &
          *(uint *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x18) + ((int)DAT_0004b0b4 - 0x40U))) == 0) {
        iVar5 = (int)DAT_0004b0b8;
        *(undefined *)(DAT_0004b0b6 + param_1 + 1) = 0;
        *(undefined *)(iVar5 + param_1 + 1) = 0;
      }
    }
    else if ((iVar14 == 2) &&
            (iVar5 = (*pcVar2)(),
            (*(uint *)((int)DAT_0004b0ba + *(int *)(*(int *)(iVar5 + 0x10) + 0x18)) & 0x80) == 0)) {
      iVar5 = (int)DAT_0004b0b8;
      *(undefined *)(DAT_0004b0b6 + param_1 + 2) = 0;
      *(undefined *)(iVar5 + param_1 + 2) = 0;
    }
    if (((*(byte *)(iVar14 + DAT_0004b0b6 + param_1) & 2) != 0) &&
       (*(char *)(DAT_0004b0b8 + param_1 + iVar14) == '\0')) break;
    iVar14 = iVar14 + 1;
    if (3 < iVar14) {
LAB_0004b0ce:
      if (local_24 != 0) {
        iVar14 = (int)DAT_0004b234;
        *(int *)(param_1 + iVar14 + -0xc) =
             *(int *)(param_1 + iVar14 + -8) + *(short *)(param_1 + iVar14) * -0x10000;
        iVar6 = (int)(char)((char)iVar6 * '\f');
        if (*(int *)(param_1 + iVar14 + -4) == 0) {
          iVar14 = (*pcVar2)();
          puVar8 = (undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 8) + (int)DAT_0004b238);
          iVar14 = (int)DAT_0004b23a;
          puVar13 = (undefined4 *)(DAT_0004b248 + iVar6);
          puVar12 = (undefined4 *)(DAT_0004b238 + 0x24 + param_1);
          *puVar12 = *puVar8;
          puVar12[1] = puVar8[1];
          pcVar2 = DAT_0004b24c;
          puVar12[2] = puVar8[2];
          (*pcVar2)(*puVar13,puVar13[1],puVar13[2],param_4,iVar14 + param_1);
        }
        else {
          puVar12 = (undefined4 *)(DAT_0004b248 + iVar6);
          (*DAT_0004b24c)(*puVar12,puVar12[1],puVar12[2],param_4,DAT_0004b236 + param_1);
          iVar6 = (*pcVar2)();
          puVar8 = (undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 8) + (int)DAT_0004b238);
          puVar12 = (undefined4 *)(DAT_0004b238 + 0x30 + param_1);
          *puVar12 = *puVar8;
          puVar12[1] = puVar8[1];
          puVar12[2] = puVar8[2];
        }
        pcVar2 = DAT_0004b250;
        iVar6 = (int)DAT_0004b236;
        *(int *)(param_1 + iVar6 + 0x18) =
             *(int *)(param_1 + iVar6 + 0xc) - *(int *)(param_1 + iVar6);
        *(int *)(param_1 + iVar6 + 0x1c) =
             *(int *)(param_1 + iVar6 + 0x10) - *(int *)(param_1 + iVar6 + 4);
        *(int *)(param_1 + iVar6 + 0x20) =
             *(int *)(param_1 + iVar6 + 0x14) - *(int *)(param_1 + iVar6 + 8);
        uVar7 = (*pcVar2)(*(undefined4 *)(param_1 + iVar6 + 0x18),
                          *(undefined4 *)(param_1 + iVar6 + -0x10),
                          *(undefined4 *)(param_1 + iVar6 + -0xc));
        *(undefined4 *)(DAT_0004b23c + param_1) = uVar7;
        iVar6 = (int)DAT_0004b23e;
        uVar7 = (*pcVar2)(*(undefined4 *)(param_1 + iVar6 + 0x28),
                          *(undefined4 *)(param_1 + iVar6 + -4),*(undefined4 *)(param_1 + iVar6));
        *(undefined4 *)(DAT_0004b240 + param_1) = uVar7;
        iVar6 = (int)DAT_0004b23e;
        uVar7 = (*pcVar2)(*(undefined4 *)(param_1 + iVar6 + 0x2c),
                          *(undefined4 *)(param_1 + iVar6 + -4),*(undefined4 *)(param_1 + iVar6));
        uVar4 = DAT_0004b244;
        *(undefined4 *)(DAT_0004b242 + param_1) = uVar7;
        iVar6 = (int)DAT_0004b23c;
        *(int *)(param_1 + iVar6 + -0xc) =
             *(int *)(param_1 + iVar6 + -0x18) + *(int *)(param_1 + iVar6);
        *(int *)(param_1 + iVar6 + -8) =
             *(int *)(param_1 + iVar6 + -0x14) + *(int *)(param_1 + iVar6 + 4);
        *(int *)(param_1 + iVar6 + -4) =
             *(int *)(param_1 + iVar6 + -0x10) + *(int *)(param_1 + iVar6 + 8);
        (*DAT_0004b254)((int)(short)((ushort)((uint)*(undefined4 *)(param_1 + iVar6 + -4) >> 0x10) &
                                    uVar4) << 0x10 |
                        (int)(short)((ushort)((uint)*(undefined4 *)(param_1 + iVar6 + -8) >> 0x10) &
                                    uVar4) << 8 |
                        (int)(short)((ushort)((uint)*(undefined4 *)(param_1 + iVar6 + -0xc) >> 0x10)
                                    & uVar4));
      }
      return local_24;
    }
  }
  sVar10 = *(short *)(param_1 + DAT_0004b0bc) + -1;
  *(short *)(param_1 + DAT_0004b0bc) = sVar10;
  if (sVar10 < 1) {
    if (*(int *)(param_1 + DAT_0004b0be) == 0) {
      if (((iVar14 == 0) || (iVar14 == 1)) || (iVar14 == 2)) {
        *(undefined2 *)(param_1 + DAT_0004b0bc) = 0x3c;
      }
      else if (iVar14 == 3) {
        if ((uint)((int)((int)DAT_0004b0c0 & (int)*(char *)(DAT_0004b0b6 + param_1 + 3) & 0xffU) >>
                  4) < 4) {
          *(undefined2 *)(param_1 + DAT_0004b0bc) = 10;
        }
        else {
          *(undefined2 *)(param_1 + DAT_0004b0bc) = 0x14;
        }
      }
      iVar6 = (int)DAT_0004b0bc;
      *(int *)(param_1 + iVar6 + -8) = (int)*(short *)(param_1 + iVar6) << 0x10;
      *(undefined4 *)(param_1 + iVar6 + -4) = 1;
    }
    else {
      *(undefined2 *)(param_1 + DAT_0004b0bc) = 0;
      if (iVar14 == 3) {
        iVar6 = (int)DAT_0004b0b8;
        *(undefined *)(DAT_0004b0b6 + param_1 + 3) = 0;
        *(undefined *)(iVar6 + param_1 + 3) = 0;
      }
      else {
        *(undefined *)(DAT_0004b0b8 + param_1 + iVar14) = 1;
      }
    }
  }
  local_24 = 1;
  iVar6 = iVar14;
  goto LAB_0004b0ce;
}



undefined4 FUN_0004b258(void)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_18;
  undefined4 uStack20;
  undefined4 uStack16;
  
  iVar2 = (*DAT_0004b3cc)();
  uVar1 = DAT_0004b3c0;
  iVar4 = *(int *)(*(int *)(iVar2 + 0x10) + 8);
  iVar2 = (*DAT_0004b3cc)();
  if ((*(uint *)((int)DAT_0004b3c2 + *(int *)(*(int *)(iVar2 + 0x10) + 4)) & 8) == 0) {
    iVar2 = (int)DAT_0004b3ca;
    uVar3 = (*DAT_0004b3dc)((int)(short)((ushort)((uint)*(undefined4 *)(iVar4 + iVar2) >> 0x10) &
                                        uVar1) << 0x10 |
                            (int)(short)((ushort)((uint)*(undefined4 *)(iVar4 + iVar2 + -4) >> 0x10)
                                        & uVar1) << 8 |
                            (int)(short)((ushort)((uint)*(undefined4 *)(iVar4 + iVar2 + -8) >> 0x10)
                                        & uVar1));
  }
  else {
    iVar2 = (int)DAT_0004b3c4;
    (*DAT_0004b3d0)((int)(short)((ushort)((uint)*(undefined4 *)(iVar4 + iVar2 + -0x18) >> 0x10) &
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
    (*DAT_0004b3d4)(DAT_0004b3c6 + iVar4,&local_18);
    iVar2 = (int)DAT_0004b3c8;
    uVar3 = (*DAT_0004b3d8)(local_18,uStack20,uStack16,
                            (int)(short)((ushort)((uint)*(undefined4 *)(iVar4 + iVar2) >> 0x10) &
                                        uVar1) << 0x10 |
                            (int)(short)((ushort)((uint)*(undefined4 *)(iVar4 + iVar2 + -4) >> 0x10)
                                        & uVar1) << 8 |
                            (int)(short)((ushort)((uint)*(undefined4 *)(iVar4 + iVar2 + -8) >> 0x10)
                                        & uVar1));
  }
  return uVar3;
}



void FUN_0004b36a(int param_1,short param_2,short param_3)

{
  (*DAT_0004b3e4)(param_1 + 0x18,*(undefined4 *)(**DAT_0004b3e0 + ((int)param_2 & 0xffffU)),
                  (int)param_3);
                    // WARNING: Could not recover jumptable at 0x0004b398. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0004b3e8)(param_1 + 0x18);
  return;
}



void FUN_0004b3ec(int *param_1,short param_2,short param_3)

{
  (*DAT_0004b4c4)(param_1 + 6,*(undefined4 *)(((int)param_2 & 0xffffU) + *param_1),(int)param_3);
                    // WARNING: Could not recover jumptable at 0x0004b41a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0004b4c8)(param_1 + 6);
  return;
}



void FUN_0004b41e(int *param_1,short param_2)

{
  (*DAT_0004b4cc)(param_1 + 6,*(undefined4 *)(((int)param_2 & 0xffffU) + *param_1));
                    // WARNING: Could not recover jumptable at 0x0004b444. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0004b4d0)(param_1 + 6);
  return;
}



void FUN_0004b47a(short param_1,short param_2)

{
  int **ppiVar1;
  
  (*DAT_0004b4e4)(*DAT_0004b4dc + 10,
                  *(undefined4 *)
                   (**DAT_0004b4dc +
                   (int)*(short *)(((int)param_1 & 0xffffU) * 2 + (*DAT_0004b4dc)[8])),(int)param_2)
  ;
  ppiVar1 = DAT_0004b4dc;
  (*DAT_0004b4c8)(*DAT_0004b4dc + 10);
                    // WARNING: Could not recover jumptable at 0x0004b476. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0004b4e0)(*ppiVar1 + 0x1e,*ppiVar1 + 10);
  return;
}



void FUN_0004b6c6(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[0x13] = param_4;
  param_1[0x10] = *param_3;
  param_1[0x11] = param_3[1];
  param_1[0x12] = param_3[2];
  (*DAT_0004b748)(param_1);
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



int FUN_0004b7f0(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (*DAT_0004b838)();
  pcVar1 = DAT_0004b8f8;
  iVar2 = (int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 8) + 2);
  if ((iVar2 != 3) && (iVar2 == 4)) {
    iVar4 = (int)DAT_0004b8f4;
    iVar2 = (*DAT_0004b8f8)(*(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x14),iVar4);
    iVar2 = *(int *)(param_1 + 0x44) + iVar2;
    *(int *)(param_1 + 0x44) = iVar2;
    iVar3 = (int)DAT_0004b8f6;
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
    FUN_0004c734(param_1);
                    // WARNING: Could not recover jumptable at 0x0004b8e0. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar2 = (*DAT_0004b8fc)(param_1);
    return iVar2;
  }
  return iVar2;
}



void FUN_0004bd5c(undefined4 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_2 * 2 + *(int *)(*(int *)(*DAT_0004be6c + 0xc) * 4 + DAT_0004be70));
  iVar1 = *(int *)(((int)*pcVar2 & 0xffU) * 4 + *(int *)(*DAT_0004be6c + 0x6c)) +
          ((int)pcVar2[1] & 0xffU) * 0xc;
  if (iVar1 != 0) {
                    // WARNING: Could not recover jumptable at 0x0004bd98. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_0004be78)(iVar1,param_1,DAT_0004be74 + 0x28);
    return;
  }
  return;
}



void FUN_0004bda0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = DAT_0004be7c;
  iVar3 = 5;
  do {
    iVar2 = (*pcVar1)();
    FUN_0004bd5c((int)DAT_0004be66 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18) +
                 (int)(char)((char)iVar3 * '\f'),iVar3);
    iVar2 = (*pcVar1)();
    FUN_0004bd5c((int)DAT_0004be66 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18) +
                 (int)(char)((char)(iVar3 + -1) * '\f'),iVar3 + -1);
    iVar2 = (*pcVar1)();
    FUN_0004bd5c((int)DAT_0004be66 + *(int *)(*(int *)(iVar2 + 0x10) + 0x18) +
                 (int)(char)((char)(iVar3 + -2) * '\f'),iVar3 + -2);
    iVar3 = iVar3 + -3;
  } while (-1 < iVar3);
  return;
}



void FUN_0004be12(int param_1)

{
  int **ppiVar1;
  int iVar2;
  undefined4 local_28;
  int iStack36;
  undefined4 uStack32;
  
  ppiVar1 = DAT_0004be80;
  if (*DAT_0004be84 == '\b') {
    iVar2 = *(int *)((*DAT_0004be80)[0x17] + 0x24);
    if (iVar2 == 0) {
      iVar2 = (int)DAT_0004be68;
      *(undefined4 *)(param_1 + iVar2) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + iVar2 + 4) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + iVar2 + 8) = *(undefined4 *)(param_1 + 0x10);
      goto LAB_0004be9a;
    }
  }
  else {
    iVar2 = *(int *)((*DAT_0004be80)[0x17] + 0x14);
    if (iVar2 == 0) {
      iVar2 = (int)DAT_0004bf1e;
      *(undefined4 *)(param_1 + iVar2) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + iVar2 + 4) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + iVar2 + 8) = *(undefined4 *)(param_1 + 0x10);
      goto LAB_0004be9a;
    }
  }
  (*DAT_0004be78)(iVar2,DAT_0004be68 + param_1,DAT_0004be74 + 0x28);
LAB_0004be9a:
  iVar2 = (*DAT_0004bf24)();
  if ((iVar2 == 0) || (((int)DAT_0004bf20 & *(uint *)(param_1 + ((int)DAT_0004bf20 - 0x3cU))) != 0))
  {
    iVar2 = 0;
  }
  else {
    iVar2 = (*DAT_0004bf28)();
    iVar2 = *(int *)(((int)*(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_0004bf22) &
                     0xffU) * 4 + DAT_0004bf2c);
  }
  local_28 = *(undefined4 *)(param_1 + 0x14);
  uStack32 = *(undefined4 *)(param_1 + 0x1c);
  iStack36 = *(int *)(param_1 + 0x18) + iVar2 + DAT_0004bf30;
  (*DAT_0004bf34)();
  (*DAT_0004bf38)(DAT_0004bf1e + param_1);
  (*DAT_0004bf3c)(&local_28);
  (*DAT_0004bf40)(*(undefined4 *)(**ppiVar1 + (*ppiVar1)[5]));
  (*DAT_0004bf44)();
  return;
}



int FUN_0004bf48(int param_1)

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
  
  pcVar4 = DAT_0004c058;
  pcVar3 = DAT_0004c054;
  iVar8 = (int)DAT_0004c03c;
  iStack116 = param_1 + 8;
  local_78 = *DAT_0004c050;
  if ((*(uint *)(param_1 + iVar8) & 8) == 0) {
    if ((DAT_0004c05c & *(uint *)(param_1 + DAT_0004c03e)) != 0) {
      *(uint *)(param_1 + DAT_0004c03e) = *(uint *)(param_1 + DAT_0004c03e) & DAT_0004c060;
      iVar8 = (*pcVar4)();
      if (((int)DAT_0004c040 &
          *(uint *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x18) + (int)DAT_0004c042)) != 0) {
        (*DAT_0004c064)((int)*(short *)(param_1 + DAT_0004c044));
        pcVar4 = DAT_0004c068;
        iVar8 = (int)DAT_0004c046;
        iVar10 = (int)DAT_0004c048;
        *(undefined2 *)(param_1 + iVar8) = 0;
        *(undefined2 *)(param_1 + iVar8 + 2) = 0;
        (*pcVar4)(iVar10 + param_1,&uStack112);
        local_5c = 0;
        uStack88 = 0;
        iStack84 = (int)DAT_0004c04a;
        local_68 = uStack112;
        uStack100 = uStack108;
        uStack96 = 0;
        (*DAT_0004c06c)(auStack80);
        (*DAT_0004c070)(param_1,auStack80,&local_68,(int)DAT_0004c04c);
        iVar8 = (*pcVar3)(0x16);
        return iVar8;
      }
      uVar9 = (*DAT_0004c184)((int)*(short *)(param_1 + DAT_0004c174));
      iVar8 = (int)DAT_0004c176;
      *(undefined2 *)(param_1 + iVar8) = 0;
      iVar8 = iVar8 + -0x12;
      *(uint *)(param_1 + iVar8) = *(uint *)(param_1 + iVar8) | 0x10;
      iVar10 = (*pcVar4)();
      pcVar6 = DAT_0004c198;
      iVar8 = DAT_0004c190;
      psVar5 = DAT_0004c188;
      sVar2 = (short)uVar9;
      if (*(char *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x10) + 0x17) == '\0') {
        *DAT_0004c188 = *DAT_0004c188 - sVar2;
        *(short *)(param_1 + DAT_0004c178) = *(short *)(param_1 + DAT_0004c178) + sVar2;
        if (*psVar5 < 1) {
          (*pcVar3)(0xf);
          local_44 = 0;
          uStack64 = 0;
          uStack60 = (uint)DAT_0004c17a;
          (*DAT_0004c18c)(param_1,(int)*(short *)(param_1 + DAT_0004c178),&local_44,1);
          iVar8 = (int)DAT_0004c178;
          *(undefined2 *)(param_1 + iVar8) = 0;
          iVar8 = iVar8 + -0x10;
          *(uint *)(param_1 + iVar8) = *(uint *)(param_1 + iVar8) & 0xffffffef;
          *(uint *)(param_1 + iVar8) = *(uint *)(param_1 + iVar8) | 8;
          return iVar8;
        }
      }
      else {
        *(short *)(param_1 + DAT_0004c178) = *(short *)(param_1 + DAT_0004c178) + sVar2;
        *(undefined2 *)(iVar8 + 0x12) = *(undefined2 *)(iVar8 + 0x10);
        *(short *)(iVar8 + 0x10) = (short)DAT_0004c194;
        (*pcVar6)(0x14,0x1b);
        (*DAT_0004c1a0)();
        *(undefined2 *)(iVar8 + 0x10) = *(undefined2 *)(iVar8 + 0x12);
      }
      iVar8 = (*pcVar4)();
      iVar8 = *(int *)(*(int *)(iVar8 + 0x10) + 4);
      *(int *)(iVar8 + DAT_0004c17c) = *(int *)(iVar8 + DAT_0004c17c) + (int)sVar2;
      (*DAT_0004c1a4)(param_1,uVar9,iStack116,0);
      cVar1 = *(char *)(param_1 + DAT_0004c17e);
      if (cVar1 == '\x01') {
        *(uint *)(param_1 + DAT_0004c180) = *(uint *)(param_1 + DAT_0004c180) | 8;
        (*pcVar3)(0xd);
        uVar9 = DAT_0004c1a8;
      }
      else if (cVar1 == '\x02') {
        *(uint *)(param_1 + DAT_0004c180) = *(uint *)(param_1 + DAT_0004c180) | 8;
        (*pcVar3)(0xd);
        uVar9 = DAT_0004c1ac;
      }
      else if (cVar1 == '\x03') {
        *(uint *)(param_1 + DAT_0004c2ce) = *(uint *)(param_1 + DAT_0004c2ce) | 0x10;
        (*pcVar3)(0xe);
        uVar9 = DAT_0004c2dc;
      }
      pcVar6 = DAT_0004c2e0;
      uStack44 = (*DAT_0004c2e0)(uVar9,*(undefined4 *)(param_1 + DAT_0004c2d0));
      uStack40 = (*pcVar6)(uVar9,*(undefined4 *)(param_1 + DAT_0004c2d2));
      uStack36 = (*pcVar6)(uVar9,*(undefined4 *)(param_1 + DAT_0004c2d4));
      pcVar7 = DAT_0004c2e4;
      local_38 = (*DAT_0004c2e4)(&local_78,&local_78,*(undefined4 *)(param_1 + DAT_0004c2d0));
      local_34 = (*pcVar7)(&local_78,&local_78,*(undefined4 *)(param_1 + DAT_0004c2d2));
      local_30 = (*pcVar7)(&local_78,&local_78,*(undefined4 *)(param_1 + DAT_0004c2d4));
      local_38 = (*pcVar6)(uVar9,local_38);
      local_34 = (*pcVar6)(uVar9,local_34);
      local_30 = (*pcVar6)(uVar9,local_30);
      iVar8 = (*pcVar4)();
      if (*(char *)((int)DAT_0004c2d6 + *(int *)(*(int *)(iVar8 + 0x10) + 4)) == '\b') {
        iVar8 = (*pcVar4)();
        cVar1 = *(char *)((int)DAT_0004c2d8 + *(int *)(*(int *)(iVar8 + 0x10) + 4));
        if ((cVar1 == '\0') ||
           (((((cVar1 != '\x01' && (cVar1 != '\x02')) && (cVar1 != '\x03')) &&
             ((cVar1 != '\x04' && (cVar1 != '\x05')))) &&
            ((cVar1 != '\x06' && ((cVar1 != '\a' && (cVar1 == '\b')))))))) {
          (*DAT_0004c2e8)(0,&local_38);
        }
      }
      else {
        (*DAT_0004c3bc)(0,&local_38);
      }
      (*DAT_0004c3c0)(param_1);
      iVar8 = local_78;
      (*DAT_0004c3c4)(local_78 + 0x78,uStack44);
      (*DAT_0004c3c8)(iVar8 + 0x78,uStack40);
      (*DAT_0004c3cc)(iVar8 + 0x78,uStack36);
    }
    iVar10 = (*pcVar4)();
    iVar8 = (int)DAT_0004c3b2;
    uStack60 = (uint)DAT_0004c3b0;
    if ((uStack60 & *(uint *)(*(int *)(*(int *)(iVar10 + 0x10) + 4) + iVar8)) != 0) {
      if ((*(uint *)(param_1 + DAT_0004c3b4) & 0x10) == 0) {
        iVar10 = (*pcVar4)();
        iVar8 = (int)DAT_0004c3ba;
        if (((int)DAT_0004c3b8 & *(uint *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x18) + iVar8)) != 0)
        {
          iVar8 = (int)DAT_0004c3b6;
          *(undefined2 *)(param_1 + iVar8) = 0;
        }
      }
      else {
        iVar8 = (int)DAT_0004c3b6;
        if (-1 < *(short *)(param_1 + iVar8)) {
          *(uint *)(param_1 + DAT_0004c3b4) = *(uint *)(param_1 + DAT_0004c3b4) & 0xffffffef;
          local_44 = 0;
          uStack64 = 0;
          (*DAT_0004c3d0)(param_1,(int)*(short *)(param_1 + DAT_0004c3b6),&local_44,1);
          psVar5 = DAT_0004c3d4;
          iVar8 = (int)DAT_0004c3b6;
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



void FUN_0004c3d8(int param_1)

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
  
  pcVar3 = DAT_0004c538;
  pcVar2 = DAT_0004c534;
  iVar1 = DAT_0004c530;
  iVar5 = DAT_0004c52c;
  uVar6 = DAT_0004c528;
  iVar9 = *DAT_0004c524;
  iVar4 = (*DAT_0004c53c)();
  if (iVar4 == 0) {
    iVar4 = (*pcVar3)();
    uStack40 = (*pcVar2)(-*(int *)(param_1 + DAT_0004c670 + 0xc),
                         *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0004c670));
    iVar4 = (*pcVar3)();
    local_2c = (*pcVar2)(-*(int *)(param_1 + DAT_0004c672 + 0x10),
                         *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0004c672));
    iVar4 = (*pcVar3)();
    uStack36 = (*pcVar2)(-*(int *)(param_1 + DAT_0004c670 + 0xc),
                         *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0004c670));
    iVar4 = (*pcVar3)();
    local_38 = (*pcVar2)(uVar6,*(undefined4 *)
                                (*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0004c672));
    iVar4 = (*pcVar3)();
    (*pcVar2)(iVar5,*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0004c670));
    iVar5 = (*pcVar3)();
    uVar6 = (*pcVar2)(iVar1,-*(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0004c670));
  }
  else {
    iVar4 = (*pcVar3)();
    uVar7 = *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0004c51c);
    iVar8 = *(int *)(param_1 + DAT_0004c51c + 0xc);
    iVar4 = (*pcVar3)();
    uStack40 = (*DAT_0004c544)(*(undefined4 *)
                                ((short)((ushort)((uint)*(undefined4 *)
                                                         (*(int *)(*(int *)(iVar4 + 0x10) + 4) +
                                                         (int)DAT_0004c51e) >> 0x10) & DAT_0004c520)
                                 * 4 + DAT_0004c540),-iVar8,uVar7);
    iVar4 = (*pcVar3)();
    local_2c = (*pcVar2)(-*(int *)(param_1 + DAT_0004c522 + 0x10),
                         *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0004c522));
    iVar4 = (*pcVar3)();
    uVar7 = *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0004c51c);
    iVar8 = *(int *)(param_1 + DAT_0004c51c + 0xc);
    iVar4 = (*pcVar3)();
    uStack36 = (*DAT_0004c544)(*(undefined4 *)
                                ((short)((ushort)((uint)*(undefined4 *)
                                                         (*(int *)(*(int *)(iVar4 + 0x10) + 4) +
                                                         (int)DAT_0004c51e) >> 0x10) & DAT_0004c520)
                                 * 4 + DAT_0004c540),-iVar8,uVar7);
    iVar4 = (*pcVar3)();
    local_38 = (*pcVar2)(uVar6,*(undefined4 *)
                                (*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0004c522));
    iVar4 = (*pcVar3)();
    uVar6 = *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0004c51c);
    iVar4 = (*pcVar3)();
    (*DAT_0004c544)(*(undefined4 *)
                     ((short)((ushort)((uint)*(undefined4 *)
                                              (*(int *)(*(int *)(iVar4 + 0x10) + 4) +
                                              (int)DAT_0004c51e) >> 0x10) & DAT_0004c520) * 4 +
                     DAT_0004c540),-iVar5,uVar6);
    iVar5 = (*pcVar3)();
    iVar4 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 4) + (int)DAT_0004c51c);
    iVar5 = (*pcVar3)();
    uVar6 = (*DAT_0004c544)(*(undefined4 *)
                             ((short)((ushort)((uint)*(undefined4 *)
                                                      (*(int *)(*(int *)(iVar5 + 0x10) + 4) +
                                                      (int)DAT_0004c51e) >> 0x10) & DAT_0004c520) *
                              4 + DAT_0004c540),-iVar1,-iVar4);
  }
  if ((*(uint *)(param_1 + DAT_0004c674) & 8) == 0) {
    *(undefined4 *)(param_1 + 0x74) = local_38;
    *(undefined4 *)(param_1 + 0x7c) = uVar6;
  }
  (*DAT_0004c678)(iVar9 + 0x78,local_2c);
  (*DAT_0004c67c)(iVar9 + 0x78,uStack40);
  (*DAT_0004c680)(iVar9 + 0x78,uStack36);
  return;
}



void FUN_0004c690(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = *DAT_0004c7ac;
  sVar1 = *(short *)(param_1 + DAT_0004c7a4);
  uVar6 = 0;
  if (*(int *)(iVar5 + 0x58) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)*(short *)(*(int *)(iVar5 + 0x58) + 4);
  }
  if (iVar2 + -1 <= (int)*(short *)(iVar5 + 0x3e)) {
    iVar2 = *(int *)(*(int *)(iVar5 + 0x1c) * 4 + *(int *)(iVar5 + 0xc) * 0x14 + param_2);
    iVar3 = (int)DAT_0004c7a6;
    sVar4 = *(short *)(param_1 + iVar3) + 1;
    *(short *)(param_1 + iVar3) = sVar4;
    sVar4 = (short)*(char *)(iVar2 + sVar4);
    *(short *)(param_1 + iVar3 + -2) = sVar4;
    if (sVar4 < 0) {
      *(undefined2 *)(param_1 + DAT_0004c7a6) = 0;
      iVar2 = (int)DAT_0004c7a4;
      *(short *)(param_1 + iVar2) =
           (short)*(char *)((int)*(short *)(DAT_0004c7a6 + param_1) +
                           *(int *)(*(int *)(iVar5 + 0x1c) * 4 +
                                   *(int *)(iVar5 + 0xc) * 0x14 + param_2));
      if (*(short *)(param_1 + iVar2) != sVar1) {
        uVar6 = 9;
      }
    }
    else if (*(short *)(param_1 + DAT_0004c7a4) != sVar1) {
      uVar6 = 9;
    }
                    // WARNING: Could not recover jumptable at 0x0004c72a. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_0004c7b0)((int)*(short *)(param_1 + DAT_0004c7a4),uVar6);
    return;
  }
  return;
}



uint FUN_0004c734(int param_1)

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
  
  iVar3 = DAT_0004c7b4;
  pcVar2 = DAT_0004c7b0;
  iVar10 = *DAT_0004c7ac;
  uVar5 = *(uint *)(param_1 + DAT_0004c7a8) & 0x1f;
  uVar7 = *(uint *)(param_1 + DAT_0004c7a8) & 0x20;
  if (*(char *)(DAT_0004c7b4 + DAT_0004c7aa) == '\b') {
    if ((*(uint *)(param_1 + DAT_0004c7a8) & 1) == 0) {
      if ((*(uint *)(param_1 + DAT_0004c7a8) & 0x18) != 0) {
        iVar3 = (int)DAT_0004c7a4;
        *(undefined2 *)(param_1 + iVar3) = 3;
        (*DAT_0004c7b0)((int)*(short *)(param_1 + iVar3),0);
      }
    }
    else {
      iVar3 = (int)DAT_0004c7a4;
      *(undefined2 *)(param_1 + iVar3) = 1;
      (*pcVar2)((int)*(short *)(param_1 + iVar3),9);
    }
    pcVar2 = DAT_0004c894;
    if (*(int *)(iVar10 + 0x58) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)*(short *)(*(int *)(iVar10 + 0x58) + 4);
    }
    if (iVar3 + -1 <= (int)*(short *)(iVar10 + 0x3e)) {
      iVar3 = (int)DAT_0004c88c;
      *(undefined2 *)(param_1 + iVar3) = 0;
      (*pcVar2)((int)*(short *)(param_1 + iVar3),9);
    }
LAB_0004c800:
                    // WARNING: Could not recover jumptable at 0x0004c80e. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar5 = (*DAT_0004c898)();
    return uVar5;
  }
  if ((*(uint *)(param_1 + DAT_0004c88e) & 0x40) != 0) {
    if (*(int *)(iVar10 + 0x58) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)*(short *)(*(int *)(iVar10 + 0x58) + 4);
    }
    if (iVar3 + -1 <= (int)*(short *)(iVar10 + 0x3e)) {
      iVar3 = (int)DAT_0004c88c;
      *(undefined2 *)(param_1 + iVar3) = 2;
      (*DAT_0004c894)((int)*(short *)(param_1 + iVar3),0);
    }
    goto LAB_0004c800;
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + DAT_0004c88e) = *(uint *)(param_1 + DAT_0004c88e) & 0xfffffffe;
  }
  else {
    *(uint *)(param_1 + DAT_0004c88e) = *(uint *)(param_1 + DAT_0004c88e) | 1;
  }
  if ((*(uint *)(param_1 + DAT_0004c890) & 2) == 0) {
    if ((*(uint *)(param_1 + DAT_0004c890) & 4) == 0) {
      if ((*(uint *)(param_1 + DAT_0004c890) & 1) != 0) {
        uVar8 = 9;
        if (uVar7 == 0) {
          *(undefined2 *)(param_1 + DAT_0004c88c) = 10;
        }
        else {
          *(undefined2 *)(param_1 + DAT_0004c88c) = 0xb;
        }
LAB_0004c8e8:
                    // WARNING: Could not recover jumptable at 0x0004c8fa. Too many branches
                    // WARNING: Treating indirect jump as call
        uVar5 = (*DAT_0004c998)((int)*(short *)(param_1 + DAT_0004c984),uVar8);
        return uVar5;
      }
      if ((*(uint *)(param_1 + DAT_0004c890) & 0x10) != 0) {
        if (uVar7 == 0) {
          *(undefined2 *)(param_1 + DAT_0004c88c) = 0xe;
        }
        else {
          *(undefined2 *)(param_1 + DAT_0004c984) = 0xf;
        }
        (*DAT_0004c994)(iVar10 + 0x78,*(int *)(param_1 + DAT_0004c986) * -2);
        *(undefined2 *)(param_1 + DAT_0004c988) = 0;
        uVar8 = 0;
        goto LAB_0004c8e8;
      }
      if ((*(uint *)(param_1 + DAT_0004c98a) & 8) != 0) {
        if (uVar7 == 0) {
          *(undefined2 *)(param_1 + DAT_0004c984) = 0xc;
        }
        else {
          *(undefined2 *)(param_1 + DAT_0004c984) = 0xd;
        }
        (*DAT_0004c994)(iVar10 + 0x78,-*(int *)(param_1 + DAT_0004c986));
        uVar8 = 0;
        *(undefined2 *)(param_1 + DAT_0004c988) = 0;
        goto LAB_0004c8e8;
      }
      goto LAB_0004c8fe;
    }
    iVar10 = (int)DAT_0004c892;
    *(undefined2 *)(param_1 + iVar10) = 0xffff;
    iVar10 = iVar10 + -10;
    uVar6 = *(uint *)(param_1 + iVar10) | 4;
  }
  else {
    iVar10 = (int)DAT_0004c892;
    *(undefined2 *)(param_1 + iVar10) = 0xffff;
    iVar10 = iVar10 + -10;
    uVar6 = *(uint *)(param_1 + iVar10) | 2;
  }
  *(uint *)(param_1 + iVar10) = uVar6;
LAB_0004c8fe:
  pcVar2 = DAT_0004c998;
  if ((*(uint *)(param_1 + DAT_0004c98c) & 2) == 0) {
    if ((*(uint *)(param_1 + DAT_0004c98c) & 4) == 0) {
      if (uVar5 != 0) {
        return uVar5;
      }
      sVar1 = *(short *)(iVar3 + DAT_0004c98e);
      sVar9 = *(short *)(iVar3 + DAT_0004c990) >> 2;
      if (uVar7 == 0) {
        uVar8 = DAT_0004c9a4;
        if (sVar9 <= sVar1) {
          uVar8 = DAT_0004c9a0;
        }
        FUN_0004c690(param_1,uVar8);
      }
      else {
        uVar8 = DAT_0004cab4;
        if (sVar9 <= sVar1) {
          uVar8 = DAT_0004c9a8;
        }
        FUN_0004c690(param_1,uVar8);
      }
      (*DAT_0004cab8)();
      pcVar2 = DAT_0004c684;
      if (*(int *)(*DAT_0004c688 + 0xc) == 8) {
        if ((*(uint *)(param_1 + DAT_0004c674) & 1) == 0) {
          cVar4 = (*DAT_0004c68c)(0x1f);
          uVar5 = (uint)cVar4;
          if ((int)uVar5 < 0) {
            uVar5 = (*pcVar2)(0x1f);
            return uVar5;
          }
        }
        else {
          cVar4 = (*DAT_0004c68c)(0x1c);
          uVar5 = (uint)cVar4;
          if ((int)uVar5 < 0) {
            uVar5 = (*pcVar2)(0x1c);
            return uVar5;
          }
        }
      }
      else {
        uVar5 = (uint)*(short *)(param_1 + DAT_0004c676);
        if (((((uVar5 == 0) || (uVar5 == 1)) || (uVar5 == 5)) || (uVar5 == 6)) &&
           (uVar5 = (uint)*(short *)(*DAT_0004c688 + 0x3e), uVar5 == 0xc)) {
          uVar5 = (*DAT_0004c684)(0xb);
        }
      }
      return uVar5;
    }
    iVar3 = (int)DAT_0004c984;
    *(undefined2 *)(param_1 + iVar3) = 0x11;
    (*pcVar2)((int)*(short *)(param_1 + iVar3),9);
    iVar3 = (int)DAT_0004c988;
    uVar5 = 0xfffffffb;
    *(undefined2 *)(param_1 + iVar3) = 0xffff;
  }
  else {
    *(undefined2 *)(param_1 + DAT_0004c984) = 0x10;
    (*DAT_0004c99c)(0x12);
    (*DAT_0004c998)((int)*(short *)(param_1 + DAT_0004c984),9);
    iVar3 = (int)DAT_0004c988;
    *(undefined2 *)(param_1 + iVar3) = 0xffff;
    uVar5 = 0xfffffffd;
  }
  uVar7 = iVar3 - 10;
  *(uint *)(param_1 + uVar7) = *(uint *)(param_1 + uVar7) & uVar5;
  return uVar7;
}



void FUN_0004c9da(void)

{
  short sVar1;
  short *psVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar3 = DAT_0004cac0;
  psVar2 = DAT_0004cabc;
  if (*(int *)(*DAT_0004cac4 + 0xc) != 8) {
    iVar4 = (*DAT_0004cac8)();
    if (iVar4 == 0) {
      sVar1 = *psVar2;
      uVar5 = *puVar3;
    }
    else {
      iVar4 = (*DAT_0004cacc)();
      uVar5 = *puVar3;
      sVar1 = psVar2[(int)*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0004cab2) & 0xff
                    ];
    }
                    // WARNING: Could not recover jumptable at 0x0004ca66. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_0004cad4)(uVar5,(int)sVar1,10);
    return;
  }
  iVar4 = (*DAT_0004cac8)();
  if (iVar4 != 0) {
    iVar4 = (*DAT_0004cacc)();
                    // WARNING: Could not recover jumptable at 0x0004ca1c. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_0004cad0)(*puVar3,(int)psVar2[((int)*(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) +
                                                       (int)DAT_0004cab2) & 0xffU) + 8],10);
    return;
  }
                    // WARNING: Could not recover jumptable at 0x0004ca2e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0004cad0)(*puVar3,(int)psVar2[8],10);
  return;
}



void FUN_0004ca72(void)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = (*DAT_0004cac8)();
  psVar2 = DAT_0004cad8;
  if (iVar3 == 0) {
    sVar1 = *DAT_0004cad8;
    uVar4 = *DAT_0004cadc;
  }
  else {
    iVar3 = (*DAT_0004cacc)();
    uVar4 = *DAT_0004cadc;
    sVar1 = psVar2[(int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0004cab2) & 0xff];
  }
                    // WARNING: Could not recover jumptable at 0x0004caae. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0004cad4)(uVar4,(int)sVar1,0xf);
  return;
}



int FUN_0004d534(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = DAT_0004d634;
  iVar2 = DAT_0004d630;
  sVar1 = *(short *)(DAT_0004d634 + DAT_0004d62a);
  if ((((sVar1 != 0x39) && (sVar1 != 0x3a)) && (sVar1 != 0x3b)) && (sVar1 != 0x3c)) {
    if (sVar1 == 0x3d) {
      iVar4 = (*DAT_0004d638)();
      iVar3 = *(char *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0004d62c) * 0xc0000;
      iVar4 = DAT_0004d62c + -0x28;
    }
    else {
      if (sVar1 != 0x3e) {
        if (sVar1 != 0x3f) {
          return param_2;
        }
        if (*(byte *)(param_1 + 0x60) < 0xb) {
          return param_2;
        }
        iVar5 = (*DAT_0004d648)((int)(short)param_2 << 0x10,DAT_0004d644);
        return (int)(short)((uint)(iVar5 + iVar2) >> 0x10);
      }
      iVar3 = (*DAT_0004d638)();
      iVar4 = (int)DAT_0004d62e;
      iVar3 = (int)*(char *)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + (int)DAT_0004d62c) << 0x14;
    }
    iVar5 = (*DAT_0004d63c)((int)*(short *)(iVar5 + iVar4) << 0x10,iVar3);
    (*DAT_0004d640)((int)(short)((uint)(iVar5 + iVar2) >> 0x10));
  }
  return param_2;
}



void FUN_0004d75c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_1c;
  undefined4 uStack24;
  undefined4 uStack20;
  undefined4 uStack16;
  undefined4 uStack12;
  
  (*DAT_0004d890)(*(undefined4 *)(param_1 + 0x68),param_2,param_3,1,*(undefined4 *)(param_1 + 0x2c),
                  *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),(int)DAT_0004d884)
  ;
  *(uint *)(*(int *)(param_1 + 0x68) + 0x50) =
       *(uint *)(*(int *)(param_1 + 0x68) + 0x50) & DAT_0004d894;
  if ((*(char *)(*(int *)(param_1 + 0x68) + 0x60) != '\0') &&
     (((int)DAT_0004d886 & *(uint *)(*(int *)(param_1 + 0x68) + 0x50)) == 0)) {
    if (-1 < *(short *)(param_1 + DAT_0004d88a)) {
      (*DAT_0004d8b0)(param_1,*(undefined4 *)(*DAT_0004d8ac + 0xc),
                      *(undefined4 *)(*(short *)(param_1 + DAT_0004d88a) * 4 + DAT_0004d8a8),
                      param_1 + 0x14,(int)DAT_0004d886,0,0xf,0);
    }
    if (param_1 != 0) {
      *(uint *)(param_1 + -4) = *(uint *)(param_1 + -4) | 1;
    }
    return;
  }
  (*DAT_0004d898)(param_1 + 0x2c,&uStack16);
  local_1c = uStack16;
  uStack24 = uStack12;
  uStack20 = (*DAT_0004d89c)();
  (*DAT_0004d8a0)(param_1,param_1 + 0x14,&local_1c,(int)DAT_0004d888);
  *(undefined *)(param_1 + 100) = 2;
  *(undefined4 *)(param_1 + 0x58) = 10;
  (*DAT_0004d8a4)(0x16);
  return;
}



undefined4 FUN_0004d836(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (*DAT_0004d8b4)();
  cVar1 = *(char *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_0004d88c);
  iVar2 = (*DAT_0004d8b8)();
  iVar2 = (*DAT_0004d8bc)(iVar2 << 0x10,(int)cVar1 << 0x10);
  uVar3 = FUN_0004d534(*(undefined4 *)(param_1 + 0x68),
                       (int)(short)((uint)(iVar2 + DAT_0004d8c0) >> 0x10));
  uVar3 = (*DAT_0004d8c4)(*(undefined4 *)(param_1 + 0x68),uVar3,0);
  return uVar3;
}



int FUN_0004e06a(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0004e13c;
  iVar2 = (int)*DAT_0004e134;
  if (iVar2 != 0x39) {
    if (iVar2 == 0x3b) {
      *(undefined4 *)(param_1 + 0x10) = DAT_0004e138;
      return 0x3b;
    }
    if (iVar2 == 0x3f) {
      *(undefined4 *)(param_1 + 0x10) = DAT_0004e140;
      return 0x3f;
    }
    if (iVar2 == 0x40) {
      *(int *)(param_1 + 0x10) = DAT_0004e13c;
      return iVar1;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = DAT_0004e144;
  return iVar2;
}



undefined4 FUN_0004ee78(short param_1,char param_2)

{
  int iVar1;
  
  iVar1 = (*DAT_0004efb8)();
  if (((int)*(short *)(iVar1 + 4) == ((int)param_2 & 0xffU)) &&
     (iVar1 = (*DAT_0004efb8)(), (int)*(short *)(iVar1 + 8) == ((int)param_1 & 0xffffU))) {
    return 1;
  }
  return 0;
}



void FUN_0004f84c(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  pcVar1 = DAT_0004f9fc;
  iVar2 = (*DAT_0004f9fc)();
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_0004f9f4)
  ;
  iVar2 = (*pcVar1)();
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_0004f9f6)
  ;
  iVar2 = (*pcVar1)();
  *(int *)(param_1 + 0x5c) =
       *(int *)(param_1 + 0x5c) + *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + (int)DAT_0004f9f8)
  ;
  pcVar1 = DAT_0004fa00;
  if (*(int *)(param_1 + DAT_0004f9fa) == 0) {
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



void FUN_0004fa04(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x34);
  iVar4 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x38);
  iVar5 = (int)DAT_0004faf0;
  iVar1 = (*DAT_0004faf4)();
  (*DAT_0004faf8)((int)DAT_0004faf2 + *(int *)(*(int *)(iVar1 + 0x10) + 0x18),
                  (int)*(short *)(param_1 + 0x70),param_1 + 0x24,2,iVar2,iVar3,iVar4,iVar5);
  return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_0005073c(int param_1,int *param_2,int *param_3,int param_4)

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
  (*DAT_0005083c)(&local_20,auStack40);
  uVar3 = (*DAT_0005085c)(*(undefined4 *)(param_4 + 0x10),
                          *(undefined4 *)((short)(uStack36._0_2_ & DAT_00050834) * 4 + DAT_00050858)
                         );
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  iVar4 = DAT_00050860;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_4 + 0x14);
  uVar3 = (*DAT_0005085c)(*(undefined4 *)(param_4 + 0x10),
                          *(undefined4 *)((short)(uStack36._0_2_ & DAT_00050834) * 4 + iVar4));
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  pcVar2 = DAT_00050864;
  iVar5 = (int)sVar1 << 0x10;
  iVar4 = (*DAT_00050864)(local_20,iVar5);
  *(int *)(param_1 + 0x14) = iVar4 - (*(int *)(param_1 + 0x20) >> 1) * (int)sVar1;
  iVar4 = (*pcVar2)(iStack28,iVar5);
  *(int *)(param_1 + 0x18) = iVar4 - (*(int *)(param_1 + 0x24) >> 1) * (int)sVar1;
  iVar4 = (*pcVar2)(iStack24,iVar5);
  pcVar2 = DAT_00050868;
  *(int *)(param_1 + 0x1c) = iVar4 - (*(int *)(param_1 + 0x28) >> 1) * (int)sVar1;
  iVar4 = (*pcVar2)();
  *(int *)(param_1 + 0x14) =
       *(int *)(param_1 + 0x14) + *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_00050836)
  ;
  iVar4 = (*pcVar2)();
  *(int *)(param_1 + 0x18) =
       *(int *)(param_1 + 0x18) + *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_00050838)
  ;
  iVar4 = (*pcVar2)();
  *(int *)(param_1 + 0x1c) =
       *(int *)(param_1 + 0x1c) + *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 4) + (int)DAT_0005083a)
  ;
  return;
}



int * FUN_0005086c(int *param_1,undefined4 param_2,char *param_3)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  
  piVar6 = *(int **)(((int)*param_3 & 0xffU) * 0x10 + *DAT_00050b30 + 0xc);
  if (*(short *)(param_3 + 2) == 0) {
    iVar2 = (*DAT_00050b34)();
    piVar3 = (int *)(*DAT_00050b3c)(*(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x18),DAT_00050b48,0x4c
                                   );
    *piVar3 = *piVar6;
    piVar3[1] = piVar6[1];
    *(undefined *)(piVar3 + 0xc) = 0;
    iVar2 = (*DAT_00050b40)(piVar3,8);
    piVar3[0xb] = iVar2;
    (*DAT_00050b4c)(piVar3[0xb],(int)*(short *)(piVar6[1] + 4),*(undefined4 *)(param_3 + 8));
    uVar4 = (*DAT_00050b50)();
    pcVar1 = DAT_00050b54;
    for (uVar4 = uVar4 & 0xf; uVar4 != 0; uVar4 = uVar4 - 1) {
      (*pcVar1)(piVar3[0xb]);
    }
  }
  else {
    iVar2 = (*DAT_00050b34)();
    piVar3 = (int *)(*DAT_00050b3c)(*(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x18),DAT_00050b38,0x4c
                                   );
    *piVar3 = *piVar6;
    piVar3[1] = piVar6[1];
    *(undefined *)(piVar3 + 0xc) = 1;
    iVar2 = (*DAT_00050b40)(piVar3,0x50);
    piVar3[0xb] = iVar2;
    iVar2 = *piVar3;
    if (*(short *)(param_3 + 6) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(iVar2 + ((int)*(short *)(param_3 + 6) & 0xffffU));
    }
    (*DAT_00050b44)(piVar3,piVar3[0xb],0,iVar2,(int)*(short *)(param_3 + 2),uVar5,
                    *(undefined4 *)(iVar2 + ((int)*(short *)(param_3 + 4) & 0xffffU)),0,0);
  }
  piVar3[2] = *param_1;
  piVar3[3] = param_1[1];
  piVar3[4] = param_1[2];
  FUN_0005073c(piVar3,param_1,param_2,param_3);
  *(undefined2 *)((int)piVar3 + 0x32) = *(undefined2 *)(param_3 + 0xe);
  *(undefined2 *)(piVar3 + 0xd) = *(undefined2 *)(param_3 + 0x18);
  *(char *)((int)piVar3 + 0x36) = param_3[0x1a];
  if (*(int *)(param_3 + 0x1c) != 0) {
    (*DAT_00050b5c)(*(undefined4 *)(((int)param_3[0x2a] & 0xffU) * 0x10 + *DAT_00050b30 + 0xc),
                    *(undefined4 *)(param_3 + 0x1c),param_1,0,0,DAT_00050b58,0,0);
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



// WARNING: Control flow encountered unimplemented instructions

void FUN_00050faa(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_00051006(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000513b2(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00051582(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_00051ab2(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000522cc(void)

{
  int in_r0;
  undefined in_r1;
  
  *(undefined *)(in_r0 * 2) = in_r1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005268f(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005269f(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_r0;
  int iVar1;
  int unaff_r10;
  
  iVar1 = *(int *)(in_r0 + 0x18);
  *(undefined4 *)(unaff_r10 + iVar1) = param_3;
  *(undefined4 *)(unaff_r10 + iVar1 + 4) = param_3;
  *(char *)(iVar1 + 6) = (char)(iVar1 + 4);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000526af(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_r0;
  int unaff_r10;
  
  *(int *)(in_r0 * 2) = in_r0;
  *(undefined4 *)(unaff_r10 + in_r0) = param_3;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00052730(void)

{
  short sVar1;
  uint uVar2;
  undefined2 uVar3;
  int in_gbr;
  
  sVar1 = *(short *)(in_gbr + 0x1e0);
  *(short *)(in_gbr + 0x1e0) = sVar1;
  *(byte *)(in_gbr + sVar1) = *(byte *)(in_gbr + sVar1) & 0xef;
  sVar1 = *(short *)(in_gbr + 0x1de);
  *(byte *)(in_gbr + sVar1) = *(byte *)(in_gbr + sVar1) & 0xee;
  *(short *)(in_gbr + 0x1de) = sVar1;
  sVar1 = *(short *)(in_gbr + 0x19e);
  uVar2 = (uint)sVar1;
  *(byte *)(in_gbr + uVar2) = *(byte *)(in_gbr + uVar2) & 0xce;
  *(short *)(in_gbr + 0x19e) = sVar1;
  *(byte *)(in_gbr + (uVar2 & 0xce)) = *(byte *)(in_gbr + (uVar2 & 0xce)) & 0xcd;
  *(undefined2 *)(in_gbr + 0x19c) = *(undefined2 *)(in_gbr + 0x19c);
  FUN_000522fa();
  *(undefined2 *)(in_gbr + 0x19a) = *(undefined2 *)(in_gbr + 0x19a);
  FUN_00052300();
  *(undefined2 *)(in_gbr + 0x15c) = *(undefined2 *)(in_gbr + 0x198);
  uVar3 = FUN_000522cc();
  *(undefined2 *)(in_gbr + 0x15a) = uVar3;
  func_0x000522d2();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005277c(void)

{
  undefined2 in_r0;
  undefined2 uVar1;
  int in_gbr;
  
  *(undefined2 *)(in_gbr + 0x158) = in_r0;
  func_0x000522da();
  *(undefined2 *)(in_gbr + 0x11a) = *(undefined2 *)(in_gbr + 0x156);
  func_0x00051ae0();
  uVar1 = FUN_000522a6();
  *(undefined2 *)(in_gbr + 0x118) = uVar1;
  func_0x00051aaa();
  uVar1 = func_0x000522ae();
  *(undefined2 *)(in_gbr + 0x116) = uVar1;
  FUN_00051ab2();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00052863(undefined4 param_1,int param_2)

{
  int in_r0;
  undefined unaff_r11;
  
  *(undefined *)(param_2 + in_r0) = unaff_r11;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00053381(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_r0;
  
  *(undefined4 *)(in_r0 * 2) = param_3;
  *(undefined4 *)(in_r0 * 2) = param_2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00053835(void)

{
  undefined2 *in_r0;
  undefined2 in_r1;
  undefined4 in_r2;
  char *in_gbr;
  
  *in_r0 = in_r1;
  *(undefined4 *)(*in_gbr * 2) = in_r2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00053872(void)

{
  int unaff_r9;
  
  *(int *)(unaff_r9 + 0x24) = unaff_r9;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00053b8f(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00053c7b(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00053c9f(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005407a(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00054247(void)

{
  int in_r0;
  
  *(int *)(in_r0 * 2) = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000543eb(void)

{
  undefined in_r0;
  undefined *in_gbr;
  
  *in_gbr = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005466c(int param_1)

{
  undefined4 unaff_r12;
  
  *(undefined4 *)(param_1 + 4) = unaff_r12;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00054817(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005482b(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 in_r1;
  undefined4 extraout_r2;
  undefined *in_gbr;
  
  *(undefined4 *)(param_2 + 0x10) = in_r1;
  iVar1 = FUN_00053835();
  *in_gbr = (char)iVar1;
  *(undefined4 *)(iVar1 * 2) = extraout_r2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00054b6a(void)

{
  int unaff_r9;
  undefined4 unaff_r13;
  
  *(undefined4 *)(unaff_r9 + -1) = unaff_r13;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00054b7e(void)

{
  int in_r0;
  
  *(int *)(in_r0 + 4) = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00054e3f(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00055597(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00055789(undefined4 param_1)

{
  int in_r0;
  int unaff_r10;
  
  *(undefined4 *)(unaff_r10 + in_r0) = param_1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00055a5f(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00055ad1(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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

void FUN_00055c3b(void)

{
  undefined2 in_r0;
  undefined2 *unaff_r12;
  
  *unaff_r12 = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005613d(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000564cd(void)

{
  undefined4 in_r0;
  undefined4 *unaff_r14;
  
  *unaff_r14 = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005650d(int param_1)

{
  undefined4 in_r0;
  
  *(undefined4 *)(param_1 + 0x1c) = in_r0;
  FUN_00056d1f();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_00056549(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005655d(int param_1)

{
  int in_r0;
  int *unaff_r14;
  
  *unaff_r14 = in_r0;
  *(int *)(param_1 + 0x1c) = (int)*(char *)(*(int *)(in_r0 + 8) + 5);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005658d(void)

{
  undefined4 in_r0;
  undefined4 *unaff_r14;
  
  *unaff_r14 = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000565a9(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000566d5(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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

void FUN_000566e5(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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

void FUN_000566f5(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_00056783(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00056793(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00056b00(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00056ce6(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00056d1c(void)

{
  int in_r0;
  
  *(int *)(in_r0 * 2) = in_r0;
  (*(code *)(in_r0 + 0x56d20))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00056d52(void)

{
  int in_r0;
  undefined4 unaff_r9;
  
  *(undefined4 *)(in_r0 * 2) = unaff_r9;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00056d6b(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00056dde(void)

{
  int in_r0;
  undefined4 unaff_r9;
  
  *(undefined4 *)(in_r0 * 2) = unaff_r9;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_00056f4d(void)

{
  FUN_00056793();
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00056f85(void)

{
  short *unaff_r12;
  int in_gbr;
  
  *unaff_r12 = (short)*(char *)(in_gbr + 0x13);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00056ffb(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000571c6(undefined4 param_1,undefined4 param_2,int param_3,undefined param_4)

{
  int in_r0;
  undefined4 in_r2;
  undefined4 *unaff_r11;
  undefined *unaff_r14;
  
  *unaff_r11 = in_r2;
  *(int *)(param_3 + in_r0) = in_r0;
  *unaff_r14 = param_4;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000571d2(undefined4 param_1,undefined4 param_2,int param_3)

{
  int in_r0;
  
  *(int *)(param_3 + in_r0) = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000571fa(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00057206(void)

{
  int in_r0;
  undefined2 unaff_r10;
  
  *(undefined2 *)(in_r0 * 2) = unaff_r10;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000572d7(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005742f(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00057b92(void)

{
  int in_r0;
  undefined in_r1;
  
  *(undefined *)(in_r0 * 2) = in_r1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00057ba6(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00057bba(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_00057bce(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00057be2(void)

{
  Sleep_Standby();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00057bf6(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00057c0a(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_00057c1e(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00057ef6(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00057f08(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00057f2c(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00057f86(undefined4 *param_1)

{
  undefined4 in_r0;
  
  *param_1 = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00057ff2(void)

{
  int in_r0;
  undefined2 unaff_r10;
  
  *(undefined2 *)(in_r0 * 2) = unaff_r10;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00058016(void)

{
  int in_r0;
  undefined in_r1;
  
  *(undefined *)(in_r0 * 2) = in_r1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000580ac(void)

{
  undefined4 in_r0;
  undefined2 uVar1;
  undefined4 *in_gbr;
  
  uVar1 = (undefined2)in_r0;
  *(undefined2 *)(in_gbr + 0x4e) = uVar1;
  *(undefined2 *)(in_gbr + 0x58) = uVar1;
  *(undefined2 *)(in_gbr + 0x62) = uVar1;
  *(undefined2 *)(in_gbr + 0x6c) = uVar1;
  *(undefined2 *)(in_gbr + 0x76) = uVar1;
  *in_gbr = in_r0;
  in_gbr[0x14] = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



int FUN_000580d6(void)

{
  int in_r0;
  int in_r2;
  int in_pr;
  
  *(int *)(in_r0 * 2) = in_r0;
  return (int)*(char *)(in_r2 + in_pr);
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005813c(void)

{
  undefined4 in_r0;
  undefined *in_r7;
  int unaff_r8;
  undefined unaff_r10;
  
  *in_r7 = unaff_r10;
  *(undefined4 *)(unaff_r8 + -4) = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00058217(void)

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

void FUN_00058242(void)

{
  int in_gbr;
  
  *(char *)(int)*(char *)(in_gbr + 0x70) = *(char *)(in_gbr + 0x70);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00058278(void)

{
  undefined4 in_r0;
  
  *(undefined4 *)in_r0 = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00058352(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char **ppcVar2;
  char *extraout_r2;
  char *pcVar3;
  undefined uVar4;
  int iVar5;
  int unaff_r12;
  int in_vbr;
  
  (*(code *)(in_vbr + 0x3c0))();
  (*(code *)(in_vbr + 0x3c0))();
  iVar1 = (*(code *)(in_vbr + 0x3c0))();
  *(undefined4 *)(param_2 + -1) = param_3;
  *(undefined4 *)(iVar1 + 0x1f) = param_4;
  iVar5 = (int)*extraout_r2;
  *(undefined4 *)(iVar5 + -1) = param_3;
  *(undefined4 *)(iVar5 + -2) = param_3;
  *(char **)(unaff_r12 + -2) = extraout_r2;
  *(undefined4 *)(iVar5 + -3) = param_3;
  *(char *)(undefined4 *)(iVar1 + 0x1f) = (char)param_4;
  pcVar3 = extraout_r2 + 0x69;
  ppcVar2 = (char **)(iVar1 + 0x1d);
  *ppcVar2 = pcVar3;
  uVar4 = SUB41(pcVar3,0);
  *(undefined *)ppcVar2 = uVar4;
  *(undefined *)ppcVar2 = uVar4;
  *(undefined *)ppcVar2 = uVar4;
  *(char *)ppcVar2 = (char)ppcVar2;
  *(undefined4 *)(iVar5 + -4) = param_3;
  *(undefined4 *)(iVar5 + -5) = param_3;
  *(short *)ppcVar2 = (short)param_3;
  *(char **)(iVar1 + 0x1b) = pcVar3;
  *(undefined4 *)(iVar5 + -6) = param_3;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00058682(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000586b0(void)

{
  int in_r0;
  int in_gbr;
  
  *(byte *)(in_gbr + in_r0) = *(byte *)(in_gbr + in_r0) & 0xb2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00058ba3(void)

{
  int in_r0;
  undefined4 in_r2;
  
  *(int *)(in_r0 + 8) = in_r0;
  *(int *)(in_r0 + 0x18) = in_r0;
  *(undefined4 *)(in_r0 + 0x38) = in_r2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000592f2(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00059850(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00059ced(void)

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

void FUN_00059d11(void)

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
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00059ec6(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005a77b(void)

{
  int in_r0;
  undefined4 in_r2;
  
  *(undefined4 *)(in_r0 * 2) = in_r2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005a903(void)

{
  int in_r0;
  undefined4 in_r2;
  
  *(undefined4 *)(in_r0 * 2) = in_r2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005a99d(undefined4 param_1,int param_2)

{
  int in_r0;
  undefined4 in_r2;
  
  *(undefined4 *)(param_2 + 0x38) = in_r2;
  *(undefined4 *)(in_r0 * 2) = in_r2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005aad3(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005ac61(void)

{
  int in_r0;
  undefined4 in_r2;
  
  *(undefined4 *)(in_r0 * 2) = in_r2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005acaf(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005accb(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005ace7(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005ad1f(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005ad3b(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005af01(void)

{
  int in_r0;
  undefined4 in_r2;
  
  *(undefined4 *)(in_r0 * 2) = in_r2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions
// WARNING: Control flow encountered bad instruction data

void FUN_0005b045(void)

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

void FUN_0005b07d(void)

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

void FUN_0005b167(void)

{
  int in_r0;
  undefined in_r1;
  
  *(undefined *)(in_r0 * 2) = in_r1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005b27f(void)

{
  int in_r0;
  undefined in_r1;
  
  *(undefined *)(in_r0 * 2) = in_r1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005b983(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005ba63(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005ba9b(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005bb7b(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005bc93(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005c443(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005c56f(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005c5c1(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005c5c9(void)

{
  int in_r0;
  undefined4 in_r1;
  
  *(undefined4 *)(in_r0 * 2) = in_r1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005c5e7(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005c641(void)

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

void FUN_0005c65f(void)

{
  undefined *in_r0;
  undefined4 in_r2;
  
  *(undefined4 *)(*(int *)(in_r0 + 8) + 0x3c) = in_r2;
  *in_r0 = (char)in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_0005c67d(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int in_r0;
  undefined4 in_r3;
  
  *param_3 = in_r3;
                    // WARNING: Could not recover jumptable at 0x0005c685. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(in_r0 + 0x5c689))();
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005c6d5(void)

{
  int in_r0;
  undefined4 in_r2;
  
  *(undefined4 *)(in_r0 * 2) = in_r2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005c6f3(void)

{
  int in_r0;
  undefined4 in_r1;
  
  *(undefined4 *)(in_r0 * 2) = in_r1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005c711(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005c72f(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005c76b(void)

{
  int in_r0;
  int in_gbr;
  
  *(undefined *)(in_gbr + in_r0) = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005c801(void)

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

void FUN_0005c81f(void)

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

void FUN_0005c83d(void)

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

void FUN_0005c895(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005c8b3(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005c8d1(void)

{
  int in_r0;
  
  *(int *)(in_r0 * 2) = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005c8ef(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_0005c92b(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005c955(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_0005c967(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_0005c985(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_0005c9a3(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_0005c9df(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005ca63(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005ca6f(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005ca87(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005ca9f(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_0005cb27(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005cb6f(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005cebd(void)

{
  int in_r0;
  
  *(BADSPACEBASE **)(in_r0 + 0x38) = register0x0000003c;
  FUN_0005dac1();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005cee1(void)

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

void FUN_0005d4f7(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0005dabb(void)

{
  uint uVar1;
  int in_r2;
  uint *puVar2;
  uint in_sr;
  
  puVar2 = (uint *)(int)FUN_0005dac1;
  *puVar2 = in_sr;
  uVar1 = *(uint *)(in_r2 + in_sr);
  *puVar2 = uVar1;
  *(undefined4 *)((int)puVar2 * 2) =
       *(undefined4 *)(in_r2 + (in_sr & 0xfffffffe | (uint)(uVar1 == 0)));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005dac1(void)

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

void FUN_0005db41(void)

{
  undefined4 in_r0;
  undefined4 *unaff_r8;
  
  *unaff_r8 = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined4 FUN_0005dc7b(void)

{
  undefined4 in_r0;
  
  return in_r0;
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_0005dc87(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0005dcdd(void)

{
  int in_r0;
  undefined4 in_r1;
  int in_r2;
  
  *(undefined4 *)(*(int *)(in_r2 + in_r0) + -1) = in_r1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005dceb(void)

{
  int in_r0;
  undefined4 in_r1;
  
  *(undefined4 *)(in_r0 + -1) = in_r1;
  FUN_0005d4f7();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005dced(void)

{
  int in_r0;
  undefined4 in_r1;
  
  *(undefined4 *)(in_r0 + -1) = in_r1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005dd0f(void)

{
  int in_r0;
  undefined4 in_r1;
  
  *(undefined4 *)(in_r0 + -1) = in_r1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005dd31(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0005dd53(void)

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

void FUN_0005dd67(void)

{
  int in_r0;
  int in_gbr;
  
  *(byte *)(in_gbr + in_r0) = *(byte *)(in_gbr + in_r0) & 0xb9;
  *(byte *)(in_gbr + in_r0) = *(byte *)(in_gbr + in_r0) & 0xda;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005dd75(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005de23(undefined4 *param_1)

{
  undefined in_r0;
  undefined4 uVar1;
  undefined4 unaff_r10;
  int in_gbr;
  
  *param_1 = unaff_r10;
  *(undefined *)(in_gbr + 0x83) = in_r0;
  *(undefined *)(in_gbr + 0xa2) = in_r0;
  uVar1 = *(undefined4 *)(in_gbr + 0x22c);
  *(undefined4 *)(in_gbr + 0x22c) = uVar1;
  *(undefined4 *)(in_gbr + 0x24c) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0005df6b(void)

{
  undefined4 in_r0;
  
  *(undefined4 *)in_r0 = in_r0;
  func_0x0005cf71();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


