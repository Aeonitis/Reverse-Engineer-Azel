#include "1ST_READ.PRG.h"

// WARNING: Type propagation algorithm not settling

void FUN_000000e0(void){
  int *piVar1;
  uint *puVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined2 uVar8;
  undefined *puVar7;
  int unaff_r12;
  
  piVar1 = DAT_000001a8;
  iVar5 = (*DAT_000001ac)((int)DAT_000001a2);
  if (iVar5 != 0) {
    *DAT_000001b0 = 1;
  }
  puVar2 = DAT_000001b4;
  iVar5 = (*DAT_000001b8)((int)DAT_000001a4);
  if (((iVar5 != 0) && (((int)*DAT_000001bc & 0x86U) == 0)) &&
     (uVar6 = *puVar2, *puVar2 = (uint)(uVar6 == 0), (uVar6 == 0) == 0)) {
    (*DAT_000001c0)();
    (*DAT_000001c4)();
  }
  if (*puVar2 != 0) {
    (*DAT_000001c8)();
    unaff_r12 = (*DAT_000001cc)();
  }
  pcVar3 = DAT_000001d0;
  *piVar1 = 1;
  while (pcVar4 = DAT_000001e0, *piVar1 != 0) {
    (*pcVar3)();
  }
  if (*puVar2 != 0) {
    if (piVar1[5] < piVar1[6]) {
      uVar8 = SUB42(PTR_DAT_000001dc,0);
    }
    else {
      uVar8 = SUB42(PTR_LAB_000001d8,0);
    }
    *(undefined2 *)(DAT_000001d4 + 0x10) = uVar8;
    (*pcVar4)(0xfffffff7,1);
    puVar7 = (undefined *)(*DAT_000001cc)();
    if ((int)puVar7 < unaff_r12) {
      puVar7 = puVar7 + (int)PTR_DAT_000001e4;
    }
    (*DAT_000001e8)((int)puVar7 - unaff_r12);
    (*DAT_000001ec)();
  }
  piVar1[6] = 0;
  return;
}



uint FUN_00000236(uint param_1,uint param_2,uint param_3,uint param_4){
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar11;
  uint uVar12;
  uint *in_r1;
  uint *in_r2;
  undefined4 *extraout_r2;
  undefined4 *puVar13;
  uint *extraout_r2_00;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  undefined8 uVar37;
  uint uVar10;
  
  if (param_3 == 0) {
    if (((param_2 & 0x80000000) != 0) == ((param_1 & 0x80000000) != 0)) {
      *in_r1 = param_2;
      in_r1[4] = (int)(short)(param_1 >> 0x10);
      in_r1[5] = param_1 << 0x10;
      uVar7 = in_r1[7];
      goto LAB_0000022a;
    }
  }
  else {
    if ((int)param_1 < 0) {
      param_1 = -param_1;
      param_2 = -param_2;
      param_3 = -param_3;
    }
    uVar7 = (param_3 * param_4 - param_2) - param_3;
    if ((int)param_3 < 0) {
      if ((int)uVar7 < 0) {
        if ((int)param_2 < 0) {
          *in_r1 = param_3;
          in_r1[1] = param_2 + param_3 + 1;
          param_4 = param_4 - in_r1[7];
          uVar37 = FUN_0000026a();
          in_r1 = (uint *)((ulonglong)uVar37 >> 0x20);
          uVar7 = (uint)uVar37;
          in_r2 = extraout_r2_00;
        }
        goto code_r0x00000298;
      }
    }
    else if (-1 < (int)param_2) {
      if (-1 < (int)uVar7) {
        *in_r1 = param_3;
        in_r1[1] = param_2;
        iVar16 = param_4 - (in_r1[7] + 1);
        FUN_00000298();
        param_3 = param_3 * iVar16;
        puVar13 = extraout_r2;
        do {
          *puVar13 = 0xffffffff;
          iVar16 = iVar16 + -1;
          puVar13 = puVar13 + 1;
        } while (iVar16 != 0);
        return param_3;
      }
code_r0x00000298:
      uVar14 = (uint)(short)(param_1 >> 0x10);
      uVar15 = param_4 >> 1;
      if ((param_4 & 1) == 1) {
        *in_r1 = param_2;
        in_r1[4] = uVar14;
        in_r1[5] = param_1 << 0x10;
        param_2 = param_2 - param_3;
        uVar7 = in_r1[7];
        *in_r2 = uVar7;
        in_r2 = in_r2 + 1;
      }
      for (; uVar15 != 0; uVar15 = uVar15 - 1) {
        *in_r1 = param_2;
        in_r1[4] = uVar14;
        in_r1[5] = param_1 << 0x10;
        iVar16 = param_2 - param_3;
        uVar8 = (param_1 >> 8) << 1 | (uint)((param_1 & 0x80) != 0);
        uVar7 = uVar8 - iVar16;
        bVar4 = uVar7 <= uVar8;
        uVar12 = param_1 << 0x1a;
        bVar3 = (uVar7 & 0x80000000) == 0;
        uVar7 = uVar7 * 2 | (uint)((param_1 & 0x40) != 0);
        uVar8 = (uint)bVar4 * (uVar7 - iVar16) + (uint)!bVar4 * (uVar7 + iVar16);
        cVar1 = bVar4 * (uVar7 < uVar8) + !bVar4 * (uVar8 < uVar7);
        bVar5 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
        uVar7 = (uint)bVar5 << 8;
        uVar9 = uVar8 * 2 | (uint)((uVar12 & 0x80000000) != 0);
        bVar3 = (bVar5 & 1) == ((byte)(uVar7 >> 9) & 1);
        bVar2 = (bool)((byte)(uVar7 >> 9) & 1) == ((uVar8 & 0x80000000) != 0);
        uVar10 = (uint)bVar3 * (uVar9 - iVar16) + (uint)!bVar3 * (uVar9 + iVar16);
        cVar1 = bVar3 * (uVar9 < uVar10) + !bVar3 * (uVar10 < uVar9);
        uVar8 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
        uVar17 = uVar7 & 0xfffffeff | uVar8;
        uVar6 = uVar7 & 0xfffffefe;
        uVar9 = uVar6 | uVar8;
        uVar11 = uVar10 * 2 | (uint)((uVar12 & 0x40000000) != 0);
        bVar3 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
        bVar2 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar3 * (uVar11 - iVar16) + (uint)!bVar3 * (uVar11 + iVar16);
        cVar1 = bVar3 * (uVar11 < uVar10) + !bVar3 * (uVar10 < uVar11);
        uVar9 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
        uVar18 = uVar6 | uVar8 & 0xfffffeff | uVar9;
        uVar6 = uVar6 | uVar8 & 0xfffffefe;
        uVar8 = uVar6 | uVar9;
        uVar11 = uVar10 * 2 | (uint)((uVar12 & 0x20000000) != 0);
        bVar3 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar2 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar3 * (uVar11 - iVar16) + (uint)!bVar3 * (uVar11 + iVar16);
        cVar1 = bVar3 * (uVar11 < uVar10) + !bVar3 * (uVar10 < uVar11);
        uVar8 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
        uVar19 = uVar6 | uVar9 & 0xfffffeff | uVar8;
        uVar6 = uVar6 | uVar9 & 0xfffffefe;
        uVar9 = uVar6 | uVar8;
        uVar11 = uVar10 * 2 | (uint)((uVar12 & 0x10000000) != 0);
        bVar3 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
        bVar2 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar3 * (uVar11 - iVar16) + (uint)!bVar3 * (uVar11 + iVar16);
        cVar1 = bVar3 * (uVar11 < uVar10) + !bVar3 * (uVar10 < uVar11);
        uVar9 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
        uVar20 = uVar6 | uVar8 & 0xfffffeff | uVar9;
        uVar6 = uVar6 | uVar8 & 0xfffffefe;
        uVar8 = uVar6 | uVar9;
        uVar11 = uVar10 * 2 | (uint)((uVar12 & 0x8000000) != 0);
        bVar3 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar2 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar3 * (uVar11 - iVar16) + (uint)!bVar3 * (uVar11 + iVar16);
        cVar1 = bVar3 * (uVar11 < uVar10) + !bVar3 * (uVar10 < uVar11);
        uVar8 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
        uVar11 = uVar6 | uVar9 & 0xfffffeff | uVar8;
        uVar6 = uVar6 | uVar9 & 0xfffffefe;
        uVar9 = uVar6 | uVar8;
        uVar12 = uVar10 * 2 | (uint)((uVar12 & 0x4000000) != 0);
        bVar3 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
        bVar2 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar3 * (uVar12 - iVar16) + (uint)!bVar3 * (uVar12 + iVar16);
        cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
        uVar9 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
        uVar21 = uVar6 | uVar8 & 0xfffffeff | uVar9;
        uVar6 = uVar6 | uVar8 & 0xfffffefe;
        uVar8 = uVar6 | uVar9;
        uVar12 = uVar10 * 2;
        bVar3 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar2 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar3 * (uVar12 - iVar16) + (uint)!bVar3 * (uVar12 + iVar16);
        cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
        uVar8 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
        uVar22 = uVar6 | uVar9 & 0xfffffeff | uVar8;
        uVar6 = uVar6 | uVar9 & 0xfffffefe;
        uVar9 = uVar6 | uVar8;
        uVar12 = uVar10 * 2;
        bVar3 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
        bVar2 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar3 * (uVar12 - iVar16) + (uint)!bVar3 * (uVar12 + iVar16);
        cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
        uVar9 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
        uVar23 = uVar6 | uVar8 & 0xfffffeff | uVar9;
        uVar6 = uVar6 | uVar8 & 0xfffffefe;
        uVar8 = uVar6 | uVar9;
        uVar12 = uVar10 * 2;
        bVar3 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar2 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar3 * (uVar12 - iVar16) + (uint)!bVar3 * (uVar12 + iVar16);
        cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
        uVar8 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
        uVar24 = uVar6 | uVar9 & 0xfffffeff | uVar8;
        uVar6 = uVar6 | uVar9 & 0xfffffefe;
        uVar9 = uVar6 | uVar8;
        uVar12 = uVar10 * 2;
        bVar3 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
        bVar2 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar3 * (uVar12 - iVar16) + (uint)!bVar3 * (uVar12 + iVar16);
        cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
        uVar9 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
        uVar25 = uVar6 | uVar8 & 0xfffffeff | uVar9;
        uVar6 = uVar6 | uVar8 & 0xfffffefe;
        uVar8 = uVar6 | uVar9;
        uVar12 = uVar10 * 2;
        bVar3 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar2 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar3 * (uVar12 - iVar16) + (uint)!bVar3 * (uVar12 + iVar16);
        cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
        uVar8 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
        uVar26 = uVar6 | uVar9 & 0xfffffeff | uVar8;
        uVar6 = uVar6 | uVar9 & 0xfffffefe;
        uVar9 = uVar6 | uVar8;
        uVar12 = uVar10 * 2;
        bVar3 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
        bVar2 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar3 * (uVar12 - iVar16) + (uint)!bVar3 * (uVar12 + iVar16);
        cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
        uVar9 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
        uVar27 = uVar6 | uVar8 & 0xfffffeff | uVar9;
        uVar6 = uVar6 | uVar8 & 0xfffffefe;
        uVar8 = uVar6 | uVar9;
        uVar12 = uVar10 * 2;
        bVar3 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar2 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar3 * (uVar12 - iVar16) + (uint)!bVar3 * (uVar12 + iVar16);
        cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
        uVar8 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
        uVar28 = uVar6 | uVar9 & 0xfffffeff | uVar8;
        uVar6 = uVar6 | uVar9 & 0xfffffefe;
        uVar9 = uVar6 | uVar8;
        uVar12 = uVar10 * 2;
        bVar3 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
        bVar2 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar3 * (uVar12 - iVar16) + (uint)!bVar3 * (uVar12 + iVar16);
        cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
        uVar9 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
        uVar29 = uVar6 | uVar8 & 0xfffffeff | uVar9;
        uVar6 = uVar6 | uVar8 & 0xfffffefe;
        uVar8 = uVar6 | uVar9;
        uVar12 = uVar10 * 2;
        bVar3 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar2 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar3 * (uVar12 - iVar16) + (uint)!bVar3 * (uVar12 + iVar16);
        cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
        uVar8 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
        uVar30 = uVar6 | uVar9 & 0xfffffeff | uVar8;
        uVar6 = uVar6 | uVar9 & 0xfffffefe;
        uVar9 = uVar6 | uVar8;
        uVar12 = uVar10 * 2;
        bVar3 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
        bVar2 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar3 * (uVar12 - iVar16) + (uint)!bVar3 * (uVar12 + iVar16);
        cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
        uVar9 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
        uVar31 = uVar6 | uVar8 & 0xfffffeff | uVar9;
        uVar6 = uVar6 | uVar8 & 0xfffffefe;
        uVar8 = uVar6 | uVar9;
        uVar12 = uVar10 * 2;
        bVar3 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar2 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar3 * (uVar12 - iVar16) + (uint)!bVar3 * (uVar12 + iVar16);
        cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
        uVar8 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
        uVar32 = uVar6 | uVar9 & 0xfffffeff | uVar8;
        uVar6 = uVar6 | uVar9 & 0xfffffefe;
        uVar9 = uVar6 | uVar8;
        uVar12 = uVar10 * 2;
        bVar3 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
        bVar2 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar3 * (uVar12 - iVar16) + (uint)!bVar3 * (uVar12 + iVar16);
        cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
        uVar9 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
        uVar33 = uVar6 | uVar8 & 0xfffffeff | uVar9;
        uVar6 = uVar6 | uVar8 & 0xfffffefe;
        uVar8 = uVar6 | uVar9;
        uVar12 = uVar10 * 2;
        bVar3 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar2 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar3 * (uVar12 - iVar16) + (uint)!bVar3 * (uVar12 + iVar16);
        cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
        uVar8 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
        uVar34 = uVar6 | uVar9 & 0xfffffeff | uVar8;
        uVar6 = uVar6 | uVar9 & 0xfffffefe;
        uVar9 = uVar6 | uVar8;
        uVar12 = uVar10 * 2;
        bVar3 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
        bVar2 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar3 * (uVar12 - iVar16) + (uint)!bVar3 * (uVar12 + iVar16);
        cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
        uVar9 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
        uVar35 = uVar6 | uVar8 & 0xfffffeff | uVar9;
        uVar6 = uVar6 | uVar8 & 0xfffffefe;
        uVar8 = uVar6 | uVar9;
        uVar12 = uVar10 * 2;
        bVar3 = ((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1);
        bVar2 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar10 = (uint)bVar3 * (uVar12 - iVar16) + (uint)!bVar3 * (uVar12 + iVar16);
        cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
        uVar8 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
        uVar36 = uVar6 | uVar9 & 0xfffffeff | uVar8;
        uVar6 = uVar6 | uVar9 & 0xfffffefe;
        uVar9 = uVar6 | uVar8;
        uVar12 = uVar10 * 2;
        bVar3 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
        bVar2 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
        uVar9 = (uint)bVar3 * (uVar12 - iVar16) + (uint)!bVar3 * (uVar12 + iVar16);
        cVar1 = bVar3 * (uVar12 < uVar9) + !bVar3 * (uVar9 < uVar12);
        uVar8 = uVar6 | uVar8 & 0xfffffeff |
                (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
        in_r2[1] = (((((((((((((((((((((((uint)bVar4 << 1 |
                                        (uint)((bVar5 & 1) == ((byte)(uVar7 >> 9) & 1))) << 1 |
                                       (uint)(((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1)
                                             )) << 1 |
                                      (uint)(((byte)(uVar18 >> 8) & 1) == ((byte)(uVar18 >> 9) & 1))
                                      ) << 1 | (uint)(((byte)(uVar19 >> 8) & 1) ==
                                                     ((byte)(uVar19 >> 9) & 1))) << 1 |
                                    (uint)(((byte)(uVar20 >> 8) & 1) == ((byte)(uVar20 >> 9) & 1)))
                                    << 1 | (uint)(((byte)(uVar11 >> 8) & 1) ==
                                                 ((byte)(uVar11 >> 9) & 1))) << 1 |
                                  (uint)(((byte)(uVar21 >> 8) & 1) == ((byte)(uVar21 >> 9) & 1))) <<
                                  1 | (uint)(((byte)(uVar22 >> 8) & 1) == ((byte)(uVar22 >> 9) & 1))
                                 ) << 1 | (uint)(((byte)(uVar23 >> 8) & 1) ==
                                                ((byte)(uVar23 >> 9) & 1))) << 1 |
                               (uint)(((byte)(uVar24 >> 8) & 1) == ((byte)(uVar24 >> 9) & 1))) << 1
                              | (uint)(((byte)(uVar25 >> 8) & 1) == ((byte)(uVar25 >> 9) & 1))) << 1
                             | (uint)(((byte)(uVar26 >> 8) & 1) == ((byte)(uVar26 >> 9) & 1))) << 1
                            | (uint)(((byte)(uVar27 >> 8) & 1) == ((byte)(uVar27 >> 9) & 1))) << 1 |
                           (uint)(((byte)(uVar28 >> 8) & 1) == ((byte)(uVar28 >> 9) & 1))) << 1 |
                          (uint)(((byte)(uVar29 >> 8) & 1) == ((byte)(uVar29 >> 9) & 1))) << 1 |
                         (uint)(((byte)(uVar30 >> 8) & 1) == ((byte)(uVar30 >> 9) & 1))) << 1 |
                        (uint)(((byte)(uVar31 >> 8) & 1) == ((byte)(uVar31 >> 9) & 1))) << 1 |
                       (uint)(((byte)(uVar32 >> 8) & 1) == ((byte)(uVar32 >> 9) & 1))) << 1 |
                      (uint)(((byte)(uVar33 >> 8) & 1) == ((byte)(uVar33 >> 9) & 1))) << 1 |
                     (uint)(((byte)(uVar34 >> 8) & 1) == ((byte)(uVar34 >> 9) & 1))) << 1 |
                    (uint)(((byte)(uVar35 >> 8) & 1) == ((byte)(uVar35 >> 9) & 1))) << 1 |
                   (uint)(((byte)(uVar36 >> 8) & 1) == ((byte)(uVar36 >> 9) & 1))) << 1 |
                   (uint)(((byte)(uVar8 >> 8) & 1) == ((byte)(uVar8 >> 9) & 1));
        param_2 = iVar16 - param_3;
        uVar7 = in_r1[7];
        *in_r2 = uVar7;
        in_r2 = in_r2 + 2;
      }
      return uVar7;
    }
  }
  uVar7 = 0xffffffff;
LAB_0000022a:
  do {
    *in_r2 = uVar7;
    param_4 = param_4 - 1;
    in_r2 = in_r2 + 1;
  } while (param_4 != 0);
  return uVar7;
}



int FUN_0000026a(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_r2;
  int unaff_r8;
  
  param_3 = param_3 * unaff_r8;
  do {
    *in_r2 = 0xffffffff;
    unaff_r8 = unaff_r8 + -1;
    in_r2 = in_r2 + 1;
  } while (unaff_r8 != 0);
  return param_3;
}



void FUN_00000298(uint param_1,int param_2,int param_3,uint param_4)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar11;
  uint uVar12;
  int *in_r1;
  int *in_r2;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar10;
  
  iVar13 = (int)(short)(param_1 >> 0x10);
  uVar14 = param_4 >> 1;
  if ((param_4 & 1) == 1) {
    *in_r1 = param_2;
    in_r1[4] = iVar13;
    in_r1[5] = param_1 << 0x10;
    param_2 = param_2 - param_3;
    *in_r2 = in_r1[7];
    in_r2 = in_r2 + 1;
  }
  for (; uVar14 != 0; uVar14 = uVar14 - 1) {
    *in_r1 = param_2;
    in_r1[4] = iVar13;
    in_r1[5] = param_1 << 0x10;
    param_2 = param_2 - param_3;
    uVar7 = (param_1 >> 8) << 1 | (uint)((param_1 & 0x80) != 0);
    uVar8 = uVar7 - param_2;
    bVar4 = uVar8 <= uVar7;
    uVar12 = param_1 << 0x1a;
    bVar3 = (uVar8 & 0x80000000) == 0;
    uVar8 = uVar8 * 2 | (uint)((param_1 & 0x40) != 0);
    uVar7 = (uint)bVar4 * (uVar8 - param_2) + (uint)!bVar4 * (uVar8 + param_2);
    cVar1 = bVar4 * (uVar8 < uVar7) + !bVar4 * (uVar7 < uVar8);
    bVar5 = bVar3 * cVar1 + (!bVar3 && cVar1 == '\0');
    uVar8 = (uint)bVar5 << 8;
    uVar9 = uVar7 * 2 | (uint)((uVar12 & 0x80000000) != 0);
    bVar3 = (bVar5 & 1) == ((byte)(uVar8 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar8 >> 9) & 1) == ((uVar7 & 0x80000000) != 0);
    uVar10 = (uint)bVar3 * (uVar9 - param_2) + (uint)!bVar3 * (uVar9 + param_2);
    cVar1 = bVar3 * (uVar9 < uVar10) + !bVar3 * (uVar10 < uVar9);
    uVar7 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar15 = uVar8 & 0xfffffeff | uVar7;
    uVar6 = uVar8 & 0xfffffefe;
    uVar9 = uVar6 | uVar7;
    uVar11 = uVar10 * 2 | (uint)((uVar12 & 0x40000000) != 0);
    bVar3 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
    uVar10 = (uint)bVar3 * (uVar11 - param_2) + (uint)!bVar3 * (uVar11 + param_2);
    cVar1 = bVar3 * (uVar11 < uVar10) + !bVar3 * (uVar10 < uVar11);
    uVar9 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar16 = uVar6 | uVar7 & 0xfffffeff | uVar9;
    uVar6 = uVar6 | uVar7 & 0xfffffefe;
    uVar7 = uVar6 | uVar9;
    uVar11 = uVar10 * 2 | (uint)((uVar12 & 0x20000000) != 0);
    bVar3 = ((byte)(uVar7 >> 8) & 1) == ((byte)(uVar7 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar7 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
    uVar10 = (uint)bVar3 * (uVar11 - param_2) + (uint)!bVar3 * (uVar11 + param_2);
    cVar1 = bVar3 * (uVar11 < uVar10) + !bVar3 * (uVar10 < uVar11);
    uVar7 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar17 = uVar6 | uVar9 & 0xfffffeff | uVar7;
    uVar6 = uVar6 | uVar9 & 0xfffffefe;
    uVar9 = uVar6 | uVar7;
    uVar11 = uVar10 * 2 | (uint)((uVar12 & 0x10000000) != 0);
    bVar3 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
    uVar10 = (uint)bVar3 * (uVar11 - param_2) + (uint)!bVar3 * (uVar11 + param_2);
    cVar1 = bVar3 * (uVar11 < uVar10) + !bVar3 * (uVar10 < uVar11);
    uVar9 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar18 = uVar6 | uVar7 & 0xfffffeff | uVar9;
    uVar6 = uVar6 | uVar7 & 0xfffffefe;
    uVar7 = uVar6 | uVar9;
    uVar11 = uVar10 * 2 | (uint)((uVar12 & 0x8000000) != 0);
    bVar3 = ((byte)(uVar7 >> 8) & 1) == ((byte)(uVar7 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar7 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
    uVar10 = (uint)bVar3 * (uVar11 - param_2) + (uint)!bVar3 * (uVar11 + param_2);
    cVar1 = bVar3 * (uVar11 < uVar10) + !bVar3 * (uVar10 < uVar11);
    uVar7 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar11 = uVar6 | uVar9 & 0xfffffeff | uVar7;
    uVar6 = uVar6 | uVar9 & 0xfffffefe;
    uVar9 = uVar6 | uVar7;
    uVar12 = uVar10 * 2 | (uint)((uVar12 & 0x4000000) != 0);
    bVar3 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
    uVar10 = (uint)bVar3 * (uVar12 - param_2) + (uint)!bVar3 * (uVar12 + param_2);
    cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
    uVar9 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar19 = uVar6 | uVar7 & 0xfffffeff | uVar9;
    uVar6 = uVar6 | uVar7 & 0xfffffefe;
    uVar7 = uVar6 | uVar9;
    uVar12 = uVar10 * 2;
    bVar3 = ((byte)(uVar7 >> 8) & 1) == ((byte)(uVar7 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar7 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
    uVar10 = (uint)bVar3 * (uVar12 - param_2) + (uint)!bVar3 * (uVar12 + param_2);
    cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
    uVar7 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar20 = uVar6 | uVar9 & 0xfffffeff | uVar7;
    uVar6 = uVar6 | uVar9 & 0xfffffefe;
    uVar9 = uVar6 | uVar7;
    uVar12 = uVar10 * 2;
    bVar3 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
    uVar10 = (uint)bVar3 * (uVar12 - param_2) + (uint)!bVar3 * (uVar12 + param_2);
    cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
    uVar9 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar21 = uVar6 | uVar7 & 0xfffffeff | uVar9;
    uVar6 = uVar6 | uVar7 & 0xfffffefe;
    uVar7 = uVar6 | uVar9;
    uVar12 = uVar10 * 2;
    bVar3 = ((byte)(uVar7 >> 8) & 1) == ((byte)(uVar7 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar7 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
    uVar10 = (uint)bVar3 * (uVar12 - param_2) + (uint)!bVar3 * (uVar12 + param_2);
    cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
    uVar7 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar22 = uVar6 | uVar9 & 0xfffffeff | uVar7;
    uVar6 = uVar6 | uVar9 & 0xfffffefe;
    uVar9 = uVar6 | uVar7;
    uVar12 = uVar10 * 2;
    bVar3 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
    uVar10 = (uint)bVar3 * (uVar12 - param_2) + (uint)!bVar3 * (uVar12 + param_2);
    cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
    uVar9 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar23 = uVar6 | uVar7 & 0xfffffeff | uVar9;
    uVar6 = uVar6 | uVar7 & 0xfffffefe;
    uVar7 = uVar6 | uVar9;
    uVar12 = uVar10 * 2;
    bVar3 = ((byte)(uVar7 >> 8) & 1) == ((byte)(uVar7 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar7 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
    uVar10 = (uint)bVar3 * (uVar12 - param_2) + (uint)!bVar3 * (uVar12 + param_2);
    cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
    uVar7 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar24 = uVar6 | uVar9 & 0xfffffeff | uVar7;
    uVar6 = uVar6 | uVar9 & 0xfffffefe;
    uVar9 = uVar6 | uVar7;
    uVar12 = uVar10 * 2;
    bVar3 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
    uVar10 = (uint)bVar3 * (uVar12 - param_2) + (uint)!bVar3 * (uVar12 + param_2);
    cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
    uVar9 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar25 = uVar6 | uVar7 & 0xfffffeff | uVar9;
    uVar6 = uVar6 | uVar7 & 0xfffffefe;
    uVar7 = uVar6 | uVar9;
    uVar12 = uVar10 * 2;
    bVar3 = ((byte)(uVar7 >> 8) & 1) == ((byte)(uVar7 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar7 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
    uVar10 = (uint)bVar3 * (uVar12 - param_2) + (uint)!bVar3 * (uVar12 + param_2);
    cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
    uVar7 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar26 = uVar6 | uVar9 & 0xfffffeff | uVar7;
    uVar6 = uVar6 | uVar9 & 0xfffffefe;
    uVar9 = uVar6 | uVar7;
    uVar12 = uVar10 * 2;
    bVar3 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
    uVar10 = (uint)bVar3 * (uVar12 - param_2) + (uint)!bVar3 * (uVar12 + param_2);
    cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
    uVar9 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar27 = uVar6 | uVar7 & 0xfffffeff | uVar9;
    uVar6 = uVar6 | uVar7 & 0xfffffefe;
    uVar7 = uVar6 | uVar9;
    uVar12 = uVar10 * 2;
    bVar3 = ((byte)(uVar7 >> 8) & 1) == ((byte)(uVar7 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar7 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
    uVar10 = (uint)bVar3 * (uVar12 - param_2) + (uint)!bVar3 * (uVar12 + param_2);
    cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
    uVar7 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar28 = uVar6 | uVar9 & 0xfffffeff | uVar7;
    uVar6 = uVar6 | uVar9 & 0xfffffefe;
    uVar9 = uVar6 | uVar7;
    uVar12 = uVar10 * 2;
    bVar3 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
    uVar10 = (uint)bVar3 * (uVar12 - param_2) + (uint)!bVar3 * (uVar12 + param_2);
    cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
    uVar9 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar29 = uVar6 | uVar7 & 0xfffffeff | uVar9;
    uVar6 = uVar6 | uVar7 & 0xfffffefe;
    uVar7 = uVar6 | uVar9;
    uVar12 = uVar10 * 2;
    bVar3 = ((byte)(uVar7 >> 8) & 1) == ((byte)(uVar7 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar7 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
    uVar10 = (uint)bVar3 * (uVar12 - param_2) + (uint)!bVar3 * (uVar12 + param_2);
    cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
    uVar7 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar30 = uVar6 | uVar9 & 0xfffffeff | uVar7;
    uVar6 = uVar6 | uVar9 & 0xfffffefe;
    uVar9 = uVar6 | uVar7;
    uVar12 = uVar10 * 2;
    bVar3 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
    uVar10 = (uint)bVar3 * (uVar12 - param_2) + (uint)!bVar3 * (uVar12 + param_2);
    cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
    uVar9 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar31 = uVar6 | uVar7 & 0xfffffeff | uVar9;
    uVar6 = uVar6 | uVar7 & 0xfffffefe;
    uVar7 = uVar6 | uVar9;
    uVar12 = uVar10 * 2;
    bVar3 = ((byte)(uVar7 >> 8) & 1) == ((byte)(uVar7 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar7 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
    uVar10 = (uint)bVar3 * (uVar12 - param_2) + (uint)!bVar3 * (uVar12 + param_2);
    cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
    uVar7 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar32 = uVar6 | uVar9 & 0xfffffeff | uVar7;
    uVar6 = uVar6 | uVar9 & 0xfffffefe;
    uVar9 = uVar6 | uVar7;
    uVar12 = uVar10 * 2;
    bVar3 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
    uVar10 = (uint)bVar3 * (uVar12 - param_2) + (uint)!bVar3 * (uVar12 + param_2);
    cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
    uVar9 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar33 = uVar6 | uVar7 & 0xfffffeff | uVar9;
    uVar6 = uVar6 | uVar7 & 0xfffffefe;
    uVar7 = uVar6 | uVar9;
    uVar12 = uVar10 * 2;
    bVar3 = ((byte)(uVar7 >> 8) & 1) == ((byte)(uVar7 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar7 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
    uVar10 = (uint)bVar3 * (uVar12 - param_2) + (uint)!bVar3 * (uVar12 + param_2);
    cVar1 = bVar3 * (uVar12 < uVar10) + !bVar3 * (uVar10 < uVar12);
    uVar7 = (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    uVar34 = uVar6 | uVar9 & 0xfffffeff | uVar7;
    uVar6 = uVar6 | uVar9 & 0xfffffefe;
    uVar9 = uVar6 | uVar7;
    uVar12 = uVar10 * 2;
    bVar3 = ((byte)(uVar9 >> 8) & 1) == ((byte)(uVar9 >> 9) & 1);
    bVar2 = (bool)((byte)(uVar9 >> 9) & 1) == ((uVar10 & 0x80000000) != 0);
    uVar9 = (uint)bVar3 * (uVar12 - param_2) + (uint)!bVar3 * (uVar12 + param_2);
    cVar1 = bVar3 * (uVar12 < uVar9) + !bVar3 * (uVar9 < uVar12);
    uVar7 = uVar6 | uVar7 & 0xfffffeff |
            (uint)(byte)(bVar2 * cVar1 + (!bVar2 && cVar1 == '\0')) << 8;
    in_r2[1] = (((((((((((((((((((((((uint)bVar4 << 1 |
                                    (uint)((bVar5 & 1) == ((byte)(uVar8 >> 9) & 1))) << 1 |
                                   (uint)(((byte)(uVar15 >> 8) & 1) == ((byte)(uVar15 >> 9) & 1)))
                                   << 1 | (uint)(((byte)(uVar16 >> 8) & 1) ==
                                                ((byte)(uVar16 >> 9) & 1))) << 1 |
                                 (uint)(((byte)(uVar17 >> 8) & 1) == ((byte)(uVar17 >> 9) & 1))) <<
                                 1 | (uint)(((byte)(uVar18 >> 8) & 1) == ((byte)(uVar18 >> 9) & 1)))
                                << 1 | (uint)(((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1)
                                             )) << 1 |
                              (uint)(((byte)(uVar19 >> 8) & 1) == ((byte)(uVar19 >> 9) & 1))) << 1 |
                             (uint)(((byte)(uVar20 >> 8) & 1) == ((byte)(uVar20 >> 9) & 1))) << 1 |
                            (uint)(((byte)(uVar21 >> 8) & 1) == ((byte)(uVar21 >> 9) & 1))) << 1 |
                           (uint)(((byte)(uVar22 >> 8) & 1) == ((byte)(uVar22 >> 9) & 1))) << 1 |
                          (uint)(((byte)(uVar23 >> 8) & 1) == ((byte)(uVar23 >> 9) & 1))) << 1 |
                         (uint)(((byte)(uVar24 >> 8) & 1) == ((byte)(uVar24 >> 9) & 1))) << 1 |
                        (uint)(((byte)(uVar25 >> 8) & 1) == ((byte)(uVar25 >> 9) & 1))) << 1 |
                       (uint)(((byte)(uVar26 >> 8) & 1) == ((byte)(uVar26 >> 9) & 1))) << 1 |
                      (uint)(((byte)(uVar27 >> 8) & 1) == ((byte)(uVar27 >> 9) & 1))) << 1 |
                     (uint)(((byte)(uVar28 >> 8) & 1) == ((byte)(uVar28 >> 9) & 1))) << 1 |
                    (uint)(((byte)(uVar29 >> 8) & 1) == ((byte)(uVar29 >> 9) & 1))) << 1 |
                   (uint)(((byte)(uVar30 >> 8) & 1) == ((byte)(uVar30 >> 9) & 1))) << 1 |
                  (uint)(((byte)(uVar31 >> 8) & 1) == ((byte)(uVar31 >> 9) & 1))) << 1 |
                 (uint)(((byte)(uVar32 >> 8) & 1) == ((byte)(uVar32 >> 9) & 1))) << 1 |
                (uint)(((byte)(uVar33 >> 8) & 1) == ((byte)(uVar33 >> 9) & 1))) << 1 |
               (uint)(((byte)(uVar34 >> 8) & 1) == ((byte)(uVar34 >> 9) & 1))) << 1 |
               (uint)(((byte)(uVar7 >> 8) & 1) == ((byte)(uVar7 >> 9) & 1));
    param_2 = param_2 - param_3;
    *in_r2 = in_r1[7];
    in_r2 = in_r2 + 2;
  }
  return;
}



int FUN_00000534(int param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar1 = DAT_000005bc;
  pcVar4 = (char *)(param_1 * 2 + DAT_000005b8);
  iVar2 = (int)pcVar4[1];
  iVar5 = (int)*pcVar4;
  piVar3 = (int *)(iVar5 * 4 + DAT_0000056c);
  if (*piVar3 != iVar2) {
    *piVar3 = iVar2;
    (*pcVar1)(iVar5,iVar2);
  }
  return iVar5;
}



void FUN_000005c0(undefined *param_1)

{
  char cVar1;
  char cVar2;
  char local_14;
  byte bStack19;
  undefined uStack18;
  undefined uStack17;
  undefined uStack16;
  undefined uStack15;
  
  cVar1 = FUN_00000622(*param_1);
  cVar2 = FUN_00000622(param_1[1]);
  local_14 = (cVar1 + -0x13) * 'd' + cVar2 + -0x50;
  uStack18 = FUN_00000622(param_1[3]);
  uStack17 = FUN_00000622(param_1[4]);
  uStack16 = FUN_00000622(param_1[5]);
  bStack19 = (byte)((int)(char)param_1[2] & 0xffU) & 0xf;
  uStack15 = (undefined)(((int)(char)param_1[2] & 0xffU) >> 4);
  (*DAT_00000634)(&local_14);
  return;
}



int FUN_00000622(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 ^ param_1 & 0xf;
  return (param_1 & 0xf) + (uVar1 >> 1) + (uVar1 >> 3);
}



void FUN_00000764(int *param_1)

{
  if (*param_1 != 0) {
    *(uint *)(*param_1 + -4) = *(uint *)(*param_1 + -4) | 1;
  }
  return;
}



void FUN_00000778(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_1 + 4);
    *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_1 + 8);
    *(undefined2 *)(param_1 + 2) = 0xffff;
    FUN_00000764(param_1 + 0x10);
    uVar1 = (*DAT_0000086c)(param_1);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  return;
}



undefined4 FUN_000007a4(int param_1)

{
  (*DAT_00000870)(3,0x18);
  *DAT_00000878 = (short)PTR_DAT_00000874;
  (*DAT_00000880)(DAT_0000087c);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_1 + 10);
  *(undefined2 *)(param_1 + 10) = 0xffff;
  FUN_00000a2c(param_1);
  if (*(int *)(DAT_00000884 + *(short *)(param_1 + 2) * 0x14) == 0) {
    return 0;
  }
  FUN_00000764(param_1 + 0x10);
  FUN_000009ec(param_1);
  return 1;
}



undefined4 FUN_000007f8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00000764(param_1 + 0x10);
  *DAT_00000888 = 0;
  *DAT_0000088c = 0;
  return uVar1;
}



int FUN_000009ec(undefined2 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = DAT_00000a24;
  puVar1 = DAT_00000a20;
  *DAT_00000a1c = 1;
  *puVar1 = 0;
  iVar3 = (*DAT_00000a28)(param_1,uVar2,0x28);
  if (iVar3 != 0) {
    *param_1 = 3;
  }
  return iVar3;
}



void FUN_00000a2c(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  short sVar3;
  undefined2 uVar4;
  
  uVar4 = *(undefined2 *)(param_1 + 2);
  sVar3 = *(short *)(param_1 + 6);
  iVar2 = (int)sVar3;
  *(undefined2 *)(param_1 + 4) = uVar4;
  *(short *)(param_1 + 8) = sVar3;
  switch(uVar4) {
  case 0:
    if (iVar2 == 10) {
      uVar4 = 0x10;
    }
    else {
      if (iVar2 != 0xb) {
        if (iVar2 == 0xc) {
          uVar4 = 0xf;
          sVar3 = 1;
          break;
        }
        if (iVar2 == 0xd) {
          uVar4 = 0xf;
          goto LAB_00000b28;
        }
        uVar1 = 0xf;
        if (iVar2 == 0xe) goto switchD_00000b02_caseD_10;
        if (iVar2 != 0xf) {
          if (iVar2 == 0x10) {
            uVar4 = 0xf;
            sVar3 = 5;
          }
          break;
        }
        uVar4 = 0xf;
        goto LAB_00000b34;
      }
      uVar4 = 0xf;
    }
    goto LAB_00000b4c;
  case 1:
    if (iVar2 != 0x11) {
      if (iVar2 == 0x10) {
        uVar4 = 0x12;
        sVar3 = 0;
      }
      break;
    }
    uVar4 = 0x11;
    goto LAB_00000b4c;
  case 2:
    if (iVar2 != 7) {
      if (iVar2 == 8) {
        uVar4 = 0xe;
        sVar3 = 0;
      }
      break;
    }
    uVar4 = 0x13;
LAB_00000b4c:
    sVar3 = 0;
    break;
  case 5:
    uVar1 = 0x15;
    switch(iVar2) {
    case 0xd:
      uVar4 = 0x15;
      goto LAB_00000b4c;
    case 0xe:
      uVar4 = 0x15;
      goto LAB_00000b52;
    case 0xf:
      uVar4 = 0x15;
LAB_00000b28:
      sVar3 = 2;
      break;
    case 0x10:
switchD_00000b02_caseD_10:
      uVar4 = uVar1;
      sVar3 = 3;
      break;
    case 0x11:
      uVar4 = 0x15;
LAB_00000b34:
      sVar3 = 4;
      break;
    case 0x12:
      uVar4 = 0x15;
      sVar3 = 5;
      break;
    case 0x13:
      uVar4 = 0x15;
      sVar3 = 6;
      break;
    case 0x14:
      uVar4 = 0x15;
      sVar3 = 7;
      break;
    case 0x15:
      uVar4 = 0x14;
      goto LAB_00000b4c;
    case 0x16:
      uVar4 = 0xe;
LAB_00000b52:
      sVar3 = 1;
    }
    break;
  case 6:
    if (iVar2 == 0xe) {
      uVar4 = 0x16;
      sVar3 = 0;
    }
    break;
  case 7:
    if (iVar2 == 0xe) {
      uVar4 = 0x17;
      sVar3 = 0;
    }
    break;
  case 8:
    if (iVar2 == 0xe) {
      uVar4 = 0xe;
      sVar3 = 2;
    }
    break;
  case 9:
    if (iVar2 == 5) {
      uVar4 = 0x18;
      sVar3 = 0;
    }
    break;
  case 10:
    if (iVar2 == 0xf) {
      uVar4 = 0x19;
      sVar3 = 0;
    }
    break;
  case 0xb:
    if (iVar2 == 0xf) {
      uVar4 = 0x1a;
      sVar3 = 0;
    }
  }
  *(undefined2 *)(param_1 + 2) = uVar4;
  *(short *)(param_1 + 6) = sVar3;
  return;
}



int FUN_00000c0a(void)

{
  int iVar1;
  
  iVar1 = (int)**DAT_00000c24;
  if (iVar1 == 3) {
    **DAT_00000c24 = 4;
  }
  return iVar1;
}



void FUN_00000cfc(int param_1)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_00000d80;
  pcVar2 = DAT_00000d7c;
  pcVar1 = DAT_00000d78;
  for (iVar4 = 0; iVar4 < *(int *)((short)(*(short *)(param_1 + 10) * 0x14) + iVar3 + 0xc);
      iVar4 = iVar4 + 1) {
    (*pcVar2)(0x12,iVar4 + 4);
    (*pcVar1)();
  }
  return;
}



void FUN_000011a8(undefined4 *param_1)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = DAT_00001264;
  iVar1 = DAT_00001260;
  *(undefined2 *)(DAT_00001260 + 0x12) = *(undefined2 *)(DAT_00001260 + 0x10);
  *(short *)(iVar1 + 0x10) = (short)((param_1[2] & 0xf) << 0xc);
  (*pcVar2)(*param_1,param_1[1]);
  (*DAT_0000126c)();
  *(undefined2 *)(iVar1 + 0x10) = *(undefined2 *)(iVar1 + 0x12);
  return;
}



void FUN_000011e4(undefined4 *param_1)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = DAT_00001264;
  iVar1 = DAT_00001260;
  *(undefined2 *)(DAT_00001260 + 0x12) = *(undefined2 *)(DAT_00001260 + 0x10);
  *(short *)(iVar1 + 0x10) = (short)((param_1[2] & 0xf) << 0xc);
  (*pcVar2)(*param_1,param_1[1]);
  if (((param_1[3] == 8) || (param_1[3] == 3)) || (param_1[3] == 2)) {
    (*DAT_0000126c)();
  }
  else if (param_1[3] == 1) {
    (*DAT_0000126c)();
  }
  *(undefined2 *)(iVar1 + 0x10) = *(undefined2 *)(iVar1 + 0x12);
  return;
}



int FUN_000013f8(short param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (*DAT_00001464)((int)*(short *)(DAT_00001460 + DAT_0000145c + -6));
  iVar2 = (*DAT_00001468)((int)DAT_0000145e,uVar1);
  iVar2 = (*DAT_00001468)((int)param_1 << 0x10,PTR_DAT_00001478 + iVar2);
  return (int)(short)((uint)(PTR_DAT_00001470 + iVar2) >> 0x10);
}



void FUN_00001b6c(char *param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int local_1c;
  int iStack24;
  int iStack20;
  
  piVar6 = *(int **)(param_1 + 0x34);
  cVar1 = *param_1;
  if ((cVar1 == '\0') || (cVar1 == '\x01')) {
    iVar5 = 0xc;
    iVar3 = DAT_00001cec;
    do {
      *(undefined4 *)(iVar3 + 0xc) = 0;
      puVar4 = DAT_00001cf0;
      iVar5 = iVar5 + -1;
      iVar3 = iVar3 + 0x14;
    } while (iVar5 != 0);
    DAT_00001cf0[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
LAB_00001bd6:
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
    if (cVar1 == '\x02') goto LAB_00001bd6;
    if (cVar1 != '\x03') goto LAB_00001bde;
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
LAB_00001bde:
  (*DAT_00001cf4)();
  puVar2 = PTR_DAT_00001cfc;
  puVar4 = (undefined4 *)*DAT_00001cf8;
  puVar4[10] = PTR_DAT_00001cfc;
  puVar4[5] = puVar2;
  *puVar4 = puVar2;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[6] = 0;
  puVar4[4] = 0;
  puVar4[2] = 0;
  puVar4[1] = 0;
  puVar4[3] = *(undefined4 *)(param_1 + 0x14);
  puVar4[7] = *(undefined4 *)(param_1 + 0x18);
  puVar4[0xb] = *(undefined4 *)(param_1 + 0x1c);
  (*DAT_00001d00)(-piVar6[2]);
  (*DAT_00001d04)(-*piVar6);
  (*DAT_00001d08)(-piVar6[1]);
  local_1c = -*DAT_00001d0c - *(int *)(param_1 + 8);
  iStack24 = -*(int *)(param_1 + 0xc);
  iStack20 = -*DAT_00001d0c - *(int *)(param_1 + 0x10);
  (*DAT_00001d10)(&local_1c);
  return;
}



int FUN_000026a0(char *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int local_74;
  int iStack92;
  int iStack88;
  int iStack84;
  undefined auStack80 [52];
  
  (*DAT_0000284c)();
  puVar1 = DAT_00001cec;
  iVar7 = (int)*param_1;
  if ((iVar7 != 0) && (iVar7 != 1)) {
    return iVar7;
  }
  uVar9 = *(uint *)(param_1 + 0x44) & ~(*(int *)(param_1 + 0x44) << 8);
  uVar10 = (uint)DAT_00001ce4;
  *(uint *)(param_1 + 0x44) = uVar9;
  if (((uVar9 & uVar10) == 0) || ((uVar9 & 8) != 0)) {
    if (((*(uint *)(param_1 + 0x44) & (int)DAT_00001ce8) == 0) ||
       ((*(uint *)(param_1 + 0x44) & 4) != 0)) {
      if (((*(uint *)(param_1 + 0x44) & (int)DAT_00001dbc) == 0) ||
         ((*(uint *)(param_1 + 0x44) & 1) != 0)) {
        if (((*(uint *)(param_1 + 0x44) & (int)DAT_00001dc0) == 0) ||
           ((*(uint *)(param_1 + 0x44) & 2) != 0)) {
          if (((*(uint *)(param_1 + 0x44) & (int)DAT_00001dc4) == 0) ||
             ((*(uint *)(param_1 + 0x44) & 0x10) != 0)) {
            if (((*(uint *)(param_1 + 0x44) & (int)DAT_00001eba) != 0) &&
               ((*(uint *)(param_1 + 0x44) & 0x20) == 0)) {
              puVar8 = (undefined4 *)((int)DAT_00001ebc + (int)puVar1);
              *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x10;
              puVar1[5] = *puVar8;
              puVar1[6] = puVar8[1];
              puVar1[7] = puVar8[2];
              puVar1[8] = puVar8[3];
              puVar1[9] = puVar8[4];
            }
          }
          else {
            *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x20;
            *puVar1 = puVar1[0x1e];
            puVar1[1] = puVar1[0x1f];
            puVar1[2] = puVar1[0x20];
            puVar1[3] = puVar1[0x21];
            puVar1[4] = puVar1[0x22];
          }
        }
        else {
          puVar8 = (undefined4 *)((int)DAT_00001dc2 + (int)puVar1);
          *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 1;
          puVar1[0x19] = *puVar8;
          puVar1[0x1a] = puVar8[1];
          puVar1[0x1b] = puVar8[2];
          puVar1[0x1c] = puVar8[3];
          puVar1[0x1d] = puVar8[4];
        }
      }
      else {
        puVar8 = (undefined4 *)((int)DAT_00001dbe + (int)puVar1);
        *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 2;
        puVar1[0x14] = *puVar8;
        puVar1[0x15] = puVar8[1];
        puVar1[0x16] = puVar8[2];
        puVar1[0x17] = puVar8[3];
        puVar1[0x18] = puVar8[4];
      }
    }
    else {
      puVar8 = (undefined4 *)((int)DAT_00001cea + (int)puVar1);
      *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 8;
      puVar1[0xf] = *puVar8;
      puVar1[0x10] = puVar8[1];
      puVar1[0x11] = puVar8[2];
      puVar1[0x12] = puVar8[3];
      puVar1[0x13] = puVar8[4];
    }
  }
  else {
    puVar8 = (undefined4 *)((int)DAT_00001ce6 + (int)puVar1);
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 4;
    puVar1[10] = *puVar8;
    puVar1[0xb] = puVar8[1];
    puVar1[0xc] = puVar8[2];
    puVar1[0xd] = puVar8[3];
    puVar1[0xe] = puVar8[4];
  }
  pcVar3 = DAT_00001ec4;
  pcVar2 = DAT_00001ec0;
  iStack84 = 0;
  iStack88 = 0;
  iStack92 = 0;
  piVar4 = puVar1 + 0x14;
  piVar5 = puVar1 + 0x19;
  uVar9 = *(uint *)(param_1 + 0x44) & 0x33;
  puVar8 = puVar1 + 5;
  iVar7 = iStack84;
  if (uVar9 == 0) goto LAB_00002446;
  if (uVar9 == 1) {
    iVar7 = (*DAT_00002140)(puVar1[0x1a]);
    uVar6 = (*DAT_00002148)((int)PTR_DAT_00002144 - iVar7);
    uVar6 = (*pcVar2)(puVar1[0x1d],uVar6);
    iStack92 = (*pcVar3)(*piVar5,uVar6);
    uVar11 = puVar1[0x1b];
  }
  else {
    if (uVar9 != 2) {
      if (uVar9 == 3) {
        iVar7 = (*DAT_00001ec4)(*piVar4,puVar1[0x1b]);
        iVar12 = (*pcVar3)(*piVar5,puVar1[0x16]);
        uVar6 = (*DAT_000023d8)(puVar1[0x17] - puVar1[0x1c],puVar1[0x16],puVar1[0x1b]);
        iStack92 = (*pcVar2)(uVar6,iVar7 - iVar12);
      }
      else {
        if (uVar9 == 0x10) {
          iVar7 = (*DAT_00002140)(puVar1[6]);
          uVar6 = (*DAT_00002148)((int)PTR_DAT_00002144 - iVar7);
          uVar6 = (*pcVar2)(puVar1[9],uVar6);
          iStack92 = (*pcVar3)(*puVar8,uVar6);
          uVar11 = puVar1[7];
          goto LAB_00001f4c;
        }
        if (uVar9 == 0x11) {
          if (((int)puVar1[7] < 1) && (*piVar5 < 1)) {
            iVar7 = (*DAT_000023cc)(puVar1[6]);
            uVar6 = (*DAT_000023d4)((int)PTR_DAT_000023d0 - iVar7);
            uVar6 = (*pcVar2)(puVar1[9],uVar6);
            iStack92 = (*pcVar3)(*puVar8,uVar6);
            iStack84 = (*pcVar3)(puVar1[7],uVar6);
            iVar7 = (*DAT_000023cc)(puVar1[0x1a]);
            uVar6 = (*DAT_000023d4)((int)PTR_DAT_000023d0 - iVar7);
            uVar6 = (*pcVar2)(puVar1[0x1d],uVar6);
            iVar12 = (*pcVar3)(puVar1[0x19],uVar6);
            iVar7 = (*pcVar3)(puVar1[0x1b],uVar6);
            if (iVar12 < iStack92) {
              iStack92 = iVar12;
            }
            if (iStack84 <= iVar7) {
              iVar7 = iStack84;
            }
          }
          else {
            iStack84 = puVar1[0x1c];
            uVar6 = (*DAT_00001ec0)(puVar1[7],puVar1[5]);
            iStack92 = (*pcVar3)(uVar6,iStack84);
            iStack92 = puVar1[8] - iStack92;
            iVar7 = iStack84;
          }
          goto LAB_00002446;
        }
        if (uVar9 == 0x12) {
          if (((int)puVar1[7] < 0) || (0 < *piVar4)) {
            iStack84 = puVar1[0x17];
            uVar6 = (*DAT_00001ec0)(puVar1[7],puVar1[5]);
            iStack92 = (*pcVar3)(uVar6,iStack84);
            iStack92 = puVar1[8] - iStack92;
            iVar7 = iStack84;
          }
          else {
            iVar7 = (*DAT_00002140)(puVar1[6]);
            uVar6 = (*DAT_00002148)((int)PTR_DAT_00002144 - iVar7);
            uVar6 = (*pcVar2)(puVar1[9],uVar6);
            iStack92 = (*pcVar3)(*puVar8,uVar6);
            iStack84 = (*pcVar3)(puVar1[7],uVar6);
            iVar7 = (*DAT_00002140)(puVar1[0x15]);
            uVar6 = (*DAT_00002148)((int)PTR_DAT_00002144 - iVar7);
            uVar6 = (*pcVar2)(puVar1[0x18],uVar6);
            iVar12 = (*pcVar3)(puVar1[0x14],uVar6);
            iVar7 = (*pcVar3)(puVar1[0x16],uVar6);
            if (iVar12 < iStack92) {
              iStack92 = iVar12;
            }
            if (iVar7 <= iStack84) {
              iVar7 = iStack84;
            }
          }
          goto LAB_00002446;
        }
        if (uVar9 == 0x13) {
          iVar7 = (*DAT_00001ec4)(*piVar4,puVar1[0x1b]);
          iVar12 = (*pcVar3)(*piVar5,puVar1[0x16]);
          uVar6 = (*DAT_000023d8)(puVar1[0x17] - puVar1[0x1c],puVar1[0x16],puVar1[0x1b]);
          iStack92 = (*pcVar2)(uVar6,iVar7 - iVar12);
          if ((int)puVar1[8] < iStack92) {
            iStack92 = puVar1[8];
          }
        }
        else {
          if (uVar9 == 0x20) {
            iVar7 = (*DAT_00001ec8)(puVar1[1]);
            uVar6 = (*DAT_00001ed0)((int)PTR_DAT_00001ecc - iVar7);
            uVar6 = (*pcVar2)(puVar1[4],uVar6);
            iStack92 = (*pcVar3)(*puVar1,uVar6);
            uVar11 = puVar1[2];
            goto LAB_00001f4c;
          }
          if (uVar9 == 0x21) {
            if (((int)puVar1[2] < 0) || (0 < *piVar5)) {
              iStack84 = puVar1[0x1c];
              uVar6 = (*DAT_00001ec0)(puVar1[2],*puVar1);
              iStack92 = (*pcVar3)(uVar6,iStack84);
              iStack92 = puVar1[3] - iStack92;
              iVar7 = iStack84;
            }
            else {
              iVar7 = (*DAT_00002140)(puVar1[1]);
              uVar6 = (*DAT_00002148)((int)PTR_DAT_00002144 - iVar7);
              uVar6 = (*pcVar2)(puVar1[4],uVar6);
              iStack92 = (*pcVar3)(*puVar1,uVar6);
              iStack84 = (*pcVar3)(puVar1[2],uVar6);
              iVar7 = (*DAT_00002140)(puVar1[0x1a]);
              uVar6 = (*DAT_00002148)((int)PTR_DAT_00002144 - iVar7);
              uVar6 = (*pcVar2)(puVar1[0x1d],uVar6);
              iVar12 = (*pcVar3)(puVar1[0x19],uVar6);
              iVar7 = (*pcVar3)(puVar1[0x1b],uVar6);
              if (iStack92 < iVar12) {
                iStack92 = iVar12;
              }
              if (iStack84 <= iVar7) {
                iVar7 = iStack84;
              }
            }
            goto LAB_00002446;
          }
          if (uVar9 == 0x22) {
            if (((int)puVar1[2] < 0) || (*piVar4 < 0)) {
              iStack84 = puVar1[0x17];
              uVar6 = (*DAT_00001ec0)(puVar1[2],*puVar1);
              iStack92 = (*pcVar3)(uVar6,iStack84);
              iStack92 = puVar1[3] - iStack92;
              iVar7 = iStack84;
            }
            else {
              iVar7 = (*DAT_00002140)(puVar1[1]);
              uVar6 = (*DAT_00002148)((int)PTR_DAT_00002144 - iVar7);
              uVar6 = (*pcVar2)(puVar1[4],uVar6);
              iStack92 = (*pcVar3)(*puVar1,uVar6);
              iStack84 = (*pcVar3)(puVar1[2],uVar6);
              iVar7 = (*DAT_00002140)(puVar1[0x15]);
              uVar6 = (*DAT_00002148)((int)PTR_DAT_00002144 - iVar7);
              uVar6 = (*pcVar2)(puVar1[0x18],uVar6);
              iVar12 = (*pcVar3)(puVar1[0x14],uVar6);
              iVar7 = (*pcVar3)(puVar1[0x16],uVar6);
              if (iStack92 < iVar12) {
                iStack92 = iVar12;
              }
              if (iVar7 <= iStack84) {
                iVar7 = iStack84;
              }
            }
            goto LAB_00002446;
          }
          if (uVar9 != 0x23) {
            if (uVar9 == 0x30) {
              iVar7 = (*DAT_00001ec4)(puVar1[2],*puVar8);
              iVar12 = (*pcVar3)(puVar1[7],*puVar1);
              uVar6 = (*DAT_000023d8)(puVar1[3] - puVar1[8],*puVar1,*puVar8);
              iStack84 = (*pcVar2)(uVar6,iVar7 - iVar12);
            }
            else if (uVar9 == 0x31) {
              iVar7 = (*DAT_00001ec4)(puVar1[2],*puVar8);
              iVar12 = (*pcVar3)(puVar1[7],*puVar1);
              uVar6 = (*DAT_000023d8)(puVar1[3] - puVar1[8],*puVar1,*puVar8);
              iStack84 = (*pcVar2)(uVar6,iVar7 - iVar12);
              if ((int)puVar1[0x1c] < iStack84) {
                iStack84 = puVar1[0x1c];
              }
            }
            else {
              if (uVar9 != 0x32) {
                if (uVar9 == 0x33) {
                  iVar7 = puVar1[1] + puVar1[6];
                  if (iVar7 < 0) {
                    iVar7 = -iVar7;
                  }
                  iVar12 = puVar1[0x15] + puVar1[0x1a];
                  if (iVar12 < 0) {
                    iVar12 = -iVar12;
                  }
                  if (iVar7 < iVar12) {
                    local_74 = (*DAT_00001ec4)(puVar1[1],*puVar8);
                    iVar7 = (*pcVar3)(puVar1[6],*puVar1);
                    local_74 = local_74 - iVar7;
                    uVar11 = *puVar8;
                    iVar7 = puVar1[3] - puVar1[8];
                    uVar6 = *puVar1;
                  }
                  else {
                    local_74 = (*DAT_00001ec4)(puVar1[0x15],puVar1[0x1b]);
                    iVar7 = (*pcVar3)(puVar1[0x1a],puVar1[0x16]);
                    local_74 = local_74 - iVar7;
                    uVar11 = puVar1[0x1b];
                    uVar6 = puVar1[0x16];
                    iVar7 = puVar1[0x17] - puVar1[0x1c];
                  }
                  uVar6 = (*DAT_000025f0)(iVar7,uVar6,uVar11);
                  iStack88 = (*pcVar2)(uVar6,local_74);
                  uVar6 = (*pcVar2)(puVar1[1],*puVar1);
                  iStack92 = (*pcVar3)(uVar6,iStack88);
                  iStack92 = puVar1[3] - iStack92;
                  uVar6 = (*pcVar2)(puVar1[0x15],puVar1[0x16]);
                  iVar7 = (*pcVar3)(uVar6,iStack88);
                  iVar12 = puVar1[0x17];
                  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xc;
                  iVar7 = iVar12 - iVar7;
                }
                goto LAB_00002446;
              }
              iVar7 = (*DAT_00001ec4)(puVar1[2],*puVar8);
              iVar12 = (*pcVar3)(puVar1[7],*puVar1);
              uVar6 = (*DAT_000023d8)(puVar1[3] - puVar1[8],*puVar1,*puVar8);
              iStack84 = (*pcVar2)(uVar6,iVar7 - iVar12);
              if (iStack84 < (int)puVar1[0x17]) {
                iStack84 = puVar1[0x17];
              }
            }
            uVar6 = (*pcVar2)(puVar1[2],*puVar1);
            iStack92 = (*pcVar3)(uVar6,iStack84);
            iStack92 = puVar1[3] - iStack92;
            iVar7 = iStack84;
            goto LAB_00002446;
          }
          iVar7 = (*DAT_00001ec4)(*piVar4,puVar1[0x1b]);
          iVar12 = (*pcVar3)(*piVar5,puVar1[0x16]);
          uVar6 = (*DAT_000023d8)(puVar1[0x17] - puVar1[0x1c],puVar1[0x16],puVar1[0x1b]);
          iStack92 = (*pcVar2)(uVar6,iVar7 - iVar12);
          if (iStack92 < (int)puVar1[3]) {
            iStack92 = puVar1[3];
          }
        }
      }
      uVar6 = (*pcVar2)(puVar1[0x14],puVar1[0x16]);
      iVar7 = (*pcVar3)(uVar6,iStack92);
      iVar7 = puVar1[0x17] - iVar7;
      goto LAB_00002446;
    }
    iVar7 = (*DAT_00002140)(puVar1[0x15]);
    uVar6 = (*DAT_00002148)((int)PTR_DAT_00002144 - iVar7);
    uVar6 = (*pcVar2)(puVar1[0x18],uVar6);
    iStack92 = (*pcVar3)(*piVar4,uVar6);
    uVar11 = puVar1[0x16];
  }
LAB_00001f4c:
  iVar7 = (*pcVar3)(uVar11,uVar6);
LAB_00002446:
  iStack84 = iVar7;
  uVar9 = *(uint *)(param_1 + 0x44) & 0xc;
  if (uVar9 != 0) {
    if (uVar9 == 4) {
      iStack88 = puVar1[0xd];
    }
    else if (uVar9 == 8) {
      iStack88 = puVar1[0x12];
    }
    else if (uVar9 == 0xc) {
      iVar7 = puVar1[0xc] + puVar1[0x11];
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      iVar12 = puVar1[10] + puVar1[0xf];
      if (iVar12 < 0) {
        iVar12 = -iVar12;
      }
      if (iVar12 < iVar7) {
        iVar7 = (*pcVar3)(puVar1[0xc],puVar1[0x10]);
        iVar12 = (*pcVar3)(puVar1[0x11],puVar1[0xb]);
        uVar6 = (*DAT_000025f0)(puVar1[0xd] - puVar1[0x12],puVar1[0xb],puVar1[0x10]);
        iVar7 = (*pcVar2)(uVar6,iVar7 - iVar12);
        if (iVar7 < 1) {
          if (iVar7 < iStack84) {
            iStack84 = iVar7;
          }
        }
        else if (iStack84 < iVar7) {
          iStack84 = iVar7;
        }
        uVar6 = (*pcVar2)(puVar1[0xc],puVar1[0xb]);
        iVar7 = iStack84;
      }
      else {
        iVar7 = (*pcVar3)(puVar1[10],puVar1[0x10]);
        iVar12 = (*pcVar3)(puVar1[0xf],puVar1[0xb]);
        uVar6 = (*DAT_000025f0)(puVar1[0xd] - puVar1[0x12],puVar1[0xb],puVar1[0x10]);
        iVar7 = (*pcVar2)(uVar6,iVar7 - iVar12);
        if (iVar7 < 1) {
          if (iVar7 < iStack92) {
            iStack92 = iVar7;
          }
        }
        else if (iStack92 < iVar7) {
          iStack92 = iVar7;
        }
        uVar6 = (*pcVar2)(puVar1[10],puVar1[0xb]);
        iVar7 = iStack92;
      }
      iStack88 = (*pcVar3)(uVar6,iVar7);
      iStack88 = puVar1[0xd] - iStack88;
    }
  }
  piVar4 = DAT_000025f4;
  iVar7 = *DAT_000025f4;
  if ((iVar7 != 0) || (DAT_000025f4[1] != 0)) {
    if ((*(uint *)(param_1 + 0x44) & 0x20) == 0) {
      iVar12 = DAT_000025f4[1];
      if ((*(uint *)(param_1 + 0x44) & 0x10) == 0) {
        if (-iVar12 < iVar7) {
          uVar9 = 0x20;
          iStack92 = iVar7;
        }
        else {
          uVar9 = 0x10;
          iStack92 = iVar12;
        }
        *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | uVar9;
      }
      else if (iVar12 < iStack92) {
        iStack92 = iVar12;
      }
    }
    else if (((*(uint *)(param_1 + 0x44) & 0x10) == 0) && (iStack92 < iVar7)) {
      iStack92 = iVar7;
    }
  }
  iVar7 = piVar4[2];
  if ((iVar7 != 0) || (piVar4[3] != 0)) {
    if ((*(uint *)(param_1 + 0x44) & 2) == 0) {
      iVar12 = piVar4[3];
      if ((*(uint *)(param_1 + 0x44) & 1) == 0) {
        if (-iVar12 < iVar7) {
          uVar9 = 2;
          iStack84 = iVar7;
        }
        else {
          uVar9 = 1;
          iStack84 = iVar12;
        }
        *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | uVar9;
      }
      else if (iVar12 < iStack84) {
        iStack84 = iVar12;
      }
    }
    else if (((*(uint *)(param_1 + 0x44) & 1) == 0) && (iStack84 < iVar7)) {
      iStack84 = iVar7;
    }
  }
  if ((*(uint *)(param_1 + 0x44) & 4) != 0) {
    *(undefined4 *)(param_1 + 0x4c) = puVar1[10];
    *(undefined4 *)(param_1 + 0x50) = puVar1[0xb];
    *(undefined4 *)(param_1 + 0x54) = puVar1[0xc];
  }
  iVar7 = *(int *)(param_1 + 0x14) >> 1;
  if (iVar7 < iStack92) {
    iStack92 = iVar7;
  }
  if (iStack92 < -iVar7) {
    iStack92 = -iVar7;
  }
  iVar7 = *(int *)(param_1 + 0x18) >> 1;
  if (iVar7 < iStack88) {
    iStack88 = iVar7;
  }
  if (iStack88 < -iVar7) {
    iStack88 = -iVar7;
  }
  iVar7 = *(int *)(param_1 + 0x1c) >> 1;
  if (iVar7 < iStack84) {
    iStack84 = iVar7;
  }
  if (iStack84 < -iVar7) {
    iStack84 = -iVar7;
  }
  (*DAT_00002840)(auStack80);
  (*DAT_00002844)(*(undefined4 *)(param_1 + 0x34),auStack80);
  iVar7 = (*DAT_00002848)(&iStack92,param_1 + 0x58,auStack80);
  return iVar7;
}



undefined4 FUN_000026d4(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_34;
  int iStack48;
  int iStack44;
  int iStack40;
  int iStack36;
  int iStack32;
  
  pcVar1 = DAT_00002850;
  piVar5 = *(int **)(param_2 + 0x40);
  if (piVar5 == (int *)0x0) {
    iVar2 = (*DAT_00002858)(param_1 + 8,param_2 + 8);
    iVar3 = (*pcVar1)(*(int *)(param_1 + 4) + *(int *)(param_2 + 4));
    if (iVar2 < iVar3) {
      local_34 = *(int *)(param_2 + 8) - *(int *)(param_1 + 8);
      iStack48 = *(int *)(param_2 + 0xc) - *(int *)(param_1 + 0xc);
      iStack44 = *(int *)(param_2 + 0x10) - *(int *)(param_1 + 0x10);
      (*DAT_00002868)(&local_34,&iStack40);
      iVar2 = (*pcVar1)(iStack40);
      iVar3 = (*pcVar1)(iStack32);
      iVar2 = iVar2 + iVar3;
      iVar3 = (*pcVar1)(*(int *)(param_1 + 0x1c) + *(int *)(param_2 + 0x1c));
      piVar5 = DAT_0000286c;
      if (((iVar2 < iVar3) && (iStack36 < *(int *)(param_2 + 0x18) + *(int *)(param_1 + 0x18))) &&
         (-*(int *)(param_1 + 0x18) - *(int *)(param_2 + 0x18) < iStack36)) {
        if (iVar2 == 0) {
          DAT_0000286c[2] = *(int *)(param_1 + 0x1c) + *(int *)(param_2 + 0x1c);
        }
        else {
          uVar4 = (*DAT_00002870)(iVar3,iVar2);
          uVar4 = (*DAT_00002874)(uVar4);
          iVar2 = (*DAT_00002878)(iStack40,uVar4);
          iStack40 = iStack40 - iVar2;
          if (iStack40 < 1) {
            if (iStack40 < piVar5[1]) {
              piVar5[1] = iStack40;
            }
          }
          else if (*piVar5 < iStack40) {
            *piVar5 = iStack40;
          }
          iVar2 = (*DAT_00002878)(iStack32,uVar4);
          iStack32 = iStack32 - iVar2;
          if (iStack32 < 1) {
            if (iStack32 < piVar5[3]) {
              piVar5[3] = iStack32;
            }
          }
          else if (piVar5[2] < iStack32) {
            piVar5[2] = iStack32;
          }
        }
        return 1;
      }
    }
    uVar4 = 0;
  }
  else {
    *DAT_00002854 = 0;
    iVar2 = (*DAT_00002858)(param_1 + 8,*(undefined4 *)(param_2 + 0x30));
    iVar3 = (*pcVar1)(*piVar5 + *(int *)(param_1 + 4));
    if (iVar2 < iVar3) {
      (*DAT_0000285c)();
      (*DAT_00002860)(*(undefined4 *)(param_2 + 0x30));
      (*DAT_00002864)(*(undefined4 *)(param_2 + 0x34));
      FUN_00003324(param_1,piVar5);
      (*DAT_0000284c)();
    }
    uVar4 = *DAT_00002854;
  }
  return uVar4;
}



void FUN_0000287c(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  pcVar1 = DAT_00002a34;
  iVar4 = *DAT_00002a30;
  iVar2 = (*DAT_00002a38)(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (iVar2 == 0) {
    uVar3 = (*pcVar1)(*(int *)(param_1 + 8) - iVar4,*(undefined4 *)(param_1 + 0x10));
    FUN_00002958(param_1,uVar3);
    uVar3 = (*pcVar1)(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0x10) - iVar4);
    FUN_00002958(param_1,uVar3);
    iVar2 = *(int *)(param_1 + 0x10) - iVar4;
LAB_00002910:
    iVar4 = *(int *)(param_1 + 8) - iVar4;
  }
  else if (iVar2 == 1) {
    uVar3 = (*pcVar1)(*(int *)(param_1 + 8) + iVar4,*(undefined4 *)(param_1 + 0x10));
    FUN_00002958(param_1,uVar3);
    uVar3 = (*pcVar1)(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0x10) - iVar4);
    FUN_00002958(param_1,uVar3);
    iVar2 = *(int *)(param_1 + 0x10) - iVar4;
    iVar4 = *(int *)(param_1 + 8) + iVar4;
  }
  else {
    if (iVar2 == 2) {
      uVar3 = (*pcVar1)(*(int *)(param_1 + 8) - iVar4,*(undefined4 *)(param_1 + 0x10));
      FUN_00002958(param_1,uVar3);
      uVar3 = (*pcVar1)(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0x10) + iVar4);
      FUN_00002958(param_1,uVar3);
      iVar2 = *(int *)(param_1 + 0x10) + iVar4;
      goto LAB_00002910;
    }
    if (iVar2 != 3) goto LAB_00002944;
    uVar3 = (*pcVar1)(*(int *)(param_1 + 8) + iVar4,*(undefined4 *)(param_1 + 0x10));
    FUN_00002958(param_1,uVar3);
    uVar3 = (*pcVar1)(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0x10) + iVar4);
    FUN_00002958(param_1,uVar3);
    iVar2 = *(int *)(param_1 + 0x10) + iVar4;
    iVar4 = *(int *)(param_1 + 8) + iVar4;
  }
  uVar3 = (*pcVar1)(iVar4,iVar2);
  FUN_00002958(param_1,uVar3);
LAB_00002944:
  uVar3 = (*pcVar1)(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  FUN_00002958(param_1,uVar3);
  return;
}



void FUN_00002958(int param_1,int *param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int local_2c;
  int iStack40;
  int iStack36;
  
  pcVar2 = DAT_00002a40;
  pcVar1 = DAT_00002a3c;
  if (((param_2 != (int *)0x0) && (param_2[2] != 0)) && (*(int *)(param_2[2] + 0x14) != 0)) {
    (*DAT_00002a40)();
    (*pcVar1)(param_2 + 3);
    pcVar3 = DAT_00002a44;
    local_2c = *(int *)(param_1 + 8) - param_2[3];
    iStack40 = *(int *)(param_1 + 0xc) - param_2[4];
    iStack36 = *(int *)(param_1 + 0x10) - param_2[5];
    for (piVar7 = *(int **)(param_2[2] + 0x14); *piVar7 != 0; piVar7 = piVar7 + 4) {
      piVar6 = *(int **)(*param_2 + *piVar7);
      iVar4 = (*DAT_00002a48)(&local_2c,piVar7 + 1);
      iVar5 = (*DAT_00002a4c)(*piVar6 + *(int *)(param_1 + 4));
      if (iVar4 < iVar5) {
        (*pcVar2)();
        (*pcVar1)(piVar7 + 1);
        FUN_00003324(param_1,piVar6);
        (*pcVar3)();
      }
    }
    (*pcVar3)();
  }
  return;
}



void FUN_00002a06(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = (*DAT_00002a50)(param_2,*param_4);
  iVar1 = *(int *)(param_1 + 0x14) + iVar1;
  if (param_2 < 0) {
    uVar2 = 0x20;
    puVar3 = DAT_00002a54;
  }
  else {
    uVar2 = (uint)DAT_00002b80;
    puVar3 = DAT_00002a54 + 0x1e;
  }
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | uVar2;
  if ((int)puVar3[3] < iVar1) {
    *puVar3 = *param_4;
    puVar3[1] = param_4[1];
    puVar3[2] = param_4[2];
    puVar3[3] = iVar1;
    puVar3[4] = param_2 + *param_3;
  }
  return;
}



void FUN_00002a8c(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = (*DAT_00002b8c)(param_2,*param_4);
  iVar1 = iVar1 - *(int *)(param_1 + 0x14);
  if (param_2 < 0) {
    puVar3 = (undefined4 *)(DAT_00002b90 + 0x14);
    uVar2 = 0x10;
  }
  else {
    uVar2 = (uint)DAT_00002b84;
    puVar3 = (undefined4 *)(DAT_00002b90 + DAT_00002b82);
  }
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | uVar2;
  if (iVar1 < (int)puVar3[3]) {
    *puVar3 = *param_4;
    puVar3[1] = param_4[1];
    puVar3[2] = param_4[2];
    puVar3[3] = iVar1;
    puVar3[4] = param_2 - *param_3;
  }
  return;
}



void FUN_00002af0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = (*DAT_00002b8c)(param_2,param_4[1]);
  iVar1 = *(int *)(param_1 + 0x18) + iVar1;
  if (param_2 < 0) {
    puVar3 = (undefined4 *)(DAT_00002b90 + 0x28);
    uVar2 = 4;
  }
  else {
    puVar3 = (undefined4 *)(DAT_00002b90 + DAT_00002b86);
    uVar2 = (uint)DAT_00002b88;
  }
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | uVar2;
  if ((int)puVar3[3] < iVar1) {
    *puVar3 = *param_4;
    puVar3[1] = param_4[1];
    puVar3[2] = param_4[2];
    puVar3[3] = iVar1;
    puVar3[4] = param_2 + *(int *)(param_3 + 4);
  }
  return;
}



void FUN_00002b52(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = (*DAT_00002b8c)(param_2,param_4[1]);
  iVar1 = iVar1 - *(int *)(param_1 + 0x18);
  if (param_2 < 0) {
    puVar3 = (undefined4 *)(DAT_00002b90 + 0x3c);
    uVar2 = 8;
  }
  else {
    puVar3 = (undefined4 *)(DAT_00002b90 + DAT_00002c90);
    uVar2 = (uint)DAT_00002c92;
  }
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | uVar2;
  if (iVar1 < (int)puVar3[3]) {
    *puVar3 = *param_4;
    puVar3[1] = param_4[1];
    puVar3[2] = param_4[2];
    puVar3[3] = iVar1;
    puVar3[4] = param_2 - *(int *)(param_3 + 4);
  }
  return;
}



void FUN_00002bca(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = (*DAT_00002c9c)(param_2,param_4[2]);
  iVar1 = *(int *)(param_1 + 0x1c) + iVar1;
  if (param_2 < 0) {
    puVar3 = (undefined4 *)(DAT_00002ca0 + 0x50);
    uVar2 = 2;
  }
  else {
    uVar2 = (uint)DAT_00002c96;
    puVar3 = (undefined4 *)(DAT_00002ca0 + DAT_00002c94);
  }
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | uVar2;
  if ((int)puVar3[3] < iVar1) {
    *puVar3 = *param_4;
    puVar3[1] = param_4[1];
    puVar3[2] = param_4[2];
    puVar3[3] = iVar1;
    puVar3[4] = param_2 + *(int *)(param_3 + 8);
  }
  return;
}



void FUN_00002c2c(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = (*DAT_00002c9c)(param_2,param_4[2]);
  iVar1 = iVar1 - *(int *)(param_1 + 0x1c);
  if (param_2 < 0) {
    puVar3 = (undefined4 *)(DAT_00002ca0 + 100);
    uVar2 = 1;
  }
  else {
    uVar2 = (uint)DAT_00002c9a;
    puVar3 = (undefined4 *)(DAT_00002ca0 + DAT_00002c98);
  }
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | uVar2;
  if (iVar1 < (int)puVar3[3]) {
    *puVar3 = *param_4;
    puVar3[1] = param_4[1];
    puVar3[2] = param_4[2];
    puVar3[3] = iVar1;
    puVar3[4] = param_2 - *(int *)(param_3 + 8);
  }
  return;
}



uint FUN_00002ca4(char *param_1,short *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uStack56;
  undefined4 uStack52;
  undefined4 uStack48;
  int iStack44;
  int iStack40;
  int iStack36;
  
  piVar9 = (int *)(*param_2 * 0x10 + param_3);
  piVar7 = (int *)(param_2[1] * 0x10 + param_3);
  piVar6 = (int *)(param_2[2] * 0x10 + param_3);
  piVar8 = (int *)(param_2[3] * 0x10 + param_3);
  if ((piVar8[3] & piVar9[3] & piVar7[3] & piVar6[3]) != 0) {
    return (int)param_2[3];
  }
  (*DAT_00002f08)(param_2 + 10,&uStack56);
  pcVar1 = DAT_00002f0c;
  iStack44 = (*DAT_00002f0c)(uStack56,*(undefined4 *)(param_1 + 0x14));
  iStack40 = (*pcVar1)(uStack52,*(undefined4 *)(param_1 + 0x18));
  iStack36 = (*pcVar1)(uStack48,*(undefined4 *)(param_1 + 0x1c));
  iVar2 = (*DAT_00002f10)(&uStack56,piVar9);
  pcVar1 = DAT_00002f14;
  iVar2 = ((iVar2 - iStack44) - iStack40) - iStack36;
  iVar3 = (*DAT_00002f18)(iVar2);
  iVar4 = (*DAT_00002f18)(iStack36);
  if (iVar3 < iVar4) {
    if (iStack36 < iVar2) {
      iVar3 = (*pcVar1)(*piVar9 - *(int *)(param_1 + 0x14),piVar7[1] - *(int *)(param_1 + 0x18),
                        *piVar7 - *(int *)(param_1 + 0x14),piVar9[1] - *(int *)(param_1 + 0x18));
      if (((-1 < iVar3) &&
          (iVar3 = (*pcVar1)(*piVar7 - *(int *)(param_1 + 0x14),piVar6[1] - *(int *)(param_1 + 0x18)
                             ,*piVar6 - *(int *)(param_1 + 0x14),
                             piVar7[1] - *(int *)(param_1 + 0x18)), -1 < iVar3)) &&
         ((iVar3 = (*pcVar1)(*piVar6 - *(int *)(param_1 + 0x14),piVar8[1] - *(int *)(param_1 + 0x18)
                             ,*piVar8 - *(int *)(param_1 + 0x14),
                             piVar6[1] - *(int *)(param_1 + 0x18)), -1 < iVar3 &&
          (iVar3 = (*pcVar1)(*piVar8 - *(int *)(param_1 + 0x14),piVar9[1] - *(int *)(param_1 + 0x18)
                             ,*piVar9 - *(int *)(param_1 + 0x14),
                             piVar8[1] - *(int *)(param_1 + 0x18)), -1 < iVar3)))) {
        if (*param_1 == '\0') {
          *DAT_00002f1c = 1;
          if (param_2[9] != 0) {
            (*DAT_00002f24)(*(undefined4 *)(param_2[9] * 4 + *DAT_00002f20),1,0,param_2 + 10);
          }
        }
        else if (*param_1 != '\x01') {
          *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 1;
          goto LAB_00002f32;
        }
        if ((param_2[8] & 0xfU) == 0) {
          FUN_00002c2c(param_1,iVar2,&iStack44,&uStack56);
        }
      }
    }
    else {
      iVar3 = (*pcVar1)(*piVar9 - *(int *)(param_1 + 0x14),piVar7[1] - *(int *)(param_1 + 0x18),
                        *piVar7 - *(int *)(param_1 + 0x14),piVar9[1] - *(int *)(param_1 + 0x18));
      if ((((iVar3 < 1) &&
           (iVar3 = (*pcVar1)(*piVar7 - *(int *)(param_1 + 0x14),
                              piVar6[1] - *(int *)(param_1 + 0x18),
                              *piVar6 - *(int *)(param_1 + 0x14),
                              piVar7[1] - *(int *)(param_1 + 0x18)), iVar3 < 1)) &&
          (iVar3 = (*pcVar1)(*piVar6 - *(int *)(param_1 + 0x14),piVar8[1] - *(int *)(param_1 + 0x18)
                             ,*piVar8 - *(int *)(param_1 + 0x14),
                             piVar6[1] - *(int *)(param_1 + 0x18)), iVar3 < 1)) &&
         (iVar3 = (*pcVar1)(*piVar8 - *(int *)(param_1 + 0x14),piVar9[1] - *(int *)(param_1 + 0x18),
                            *piVar9 - *(int *)(param_1 + 0x14),piVar8[1] - *(int *)(param_1 + 0x18))
         , iVar3 < 1)) {
        if (*param_1 == '\0') {
          *DAT_00002f1c = 1;
          if (param_2[9] != 0) {
            (*DAT_00002f24)(*(undefined4 *)(param_2[9] * 4 + *DAT_00002f20),1,0,param_2 + 10);
          }
        }
        else if (*param_1 != '\x01') {
          *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 2;
          goto LAB_00002f32;
        }
        if ((param_2[8] & 0xfU) == 0) {
          FUN_00002bca(param_1,iVar2,&iStack44,&uStack56);
        }
      }
    }
  }
LAB_00002f32:
  iVar3 = (*DAT_00003108)(iVar2);
  iVar4 = (*DAT_00003108)(iStack44);
  if (iVar3 < iVar4) {
    if (iStack44 < iVar2) {
      iVar3 = (*pcVar1)(piVar9[1] - *(int *)(param_1 + 0x18),piVar7[2] - *(int *)(param_1 + 0x1c),
                        piVar7[1] - *(int *)(param_1 + 0x18),piVar9[2] - *(int *)(param_1 + 0x1c));
      if ((((-1 < iVar3) &&
           (iVar3 = (*pcVar1)(piVar7[1] - *(int *)(param_1 + 0x18),
                              piVar6[2] - *(int *)(param_1 + 0x1c),
                              piVar6[1] - *(int *)(param_1 + 0x18),
                              piVar7[2] - *(int *)(param_1 + 0x1c)), -1 < iVar3)) &&
          (iVar3 = (*pcVar1)(piVar6[1] - *(int *)(param_1 + 0x18),
                             piVar8[2] - *(int *)(param_1 + 0x1c),
                             piVar8[1] - *(int *)(param_1 + 0x18),
                             piVar6[2] - *(int *)(param_1 + 0x1c)), -1 < iVar3)) &&
         (iVar3 = (*pcVar1)(piVar8[1] - *(int *)(param_1 + 0x18),
                            piVar9[2] - *(int *)(param_1 + 0x1c),
                            piVar9[1] - *(int *)(param_1 + 0x18),
                            piVar8[2] - *(int *)(param_1 + 0x1c)), -1 < iVar3)) {
        if (*param_1 == '\0') {
          *DAT_0000310c = 1;
          if (param_2[9] != 0) {
            (*DAT_00003114)(*(undefined4 *)(param_2[9] * 4 + *DAT_00003110),1,0,param_2 + 10);
          }
        }
        else if (*param_1 != '\x01') {
          *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x10;
          goto LAB_00003122;
        }
        if ((param_2[8] & 0xfU) == 0) {
          FUN_00002a8c(param_1,iVar2,&iStack44,&uStack56);
        }
      }
    }
    else {
      iVar3 = (*pcVar1)(piVar9[1] - *(int *)(param_1 + 0x18),piVar7[2] - *(int *)(param_1 + 0x1c),
                        piVar7[1] - *(int *)(param_1 + 0x18),piVar9[2] - *(int *)(param_1 + 0x1c));
      if (((iVar3 < 1) &&
          (iVar3 = (*pcVar1)(piVar7[1] - *(int *)(param_1 + 0x18),
                             piVar6[2] - *(int *)(param_1 + 0x1c),
                             piVar6[1] - *(int *)(param_1 + 0x18),
                             piVar7[2] - *(int *)(param_1 + 0x1c)), iVar3 < 1)) &&
         ((iVar3 = (*pcVar1)(piVar6[1] - *(int *)(param_1 + 0x18),
                             piVar8[2] - *(int *)(param_1 + 0x1c),
                             piVar8[1] - *(int *)(param_1 + 0x18),
                             piVar6[2] - *(int *)(param_1 + 0x1c)), iVar3 < 1 &&
          (iVar3 = (*pcVar1)(piVar8[1] - *(int *)(param_1 + 0x18),
                             piVar9[2] - *(int *)(param_1 + 0x1c),
                             piVar9[1] - *(int *)(param_1 + 0x18),
                             piVar8[2] - *(int *)(param_1 + 0x1c)), iVar3 < 1)))) {
        if (*param_1 == '\0') {
          *DAT_0000310c = 1;
          if (param_2[9] != 0) {
            (*DAT_00003114)(*(undefined4 *)(param_2[9] * 4 + *DAT_00003110),1,0,param_2 + 10);
          }
        }
        else if (*param_1 != '\x01') {
          *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x20;
          goto LAB_00003122;
        }
        if ((param_2[8] & 0xfU) == 0) {
          FUN_00002a06(param_1,iVar2,&iStack44,&uStack56);
        }
      }
    }
  }
LAB_00003122:
  iVar3 = (*DAT_00003314)(iVar2);
  uVar5 = (*DAT_00003314)(iStack40);
  if (iVar3 < (int)uVar5) {
    if (iStack40 < iVar2) {
      uVar5 = (*pcVar1)(piVar9[2] - *(int *)(param_1 + 0x1c),*piVar7 - *(int *)(param_1 + 0x14),
                        piVar7[2] - *(int *)(param_1 + 0x1c),*piVar9 - *(int *)(param_1 + 0x14));
      if (((-1 < (int)uVar5) &&
          (uVar5 = (*pcVar1)(piVar7[2] - *(int *)(param_1 + 0x1c),*piVar6 - *(int *)(param_1 + 0x14)
                             ,piVar6[2] - *(int *)(param_1 + 0x1c),
                             *piVar7 - *(int *)(param_1 + 0x14)), -1 < (int)uVar5)) &&
         ((uVar5 = (*pcVar1)(piVar6[2] - *(int *)(param_1 + 0x1c),*piVar8 - *(int *)(param_1 + 0x14)
                             ,piVar8[2] - *(int *)(param_1 + 0x1c),
                             *piVar6 - *(int *)(param_1 + 0x14)), -1 < (int)uVar5 &&
          (uVar5 = (*pcVar1)(piVar8[2] - *(int *)(param_1 + 0x1c),*piVar9 - *(int *)(param_1 + 0x14)
                             ,piVar9[2] - *(int *)(param_1 + 0x1c),
                             *piVar8 - *(int *)(param_1 + 0x14)), -1 < (int)uVar5)))) {
        if (*param_1 == '\0') {
          *DAT_00003318 = 1;
          if (param_2[9] != 0) {
            (*DAT_00003320)(*(undefined4 *)(param_2[9] * 4 + *DAT_0000331c),1,0,param_2 + 10);
          }
        }
        else if (*param_1 != '\x01') {
          *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 8;
          return 0x44;
        }
        uVar5 = (uint)param_2[8];
        if ((uVar5 & 0xf) == 0) {
          uVar5 = FUN_00002b52(param_1,iVar2,&iStack44,&uStack56);
        }
      }
    }
    else {
      uVar5 = (*pcVar1)(piVar9[2] - *(int *)(param_1 + 0x1c),*piVar7 - *(int *)(param_1 + 0x14),
                        piVar7[2] - *(int *)(param_1 + 0x1c),*piVar9 - *(int *)(param_1 + 0x14));
      if ((((int)uVar5 < 1) &&
          (uVar5 = (*pcVar1)(piVar7[2] - *(int *)(param_1 + 0x1c),*piVar6 - *(int *)(param_1 + 0x14)
                             ,piVar6[2] - *(int *)(param_1 + 0x1c),
                             *piVar7 - *(int *)(param_1 + 0x14)), (int)uVar5 < 1)) &&
         ((uVar5 = (*pcVar1)(piVar6[2] - *(int *)(param_1 + 0x1c),*piVar8 - *(int *)(param_1 + 0x14)
                             ,piVar8[2] - *(int *)(param_1 + 0x1c),
                             *piVar6 - *(int *)(param_1 + 0x14)), (int)uVar5 < 1 &&
          (uVar5 = (*pcVar1)(piVar8[2] - *(int *)(param_1 + 0x1c),*piVar9 - *(int *)(param_1 + 0x14)
                             ,piVar9[2] - *(int *)(param_1 + 0x1c),
                             *piVar8 - *(int *)(param_1 + 0x14)), (int)uVar5 < 1)))) {
        if (*param_1 == '\0') {
          *DAT_00003318 = 1;
          if (param_2[9] != 0) {
            (*DAT_00003320)(*(undefined4 *)(param_2[9] * 4 + *DAT_0000331c),1,0,param_2 + 10);
          }
        }
        else if (*param_1 != '\x01') {
          *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 4;
          return 0x44;
        }
        uVar5 = (uint)param_2[8];
        if ((uVar5 & 0xf) == 0) {
          uVar5 = FUN_00002af0(param_1,iVar2,&iStack44,&uStack56);
        }
      }
    }
  }
  return uVar5;
}



int FUN_00003324(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined local_14 [4];
  
  iVar2 = (int)DAT_00003440;
  iVar3 = (*DAT_00003448)(*(undefined4 *)(param_2 + 8),local_14 + iVar2,*(undefined4 *)(param_2 + 4)
                          ,param_1 + 0x14);
  uVar1 = DAT_00003442;
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x2c);
    piVar4 = (int *)(param_2 + 0xc);
    if (iVar3 == 0) {
      for (; *piVar4 != piVar4[1]; piVar4 = piVar4 + 7) {
        iVar3 = (int)(short)*(ushort *)(piVar4 + 4);
        if ((uVar1 & *(ushort *)(piVar4 + 4)) == 0) {
          iVar3 = FUN_00002ca4(param_1,piVar4,local_14 + iVar2);
        }
      }
    }
    else {
      for (; *piVar4 != piVar4[1]; piVar4 = piVar4 + 7) {
        iVar3 = FUN_00002ca4(param_1,piVar4,local_14 + iVar2);
      }
    }
  }
  return iVar3;
}



void FUN_00003624(undefined4 *param_1,undefined4 *param_2)

{
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



void FUN_00003656(int param_1,undefined4 *param_2)

{
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
  FUN_00003624(*(undefined4 *)(param_1 + 4),param_2 + 0xc);
  param_2[0x18] = param_1;
  return;
}



int FUN_00003692(int param_1,int param_2)

{
  int *piVar1;
  
  *(undefined *)(param_1 + 0xf) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xd) = 0;
  piVar1 = *(int **)(param_2 + 4);
  if (piVar1 != (int *)0x0) {
    for (; -1 < *piVar1; piVar1 = piVar1 + 2) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  piVar1 = *(int **)(param_2 + 8);
  if (piVar1 != (int *)0x0) {
    for (; -1 < *piVar1; piVar1 = piVar1 + 2) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  piVar1 = *(int **)(param_2 + 0xc);
  if (piVar1 != (int *)0x0) {
    for (; -1 < *piVar1; piVar1 = piVar1 + 2) {
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  return (int)*(char *)(param_1 + 0xf) +
         (int)*(char *)(param_1 + 0xe) + (int)*(char *)(param_1 + 0xd) + 1;
}



void FUN_00003810(int param_1,int param_2)

{
                    // WARNING: Could not recover jumptable at 0x0000382e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00003888)(param_2 + 0x18,**(int **)(param_2 + 0x60) * 0x30 + *(int *)(param_1 + 4));
  return;
}



int FUN_00003832(int param_1,int param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  pcVar3 = DAT_00003894;
  pcVar2 = DAT_00003890;
  pcVar1 = DAT_0000388c;
  iVar4 = (int)*(short *)(param_2 + 0x12);
  iVar7 = *(int *)(param_1 + 4);
  if (iVar4 != 0) {
    if (*(int *)(param_2 + 0x48) == 0) {
      iVar6 = *(int *)(param_2 + 0x2c);
      iVar5 = iVar4;
      do {
        (*pcVar2)(iVar7);
        (*pcVar1)(iVar6,iVar7);
        iVar4 = (*pcVar3)(iVar6 + 0xc,iVar7);
        iVar5 = iVar5 + -1;
        iVar6 = iVar6 + DAT_000039c8;
        iVar7 = iVar7 + 0x30;
      } while (iVar5 != 0);
    }
    else {
      iVar6 = *(int *)(param_2 + 0x48);
      iVar5 = iVar4;
      do {
        (*pcVar2)(iVar7);
        (*pcVar1)(iVar6,iVar7);
        iVar4 = (*pcVar3)(iVar6 + 0xc,iVar7);
        iVar6 = iVar6 + 0x48;
        iVar5 = iVar5 + -1;
        iVar7 = iVar7 + 0x30;
      } while (iVar5 != 0);
    }
  }
  return iVar4;
}



void FUN_000038c6(int *param_1,int *param_2,int *param_3)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  pcVar2 = DAT_000039d0;
  puVar1 = PTR_DAT_000039cc;
  iVar3 = (*DAT_000039d0)(param_1[0xc],*param_3 - *param_2);
  iVar4 = (*pcVar2)((int)puVar1 - param_1[0xf],param_1[3]);
  *param_1 = iVar3 - iVar4;
  iVar3 = (*pcVar2)(param_1[0xd],param_3[1] - param_2[1]);
  iVar4 = (*pcVar2)((int)puVar1 - param_1[0x10],param_1[4]);
  param_1[1] = iVar3 - iVar4;
  iVar3 = (*pcVar2)(param_1[0xe],param_3[2] - param_2[2]);
  iVar4 = (*pcVar2)((int)puVar1 - param_1[0x11],param_1[5]);
  param_1[2] = iVar3 - iVar4;
  return;
}



void FUN_00003944(int *param_1)

{
  param_1[3] = param_1[3] + *param_1;
  param_1[4] = param_1[4] + param_1[1];
  param_1[5] = param_1[5] + param_1[2];
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0000395e(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = DAT_000039d4;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x14);
  uVar2 = *(uint *)(param_1 + 0x18);
  if ((uVar1 & uVar2) == 0) {
    uVar2 = _LAB_000039db_1 & uVar2;
  }
  else {
    uVar2 = _DAT_000039d8 | uVar2;
  }
  *(uint *)(param_1 + 0x18) = uVar2;
  uVar2 = *(uint *)(param_1 + 0x1c);
  if ((uVar1 & uVar2) == 0) {
    uVar2 = _LAB_000039db_1 & uVar2;
  }
  else {
    uVar2 = _DAT_000039d8 | uVar2;
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((uVar2 & uVar1) == 0) {
    uVar2 = _LAB_000039db_1 & uVar2;
  }
  else {
    uVar2 = _DAT_000039d8 | uVar2;
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  if (*(int *)(param_1 + 0x48) < *(int *)(param_1 + 0x18)) {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (*(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x54)) {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0x1c)) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else if (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x58)) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x50) < *(int *)(param_1 + 0x20)) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x5c)) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}



void FUN_00003a38(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  FUN_000038c6(piVar1,piVar1 + 6,DAT_00003c90);
  *piVar1 = *piVar1 + piVar1[9];
  piVar1[1] = piVar1[1] + piVar1[10];
  piVar1[2] = piVar1[2] + piVar1[0xb];
  FUN_00003944(piVar1);
  FUN_0000395e(piVar1);
  piVar1[0xb] = 0;
  piVar1[10] = 0;
  piVar1[9] = 0;
  return;
}



void FUN_00003a76(undefined4 param_1,int **param_2,int *param_3,int *param_4,int param_5)

{
  int *piVar1;
  int *piStack20;
  
  piStack20 = param_3;
  for (; param_5 != 0; param_5 = param_5 + -1) {
    FUN_000038c6(*param_2,*param_2 + 6,piStack20);
    **param_2 = **param_2 - *param_4;
    (*param_2)[1] = (*param_2)[1] - param_4[1];
    (*param_2)[2] = (*param_2)[2] - param_4[2];
    piVar1 = *param_2;
    *piVar1 = *piVar1 + piVar1[9];
    piVar1 = *param_2;
    piVar1[1] = piVar1[1] + piVar1[10];
    piVar1 = *param_2;
    piVar1[2] = piVar1[2] + piVar1[0xb];
    FUN_00003944(*param_2);
    FUN_0000395e(*param_2);
    FUN_00003810(param_1,*param_2);
    *param_4 = *param_4 + (*param_2)[9];
    param_4[1] = param_4[1] + (*param_2)[10];
    param_4[2] = param_4[2] + (*param_2)[0xb];
    piVar1 = *param_2;
    piVar1[0xb] = 0;
    piVar1[10] = 0;
    piVar1[9] = 0;
    piStack20 = *param_2;
    *param_2 = piStack20 + 0x19;
    piStack20 = piStack20 + 6;
  }
  return;
}



void FUN_00004222(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 * 8 + DAT_0000439c);
  iVar1 = piVar2[1] * 0xc + *(int *)(*piVar2 * 4 + *(int *)(*DAT_00004398 + 0x6c));
  if (iVar1 != 0) {
                    // WARNING: Could not recover jumptable at 0x00004256. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_000043a4)(iVar1,param_2,DAT_000043a0 + 0x28);
    return;
  }
  return;
}



void FUN_0000425e(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = DAT_000043a8;
  iVar3 = *param_2;
  iVar2 = (*DAT_000043a8)(param_1,*param_3 - iVar3,param_3,param_4,iVar3);
  *param_4 = iVar3 + iVar2;
  iVar3 = param_2[1];
  iVar2 = (*pcVar1)(param_1,param_3[1] - iVar3);
  param_4[1] = iVar3 + iVar2;
  iVar3 = param_2[2];
  iVar2 = (*pcVar1)(param_1,param_3[2] - iVar3);
  param_4[2] = iVar3 + iVar2;
  return;
}



void FUN_000042c0(int *param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = DAT_000043a8;
  iVar3 = *param_3;
  iVar2 = (*DAT_000043a8)(param_2,(*param_4 + *param_1) - iVar3);
  *param_5 = iVar3 + iVar2;
  iVar3 = param_3[1];
  iVar2 = (*pcVar1)(param_2,(param_4[1] + param_1[1]) - iVar3);
  param_5[1] = iVar3 + iVar2;
  iVar3 = param_3[2];
  iVar2 = (*pcVar1)(param_2,(param_4[2] + param_1[2]) - iVar3);
  param_5[2] = iVar3 + iVar2;
  return;
}



void FUN_0000433a(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_000043a8)(param_1,*(int *)(param_2 + -8) - *(int *)(param_2 + 4));
  *(undefined4 *)(param_3 + 4) = uVar1;
  return;
}



void FUN_00004364(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 4) + *(int *)(param_2 + 4);
  *(int *)(param_3 + 4) = iVar1;
  iVar1 = (*DAT_000043a8)(param_1,iVar1);
  *(int *)(param_3 + 4) = *(int *)(param_3 + 4) - iVar1;
  return;
}



void FUN_00004e7c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = (short)((short)param_2 * 0x5c) + DAT_00004f80;
  piVar1 = (int *)(*DAT_00004f84)(param_1,0,(int)DAT_00004f78);
  *piVar1 = DAT_00004f88;
  piVar1[1] = 0;
  piVar1[2] = param_1;
  piVar1[3] = param_2;
  iVar2 = DAT_00004f8c;
  piVar1[5] = (int)*(short *)(iVar5 + 8);
  piVar4 = (int *)(param_2 * 8 + iVar2);
  piVar1[6] = (int)*(short *)(iVar5 + 10);
  iVar2 = (int)DAT_00004f7a;
  piVar1[8] = *piVar4;
  piVar1[9] = piVar4[1];
  *(undefined4 *)((int)piVar1 + iVar2) = 1;
  iVar2 = *piVar1;
  (*DAT_00004f90)(piVar1,piVar1 + 10,(int)DAT_00004f7c,iVar2,piVar1[5],
                  *(undefined4 *)(*(short *)piVar1[8] + iVar2),
                  *(undefined4 *)(iVar2 + *(short *)(iVar5 + 0xc)),0,*(undefined4 *)(iVar5 + 0x10));
  uVar3 = (*DAT_00004f94)(param_2);
  (*DAT_00004f98)(piVar1,piVar1 + 10,piVar1 + 0x1e,uVar3);
  (*DAT_00004f9c)(param_2);
  *DAT_00004fa0 = piVar1;
  return;
}



void FUN_00004f2a(undefined4 param_1,int param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  pcVar1 = DAT_00004fa8;
  puVar2 = (undefined4 *)((param_2 * 0x18 & 0xffU) + DAT_00004fa4);
  (*DAT_00004fa8)(*puVar2,DAT_00004f88,(int)DAT_00004f7e);
  (*pcVar1)(puVar2[1],DAT_00004fac,0);
  FUN_00004e7c(param_1,param_2);
  return;
}



int * FUN_00004fb0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  
  iVar4 = (param_2 * 0x18 & 0xffU) + DAT_000050b8;
  piVar1 = (int *)(*DAT_000050bc)(param_1,0,0xc);
  iVar2 = (*DAT_000050c4)(PTR_LAB_000050c0);
  if ((piVar1 == (int *)0x0) || (iVar2 == 0)) {
    (*DAT_000050c8)();
  }
  puVar5 = PTR_LAB_000050cc;
  *piVar1 = iVar2;
  puVar5 = puVar5 + iVar2;
  piVar1[1] = 0;
  piVar3 = (int *)(iVar4 + 8);
  piVar1[2] = (int)puVar5;
  if (*piVar3 != 0) {
    (*DAT_000050d0)(*piVar3,iVar2,(uint)puVar5 >> 3);
    (*DAT_000050d0)(*(undefined4 *)(iVar4 + 0xc),puVar5,0);
  }
  return piVar1;
}



void FUN_0000502c(int param_1,int param_2)

{
  short sVar1;
  int **ppiVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)(param_2 * 0x10 + DAT_000050d4);
  uVar5 = 0;
  piVar3 = (int *)(*DAT_000050bc)(param_1,0,0x68);
  piVar3[1] = 0;
  piVar3[2] = param_1;
  piVar3[3] = param_2;
  ppiVar2 = DAT_000050d8;
  piVar3[4] = (int)*(short *)(puVar6 + 2);
  *ppiVar2 = piVar3;
  if (param_2 < 6) {
    *piVar3 = DAT_000050dc;
    if (param_2 == 1) {
      piVar3[5] = 0x24;
    }
    else {
      piVar3[5] = 0;
    }
    (*DAT_000050d0)(*puVar6,DAT_000050dc,(int)DAT_000050b0);
    if (puVar6[1] != 0) {
      (*DAT_000050d0)(puVar6[1],DAT_000050e0,0);
    }
  }
  else {
    iVar4 = (int)DAT_000050b2;
    *piVar3 = DAT_000050e4;
    piVar3[5] = iVar4;
    sVar1 = DAT_00005212;
    if (param_2 == 6) {
      sVar1 = DAT_000050b4;
    }
    uVar5 = *(undefined4 *)(*piVar3 + (int)sVar1);
  }
  (*DAT_00005220)(piVar3,piVar3 + 6,0,*piVar3,piVar3[4],uVar5,
                  *(undefined4 *)(*piVar3 + (int)*(short *)((int)puVar6 + 10)),0,puVar6[3]);
  return;
}



void FUN_00005124(int param_1,int param_2)

{
  short sVar1;
  int **ppiVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)(param_2 * 0x10 + DAT_00005224);
  uVar5 = 0;
  piVar4 = (int *)(*DAT_00005228)(param_1,0,0x68);
  piVar4[1] = 0;
  piVar4[2] = param_1;
  piVar4[3] = param_2;
  ppiVar2 = DAT_0000522c;
  piVar4[4] = (int)*(short *)(puVar6 + 2);
  *ppiVar2 = piVar4;
  iVar3 = DAT_00005230;
  if (param_2 < 6) {
    *piVar4 = DAT_00005230;
    (*DAT_00005234)(*puVar6,iVar3,(int)DAT_00005214);
    if (puVar6[1] != 0) {
      (*DAT_00005234)(puVar6[1],DAT_00005238,0);
    }
  }
  else {
    *piVar4 = DAT_0000523c;
    sVar1 = DAT_00005212;
    if (param_2 == 6) {
      sVar1 = DAT_00005216;
    }
    uVar5 = *(undefined4 *)(*piVar4 + (int)sVar1);
  }
  (*DAT_00005220)(piVar4,piVar4 + 6,0,*piVar4,piVar4[4],uVar5,
                  *(undefined4 *)(*piVar4 + (int)*(short *)((int)puVar6 + 10)),0,puVar6[3]);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000051d2(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  (*DAT_00005244)(DAT_00005240,_DAT_00005218 + param_1,0x50);
  iVar2 = DAT_00005240;
  puVar1 = (undefined4 *)(_LAB_00005219_1 + param_1);
  *puVar1 = *(undefined4 *)(*(int *)(DAT_00005240 + 0x4c) + 0xc);
  iVar2 = *(int *)(iVar2 + 0x48);
  puVar1[1] = *(undefined4 *)(iVar2 + 0xc);
  puVar1[2] = *(undefined4 *)(iVar2 + 0x14);
  (*DAT_00005244)(DAT_00005248,_LAB_0000521b_1 + param_1,0x2c);
                    // WARNING: Could not recover jumptable at 0x0000520e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0000524c)();
  return;
}



void FUN_0000532a(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_00005394;
  iVar2 = *DAT_00005394;
  if (iVar2 != 0) {
    if (iVar2 != 0) {
      *(uint *)(iVar2 + -4) = *(uint *)(iVar2 + -4) | 1;
    }
    *piVar1 = 0;
  }
  return;
}



void FUN_00005348(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_000053a4;
  iVar2 = *DAT_000053a4;
  if (iVar2 != 0) {
    if (iVar2 != 0) {
      *(uint *)(iVar2 + -4) = *(uint *)(iVar2 + -4) | 1;
    }
    *piVar1 = 0;
  }
  return;
}



void FUN_000053a8(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_000054ac;
  iVar2 = *DAT_000054ac;
  if (iVar2 != 0) {
    if (iVar2 != 0) {
      *(uint *)(iVar2 + -4) = *(uint *)(iVar2 + -4) | 1;
    }
    *piVar1 = 0;
  }
  return;
}



void FUN_000054d8(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  
  piVar2 = DAT_000055a0;
  iVar1 = DAT_00005594;
  uVar3 = *(undefined4 *)*param_1;
  iVar7 = (*(char *)(DAT_00005594 + 1) * 0x18 & 0xffU) + DAT_0000559c;
  uVar6 = ((undefined4 *)*param_1)[2];
  param_1[1] = (short)(*(char *)(DAT_00005594 + 1) * 0x5c) + DAT_00005598;
  *(undefined2 *)(param_1 + 2) = 0;
  iVar4 = *piVar2;
  if (iVar4 != 0) {
    *(uint *)(iVar4 + -4) = *(uint *)(iVar4 + -4) | 1;
  }
  FUN_00004f2a(*(undefined4 *)(iVar4 + 8),(int)*(char *)(iVar1 + 1));
  piVar5 = (int *)(iVar7 + 8);
  param_1[10] = *(int *)(*piVar2 + 0x58);
  param_1[0xb] = 0;
  if (*piVar5 != 0) {
    (*DAT_000055a4)(*piVar5,uVar3,uVar6 >> 3);
    (*DAT_000055a4)(*(undefined4 *)(iVar7 + 0xc),uVar6,0);
  }
  FUN_0000621c(*param_1,*piVar2 + 0x28,*(undefined4 *)(*param_1 + 8),param_1[1],
               (int)*(short *)(iVar1 + 0x1a),(int)*(short *)(iVar1 + 0x1c));
  return;
}



void FUN_00006050(int param_1,int param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((param_1 == 0) && (param_2 == 0)) {
    uVar3 = 0;
    uVar4 = 0;
    puVar2 = PTR_DAT_00006124;
  }
  else {
    uVar3 = (*DAT_00006128)(PTR_DAT_00006124,(param_1 + param_2) * 0x800);
    pcVar1 = DAT_0000612c;
    puVar2 = (undefined *)
             (*DAT_0000612c)((DAT_0000611a - param_1) * param_1 + (DAT_0000611a - param_2) * param_2
                             ,uVar3);
    uVar4 = (*pcVar1)(param_1 * param_1,uVar3);
    uVar3 = (*pcVar1)(param_2 * param_2,uVar3);
  }
                    // WARNING: Could not recover jumptable at 0x000060c0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00006130)(puVar2,uVar4,uVar3);
  return;
}



void FUN_000060c4(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  while( true ) {
    if (*param_1 != 0) {
      (*DAT_00006134)(*param_1,*param_2,*param_3,*param_4);
    }
    if (param_1[1] != 0) {
      FUN_000060c4(param_1[1],param_2[1],param_3[1],param_4[1]);
    }
    if (param_1[2] == 0) break;
    param_4 = (undefined4 *)param_4[2];
    param_3 = (undefined4 *)param_3[2];
    param_2 = (undefined4 *)param_2[2];
    param_1 = (int *)param_1[2];
  }
  return;
}



void FUN_00006138(int param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = DAT_00006214;
  iVar2 = (int)*(short *)(param_1 + 0x12);
  iVar3 = *(int *)(param_1 + 0x2c);
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    param_2 = param_2 + 0x24;
    iVar3 = iVar3 + DAT_00006212;
    param_3 = param_3 + 0x24;
    param_4 = param_4 + 0x24;
    (*pcVar1)(iVar3,param_2,param_3,param_4);
  }
  return;
}



void FUN_00006180(int *param_1,int *param_2,int *param_3,int *param_4,int param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *local_2c;
  int *piStack40;
  int *piStack36;
  
  pcVar1 = DAT_00006218;
  local_2c = param_2;
  piStack40 = param_3;
  piStack36 = param_4;
  if (param_5 != 0) {
    do {
      iVar3 = param_1[1];
      if (iVar3 != 0) {
        iVar4 = *param_1;
        iVar6 = *local_2c;
        iVar7 = *piStack40;
        iVar5 = *piStack36;
        do {
          (*DAT_00006214)(iVar4 + 4,iVar6 + 4,iVar7 + 4,iVar5 + 4);
          uVar2 = (*pcVar1)(*(undefined4 *)(iVar6 + 0x10),*(undefined4 *)(iVar7 + 0x10),
                            *(undefined4 *)(iVar5 + 0x10));
          iVar6 = iVar6 + 0x14;
          *(undefined4 *)(iVar4 + 0x10) = uVar2;
          iVar7 = iVar7 + 0x14;
          iVar4 = iVar4 + 0x14;
          iVar3 = iVar3 + -1;
          iVar5 = iVar5 + 0x14;
        } while (iVar3 != 0);
      }
      local_2c = local_2c + 2;
      piStack40 = piStack40 + 2;
      piStack36 = piStack36 + 2;
      param_5 = param_5 + -1;
      param_1 = param_1 + 2;
    } while (param_5 != 0);
  }
  return;
}



void FUN_0000621c(int *param_1,int param_2,int param_3,int *param_4,int param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = param_4 + 0x11;
  piVar3 = param_4 + 0xe;
  if (*param_4 != 0) {
    if (param_5 < 0) {
      param_5 = -param_5;
      piVar2 = param_4 + 0xb;
    }
    if (param_6 < 0) {
      param_6 = -param_6;
      piVar3 = param_4 + 8;
    }
    FUN_00006050(param_5,param_6);
    iVar1 = *param_1;
    FUN_000060c4(*(undefined4 *)(*(int *)(param_2 + 4) + (int)*(short *)(param_4 + 2)),
                 *(undefined4 *)(*(short *)(param_4 + 5) + iVar1),
                 *(undefined4 *)(*(short *)piVar2 + iVar1),*(undefined4 *)(*(short *)piVar3 + iVar1)
                );
    iVar1 = *param_1;
    FUN_000060c4(*(undefined4 *)(*(int *)(param_2 + 4) + (int)*(short *)((int)param_4 + 10)),
                 *(undefined4 *)(iVar1 + *(short *)((int)param_4 + 0x16)),
                 *(undefined4 *)(iVar1 + *(short *)((int)piVar2 + 2)),
                 *(undefined4 *)(iVar1 + *(short *)((int)piVar3 + 2)));
    iVar1 = *param_1;
    FUN_00006138(param_2,*(undefined4 *)(iVar1 + *(short *)(param_4 + 6)),
                 *(undefined4 *)(iVar1 + *(short *)(piVar2 + 1)),
                 *(undefined4 *)(iVar1 + *(short *)(piVar3 + 1)));
    (*DAT_00006320)(DAT_0000631c + ((int)*(short *)((int)param_4 + 0xe) & 0xffffU) * 8,
                    param_3 + ((int)*(short *)((int)param_4 + 0x1a) & 0xffffU) * 8,
                    param_3 + ((int)*(short *)((int)piVar2 + 6) & 0xffffU) * 8,
                    param_3 + ((int)*(short *)((int)piVar3 + 6) & 0xffffU) * 8,*param_4);
    FUN_00006180(param_4[4],param_4[7],piVar2[2],piVar3[2],param_4[1]);
  }
  return;
}



void FUN_00006690(uint param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = param_1 & DAT_000066c0 | DAT_000066c4;
  puVar3 = (undefined4 *)(uVar2 & 0xfffffff0);
  do {
    bVar1 = puVar3 < (undefined4 *)(param_2 + uVar2 + -0x10);
    *puVar3 = 0;
    puVar3 = puVar3 + 4;
  } while (bVar1);
  return;
}



undefined4 FUN_00006960(int param_1)

{
  char cVar1;
  int iVar2;
  ushort uVar4;
  undefined4 uVar3;
  int *piVar5;
  int local_14;
  
  iVar2 = (*DAT_00006a50)();
  if (*(int *)(iVar2 + 8) == 0) {
LAB_000069de:
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined *)(param_1 + 0xd) = 0xff;
    uVar3 = 0;
  }
  else {
    if ((*(int *)(param_1 + 0x1c) == 0) ||
       (cVar1 = *(char *)(param_1 + 0xd), iVar2 = (*DAT_00006a50)(),
       (int)cVar1 != (int)*(short *)(iVar2 + 0x2e))) {
      iVar2 = (*DAT_00006a50)();
      *(undefined *)(param_1 + 0xd) = *(undefined *)(iVar2 + 0x2f);
      piVar5 = *(int **)(param_1 + 0x18);
      if ((*piVar5 == 0) ||
         (local_14 = *(int *)(*piVar5 + *(char *)(param_1 + 0xd) * 4), local_14 == 0))
      goto LAB_000069de;
      *(int *)(param_1 + 0x1c) = local_14;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = *(undefined *)((int)piVar5 + 7);
      uVar4 = (short)*(char *)((int)piVar5 + 6) & 0xff;
      *(ushort *)(param_1 + 0x14) = uVar4;
      *(int *)(param_1 + 0x10) = (int)(short)uVar4;
      *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(piVar5 + 1);
      do {
        *(undefined *)(local_14 + 3) = 0;
        piVar5 = (int *)(local_14 + 0x1c);
        local_14 = local_14 + 0x10;
      } while (-1 < *piVar5);
    }
    uVar3 = 1;
  }
  return uVar3;
}



int FUN_00006a34(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  
  iVar2 = FUN_00006960();
  if (iVar2 == 0) {
    FUN_00006b9c();
  }
  else {
    iVar2 = (*DAT_00006ae4)();
    iVar7 = *(int *)(*(int *)(iVar2 + 8) + (int)DAT_00006ae0);
    iVar2 = *(int *)(iVar7 + 8) >> 0xc;
    iVar6 = *(int *)(iVar7 + 0x10) >> 0xc;
    pcVar5 = *(char **)(param_1 + 0x1c);
    do {
      if (((((*(short *)(pcVar5 + 4) <= iVar2) && (iVar2 <= *(short *)(pcVar5 + 8))) &&
           (*(short *)(pcVar5 + 6) <= iVar6)) && (iVar6 <= *(short *)(pcVar5 + 10))) &&
         ((pcVar8 = pcVar5, pcVar5[2] == '\0' || (pcVar5[3] < pcVar5[2])))) break;
      pcVar8 = pcVar5 + 0x10;
      piVar1 = (int *)(pcVar5 + 0x1c);
      pcVar5 = pcVar8;
    } while (-1 < *piVar1);
    if (*(int *)(pcVar8 + 0xc) < 0) {
      FUN_00006b9c();
    }
    else {
      if (*DAT_00006bd0 != 0) {
        *DAT_00006bd8 = (short)PTR_DAT_00006bd4;
        (*DAT_00006bdc)(1,0xb);
        (*DAT_00006be4)();
      }
      if (-1 < pcVar8[1]) {
        iVar2 = (*DAT_00006be8)();
        *(char *)(iVar2 + 0x34) = pcVar8[1];
      }
      if ((*(char *)(iVar7 + DAT_00006bce) != '\0') && (*pcVar8 != '\0')) {
        if (*pcVar8 < '\0') {
LAB_000069f2:
          (*DAT_00006a54)();
          iVar2 = (*DAT_00006a58)();
          iVar6 = 0;
          pcVar5 = *(char **)(pcVar8 + 0xc);
          pcVar8[3] = pcVar8[3] + '\x01';
          while (iVar6 = iVar6 + pcVar5[1], iVar6 <= iVar2) {
            pcVar5 = pcVar5 + 2;
          }
          return (int)*pcVar5;
        }
        iVar2 = *(int *)(param_1 + 0x10) + -1;
        *(int *)(param_1 + 0x10) = iVar2;
        if (iVar2 < 1) {
          cVar4 = *pcVar8;
          (*DAT_00006bec)();
          uVar3 = (*DAT_00006bf0)();
          if ((uVar3 < (uint)(int)cVar4) ||
             (cVar4 = *(char *)(param_1 + 0xe) + '\x01', *(char *)(param_1 + 0xe) = cVar4,
             *(char *)(param_1 + 0xf) <= cVar4)) goto LAB_000069f2;
          *(int *)(param_1 + 0x10) = (int)*(short *)(param_1 + 0x16);
        }
      }
    }
  }
  return -1;
}



void FUN_00006b9c(void)

{
  int iVar1;
  
  if (*DAT_00006bd0 != 0) {
    *DAT_00006bd8 = (short)PTR_DAT_00006bd4;
    (*DAT_00006bdc)(1,0xb);
    (*DAT_00006bf8)(DAT_00006bf4);
  }
  iVar1 = (*DAT_00006be8)();
  *(undefined *)(iVar1 + 0x34) = 0;
  return;
}



void FUN_00006c78(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    iVar2 = (int)DAT_00006cf2;
  }
  else if (param_2 == 2) {
    iVar2 = (int)DAT_00006cf4;
  }
  else {
    iVar2 = DAT_00006d00;
    if (param_2 == 3) {
      iVar2 = -1;
    }
  }
  if (param_1 == 1) {
    iVar1 = 0x58;
  }
  else {
    iVar1 = 0x54;
  }
  *(int *)(DAT_00006cf8 + iVar1) = iVar2;
  return;
}



code ** FUN_00006fa4(code *param_1,char *param_2,code *param_3,code *param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  code **ppcVar6;
  
  iVar5 = (int)*param_2;
  pcVar3 = (code *)(param_2 + 1);
  ppcVar6 = (code **)((uint)(param_2 + 4) & 0xfffffffc);
  pcVar2 = param_1;
  if (iVar5 != 0) {
    if (iVar5 != 1) {
      if (iVar5 != 2) {
        if (iVar5 != 3) {
          if (iVar5 != 4) goto LAB_00006fe8;
          param_4 = ppcVar6[4];
        }
        param_3 = ppcVar6[3];
      }
      pcVar3 = ppcVar6[2];
    }
    pcVar2 = ppcVar6[1];
  }
  iVar4 = (int)DAT_00007000;
  uVar1 = (**ppcVar6)(pcVar2,pcVar3,param_3,param_4);
  *(undefined4 *)(param_1 + iVar4) = uVar1;
LAB_00006fe8:
  return ppcVar6 + iVar5 + 1;
}



undefined4 * FUN_00007008(undefined4 *param_1)

{
  short sVar1;
  char cVar2;
  code *pcVar3;
  byte bVar5;
  int iVar4;
  int iVar6;
  short **ppsVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  undefined4 uVar12;
  uint uVar13;
  short *psVar14;
  int iVar15;
  undefined4 *puVar16;
  bool bVar17;
  undefined4 *puVar18;
  
  iVar10 = (int)DAT_0000704c;
  iVar15 = (int)DAT_0000704e;
  puVar16 = *(undefined4 **)(short **)(iVar10 + (int)param_1);
switchD_00007048_caseD_30:
  puVar18 = puVar16;
  puVar16 = (undefined4 *)((int)puVar18 + 1);
  uVar12 = *DAT_00007050;
  switch(*(undefined *)puVar18) {
  case 1:
    if (*(int *)((int)param_1 + (int)DAT_000071a0) == (int)param_1 + DAT_0000719e + 0x40) {
      return (undefined4 *)0x0;
    }
    ppsVar7 = *(short ***)((int)param_1 + (int)DAT_000071a0);
    *(short ***)((int)param_1 + (int)DAT_000071a0) = ppsVar7 + 1;
    puVar16 = (undefined4 *)*ppsVar7;
    goto switchD_00007048_caseD_30;
  case 2:
    psVar14 = (short *)((uint)((int)puVar18 + 2) & 0xfffffffe);
    iVar10 = ((int)*psVar14 & 0xffffU) - 1;
    if ((*(int *)((int)param_1 + (int)DAT_000071a2) != 0) &&
       ((*(int *)((int)param_1 + (int)DAT_000071a4) != 0 ||
        (*(int *)((int)param_1 + (int)DAT_000071a6) == 0)))) {
      iVar10 = 0;
    }
    *(int *)((int)param_1 + (int)DAT_000071a8) = iVar10;
    return (undefined4 *)(psVar14 + 1);
  case 3:
    goto LAB_00007112;
  case 4:
    if (*(int *)((int)param_1 + (int)DAT_000071aa) == 0) {
      puVar16 = (undefined4 *)((uint)(puVar18 + 2) & 0xfffffffc);
    }
    else {
LAB_00007112:
      ppsVar7 = (short **)((uint)(puVar18 + 1) & 0xfffffffc);
LAB_00007154:
      puVar16 = (undefined4 *)*ppsVar7;
    }
    goto switchD_00007048_caseD_30;
  case 5:
    if (*(int *)((int)param_1 + (int)DAT_000071aa) == 0) {
      puVar16 = *(undefined4 **)((uint)(puVar18 + 1) & 0xfffffffc);
    }
    else {
      puVar16 = (undefined4 *)((uint)(puVar18 + 2) & 0xfffffffc);
    }
    goto switchD_00007048_caseD_30;
  case 6:
    ppsVar7 = (short **)((uint)(puVar18 + 1) & 0xfffffffc);
    puVar16 = (undefined4 *)(*(int *)((int)param_1 + (int)DAT_000071a0) + -4);
    *(undefined4 **)((int)param_1 + (int)DAT_000071a0) = puVar16;
    *puVar16 = ppsVar7 + 1;
    goto LAB_00007154;
  case 7:
    puVar16 = (undefined4 *)FUN_00006fa4(param_1,puVar16);
    goto switchD_00007048_caseD_30;
  case 8:
    psVar14 = (short *)((uint)((int)puVar18 + 2) & 0xfffffffe);
    bVar17 = *(int *)((int)param_1 + (int)DAT_000072d4) == (int)*psVar14;
    goto LAB_000071f8;
  case 9:
    psVar14 = (short *)((uint)((int)puVar18 + 2) & 0xfffffffe);
    puVar16 = (undefined4 *)(psVar14 + 1);
    uVar9 = *(int *)((int)param_1 + (int)DAT_000072d4) == (int)*psVar14 ^ 1;
    break;
  case 10:
    psVar14 = (short *)((uint)((int)puVar18 + 2) & 0xfffffffe);
    bVar17 = (int)*psVar14 < *(int *)((int)param_1 + (int)DAT_000072d4);
LAB_000071f8:
    puVar16 = (undefined4 *)(psVar14 + 1);
    uVar9 = (uint)bVar17;
    break;
  case 0xb:
    psVar14 = (short *)((uint)((int)puVar18 + 2) & 0xfffffffe);
    puVar16 = (undefined4 *)(psVar14 + 1);
    uVar9 = (uint)((int)*psVar14 <= *(int *)((int)param_1 + (int)DAT_000072d4));
    break;
  case 0xc:
    psVar14 = (short *)((uint)((int)puVar18 + 2) & 0xfffffffe);
    puVar16 = (undefined4 *)(psVar14 + 1);
    uVar9 = (int)*psVar14 <= *(int *)((int)param_1 + (int)DAT_000072d4) ^ 1;
    break;
  case 0xd:
    psVar14 = (short *)((uint)((int)puVar18 + 2) & 0xfffffffe);
    puVar16 = (undefined4 *)(psVar14 + 1);
    uVar9 = (int)*psVar14 < *(int *)((int)param_1 + (int)DAT_000072d4) ^ 1;
    break;
  case 0xe:
    iVar4 = (int)DAT_000072d4;
    psVar14 = (short *)((uint)((int)puVar18 + 2) & 0xfffffffe);
    puVar16 = (undefined4 *)(psVar14 + 1);
    psVar14 = (short *)(*(int *)((int)param_1 + iVar4) + (int)*psVar14);
    goto LAB_00007470;
  case 0xf:
    psVar14 = (short *)((uint)((int)puVar18 + 2) & 0xfffffffe);
    uVar13 = (uint)*psVar14;
    uVar9 = uVar13;
    if (iVar15 <= (int)uVar13) {
      uVar9 = (int)DAT_000072d6 + uVar13;
    }
    pbVar11 = (byte *)((uVar9 >> 3) + DAT_000072d8);
    if (iVar15 <= (int)uVar13) {
      uVar13 = (int)DAT_000072d6 + uVar13;
    }
    *pbVar11 = *pbVar11 | *(byte *)(DAT_000072dc + (uVar13 & 7));
    puVar16 = (undefined4 *)(psVar14 + 1);
    goto switchD_00007048_caseD_30;
  case 0x10:
    psVar14 = (short *)((uint)((int)puVar18 + 2) & 0xfffffffe);
    uVar13 = (uint)*psVar14;
    uVar9 = uVar13;
    if (iVar15 <= (int)uVar13) {
      uVar9 = (int)DAT_000072d6 + uVar13;
    }
    pbVar11 = (byte *)((uVar9 >> 3) + DAT_000072d8);
    if (iVar15 <= (int)uVar13) {
      uVar13 = (int)DAT_000073e8 + uVar13;
    }
    *pbVar11 = *pbVar11 & *(byte *)(DAT_000073ec + (uVar13 & 7));
    puVar16 = (undefined4 *)(psVar14 + 1);
    goto switchD_00007048_caseD_30;
  case 0x11:
    psVar14 = (short *)((uint)((int)puVar18 + 2) & 0xfffffffe);
    puVar16 = (undefined4 *)(psVar14 + 1);
    uVar13 = (uint)*psVar14;
    uVar9 = uVar13;
    if (iVar15 <= (int)uVar13) {
      uVar9 = (int)DAT_000073e8 + uVar13;
    }
    if (iVar15 <= (int)uVar13) {
      uVar13 = (int)DAT_000073e8 + uVar13;
    }
    uVar9 = (*(byte *)((uVar9 >> 3) + DAT_000073f0) & *(byte *)(DAT_000073f4 + (uVar13 & 7))) == 0 ^
            1;
    break;
  case 0x12:
    psVar14 = (short *)((int)puVar18 + 3U & 0xfffffffe);
    puVar16 = (undefined4 *)(psVar14 + 1);
    iVar4 = (int)*psVar14;
    if (iVar15 <= iVar4) {
      iVar4 = iVar4 + DAT_000073e8;
    }
    uVar9 = (*DAT_000073f8)(DAT_000073f0,iVar4,(int)*(char *)puVar16);
    break;
  case 0x13:
    psVar14 = (short *)((int)puVar18 + 3U & 0xfffffffe);
    iVar6 = (int)*psVar14;
    iVar4 = iVar6;
    if (iVar15 <= iVar6) {
      iVar4 = DAT_000073e8 + iVar6;
    }
    (*DAT_000073fc)(DAT_000073f0,iVar4,(int)*(char *)puVar16,(int)psVar14[1],iVar6);
    puVar16 = (undefined4 *)(psVar14 + 2);
    goto switchD_00007048_caseD_30;
  case 0x14:
    cVar2 = *(char *)puVar16;
    psVar14 = (short *)((int)puVar18 + 3U & 0xfffffffe);
    iVar6 = (int)*psVar14;
    sVar1 = psVar14[1];
    iVar4 = iVar6;
    if (iVar15 <= iVar6) {
      iVar4 = DAT_000073e8 + iVar6;
    }
    iVar4 = (*DAT_000073f8)(DAT_000073f0,iVar4,(int)cVar2);
    if (iVar15 <= iVar6) {
      iVar6 = iVar6 + DAT_000074fc;
    }
    (*DAT_0000750c)(DAT_00007508,iVar6,(int)cVar2,sVar1 + iVar4);
    puVar16 = (undefined4 *)(psVar14 + 2);
    goto switchD_00007048_caseD_30;
  case 0x15:
    iVar4 = *(int *)((int)param_1 + (int)DAT_000074fe);
    uVar9 = (int)puVar18 + 5U & 0xfffffffc;
    if ((iVar4 < *(char *)puVar16) && (-1 < iVar4)) {
      puVar16 = *(undefined4 **)(uVar9 + iVar4 * 4);
    }
    else {
      puVar16 = (undefined4 *)(uVar9 + *(char *)puVar16 * 4);
    }
    goto switchD_00007048_caseD_30;
  case 0x16:
    iVar4 = *(int *)((int)param_1 + (int)DAT_000074fe);
    uVar9 = (int)puVar18 + 5U & 0xfffffffc;
    puVar16 = (undefined4 *)(*(char *)puVar16 * 4 + uVar9);
    if ((iVar4 < *(char *)puVar16) && (-1 < iVar4)) {
      ppsVar7 = (short **)(*(int *)((int)param_1 + (int)DAT_00007500) + -4);
      *(short ***)((int)param_1 + (int)DAT_00007500) = ppsVar7;
      *ppsVar7 = (short *)puVar16;
      puVar16 = *(undefined4 **)(uVar9 + iVar4 * 4);
    }
    goto switchD_00007048_caseD_30;
  case 0x17:
    *param_1 = 0;
    goto switchD_00007048_caseD_30;
  case 0x18:
    iVar4 = (int)DAT_000074fe;
    psVar14 = ((short **)(iVar10 + (int)param_1))[1];
LAB_00007470:
    *(short **)((int)param_1 + iVar4) = psVar14;
    goto switchD_00007048_caseD_30;
  case 0x19:
    if (*(int *)((int)param_1 + (int)DAT_00007504) == 0) {
      uVar12 = (*DAT_00007518)();
      pcVar3 = DAT_0000751c;
      *(undefined4 *)((int)DAT_00007504 + (int)param_1) = uVar12;
      (*pcVar3)(*(undefined4 *)((int)param_1 + (int)DAT_00007504),4);
      return puVar18;
    }
    if (**(char **)((int)param_1 + (int)DAT_00007504) != '\x01') {
      return puVar18;
    }
    goto switchD_00007048_caseD_30;
  case 0x1a:
    if (*(int *)((int)param_1 + (int)DAT_00007504) != 0) {
      if (**(char **)((int)param_1 + (int)DAT_00007504) == '\x01') {
        (*DAT_00007520)(*(undefined4 *)((int)param_1 + (int)DAT_00007504),4);
        return puVar18;
      }
      if (**(char **)((int)param_1 + (int)DAT_0000763a) != '\0') {
        return puVar18;
      }
      sVar1 = DAT_0000763a;
      if (*(int *)((int)param_1 + (int)DAT_0000763a) != 0) {
        *(uint *)(*(int *)((int)param_1 + (int)DAT_0000763a) + -4) =
             *(uint *)(*(int *)((int)param_1 + (int)DAT_0000763a) + -4) | 1;
        sVar1 = DAT_0000763a;
      }
      goto LAB_00007678;
    }
    goto switchD_00007048_caseD_30;
  case 0x1b:
    uVar12 = *(undefined4 *)((uint)(puVar18 + 1) & 0xfffffffc);
    (*DAT_00007510)(3,0x19,0x26,2);
    (*DAT_00007514)(uVar12);
    *(undefined4 *)((int)param_1 + (int)DAT_00007502) = 1;
    puVar16 = (undefined4 *)((uint)(puVar18 + 1) & 0xfffffffc) + 1;
    goto switchD_00007048_caseD_30;
  case 0x1c:
    goto switchD_00007048_caseD_30;
  case 0x1d:
    (*DAT_00007640)(3,0x19,0x26,2);
    (*DAT_00007644)();
    goto switchD_00007048_caseD_30;
  case 0x1e:
    puVar16 = (undefined4 *)FUN_00006fa4(param_1,puVar16);
    if (*(int *)((int)param_1 + (int)DAT_000071aa) != 0) {
      return puVar18;
    }
    goto switchD_00007048_caseD_30;
  case 0x1f:
    puVar16 = (undefined4 *)FUN_00006fa4(param_1,puVar16);
    if (*(int *)((int)param_1 + (int)DAT_000071aa) == 0) {
      return puVar18;
    }
    goto switchD_00007048_caseD_30;
  case 0x20:
    if (*DAT_00007648 == '\0') {
      return puVar18;
    }
    goto switchD_00007048_caseD_30;
  case 0x21:
    (*DAT_0000764c)((int)*(char *)puVar16);
    puVar16 = (undefined4 *)((int)puVar18 + 2);
    goto switchD_00007048_caseD_30;
  case 0x22:
    (*DAT_00007650)(uVar12,(int)*(char *)puVar16);
    puVar16 = (undefined4 *)((int)puVar18 + 2);
    goto switchD_00007048_caseD_30;
  case 0x23:
    (*DAT_00007654)();
    *(undefined4 *)((int)param_1 + (int)DAT_0000763c) = 1;
    return puVar16;
  case 0x24:
    if (*(int *)((int)param_1 + (int)DAT_0000763e) != 0) {
      if (*(int *)((int)param_1 + (int)DAT_0000763e) == 0) {
        return puVar18;
      }
      *(uint *)(*(int *)((int)param_1 + (int)DAT_0000763e) + -4) =
           *(uint *)(*(int *)((int)param_1 + (int)DAT_0000763e) + -4) | 1;
      return puVar18;
    }
    psVar14 = (short *)((uint)((int)puVar18 + 2) & 0xfffffffe);
    puVar16 = (undefined4 *)((int)psVar14 + 5U & 0xfffffffc);
    uVar8 = *puVar16;
    (*DAT_00007658)(uVar12,(int)DAT_0000763e + (int)param_1,(int)*psVar14,uVar8,uVar8);
    puVar16 = puVar16 + 1;
    goto switchD_00007048_caseD_30;
  case 0x25:
    if (*(int *)((int)param_1 + (int)DAT_0000763e) != 0) {
      if (*(int *)((int)param_1 + (int)DAT_0000763e) == 0) {
        return puVar18;
      }
      *(uint *)(*(int *)((int)param_1 + (int)DAT_0000763e) + -4) =
           *(uint *)(*(int *)((int)param_1 + (int)DAT_0000763e) + -4) | 1;
      return puVar18;
    }
    psVar14 = (short *)((uint)((int)puVar18 + 2) & 0xfffffffe);
    (*DAT_0000765c)(uVar12,(int)DAT_0000763e + (int)param_1,(int)*psVar14,(int)psVar14[1],
                    (int)psVar14[2]);
    puVar16 = (undefined4 *)(psVar14 + 3);
    goto switchD_00007048_caseD_30;
  case 0x26:
    if (*(int *)((int)param_1 + (int)DAT_00007756) == 0) {
      if (*(int *)((int)param_1 + (int)DAT_0000775a) == 0) {
        (*DAT_00007760)(uVar12,(int)DAT_00007756 + (int)param_1,(int)DAT_0000775c + (int)param_1);
        return puVar18;
      }
      if (*(int *)((int)param_1 + (int)DAT_0000775a) == 0) {
        return puVar18;
      }
      *(uint *)(*(int *)((int)param_1 + (int)DAT_0000775a) + -4) =
           *(uint *)(*(int *)((int)param_1 + (int)DAT_0000775a) + -4) | 1;
      return puVar18;
    }
    sVar1 = DAT_00007758;
    if (**(char **)((int)param_1 + (int)DAT_00007756) != '\x04') {
      return puVar18;
    }
LAB_00007678:
    *(undefined4 *)((int)param_1 + (int)sVar1) = 0;
    return puVar16;
  case 0x27:
    if (*(int *)((int)param_1 + (int)DAT_00007756) != 0) {
      if (**(char **)((int)param_1 + (int)DAT_00007756) != '\x04') {
        return puVar18;
      }
      puVar16 = (undefined4 *)((int)puVar18 + 2);
      if (0 < *(char *)puVar16) {
        puVar16 = (undefined4 *)(((int)puVar18 + 5U & 0xfffffffc) + *(char *)puVar16 * 4);
      }
      *(undefined4 *)((int)param_1 + (int)DAT_00007758) = 0;
      return puVar16;
    }
    if (*(int *)((int)param_1 + (int)DAT_0000775a) != 0) {
      if (*(int *)((int)param_1 + (int)DAT_0000775a) == 0) {
        return puVar18;
      }
      *(uint *)(*(int *)((int)param_1 + (int)DAT_0000775a) + -4) =
           *(uint *)(*(int *)((int)param_1 + (int)DAT_0000775a) + -4) | 1;
      return puVar18;
    }
    puVar16 = (undefined4 *)((int)puVar18 + 2);
    if (*(char *)puVar16 != 0) {
      (*DAT_00007764)(uVar12,(int)DAT_00007756 + (int)param_1,(int)DAT_0000775c + (int)param_1,
                      (int)*(char *)puVar16,(int)puVar18 + 5U & 0xfffffffc);
      return puVar18;
    }
    goto switchD_00007048_caseD_30;
  case 0x28:
    if (*(int *)((int)param_1 + (int)DAT_00007756) != 0) {
      if (**(char **)((int)param_1 + (int)DAT_00007756) != '\x04') {
        return puVar18;
      }
      puVar16 = (undefined4 *)((int)puVar18 + 2);
      if (0 < *(char *)puVar16) {
        puVar16 = (undefined4 *)(((int)puVar18 + 5U & 0xfffffffc) + *(char *)puVar16 * 4);
      }
      *(undefined4 *)((int)param_1 + (int)DAT_00007758) = 0;
      return puVar16;
    }
    if (*(int *)((int)param_1 + (int)DAT_0000787a) != 0) {
      if (*(int *)((int)param_1 + (int)DAT_0000787a) == 0) {
        return puVar18;
      }
      *(uint *)(*(int *)((int)param_1 + (int)DAT_0000787a) + -4) =
           *(uint *)(*(int *)((int)param_1 + (int)DAT_0000787a) + -4) | 1;
      return puVar18;
    }
    puVar16 = (undefined4 *)((int)puVar18 + 2);
    if (*(char *)puVar16 != 0) {
      (*DAT_00007884)(uVar12,(int)DAT_0000787e + (int)param_1,(int)DAT_0000787c + (int)param_1,
                      (int)*(char *)puVar16,(int)puVar18 + 5U & 0xfffffffc);
      return puVar18;
    }
    goto switchD_00007048_caseD_30;
  case 0x29:
    psVar14 = (short *)((uint)((int)puVar18 + 2) & 0xfffffffe);
    iVar4 = (int)*psVar14;
    if (iVar4 < 0x4d) {
      uVar9 = (int)*(char *)(iVar4 + DAT_00007888) & 0xff;
    }
    else {
      uVar9 = -(((*(byte *)(DAT_0000788c + ((uint)(DAT_00007880 + iVar4) >> 3)) &
                 *(byte *)(DAT_00007890 + (DAT_00007880 + iVar4 & 7U))) == 0) - 1);
    }
    *(uint *)((int)param_1 + (int)DAT_0000787c) = uVar9;
    puVar16 = (undefined4 *)(psVar14 + 1);
    goto switchD_00007048_caseD_30;
  case 0x2a:
    psVar14 = (short *)((int)puVar18 + 3U & 0xfffffffe);
    puVar16 = (undefined4 *)(psVar14 + 1);
    iVar4 = (int)*psVar14;
    if (iVar4 < 0x4d) {
      *(char *)(iVar4 + DAT_00007888) = *(char *)puVar16;
    }
    else {
      if (*(char *)puVar16 == '\0') {
        pbVar11 = (byte *)(DAT_0000788c + ((uint)(DAT_00007880 + iVar4) >> 3));
        bVar5 = *pbVar11 & *(byte *)(DAT_00007894 + (DAT_00007880 + iVar4 & 7U));
      }
      else {
        pbVar11 = (byte *)(DAT_0000788c + ((uint)(DAT_00007880 + iVar4) >> 3));
        bVar5 = *pbVar11 | *(byte *)(DAT_00007890 + (DAT_00007880 + iVar4 & 7U));
      }
      *pbVar11 = bVar5;
    }
    goto switchD_00007048_caseD_30;
  case 0x2b:
    cVar2 = *(char *)puVar16;
    psVar14 = (short *)((int)puVar18 + 3U & 0xfffffffe);
    puVar16 = (undefined4 *)(psVar14 + 1);
    iVar4 = (int)*psVar14;
    if (iVar4 < 0x4d) {
      *(char *)(iVar4 + DAT_00007888) = *(char *)(iVar4 + DAT_00007888) + cVar2;
    }
    else if (cVar2 < '\x01') {
      if (cVar2 < '\0') {
        pbVar11 = (byte *)(DAT_000079a0 + ((uint)(DAT_00007996 + iVar4) >> 3));
        *pbVar11 = *pbVar11 & *(byte *)(DAT_000079a8 + (DAT_00007996 + iVar4 & 7U));
      }
    }
    else {
      pbVar11 = (byte *)(DAT_000079a0 + ((uint)(DAT_00007996 + iVar4) >> 3));
      *pbVar11 = *pbVar11 | *(byte *)(DAT_000079a4 + (DAT_00007996 + iVar4 & 7U));
    }
    if (iVar4 < 0x4d) {
      uVar9 = (int)*(char *)(iVar4 + DAT_000079ac) & 0xff;
    }
    else {
      uVar9 = -(((*(byte *)(DAT_000079a0 + ((uint)(DAT_00007996 + iVar4) >> 3)) &
                 *(byte *)(DAT_000079a4 + (DAT_00007996 + iVar4 & 7U))) == 0) - 1);
    }
    if (99 < (int)uVar9) {
      if (iVar4 < 0x4d) {
        *(undefined *)(iVar4 + DAT_000079ac) = 99;
      }
      else {
        pbVar11 = (byte *)(DAT_000079a0 + ((uint)(DAT_00007996 + iVar4) >> 3));
        *pbVar11 = *pbVar11 | *(byte *)(DAT_000079a4 + (DAT_00007996 + iVar4 & 7U));
      }
    }
    goto switchD_00007048_caseD_30;
  case 0x2c:
    if (*(int *)((int)param_1 + (int)DAT_00007998) != 0) {
      if (**(char **)((int)param_1 + (int)DAT_00007998) != '\x04') {
        return puVar18;
      }
      puVar16 = (undefined4 *)((int)puVar18 + 2);
      if (0 < *(char *)puVar16) {
        puVar16 = (undefined4 *)(((int)puVar18 + 5U & 0xfffffffc) + *(char *)puVar16 * 4);
      }
      *(undefined4 *)((int)param_1 + (int)DAT_0000799a) = 0;
      return puVar16;
    }
    if (*(int *)((int)param_1 + (int)DAT_0000799c) != 0) {
      if (*(int *)((int)param_1 + (int)DAT_0000799c) == 0) {
        return puVar18;
      }
      *(uint *)(*(int *)((int)param_1 + (int)DAT_0000799c) + -4) =
           *(uint *)(*(int *)((int)param_1 + (int)DAT_0000799c) + -4) | 1;
      return puVar18;
    }
    puVar16 = (undefined4 *)((int)puVar18 + 2);
    if (*(char *)puVar16 != 0) {
      (*DAT_00007adc)(uVar12,(int)DAT_00007ad0 + (int)param_1,(int)DAT_00007ace + (int)param_1,
                      -(int)*(char *)puVar16,(int)puVar18 + 5U & 0xfffffffc);
      return puVar18;
    }
    goto switchD_00007048_caseD_30;
  case 0x2d:
    if (*(int *)((int)param_1 + (int)DAT_00007ad0) != 0) {
      if (**(char **)((int)param_1 + (int)DAT_00007ad0) != '\x04') {
        return puVar18;
      }
      puVar16 = (undefined4 *)((int)puVar18 + 2);
      if (0 < *(char *)puVar16) {
        puVar16 = (undefined4 *)(((int)puVar18 + 5U & 0xfffffffc) + *(char *)puVar16 * 4);
      }
      *(undefined4 *)((int)param_1 + (int)DAT_00007ad2) = 0;
      return puVar16;
    }
    if (*(int *)((int)param_1 + (int)DAT_00007ad4) != 0) {
      if (*(int *)((int)param_1 + (int)DAT_00007ad4) == 0) {
        return puVar18;
      }
      *(uint *)(*(int *)((int)param_1 + (int)DAT_00007ad4) + -4) =
           *(uint *)(*(int *)((int)param_1 + (int)DAT_00007ad4) + -4) | 1;
      return puVar18;
    }
    puVar16 = (undefined4 *)((int)puVar18 + 2);
    if (*(char *)puVar16 != 0) {
      (*DAT_00007ae0)(uVar12,(int)DAT_00007ad0 + (int)param_1,(int)DAT_00007ace + (int)param_1,
                      -(int)*(char *)puVar16,(int)puVar18 + 5U & 0xfffffffc);
      return puVar18;
    }
    goto switchD_00007048_caseD_30;
  case 0x2e:
    goto switchD_00007048_caseD_2e;
  case 0x2f:
    if (*(int *)((int)param_1 + (int)DAT_00007b98) == 0) {
      (*DAT_00007b9c)(uVar12,(int)DAT_00007b98 + (int)param_1,
                      *(undefined4 *)((uint)(puVar18 + 1) & 0xfffffffc),
                      ((undefined4 *)((uint)(puVar18 + 1) & 0xfffffffc))[1]);
      return puVar18;
    }
    if (**(char **)((int)param_1 + (int)DAT_00007b98) != '\x04') {
      return puVar18;
    }
    *(undefined4 *)((int)param_1 + (int)DAT_00007b9a) = 0;
    return (undefined4 *)(((uint)(puVar18 + 1) & 0xfffffffc) + 8);
  case 0x30:
    if (*(int *)((int)param_1 + (int)DAT_00007b98) == 0) {
      psVar14 = (short *)((uint)((int)puVar18 + 2) & 0xfffffffe);
      (*DAT_00007ba0)(uVar12,(int)DAT_00007b98 + (int)param_1,(int)*psVar14,(int)psVar14[1],
                      (int)psVar14[2]);
      return puVar18;
    }
    if (**(char **)((int)param_1 + (int)DAT_00007b98) != '\x04') {
      return puVar18;
    }
    *(undefined4 *)((int)param_1 + (int)DAT_00007b9a) = 0;
    return (undefined4 *)(((uint)((int)puVar18 + 2) & 0xfffffffe) + 6);
  }
  *(uint *)((int)DAT_000073ea + (int)param_1) = uVar9;
  goto switchD_00007048_caseD_30;
switchD_00007048_caseD_2e:
  psVar14 = (short *)((uint)((int)puVar18 + 2) & 0xfffffffe);
  puVar16 = (undefined4 *)(psVar14 + 1);
  sVar1 = *psVar14;
  if (*(int *)((int)param_1 + (int)DAT_00007ad2) == 0) {
    if (((undefined4 *)*DAT_00007ae4 != (undefined4 *)0x0) &&
       (iVar4 = (*DAT_00007ae8)(*(undefined4 *)*DAT_00007ae4), iVar4 <= sVar1)) {
      return puVar18;
    }
  }
  else if ((*(int *)((int)param_1 + (int)DAT_00007ad6) == 0) &&
          (*(int *)((int)param_1 + (int)DAT_00007ad8) != 0)) {
    iVar10 = (int)DAT_00007ada;
    *(undefined4 *)((int)param_1 + iVar10) = 0x3c;
    *(undefined4 *)((int)param_1 + iVar10 + -8) = 0;
    return puVar16;
  }
  goto switchD_00007048_caseD_30;
}



void FUN_00007ba4(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  
  param_3 = param_3 >> 2;
  if (0 < param_3) {
    puVar1 = (undefined4 *)(param_1 + param_3 * 4);
    do {
      param_3 = param_3 + -1;
      puVar1 = puVar1 + -1;
      *puVar1 = param_2;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00007bce(undefined *param_1,undefined *param_2,int param_3)

{
  undefined uVar1;
  int *piVar2;
  char *pcVar3;
  
  if (0 < param_3) {
    if (param_1 < param_2) {
      do {
        param_3 = param_3 + -1;
        uVar1 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar1;
        param_1 = param_1 + 1;
      } while (param_3 != 0);
    }
    else if (param_2 < param_1) {
      piVar2 = (int *)(param_1 + param_3);
      pcVar3 = param_2 + param_3;
      do {
        pcVar3 = pcVar3 + -1;
        param_3 = param_3 + -1;
        piVar2 = (int *)((int)piVar2 + -1);
        *piVar2 = (int)*pcVar3;
      } while (param_3 != 0);
    }
  }
  return;
}



void FUN_00007bfa(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (0 < param_3) {
    if (param_1 < param_2) {
      do {
        param_3 = param_3 + -1;
        uVar1 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar1;
        param_1 = param_1 + 1;
      } while (param_3 != 0);
    }
    else if (param_2 < param_1) {
      param_1 = param_1 + param_3;
      param_2 = param_2 + param_3;
      do {
        param_2 = param_2 + -1;
        param_3 = param_3 + -1;
        param_1 = param_1 + -1;
        *param_1 = *param_2;
      } while (param_3 != 0);
    }
  }
  return;
}



void FUN_00007c2a(undefined4 param_1,int param_2,int param_3,int param_4)

{
  FUN_00007bce(param_1,param_2,param_4);
  FUN_00007bce(param_2,param_4 + param_2,param_3 - param_4);
  FUN_00007bce((param_3 - param_4) + param_2,param_1,param_4);
  return;
}



void FUN_00007c60(undefined4 param_1,int param_2,int param_3,int param_4)

{
  FUN_00007bfa(param_1,param_2,param_4);
  FUN_00007bfa(param_2,param_4 * 4 + param_2,param_3 - param_4);
  FUN_00007bfa((param_3 - param_4) * 4 + param_2,param_1,param_4);
  return;
}



void FUN_00007d1a(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(uint *)(param_1 + 0x60) < param_2 + 0x10U) {
    puVar4 = *(undefined4 **)(param_1 + 100);
    puVar3 = *(undefined4 **)(param_1 + 0x60);
    uVar2 = (param_2 + 0x10U) - (int)puVar3 >> 2;
    do {
      uVar2 = uVar2 - 1;
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != 0);
  }
  return;
}



void FUN_00007e08(int param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x5c) == *(int *)(param_1 + 0x54)) &&
     (*(int *)(param_1 + 0x4c) != *(int *)(param_1 + 0x50))) {
    *param_3 = 0;
    *param_2 = 0;
    return;
  }
  iVar2 = *(int *)(param_1 + 0x58) - *(uint *)(param_1 + 0x54);
  if ((*(uint *)(param_1 + 0x54) < *(uint *)(param_1 + 0x5c)) &&
     (iVar1 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x54), iVar1 < iVar2)) {
    iVar2 = iVar1;
  }
  *param_3 = iVar2;
  *param_2 = *(undefined4 *)(param_1 + 0x54);
  return;
}



void FUN_00007e4a(int param_1,int param_2)

{
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + param_2;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_2;
  return;
}



void FUN_00007e5a(int param_1)

{
  uint uVar1;
  
  if (((*(uint *)(param_1 + 0x58) <= *(uint *)(param_1 + 0x54)) &&
      (*(uint *)(param_1 + 0x5c) <= *(uint *)(param_1 + 0x54))) && (2 < *(int *)(param_1 + 0x28))) {
    uVar1 = (uint)DAT_00007ed4;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
    *(uint *)(param_1 + 0x58) = (*(uint *)(param_1 + 0x70) & uVar1) + *(int *)(param_1 + 100);
  }
  return;
}



void FUN_00007e88(int param_1,int param_2)

{
  uint uVar1;
  
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + param_2;
  uVar1 = *(int *)(param_1 + 0x5c) + param_2;
  *(uint *)(param_1 + 0x5c) = uVar1;
  if (*(uint *)(param_1 + 0x60) <= uVar1) {
    *(int *)(param_1 + 0x5c) =
         *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
  }
  return;
}



void FUN_00007edc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*DAT_00007ff8)();
  iVar2 = iVar1 - *(int *)(param_1 + 0x28 + (int)DAT_00007ff2);
  *(int *)(param_1 + 0x28 + (int)DAT_00007ff2) = iVar1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + DAT_00007ffc;
  }
  *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + iVar2 * *(int *)(param_1 + 0xb8);
  *(uint *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + (*(uint *)(param_1 + 0xa4) >> 0x12);
  *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) & DAT_00008000;
  return;
}



void FUN_00007f32(int param_1)

{
  *(undefined *)(param_1 + 0x9c) = *(undefined *)(*(int *)(param_1 + 0x14) + DAT_00008004);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xa0);
  return;
}



undefined4 FUN_00007f52(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = 0x74;
  cVar1 = *(char *)(*(int *)(param_1 + 0x14) + DAT_00008004);
  iVar4 = (int)cVar1 - (int)*(char *)(param_1 + 0x9c);
  if (iVar4 != 0) {
    if (*(char *)(*(int *)(param_1 + DAT_00007ff4) + 5) == '\b') {
      uVar3 = *(uint *)(param_1 + 0x7c);
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x7c) >> 1;
    }
    if (iVar4 < 0) {
      iVar4 = iVar4 + (uVar3 >> 0xc);
    }
    *(char *)(param_1 + 0x9c) = cVar1;
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + iVar4;
    uVar2 = 0x8c;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xa0);
  }
  return uVar2;
}



int FUN_00008036(int param_1,uint *param_2,undefined4 *param_3)

{
  int iVar1;
  
  *param_2 = (uint)(*(int *)(param_1 + 0x88) * *(int *)(param_1 + 0x28 + (int)DAT_0000811a)) >> 10;
  iVar1 = *(int *)(param_1 + 0xbc);
  if (iVar1 == 1) {
    *param_3 = *(undefined4 *)(param_1 + 0x24);
  }
  else {
    *param_3 = 0;
  }
  return iVar1;
}



void FUN_00008174(int param_1)

{
  code *pcVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  
  pcVar2 = DAT_0000827c;
  pcVar1 = DAT_00008278;
  if (*(int *)(param_1 + 0x78) != 0) {
    iVar4 = (int)DAT_00008270;
    while (cVar3 = (*pcVar2)(*(undefined4 *)(param_1 + 0x14)), cVar3 == '\x01') {
      (*pcVar1)(iVar4);
    }
  }
  return;
}



void FUN_000081b2(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  ushort uVar4;
  char cVar5;
  int iVar6;
  undefined local_2c [4];
  undefined auStack40 [3];
  undefined uStack37;
  int iStack36;
  int iStack32;
  undefined uStack28;
  undefined uStack27;
  undefined uStack26;
  ushort uStack24;
  undefined uStack22;
  undefined uStack21;
  undefined uStack20;
  undefined uStack19;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    iStack36 = param_2;
    iStack32 = param_3;
    FUN_00008036(param_1,local_2c,auStack40);
    iVar3 = (*DAT_00008284)();
    iVar3 = (int)*(char *)(DAT_00008288 + iVar3);
    uStack28 = (undefined)*(undefined4 *)(param_1 + 0x14);
    if (iStack36 != -1) {
      uStack37 = (undefined)iStack36;
    }
    if (iStack32 == -1) {
      uStack26 = (undefined)*(undefined4 *)(param_1 + 0x20);
    }
    else {
      uStack26 = (undefined)iStack32;
    }
    uStack27 = uStack37;
    (*DAT_0000828c)();
    uVar4 = (*DAT_00008284)();
    pcVar2 = DAT_00008294;
    pcVar1 = DAT_00008278;
    iVar6 = (int)DAT_00008270;
    uStack24 = (ushort)((-iVar3 & 0xfU) << 0xb) | uVar4 & DAT_00008274;
    uStack22 = 0;
    uStack21 = 0;
    uStack20 = 0;
    uStack19 = 0;
    while (cVar5 = (*pcVar2)(&uStack28), cVar5 == '\x01') {
      (*pcVar1)(iVar6);
    }
  }
  return;
}



void FUN_00008298(int param_1,undefined4 *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8c) * 0x1000 + *(int *)(param_1 + 0x94);
  if (*(char *)(*(int *)(param_1 + DAT_00008370) + 5) == '\b') {
    iVar1 = *(int *)(param_1 + 0x90) - iVar1;
  }
  else {
    iVar1 = (*(int *)(param_1 + 0x90) - iVar1) * 2;
  }
  iVar1 = *(int *)(param_1 + 0x7c) - iVar1;
  if (iVar1 < 1) {
    *param_5 = 0;
    *param_4 = 0;
    *param_2 = 0;
    *param_3 = 0;
  }
  else {
    *param_5 = iVar1;
    if (*(uint *)(param_1 + 0x80) < (uint)(*(int *)(param_1 + 0x84) + iVar1)) {
      *param_4 = *(int *)(param_1 + 0x80) - *(int *)(param_1 + 0x84);
    }
    else {
      *param_4 = iVar1;
    }
    *param_2 = *(undefined4 *)(param_1 + 0x84);
    *param_3 = (*(uint *)(param_1 + 0x7c) & 0xfffffffe) + *(int *)(param_1 + 0x84);
  }
  return;
}



undefined4 FUN_00008322(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2;
  if (*(char *)(*(int *)(param_1 + DAT_00008370) + 5) != '\b') {
    uVar1 = param_2 >> 1;
  }
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + uVar1;
  *(uint *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + (param_2 & 0xfffffffe);
  if (*(uint *)(param_1 + 0x80) <= *(uint *)(param_1 + 0x84)) {
    *(uint *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) - (*(uint *)(param_1 + 0x7c) & 0xfffffffe);
  }
  return 0x5c;
}



void FUN_00008372(int param_1)

{
  int iVar1;
  uint local_28;
  uint local_24;
  undefined4 uStack32;
  undefined4 uStack28;
  int iStack24;
  
  iStack24 = *(int *)(param_1 + DAT_00008450);
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_00008298(param_1,&uStack32,&uStack28,&local_28,&local_24);
    if ((uint)(int)DAT_00008452 < local_24) {
      local_24 = (int)DAT_00008452;
    }
    if (local_24 < local_28) {
      local_28 = local_24;
    }
    iVar1 = local_24 - local_28;
    FUN_00007ba4(uStack32,0,local_28);
    FUN_00007ba4(*(undefined4 *)(param_1 + 0x18),0,iVar1);
    if (*(char *)(iStack24 + 4) == '\x02') {
      FUN_00007ba4(uStack28,0,local_28);
      FUN_00007ba4((*(uint *)(param_1 + 0x7c) & 0xfffffffe) + *(int *)(param_1 + 0x18),0,iVar1);
    }
    FUN_00008322(param_1,local_24);
  }
  return;
}



int FUN_0000840c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + DAT_00008454) <= uVar2) {
    uVar2 = *(uint *)(param_1 + DAT_00008454);
  }
  iVar1 = (int)DAT_00008454;
  if (uVar2 <= *(uint *)(param_1 + 0x4c)) {
    *(undefined4 *)(param_1 + 0x28) = 4;
  }
  return iVar1;
}



int FUN_00008432(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_20;
  int iStack28;
  uint uStack24;
  undefined4 *puStack20;
  
  puStack20 = (undefined4 *)param_2;
  iVar2 = (*DAT_00008458)(param_2);
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00008582(*param_1,param_1[2],param_1[3],param_1[4],param_1[5]);
    if (iVar3 != 0) {
      puStack20 = (undefined4 *)(iVar3 + 0x28);
      piVar4 = (int *)(DAT_000085c6 + iVar3);
      *piVar4 = iVar2;
      (*DAT_000085cc)(iVar2,&iStack28,&local_20,&uStack24);
      piVar4[5] = local_20;
      piVar4[6] = (local_20 + -1) * iStack28 + (uStack24 & 0xfffffffc);
      piVar4[2] = 0;
      pcVar1 = DAT_000085d0;
      piVar4[1] = 0x14;
      (*pcVar1)(iVar2,0x14);
      FUN_00008694(iVar3);
      *puStack20 = 2;
    }
  }
  return iVar3;
}



undefined4 *
FUN_00008582(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  *param_1 = param_2;
  pcVar1 = DAT_000085d8;
  param_1[1] = param_3;
  (*pcVar1)(param_2,param_3);
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_4;
  param_1[7] = param_5;
  param_1[8] = 0;
  param_1[9] = 7;
  puVar5 = DAT_000086cc;
  puVar6 = param_1 + 10;
  *(undefined4 *)((int)param_1 + (int)DAT_000086ba) = *param_1;
  *puVar6 = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  iVar2 = (int)DAT_000086be;
  iVar3 = (int)DAT_000086c0;
  param_1[0x12] = *(undefined4 *)*puVar5;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x17] = *param_1;
  param_1[0x15] = *param_1;
  iVar2 = (param_1[1] & (int)DAT_000086bc) + iVar2;
  param_1[0x1d] = iVar2;
  if ((uint)param_1[1] <= (uint)(iVar2 + iVar3)) {
    return (undefined4 *)0x0;
  }
  param_1[0x1c] = param_1[1] - param_1[0x1d];
  param_1[0x19] = *param_1;
  iVar2 = param_1[0x19] + param_1[0x1c];
  param_1[0x1a] = iVar2;
  param_1[0x16] = iVar2;
  param_1[0x18] = iVar2;
  param_1[0x1e] = 0;
  param_1[0x21] = param_1[6];
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  iVar2 = (int)DAT_000086c2;
  iVar4 = (int)DAT_000086c8;
  *(undefined4 *)((int)puVar6 + iVar2) = 0;
  iVar3 = (int)DAT_000086c4;
  puVar5 = (undefined4 *)(iVar4 + (int)puVar6);
  *(undefined4 *)((int)puVar6 + iVar2 + 4) = 0;
  iVar2 = (int)DAT_000086c6;
  *(int *)((int)puVar6 + iVar2) = iVar3;
  *(undefined4 *)((int)puVar6 + iVar2 + 4) = 1;
  *(undefined4 *)((int)puVar6 + iVar2 + 8) = 0;
  *(undefined4 *)((int)puVar6 + iVar2 + 0xc) = 0;
  iVar2 = 0x10;
  do {
    iVar2 = iVar2 + -1;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5 = puVar5 + 3;
  } while (iVar2 != 0);
  return param_1;
}



void FUN_00008694(int param_1)

{
  if (0 < (int)((undefined4 *)(DAT_000086ca + param_1))[5]) {
    (*DAT_000086d0)(*(undefined4 *)(DAT_000086ca + param_1));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000086d4(int param_1)

{
  code *pcVar1;
  code *pcVar2;
  int **ppiVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  
  piVar8 = (int *)(param_1 + 0x28);
  iVar5 = (int)_DAT_00008792;
  iVar4 = *(int *)(param_1 + _LAB_00008793_1);
  piVar7 = (int *)((int)_LAB_00008795_1 + (int)piVar8);
  iVar6 = 0x10;
  if (*piVar8 != 5) {
    FUN_00008174();
    *(undefined4 *)(param_1 + 0x4c) = ((undefined4 *)(iVar5 + param_1))[6];
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)((int)piVar8 + (int)_LAB_00008797_1) = *(undefined4 *)(iVar4 + 0x10);
    if (*(int *)(param_1 + 0x44) != 0) {
      (*_LAB_0000879b_1)();
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    do {
      if ((*piVar7 == 1) && (piVar7[1] != 0)) {
        *(uint *)(piVar7[1] + -4) = *(uint *)(piVar7[1] + -4) | 1;
      }
      ppiVar3 = DAT_000087a8;
      pcVar2 = DAT_000087a4;
      pcVar1 = _LAB_0000879f_1;
      iVar6 = iVar6 + -1;
      piVar7 = piVar7 + 3;
    } while (iVar6 != 0);
    while (*(int *)(param_1 + 0x48) < **ppiVar3) {
      piVar7 = *ppiVar3;
      if ((*(byte *)((int)piVar7 + 0x15) & 1) == 0) {
        iVar4 = piVar7[2];
        (*pcVar2)();
        (*pcVar1)(iVar4);
      }
      else {
        (*pcVar2)();
      }
    }
    (*DAT_000087ac)(*(undefined4 *)(iVar5 + param_1));
    *piVar8 = 5;
  }
  return;
}



int FUN_0000885e(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_1 + 0x28);
  iVar1 = *piVar4;
  if (iVar1 == 4) {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 == 0) {
      iVar1 = DAT_000088b0 + -4;
      if (*(uint *)((int)piVar4 + (int)DAT_000088b0) <= *(uint *)((int)piVar4 + iVar1)) {
        uVar3 = DAT_000089f0;
        if ((*DAT_000088dc & 1) != 0) {
          uVar3 = DAT_000088e0;
        }
        uVar2 = (*DAT_000089f4)(*(undefined4 *)((int)piVar4 + (int)DAT_000089e8),
                                (uVar3 >> 0xe) + 1 >> 1,
                                *(undefined4 *)(*(int *)(param_1 + DAT_000088ae) + 0xc));
        *(undefined4 *)(param_1 + 0xa0) = uVar2;
        *(undefined4 *)(param_1 + 0xa4) = 0;
        iVar1 = 0x84;
        *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0xb0);
        if (*(int *)(param_1 + 0x34) == 0) {
          iVar1 = (int)DAT_000089ea;
          *(undefined4 *)(param_1 + 0x30) = 1;
          *(int *)((int)piVar4 + iVar1) = *(int *)((int)piVar4 + iVar1) + 1;
          iVar1 = FUN_00009688(param_1);
          return iVar1;
        }
      }
    }
    else if ((iVar1 == 1) &&
            ((iVar1 = DAT_000089e8 + -4,
             *(uint *)((int)piVar4 + iVar1) < *(uint *)((int)piVar4 + (int)DAT_000089e8) ||
             (*(int *)(param_1 + 0x34) != 0)))) {
      *(undefined4 *)(param_1 + 0x30) = 0;
      iVar1 = FUN_0000977c(param_1);
      return iVar1;
    }
  }
  return iVar1;
}



void FUN_00008958(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int local_24;
  int iStack32;
  undefined4 uStack28;
  undefined auStack24 [8];
  
  puVar4 = (undefined4 *)(DAT_000089ec + param_1);
  if ((uint)puVar4[6] <= *(uint *)(param_1 + 0x4c)) {
    return;
  }
  if ((puVar4[2] == 0) && (FUN_00007e08(param_1,&uStack28,&iStack32), DAT_000089ee <= iStack32)) {
    if (iStack32 < (int)(puVar4[1] << 0xb)) {
      iVar2 = (*DAT_000089f8)();
    }
    else {
      iVar2 = puVar4[1];
    }
    iVar1 = (*DAT_000089fc)(*puVar4,iVar2,uStack28,iVar2 << 0xb);
    if (-1 < iVar1) {
      puVar4[3] = iVar2 << 0xb;
      puVar4[4] = 0;
      puVar4[2] = 1;
      goto LAB_000089ce;
    }
LAB_000089e0:
    FUN_000086d4(param_1);
  }
  else {
LAB_000089ce:
    if (puVar4[2] == 1) {
      iVar2 = (*DAT_00008a00)(*puVar4);
      if (iVar2 < 0) goto LAB_000089e0;
      (*DAT_00008abc)(*puVar4,auStack24,&local_24);
      if ((0 < local_24) && (uVar3 = local_24 - puVar4[4] & 0xfffffffc, 0 < (int)uVar3)) {
        puVar4[4] = puVar4[4] + uVar3;
        FUN_00007e4a(param_1,uVar3);
      }
      if (((int)puVar4[3] <= local_24) || (iVar2 == 0)) {
        puVar4[2] = 0;
      }
    }
    FUN_00007e5a(param_1);
  }
  return;
}



int FUN_00008a52(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + DAT_00008ab8);
  iVar1 = DAT_00008ab8 + -0x30;
  *(int *)((int)piVar5 + iVar1) = *(int *)((int)piVar5 + iVar1) + 1;
  iVar1 = *piVar5;
  if (iVar1 == 2) {
    iVar1 = FUN_00008c36(param_1);
    if (iVar1 != 0) goto LAB_00008b14;
  }
  else if (iVar1 != 3) {
    if (iVar1 != 4) {
      return iVar1;
    }
    if (*(int *)(param_1 + 0x30) == 0) {
      FUN_00007edc(param_1);
      uVar3 = DAT_00008b70;
      if ((*DAT_00008ac0 & 1) != 0) {
        uVar3 = DAT_00008ac4;
      }
      uVar2 = (*DAT_00008b74)(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(iVar4 + 0xc),
                              (uVar3 >> 0xe) + 1 >> 1);
      *(undefined4 *)((int)DAT_00008b68 + (int)piVar5) = uVar2;
      FUN_00007f52(param_1);
      if (*(int *)((int)piVar5 + (int)DAT_00008b6a) != 0) {
        iVar1 = (int)DAT_00008b6a;
        *(undefined4 *)((int)piVar5 + iVar1 + -8) = *(undefined4 *)((int)piVar5 + iVar1);
        *(undefined4 *)((int)piVar5 + iVar1 + -4) = *(undefined4 *)((int)piVar5 + iVar1 + 4);
        FUN_000081b2(param_1,0xffffffff);
        iVar1 = (int)DAT_00008b6a;
        *(undefined4 *)((int)piVar5 + iVar1) = 0;
        *(undefined4 *)((int)piVar5 + iVar1 + 4) = 0;
      }
    }
    goto LAB_00008b14;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_0000840c(param_1);
  }
LAB_00008b14:
  if (*(int *)(param_1 + 0x40) != 0) {
    if ((uint)(*(int *)(param_1 + 0x8c) * 0x1000 + *(int *)(param_1 + 0x94)) <
        *(uint *)(param_1 + 0x98)) {
      FUN_00008372(param_1);
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    else {
      FUN_00008174(param_1);
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  iVar1 = *(int *)((int)piVar5 + (int)DAT_00008b6c);
  if ((iVar1 != 0) &&
     (iVar1 = (int)DAT_00008b68, *(uint *)(iVar4 + 0x10) <= *(uint *)((int)piVar5 + iVar1))) {
    iVar1 = FUN_000086d4(param_1);
    return iVar1;
  }
  do {
    uVar3 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x50);
    if (uVar3 < 0x10) {
      return iVar1;
    }
    piVar5 = *(int **)(param_1 + 0x5c);
    if ((int)uVar3 < *piVar5) {
      return iVar1;
    }
    FUN_00007d1a(param_1,piVar5);
    switch(piVar5[1]) {
    case 0:
      iVar1 = FUN_00009142(param_1);
      break;
    case 1:
      iVar1 = FUN_00008d20(param_1);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x34) = 1;
        return iVar1;
      }
      *(undefined4 *)(param_1 + 0x34) = 0;
      goto switchD_00008ba2_caseD_3;
    case 2:
      iVar1 = FUN_000092b0(param_1);
      break;
    default:
      goto switchD_00008ba2_caseD_3;
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
      iVar1 = FUN_00008ec4(param_1);
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00008ba2_caseD_3:
    iVar1 = FUN_00007e88(param_1,*piVar5);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  } while( true );
}



undefined4 FUN_00008c36(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  piVar2 = *(int **)((int)param_1 + (int)DAT_00008ce4);
  if ((uint)param_1[0x13] < 0x18) {
    return 0xffffffff;
  }
  param_1[0x1b] = *piVar2;
  if ((uint)param_1[0x1c] < (uint)param_1[0x1b]) {
    return 0xffffffff;
  }
  if ((uint)param_1[1] < (uint)(param_1[0x1b] + (int)DAT_00008ce6)) {
    return 0xffffffff;
  }
  uVar1 = (int)DAT_00008ce8 + (param_1[1] - param_1[0x1b]) & (int)DAT_00008cea;
  param_1[0x1c] = uVar1;
  param_1[0x1d] = (param_1[1] - param_1[0x1b]) - uVar1;
  param_1[0x19] = *param_1 + param_1[0x1b];
  param_1[0x1a] = *param_1 + param_1[0x1b] + param_1[0x1c];
  param_1[0x22] = (uint)piVar2[2] >> 0x10;
  if (*(char *)((int)piVar2 + 5) == '\b') {
    if (*(char *)(piVar2 + 1) != '\x02') {
      uVar1 = param_1[7];
      goto LAB_00008cca;
    }
    uVar1 = param_1[7];
  }
  else if (*(char *)(piVar2 + 1) == '\x02') {
    uVar1 = (uint)param_1[7] >> 1;
  }
  else {
    uVar1 = param_1[7];
  }
  uVar1 = uVar1 >> 1;
LAB_00008cca:
  uVar1 = uVar1 & (int)DAT_00008ce8;
  if (uVar1 >> 0xc < 2) {
    return 0xffffffff;
  }
  if (*(char *)((int)piVar2 + 5) != '\b') {
    uVar1 = uVar1 << 1;
  }
  param_1[0x1f] = uVar1;
  param_1[0x20] = (uVar1 & 0xfffffffe) + param_1[6];
  param_1[10] = 3;
  FUN_00007e88(param_1,*piVar2);
  return 0;
}



undefined4 FUN_00008d20(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint local_38;
  int iStack52;
  int *piStack48;
  undefined4 uStack44;
  undefined4 uStack40;
  uint local_24 [2];
  
  iVar2 = *(int *)(param_1 + DAT_00008daa);
  piStack48 = *(int **)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x78) == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 1;
    *(undefined4 *)(param_1 + 0x78) = 1;
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  piVar3 = piStack48 + 4;
  uVar5 = *piStack48 - 0x10;
  FUN_00008298(param_1,&uStack44,&uStack40,&local_38,local_24);
  if (*(char *)(iVar2 + 4) == '\x02') {
    uVar5 = (int)uVar5 >> 1;
  }
  if (local_24[0] < uVar5) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar4 = uVar5;
    if (local_38 < uVar5) {
      uVar4 = local_38;
    }
    iStack52 = uVar5 - uVar4;
    if (uVar4 != 0) {
      (*DAT_00008eb0)(param_1,piVar3,uStack44,uVar4);
      if (*(char *)(iVar2 + 4) == '\x02') {
        (*DAT_00008eb0)(param_1,uVar5 + (int)piVar3,uStack40,uVar4);
      }
      piVar3 = (int *)((int)piVar3 + uVar4);
    }
    if ((iStack52 != 0) &&
       ((*DAT_00008eb0)(param_1,piVar3,*(undefined4 *)(param_1 + 0x18),iStack52),
       *(char *)(iVar2 + 4) == '\x02')) {
      (*DAT_00008eb0)(param_1,uVar5 + (int)piVar3,
                      (*(uint *)(param_1 + 0x7c) & 0xfffffffe) + *(int *)(param_1 + 0x18),iStack52);
    }
    FUN_00008322(param_1,uVar5);
    if (piStack48[2] != 0) {
      *(undefined4 *)(param_1 + 0x40) = 1;
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x90);
    }
    uVar1 = 0;
  }
  return uVar1;
}



void FUN_00008e7e(int param_1,uint param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x28 + (int)DAT_00008eae + (param_2 * 0xc & 0xff));
  if (param_2 < 0x11) {
    *puVar1 = param_3;
    if (param_4 != 0) {
      puVar1[1] = param_4;
    }
    if (param_5 != 0) {
      puVar1[2] = param_5;
    }
  }
  return;
}



undefined4 FUN_00008ec4(int param_1)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_1 + 0x5c);
  piVar1 = (int *)(*DAT_00009020)(*DAT_0000901c,DAT_00009018,0x58);
  FUN_00008e7e(param_1,piVar6[1] + -0x10,1,piVar1,piVar1 + 2);
  iVar5 = piVar6[2] + -0x10;
  iVar4 = *piVar6 - iVar5;
  (*DAT_00009024)(piVar1,iVar5,iVar4);
  if (iVar4 != 0) {
    iVar3 = DAT_00009028 + ((int)*(short *)(piVar1[1] + 4) & 0xffffU) * 8;
    (*DAT_0000902c)(param_1,piVar6[2] + (int)piVar6,iVar3,iVar4);
    (*DAT_00009030)(iVar3,iVar4);
  }
  if (iVar5 != 0) {
    iVar3 = *piVar1;
    (*DAT_0000902c)(param_1,piVar6 + 4,iVar3,iVar5);
    (*DAT_00009030)(iVar3,iVar5);
    if (iVar4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined2 *)(piVar1[1] + 4);
    }
    (*DAT_00009034)(iVar3,uVar2);
  }
  (*DAT_00009038)(piVar1,piVar1 + 2,0,*piVar1,(int)*(short *)(piVar6 + 3),0,
                  *(undefined4 *)(*piVar1 + (int)*(short *)((int)piVar6 + 0xe)),0,0);
  return 0;
}



undefined4 FUN_00008fa2(int param_1)

{
  undefined4 uVar1;
  ushort local_18;
  ushort uStack22;
  ushort uStack20;
  undefined4 uStack16;
  undefined4 uStack12;
  undefined4 uStack8;
  
  uStack16 = (*DAT_0000903c)();
  uStack12 = (*DAT_0000903c)();
  uStack8 = (*DAT_0000903c)();
  local_18 = *(ushort *)(param_1 + 6) & DAT_00009016;
  uStack22 = *(ushort *)(param_1 + 8) & DAT_00009016;
  uStack20 = *(ushort *)(param_1 + 10) & DAT_00009016;
  uVar1 = (*DAT_00009044)(DAT_00009040,&uStack16,&local_18);
  return uVar1;
}



int FUN_000090c0(int param_1,int param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  int *piVar7;
  int *piVar8;
  
  piVar8 = (int *)((param_2 * 0xc & 0xffU) + (int)DAT_00009184 + param_1 + 0x28);
  iVar3 = *piVar8;
  if ((iVar3 != 0) && (iVar3 = piVar8[2], iVar3 != 0)) {
    if (*piVar8 == 3) {
      piVar7 = *(int **)(piVar8[2] + 0x2c);
      iVar3 = (int)*(short *)(piVar8[2] + 0x12);
      *piVar7 = (int)*param_3;
      piVar7[1] = (int)param_3[1];
      puVar5 = (ushort *)(param_3 + 3);
      piVar7[2] = (int)param_3[2];
      iVar2 = (*DAT_00009188)();
      *piVar7 = iVar2;
      iVar2 = (*DAT_00009188)();
      piVar7[1] = iVar2;
      iVar2 = (*DAT_00009188)();
      piVar7[2] = iVar2;
      uVar1 = DAT_00009180;
      do {
        iVar3 = iVar3 + -1;
        iVar4 = (int)DAT_00009182;
        piVar7[3] = (int)(short)(*puVar5 & uVar1) << 0x10;
        puVar6 = puVar5 + 2;
        piVar7[4] = (int)(short)(puVar5[1] & uVar1) << 0x10;
        puVar5 = puVar5 + 6;
        piVar7[5] = (int)(short)(*puVar6 & uVar1) << 0x10;
        piVar7 = (int *)((int)piVar7 + iVar4);
      } while (iVar3 != 0);
      return iVar2;
    }
                    // WARNING: Could not recover jumptable at 0x000090fe. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar3 = (*DAT_0000918c)(piVar8[2],param_3);
    return iVar3;
  }
  return iVar3;
}



uint FUN_00009108(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(param_1 + 0x28 + (int)DAT_00009184 + (param_2 * 0xc & 0xffU));
  uVar1 = *puVar2;
  if ((uVar1 != 0) && (uVar1 = puVar2[1], uVar1 != 0)) {
    uVar1 = puVar2[1];
    if (uVar1 != 0) {
      uVar1 = *(uint *)(puVar2[1] - 4) | 1;
      *(uint *)(puVar2[1] - 4) = uVar1;
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  return uVar1;
}



undefined4 FUN_00009142(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *local_24;
  
  piVar3 = (int *)(param_1 + 0x28);
  piVar1 = *(int **)(param_1 + 0x5c);
  if (*piVar3 == 4) {
    if (*(int *)((int)piVar3 + (int)DAT_00009186) == 0) {
      (*DAT_00009190)(param_1);
    }
    if (*(uint *)((int)piVar3 + (int)DAT_00009186) <= *(uint *)((int)piVar3 + DAT_00009186 + -4)) {
      if (*(int *)(param_1 + 0x3c) != 0) {
        (*DAT_000091bc)(param_1);
        *(undefined4 *)(param_1 + 0x3c) = 0;
      }
      *(int *)((int)piVar3 + (int)DAT_000091b8) =
           *(int *)((int)piVar3 + (int)DAT_000091b8) + piVar1[2];
      for (local_24 = piVar1 + 4; local_24 < (int *)(*piVar1 + (int)piVar1);
          local_24 = (int *)((int)local_24 + *piVar3)) {
        piVar3 = (int *)(*DAT_000091e4)(param_1,local_24);
        piVar2 = piVar3 + 2;
        switch(piVar3[1]) {
        case 0:
          FUN_00008fa2(piVar2);
          break;
        case 1:
          (*DAT_000092f0)(3,0x19,0x26,2);
          (*DAT_000092f4)(piVar2);
          *(undefined4 *)(param_1 + 0x44) = 1;
          break;
        case 2:
          (*DAT_000092f8)();
          *(undefined4 *)(param_1 + 0x44) = 0;
          break;
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
          FUN_000090c0(param_1,piVar3[1] + -0x10,piVar2);
          break;
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
          FUN_00009108(param_1,piVar3[1] + -0x20);
        }
      }
      return 0;
    }
  }
  return 0xffffffff;
}



undefined4 FUN_000092b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x5c);
  iVar2 = *piVar3 + -0x10;
  uVar1 = (*DAT_000092fc)(iVar2);
  (*DAT_00009300)(param_1,piVar3 + 4,uVar1,iVar2);
  (*DAT_00009304)(uVar1);
  return 0;
}



int FUN_000093b6(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  piVar6 = (int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + DAT_00009412);
  *(int *)((int)piVar6 + (int)DAT_00009414) = *(int *)((int)piVar6 + (int)DAT_00009414) + 1;
  iVar2 = *piVar6;
  if (iVar2 == 2) {
    *piVar6 = 3;
  }
  else if (iVar2 != 3) {
    if (iVar2 != 4) {
      return iVar2;
    }
    (*DAT_0000956c)(param_1);
    uVar5 = DAT_00009578;
    if ((*DAT_00009570 & 1) != 0) {
      uVar5 = DAT_00009574;
    }
    uVar3 = (*DAT_0000957c)(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(iVar4 + 0xc),
                            (uVar5 >> 0xe) + 1 >> 1);
    pcVar1 = DAT_00009580;
    *(undefined4 *)((int)DAT_00009564 + (int)piVar6) = uVar3;
    (*pcVar1)(param_1);
    if (*(int *)((int)piVar6 + (int)DAT_00009566) != 0) {
      iVar2 = (int)DAT_00009566;
      *(undefined4 *)((int)piVar6 + iVar2 + -8) = *(undefined4 *)((int)piVar6 + iVar2);
      pcVar1 = DAT_00009584;
      *(undefined4 *)((int)piVar6 + iVar2 + -4) = *(undefined4 *)((int)piVar6 + iVar2 + 4);
      (*pcVar1)(param_1,0xffffffff);
      iVar2 = (int)DAT_00009566;
      *(undefined4 *)((int)piVar6 + iVar2) = 0;
      *(undefined4 *)((int)piVar6 + iVar2 + 4) = 0;
    }
    goto LAB_000094b4;
  }
  if ((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(param_1 + 0x78) != 0)) {
    FUN_0000840c(param_1);
    (*DAT_00009440)(param_1);
    (*DAT_00009444)(param_1);
  }
LAB_000094b4:
  if (*(uint *)(param_1 + 0x98) <=
      (uint)(*(int *)(param_1 + 0x8c) * 0x1000 + *(int *)(param_1 + 0x94))) {
    iVar2 = FUN_000086d4(param_1);
    return iVar2;
  }
  if (*(uint *)(param_1 + 0x50) < *(uint *)(param_1 + DAT_00009568)) {
    FUN_0000950e(param_1);
  }
  if (*(uint *)(param_1 + 0x50) < *(uint *)(param_1 + DAT_00009568)) {
    return (int)DAT_00009568;
  }
                    // WARNING: Could not recover jumptable at 0x000094fe. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar2 = (*DAT_00009588)(param_1);
  return iVar2;
}



void FUN_0000950e(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_2c;
  uint local_28;
  undefined4 uStack36;
  undefined auStack32 [4];
  int iStack28;
  
  uVar3 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x50);
  if (uVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0x78) = 1;
    iStack28 = param_1;
    (*DAT_0000958c)(param_1,&uStack36,auStack32,&local_2c,&local_28);
    if (local_28 < uVar3) {
      uVar3 = local_28;
    }
    uVar2 = uVar3;
    if (local_2c < uVar3) {
      uVar2 = local_2c;
    }
    if (uVar2 != 0) {
      (*DAT_00009670)(param_1,iVar1,uStack36,uVar2);
      iVar1 = iVar1 + uVar2;
    }
    if (uVar3 - uVar2 != 0) {
      (*DAT_00009670)(param_1,iVar1,*(undefined4 *)(iStack28 + 0x18),uVar3 - uVar2);
    }
    (*DAT_00009674)(param_1,uVar3);
    (*DAT_00009678)(param_1,uVar3);
  }
  return;
}



void FUN_00009688(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + DAT_000097a6);
  (*DAT_000097ac)();
  (*DAT_000097b0)(param_1);
  if (*(int *)(param_1 + 0x78) != 0) {
    (*DAT_000097b4)(param_1);
    iVar1 = (*DAT_000097b8)(param_1);
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + iVar1;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    iVar1 = *(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x94);
    if (*(char *)(iVar2 + 5) != '\b') {
      iVar1 = iVar1 * 2;
    }
    for (uVar3 = (*(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x18)) - iVar1; (int)uVar3 < 0;
        uVar3 = uVar3 + *(int *)(param_1 + 0x7c)) {
    }
    if (*(char *)(iVar2 + 4) == '\x01') {
      (*DAT_000097bc)(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74),
                      *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x7c),uVar3);
    }
    else {
      (*DAT_000097bc)(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74),
                      *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x7c),uVar3);
      (*DAT_000097bc)(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74),
                      *(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x7c),uVar3);
    }
    uVar3 = *(int *)(param_1 + 0x84) - (uVar3 & 0xfffffffe);
    *(uint *)(param_1 + 0x84) = uVar3;
    if (uVar3 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(param_1 + 0x84) =
           *(int *)(param_1 + 0x84) + (*(uint *)(param_1 + 0x7c) & 0xfffffffe);
    }
  }
  return;
}



void FUN_0000977c(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    (*DAT_000097c0)(param_1,param_1);
  }
  uVar1 = (*DAT_000097c4)();
  *(undefined4 *)((int)DAT_000097a8 + param_1 + 0x28) = uVar1;
  return;
}



void FUN_00009908(void)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  short sVar4;
  int extraout_r2;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  
  iVar7 = DAT_00009950;
  iVar5 = DAT_00009948;
  if (*(char *)(DAT_00009948 + 1) < '\b') {
    *(short *)(DAT_00009946 + DAT_00009948) =
         *(short *)(DAT_00009948 + 0x12) +
         *(short *)(DAT_00009950 + *(char *)(DAT_00009948 + 1) * 4);
    sVar4 = *(short *)(iVar5 + 0x16) + *(short *)(iVar7 + *(char *)(iVar5 + 1) * 4 + 2);
  }
  else {
    *(undefined2 *)(DAT_00009948 + DAT_00009a7e) =
         *(undefined2 *)(DAT_00009950 + *(char *)(DAT_00009948 + 1) * 4);
    sVar4 = *(short *)(iVar7 + *(char *)(iVar5 + 1) * 4 + 2);
  }
  *(short *)(DAT_00009a80 + iVar5) = sVar4;
  if (*(short *)(DAT_00009a7e + iVar5) < *(short *)(iVar5 + 0x10)) {
    *(undefined2 *)(iVar5 + 0x10) = *(undefined2 *)(iVar5 + DAT_00009a7e);
  }
  if (*(short *)(DAT_00009a80 + iVar5) < *(short *)(iVar5 + 0x14)) {
    *(undefined2 *)(iVar5 + 0x14) = *(undefined2 *)(iVar5 + DAT_00009a80);
  }
  iVar5 = DAT_00009948;
  iVar7 = *(short *)(DAT_00009948 + 0x18) + 1;
  cVar6 = *(char *)(DAT_00009948 + 1);
  if (((cVar6 == '\0') || (cVar6 == '\x06')) || (cVar6 == '\b')) {
    *(undefined2 *)(DAT_00009948 + 0x1a) = 0;
    *(undefined2 *)(iVar5 + 0x1c) = 0;
  }
  iVar1 = (int)*(short *)(iVar5 + 0x1a);
  cVar6 = '\x04';
  if (iVar1 < 0) {
    iVar1 = -iVar1;
    cVar6 = '\x02';
  }
  iVar2 = (int)*(short *)(iVar5 + 0x1c);
  cVar9 = '\x03';
  iVar8 = iVar2;
  if (iVar2 < 0) {
    iVar8 = -iVar2;
    cVar9 = '\x01';
  }
  if (iVar1 < DAT_0000993a) {
    cVar6 = '\0';
  }
  if (iVar8 < DAT_0000993a) {
    cVar9 = '\0';
  }
  if (((cVar6 != '\0') || (cVar9 != '\0')) && (iVar1 < iVar8)) {
    cVar6 = cVar9;
  }
  iVar1 = (int)DAT_0000993e;
  *(char *)(iVar5 + DAT_0000993c) = cVar6;
  uVar3 = (*DAT_0000994c)(iVar5,(int)DAT_00009940,iVar7,iVar1,iVar2);
  *(undefined2 *)(DAT_00009942 + iVar5) = uVar3;
  *(short *)(iVar5 + DAT_00009942 + -4) =
       (short)((int)(iVar7 + (uint)(iVar7 < 0)) >> 1) - *(short *)(iVar5 + DAT_00009942);
  uVar3 = (*DAT_0000994c)();
  *(undefined2 *)(DAT_00009944 + iVar5) = uVar3;
  *(short *)(iVar5 + DAT_00009944 + -4) =
       (short)((int)(iVar7 + extraout_r2 + (uint)(iVar7 < extraout_r2)) >> 1) -
       *(short *)(iVar5 + DAT_00009944);
  return;
}



void FUN_00009dac(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar1 = DAT_00009fb8;
  iVar5 = 0x40;
  puVar2 = DAT_00009fb8 + 2;
  puVar4 = DAT_00009fb8 + 1;
  do {
    puVar3 = puVar2;
    *puVar4 = puVar3;
    iVar5 = iVar5 + -1;
    puVar2 = puVar3 + 4;
    puVar4 = puVar3;
  } while (iVar5 != 0);
  *puVar3 = 0;
  *puVar1 = 0;
  return;
}



undefined4 FUN_00009e2e(int param_1,uint param_2,int param_3,short param_4)

{
  int *piVar1;
  
  piVar1 = DAT_00009fb8;
  do {
    piVar1 = (int *)*piVar1;
    if ((piVar1 == (int *)0x0) || ((param_2 & DAT_00009fbc) + param_3 <= (piVar1[2] & DAT_00009fbc))
       ) {
      return 0;
    }
  } while ((((piVar1[2] & DAT_00009fbc) != (param_2 & DAT_00009fbc)) ||
           (param_1 != *(short *)(piVar1 + 1))) || (param_4 != *(short *)((int)piVar1 + 6)));
  return 1;
}



undefined4 FUN_00009e7a(int param_1,uint param_2,int param_3,short param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar2 = DAT_00009fbc;
  puVar1 = DAT_00009fb8;
  param_2 = param_2 & DAT_00009fbc;
  puVar4 = DAT_00009fb8;
  while (puVar3 = puVar4, puVar4 = (undefined4 *)*puVar3, puVar4 != (undefined4 *)0x0) {
    uVar5 = puVar4[2] & uVar2;
    if (param_2 + param_3 <= uVar5) break;
    if (param_2 < puVar4[3] + uVar5) {
      if (((param_2 == uVar5) && (param_1 == *(short *)(puVar4 + 1))) &&
         (param_4 == *(short *)((int)puVar4 + 6))) {
        return 1;
      }
      *puVar3 = *puVar4;
      *puVar4 = puVar1[1];
      puVar1[1] = puVar4;
      puVar4 = puVar3;
    }
  }
  FUN_0000a030();
  return 0;
}



undefined4 FUN_00009ee2(int param_1,uint param_2,int param_3,short param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  uVar2 = DAT_00009fbc;
  puVar1 = DAT_00009fb8;
  uVar3 = param_2 & DAT_00009fbc;
  puVar7 = DAT_00009fb8;
  while (puVar6 = puVar7, puVar7 = (undefined4 *)*puVar6, puVar7 != (undefined4 *)0x0) {
    uVar4 = puVar7[2] & uVar2;
    if (uVar3 + param_3 <= uVar4) break;
    if (uVar3 < puVar7[3] + uVar4) {
      if (((uVar3 == uVar4) && (param_1 == *(short *)(puVar7 + 1))) &&
         (param_4 == *(short *)((int)puVar7 + 6))) {
        return 1;
      }
      *puVar6 = *puVar7;
      *puVar7 = puVar1[1];
      puVar1[1] = puVar7;
      puVar7 = puVar6;
    }
  }
  puVar5 = (undefined4 *)puVar1[1];
  if (puVar5 != (undefined4 *)0x0) {
    puVar1[1] = *puVar5;
    *puVar5 = puVar7;
    *(short *)(puVar5 + 1) = (short)param_1;
    *(short *)((int)puVar5 + 6) = param_4;
    puVar5[2] = param_2;
    puVar5[3] = param_3;
    *puVar6 = puVar5;
  }
  FUN_0000a030();
  return 0;
}



void FUN_00009f78(uint param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar2 = DAT_00009fbc;
  puVar1 = DAT_00009fb8;
  param_1 = param_1 & DAT_00009fbc;
  puVar3 = DAT_00009fb8;
  while ((puVar4 = puVar3, puVar3 = (undefined4 *)*puVar4, puVar3 != (undefined4 *)0x0 &&
         ((puVar3[2] & uVar2) < param_1 + param_2))) {
    if (param_1 < puVar3[3] + (puVar3[2] & uVar2)) {
      *puVar4 = *puVar3;
      *puVar3 = puVar1[1];
      puVar1[1] = puVar3;
      puVar3 = puVar4;
    }
  }
  FUN_0000a030();
  return;
}



void FUN_0000a030(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  if (*DAT_0000a1d4 != '\0') {
    puVar2 = (undefined4 *)*DAT_0000a1c8;
    (*DAT_0000a1d8)(0,2);
    *DAT_0000a1e0 = (short)PTR_LAB_0000a1dc;
    pcVar1 = DAT_0000a1ec;
    for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
      (*pcVar1)();
    }
                    // WARNING: Could not recover jumptable at 0x0000a09a. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_0000a1f4)(DAT_0000a1f0);
    return;
  }
  return;
}



undefined4 FUN_0000a184(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined uVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar4 = FUN_0000aba6();
  if (iVar4 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    iVar5 = FUN_00009ee2(*(undefined4 *)(iVar4 + 4),param_2,*(undefined4 *)(iVar4 + 0x10),param_3);
    puVar2 = DAT_0000a460;
    if (iVar5 == 0) {
      uVar1 = *DAT_0000a460;
      FUN_0000af88(param_1,0xc);
      pcVar3 = DAT_0000a464;
      *puVar2 = 1;
      *(undefined2 *)(iVar4 + 0x18) = 0;
      *(short *)(iVar4 + 0x1a) = (short)param_3;
      (*pcVar3)(*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc),param_2,
                *(undefined4 *)(iVar4 + 0x10));
      if ((param_3 & 0xffff) != 0) {
        (*DAT_0000a468)(param_2,param_3);
      }
      (*DAT_0000a46c)(*(undefined4 *)(iVar4 + 8));
      FUN_0000adfc(iVar4);
      *puVar2 = uVar1;
      if (*DAT_0000a470 != 0) {
        (*DAT_0000a474)(0xc,1);
        (*DAT_0000a478)();
      }
      uVar6 = 0;
    }
    else {
      FUN_0000af88(param_1,9);
      (*DAT_0000a208)(*(undefined4 *)(iVar4 + 8));
      (*DAT_0000a200)(*(undefined4 *)(iVar4 + 8));
      FUN_0000adfc(iVar4);
      uVar6 = 1;
    }
  }
  return uVar6;
}



int FUN_0000a48c(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uStack28;
  uint uStack24;
  uint uStack20;
  
  (*pcRam0000a5fc)(&uStack28,param_1,0xc);
  iVar2 = (int)*(short *)(DAT_0000a600 + 8);
  if (*(char *)(DAT_0000a600 + 6) == '\0') {
    iVar3 = 2;
    do {
      iVar4 = iVar2 + iVar3 >> 1;
      iVar5 = (iVar4 * 0x18 & 0xffffU) + DAT_0000a604;
      if (uStack28 < *(uint *)(iVar5 + 0xc)) {
LAB_0000a524:
        iVar2 = iVar4 + -1;
      }
      else {
        if (uStack28 <= *(uint *)(iVar5 + 0xc)) {
          if (uStack24 < *(uint *)(iVar5 + 0x10)) goto LAB_0000a524;
          if (uStack24 <= *(uint *)(iVar5 + 0x10)) {
            if (uStack20 < *(uint *)(iVar5 + 0x14)) goto LAB_0000a524;
            if (uStack20 <= *(uint *)(iVar5 + 0x14)) {
              return iVar4;
            }
          }
        }
        iVar3 = iVar4 + 1;
      }
    } while (iVar3 <= iVar2);
  }
  else {
    iVar3 = DAT_0000a604 + 0x30;
    iVar4 = 2;
    do {
      if (((*(uint *)(iVar3 + 0xc) == uStack28) && (*(uint *)(iVar3 + 0x10) == uStack24)) &&
         (*(uint *)(iVar3 + 0x14) == uStack20)) {
        return iVar4;
      }
      iVar3 = iVar3 + 0x18;
      bVar1 = iVar4 < iVar2;
      iVar4 = iVar4 + 1;
    } while (bVar1);
  }
  return 0;
}



int FUN_0000a540(void)

{
  int iVar1;
  
  iVar1 = FUN_0000a48c();
  if (iVar1 != 0) {
    return iVar1;
  }
  (*DAT_0000a608)();
  *DAT_0000a610 = (short)PTR_LAB_0000a60c;
  (*DAT_0000a614)(8,0xd);
  iVar1 = (*DAT_0000a61c)();
  Sleep_Standby();
  return iVar1;
}



void FUN_0000a870(void)

{
  int *piVar1;
  ushort *puVar2;
  
  piVar1 = DAT_0000a9cc;
  if (*DAT_0000a9cc != 0) {
    (*DAT_0000a9d0)(DAT_0000a9cc[1]);
    (*DAT_0000a9d4)(piVar1[1]);
    (*DAT_0000a9d8)(*piVar1);
    puVar2 = DAT_0000a9dc;
    *piVar1 = 0;
    if ((*puVar2 & 1) != 0) {
      *DAT_0000a9e0 = 2;
    }
  }
  return;
}



int FUN_0000aba6(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_1c;
  int iStack24;
  int aiStack20 [2];
  
  iVar1 = FUN_0000ae18();
  if ((iVar1 == 0) && (iVar1 = FUN_0000add6(), iVar1 != 0)) {
    uVar2 = (*DAT_0000ac3c)(param_1);
    (*DAT_0000ac40)(uVar2,3);
    (*DAT_0000ac44)(uVar2,0x32);
    (*DAT_0000ac48)(uVar2,&iStack24,&local_1c,aiStack20);
    *(undefined4 *)(iVar1 + 4) = param_1;
    *(undefined2 *)(iVar1 + 0x1a) = 0;
    *(undefined4 *)(iVar1 + 8) = uVar2;
    *(int *)(iVar1 + 0xc) = local_1c;
    *(int *)(iVar1 + 0x10) = (local_1c + -1) * iStack24 + aiStack20[0];
    *(undefined4 *)(iVar1 + 0x14) = 0;
  }
  return iVar1;
}



int FUN_0000ac60(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int local_30;
  byte local_2c [16];
  
  FUN_0000ad06();
  puVar1 = DAT_0000ad44;
  iVar6 = (int)DAT_0000ad3a;
  *DAT_0000ad44 = 1;
  puVar1[1] = iVar6;
  pcVar2 = DAT_0000ad4c;
  iVar6 = (int)DAT_0000ad3c;
  puVar1[2] = DAT_0000ad48;
  pcVar3 = DAT_0000ad50;
  local_30 = 0;
  do {
    iVar5 = (*DAT_0000ad60)(0x10,DAT_0000ad5c,puVar1);
    if (-1 < iVar5) {
      (*DAT_0000ad64)();
      (*DAT_0000ad68)(pcVar3,0);
      (*DAT_0000ad6c)(pcVar3,0);
      return iVar5;
    }
    local_30 = local_30 + 1;
    if (2 < local_30) {
      (*pcVar3)(0,1);
    }
    pcVar4 = DAT_0000ad58;
    *DAT_0000ad54 = 3;
    (*pcVar4)();
    iVar5 = iVar6;
    do {
      (*pcVar2)(local_2c);
      if ((local_2c[0] & 0xf) == 1) break;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  } while( true );
}



void FUN_0000ad06(void)

{
  bool bVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  piVar3 = DAT_0000ad7c;
  iVar7 = DAT_0000ad70;
  sVar2 = DAT_0000ad3e;
  bVar1 = false;
  iVar4 = *DAT_0000ad74;
  piVar6 = DAT_0000ad74;
  while( true ) {
    piVar5 = piVar6;
    if (piVar5 == DAT_0000ad7c) {
      bVar1 = true;
    }
    if (*(short *)(piVar5 + 7) != DAT_0000ad3e) break;
    piVar6 = (int *)((int)piVar5 + iVar4);
    iVar4 = *piVar6;
    if (iVar4 == 0) {
      *DAT_0000ad78 = DAT_0000ad74;
      *(undefined *)(iVar7 + 6) = 1;
      if (!bVar1) {
        iVar7 = *piVar3;
        piVar6 = piVar3;
        do {
          if (*(short *)(piVar6 + 7) != sVar2) {
            return;
          }
          piVar6 = (int *)((int)piVar6 + iVar7);
          iVar7 = *piVar6;
        } while (iVar7 != 0);
        *piVar5 = (int)piVar3 - (int)piVar5;
      }
      return;
    }
  }
  *DAT_0000ad78 = (int *)0x0;
  *(undefined *)(iVar7 + 6) = 0;
  return;
}



void FUN_0000adb8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar1 = DAT_0000aeb0;
  iVar5 = 0xf;
  puVar2 = (undefined4 *)(DAT_0000aeb0 + 0x34);
  puVar4 = (undefined4 *)(DAT_0000aeb0 + 0x30);
  do {
    puVar3 = puVar2;
    *puVar4 = puVar3;
    iVar5 = iVar5 + -1;
    puVar2 = puVar3 + 7;
    puVar4 = puVar3;
  } while (iVar5 != 0);
  *puVar3 = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  return;
}



undefined4 * FUN_0000add6(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = DAT_0000aeb0;
  puVar3 = *(undefined4 **)(DAT_0000aeb0 + 0x30);
  puVar4 = (undefined4 *)(DAT_0000aeb0 + 0x2c);
  if (puVar3 != (undefined4 *)0x0) {
    do {
      puVar2 = puVar4;
      puVar4 = (undefined4 *)*puVar2;
    } while (puVar4 != (undefined4 *)0x0);
    *puVar2 = puVar3;
    *(undefined4 *)(iVar1 + 0x30) = *puVar3;
    *puVar3 = 0;
  }
  return puVar3;
}



void FUN_0000adfc(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = DAT_0000aeb0;
  puVar3 = (undefined4 *)(DAT_0000aeb0 + 0x2c);
  do {
    puVar2 = puVar3;
    puVar3 = (undefined4 *)*puVar2;
  } while (puVar3 != param_1);
  *puVar2 = *param_1;
  *param_1 = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 **)(iVar1 + 0x30) = param_1;
  return;
}



undefined4 * FUN_0000ae18(int param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = (undefined4 *)*DAT_0000aeb4; (puVar1 != (undefined4 *)0x0 && (puVar1[1] != param_1))
      ; puVar1 = (undefined4 *)*puVar1) {
  }
  return puVar1;
}



void FUN_0000ae2e(undefined4 param_1,undefined param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = (*DAT_0000aeb8)();
  puVar1 = DAT_0000aebc;
  (*DAT_0000aec0)(uVar2);
  puVar1[2] = 2;
  *puVar1 = 2;
  *(char *)(puVar1 + 3) = (char)uVar2;
  *(char *)(puVar1 + 1) = (char)uVar2;
  *(undefined *)((int)puVar1 + 0xd) = 0;
  *(undefined *)((int)puVar1 + 5) = 0;
  *(undefined *)(puVar1 + 4) = param_2;
                    // WARNING: Could not recover jumptable at 0x0000ae6a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0000aec4)(puVar1);
  return;
}



void FUN_0000ae6e(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar3;
  
  uVar3 = (*DAT_0000aeb8)();
  puVar2 = DAT_0000aec8;
  (*DAT_0000aec0)(uVar3);
  UNRECOVERED_JUMPTABLE = DAT_0000aecc;
  *puVar2 = 2;
  iVar1 = DAT_0000aebc;
  *(char *)(puVar2 + 1) = (char)uVar3;
  *(undefined *)((int)puVar2 + 5) = 0;
  *(undefined *)(iVar1 + 0x10) = 0;
                    // WARNING: Could not recover jumptable at 0x0000aea0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(puVar2);
  return;
}



void FUN_0000aed0(void)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar2 = DAT_0000affc;
  uVar1 = DAT_0000aff2;
  DAT_0000affc[2] = 3;
  *puVar2 = 3;
  UNRECOVERED_JUMPTABLE = DAT_0000b000;
                    // WARNING: Could not recover jumptable at 0x0000aede. Too many branches
                    // WARNING: Treating indirect jump as call
  *(char *)(puVar2 + 4) = (char)uVar1;
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_0000aee2(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_28;
  int iStack36;
  
  puVar3 = DAT_0000b010;
  iVar2 = DAT_0000b00c;
  uVar1 = DAT_0000b008;
  iVar10 = *(int *)(DAT_0000b004 + 0xc);
  iVar9 = *(int *)(DAT_0000b004 + 0x10);
  iVar6 = *(int *)(DAT_0000b004 + 0x14);
  iVar7 = *(int *)(DAT_0000b004 + 0x18);
  iVar5 = (int)DAT_0000aff4;
  iVar8 = iVar6 << 2;
  *(undefined4 *)(DAT_0000b00c + 0x30) = DAT_0000b008;
  *(undefined4 *)(iVar2 + iVar5) = uVar1;
  iVar6 = iVar6 * 4;
  *puVar3 = uVar1;
  pcVar4 = DAT_0000b014;
  local_28 = (int)(iVar7 + (uint)(iVar7 < 0)) >> 1;
  iVar5 = (int)DAT_0000aff6;
  iStack36 = local_28;
  do {
    (*pcVar4)(iVar10,iVar9,iVar8);
    uVar1 = DAT_0000b018;
    iVar10 = iVar10 + iVar6;
    iStack36 = iStack36 + -1;
    iVar9 = iVar9 + iVar5;
  } while (iStack36 != 0);
  iVar7 = (int)DAT_0000aff4;
  *(undefined4 *)(iVar2 + 0x30) = DAT_0000b018;
  *(undefined4 *)(iVar2 + iVar7) = uVar1;
  puVar3 = DAT_0000b01c;
  *DAT_0000b010 = uVar1;
  uVar1 = DAT_0000b008;
  *(undefined4 *)(iVar2 + 0x38) = DAT_0000b008;
  *(undefined4 *)(iVar2 + iVar7 + 8) = uVar1;
  *puVar3 = uVar1;
  do {
    (*pcVar4)(iVar10,iVar9,iVar8);
    uVar1 = DAT_0000b018;
    iVar10 = iVar10 + iVar6;
    local_28 = local_28 + -1;
    iVar9 = iVar9 + iVar5;
  } while (local_28 != 0);
  *(undefined4 *)(iVar2 + 0x38) = DAT_0000b018;
  *(undefined4 *)(iVar2 + DAT_0000aff8) = uVar1;
  *DAT_0000b01c = uVar1;
  return;
}



uint FUN_0000af88(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  
  pcVar3 = DAT_0000b02c;
  iVar2 = DAT_0000b024;
  puVar1 = DAT_0000b020;
  if (*DAT_0000b020 != 0) {
    *DAT_0000b028 = (short)((param_2 & 0xf) << 0xc);
    (*pcVar3)(0xc,1);
    (*DAT_0000b034)();
  }
  if ((param_2 != 7) && (param_2 != 9)) {
    if (param_2 == 0xc) {
      *DAT_0000b038 = (param_1 * 0x18 & 0xffffU) + iVar2 + 0xc;
      return 0xc;
    }
    if (param_2 != 0xd) {
      return param_2;
    }
  }
  *DAT_0000b038 = (param_1 * 0x18 & 0xffffU) + iVar2 + 0xc;
  uVar4 = *puVar1;
  if ((uVar4 != 0) && (uVar4 = *puVar1, uVar4 != 0)) {
    (*DAT_0000b0ac)(0xc,1);
    uVar4 = (*DAT_0000b0b0)();
  }
  return uVar4;
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000b139(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0000b178(void)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  
  pcVar2 = DAT_0000b1e8;
  pcVar1 = _LAB_0000b1e4;
  iVar3 = 3;
  do {
    (*pcVar2)(0x12,iVar3);
    (*pcVar1)();
    (*pcVar2)(0x12,iVar3 + 1);
    (*pcVar1)();
    iVar3 = iVar3 + 2;
  } while (iVar3 < 0x13);
  return;
}



void FUN_0000b87a(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined uVar2;
  int iVar3;
  
  iVar1 = DAT_0000b924;
  iVar3 = *DAT_0000b910;
  if (*(char *)(iVar3 + 0x3e) == '\0') {
    *(undefined *)(DAT_0000b924 + 1) = *(undefined *)(param_1 + DAT_0000b928);
  }
  if ((*(char *)(iVar1 + 1) == '\b') && (param_1 != 10)) {
    *(undefined *)(iVar1 + 1) = *DAT_0000b91c;
    *(undefined *)(iVar3 + 0x3e) = 1;
  }
  *(undefined *)(iVar1 + 2) = 1;
  UNRECOVERED_JUMPTABLE = DAT_0000b92c;
  if (param_1 == 3) {
    uVar2 = 2;
  }
  else if (param_1 == 0x12) {
    uVar2 = 5;
  }
  else {
    uVar2 = 0;
  }
  *(undefined *)(iVar1 + 3) = uVar2;
  (*UNRECOVERED_JUMPTABLE)();
  (*DAT_0000b938)(iVar3,DAT_0000b934,PTR_LAB_0000b930,0);
  if (*(char *)(iVar3 + 0x3e) == '\0') {
    (*DAT_0000b93c)(iVar3);
    (*DAT_0000b940)(iVar3);
    (*DAT_0000b944)(iVar3);
    *(undefined *)(iVar3 + 0x3e) = 2;
  }
  else if (*(char *)(iVar3 + 0x3e) == '\x01') {
    (*DAT_0000ba3c)((int)*(char *)(iVar1 + 1));
    (*DAT_0000ba40)((int)*(char *)(iVar1 + 2));
    (*DAT_0000ba44)((int)*(char *)(iVar1 + 3));
  }
  UNRECOVERED_JUMPTABLE = DAT_0000ba48;
  *(undefined2 *)(iVar1 + 0x10) = *(undefined2 *)(iVar1 + DAT_0000ba36);
  *(undefined2 *)(iVar1 + 0x14) = *(undefined2 *)(iVar1 + DAT_0000ba38);
                    // WARNING: Could not recover jumptable at 0x0000b974. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(iVar3);
  return;
}



void FUN_0000bcc2(void)

{
  code *pcVar1;
  int in_r0;
  int iVar2;
  int in_r2;
  int in_r3;
  int unaff_r13;
  
  *(int *)(in_r2 + in_r0) = in_r3 + 1;
  pcVar1 = DAT_0000bd8c;
  *(int *)(unaff_r13 + DAT_0000bd6c) = *(int *)(unaff_r13 + DAT_0000bd6c) + 1;
  iVar2 = (*pcVar1)();
  if ((iVar2 != 0) && ((*DAT_0000bd90 & 4) != 0)) {
    FUN_0000bec4();
    (*DAT_0000bd94)();
                    // WARNING: Could not recover jumptable at 0x0000bcf0. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_0000bd98)();
    return;
  }
  return;
}



int * FUN_0000bda8(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  code *pcVar1;
  int **ppiVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  
  pcVar1 = DAT_0000bea0;
  piVar7 = *DAT_0000be9c;
  *(undefined2 *)(piVar7 + 0xb) = param_1;
  ppiVar2 = DAT_0000bea4;
  *(undefined2 *)((int)piVar7 + 0x2e) = param_2;
  *(undefined2 *)(piVar7 + 0xc) = param_3;
  *(undefined2 *)((int)piVar7 + 0x32) = param_4;
  piVar3 = piVar7;
  uVar5 = DAT_0000bea8;
  if ((*ppiVar2 == (int *)0x0) || (piVar3 = *ppiVar2, uVar5 = DAT_0000beac, *piVar7 == 0)) {
    (*pcVar1)(piVar3,uVar5,0);
  }
  else {
    if (piVar7[1] == 0) {
      iVar6 = 0;
      iVar4 = *piVar7;
      uVar5 = DAT_0000beb0;
    }
    else {
      iVar6 = (int)DAT_0000be9a;
      iVar4 = piVar7[1];
      uVar5 = DAT_0000beb4;
    }
    (*pcVar1)(iVar4,uVar5,iVar6);
  }
  return *DAT_0000bea4;
}



void FUN_0000be4a(int param_1,undefined2 param_2,undefined2 param_3)

{
  int *piVar1;
  
  piVar1 = *DAT_0000be9c;
  if (param_1 == *(short *)(piVar1 + 0xb)) {
    if (piVar1[2] != 0) {
      *(uint *)(piVar1[2] + -4) = *(uint *)(piVar1[2] + -4) | 1;
    }
  }
  else {
    *(undefined2 *)((int)piVar1 + 0x2e) = 0xffff;
    if (*piVar1 != 0) {
      *(uint *)(*piVar1 + -4) = *(uint *)(*piVar1 + -4) | 1;
    }
  }
  *(short *)((int)piVar1 + 0x36) = (short)param_1;
  *(undefined2 *)(piVar1 + 0xe) = param_2;
  *(undefined2 *)((int)piVar1 + 0x3a) = param_3;
  *(undefined *)(piVar1 + 0xf) = 5;
  return;
}



void FUN_0000bec4(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *DAT_0000bfc8;
  iVar2 = *DAT_0000bfc4;
  if (iVar1 != 0) {
    *(uint *)(iVar1 + -4) = *(uint *)(iVar1 + -4) | 1;
  }
  *(undefined *)(iVar2 + 0x3c) = 7;
  *(undefined *)(iVar2 + 0x3d) = 0xff;
  return;
}



void FUN_0000beec(int param_1)

{
  int iVar1;
  
  if (*(short *)(*DAT_0000bfc4 + 0x2c) == param_1) {
    return;
  }
  if (param_1 == 3) {
    iVar1 = 0x56;
  }
  else if (param_1 == 6) {
    iVar1 = 99;
  }
  else {
    if (param_1 != 0x11) {
      return;
    }
    iVar1 = 0x6d;
  }
                    // WARNING: Could not recover jumptable at 0x0000bf24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0000bfd0)(DAT_0000bfcc,(int)DAT_0000bfbc,6,&DAT_ffffffb0 + iVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0000c0b6(int *param_1)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *local_24;
  
  pcVar3 = DAT_0000c124;
  pcVar2 = DAT_0000c120;
  pcVar1 = DAT_0000c11c;
  local_24 = (undefined4 *)((int)_LAB_0000c108 + *(int *)(*DAT_0000c10c + 8));
  puVar6 = (undefined4 *)(*(int *)(*DAT_0000c10c + 8) + 0x34);
  for (; *param_1 != -1; param_1 = param_1 + 2) {
    if (*param_1 == 0) {
      *puVar6 = 0;
    }
    else {
      iVar4 = (*pcVar2)(*param_1);
      if (iVar4 < 0) {
        (*pcVar1)();
      }
      uVar5 = (*pcVar3)(iVar4);
      *puVar6 = uVar5;
    }
    puVar6 = puVar6 + 1;
    if (param_1[1] == 0) {
      *local_24 = 0;
    }
    else {
      iVar4 = (*pcVar2)(param_1[1]);
      if (iVar4 < 0) {
        (*pcVar1)();
      }
      uVar5 = (*pcVar3)(iVar4);
      *local_24 = uVar5;
    }
    local_24 = local_24 + 1;
  }
  *puVar6 = 0xffffffff;
  return;
}



void FUN_0000c372(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*DAT_0000c3b8 + 8);
  param_1 = param_1 | DAT_0000c3c8;
  *(uint *)(iVar1 + 0x20) = param_1;
  *(uint *)(iVar1 + 0x18) = param_1;
  *(uint *)(iVar1 + 0x24) = param_1 + param_2;
  return;
}



uint FUN_0000c7e0(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 100;
  uVar1 = *(uint *)(param_1 + 4);
  piVar3 = param_2 + 1;
  if (uVar1 == 0) {
    *piVar3 = 0;
    *param_2 = 0;
  }
  else {
    uVar1 = (*DAT_0000c908)();
    uVar2 = (uint)DAT_0000c8f8;
    *param_2 = (int)uVar1 >> 8;
    *piVar3 = (int)((uVar1 & uVar2) * 10) >> 8;
  }
  if (iVar4 <= *param_2) {
    *param_2 = iVar4;
    *piVar3 = 0;
  }
  return uVar1;
}



void FUN_0000c88c(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = (int)DAT_0000c8fc;
  *param_1 = 0;
  param_1[1] = iVar3;
  iVar1 = DAT_0000c920;
  iVar3 = DAT_0000c91c;
  uVar4 = (uint)DAT_0000c8fe;
  iVar8 = (int)DAT_0000c900;
  iVar7 = (int)DAT_0000c902;
  while ((int)uVar4 <= iVar8) {
    uVar2 = uVar4;
    if (iVar7 <= (int)uVar4) {
      uVar2 = (int)DAT_0000c904 + uVar4;
    }
    uVar6 = uVar4;
    if (iVar7 <= (int)uVar4) {
      uVar6 = (int)DAT_0000c904 + uVar4;
    }
    uVar5 = uVar4 + 1;
    if ((*(byte *)(iVar3 + (uVar6 & 7)) & *(byte *)((uVar2 >> 3) + iVar1)) != 0) {
      *param_1 = *param_1 + 1;
    }
    uVar2 = uVar5;
    if (iVar7 <= (int)uVar5) {
      uVar2 = (int)DAT_0000c904 + uVar5;
    }
    if (iVar7 <= (int)uVar5) {
      uVar5 = (int)DAT_0000ca04 + uVar5;
    }
    uVar6 = uVar4 + 2;
    if ((*(byte *)(iVar3 + (uVar5 & 7)) & *(byte *)((uVar2 >> 3) + iVar1)) != 0) {
      *param_1 = *param_1 + 1;
    }
    uVar2 = uVar6;
    if (iVar7 <= (int)uVar6) {
      uVar2 = (int)DAT_0000ca04 + uVar6;
    }
    if (iVar7 <= (int)uVar6) {
      uVar6 = (int)DAT_0000ca04 + uVar6;
    }
    uVar5 = uVar4 + 3;
    if ((*(byte *)(iVar3 + (uVar6 & 7)) & *(byte *)((uVar2 >> 3) + iVar1)) != 0) {
      *param_1 = *param_1 + 1;
    }
    uVar2 = uVar5;
    if (iVar7 <= (int)uVar5) {
      uVar2 = (int)DAT_0000ca04 + uVar5;
    }
    if (iVar7 <= (int)uVar5) {
      uVar5 = (int)DAT_0000ca04 + uVar5;
    }
    uVar4 = uVar4 + 4;
    if ((*(byte *)(iVar3 + (uVar5 & 7)) & *(byte *)((uVar2 >> 3) + iVar1)) != 0) {
      *param_1 = *param_1 + 1;
    }
  }
  iVar8 = (int)DAT_0000ca06;
  while ((int)uVar4 <= iVar8) {
    uVar2 = uVar4;
    if (iVar7 <= (int)uVar4) {
      uVar2 = (int)DAT_0000ca04 + uVar4;
    }
    uVar6 = uVar4;
    if (iVar7 <= (int)uVar4) {
      uVar6 = (int)DAT_0000ca04 + uVar4;
    }
    uVar4 = uVar4 + 1;
    if ((*(byte *)(iVar3 + (uVar6 & 7)) & *(byte *)((uVar2 >> 3) + iVar1)) != 0) {
      *param_1 = *param_1 + 1;
    }
  }
  return;
}



void FUN_0000ca08(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  iVar2 = (int)DAT_0000cad8;
  *param_1 = 0;
  param_1[1] = iVar2;
  iVar1 = DAT_0000cae4;
  iVar2 = DAT_0000cae0;
  uVar7 = (uint)DAT_0000cada;
  iVar8 = (int)DAT_0000cadc;
  uVar6 = uVar7;
  while ((int)uVar6 <= iVar8) {
    uVar3 = uVar6;
    if ((int)uVar7 <= (int)uVar6) {
      uVar3 = (int)DAT_0000cade + uVar6;
    }
    uVar5 = uVar6;
    if ((int)uVar7 <= (int)uVar6) {
      uVar5 = (int)DAT_0000cade + uVar6;
    }
    uVar4 = uVar6 + 1;
    if ((*(byte *)(iVar2 + (uVar5 & 7)) & *(byte *)((uVar3 >> 3) + iVar1)) != 0) {
      *param_1 = *param_1 + 1;
    }
    uVar3 = uVar4;
    if ((int)uVar7 <= (int)uVar4) {
      uVar3 = (int)DAT_0000cade + uVar4;
    }
    if ((int)uVar7 <= (int)uVar4) {
      uVar4 = (int)DAT_0000cade + uVar4;
    }
    uVar5 = uVar6 + 2;
    if ((*(byte *)(iVar2 + (uVar4 & 7)) & *(byte *)((uVar3 >> 3) + iVar1)) != 0) {
      *param_1 = *param_1 + 1;
    }
    uVar3 = uVar5;
    if ((int)uVar7 <= (int)uVar5) {
      uVar3 = (int)DAT_0000cade + uVar5;
    }
    if ((int)uVar7 <= (int)uVar5) {
      uVar5 = (int)DAT_0000cade + uVar5;
    }
    uVar4 = uVar6 + 3;
    if ((*(byte *)(iVar2 + (uVar5 & 7)) & *(byte *)((uVar3 >> 3) + iVar1)) != 0) {
      *param_1 = *param_1 + 1;
    }
    uVar3 = uVar4;
    if ((int)uVar7 <= (int)uVar4) {
      uVar3 = (int)DAT_0000cade + uVar4;
    }
    if ((int)uVar7 <= (int)uVar4) {
      uVar4 = (int)DAT_0000cbaa + uVar4;
    }
    uVar6 = uVar6 + 4;
    if ((*(byte *)(iVar2 + (uVar4 & 7)) & *(byte *)((uVar3 >> 3) + iVar1)) != 0) {
      *param_1 = *param_1 + 1;
    }
  }
  iVar8 = (int)DAT_0000cbac;
  while ((int)uVar6 <= iVar8) {
    uVar3 = uVar6;
    if ((int)uVar7 <= (int)uVar6) {
      uVar3 = (int)DAT_0000cbaa + uVar6;
    }
    uVar5 = uVar6;
    if ((int)uVar7 <= (int)uVar6) {
      uVar5 = (int)DAT_0000cbaa + uVar6;
    }
    uVar6 = uVar6 + 1;
    if ((*(byte *)(iVar2 + (uVar5 & 7)) & *(byte *)((uVar3 >> 3) + iVar1)) != 0) {
      *param_1 = *param_1 + 1;
    }
  }
  return;
}



void FUN_0000d270(void)

{
  uint *in_r1;
  undefined2 *in_r2;
  
  *in_r2 = (short)(*in_r1 >> 4);
  in_r2[1] = (short)(in_r1[1] >> 4);
  in_r2[2] = (short)(in_r1[2] >> 4);
  return;
}



undefined4
FUN_0000d4cc(undefined2 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  int in_r3;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint in_sr;
  int iVar5;
  int iVar6;
  int iVar7;
  
  do {
    iVar5 = (int)DAT_0000d6ec._2_2_ * (int)(short)*param_2;
    if (((byte)(in_sr >> 1) & 1) == 1) {
      if (iVar5 < 0) {
        if (-1 < iVar5) {
          if (-1 < iVar5 == true) {
            iVar5 = -0x80000000;
          }
        }
        else {
          iVar5 = 0x7fffffff;
        }
      }
    }
    else {
      iVar5 = iVar5 + (uint)(iVar5 < 0);
    }
    iVar6 = (int)DAT_0000d6f0._0_2_ * (int)(short)*param_3;
    cVar1 = (-1 < iVar6) + (iVar5 < 0);
    iVar6 = iVar5 + iVar6;
    if (((byte)(in_sr >> 1) & 1) == 1) {
      if ((char)((iVar6 < 0) + (iVar5 < 0)) == '\x01') {
        if (cVar1 == '\0') {
          iVar6 = 0x7fffffff;
        }
        else if (cVar1 == '\x02') {
          iVar6 = -0x80000000;
        }
      }
    }
    else {
      iVar6 = iVar6 + (uint)(iVar6 < iVar5);
    }
    iVar5 = (int)DAT_0000d6f0._2_2_ * (int)(short)*param_4;
    cVar1 = (-1 < iVar5) + (iVar6 < 0);
    iVar5 = iVar6 + iVar5;
    if (((byte)(in_sr >> 1) & 1) == 1) {
      if ((char)((iVar5 < 0) + (iVar6 < 0)) == '\x01') {
        if (cVar1 == '\0') {
          iVar5 = 0x7fffffff;
        }
        else if (cVar1 == '\x02') {
          iVar5 = 0;
        }
      }
    }
    else {
      iVar5 = iVar5 + (uint)(iVar5 < iVar6);
    }
    in_r3 = in_r3 + -1;
    puVar2 = param_2 + 1;
    iVar6 = (int)DAT_0000d6ec._2_2_ * (int)(short)*(undefined4 *)((int)param_2 + 2);
    if (((byte)(in_sr >> 1) & 1) == 1) {
      if (iVar6 < 0) {
        if (-1 < iVar6) {
          if (-1 < iVar6 == true) {
            iVar6 = -0x80000000;
          }
        }
        else {
          iVar6 = 0x7fffffff;
        }
      }
    }
    else {
      iVar6 = iVar6 + (uint)(iVar6 < 0);
    }
    puVar3 = param_3 + 1;
    iVar7 = (int)DAT_0000d6f0._0_2_ * (int)(short)*(undefined4 *)((int)param_3 + 2);
    cVar1 = (-1 < iVar7) + (iVar6 < 0);
    iVar7 = iVar6 + iVar7;
    if (((byte)(in_sr >> 1) & 1) == 1) {
      if ((char)((iVar7 < 0) + (iVar6 < 0)) == '\x01') {
        if (cVar1 == '\0') {
          iVar7 = 0x7fffffff;
        }
        else if (cVar1 == '\x02') {
          iVar7 = -0x80000000;
        }
      }
    }
    else {
      iVar7 = iVar7 + (uint)(iVar7 < iVar6);
    }
    puVar4 = param_4 + 1;
    iVar6 = (int)DAT_0000d6f0._2_2_ * (int)(short)*(undefined4 *)((int)param_4 + 2);
    cVar1 = (-1 < iVar6) + (iVar7 < 0);
    iVar6 = iVar7 + iVar6;
    if (((byte)(in_sr >> 1) & 1) == 1) {
      if ((char)((iVar6 < 0) + (iVar7 < 0)) == '\x01') {
        if (cVar1 == '\0') {
          iVar6 = 0x7fffffff;
        }
        else if (cVar1 == '\x02') {
          iVar6 = 0;
        }
      }
    }
    else {
      iVar6 = iVar6 + (uint)(iVar6 < iVar7);
    }
    *param_1 = (short)((uint)(iVar5 << 2) >> 0x10);
    param_2 = (undefined4 *)((int)param_2 + 6);
    iVar5 = (int)DAT_0000d6ec._2_2_ * (int)(short)*puVar2;
    if (((byte)(in_sr >> 1) & 1) == 1) {
      if (iVar5 < 0) {
        if (-1 < iVar5) {
          if (-1 < iVar5 == true) {
            iVar5 = -0x80000000;
          }
        }
        else {
          iVar5 = 0x7fffffff;
        }
      }
    }
    else {
      iVar5 = iVar5 + (uint)(iVar5 < 0);
    }
    param_3 = (undefined4 *)((int)param_3 + 6);
    iVar7 = (int)DAT_0000d6f0._0_2_ * (int)(short)*puVar3;
    cVar1 = (-1 < iVar7) + (iVar5 < 0);
    iVar7 = iVar5 + iVar7;
    if (((byte)(in_sr >> 1) & 1) == 1) {
      if ((char)((iVar7 < 0) + (iVar5 < 0)) == '\x01') {
        if (cVar1 == '\0') {
          iVar7 = 0x7fffffff;
        }
        else if (cVar1 == '\x02') {
          iVar7 = -0x80000000;
        }
      }
    }
    else {
      iVar7 = iVar7 + (uint)(iVar7 < iVar5);
    }
    param_4 = (undefined4 *)((int)param_4 + 6);
    iVar5 = (int)DAT_0000d6f0._2_2_ * (int)(short)*puVar4;
    cVar1 = (-1 < iVar5) + (iVar7 < 0);
    iVar5 = iVar7 + iVar5;
    if (((byte)(in_sr >> 1) & 1) == 1) {
      if ((char)((iVar5 < 0) + (iVar7 < 0)) == '\x01') {
        if (cVar1 == '\0') {
          iVar5 = 0x7fffffff;
        }
        else if (cVar1 == '\x02') {
          iVar5 = 0;
        }
      }
    }
    else {
      iVar5 = iVar5 + (uint)(iVar5 < iVar7);
    }
    param_1[1] = (short)((uint)(iVar6 << 2) >> 0x10);
    param_1[2] = (short)((uint)(iVar5 << 2) >> 0x10);
    param_1 = param_1 + 3;
    in_sr = in_sr & 0xfffffffe;
  } while (in_r3 != 0);
  return 0xd6f2;
}



undefined4 * FUN_0000d638(undefined2 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  int in_r3;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint in_sr;
  int iVar4;
  int iVar5;
  int iVar6;
  
  do {
    iVar4 = (int)DAT_0000d6ec._2_2_ * (int)(short)*param_2;
    if (((byte)(in_sr >> 1) & 1) == 1) {
      if (iVar4 < 0) {
        if (-1 < iVar4) {
          if (-1 < iVar4 == true) {
            iVar4 = -0x80000000;
          }
        }
        else {
          iVar4 = 0x7fffffff;
        }
      }
    }
    else {
      iVar4 = iVar4 + (uint)(iVar4 < 0);
    }
    iVar5 = (int)DAT_0000d6f0._0_2_ * (int)(short)*param_3;
    cVar1 = (-1 < iVar5) + (iVar4 < 0);
    iVar5 = iVar4 + iVar5;
    if (((byte)(in_sr >> 1) & 1) == 1) {
      if ((char)((iVar5 < 0) + (iVar4 < 0)) == '\x01') {
        if (cVar1 == '\0') {
          iVar5 = 0x7fffffff;
        }
        else if (cVar1 == '\x02') {
          iVar5 = 0;
        }
      }
    }
    else {
      iVar5 = iVar5 + (uint)(iVar5 < iVar4);
    }
    in_r3 = in_r3 + -1;
    puVar2 = param_2 + 1;
    iVar4 = (int)DAT_0000d6ec._2_2_ * (int)(short)*(undefined4 *)((int)param_2 + 2);
    if (((byte)(in_sr >> 1) & 1) == 1) {
      if (iVar4 < 0) {
        if (-1 < iVar4) {
          if (-1 < iVar4 == true) {
            iVar4 = -0x80000000;
          }
        }
        else {
          iVar4 = 0x7fffffff;
        }
      }
    }
    else {
      iVar4 = iVar4 + (uint)(iVar4 < 0);
    }
    puVar3 = param_3 + 1;
    iVar6 = (int)DAT_0000d6f0._0_2_ * (int)(short)*(undefined4 *)((int)param_3 + 2);
    cVar1 = (-1 < iVar6) + (iVar4 < 0);
    iVar6 = iVar4 + iVar6;
    if (((byte)(in_sr >> 1) & 1) == 1) {
      if ((char)((iVar6 < 0) + (iVar4 < 0)) == '\x01') {
        if (cVar1 == '\0') {
          iVar6 = 0x7fffffff;
        }
        else if (cVar1 == '\x02') {
          iVar6 = 0;
        }
      }
    }
    else {
      iVar6 = iVar6 + (uint)(iVar6 < iVar4);
    }
    *param_1 = (short)((uint)(iVar5 << 2) >> 0x10);
    param_2 = (undefined4 *)((int)param_2 + 6);
    iVar4 = (int)DAT_0000d6ec._2_2_ * (int)(short)*puVar2;
    if (((byte)(in_sr >> 1) & 1) == 1) {
      if (iVar4 < 0) {
        if (-1 < iVar4) {
          if (-1 < iVar4 == true) {
            iVar4 = -0x80000000;
          }
        }
        else {
          iVar4 = 0x7fffffff;
        }
      }
    }
    else {
      iVar4 = iVar4 + (uint)(iVar4 < 0);
    }
    param_3 = (undefined4 *)((int)param_3 + 6);
    iVar5 = (int)DAT_0000d6f0._0_2_ * (int)(short)*puVar3;
    cVar1 = (-1 < iVar5) + (iVar4 < 0);
    iVar5 = iVar4 + iVar5;
    if (((byte)(in_sr >> 1) & 1) == 1) {
      if ((char)((iVar5 < 0) + (iVar4 < 0)) == '\x01') {
        if (cVar1 == '\0') {
          iVar5 = 0x7fffffff;
        }
        else if (cVar1 == '\x02') {
          iVar5 = 0;
        }
      }
    }
    else {
      iVar5 = iVar5 + (uint)(iVar5 < iVar4);
    }
    param_1[1] = (short)((uint)(iVar6 << 2) >> 0x10);
    param_1[2] = (short)((uint)(iVar5 << 2) >> 0x10);
    param_1 = param_1 + 3;
    in_sr = in_sr & 0xfffffffe;
  } while (in_r3 != 0);
  return &DAT_0000d6f0;
}



void FUN_0000d6f4(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined auStack72 [12];
  int iStack60;
  int iStack44;
  int iStack28;
  
  pcVar2 = DAT_0000d99c;
  uVar1 = DAT_0000d998;
  uVar4 = *param_4 - param_1[7];
  if ((DAT_0000d998 & uVar4) == 0) {
    uVar4 = DAT_0000d9a4 & uVar4;
  }
  else {
    uVar4 = DAT_0000d9a0 | uVar4;
  }
  iVar3 = (*DAT_0000d99c)(uVar4,param_1[0x11]);
  param_1[0xd] = param_1[0xd] + iVar3;
  uVar4 = param_4[1] - param_1[8];
  if ((uVar1 & uVar4) == 0) {
    uVar4 = DAT_0000d9a4 & uVar4;
  }
  else {
    uVar4 = DAT_0000d9a0 | uVar4;
  }
  iVar3 = (*pcVar2)(uVar4,param_1[0x12]);
  param_1[0xe] = param_1[0xe] + iVar3;
  uVar4 = param_4[2] - param_1[9];
  if ((uVar1 & uVar4) == 0) {
    uVar4 = DAT_0000d9a4 & uVar4;
  }
  else {
    uVar4 = DAT_0000d9a0 | uVar4;
  }
  iVar3 = (*pcVar2)(uVar4,param_1[0x13]);
  param_1[0xf] = param_1[0xf] + iVar3;
  iVar3 = (*pcVar2)(param_1[10],param_1[0x14]);
  param_1[0xd] = param_1[0xd] - iVar3;
  iVar3 = (*pcVar2)(param_1[0xb],param_1[0x14]);
  param_1[0xe] = param_1[0xe] - iVar3;
  iVar3 = (*pcVar2)(param_1[0xc],param_1[0x14]);
  param_1[0xf] = param_1[0xf] - iVar3;
  param_1[10] = param_1[10] + param_1[0xd];
  param_1[0xb] = param_1[0xb] + param_1[0xe];
  param_1[0xc] = param_1[0xc] + param_1[0xf];
  param_1[7] = param_1[7] + param_1[10];
  param_1[8] = param_1[8] + param_1[0xb];
  param_1[9] = param_1[9] + param_1[0xc];
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  pcVar2 = DAT_0000d9a8;
  param_1[0xd] = 0;
  (*pcVar2)(auStack72);
  (*DAT_0000d9ac)(param_2,auStack72);
  (*DAT_0000d9b0)(param_3,auStack72);
  (*DAT_0000d9ac)(param_1 + 4,auStack72);
  param_1[1] = iStack60;
  param_1[2] = iStack44;
  param_1[3] = iStack28;
  if (*param_1 != 0) {
    FUN_0000d6f4(*param_1,param_1 + 1,param_1 + 7,param_1 + 7);
  }
  return;
}



void FUN_0000d846(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined auStack72 [12];
  int iStack60;
  int iStack44;
  int iStack28;
  
  pcVar2 = DAT_0000d99c;
  uVar1 = DAT_0000d998;
  uVar4 = *param_4 - param_1[7];
  if ((DAT_0000d998 & uVar4) == 0) {
    uVar4 = DAT_0000d9a4 & uVar4;
  }
  else {
    uVar4 = DAT_0000d9a0 | uVar4;
  }
  iVar3 = (*DAT_0000d99c)(uVar4,param_1[0x11]);
  param_1[0xd] = param_1[0xd] + iVar3;
  uVar4 = param_4[1] - param_1[8];
  if ((uVar1 & uVar4) == 0) {
    uVar4 = DAT_0000d9a4 & uVar4;
  }
  else {
    uVar4 = DAT_0000d9a0 | uVar4;
  }
  iVar3 = (*pcVar2)(uVar4,param_1[0x12]);
  param_1[0xe] = param_1[0xe] + iVar3;
  uVar4 = param_4[2] - param_1[9];
  if ((uVar1 & uVar4) == 0) {
    uVar4 = DAT_0000d9a4 & uVar4;
  }
  else {
    uVar4 = DAT_0000d9a0 | uVar4;
  }
  iVar3 = (*pcVar2)(uVar4,param_1[0x13]);
  param_1[0xf] = param_1[0xf] + iVar3;
  iVar3 = (*pcVar2)(param_1[10],param_1[0x14]);
  param_1[0xd] = param_1[0xd] - iVar3;
  iVar3 = (*pcVar2)(param_1[0xb],param_1[0x14]);
  param_1[0xe] = param_1[0xe] - iVar3;
  iVar3 = (*pcVar2)(param_1[0xc],param_1[0x14]);
  param_1[0xf] = param_1[0xf] - iVar3;
  param_1[10] = param_1[10] + param_1[0xd];
  param_1[0xb] = param_1[0xb] + param_1[0xe];
  param_1[0xc] = param_1[0xc] + param_1[0xf];
  param_1[7] = param_1[7] + param_1[10];
  param_1[8] = param_1[8] + param_1[0xb];
  param_1[9] = param_1[9] + param_1[0xc];
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  pcVar2 = DAT_0000d9a8;
  param_1[0xd] = 0;
  (*pcVar2)(auStack72);
  (*DAT_0000d9ac)(param_2,auStack72);
  (*DAT_0000d9b4)(param_3,auStack72);
  (*DAT_0000d9ac)(param_1 + 4,auStack72);
  param_1[1] = iStack60;
  param_1[2] = iStack44;
  param_1[3] = iStack28;
  if (*param_1 != 0) {
    FUN_0000d846(*param_1,param_1 + 1,param_1 + 7,param_1 + 7);
  }
  return;
}



void FUN_0000daf0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_0000dc54;
  uVar1 = DAT_0000dc50;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = DAT_0000dc58;
  param_1[0xc] = 0;
  return;
}



void FUN_0000db14(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return;
}



void FUN_0000dc16(int param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 0x40) = *param_2;
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 8);
  return;
}



void FUN_0000e000(int param_1,int *param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  pcVar2 = DAT_0000e248;
  pcVar1 = DAT_0000e244;
  if (((param_2 != (int *)0x0) && (param_2[2] != 0)) && (*(int *)(param_2[2] + 0x14) != 0)) {
    (*DAT_0000e244)();
    (*pcVar2)(param_2 + 3);
    pcVar3 = DAT_0000e250;
    iVar6 = *(int *)(*DAT_0000e24c + 0x2c);
    if ((*(int *)(param_1 + 0x24) - *DAT_0000e254 <= iVar6) &&
       (iVar6 <= *(int *)(param_1 + 0x28) + *DAT_0000e254)) {
      iVar5 = *(int *)(*DAT_0000e24c + 0xc);
      iVar4 = (*DAT_0000e258)(iVar6,*(undefined4 *)(param_1 + 0x34));
      if ((iVar4 - *(int *)(param_1 + 0x54) <= iVar5) &&
         (iVar6 = (*DAT_0000e258)(iVar6,*(undefined4 *)(param_1 + 0x3c)),
         iVar5 <= iVar6 + *(int *)(param_1 + 0x58))) {
        for (piVar7 = *(int **)(param_2[2] + 0x14); *piVar7 != 0; piVar7 = piVar7 + 4) {
          (*pcVar1)();
          (*pcVar2)(piVar7 + 1);
          iVar6 = FUN_0000e0ce(param_1,*(undefined4 *)(*param_2 + *piVar7));
          if (iVar6 != -1) {
            if (iVar6 == 0) {
              *(undefined4 *)(param_1 + 0x10) = 0;
            }
            else {
              *(undefined4 *)(param_1 + 0x10) = 1;
              *(int *)(param_1 + 0x14) = iVar6;
            }
          }
          (*pcVar3)();
        }
      }
    }
    (*pcVar3)();
  }
  return;
}



undefined4 FUN_0000e0ce(int param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  pcVar2 = DAT_0000e258;
  piVar1 = DAT_0000e24c;
  iVar7 = *param_2;
  iVar8 = *(int *)(*DAT_0000e24c + 0x2c);
  if ((*(int *)(param_1 + 0x24) - iVar7 <= iVar8) && (iVar8 <= *(int *)(param_1 + 0x28) + iVar7)) {
    iVar6 = *(int *)(*DAT_0000e24c + 0xc);
    iVar3 = (*DAT_0000e258)(iVar8,*(undefined4 *)(param_1 + 0x34));
    iVar4 = (*pcVar2)(iVar7,*(undefined4 *)(param_1 + 0x38));
    if (iVar3 - iVar4 <= iVar6) {
      iVar3 = (*pcVar2)(iVar8,*(undefined4 *)(param_1 + 0x3c));
      iVar4 = (*pcVar2)(iVar7,*(undefined4 *)(param_1 + 0x40));
      if (iVar6 <= iVar3 + iVar4) {
        iVar6 = *(int *)(*piVar1 + 0x1c);
        iVar3 = (*pcVar2)(iVar8,*(undefined4 *)(param_1 + 0x44));
        iVar4 = (*pcVar2)(iVar7,*(undefined4 *)(param_1 + 0x48));
        if (iVar3 - iVar4 <= iVar6) {
          iVar8 = (*pcVar2)(iVar8,*(undefined4 *)(param_1 + 0x4c));
          iVar7 = (*pcVar2)(iVar7,*(undefined4 *)(param_1 + 0x50));
          if (iVar6 <= iVar8 + iVar7) {
                    // WARNING: Could not recover jumptable at 0x0000e17e. Too many branches
                    // WARNING: Treating indirect jump as call
            uVar5 = (*DAT_0000e25c)(param_2,*piVar1,param_1 + 0x14);
            return uVar5;
          }
        }
      }
    }
  }
  return 0xffffffff;
}



void FUN_0000e19c(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_38;
  undefined4 uStack52;
  int iStack48;
  int iStack44;
  int iStack40;
  undefined4 uStack36;
  undefined4 uStack32;
  int iStack28;
  
  iVar4 = *DAT_0000e24c;
  uStack36 = *(undefined4 *)(iVar4 + 4);
  uStack32 = *(undefined4 *)(iVar4 + 0x14);
  iStack28 = *(int *)(iVar4 + 0x24);
  local_38 = (*DAT_0000e264)();
  uStack52 = (*DAT_0000e264)();
  iVar2 = (*DAT_0000e268)(&uStack36,&local_38);
  pcVar1 = DAT_0000e258;
  iVar2 = iStack28 + iVar2;
  if (iVar2 < 0) {
    iStack48 = (*DAT_0000e258)(param_2,uStack36);
    iStack48 = iStack48 + *(int *)(iVar4 + 0xc);
    iStack44 = (*pcVar1)(param_2,uStack32);
    iStack44 = iStack44 + *(int *)(iVar4 + 0x1c);
    iStack40 = (*pcVar1)(param_2,iStack28);
    iStack40 = iStack40 + *(int *)(iVar4 + 0x2c);
    uVar3 = (*DAT_0000e26c)(&uStack36,&iStack48);
    iVar2 = (*DAT_0000e270)(uVar3,iVar2);
    if (iVar2 < *(int *)(param_1 + 0x28)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(int *)(param_1 + 0x28) = iVar2;
    }
  }
  return;
}



void FUN_0000e3be(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar1 = DAT_0000e480;
  FUN_0000e456();
  puVar2 = PTR_LAB_00010a3c_1_0000e49c;
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1[0xd] = param_1;
  puVar1[10] = param_5;
  uVar3 = (*DAT_0000e4a0)(puVar2,param_5);
  puVar1[0xb] = uVar3;
  uVar3 = (*DAT_0000e4a8)(PTR_DAT_0000e4a4,param_5);
  puVar1[0xc] = uVar3;
  puVar1[0xe] = param_2;
  FUN_0000ec18();
  iVar4 = -2;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0xfffffffd;
  puVar1[5] = 0xfffffffd;
  do {
    (*(code *)puVar1[6])(iVar4,puVar1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  return;
}



void FUN_0000e456(void)

{
  int iVar1;
  
  iVar1 = DAT_0000e480;
  FUN_0000e558(DAT_0000e480);
  if (*(int *)(iVar1 + DAT_0000e47e) != 0) {
    (*DAT_0000e4bc)(*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(iVar1 + DAT_0000e47e));
    *(undefined4 *)(iVar1 + DAT_0000e47e) = 0;
  }
  return;
}



void FUN_0000e558(int param_1)

{
  int iVar1;
  
  iVar1 = -2;
  do {
    (**(code **)(param_1 + 0x20))(iVar1,param_1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return;
}



int FUN_0000e5ae(int param_1,int param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  
  if (param_1 == -1) {
    (**(code **)(param_2 + 0x24))(2,param_2);
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) - 1U & 7;
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 0x1c);
    uVar2 = 0xfffffffe;
  }
  else {
    if (param_1 != 1) {
      return param_1;
    }
    (**(code **)(param_2 + 0x24))(0xfffffffe,param_2);
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 7;
    uVar2 = 2;
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 0x1c);
  }
                    // WARNING: Could not recover jumptable at 0x0000e5fe. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2,param_2);
  return iVar1;
}



void FUN_0000ec18(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = DAT_0000ed40;
  iVar3 = *DAT_0000ed40;
  iVar4 = DAT_0000ed40[1];
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  iVar3 = iVar3 * iVar4;
  puVar2 = (undefined4 *)(*DAT_0000ed44)(DAT_0000ed40[0xd],iVar3 * 4);
  *(undefined4 **)((int)DAT_0000ed3a + (int)piVar1) = puVar2;
  do {
    iVar3 = iVar3 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  iVar3 = 0x3f;
  puVar2 = (undefined4 *)((int)DAT_0000ed3c + (int)piVar1);
  *(undefined4 **)((int)piVar1 + (int)DAT_0000ed3e) = puVar2;
  do {
    *puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 3;
  } while (iVar3 != 0);
  *puVar2 = 0;
  return;
}



void FUN_0000ec72(int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar4 = DAT_0000ed50;
  pcVar3 = DAT_0000ed4c;
  pcVar2 = DAT_0000ed48;
  piVar1 = DAT_0000ed40;
  for (puVar8 = *(undefined4 **)
                 ((param_2 * *DAT_0000ed40 + param_1) * 4 +
                 *(int *)((int)DAT_0000ed40 + (int)DAT_0000ed3a)); puVar8 != (undefined4 *)0x0;
      puVar8 = (undefined4 *)*puVar8) {
    if (puVar8[2] == 0) {
      piVar7 = (int *)puVar8[1];
      iVar6 = piVar7[1];
      if (*piVar7 < 1) {
        iVar6 = (*pcVar3)(piVar1[0xd],iVar6,*(undefined4 *)(iVar6 + 0x10),piVar7);
      }
      else {
        uVar5 = (*pcVar2)(piVar1[0xd],*piVar7);
        iVar6 = (*pcVar4)(uVar5,iVar6,*(undefined4 *)(iVar6 + 0x10),piVar7);
      }
      puVar8[2] = iVar6;
      *(undefined4 **)(iVar6 + 8) = puVar8;
    }
  }
  return;
}



int FUN_0000ecea(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)DAT_0000ed3a;
  piVar2 = (int *)((param_2 * *DAT_0000ed40 + param_1) * 4 + *(int *)((int)DAT_0000ed40 + iVar1));
  while (piVar2 = (int *)*piVar2, piVar2 != (int *)0x0) {
    iVar1 = FUN_0000ed80(piVar2);
  }
  return iVar1;
}



void FUN_0000ed14(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iStack32;
  undefined4 uStack28;
  undefined4 uStack20;
  
  pcVar1 = DAT_0000ed50;
  for (puVar2 = *(undefined4 **)
                 ((param_3 * *DAT_0000ed40 + param_2) * 4 +
                 *(int *)((int)DAT_0000ed40 + (int)DAT_0000ed3a)); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    iStack32 = puVar2[1];
    uStack20 = param_5;
    uStack28 = param_4;
    (*pcVar1)(param_1,*(int *)(iStack32 + 4),*(undefined4 *)(*(int *)(iStack32 + 4) + 0x10),
              &iStack32);
  }
  return;
}



void FUN_0000ed80(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    if (0 < **(int **)(param_1 + 4)) {
      (*DAT_0000ee78)();
    }
    if (*(int *)(param_1 + 8) != 0) {
      *(uint *)(*(int *)(param_1 + 8) + -4) = *(uint *)(*(int *)(param_1 + 8) + -4) | 1;
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0000eff4(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while( true ) {
    if (*param_1 != 0) {
      (*_LAB_0000f0cf_1)(*param_1,*param_2,*param_3);
    }
    if (param_1[1] != 0) {
      FUN_0000eff4(param_1[1],param_2[1],param_3[1]);
    }
    if (param_1[2] == 0) break;
    param_3 = (undefined4 *)param_3[2];
    param_2 = (undefined4 *)param_2[2];
    param_1 = (int *)param_1[2];
  }
  return;
}



undefined4 FUN_0000f2d4(void)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((*(byte *)(int)DAT_0000f3c6 & 1) != 0) {
    (*DAT_0000f3c8)();
    pcVar1 = DAT_0000f3d4;
    *DAT_0000f3d0 = (short)PTR_LAB_0000f3cc;
    (*pcVar1)(3,0xb);
    (*DAT_0000f3dc)(DAT_0000f3d8);
    (*pcVar1)(3,0xc);
    (*DAT_0000f3dc)(DAT_0000f3e0);
    (*pcVar1)(0xf,0xe);
    (*DAT_0000f3e8)();
    (*pcVar1)(0xf);
    uVar2 = (*DAT_0000f3e8)();
    Sleep_Standby();
    return uVar2;
  }
                    // WARNING: Could not recover jumptable at 0x0000f348. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar2 = (*DAT_0000f3f0)(0,4);
  return uVar2;
}



undefined4 FUN_0000f354(void)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((*(byte *)(int)DAT_0000f3c6 & 1) != 0) {
    (*DAT_0000f3c8)();
    pcVar1 = DAT_0000f3d4;
    *DAT_0000f3d0 = (short)PTR_LAB_0000f3cc;
    (*pcVar1)(3,0xb);
    (*DAT_0000f3dc)(DAT_0000f3f4);
    (*pcVar1)(0xf,0xe);
    (*DAT_0000f3e8)();
    (*pcVar1)(0xf);
    uVar2 = (*DAT_0000f3e8)();
    Sleep_Standby();
    return uVar2;
  }
                    // WARNING: Could not recover jumptable at 0x0000f3ba. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar2 = (*DAT_0000f3f0)(0,5);
  return uVar2;
}



void FUN_0000f7d4(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (*DAT_0000f8e8)((int)DAT_0000f8d6);
  *DAT_0000f8ec = iVar3;
  pcVar1 = DAT_0000f8f0;
  if (iVar3 != 0) {
    (*DAT_0000f8f0)(DAT_0000f8f4,iVar3,0x50);
    (*pcVar1)(DAT_0000f8f8,iVar3 + 0x50,(int)DAT_0000f8d8);
    (*pcVar1)(DAT_0000f8fc,DAT_0000f8da + iVar3,0x50);
    (*DAT_0000f904)(DAT_0000f900,DAT_0000f8de + iVar3,(int)DAT_0000f8dc,0);
    puVar2 = DAT_0000f914;
    iVar4 = (int)DAT_0000f8e2;
    *(undefined2 *)(iVar3 + iVar4) =
         *(undefined2 *)
          (DAT_0000f910 + (*(uint *)(*DAT_0000f908 + (int)DAT_0000f8e0) & DAT_0000f90c) * 2);
    *(short *)(iVar3 + iVar4 + 2) = (short)*(undefined4 *)*puVar2;
  }
  return;
}



void FUN_0000f840(void)

{
  int iVar1;
  
  iVar1 = *DAT_0000f8ec;
  if (iVar1 != 0) {
    (*DAT_0000f8f0)(iVar1,DAT_0000f8f4,0x50);
                    // WARNING: Could not recover jumptable at 0x0000f85e. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_0000f918)((int)*(short *)(iVar1 + DAT_0000f8e4));
    return;
  }
  return;
}



void FUN_0000f868(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *DAT_0000f8ec;
  if (iVar4 != 0) {
    (*DAT_0000f8f0)(iVar4 + 0x50,DAT_0000f8f8,(int)DAT_0000f8d8);
    (*DAT_0000f8f0)(DAT_0000f8da + iVar4,DAT_0000f8fc,0x50);
    (*DAT_0000f904)(DAT_0000f8de + iVar4,DAT_0000f900,(int)DAT_0000f8dc,0);
    uVar2 = DAT_0000f90c;
    iVar1 = DAT_0000f8f8;
    *(undefined2 *)
     ((*(uint *)(*(int *)(DAT_0000f8f8 + 4) + (int)DAT_0000f8e0) & DAT_0000f90c) * 2 + DAT_0000f910)
         = *(undefined2 *)(iVar4 + DAT_0000f8e2);
    uVar3 = *(uint *)(*(int *)(iVar1 + 4) + (int)DAT_0000f8e0);
    *(uint *)(*(int *)(iVar1 + 4) + (int)DAT_0000f8e0) =
         DAT_0000f91c & uVar3 | (int)((uVar3 & uVar2) << 1) >> 1;
                    // WARNING: Could not recover jumptable at 0x0000f8cc. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_0000f920)(iVar4);
    return;
  }
  return;
}



void FUN_0000f924(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined2 *puVar5;
  int iVar6;
  
  (*DAT_0000fa54)();
  iVar2 = DAT_0000fa5c;
  *(undefined4 *)(*(int *)(DAT_0000fa5c + 4) + 0x10) = DAT_0000fa58;
  *(undefined4 *)(iVar2 + 0x14) = 1;
  pcVar4 = DAT_0000fa68;
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x1c) = DAT_0000fa60;
  uVar3 = DAT_0000fa64;
  *(undefined4 *)(iVar2 + 0x14) = 1;
  (*pcVar4)(uVar3);
  (*DAT_0000fa6c)(DAT_0000fa64);
  (*DAT_0000fa74)(DAT_0000fa70);
  uVar3 = DAT_0000fa7c;
  pcVar4 = DAT_0000fa78;
  (*DAT_0000fa78)(0,DAT_0000fa7c,DAT_0000fa7c,DAT_0000fa7c,DAT_0000fa7c);
  (*pcVar4)(1,DAT_0000fa80,DAT_0000fa80,DAT_0000fa80,DAT_0000fa80);
  (*pcVar4)(2,DAT_0000fa84,DAT_0000fa88,DAT_0000fa88,DAT_0000fa84);
  uVar1 = DAT_0000fa46;
  *(undefined2 *)(*(int *)(iVar2 + 4) + (int)DAT_0000fa3e) = DAT_0000fa3c;
  *(undefined2 *)(*(int *)(iVar2 + 4) + (int)DAT_0000fa42) = DAT_0000fa40;
  *(undefined2 *)(*(int *)(iVar2 + 4) + (int)DAT_0000fa44) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 1;
  *(undefined2 *)(*(int *)(iVar2 + 4) + (int)DAT_0000fa48) = uVar1;
  puVar5 = DAT_0000fa90;
  iVar6 = (int)DAT_0000fa4a;
  *(undefined2 *)(*(int *)(iVar2 + 4) + iVar6) = uVar1;
  *(undefined2 *)(*(int *)(iVar2 + 4) + iVar6 + 2) = uVar1;
  *(undefined2 *)(*(int *)(iVar2 + 4) + iVar6 + 4) = uVar1;
  *(undefined4 *)(iVar2 + 0x14) = 1;
  *puVar5 = (short)DAT_0000fa8c;
  *(uint *)(*(int *)(iVar2 + 4) + (int)DAT_0000fa4c) =
       *(uint *)(*(int *)(iVar2 + 4) + iVar6 + -0x46) & DAT_0000fa94 | DAT_0000fa98;
  pcVar4 = DAT_0000faa8;
  *(ushort *)((int)DAT_0000fa4e + *(int *)(iVar2 + 4)) =
       *(ushort *)(*(int *)(iVar2 + 4) + (int)DAT_0000fa4e) & (ushort)PTR_LAB_0000fefe_1_0000fa9c;
  *(undefined4 *)(iVar2 + 0x14) = 1;
  (*pcVar4)(DAT_0000faa4,DAT_0000faa0,0);
  (*DAT_0000faa8)(DAT_0000fab0,DAT_0000faac,0);
  (*DAT_0000fab8)(DAT_0000fab4,uVar3);
                    // WARNING: Could not recover jumptable at 0x0000fa26. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0000fac4)(DAT_0000fac0,DAT_0000fabc,(int)DAT_0000fa50,0);
  return;
}



void FUN_0000fb08(void)

{
  undefined *puVar1;
  code *pcVar2;
  short *psVar3;
  int iVar4;
  short *psVar5;
  
  iVar4 = 4;
  psVar3 = DAT_0000fbec;
  do {
    psVar5 = psVar3;
    if (psVar5[4] != 0) {
      *psVar5 = *psVar5 + psVar5[2];
      psVar5[1] = psVar5[1] + psVar5[3];
      psVar5[4] = psVar5[4] + -1;
    }
    pcVar2 = DAT_0000fbf4;
    puVar1 = DAT_0000fbf0;
    iVar4 = iVar4 + -1;
    psVar3 = psVar5 + 5;
  } while (iVar4 != 0);
  *DAT_0000fbf0 = 0;
  (*pcVar2)((int)psVar5[-0xf] << 0x10,(int)psVar5[-0xe] << 0x10);
  *puVar1 = 1;
  (*pcVar2)((int)psVar5[-10] << 0x10,(int)psVar5[-9] << 0x10);
  *puVar1 = 2;
  (*pcVar2)((int)psVar5[-5],(int)psVar5[-4]);
  *puVar1 = 3;
  (*pcVar2)((int)*psVar5,(int)psVar5[1]);
  *puVar1 = 4;
  return;
}



void FUN_0000fb8a(char param_1,undefined2 param_2,short param_3)

{
  undefined2 *puVar1;
  short sVar2;
  
  puVar1 = (undefined2 *)((char)(param_1 * '\n') + DAT_0000fbec);
  if ((*DAT_0000fbf8 & 1) == 0) {
    sVar2 = 0x10;
  }
  else {
    sVar2 = 0;
  }
  *puVar1 = param_2;
  puVar1[1] = param_3 + sVar2;
  return;
}



void FUN_0000fbfc(undefined2 *param_1,short param_2,short param_3,undefined2 param_4)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  
  puVar3 = DAT_0000fd24;
  uVar1 = DAT_0000fd1e;
  puVar4 = (undefined2 *)*DAT_0000fd24;
  *puVar4 = DAT_0000fd1c;
  puVar4[2] = uVar1;
  sVar2 = DAT_0000fd20;
  puVar4[3] = param_4;
  puVar4[4] = *param_1;
  puVar4[5] = param_1[1];
  puVar4[6] = param_1[2] + param_2 + sVar2;
  puVar4[7] = param_1[3] + param_3 + -0x70;
  iVar5 = puVar3[8];
  *(undefined2 *)(iVar5 + 4) = 0;
  *(short *)(iVar5 + 6) = (short)((uint)puVar4 >> 3);
  puVar3[8] = iVar5 + 8;
  puVar3[7] = puVar3[7] + 1;
  *puVar3 = puVar4 + 0x10;
  puVar3[3] = puVar3[3] + 1;
  return;
}



int FUN_00010004(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (*DAT_00010160)(PTR_LAB_0001015c);
  (*DAT_00010164)(iVar2,PTR_LAB_0001015c);
  pcVar1 = DAT_00010168;
  (*DAT_00010168)(DAT_0001016c,iVar2,(int)DAT_00010144);
  iVar3 = (int)DAT_00010144;
  (*pcVar1)(DAT_00010174,iVar2 + iVar3,PTR_LAB_00010170);
  (*pcVar1)(DAT_00010178,PTR_LAB_00010170 + iVar2 + iVar3,(int)DAT_00010146);
  return iVar2;
}



void FUN_0001004e(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_00010168;
  (*DAT_00010168)(param_1,DAT_0001016c,(int)DAT_00010144);
  iVar2 = (int)DAT_00010144;
  (*pcVar1)(param_1 + iVar2,DAT_00010174,PTR_LAB_00010170);
  (*pcVar1)(PTR_LAB_00010170 + param_1 + iVar2,DAT_00010178,(int)DAT_00010146);
                    // WARNING: Could not recover jumptable at 0x00010084. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0001017c)(param_1);
  return;
}



void FUN_00010088(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  short sVar3;
  short sVar4;
  int iVar2;
  int iVar5;
  short local_20;
  short sStack30;
  short sStack28;
  short sStack26;
  short sStack24;
  short sStack22;
  short sStack20;
  short sStack18;
  
  sStack28 = DAT_00010148 - *DAT_00010180;
  sStack22 = DAT_0001014a - DAT_00010180[1];
  sVar3 = (*DAT_00010184)((int)DAT_0001014c,param_1,param_2);
  sVar4 = (*DAT_00010184)(0x38,param_1,param_2);
  iVar1 = DAT_00010188;
  iVar2 = (int)DAT_00010150;
  local_20 = sStack28 - sVar3;
  sStack30 = sStack22 - sVar4;
  sStack28 = sStack28 + sVar3;
  sStack22 = sStack22 + sVar4;
  iVar5 = DAT_0001014e + DAT_00010188;
  sVar3 = local_20 * 2;
  *(short *)(iVar5 + iVar2) = sVar3;
  *(short *)(iVar1 + iVar2) = sVar3;
  sVar4 = sStack28 * 2 + -1;
  iVar2 = (int)DAT_00010152;
  *(short *)(iVar5 + iVar2) = sStack30;
  sVar3 = sStack22 + -1;
  *(short *)(iVar1 + iVar2) = sStack30;
  iVar2 = (int)DAT_00010154;
  *(short *)(iVar5 + iVar2) = sVar4;
  *(short *)(iVar1 + iVar2) = sVar4;
  *(short *)(iVar5 + iVar2 + 2) = sVar3;
  *(short *)(iVar1 + iVar2 + 2) = sVar3;
  local_20 = DAT_00010156 + local_20;
  sStack30 = 0x73 - sStack30;
  sStack28 = DAT_00010158 + sStack28;
  sStack22 = 0x6e - sStack22;
  sStack26 = sStack30;
  sStack24 = sStack28;
  sStack20 = local_20;
  sStack18 = sStack22;
  (*DAT_00010190)((int)DAT_0001015a,&local_20,DAT_0001018c,0);
  return;
}



void FUN_00010194(void)

{
  short sVar1;
  undefined2 uVar2;
  short sVar3;
  undefined4 uVar4;
  code *pcVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  
  iVar8 = DAT_000102d0;
  *(undefined4 *)(*(int *)(DAT_000102d0 + 4) + 0x14) = DAT_000102cc;
  pcVar5 = DAT_000102d8;
  *(undefined4 *)(iVar8 + 0x14) = 1;
  *(undefined4 *)(*(int *)(iVar8 + 4) + 0x1c) = 0xffffffff;
  uVar4 = DAT_000102d4;
  *(undefined4 *)(iVar8 + 0x14) = 1;
  (*pcVar5)(uVar4);
  (*DAT_000102e0)(DAT_000102dc);
  (*DAT_000102e8)(DAT_000102e4);
  uVar4 = DAT_000102ec;
  (*DAT_000102f0)(1,DAT_000102ec,DAT_000102ec,DAT_000102ec,DAT_000102ec);
  (*DAT_000102f0)(2,uVar4,uVar4,uVar4,uVar4);
  uVar2 = DAT_000102c0;
  *(undefined2 *)(*(int *)(iVar8 + 4) + (int)DAT_000102ba) = DAT_000102b8;
  iVar7 = (int)DAT_000102be;
  *(undefined2 *)(*(int *)(iVar8 + 4) + iVar7) = DAT_000102bc;
  *(undefined2 *)(*(int *)(iVar8 + 4) + iVar7 + 2) = 0;
  *(undefined4 *)(iVar8 + 0x14) = 1;
  *(undefined2 *)(*(int *)(iVar8 + 4) + iVar7 + -10) = uVar2;
  *(undefined2 *)(*(int *)(iVar8 + 4) + iVar7 + -8) = uVar2;
  *(undefined2 *)(*(int *)(iVar8 + 4) + iVar7 + -6) = uVar2;
  *(undefined2 *)(*(int *)(iVar8 + 4) + iVar7 + -4) = uVar2;
  *(undefined4 *)(iVar8 + 0x14) = 1;
  (*DAT_000102f8)(DAT_000102f4,uVar4,0);
  (*DAT_000102f8)(DAT_00010300,DAT_000102fc,0);
  (*DAT_0001030c)(DAT_00010308,DAT_00010304,(int)DAT_000102c2,0);
  pcVar5 = DAT_00010314;
  psVar6 = DAT_00010310;
  (*DAT_00010314)(1,0);
  (*pcVar5)(2,0,(int)DAT_000102c4);
  (*pcVar5)(3,0,(int)DAT_000102c4);
  (*DAT_00010318)();
  (*DAT_0001031c)();
  iVar7 = *(int *)(iVar8 + 4);
  sVar1 = 0x28 - *psVar6;
  iVar8 = (int)DAT_000102c8;
  sVar9 = DAT_000102c6 - psVar6[1];
  *(short *)(iVar7 + iVar8) = sVar1 * 2;
  sVar3 = DAT_000102ca;
  *(short *)(iVar7 + iVar8 + 2) = sVar9;
  *(short *)(iVar7 + iVar8 + 4) = (sVar1 + sVar3) * 2 + -1;
  *(short *)(iVar7 + iVar8 + 6) = sVar9 + 0x70;
  FUN_00010088(0,1);
  (*DAT_00010320)(0,0x22,0x2c,0x1c);
                    // WARNING: Could not recover jumptable at 0x000102b4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00010324)();
  return;
}



void FUN_00010328(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char cVar6;
  short *local_20;
  
  iVar2 = DAT_00010430;
  iVar1 = DAT_0001042c;
  iVar4 = (int)DAT_00010424;
  iVar3 = 0x16;
  cVar6 = '\0';
  pcVar5 = (char *)(param_1 + 0x2c);
  local_20 = DAT_00010428;
  do {
    if ((*(byte *)(iVar1 + (*local_20 + iVar4 & 7U)) &
        *(byte *)(((uint)(*local_20 + iVar4) >> 3) + iVar2)) != 0) {
      cVar6 = cVar6 + '\x01';
      *pcVar5 = '\x16' - (char)iVar3;
      pcVar5 = pcVar5 + 1;
    }
    iVar3 = iVar3 + -1;
    local_20 = local_20 + 1;
  } while (iVar3 != 0);
  *(char *)(param_1 + 0x42) = cVar6;
  return;
}



void FUN_00010396(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if (-1 < param_2) {
    pcVar3 = (char *)(param_1 + 0x2c);
    iVar2 = (int)*(char *)(param_1 + 0x42);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      if (param_2 == cVar1) {
        iVar2 = *(char *)(param_1 + 0x42) - iVar2;
        goto LAB_000103b6;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = 0;
LAB_000103b6:
  *(int *)(param_1 + 0x20) = iVar2;
  return;
}



void FUN_000104ac(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(*(char *)(param_1 + 0x2c + *(int *)(param_1 + 0x20)) * 0x10 +
                  *(int *)(param_1 + 0x14));
  (*DAT_000105b8)(7,0x24,0x1e,2);
  (*DAT_000105bc)();
  *DAT_000105c0 = 0;
                    // WARNING: Could not recover jumptable at 0x000104e8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_000105c4)(iVar1 + iVar2);
  return;
}



void FUN_000104ec(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(*(int *)(*(char *)(param_1 + 0x2c + *(int *)(param_1 + 0x20)) * 0x10 +
                            *(int *)(param_1 + 0x14) + 4) + iVar2 + *(int *)(param_1 + 0x24) * 8);
  (*DAT_000105b8)(7,0x27,0x1e,2);
  (*DAT_000105bc)();
  *DAT_000105c0 = 0;
                    // WARNING: Could not recover jumptable at 0x0001053a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_000105c4)(iVar2 + iVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001053e(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(char *)(param_1 + 0x2c + *(int *)(param_1 + 0x20)) * 0x10 +
                   *(int *)(param_1 + 0x14) + 4) + *(int *)(param_1 + 0x10) +
          *(int *)(param_1 + 0x24) * 8;
  (*DAT_000105b8)(7,0x2a,6,2);
  (*DAT_000105bc)();
  *DAT_000105c0 = 0;
  (*_LAB_000105c8)((*(int *)(param_1 + 0x28) - (int)*(short *)(iVar1 + 4)) + 1,1);
  (*_LAB_000105d0)(_LAB_000105cc);
                    // WARNING: Could not recover jumptable at 0x000105a2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_LAB_000105c8)((int)*(short *)(iVar1 + 6),1);
  return;
}



uint FUN_000105d4(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  
  iVar5 = *(int *)(param_1 + 0x10);
  uVar6 = *(uint *)(*(int *)(*(char *)(param_1 + 0x2c + *(int *)(param_1 + 0x20)) * 0x10 +
                             *(int *)(param_1 + 0x14) + 8) + iVar5 + *(int *)(param_1 + 0x28) * 4);
  (*DAT_00010718)(5,0x2e,0x22,0xe);
  (*DAT_0001071c)();
  puVar3 = DAT_00010728;
  iVar2 = DAT_00010724;
  puVar1 = PTR_DAT_00010720;
  iVar7 = (int)DAT_00010712;
  if (3 < (int)uVar6) {
    *(ushort *)(iVar7 + *(int *)(DAT_00010724 + 4)) =
         *(ushort *)(*(int *)(DAT_00010724 + 4) + iVar7) & (ushort)PTR_DAT_00010720;
    *(undefined4 *)(iVar2 + 0x14) = 1;
    *puVar3 = 0;
                    // WARNING: Could not recover jumptable at 0x0001064e. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar6 = (*DAT_0001072c)(iVar5 + uVar6);
    return uVar6;
  }
  if (uVar6 == 1) {
    (*DAT_00010730)(2,0xffffff98,(int)DAT_00010714);
    (*DAT_00010734)();
    uVar6 = (int)*(short *)(iVar7 + *(int *)(iVar2 + 4)) & (uint)puVar1;
    uVar4 = (ushort)uVar6 | 5;
    puVar8 = (ushort *)(iVar7 + *(int *)(iVar2 + 4));
  }
  else if (uVar6 == 2) {
    (*DAT_00010730)(2,DAT_00010714 + -0x68);
    (*DAT_00010734)();
    uVar6 = (int)*(short *)(iVar7 + *(int *)(iVar2 + 4)) & (uint)puVar1;
    uVar4 = (ushort)uVar6 | 5;
    puVar8 = (ushort *)(iVar7 + *(int *)(iVar2 + 4));
  }
  else {
    uVar4 = *(ushort *)(*(int *)(DAT_00010724 + 4) + iVar7) & (ushort)PTR_DAT_00010720;
    puVar8 = (ushort *)(iVar7 + *(int *)(DAT_00010724 + 4));
  }
  *puVar8 = uVar4;
  *(undefined4 *)(iVar2 + 0x14) = 1;
  return uVar6;
}



void FUN_000106c2(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(char *)(param_1 + 0x2c + *(int *)(param_1 + 0x20)) * 0x10 + *(int *)(param_1 + 0x14);
  iVar1 = (int)*(short *)(iVar3 + 0xc);
  iVar2 = *(int *)(iVar3 + 4) + *(int *)(param_1 + 0x10);
  while ((*(int *)(param_1 + 0x28) < (int)*(short *)(iVar2 + 4) ||
         ((int)*(short *)(iVar2 + 6) + (int)*(short *)(iVar2 + 4) <= *(int *)(param_1 + 0x28)))) {
    iVar1 = iVar1 + -1;
    iVar2 = iVar2 + 8;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      return;
    }
  }
  *(int *)(param_1 + 0x24) = *(short *)(iVar3 + 0xc) - iVar1;
  return;
}



uint FUN_00010738(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint unaff_r13;
  int iVar4;
  
  sVar1 = *(short *)(DAT_00010844 + 8);
  if (((int)sVar1 & 1U) != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    return (int)sVar1;
  }
  (*DAT_00010848)(param_1 + 0x18,0,2);
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 == 0) {
    uVar2 = 0x42;
    unaff_r13 = (uint)*(char *)(param_1 + 0x42);
  }
  else {
    if (uVar2 == 1) {
      sVar1 = *(short *)(*(char *)(param_1 + 0x2c + *(int *)(param_1 + 0x20)) * 0x10 +
                         *(int *)(param_1 + 0x14) + 0xc);
    }
    else {
      if (uVar2 != 2) goto LAB_000107a0;
      sVar1 = *(short *)(*(char *)(param_1 + 0x2c + *(int *)(param_1 + 0x20)) * 0x10 +
                         *(int *)(param_1 + 0x14) + 0xe);
    }
    uVar2 = (uint)sVar1;
    unaff_r13 = uVar2;
  }
LAB_000107a0:
  iVar4 = unaff_r13 - 1;
  if (iVar4 < 0) {
    return uVar2;
  }
  iVar3 = (*DAT_0001084c)(*(int *)(param_1 + 0x18) * 4 + param_1 + 0x20,0,iVar4);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 4) = 5;
    iVar3 = *(int *)(param_1 + 0x18);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    else if (iVar3 != 1) {
      if (iVar3 == 2) {
        FUN_000106c2(param_1);
      }
      goto LAB_00010806;
    }
    *(int *)(param_1 + 0x28) =
         (int)*(short *)(*(int *)(*(char *)(param_1 + 0x2c + *(int *)(param_1 + 0x20)) * 0x10 +
                                  *(int *)(param_1 + 0x14) + 4) + *(int *)(param_1 + 0x10) +
                         *(int *)(param_1 + 0x24) * 8 + 4);
  }
LAB_00010806:
  **(undefined4 **)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  *(uint *)(*(int *)(param_1 + 0x1c) + 4) =
       *(int *)(*(int *)(param_1 + 0x18) * 4 + param_1 + 0x20) == 0 ^ 1;
  uVar2 = iVar4 <= *(int *)(*(int *)(param_1 + 0x18) * 4 + param_1 + 0x20) ^ 1;
  *(uint *)(*(int *)(param_1 + 0x1c) + 8) = uVar2;
  return uVar2;
}



void FUN_00010b04(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = DAT_00010c08;
  if (param_1 != 0) {
    (*DAT_00010c08)(0,0);
    (*pcVar1)(1,0);
    (*pcVar1)(2,0);
    (*pcVar1)(3,0,(int)DAT_00010c06);
    (*DAT_00010c0c)();
    (*DAT_00010c10)(0,0x22,0x2c,0x1c);
    (*DAT_00010c14)();
    uVar2 = DAT_00010c18;
    (*DAT_00010c20)(DAT_00010c1c,DAT_00010c18,DAT_00010c18,1);
    (*DAT_00010c20)(DAT_00010c24,uVar2,uVar2,1);
  }
                    // WARNING: Could not recover jumptable at 0x00010b68. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00010c30)(DAT_00010c2c,DAT_00010c28);
  return;
}



undefined4 FUN_00010b6c(int param_1)

{
  undefined4 uVar1;
  
  (*DAT_00010c10)(8,0x38,0x1c,4);
  (*DAT_00010c14)();
  (*DAT_00010c38)((int)*DAT_00010c34);
  if (param_1 != 0) {
    *DAT_00010c3c = 0;
                    // WARNING: Could not recover jumptable at 0x00010b9e. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (*DAT_00010c40)(param_1);
    return uVar1;
  }
  return 0;
}



undefined4 FUN_00010c54(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  short sVar6;
  int iVar7;
  undefined auStack80 [8];
  undefined4 uStack72;
  undefined4 uStack56;
  undefined4 local_20;
  undefined4 uStack28;
  undefined4 uStack24;
  
  iVar2 = (*DAT_00010d60)(DAT_00010d5c,0,2);
  pcVar1 = DAT_00010d64;
  if (iVar2 == 0) {
    iVar2 = (*DAT_00010d64)();
    iVar7 = *(int *)(*(int *)(iVar2 + 8) + (int)DAT_00010d58);
    iVar2 = (*pcVar1)();
    iVar2 = (int)*(short *)(iVar2 + 0x2c);
    if ((iVar2 == 0xf) || (iVar2 == 0x12)) {
      iVar3 = (*pcVar1)();
      sVar6 = *(short *)(iVar3 + 0x2e);
      if (((sVar6 == 0) || (((sVar6 == 6 || (sVar6 == 9)) || (sVar6 == 0x17)))) || (sVar6 == 0x1a))
      {
        uVar4 = (*DAT_00010d68)(&local_20);
        pcVar1 = DAT_00010d6c;
        *(undefined4 *)(param_1 + 0x2c) = uVar4;
        (*pcVar1)(auStack80);
        (*DAT_00010d70)(*(undefined4 *)(iVar7 + 0x24),auStack80);
        (*DAT_00010d74)(*(undefined4 *)(iVar7 + 0x20),auStack80);
        uVar4 = (*DAT_00010d78)(uStack72,uStack56);
        *(undefined4 *)(param_1 + 0x34) = uVar4;
      }
      else {
        uVar4 = (*DAT_00010d68)(&local_20);
        *(undefined4 *)(param_1 + 0x2c) = uVar4;
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar7 + 0x24);
      }
    }
    else {
      iVar3 = (*pcVar1)();
      *(int *)(param_1 + 0x2c) = (int)*(short *)(iVar3 + 0x2e);
      local_20 = *(undefined4 *)(iVar7 + 8);
      uStack28 = *(undefined4 *)(iVar7 + 0xc);
      uStack24 = *(undefined4 *)(iVar7 + 0x10);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar7 + 0x24);
    }
    uVar5 = (*DAT_00010d80)(PTR_DAT_00010d7c);
    pcVar1 = DAT_00010d80;
    *(undefined2 *)(param_1 + 0x30) = uVar5;
    sVar6 = (*pcVar1)();
    *(short *)(param_1 + 0x32) = sVar6 + DAT_00010d5a;
    iVar2 = *(int *)(iVar2 * 4 + DAT_00010d84);
    if (iVar2 != 0) {
      return *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x2c) * 4);
    }
  }
  return 0;
}



void FUN_00010d88(int param_1)

{
  char cVar1;
  code *pcVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  
  pbVar5 = DAT_00010ea8;
  pbVar4 = DAT_00010ea4;
  puVar3 = DAT_00010ea0;
  iVar9 = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  pcVar2 = DAT_00010e9c;
  iVar8 = (int)DAT_00010e92;
  if ((*pbVar5 & *pbVar4) == 0) {
    puVar7 = (undefined4 *)(*DAT_00010ec4)(param_1,DAT_00010ec0,0);
    *puVar7 = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = 0;
    iVar6 = (*DAT_00010eb0)(DAT_00010eac,0,2);
    if (iVar6 == 0) {
      iVar6 = (*DAT_00010eb4)();
      if (iVar6 != 0) {
        iVar9 = 1;
        *(undefined4 *)(param_1 + 0x20) = 1;
        (*pcVar2)(puVar3[1],3,3,iVar8);
      }
    }
    else if ((iVar6 == 2) && (cVar1 = *DAT_00010eb8, iVar6 = (*DAT_00010ebc)(0), cVar1 != iVar6)) {
      iVar9 = 1;
      *(undefined4 *)(param_1 + 0x20) = 1;
      (*pcVar2)(puVar3[1],3,3,iVar8);
    }
  }
  iVar6 = FUN_00010c54(param_1);
  *(int *)(param_1 + 0x24) = iVar6;
  if (iVar6 != 0) {
    iVar9 = 0;
    *(undefined4 *)(param_1 + 0x1c) = 1;
    (*pcVar2)(*puVar3,3,3,iVar8);
  }
  if (*(int *)(iVar9 * 4 + param_1 + 0x1c) == 1) {
    (*pcVar2)(puVar3[iVar9],3,3,(int)DAT_00010e94);
  }
  *(int *)(param_1 + 0x14) = iVar9;
  return;
}



void FUN_00010e64(undefined4 *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  pcVar2 = DAT_00010ed0;
  uVar1 = DAT_00010ecc;
  puVar6 = DAT_00010ec8;
  iVar5 = (int)DAT_00010e96;
  if (param_1 != (undefined4 *)0x0) {
    iVar3 = (*DAT_00010ed4)(*param_1);
    uVar4 = DAT_00010fe0;
    if (DAT_00010e98 < iVar3) {
      uVar4 = DAT_00010ed8;
    }
    (*pcVar2)(*param_1,uVar4,0);
    iVar3 = (*DAT_00010fe4)(param_1[1]);
    if (iVar3 <= DAT_00010fd6) {
      do {
        *puVar6 = uVar1;
        iVar5 = iVar5 + -1;
        puVar6 = puVar6 + 1;
      } while (iVar5 != 0);
    }
    (*pcVar2)(param_1[1],DAT_00010fe8,0);
  }
  return;
}



void FUN_00010f0e(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  pcVar2 = DAT_00010ff0;
  iVar1 = DAT_00010fec;
  iVar4 = param_1[2];
  iVar3 = (int)DAT_00010fd8;
  if (*(char *)(iVar4 + 8) + 2 < *param_1) {
    (*DAT_00010ff0)(DAT_00010fec,0,0,iVar3);
  }
  if (*param_1 < *(char *)(iVar4 + 10) + -3) {
    (*pcVar2)(iVar1 + 10,0,0,iVar3);
  }
  if (*(char *)(iVar4 + 9) + 2 < param_1[1]) {
    (*pcVar2)(iVar1 + 0x14,0,0,iVar3);
  }
  if (param_1[1] < *(char *)(iVar4 + 0xb) + -3) {
    (*pcVar2)(iVar1 + 0x1e,0,0,iVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00010f90(int param_1,int param_2,undefined2 *param_3)

{
  param_1 = param_1 - *(short *)(DAT_00010ff4 + 0x14);
  param_2 = param_2 - *(short *)(DAT_00010ff4 + 0x16);
  if ((((0x5f < param_1) && (param_1 <= _DAT_00010fda)) &&
      (0x20 - *(short *)(DAT_00010ff4 + 0xc) <= param_2)) &&
     (param_2 <= (int)_LAB_00010fdb_1 - (int)*(short *)(DAT_00010ff4 + 0xc))) {
    *param_3 = (short)param_1;
    param_3[1] = (short)param_2;
    return 1;
  }
  return 0;
}



void FUN_00011174(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  short local_24;
  short sStack34;
  
  iVar1 = (*DAT_00011294)();
  if (iVar1 != 0) {
    iVar6 = (int)DAT_0001128c;
    iVar7 = (int)DAT_0001128e;
    do {
      uVar2 = (uint)*(short *)(iVar1 + 0xc);
      uVar5 = uVar2;
      if (iVar7 + -0x18 <= (int)uVar2) {
        uVar5 = (int)DAT_00011290 + uVar2;
      }
      if (iVar7 + -0x18 <= (int)uVar2) {
        uVar2 = (int)DAT_00011290 + uVar2;
      }
      if ((*(byte *)(DAT_000112a0 + (uVar2 & 7)) & *(byte *)((uVar5 >> 3) + DAT_0001129c)) != 0) {
        (*DAT_000112a4)();
        uVar3 = (*DAT_000112a4)();
        iVar4 = FUN_00010f90(uVar3);
        if (iVar4 != 0) {
          (*DAT_000112ac)(((int)*(char *)(iVar1 + 0xe) & 3U) * 8 + DAT_000112a8,(int)local_24,
                          (int)sStack34,iVar6);
        }
      }
      iVar4 = (*DAT_000112b0)(iVar1);
      iVar1 = iVar1 + 0x10;
    } while (iVar4 == 0);
  }
  return;
}



void FUN_00011228(int param_1)

{
  short *psVar1;
  
  psVar1 = DAT_000112b4;
  *(short *)(param_1 + 0x18) = (*(short *)(param_1 + 2) + -2) * 0x20 + *DAT_000112b4 + -0x60;
  *(short *)(param_1 + 0x1a) = psVar1[1] + (*(short *)(param_1 + 6) + -2) * 0x20 + -0x20;
  return;
}



void FUN_00011252(short *param_1,short *param_2,short param_3)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  
  iVar4 = 2;
  do {
    iVar1 = 2;
    do {
      psVar3 = param_2;
      psVar2 = param_1;
      iVar1 = iVar1 + -1;
      *psVar3 = *psVar2 + param_3;
      param_1 = psVar2 + 1;
      param_2 = psVar3 + 1;
    } while (iVar1 != 0);
    param_1 = psVar2 + 0x1f;
    iVar4 = iVar4 + -1;
    param_2 = psVar3 + 0x1f;
  } while (iVar4 != 0);
  return;
}



undefined4 FUN_000112b8(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iStack36;
  
  iVar1 = (*DAT_00011340)();
  pcVar5 = DAT_00011348;
  if (iVar1 != 0) {
    pcVar5 = DAT_00011344;
  }
  iStack36 = 0x10;
  iVar1 = (int)DAT_0001133c;
  do {
    iVar6 = 0;
    iVar4 = 0x10;
    do {
      iVar8 = param_3;
      iVar7 = param_2;
      iVar2 = (*DAT_0001134c)(param_1,iVar6,param_4);
      if (iVar2 == 0) {
        uVar3 = (*pcVar5)(iVar7,iVar8,(int)DAT_0001133e);
      }
      else {
        uVar3 = FUN_00011252(iVar7,iVar8,iVar1);
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + -1;
      param_2 = iVar7 + 4;
      param_3 = iVar8 + 4;
    } while (iVar4 != 0);
    param_4 = param_4 + -1;
    param_2 = iVar7 + 0x44;
    iStack36 = iStack36 + -1;
    param_3 = iVar8 + 0x44;
  } while (iStack36 != 0);
  return uVar3;
}



undefined4 FUN_00011350(undefined4 *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  short sVar10;
  undefined4 *puVar11;
  
  iVar7 = DAT_0001144c;
  puVar11 = (undefined4 *)param_1[2];
  if (((puVar11 == (undefined4 *)0x0) || (iVar6 = (*DAT_00011450)(*puVar11), iVar6 == 0)) ||
     (iVar6 = (*DAT_00011450)(puVar11[1]), iVar6 == 0)) {
    uVar8 = 0;
  }
  else {
    FUN_000112b8(param_1[4],DAT_00011458,DAT_00011454,0xf);
    FUN_000112b8(param_1[4],DAT_00011460,DAT_0001145c,0x1f);
    param_1[7] = *param_1;
    param_1[8] = param_1[1];
    FUN_00011228(param_1);
    puVar5 = PTR_LAB_00011468;
    iVar9 = (int)DAT_00011440;
    *(undefined2 *)(iVar7 + 0x14) = *(undefined2 *)(param_1 + 6);
    *(undefined2 *)(iVar7 + 0x16) = *(undefined2 *)((int)param_1 + 0x1a);
    iVar6 = DAT_00011464;
    sVar1 = 0x60 - *(short *)(iVar7 + 10);
    sVar10 = 0x20 - *(short *)(iVar7 + 0xc);
    *(ushort *)(iVar9 + *(int *)(DAT_00011464 + 4)) =
         *(ushort *)(iVar9 + *(int *)(DAT_00011464 + 4)) & (ushort)puVar5 | 0x1f;
    iVar7 = (int)DAT_00011442;
    *(undefined4 *)(iVar6 + 0x14) = 1;
    iVar9 = *(int *)(iVar6 + 4);
    *(short *)(iVar9 + iVar7) = sVar1 * 2;
    sVar2 = DAT_00011442;
    *(short *)(iVar9 + iVar7 + 2) = sVar10;
    uVar4 = DAT_00011446;
    sVar3 = DAT_00011444;
    *(short *)(iVar9 + iVar7 + 4) = (sVar1 + sVar2) * 2 + -1;
    *(short *)(iVar9 + iVar7 + 6) = sVar10 + sVar3;
    *(undefined2 *)(*(int *)(iVar6 + 4) + iVar7 + 0x38) = uVar4;
    *(undefined2 *)(*(int *)(iVar6 + 4) + iVar7 + 0x3a) = DAT_00011448;
    *(undefined2 *)(*(int *)(iVar6 + 4) + iVar7 + 0x3c) = 0;
    *(undefined4 *)(iVar6 + 0x14) = 1;
    uVar8 = 1;
  }
  return uVar8;
}



void FUN_00011418(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar1 = DAT_0001146c;
  iVar4 = *(int *)(param_1 + 8);
  if ((*(ushort *)(DAT_00011470 + 8) & 1) == 0) {
    iVar2 = (*DAT_00011560)(param_1,*(char *)(iVar4 + 8) + 2,*(char *)(iVar4 + 10) + -3);
    iVar4 = (*DAT_00011564)(param_1 + 4,*(char *)(iVar4 + 9) + 2,*(char *)(iVar4 + 0xb) + -3);
    *puVar1 = *(undefined2 *)(param_1 + 0x18);
    puVar1[1] = *(undefined2 *)(param_1 + 0x1a);
    if (iVar4 == 0 && iVar2 == 0) {
      return;
    }
    uVar3 = 5;
  }
  else {
    (*DAT_00011474)(1);
    uVar3 = 3;
  }
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  return;
}



int * FUN_00011670(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 0x24);
  piVar3 = (int *)(*DAT_000117e8)(param_1,DAT_000117e4,0x28);
  pcVar1 = DAT_000117ec;
  piVar3[2] = iVar8;
  iVar4 = (*pcVar1)();
  pcVar1 = DAT_000117ec;
  iVar6 = *(char *)(iVar8 + 8) + 2;
  iVar7 = *(char *)(iVar8 + 10) + -3;
  if (iVar4 < iVar6) {
    iVar4 = iVar6;
  }
  if (iVar7 < iVar4) {
    iVar4 = iVar7;
  }
  *piVar3 = iVar4;
  iVar4 = (*pcVar1)();
  iVar6 = *(char *)(iVar8 + 9) + 2;
  iVar7 = *(char *)(iVar8 + 0xb) + -3;
  if (iVar4 < iVar6) {
    iVar4 = iVar6;
  }
  if (iVar7 < iVar4) {
    iVar4 = iVar7;
  }
  piVar3[1] = iVar4;
  pcVar1 = DAT_000117f4;
  uVar2 = DAT_000117f0;
  piVar3[4] = *(int *)(param_1 + 0x2c);
  puVar5 = (undefined4 *)(*pcVar1)(piVar3,uVar2,0xc);
  *(undefined2 *)(puVar5 + 1) = *(undefined2 *)(param_1 + 0x30);
  *(undefined2 *)((int)puVar5 + 6) = *(undefined2 *)(param_1 + 0x32);
  puVar5[2] = *(undefined4 *)(param_1 + 0x34);
  piVar3[3] = (int)puVar5;
  *puVar5 = 0xffffffff;
  return piVar3;
}



int FUN_0001170a(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  **(undefined4 **)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(iVar2 * 4 + param_1 + 0x1c);
  if (iVar2 == 0) {
    FUN_00010b6c(DAT_00010c44);
    iVar2 = DAT_00010c3c;
    *(undefined4 *)(DAT_00010c3c + 4) = *(undefined4 *)(DAT_00010c3c + 0xc);
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 0x10) + 2;
    iVar2 = iVar3;
    if (iVar3 != 1) {
                    // WARNING: Could not recover jumptable at 0x00010be8. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar2 = (*DAT_00010c40)(DAT_00010c48);
      return iVar2;
    }
  }
  else if (iVar2 == 1) {
    uVar1 = DAT_00010c50;
    if (iVar3 == 1) {
      uVar1 = DAT_00010c4c;
    }
    iVar2 = FUN_00010b6c(uVar1);
    return iVar2;
  }
  return iVar2;
}



void FUN_00011718(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 1;
  **(undefined4 **)(param_1 + 0x18) = 0xffffffff;
  uVar1 = FUN_00011670(param_1);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  FUN_00010b6c(0);
  return;
}



void FUN_00011bbc(int param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_00011ca8;
  if (param_1 != 0) {
    (*DAT_00011ca8)(0,0);
    (*pcVar1)(1,0);
    (*pcVar1)(3,0,(int)DAT_00011ca4);
    (*DAT_00011cac)();
    (*DAT_00011cb0)(0,0x22,0x2c,0x1c);
    (*DAT_00011cb4)();
  }
                    // WARNING: Could not recover jumptable at 0x00011bfe. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00011cc0)(DAT_00011cbc,DAT_00011cb8);
  return;
}



undefined4 FUN_00011c02(int param_1)

{
  int iVar1;
  short *psVar2;
  
  psVar2 = *(short **)(param_1 * 4 + DAT_00011cc4);
  do {
    while( true ) {
      iVar1 = (int)*psVar2;
      psVar2 = psVar2 + 1;
      if (iVar1 < 0) {
        return 0;
      }
      if (0x4c < iVar1) break;
      if (*(char *)(iVar1 + DAT_00011cc8) != '\0') {
        return 1;
      }
    }
  } while ((*(byte *)(DAT_00011cd0 + (DAT_00011ca6 + iVar1 & 7U)) &
           *(byte *)(((uint)(DAT_00011ca6 + iVar1) >> 3) + DAT_00011ccc)) == 0);
  return 1;
}



uint FUN_00011c4a(int param_1,uint param_2)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  
  psVar4 = (short *)(param_1 + 0x34);
  psVar5 = *(short **)(param_2 * 4 + DAT_00011cc4);
  if (param_2 == 2) {
    while( true ) {
      sVar1 = *psVar5;
      iVar3 = (int)sVar1;
      psVar5 = psVar5 + 1;
      if (iVar3 < 0) break;
      if (iVar3 < 0x4d) {
        param_2 = DAT_00011cc8;
        if (*(char *)(iVar3 + DAT_00011cc8) != '\0') goto LAB_00011c92;
LAB_00011c96:
        *psVar4 = 0;
      }
      else {
        param_2 = DAT_00011ca6 + iVar3 & 7;
        if ((*(byte *)(DAT_00011cd0 + param_2) &
            *(byte *)(((uint)(DAT_00011ca6 + iVar3) >> 3) + DAT_00011ccc)) == 0) goto LAB_00011c96;
LAB_00011c92:
        *psVar4 = sVar1;
      }
      psVar4 = psVar4 + 1;
    }
  }
  else {
    while( true ) {
      sVar1 = *psVar5;
      iVar3 = (int)sVar1;
      psVar5 = psVar5 + 1;
      if (iVar3 < 0) break;
      if (iVar3 < 0x4d) {
        bVar2 = *(byte *)(iVar3 + DAT_00011d8c);
        param_2 = DAT_00011d8c;
      }
      else {
        param_2 = DAT_00011d88 + iVar3 & 7;
        bVar2 = *(byte *)(DAT_00011d94 + param_2) &
                *(byte *)(((uint)(DAT_00011d88 + iVar3) >> 3) + DAT_00011d90);
      }
      if (bVar2 != 0) {
        *psVar4 = sVar1;
        psVar4 = psVar4 + 1;
      }
    }
  }
  *(uint *)(param_1 + 0x30) = (uint)((int)psVar4 - (param_1 + 0x34)) >> 1;
  return param_2;
}



void FUN_00011db4(int param_1)

{
  int iVar1;
  code *pcVar2;
  code *pcVar3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  
  iVar1 = DAT_00011eb8;
  *DAT_00011ec0 = (short)DAT_00011ebc;
  (*DAT_00011ec4)(5,0x35,0x22,2);
  (*DAT_00011ec8)();
  uVar6 = DAT_00011ef0;
  pcVar5 = DAT_00011eec;
  puVar4 = DAT_00011ee8;
  pcVar3 = DAT_00011ed0;
  pcVar2 = DAT_00011ecc;
  if (*(int *)(param_1 + 0x1c) == 3) {
    *DAT_00011ee8 = 0;
    (*pcVar5)(uVar6);
    puVar4[1] = puVar4[3] + 0x18;
    uVar6 = DAT_00011ef4;
    puVar4[2] = puVar4[4];
    (*pcVar5)(uVar6);
    puVar4[1] = puVar4[3] + 5;
    puVar4[2] = puVar4[4];
    if (*(short *)(iVar1 + 10) == 0) {
      (*pcVar5)(DAT_00011f00);
    }
    else {
      *puVar4 = 1;
      (*DAT_00011efc)(*(undefined4 *)((short)(*(short *)(iVar1 + 10) * 0xc) + DAT_00011ef8));
    }
    (*pcVar3)(0x22,0x35);
    (*DAT_00011f04)();
    (*pcVar2)();
  }
  else {
    (*DAT_00011ed0)(5,0x35);
    if (*(char *)(iVar1 + 1) < '\b') {
      (*pcVar2)();
    }
    else {
      (*DAT_00011edc)(DAT_00011ed8);
    }
    (*pcVar3)(0xd,0x35);
    (*pcVar2)();
    (*pcVar3)(0x1c,0x35);
    (*pcVar2)();
  }
  return;
}



int FUN_00011f4c(int param_1)

{
  short *psVar1;
  
  psVar1 = DAT_000120e0;
  while( true ) {
    if (*psVar1 < 1) {
      return 0;
    }
    if (*psVar1 == param_1) break;
    psVar1 = psVar1 + 4;
  }
  return (int)(short)((uint)(PTR_DAT_000120e8 + (*(int *)(psVar1 + 2) + DAT_000120e4) * 100) >> 0x10
                     );
}



undefined4 FUN_00011f7a(int param_1,int param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  
  (*DAT_000120cc)(3,0x38,0x26,4);
  uVar4 = (*DAT_000120d0)();
  pcVar3 = DAT_000120ec;
  pcVar2 = DAT_000120dc;
  puVar1 = DAT_000120d4;
  if (-1 < param_2) {
    *DAT_000120d4 = 0;
    iVar5 = (short)((short)param_2 * 0xc) + DAT_000120f0;
    if (*(int *)(param_1 + 0x1c) == 2) {
      uVar4 = DAT_000120f4;
      if (param_2 != 0) {
        uVar4 = *(undefined4 *)(iVar5 + 8);
      }
      (*pcVar2)(uVar4);
      puVar1[1] = puVar1[3];
      puVar1[2] = puVar1[4] + 2;
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 4) * 4 + DAT_000120f8);
    }
    else {
      if (*(int *)(param_1 + 0x1c) != 3) {
        uVar4 = (*pcVar2)(*(undefined4 *)(iVar5 + 8));
        return uVar4;
      }
      (*pcVar2)(*(undefined4 *)(iVar5 + 8));
      uVar4 = DAT_000120fc;
      puVar1[1] = puVar1[3];
      puVar1[2] = puVar1[4] + 2;
      (*pcVar2)(uVar4);
      iVar5 = FUN_00011f4c(param_2);
      pcVar2 = DAT_00012100;
      if (iVar5 < 1) {
        (*DAT_00012100)(iVar5,4);
        uVar4 = DAT_0001210c;
      }
      else {
        if (iVar5 < 100) {
          (*pcVar3)(DAT_00012108);
          uVar4 = 2;
        }
        else {
          (*pcVar3)(DAT_00012104);
          uVar4 = 3;
        }
        (*pcVar2)(iVar5,uVar4);
        uVar4 = DAT_0001210c;
      }
    }
    uVar4 = (*pcVar3)(uVar4);
  }
  return uVar4;
}



void FUN_00012298(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 4) * 5;
  iVar6 = 0;
  pcVar4 = DAT_00012474;
  if ((*(int *)(param_1 + 0x1c) != 2) && (pcVar4 = DAT_00012478, *(int *)(param_1 + 0x1c) != 3)) {
    pcVar4 = DAT_00012470;
  }
  (*DAT_0001247c)(10,0x24,0x1e,0xe);
  (*DAT_00012480)();
  iVar2 = DAT_0001246c;
  do {
    if (iVar5 < *(int *)(param_1 + 0x30)) {
      sVar1 = *(short *)(iVar5 * 2 + param_1 + 0x34);
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 0xc) + 4;
      if (iVar6 < 0) {
        iVar3 = *(int *)(iVar2 + 0x18);
      }
      else {
        iVar3 = 0;
      }
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 0x10) + iVar6 + iVar3;
      (*pcVar4)(iVar6,(int)sVar1,*(undefined4 *)(param_1 + 0x10));
    }
    iVar6 = iVar6 + 3;
    iVar5 = iVar5 + 1;
  } while (iVar6 < 0xf);
  return;
}



undefined4 FUN_0001232c(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 in_pr;
  
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  **(undefined4 **)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  pcVar2 = DAT_0001247c;
  **(undefined4 **)(param_1 + 0x28) = 0xffffffff;
  (*pcVar2)(10,0x24,0x1e,0xe);
  (*DAT_00012480)();
  (*DAT_000120cc)(3,0x38,0x26,4,param_1,in_pr);
  uVar3 = (*DAT_000120d0)();
  iVar1 = DAT_000120d8;
  if (-1 < *(int *)(param_1 + 0x1c)) {
    *DAT_000120d4 = 0;
                    // WARNING: Could not recover jumptable at 0x00011f40. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar3 = (*DAT_000120dc)(*(undefined4 *)(*(int *)(param_1 + 0x1c) * 4 + iVar1));
    return uVar3;
  }
  return uVar3;
}



void FUN_00012388(undefined4 *param_1)

{
  (*DAT_00012488)(DAT_00012484,0,0,1);
  (*DAT_00012488)(DAT_0001248c,0,0,1);
  if (param_1[8] != 0) {
    *(uint *)(param_1[8] + -4) = *(uint *)(param_1[8] + -4) | 1;
  }
  if (param_1[10] != 0) {
    *(uint *)(param_1[10] + -4) = *(uint *)(param_1[10] + -4) | 1;
  }
  (*DAT_00012490)(param_1[3]);
  *param_1 = 4;
  return;
}



void FUN_000123d8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_00012498)(DAT_00012494);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = (*DAT_000124a0)(param_1,DAT_0001249c);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = DAT_000124ac;
  if ((*DAT_000124a4 & 1) != 0) {
    uVar1 = DAT_000124a8;
  }
  uVar1 = (*DAT_000124b0)(param_1,uVar1);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  **(undefined4 **)(param_1 + 0x20) = 0xffffffff;
  **(undefined4 **)(param_1 + 0x28) = 0xffffffff;
  return;
}



void FUN_0001255c(void)

{
  undefined4 uVar1;
  
  if (*(char *)(DAT_000125dc + 1) == '\b') {
    uVar1 = 0x21;
  }
  else {
    uVar1 = 0x1a;
  }
                    // WARNING: Could not recover jumptable at 0x0001256c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_000125e0)(uVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00012570(int param_1)

{
  code *pcVar1;
  int iVar2;
  short sVar4;
  short sVar5;
  int iVar3;
  undefined4 uVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  int unaff_r13;
  undefined4 in_pr;
  
  pcVar1 = DAT_000125e0;
  iVar3 = DAT_000125dc;
  sVar5 = *(short *)((*(int *)(param_1 + 4) * 5 + *(int *)(param_1 + 0x24)) * 2 + param_1 + 0x34);
  iVar9 = (int)sVar5;
  if ((*(uint *)(param_1 + 0x10) & (int)*(char *)((short)(sVar5 * 0xc) + _DAT_000125e4)) != 0) {
    iVar2 = *(int *)(param_1 + 0x1c);
    if (iVar2 == 0) {
      iVar3 = (*_LAB_000126d7_1)(iVar9);
      if (iVar3 == 0) {
        iVar3 = (*pcVar1)(5);
        return iVar3;
      }
      FUN_0001255c();
      iVar3 = 0;
      psVar7 = (short *)(param_1 + 0x34);
      psVar8 = *DAT_000124b4;
LAB_000124dc:
      do {
        sVar5 = *psVar8;
        iVar2 = (int)sVar5;
        psVar8 = psVar8 + 1;
        if (iVar2 < 0) {
          *(int *)(param_1 + 0x30) = iVar3;
          pcVar1 = DAT_000125d8;
          if (iVar3 != 0) {
            iVar9 = 5;
            iVar3 = (*DAT_000125d0)();
            *(int *)(param_1 + 4) = iVar3;
            *(int *)(param_1 + 0x24) = unaff_r13 - iVar3 * iVar9;
            **(undefined4 **)(param_1 + 0x20) = 0xffffffff;
            **(undefined4 **)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x24);
            FUN_00012298(param_1);
            iVar3 = FUN_00011f7a(param_1,(int)*(short *)(unaff_r13 * 2 + param_1 + 0x34));
            return iVar3;
          }
          iVar3 = (int)DAT_000125c6;
          *(undefined *)(param_1 + 0x2c) = 0;
          (*pcVar1)(*DAT_000125d4,2,2,iVar3,0,in_pr);
          iVar3 = FUN_0001232c(param_1);
          return iVar3;
        }
        if (iVar2 == iVar9) {
          unaff_r13 = iVar3;
        }
        if (0x4c < iVar2) goto LAB_000124bc;
      } while (*(char *)(iVar2 + DAT_000124b8) == '\0');
      goto LAB_000124d6;
    }
    if (iVar2 == 1) {
      iVar3 = (*DAT_000126dc)(iVar9);
      if (iVar3 < 0) {
        uVar6 = 5;
      }
      else {
        *(int *)(param_1 + 0x18) = iVar3;
        FUN_00012388(param_1);
        uVar6 = 0;
      }
      iVar3 = (*pcVar1)(uVar6);
      return iVar3;
    }
    if (iVar2 != 2) {
      if (iVar2 != 3) {
        return iVar2;
      }
      if (iVar9 == *(short *)(DAT_000125dc + 10)) {
        sVar5 = 0;
      }
      *(short *)(DAT_000125dc + 10) = sVar5;
      (*pcVar1)(7);
      FUN_00012298(param_1);
      iVar3 = FUN_00011f7a(param_1,iVar9);
      return iVar3;
    }
    if (*(short *)(DAT_000125dc + 0x10) < *(short *)(_DAT_000126d4 + DAT_000125dc)) {
      sVar4 = (*DAT_000126e0)(iVar9);
      iVar9 = (int)sVar4;
      if ((iVar9 != 0) &&
         (sVar5 = (*DAT_000126e8)((int)*(short *)((short)(sVar5 * 0xc) + DAT_000126e4)),
         sVar5 <= *(short *)(iVar3 + 0x14))) {
        *(short *)(iVar3 + 0x14) = *(short *)(iVar3 + 0x14) - sVar5;
        iVar9 = iVar9 + *(short *)(iVar3 + 0x10);
        sVar5 = *(short *)(iVar3 + _DAT_000126d4);
        if (iVar9 <= sVar5) {
          sVar5 = (short)iVar9;
        }
        *(short *)(iVar3 + 0x10) = sVar5;
        iVar3 = FUN_0001255c();
        return iVar3;
      }
    }
  }
  iVar3 = (*pcVar1)(5);
  return iVar3;
LAB_000124bc:
  if ((*(byte *)(DAT_000125cc + (DAT_000125c4 + iVar2 & 7U)) &
      *(byte *)(((uint)(DAT_000125c4 + iVar2) >> 3) + DAT_000125c8)) != 0) {
LAB_000124d6:
    iVar3 = iVar3 + 1;
    *psVar7 = sVar5;
    psVar7 = psVar7 + 1;
  }
  goto LAB_000124dc;
}



int FUN_00012ba4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (*DAT_00012c30)(PTR_LAB_00012c2c);
  (*DAT_00012c34)(iVar2,PTR_LAB_00012c2c);
  pcVar1 = DAT_00012c38;
  (*DAT_00012c38)(DAT_00012c3c,iVar2,(int)DAT_00012c28);
  iVar3 = (int)DAT_00012c28;
  (*pcVar1)(DAT_00012c44,iVar2 + iVar3,PTR_LAB_00012c40);
  (*pcVar1)(DAT_00012c48,PTR_LAB_00012c40 + iVar2 + iVar3,(int)DAT_00012c2a);
  return iVar2;
}



void FUN_00012c50(void)

{
  ushort uVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  
  iVar4 = DAT_00012dbc;
  *(undefined4 *)(*(int *)(DAT_00012dbc + 4) + 0x14) = DAT_00012db8;
  *(undefined4 *)(iVar4 + 0x14) = 1;
  pcVar6 = DAT_00012dc4;
  *(undefined4 *)(*(int *)(iVar4 + 4) + 0x1c) = 0xffffffff;
  uVar5 = DAT_00012dc0;
  *(undefined4 *)(iVar4 + 0x14) = 1;
  (*pcVar6)(uVar5);
  uVar1 = DAT_00012da4;
  iVar10 = (int)DAT_00012da0;
  *(ushort *)(*(int *)(iVar4 + 4) + iVar10) =
       *(ushort *)(iVar10 + *(int *)(iVar4 + 4)) & (ushort)PTR_LAB_00012dc8 | 3;
  *(undefined4 *)(iVar4 + 0x14) = 1;
  *(ushort *)((int)DAT_00012da2 + *(int *)(iVar4 + 4)) =
       *(ushort *)(*(int *)(iVar4 + 4) + (int)DAT_00012da2) & (ushort)PTR_LAB_0000fefe_1_00012dcc;
  *(undefined4 *)(iVar4 + 0x14) = 1;
  *(ushort *)(*(int *)(iVar4 + 4) + iVar10) =
       *(ushort *)(*(int *)(iVar4 + 4) + iVar10) & (ushort)PTR_DAT_0000f8fc_3_00012dd0 | uVar1;
  *(undefined4 *)(iVar4 + 0x14) = 1;
  pcVar6 = DAT_00012ddc;
  *(ushort *)(iVar10 + *(int *)(iVar4 + 4)) =
       *(ushort *)(*(int *)(iVar4 + 4) + iVar10) & (ushort)PTR_DAT_0000cffc_3_00012dd4 |
       DAT_00012da6;
  *(undefined4 *)(iVar4 + 0x14) = 1;
  iVar11 = *(int *)(iVar4 + 4);
  *(undefined2 *)(DAT_00012da8 + iVar11) = 6;
  iVar10 = (int)DAT_00012daa;
  *(undefined2 *)(iVar11 + iVar10) = 0;
  *(undefined2 *)(iVar11 + iVar10 + 2) = 0;
  *(undefined2 *)(iVar11 + iVar10 + 4) = 0;
  uVar5 = DAT_00012dd8;
  *(undefined4 *)(iVar4 + 0x14) = 1;
  (*pcVar6)(uVar5);
  (*DAT_00012de0)(DAT_00012dd8);
  uVar5 = DAT_00012de4;
  (*DAT_00012de8)(0,DAT_00012de4,DAT_00012de4,DAT_00012de4,DAT_00012de4);
  uVar7 = DAT_00012dec;
  (*DAT_00012de8)(1,DAT_00012dec,DAT_00012dec,DAT_00012dec,DAT_00012dec);
  uVar3 = DAT_00012db4;
  iVar10 = (int)DAT_00012dae;
  *(undefined2 *)(*(int *)(iVar4 + 4) + iVar10) = DAT_00012dac;
  uVar8 = DAT_00012df0;
  *(undefined2 *)(*(int *)(iVar4 + 4) + iVar10 + 2) = DAT_00012db0;
  sVar2 = DAT_00012db2;
  *(undefined2 *)(*(int *)(iVar4 + 4) + iVar10 + 4) = 0;
  *(undefined4 *)(iVar4 + 0x14) = 1;
  *(short *)(*(int *)(iVar4 + 4) + iVar10 + -8) = sVar2;
  *(short *)(*(int *)(iVar4 + 4) + iVar10 + -6) = sVar2 + 2;
  *(undefined2 *)(*(int *)(iVar4 + 4) + iVar10 + -4) = uVar3;
  *(undefined2 *)(*(int *)(iVar4 + 4) + iVar10 + -2) = uVar3;
  *(undefined4 *)(iVar4 + 0x14) = 1;
  (*DAT_00012df8)(DAT_00012df4,uVar8,0);
  (*DAT_00012df8)(DAT_00012e00,DAT_00012dfc,0);
  (*DAT_00012e08)(DAT_00012e04,uVar5);
  (*DAT_00012e08)(DAT_00012e0c,uVar7);
  (*DAT_00012e18)(DAT_00012e14,DAT_00012e10,(int)DAT_00012db6,0);
  puVar9 = DAT_00012e1c;
  *DAT_00012e1c = 0x50;
  puVar9[1] = 0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[0xf] = 0;
  puVar9[0x10] = DAT_00012da8;
  (*DAT_00013030)();
  (*DAT_00013034)(0,0x22,0x2c,0x1c);
                    // WARNING: Could not recover jumptable at 0x00012e3e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00013038)();
  return;
}



int FUN_00012e42(char *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  char **ppcVar5;
  char *pcVar6;
  
  iVar4 = 3;
  ppcVar5 = DAT_0001303c;
  do {
    pcVar6 = *ppcVar5;
    ppcVar5 = ppcVar5 + 1;
    pcVar3 = param_1;
    while( true ) {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      if (cVar1 != cVar2) break;
      if (cVar1 == '\0') {
        return 3 - iVar4;
      }
    }
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return -1;
    }
  } while( true );
}



void FUN_00012e74(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = (*DAT_00013044)(uVar5,DAT_00013040);
  pcVar1 = DAT_00013048;
  while (iVar4 = (*pcVar1)(uVar2), iVar4 != 0) {
    iVar4 = FUN_00012e42(iVar4);
    if (((-1 < iVar4) && (*(char *)(param_1 + 0x3c + (iVar4 * 0x30 & 0xffU)) != '\x01')) &&
       (iVar3 = (*DAT_0001304c)(uVar5,*(undefined4 *)(iVar4 * 4 + DAT_0001303c),
                                (iVar4 * 0x30 & 0xffU) + param_1 + 0x40), iVar3 != 0)) {
      *(undefined *)((iVar4 * 0x30 & 0xffU) + param_1 + 0x3c) = 1;
    }
  }
                    // WARNING: Could not recover jumptable at 0x00012f0e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00013050)(uVar2);
  return;
}



void FUN_00012f12(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  char *pcVar5;
  int iVar6;
  
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  uVar1 = (*DAT_00013054)();
  iVar2 = (*DAT_00013058)(uVar3,uVar1);
  puVar4 = (undefined *)(param_1 + 0x3c);
  iVar6 = 3;
  do {
    iVar6 = iVar6 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 0x30;
  } while (iVar6 != 0);
  FUN_00012e74(param_1);
  pcVar5 = (char *)(param_1 + 0x3c);
  iVar6 = 3;
  do {
    if ((*pcVar5 != '\x01') && (iVar2 != 0)) {
      *pcVar5 = '\x02';
      iVar2 = iVar2 + -1;
    }
    iVar6 = iVar6 + -1;
    pcVar5 = pcVar5 + 0x30;
  } while (iVar6 != 0);
  return;
}



void FUN_00012f6c(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = (undefined *)(param_1 + 0x3c);
  iVar2 = 3;
  do {
    *puVar1 = 2;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 0x30;
  } while (iVar2 != 0);
  FUN_00012e74();
  return;
}



undefined4 FUN_00012f80(int param_1)

{
  undefined4 uVar1;
  
  (*DAT_00013034)(8,0x36,0x20,4);
  (*DAT_00013038)();
  if (param_1 != 0) {
    *DAT_0001305c = 0;
                    // WARNING: Could not recover jumptable at 0x00012faa. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (*DAT_00013060)(param_1);
    return uVar1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00012fb6(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)((*(int *)(param_1 + 0x20) * 0x30 & 0xffU) + param_1 + 0x3c);
  iVar2 = (int)*pcVar4;
  if (iVar2 == 0) {
    uVar3 = *(undefined4 *)(param_2 + 0xc);
LAB_00013020:
    iVar2 = FUN_00012f80(uVar3);
    return iVar2;
  }
  if (iVar2 == 1) {
    FUN_00012f80(_LAB_00013064);
    (*DAT_00013060)(*(undefined4 *)(((int)pcVar4[6] & 0xffU) * 4 + DAT_00013068));
    iVar1 = DAT_0001305c;
    iVar2 = *(int *)(param_2 + 0x10);
    if (iVar2 != 0) {
      *(undefined4 *)(DAT_0001305c + 4) = *(undefined4 *)(DAT_0001305c + 0xc);
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 0x10) + 2;
                    // WARNING: Could not recover jumptable at 0x0001301a. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar2 = (*DAT_00013060)(*(int *)(param_2 + 0x10));
      return iVar2;
    }
  }
  else if (iVar2 == 2) {
    uVar3 = *(undefined4 *)(param_2 + 0x14);
    goto LAB_00013020;
  }
  return iVar2;
}



void FUN_0001306c(undefined2 *param_1,short param_2,short param_3,undefined2 param_4)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  
  puVar3 = DAT_0001319c;
  uVar1 = DAT_00013196;
  puVar4 = (undefined2 *)*DAT_0001319c;
  *puVar4 = DAT_00013194;
  puVar4[2] = uVar1;
  sVar2 = DAT_00013198;
  puVar4[3] = param_4;
  puVar4[4] = *param_1;
  puVar4[5] = param_1[1];
  puVar4[6] = param_1[2] + param_2 + sVar2;
  puVar4[7] = param_1[3] + param_3 + -0x70;
  iVar5 = puVar3[8];
  *(undefined2 *)(iVar5 + 4) = 0;
  *(short *)(iVar5 + 6) = (short)((uint)puVar4 >> 3);
  puVar3[8] = iVar5 + 8;
  puVar3[7] = puVar3[7] + 1;
  *puVar3 = puVar4 + 0x10;
  puVar3[3] = puVar3[3] + 1;
  return;
}



void FUN_00013128(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)*(short *)(param_1 + 0x20);
  iVar2 = (int)*(short *)(param_1 + 0x22);
  iVar1 = iVar3 + 0x20;
  if (0x3f < iVar1) {
    iVar1 = 0x3f;
  }
  (*DAT_000131b0)(iVar3,iVar2,iVar1 - iVar3,6);
  (*DAT_000131b4)();
  if (iVar3 < 0x18) {
    (*DAT_000131b8)(iVar3 + 0x14,iVar2 + 1);
    (*DAT_000131c0)(DAT_000131bc);
    (*DAT_000131b8)(iVar3 + 0x14,iVar2 + 3);
                    // WARNING: Could not recover jumptable at 0x00013186. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_000131c0)(DAT_000131bc);
    return;
  }
  return;
}



int FUN_000131c4(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  
  pcVar5 = *(char **)(param_1 + 8);
  iVar6 = (int)*(short *)(param_1 + 0x20);
  iVar7 = (int)*(short *)(param_1 + 0x22);
  (*DAT_000132e8)(iVar6,iVar7,0x20,6);
  pcVar2 = DAT_000132f0;
  puVar1 = DAT_000132ec;
  *DAT_000132ec = 0;
  puVar1[1] = puVar1[3] + 2;
  puVar1[2] = puVar1[4] + 1;
  iVar3 = (int)*pcVar5;
  uVar4 = DAT_000132f4;
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      (*pcVar2)(pcVar5 + 0xc);
      puVar1[1] = puVar1[3] + 2;
      puVar1[2] = puVar1[4] + 3;
      iVar3 = (*pcVar2)(pcVar5 + 0x1d);
      if (0x17 < iVar6) {
        return iVar3;
      }
      (*DAT_000132f8)();
      (*DAT_000132fc)();
      *DAT_00013304 = (short)DAT_00013300;
      (*DAT_00013308)(iVar6 + 0x14,iVar7 + 1);
      (*DAT_00013310)();
      (*DAT_00013308)(iVar6 + 0x14,iVar7 + 3);
      iVar3 = (*DAT_00013310)();
      return iVar3;
    }
    uVar4 = DAT_00013318;
    if (iVar3 != 2) {
      return iVar3;
    }
  }
  iVar3 = (*pcVar2)(uVar4);
  return iVar3;
}



int * FUN_00013570(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*DAT_0001364c)(param_1,DAT_00013648,0x1c);
  iVar1 = DAT_00013650;
  *piVar2 = (*(int *)(param_1 + 0x20) * 0x30 & 0xffU) + param_1 + 0x3c;
  piVar2[1] = *(int *)(param_1 + 0x14);
  piVar2[2] = *(int *)(*(int *)(param_1 + 0x20) * 4 + iVar1);
  piVar2[3] = param_1 + 0x38;
  return piVar2;
}



void FUN_00013f28(void)

{
  code *pcVar1;
  
  pcVar1 = DAT_00013f98;
  (*DAT_00013f98)(0,(int)DAT_00013f7a);
  (*pcVar1)(1,0,(int)DAT_00013f7c);
  (*pcVar1)(3,0,(int)DAT_00013f7c);
  (*DAT_00013f9c)();
  (*DAT_00013fa8)(DAT_00013fa4,DAT_00013fa0);
  (*DAT_00013fac)(0,0x22,0x2c,0x1c);
                    // WARNING: Could not recover jumptable at 0x00013f66. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00013fb0)();
  return;
}



void FUN_00014324(int param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_00014420;
  if (param_1 != 0) {
    (*DAT_00014420)(0,0);
    (*pcVar1)(1,0);
    (*pcVar1)(3,0,(int)DAT_0001441a);
    (*DAT_00014424)();
    (*DAT_00014428)(0,0x22,0x2c,0x1c);
    (*DAT_0001442c)();
  }
                    // WARNING: Could not recover jumptable at 0x00014366. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00014438)(DAT_00014434,DAT_00014430);
  return;
}



int FUN_0001436a(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  
  uVar1 = DAT_0001441c;
  iVar5 = 10;
  iVar2 = DAT_0001443c;
  puVar7 = *(undefined2 **)(param_1 * 4 + DAT_0001443c);
  puVar4 = DAT_00014440;
  if (puVar7 == (undefined2 *)0x0) {
    do {
      iVar6 = 0xf;
      do {
        puVar7 = puVar4;
        *puVar7 = uVar1;
        iVar6 = iVar6 + -1;
        puVar4 = puVar7 + 1;
      } while (iVar6 != 0);
      iVar5 = iVar5 + -1;
      puVar4 = puVar7 + 0x12;
    } while (iVar5 != 0);
  }
  else {
    do {
      iVar6 = 0xf;
      do {
        puVar3 = puVar4;
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        iVar6 = iVar6 + -1;
        *puVar3 = uVar1;
        puVar4 = puVar3 + 1;
      } while (iVar6 != 0);
      iVar5 = iVar5 + -1;
      puVar4 = puVar3 + 0x12;
    } while (iVar5 != 0);
  }
  return iVar2;
}



undefined4 FUN_000143aa(int param_1)

{
  undefined4 uVar1;
  
  (*DAT_00014428)(4,0x3a,0x24,2);
  (*DAT_0001442c)();
  if (param_1 != 0) {
    (*DAT_00014448)((int)*DAT_00014444);
    *DAT_0001444c = 0;
                    // WARNING: Could not recover jumptable at 0x000143dc. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (*DAT_00014450)(param_1);
    return uVar1;
  }
  return 0;
}



void FUN_00014408(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0001445c;
  if (*(int *)(param_1 + 0x20) != 9) {
    uVar1 = 0;
  }
  FUN_000143aa(uVar1);
  return;
}



void FUN_000144d2(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  ushort *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  iVar1 = DAT_00014578;
  piVar8 = (int *)(param_1 + 0x28);
  iVar9 = *(int *)(param_1 + 0x18);
  iVar3 = DAT_0001455c + DAT_00014570;
  iVar4 = *(int *)(param_1 + 0x18);
  iVar2 = DAT_0001455e + DAT_00014570;
  puVar5 = DAT_00014574 + 8;
  puVar7 = DAT_00014574;
  do {
    iVar6 = 0;
    do {
      iVar10 = iVar6;
      if ((*puVar7 & *(ushort *)(iVar9 * 0x20 + iVar3 + *(char *)(iVar6 + iVar1) * 2)) != 0) break;
      iVar6 = iVar6 + 1;
      iVar10 = 8;
    } while (iVar6 < 8);
    *piVar8 = iVar10;
    puVar7 = puVar7 + 1;
    piVar8 = piVar8 + 1;
    if (puVar5 <= puVar7) {
      *(uint *)(param_1 + 0x48) = (uint)(*(char *)(iVar2 + iVar4) != '\0');
      return;
    }
  } while( true );
}



void FUN_0001457c(int param_1,int *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  undefined *puVar6;
  char *pcVar7;
  int iVar8;
  
  pcVar2 = DAT_000147d4;
  iVar5 = param_1 * 0x20 + DAT_000147cc;
  puVar6 = (undefined *)(DAT_000147d0 + param_1);
  iVar3 = 8;
  pcVar7 = DAT_000147d4;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    iVar3 = iVar3 + -1;
    *(undefined2 *)(iVar5 + cVar1 * 2) = 0;
  } while (iVar3 != 0);
  iVar3 = 8;
  puVar4 = DAT_000147d8;
  do {
    iVar8 = *param_2;
    param_2 = param_2 + 1;
    if (-1 < pcVar2[iVar8]) {
      iVar8 = pcVar2[iVar8] * 2;
      *(ushort *)(iVar5 + iVar8) = *(ushort *)(iVar5 + iVar8) | *puVar4;
    }
    iVar3 = iVar3 + -1;
    puVar4 = puVar4 + 1;
  } while (iVar3 != 0);
  if (param_3 == 0) {
    *puVar6 = 0;
    *(undefined2 *)(iVar5 + 8) = 0x10;
    *(undefined2 *)(iVar5 + 10) = 0x20;
  }
  else {
    *puVar6 = 1;
    *(undefined2 *)(iVar5 + 8) = 0x20;
    *(undefined2 *)(iVar5 + 10) = 0x10;
  }
  return;
}



int FUN_000145f4(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar2 = DAT_000147dc;
  iVar3 = 8;
  pcVar4 = *(char **)(param_1 * 4 + DAT_000147dc);
  do {
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    *param_2 = (int)cVar1;
    param_2 = param_2 + 1;
  } while (iVar3 != 0);
  return iVar2;
}



void FUN_0001460c(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  **(undefined4 **)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  **(undefined4 **)(param_1 + 0x1c) = 0xffffffff;
  (*DAT_000147e0)();
  FUN_0001436a(0);
  FUN_000143aa(*(undefined4 *)(*(int *)(param_1 + 0xc) * 4 + DAT_000147e4));
  return;
}



void FUN_00014644(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 1;
  **(undefined4 **)(param_1 + 0x10) = 0xffffffff;
  **(undefined4 **)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  FUN_000144d2(param_1);
  FUN_0001436a(1);
  FUN_000143aa(*(undefined4 *)(*(int *)(param_1 + 0x18) * 4 + DAT_000147e8));
  return;
}



void FUN_0001467a(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 2;
  **(undefined4 **)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0;
  **(undefined4 **)(param_1 + 0x1c) = 3;
  FUN_00014408();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00014b08(void)

{
  int iVar1;
  code *pcVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  
  pcVar2 = _LAB_00014ba4;
  iVar1 = _LAB_00014ba0;
  uVar5 = (undefined2)_DAT_00014b9c;
  *(undefined2 *)(_LAB_00014ba0 + 0x10) = uVar5;
  (*pcVar2)(0xc,0x24);
  pcVar3 = DAT_00014ba8;
  (*DAT_00014ba8)(DAT_00014bac);
  (*pcVar2)(0x13,0x24);
  uVar4 = DAT_00014bc0;
  if (((int)*DAT_00014bb0 & 0xffU) == (int)DAT_00014b7e) {
    (*pcVar3)(DAT_00014bb4);
    *(short *)(iVar1 + 0x10) = (short)PTR_DAT_00014bb8;
    (*pcVar2)(0x1a,0x24);
    (*pcVar3)(DAT_00014bbc);
    *(undefined2 *)(iVar1 + 0x10) = uVar5;
  }
  else {
    *(short *)(iVar1 + 0x10) = (short)PTR_DAT_00014bb8;
    (*pcVar3)(uVar4);
    *(undefined2 *)(iVar1 + 0x10) = uVar5;
    (*pcVar2)(0x19,0x24);
    (*pcVar3)(DAT_00014bc4);
  }
  return;
}



void FUN_00014ee0(void)

{
  undefined2 uVar1;
  code *pcVar2;
  int iVar3;
  short sVar4;
  undefined2 local_28;
  undefined2 uStack38;
  short sStack36;
  undefined2 uStack34;
  undefined4 uStack32;
  undefined4 uStack28;
  
  iVar3 = (*DAT_00014ff8)(DAT_00014ff4,(int)DAT_00014fe0);
  sVar4 = (*DAT_00014ff8)();
  pcVar2 = DAT_00014ffc;
  uVar1 = DAT_00014fe2;
  local_28 = DAT_00014fe2;
  uStack38 = DAT_00014fe4;
  uStack34 = 0;
  uStack32 = 0;
  uStack28 = 0;
  sStack36 = sVar4 + 0x40;
  (*DAT_00014ffc)(&local_28);
  local_28 = uVar1;
  uStack38 = DAT_00014fe6;
  uStack34 = 0;
  uStack32 = 0;
  uStack28 = 0;
  sStack36 = sVar4 + 0x40;
  (*pcVar2)(&local_28);
  sVar4 = (short)(iVar3 + 0x78);
  if (iVar3 + 0x78 < 0x79) {
    local_28 = uVar1;
    uStack38 = DAT_00014fe8;
    sStack36 = DAT_00014fea + sVar4;
    uStack34 = 0;
    uStack32 = 0;
    uStack28 = 0;
    (*pcVar2)(&local_28);
    sStack36 = DAT_00014fee;
  }
  else {
    local_28 = uVar1;
    uStack38 = DAT_00014fe8;
    sStack36 = DAT_00014fee;
    uStack34 = 0;
    uStack32 = 0;
    uStack28 = 0;
    (*pcVar2)(&local_28);
    sStack36 = DAT_00014ff0 - sVar4;
  }
  uStack32 = 0;
  uStack34 = 0;
  local_28 = uVar1;
  uStack28 = 0;
  uStack38 = DAT_00014fec;
  (*pcVar2)(&local_28);
  return;
}



undefined4 FUN_00015220(void)

{
  undefined4 uVar1;
  undefined2 local_14;
  undefined2 uStack18;
  undefined2 uStack16;
  undefined2 uStack14;
  undefined4 uStack12;
  undefined4 uStack8;
  
  FUN_00014ee0();
  local_14 = DAT_000152a2;
  uStack18 = DAT_000152a4;
  uStack16 = DAT_000152a6;
  uStack14 = 0;
  uStack12 = 0;
  uStack8 = 0;
  (*DAT_000152ac)(&local_14);
  local_14 = DAT_000152a2;
  uStack18 = DAT_000152a8;
  uStack16 = DAT_000152a6;
  uStack14 = 0;
  uStack12 = 0;
  uStack8 = 0;
  uVar1 = (*DAT_000152ac)(&local_14);
  return uVar1;
}



void FUN_00015770(int param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_00015818;
  if (param_1 != 0) {
    (*DAT_00015818)(0,0);
    (*pcVar1)(1,0);
    (*pcVar1)(3,0,(int)DAT_00015814);
    (*DAT_0001581c)();
    (*DAT_00015820)(0,0x22,0x2c,0x1c);
    (*DAT_00015824)();
  }
                    // WARNING: Could not recover jumptable at 0x000157b2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00015830)(DAT_0001582c,DAT_00015828);
  return;
}



void FUN_00015ed2(int param_1)

{
  (*DAT_00015f7c)(*(short *)(param_1 + 0x14) + 4,*(short *)(param_1 + 0x16) + 1,
                  *(short *)(param_1 + 0x1a) + -8,*(short *)(param_1 + 0x1c) + -2);
  (*DAT_00015f88)();
                    // WARNING: Could not recover jumptable at 0x00015f26. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00015f8c)((int)*(short *)(param_1 + 0x14),(int)*(short *)(param_1 + 0x16),
                  (int)*(short *)(param_1 + 0x1a),(int)*(short *)(param_1 + 0x1c));
  return;
}



void FUN_000160b0(int param_1)

{
  undefined4 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  int iVar3;
  
  (*DAT_000161c0)((int)*(short *)(param_1 + 0x14),(int)*(short *)(param_1 + 0x16),
                  (int)*(short *)(param_1 + 0x1a),(int)*(short *)(param_1 + 0x1c),(int)DAT_000161be)
  ;
  uVar2 = (*DAT_000161c4)((int)*(short *)(param_1 + 0x24));
  (*DAT_000161c8)(0,*(short *)(param_1 + 0x14) + 4,*(short *)(param_1 + 0x16) + 1,uVar2);
  (*DAT_000161cc)(*(short *)(param_1 + 0x14) + 6,*(short *)(param_1 + 0x16) + 1,
                  *(short *)(param_1 + 0x1a) + -10,*(short *)(param_1 + 0x1c) + -2);
  uVar2 = DAT_000161d4;
  puVar1 = DAT_000161d0;
  *DAT_000161d0 = 0;
  *DAT_000161d8 = (short)uVar2;
  puVar1[1] = puVar1[3];
  puVar1[2] = puVar1[4];
  (*DAT_000161e0)(*(undefined4 *)((short)(*(short *)(param_1 + 0x24) * 0xc) + DAT_000161dc));
  uVar2 = DAT_000161e4;
  if (0 < *(short *)(param_1 + 0x26)) {
    if (*(short *)(param_1 + 0x28) + 1 < 0) {
      iVar3 = puVar1[5];
    }
    else {
      iVar3 = 0;
    }
    puVar1[1] = puVar1[3] + (int)*(short *)(param_1 + 0x28) + iVar3 + 1;
    UNRECOVERED_JUMPTABLE = DAT_000161e8;
    puVar1[2] = puVar1[4];
    (*UNRECOVERED_JUMPTABLE)(uVar2);
    if (*(short *)(param_1 + 0x28) + 2 < 0) {
      iVar3 = puVar1[5];
    }
    else {
      iVar3 = 0;
    }
    puVar1[1] = puVar1[3] + (int)*(short *)(param_1 + 0x28) + iVar3 + 2;
    UNRECOVERED_JUMPTABLE = DAT_000161ec;
    puVar1[2] = puVar1[4];
                    // WARNING: Could not recover jumptable at 0x000161b0. Too many branches
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE)((int)*(short *)(param_1 + 0x26),0);
    return;
  }
  return;
}



void FUN_000161f0(int param_1)

{
  (*DAT_000162ec)(*(short *)(param_1 + 0x14) + 6,*(short *)(param_1 + 0x16) + 1,
                  *(short *)(param_1 + 0x1a) + -10,*(short *)(param_1 + 0x1c) + -2);
  (*DAT_000162f0)();
  (*DAT_000162f4)(*(short *)(param_1 + 0x14) + 4,*(short *)(param_1 + 0x16) + 1);
  (*DAT_000162f8)();
                    // WARNING: Could not recover jumptable at 0x00016264. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_000162fc)((int)*(short *)(param_1 + 0x14),(int)*(short *)(param_1 + 0x16),
                  (int)*(short *)(param_1 + 0x1a),(int)*(short *)(param_1 + 0x1c));
  return;
}



void FUN_0001642c(int param_1)

{
  undefined4 *puVar1;
  
  (*DAT_0001654c)((int)*(short *)(param_1 + 0x14),(int)*(short *)(param_1 + 0x16),
                  (int)*(short *)(param_1 + 0x1a),(int)*(short *)(param_1 + 0x1c),(int)DAT_0001654a)
  ;
  (*DAT_00016550)(*(short *)(param_1 + 0x14) + 2,*(short *)(param_1 + 0x16) + 1,
                  *(short *)(param_1 + 0x1a) + -4,*(short *)(param_1 + 0x1c) + -2);
  puVar1 = DAT_00016554;
  *DAT_00016554 = 0;
  puVar1[1] = puVar1[3];
  puVar1[2] = puVar1[4];
                    // WARNING: Could not recover jumptable at 0x00016494. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0001655c)(*DAT_00016558);
  return;
}



void FUN_00016498(int param_1)

{
  (*DAT_00016550)(*(short *)(param_1 + 0x14) + 2,*(short *)(param_1 + 0x16) + 1,
                  *(short *)(param_1 + 0x1a) + -4,*(short *)(param_1 + 0x1c) + -2);
  (*DAT_00016560)();
                    // WARNING: Could not recover jumptable at 0x000164ec. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00016564)((int)*(short *)(param_1 + 0x14),(int)*(short *)(param_1 + 0x16),
                  (int)*(short *)(param_1 + 0x1a),(int)*(short *)(param_1 + 0x1c));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00016758(int param_1)

{
  (*DAT_0001680c)(*(short *)(param_1 + 0x14) + 2,*(short *)(param_1 + 0x16) + 1,
                  *(short *)(param_1 + 0x1a) + -4,*(short *)(param_1 + 0x1c) + -2);
  (*DAT_00016810)();
                    // WARNING: Could not recover jumptable at 0x000167ac. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_LAB_00016814)((int)*(short *)(param_1 + 0x14),(int)*(short *)(param_1 + 0x16),
                   (int)*(short *)(param_1 + 0x1a),(int)*(short *)(param_1 + 0x1c));
  return;
}



void FUN_000167b0(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  (*DAT_0001680c)(*(short *)(param_1 + 0x14) + 2,*(short *)(param_1 + 0x16) + 1,
                  *(short *)(param_1 + 0x1a) + -4,*(short *)(param_1 + 0x1c) + -2);
  (*DAT_00016810)();
  iVar5 = (int)*(char *)(param_1 + 1) + (*(char *)(param_1 + 3) + 1) * -4;
  if (iVar5 < 0) {
    cVar3 = (char)iVar5 + '\x04';
  }
  else {
    cVar3 = '\x04';
  }
  *(char *)(param_1 + 6) = cVar3;
  *(char *)(param_1 + 0x20) = (char)*(undefined2 *)(param_1 + 0x1c);
  *(short *)(param_1 + 0x1c) = *(char *)(param_1 + 6) * 2 + 2;
  *(undefined *)(param_1 + 5) = 0;
  if ((int)*(short *)(param_1 + 0x1c) < (int)*(char *)(param_1 + 0x20)) {
    (*DAT_00016940)((int)*(short *)(param_1 + 0x14),
                    (int)*(short *)(param_1 + 0x1c) + (int)*(short *)(param_1 + 0x16),
                    (int)*(short *)(param_1 + 0x1a),
                    (int)*(char *)(param_1 + 0x20) - (int)*(short *)(param_1 + 0x1c));
  }
  (*DAT_00016944)((int)*(short *)(param_1 + 0x14),(int)*(short *)(param_1 + 0x16),
                  (int)*(short *)(param_1 + 0x1a),(int)*(short *)(param_1 + 0x1c),(int)DAT_0001693c)
  ;
  (*DAT_00016948)(*(short *)(param_1 + 0x14) + 2,*(short *)(param_1 + 0x16) + 1,
                  *(short *)(param_1 + 0x1a) + -4,*(short *)(param_1 + 0x1c) + -2);
  puVar1 = DAT_0001694c;
  *DAT_0001694c = 0;
  pcVar2 = DAT_00016950;
  for (iVar5 = 0; iVar5 < *(char *)(param_1 + 6); iVar5 = iVar5 + 1) {
    puVar1[1] = puVar1[3] + 2;
    if (iVar5 * 2 < 0) {
      iVar4 = puVar1[6];
    }
    else {
      iVar4 = 0;
    }
    puVar1[2] = puVar1[4] + iVar5 * 2 + iVar4;
    (*pcVar2)(*(undefined4 *)((*(char *)(param_1 + 3) * 4 + iVar5) * 4 + *(int *)(param_1 + 0x24)));
  }
  return;
}



void FUN_00016bea(int param_1)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  
  (*DAT_00016d04)(*(short *)(param_1 + 0x14) + 6,*(short *)(param_1 + 0x16) + 1,
                  *(short *)(param_1 + 0x1a) + -8,*(short *)(param_1 + 0x1c) + -2);
  (*DAT_00016d08)();
  pcVar2 = DAT_00016d10;
  pcVar1 = DAT_00016d0c;
  for (iVar3 = 0; iVar3 < *(char *)(param_1 + 6); iVar3 = iVar3 + 1) {
    (*pcVar2)(*(short *)(param_1 + 0x14) + 4,iVar3 * 2 + (int)*(short *)(param_1 + 0x16) + 1);
    (*pcVar1)();
  }
                    // WARNING: Could not recover jumptable at 0x00016c7a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00016d14)((int)*(short *)(param_1 + 0x14),(int)*(short *)(param_1 + 0x16),
                  (int)*(short *)(param_1 + 0x1a),(int)*(short *)(param_1 + 0x1c));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00016c7e(int param_1)

{
  code *pcVar1;
  code *pcVar2;
  undefined4 *puVar3;
  char cVar5;
  undefined4 uVar4;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  (*DAT_00016d04)(*(short *)(param_1 + 0x14) + 6,*(short *)(param_1 + 0x16) + 1,
                  *(short *)(param_1 + 0x1a) + -8,*(short *)(param_1 + 0x1c) + -2);
  (*DAT_00016d08)();
  pcVar2 = DAT_00016d10;
  pcVar1 = DAT_00016d0c;
  for (iVar9 = 0; iVar9 < *(char *)(param_1 + 6); iVar9 = iVar9 + 1) {
    (*pcVar2)(*(short *)(param_1 + 0x14) + 4,iVar9 * 2 + (int)*(short *)(param_1 + 0x16) + 1);
    (*pcVar1)();
  }
  iVar9 = (int)*(char *)(param_1 + 1) + (*(char *)(param_1 + 3) + 1) * -4;
  if (iVar9 < 0) {
    cVar5 = (char)iVar9 + '\x04';
  }
  else {
    cVar5 = '\x04';
  }
  *(char *)(param_1 + 6) = cVar5;
  *(char *)(param_1 + 0x20) = (char)*(undefined2 *)(param_1 + 0x1c);
  *(short *)(param_1 + 0x1c) = *(char *)(param_1 + 6) * 2 + 2;
  *(undefined *)(param_1 + 5) = 0;
  if ((int)*(short *)(param_1 + 0x1c) < (int)*(char *)(param_1 + 0x20)) {
    (*_LAB_00016e4c)((int)*(short *)(param_1 + 0x14),
                     (int)*(short *)(param_1 + 0x1c) + (int)*(short *)(param_1 + 0x16),
                     (int)*(short *)(param_1 + 0x1a),
                     (int)*(char *)(param_1 + 0x20) - (int)*(short *)(param_1 + 0x1c));
  }
  (*_LAB_00016e50)((int)*(short *)(param_1 + 0x14),(int)*(short *)(param_1 + 0x16),
                   (int)*(short *)(param_1 + 0x1a),(int)*(short *)(param_1 + 0x1c),
                   (int)_LAB_00016e4a);
  (*_LAB_00016e54)(*(short *)(param_1 + 0x14) + 6,*(short *)(param_1 + 0x16) + 1,
                   *(short *)(param_1 + 0x1a) + -8,*(short *)(param_1 + 0x1c) + -2);
  puVar3 = _LAB_00016e58;
  *_LAB_00016e58 = 0;
  puVar3[1] = puVar3[3];
  puVar3[2] = puVar3[4];
  iVar9 = DAT_00016e60;
  pcVar1 = _LAB_00016e5c;
  for (iVar8 = 0; iVar8 < *(char *)(param_1 + 6); iVar8 = iVar8 + 1) {
    puVar3[1] = puVar3[3];
    iVar7 = iVar8 * 2;
    if (iVar7 < 0) {
      iVar6 = puVar3[6];
    }
    else {
      iVar6 = 0;
    }
    puVar3[2] = puVar3[4] + iVar7 + iVar6;
    (*DAT_00016e64)(*(undefined4 *)
                     ((short)((short)*(undefined4 *)
                                      ((*(char *)(param_1 + 3) * 4 + iVar8) * 4 +
                                      *(int *)(param_1 + 0x24)) * 0xc) + iVar9 + 4));
    uVar4 = (*DAT_00016e68)(*(undefined4 *)
                             ((*(char *)(param_1 + 3) * 4 + iVar8) * 4 + *(int *)(param_1 + 0x24)));
    (*pcVar1)(0,*(short *)(param_1 + 0x14) + 4,*(short *)(param_1 + 0x16) + iVar7 + 1,uVar4);
  }
  return;
}



void FUN_0001712a(int param_1)

{
  undefined4 *puVar1;
  
  (*DAT_00017234)((int)*(short *)(param_1 + 0x14),(int)*(short *)(param_1 + 0x16),
                  (int)*(short *)(param_1 + 0x1a),(int)*(short *)(param_1 + 0x1c),(int)DAT_0001722e)
  ;
  (*DAT_00017238)(*(short *)(param_1 + 0x14) + 4,*(short *)(param_1 + 0x16) + 1,
                  (int)*(short *)(param_1 + 0x28),(int)*(short *)(param_1 + 0x2a));
  (*DAT_0001723c)(*(short *)(param_1 + 0x14) + 8,*(short *)(param_1 + 0x16) + 1,
                  *(short *)(param_1 + 0x1a) + -0xc,*(short *)(param_1 + 0x1c) + -2);
  puVar1 = DAT_00017240;
  DAT_00017240[1] = DAT_00017240[3];
  puVar1[2] = puVar1[4];
  *puVar1 = 0;
                    // WARNING: Could not recover jumptable at 0x000171b2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00017244)(*(undefined4 *)(param_1 + 0x24));
  return;
}



void FUN_000171b6(int param_1)

{
  (*DAT_0001723c)(*(short *)(param_1 + 0x14) + 8,*(short *)(param_1 + 0x16) + 1,
                  *(short *)(param_1 + 0x1a) + -0xc,*(short *)(param_1 + 0x1c) + -2);
  (*DAT_00017248)();
  (*DAT_0001724c)(*(short *)(param_1 + 0x14) + 4,*(short *)(param_1 + 0x16) + 1);
  (*DAT_00017250)();
                    // WARNING: Could not recover jumptable at 0x0001722a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00017254)((int)*(short *)(param_1 + 0x14),(int)*(short *)(param_1 + 0x16),
                  (int)*(short *)(param_1 + 0x1a),(int)*(short *)(param_1 + 0x1c));
  return;
}



void FUN_000173c6(int param_1)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  
  (*DAT_000174ec)(*(short *)(param_1 + 0x14) + 6,*(short *)(param_1 + 0x16) + 1,
                  *(short *)(param_1 + 0x1a) + -8,*(short *)(param_1 + 0x1c) + -2);
  (*DAT_000174f0)();
  pcVar2 = DAT_000174f8;
  pcVar1 = DAT_000174f4;
  for (iVar3 = 0; iVar3 < *(char *)(param_1 + 6); iVar3 = iVar3 + 1) {
    (*pcVar2)(*(short *)(param_1 + 0x14) + 4,iVar3 * 2 + (int)*(short *)(param_1 + 0x16) + 1);
    (*pcVar1)();
  }
                    // WARNING: Could not recover jumptable at 0x00017456. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_000174fc)((int)*(short *)(param_1 + 0x14),(int)*(short *)(param_1 + 0x16),
                  (int)*(short *)(param_1 + 0x1a),(int)*(short *)(param_1 + 0x1c));
  return;
}



void FUN_0001745a(int param_1)

{
  code *pcVar1;
  code *pcVar2;
  short sVar3;
  undefined4 *puVar4;
  char cVar7;
  undefined4 uVar5;
  short sVar6;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  (*DAT_000174ec)(*(short *)(param_1 + 0x14) + 6,*(short *)(param_1 + 0x16) + 1,
                  *(short *)(param_1 + 0x1a) + -8,*(short *)(param_1 + 0x1c) + -2);
  (*DAT_000174f0)();
  pcVar2 = DAT_000174f8;
  pcVar1 = DAT_000174f4;
  for (iVar11 = 0; iVar11 < *(char *)(param_1 + 6); iVar11 = iVar11 + 1) {
    (*pcVar2)(*(short *)(param_1 + 0x14) + 4,iVar11 * 2 + (int)*(short *)(param_1 + 0x16) + 1);
    (*pcVar1)();
  }
  iVar11 = (int)*(char *)(param_1 + 1) + (*(char *)(param_1 + 3) + 1) * -5;
  if (iVar11 < 0) {
    cVar7 = (char)iVar11 + '\x05';
  }
  else {
    cVar7 = '\x05';
  }
  *(char *)(param_1 + 6) = cVar7;
  *(char *)(param_1 + 0x20) = (char)*(undefined2 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x1c) = 0xc;
  *(undefined *)(param_1 + 5) = 0;
  if ((int)*(short *)(param_1 + 0x1c) < (int)*(char *)(param_1 + 0x20)) {
    (*DAT_00017640)((int)*(short *)(param_1 + 0x14),
                    (int)*(short *)(param_1 + 0x1c) + (int)*(short *)(param_1 + 0x16),
                    (int)*(short *)(param_1 + 0x1a),
                    (int)*(char *)(param_1 + 0x20) - (int)*(short *)(param_1 + 0x1c));
  }
  (*DAT_00017644)((int)*(short *)(param_1 + 0x14),(int)*(short *)(param_1 + 0x16),
                  (int)*(short *)(param_1 + 0x1a),(int)*(short *)(param_1 + 0x1c),(int)DAT_0001763a)
  ;
  (*DAT_00017648)(*(short *)(param_1 + 0x14) + 6,*(short *)(param_1 + 0x16) + 1,
                  *(short *)(param_1 + 0x1a) + -8,*(short *)(param_1 + 0x1c) + -2);
  puVar4 = DAT_0001764c;
  sVar3 = DAT_0001763c;
  for (iVar11 = 0; iVar11 < *(char *)(param_1 + 6); iVar11 = iVar11 + 1) {
    if (*(short *)((*(char *)(param_1 + 3) * 5 + iVar11) * 4 + *(int *)(param_1 + 0x24)) != sVar3) {
      uVar5 = (*DAT_00017650)((int)*(short *)((*(char *)(param_1 + 3) * 5 + iVar11) * 4 +
                                             *(int *)(param_1 + 0x24)));
      (*DAT_00017654)(0,*(short *)(param_1 + 0x14) + 4,
                      iVar11 * 2 + (int)*(short *)(param_1 + 0x16) + 1,uVar5);
    }
    if ((*(ushort *)((*(char *)(param_1 + 3) * 5 + iVar11) * 4 + *(int *)(param_1 + 0x24) + 2) & 1)
        == 0) {
      if ((*(ushort *)((*(char *)(param_1 + 3) * 5 + iVar11) * 4 + *(int *)(param_1 + 0x24) + 2) & 2
          ) == 0) {
        *puVar4 = 0;
      }
      else {
        *puVar4 = 1;
      }
    }
    else {
      *puVar4 = 9;
    }
    puVar4[1] = puVar4[3];
    if (iVar11 * 2 < 0) {
      iVar9 = puVar4[6];
    }
    else {
      iVar9 = 0;
    }
    puVar4[2] = puVar4[4] + iVar11 * 2 + iVar9;
    (*DAT_00017760)(*(undefined4 *)
                     ((short)(*(short *)((*(char *)(param_1 + 3) * 5 + iVar11) * 4 +
                                        *(int *)(param_1 + 0x24)) * 0xc) + DAT_0001775c));
    if (*(short *)((*(char *)(param_1 + 3) * 5 + iVar11) * 4 + *(int *)(param_1 + 0x24)) <
        DAT_00017756) {
      iVar9 = iVar11 * 2;
      puVar4[1] = puVar4[3] + 0x11;
      uVar5 = DAT_00017764;
      if (iVar9 < 0) {
        iVar8 = puVar4[6];
      }
      else {
        iVar8 = 0;
      }
      puVar4[2] = puVar4[4] + iVar9 + iVar8;
      (*DAT_00017768)(uVar5);
      puVar4[1] = puVar4[3] + 0x13;
      if (iVar9 < 0) {
        iVar8 = puVar4[6];
      }
      else {
        iVar8 = 0;
      }
      puVar4[2] = puVar4[4] + iVar9 + iVar8;
      sVar6 = *(short *)((*(char *)(param_1 + 3) * 5 + iVar11) * 4 + *(int *)(param_1 + 0x24));
      iVar9 = (int)sVar6;
      if (iVar9 < 0x4d) {
        uVar10 = (int)*(char *)(sVar6 + DAT_0001776c) & 0xff;
      }
      else {
        uVar10 = -(((*(byte *)(((uint)(DAT_00017758 + iVar9) >> 3) + DAT_00017770) &
                    *(byte *)(DAT_00017774 + (DAT_00017758 + iVar9 & 7U))) == 0) - 1);
      }
      (*DAT_00017778)(uVar10,2);
    }
    else if (*(short *)((*(char *)(param_1 + 3) * 5 + iVar11) * 4 + *(int *)(param_1 + 0x24)) !=
             sVar3) {
      puVar4[1] = puVar4[3] + 0x11;
      if (iVar11 * 2 < 0) {
        iVar9 = puVar4[6];
      }
      else {
        iVar9 = 0;
      }
      puVar4[2] = puVar4[4] + iVar11 * 2 + iVar9;
      sVar6 = (*DAT_00017928)((int)*(short *)((short)(*(short *)((*(char *)(param_1 + 3) * 5 +
                                                                 iVar11) * 4 +
                                                                *(int *)(param_1 + 0x24)) * 0xc) +
                                             DAT_00017924));
      (*DAT_0001792c)((int)sVar6,3);
    }
  }
  return;
}



void FUN_00017ad4(int param_1)

{
  (*DAT_00017be4)(*(short *)(param_1 + 0x14) + 2,*(short *)(param_1 + 0x16) + 1,
                  *(short *)(param_1 + 0x1a) + -4,*(short *)(param_1 + 0x1c) + -2);
  (*DAT_00017be8)();
                    // WARNING: Could not recover jumptable at 0x00017b28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00017bec)((int)*(short *)(param_1 + 0x14),(int)*(short *)(param_1 + 0x16),
                  (int)*(short *)(param_1 + 0x1a),(int)*(short *)(param_1 + 0x1c));
  return;
}



void FUN_00017b2c(int param_1)

{
  code *pcVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  (*DAT_00017bf0)((int)*(short *)(param_1 + 0x14),(int)*(short *)(param_1 + 0x16),
                  (int)*(short *)(param_1 + 0x1a),(int)*(short *)(param_1 + 0x1c),(int)DAT_00017bdc)
  ;
  (*DAT_00017be4)(*(short *)(param_1 + 0x14) + 2,*(short *)(param_1 + 0x16) + 1,
                  *(short *)(param_1 + 0x1a) + -4,*(short *)(param_1 + 0x1c) + -2);
  puVar2 = DAT_00017bf8;
  pcVar1 = DAT_00017bf4;
  for (iVar4 = 0; iVar4 < *(char *)(param_1 + 6); iVar4 = iVar4 + 1) {
    puVar2[1] = puVar2[3] + 2;
    if (iVar4 * 2 < 0) {
      uVar3 = puVar2[6];
    }
    else {
      uVar3 = 0;
    }
    puVar2[2] = puVar2[4] + iVar4 * 2 + uVar3;
    *puVar2 = (int)*(short *)(iVar4 * 2 + *(int *)(param_1 + 0x28)) & 0xffff;
    (*pcVar1)(*(undefined4 *)(iVar4 * 4 + *(int *)(param_1 + 0x24)));
  }
  return;
}



void FUN_00017e5c(short param_1,short param_2,ushort *param_3,short param_4)

{
  short sVar1;
  ushort **ppuVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  ppuVar2 = DAT_00017ec4;
  sVar1 = DAT_00017ec0;
  puVar4 = *DAT_00017ec4;
  *puVar4 = param_3[2] | DAT_00017eba;
  puVar4[2] = DAT_00017ebc;
  puVar4[3] = DAT_00017ebe + param_4;
  puVar4[4] = *param_3;
  puVar4[5] = param_3[1];
  puVar4[6] = param_3[3] + param_1 + sVar1;
  puVar4[7] = (param_3[4] + param_2) - 0x70;
  puVar3 = ppuVar2[8];
  puVar3[2] = 0;
  puVar3[3] = (ushort)((uint)puVar4 >> 3);
  ppuVar2[8] = puVar3 + 4;
  ppuVar2[7] = (ushort *)((int)ppuVar2[7] + 1);
  *ppuVar2 = puVar4 + 0x10;
  ppuVar2[3] = (ushort *)((int)ppuVar2[3] + 1);
  return;
}



void FUN_000184dc(int **param_1)

{
  int **ppiVar1;
  int *piVar2;
  int unaff_r14;
  byte bVar3;
  uint in_stack_00000000;
  
  while( true ) {
    piVar2 = param_1[1];
    ppiVar1 = param_1 + 2;
    bVar3 = piVar2 == *param_1;
    if ((bool)bVar3) break;
    DAT_0001858c = (uint)*ppiVar1 & 0xffff0000 | 5;
    DAT_00018590 = ((int)*(short *)(param_1 + 3) & 0xfffffffbU) << 0x10 | in_stack_00000000 >> 0x10;
    (*DAT_00018530)(&DAT_0001858c);
    if ((bVar3 & 1) != 1) {
      unaff_r14 = unaff_r14 + 0x20;
      *piVar2 = unaff_r14;
    }
    bVar3 = *(byte *)ppiVar1 & 3;
    if (((bVar3 != 0) && (ppiVar1 = param_1 + 4, bVar3 != 1)) && (ppiVar1 = param_1 + 8, bVar3 != 3)
       ) {
      ppiVar1 = param_1 + 0xe;
    }
    param_1 = ppiVar1 + 3;
  }
  return;
}



void FUN_00018534(int **param_1)

{
  int **ppiVar1;
  int *piVar2;
  int unaff_r14;
  byte bVar3;
  uint in_stack_00000000;
  
  while( true ) {
    piVar2 = param_1[1];
    ppiVar1 = param_1 + 2;
    bVar3 = piVar2 == *param_1;
    if ((bool)bVar3) break;
    DAT_0001858c = (uint)*ppiVar1 & 0xffff0000 | 5;
    DAT_00018590 = ((int)*(short *)(param_1 + 3) & 0xfffffffbU) << 0x10 | in_stack_00000000 >> 0x10;
    (*DAT_00018588)(&DAT_0001858c);
    if ((bVar3 & 1) != 1) {
      unaff_r14 = unaff_r14 + 0x20;
      *piVar2 = unaff_r14;
    }
    bVar3 = *(byte *)ppiVar1 & 3;
    if (((bVar3 != 0) && (ppiVar1 = param_1 + 4, bVar3 != 1)) && (ppiVar1 = param_1 + 8, bVar3 != 3)
       ) {
      ppiVar1 = param_1 + 0xe;
    }
    param_1 = ppiVar1 + 3;
  }
  return;
}



uint FUN_000185d0(uint *param_1)

{
  uint *puVar1;
  byte bVar2;
  
  while( true ) {
    puVar1 = param_1 + 2;
    if (param_1[1] == *param_1) break;
    if (((int)*(short *)(param_1 + 4) & 0xf0U) == 0) {
      bVar2 = (param_1[1] & 0x8000000) != 0;
      FUN_0001866c();
      if ((bVar2 & 1) != 1) {
        FUN_00018612();
      }
    }
    param_1 = puVar1 + 5;
  }
  return (int)*(short *)(param_1 + 4);
}



int FUN_00018612(char *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_r10;
  int unaff_r11;
  int unaff_r12;
  int unaff_r13;
  
  iVar1 = (int)*(short *)(unaff_r10 + 4);
  iVar2 = (int)*(short *)(unaff_r11 + 4);
  iVar3 = (int)*(short *)(unaff_r12 + 4);
  iVar4 = (int)*(short *)(unaff_r13 + 4);
  if (((int)*param_1 & 0xf0U) == 0) {
    if (iVar1 <= iVar2) {
      iVar1 = iVar2;
    }
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    if (iVar1 <= iVar3) {
      iVar1 = iVar3;
    }
  }
  else if (((int)*param_1 & 0xf0U) == 0x10) {
    if (iVar2 <= iVar1) {
      iVar1 = iVar2;
    }
    if (iVar4 <= iVar3) {
      iVar3 = iVar4;
    }
    if (iVar3 <= iVar1) {
      iVar1 = iVar3;
    }
  }
  else {
    iVar1 = iVar1 + iVar2 + iVar3 + iVar4 >> 2;
  }
  iVar3 = *(int *)(param_3 + 0x14);
  if (iVar1 << 8 < iVar3) {
    *(int *)(param_3 + 0x14) = iVar1 << 8;
    iVar3 = 10;
  }
  return iVar3;
}



void FUN_0001866c(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  short *unaff_r10;
  short *unaff_r11;
  short *unaff_r12;
  short *unaff_r13;
  byte bVar5;
  
  uVar1 = *(uint *)(unaff_r10 + 0xc);
  uVar2 = *(uint *)(unaff_r11 + 0xc);
  uVar3 = *(uint *)(unaff_r12 + 0xc);
  uVar4 = *(uint *)(unaff_r13 + 0xc);
  if (((uVar4 & uVar1 & uVar2 & uVar3) == 0) &&
     (bVar5 = ((uVar1 | uVar2 | uVar3 | uVar4) & 0x20) == 0, (bool)bVar5)) {
    *(uint *)(unaff_r10 + 0xe) = uVar1;
    *(uint *)(unaff_r11 + 0xe) = uVar2;
    *(uint *)(unaff_r12 + 0xe) = uVar3;
    *(uint *)(unaff_r13 + 0xe) = uVar4;
    *(int *)(unaff_r10 + 8) = (int)*unaff_r10;
    *(int *)(unaff_r10 + 10) = (int)unaff_r10[1];
    *(int *)(unaff_r11 + 8) = (int)*unaff_r11;
    *(int *)(unaff_r11 + 10) = (int)unaff_r11[1];
    *(int *)(unaff_r12 + 8) = (int)*unaff_r12;
    *(int *)(unaff_r12 + 10) = (int)unaff_r12[1];
    *(int *)(unaff_r13 + 8) = (int)*unaff_r13;
    *(int *)(unaff_r13 + 10) = (int)unaff_r13[1];
    (*DAT_00018708)();
    if ((((bVar5 & 1) != 1) &&
        (((bVar5 = (int)(short)((short)*(undefined4 *)(unaff_r13 + 10) -
                               (short)*(undefined4 *)(unaff_r11 + 10)) *
                   (int)(short)((short)*(undefined4 *)(unaff_r12 + 8) -
                               (short)*(undefined4 *)(unaff_r10 + 8)) <
                   (int)(short)((short)*(undefined4 *)(unaff_r12 + 10) -
                               (short)*(undefined4 *)(unaff_r10 + 10)) *
                   (int)(short)((short)*(undefined4 *)(unaff_r13 + 8) -
                               (short)*(undefined4 *)(unaff_r11 + 8)), !(bool)bVar5 &&
          (FUN_0001877a(), (bVar5 & 1) != 1)) && (FUN_0001877a(), (bVar5 & 1) != 1)))) &&
       ((FUN_0001877a(), (bVar5 & 1) != 1 && (FUN_0001877a(), (bVar5 & 1) != 1)))) {
      return;
    }
  }
  return;
}



void FUN_0001877a(undefined4 param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int unaff_r8;
  int unaff_r9;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  sVar1 = (short)*(undefined4 *)(unaff_r8 + 0x10);
  sVar3 = (short)*(undefined4 *)(unaff_r9 + 0x10) - sVar1;
  sVar2 = (short)*(undefined4 *)(unaff_r8 + 0x14);
  sVar4 = (short)*(undefined4 *)(unaff_r9 + 0x14) - sVar2;
  iVar5 = (int)(short)(*(short *)(param_3 + 8) - sVar2) * (int)sVar3;
  iVar6 = (int)(short)(*(short *)(param_3 + 0xc) - sVar1) * (int)sVar4;
  if (iVar5 <= iVar6) {
    iVar7 = (int)(short)(*(short *)(param_3 + 10) - sVar2) * (int)sVar3;
    if (((iVar7 <= iVar6) &&
        (iVar6 = (int)(short)(*(short *)(param_3 + 0xe) - sVar1) * (int)sVar4, iVar5 <= iVar6)) &&
       (iVar7 <= iVar6)) {
      return;
    }
  }
  return;
}



int * FUN_0001883c(int *param_1)

{
  int *in_r0;
  int *piVar1;
  int *piVar2;
  byte bVar3;
  int in_stack_00000000;
  int *in_stack_00000004;
  
LAB_00018858:
  do {
    piVar2 = param_1 + 1;
    if (*piVar2 == *param_1) {
      return in_r0;
    }
    while( true ) {
      param_1 = piVar2 + 1;
      in_stack_00000000 = in_stack_00000000 + 1;
      bVar3 = in_stack_00000000 == *in_stack_00000004;
      if (!(bool)bVar3) break;
      FUN_000194b8();
      if ((bVar3 & 1) == 1) {
        in_r0 = in_stack_00000004 + 4;
        in_stack_00000004 = in_r0;
        goto LAB_00018858;
      }
      piVar1 = (int *)FUN_000188d2();
      piVar2 = param_1 + 1;
      if (*piVar2 == *param_1) {
        return piVar1;
      }
    }
    in_r0 = (int *)FUN_000194b8();
    if ((bVar3 & 1) != 1) {
      in_r0 = (int *)FUN_000193ca();
    }
  } while( true );
}



int * FUN_00018886(int *param_1)

{
  int *in_r0;
  int *piVar1;
  int *piVar2;
  byte bVar3;
  int in_stack_00000000;
  int *in_stack_00000004;
  
LAB_000188a2:
  do {
    piVar2 = param_1 + 1;
    if (*piVar2 == *param_1) {
      return in_r0;
    }
    while( true ) {
      param_1 = piVar2 + 1;
      in_stack_00000000 = in_stack_00000000 + 1;
      bVar3 = in_stack_00000000 == *in_stack_00000004;
      if (!(bool)bVar3) break;
      FUN_0001951c();
      if ((bVar3 & 1) == 1) {
        in_r0 = in_stack_00000004 + 4;
        in_stack_00000004 = in_r0;
        goto LAB_000188a2;
      }
      piVar1 = (int *)FUN_000188d2();
      piVar2 = param_1 + 1;
      if (*piVar2 == *param_1) {
        return piVar1;
      }
    }
    in_r0 = (int *)FUN_0001951c();
    if ((bVar3 & 1) != 1) {
      in_r0 = (int *)FUN_000193ca();
    }
  } while( true );
}



void FUN_000188d2(int param_1)

{
  uint in_r0;
  undefined2 uVar1;
  uint uVar2;
  undefined2 *extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  int extraout_r2_04;
  undefined2 *extraout_r2_05;
  undefined2 *extraout_r2_06;
  int extraout_r2_07;
  int extraout_r2_08;
  int extraout_r2_09;
  undefined2 *extraout_r2_10;
  int extraout_r2_11;
  undefined2 *extraout_r2_12;
  int extraout_r2_13;
  int extraout_r2_14;
  int extraout_r2_15;
  int extraout_r2_16;
  int extraout_r2_17;
  undefined2 *extraout_r2_18;
  undefined2 *extraout_r2_19;
  int extraout_r2_20;
  int extraout_r2_21;
  int extraout_r2_22;
  undefined2 *extraout_r2_23;
  int extraout_r2_24;
  undefined2 *extraout_r2_25;
  int extraout_r2_26;
  int extraout_r2_27;
  int extraout_r2_28;
  int extraout_r2_29;
  int extraout_r2_30;
  undefined2 *extraout_r2_31;
  undefined2 *extraout_r2_32;
  int extraout_r2_33;
  int extraout_r2_34;
  int extraout_r2_35;
  undefined2 *extraout_r2_36;
  int extraout_r2_37;
  int unaff_r8;
  uint unaff_r9;
  uint uVar3;
  int *unaff_r13;
  int unaff_r14;
  
  uVar3 = unaff_r9 & in_r0;
  if (uVar3 == 0) {
    *unaff_r13 = unaff_r14 + 0x20;
    return;
  }
  uVar2 = unaff_r13[4];
  unaff_r13[4] = uVar2 + 8;
  *(short *)(unaff_r14 + 0x1c) = (short)(uVar2 >> 3);
  *unaff_r13 = unaff_r14 + 0x20;
  if (uVar3 != 1) {
    if (uVar3 != 2) {
      uVar1 = FUN_00018a2a();
      if (unaff_r8 == 0) {
        *extraout_r2 = uVar1;
        uVar1 = FUN_00018a3c();
        *(undefined2 *)(extraout_r2_00 + 2) = uVar1;
        uVar1 = FUN_00018a3c();
        *(undefined2 *)(extraout_r2_01 + 4) = uVar1;
        uVar1 = FUN_00018a3c();
        *(undefined2 *)(extraout_r2_02 + 6) = uVar1;
      }
      else if (unaff_r8 == 1) {
        extraout_r2[1] = uVar1;
        uVar1 = FUN_00018a3c();
        *extraout_r2_06 = uVar1;
        uVar1 = FUN_00018a3c();
        *(undefined2 *)(extraout_r2_07 + 6) = uVar1;
        uVar1 = FUN_00018a3c();
        *(undefined2 *)(extraout_r2_08 + 4) = uVar1;
      }
      else if (unaff_r8 == 2) {
        extraout_r2[2] = uVar1;
        uVar1 = FUN_00018a3c();
        *(undefined2 *)(extraout_r2_09 + 6) = uVar1;
        uVar1 = FUN_00018a3c();
        *extraout_r2_10 = uVar1;
        uVar1 = FUN_00018a3c();
        *(undefined2 *)(extraout_r2_11 + 2) = uVar1;
      }
      else {
        extraout_r2[3] = uVar1;
        uVar1 = FUN_00018a3c();
        *(undefined2 *)(extraout_r2_03 + 4) = uVar1;
        uVar1 = FUN_00018a3c();
        *(undefined2 *)(extraout_r2_04 + 2) = uVar1;
        uVar1 = FUN_00018a3c();
        *extraout_r2_05 = uVar1;
      }
      return;
    }
    uVar1 = FUN_00018a2a();
    param_1 = param_1 + 6;
    if (unaff_r8 == 0) {
      *extraout_r2_12 = uVar1;
      uVar1 = FUN_00018a3c(param_1);
      param_1 = param_1 + 6;
      *(undefined2 *)(extraout_r2_13 + 2) = uVar1;
      uVar1 = FUN_00018a3c(param_1);
      *(undefined2 *)(extraout_r2_14 + 4) = uVar1;
      uVar1 = FUN_00018a3c(param_1 + 6);
      *(undefined2 *)(extraout_r2_15 + 6) = uVar1;
    }
    else if (unaff_r8 == 1) {
      extraout_r2_12[1] = uVar1;
      uVar1 = FUN_00018a3c(param_1);
      param_1 = param_1 + 6;
      *extraout_r2_19 = uVar1;
      uVar1 = FUN_00018a3c(param_1);
      *(undefined2 *)(extraout_r2_20 + 6) = uVar1;
      uVar1 = FUN_00018a3c(param_1 + 6);
      *(undefined2 *)(extraout_r2_21 + 4) = uVar1;
    }
    else if (unaff_r8 == 2) {
      extraout_r2_12[2] = uVar1;
      uVar1 = FUN_00018a3c(param_1);
      param_1 = param_1 + 6;
      *(undefined2 *)(extraout_r2_22 + 6) = uVar1;
      uVar1 = FUN_00018a3c(param_1);
      *extraout_r2_23 = uVar1;
      uVar1 = FUN_00018a3c(param_1 + 6);
      *(undefined2 *)(extraout_r2_24 + 2) = uVar1;
    }
    else {
      extraout_r2_12[3] = uVar1;
      uVar1 = FUN_00018a3c(param_1);
      param_1 = param_1 + 6;
      *(undefined2 *)(extraout_r2_16 + 4) = uVar1;
      uVar1 = FUN_00018a3c(param_1);
      *(undefined2 *)(extraout_r2_17 + 2) = uVar1;
      uVar1 = FUN_00018a3c(param_1 + 6);
      *extraout_r2_18 = uVar1;
    }
    return;
  }
  uVar1 = FUN_00018a2a();
  param_1 = param_1 + -6;
  if (unaff_r8 == 0) {
    *extraout_r2_25 = uVar1;
    uVar1 = FUN_00018a3c(param_1);
    param_1 = param_1 + -6;
    *(undefined2 *)(extraout_r2_26 + 2) = uVar1;
    uVar1 = FUN_00018a3c(param_1);
    *(undefined2 *)(extraout_r2_27 + 4) = uVar1;
    uVar1 = FUN_00018a3c(param_1 + -6);
    *(undefined2 *)(extraout_r2_28 + 6) = uVar1;
  }
  else if (unaff_r8 == 1) {
    extraout_r2_25[1] = uVar1;
    uVar1 = FUN_00018a3c(param_1);
    param_1 = param_1 + -6;
    *extraout_r2_32 = uVar1;
    uVar1 = FUN_00018a3c(param_1);
    *(undefined2 *)(extraout_r2_33 + 6) = uVar1;
    uVar1 = FUN_00018a3c(param_1 + -6);
    *(undefined2 *)(extraout_r2_34 + 4) = uVar1;
  }
  else if (unaff_r8 == 2) {
    extraout_r2_25[2] = uVar1;
    uVar1 = FUN_00018a3c(param_1);
    param_1 = param_1 + -6;
    *(undefined2 *)(extraout_r2_35 + 6) = uVar1;
    uVar1 = FUN_00018a3c(param_1);
    *extraout_r2_36 = uVar1;
    uVar1 = FUN_00018a3c(param_1 + -6);
    *(undefined2 *)(extraout_r2_37 + 2) = uVar1;
  }
  else {
    extraout_r2_25[3] = uVar1;
    uVar1 = FUN_00018a3c(param_1);
    param_1 = param_1 + -6;
    *(undefined2 *)(extraout_r2_29 + 4) = uVar1;
    uVar1 = FUN_00018a3c(param_1);
    *(undefined2 *)(extraout_r2_30 + 2) = uVar1;
    uVar1 = FUN_00018a3c(param_1 + -6);
    *extraout_r2_31 = uVar1;
  }
  return;
}



uint FUN_00018a2a(undefined4 *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int in_r1;
  short sVar5;
  uint uVar4;
  short *psVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *unaff_r13;
  uint in_sr;
  int iVar10;
  int iVar11;
  
  psVar6 = (short *)(DAT_00018a64 + ((uint)(in_r1 << 1) >> 8 & 0xfffffff8));
  iVar10 = (int)(short)*DAT_00018a68 * (int)(short)*param_1;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if (iVar10 < 0) {
      if (-1 < iVar10) {
        if (-1 < iVar10 == true) {
          iVar10 = -0x80000000;
        }
      }
      else {
        iVar10 = 0x7fffffff;
      }
    }
  }
  else {
    iVar10 = iVar10 + (uint)(iVar10 < 0);
  }
  iVar11 = (int)(short)*(undefined4 *)((int)DAT_00018a68 + 2) *
           (int)(short)*(undefined4 *)((int)param_1 + 2);
  cVar2 = (-1 < iVar11) + (iVar10 < 0);
  iVar11 = iVar10 + iVar11;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((char)((iVar11 < 0) + (iVar10 < 0)) == '\x01') {
      if (cVar2 == '\0') {
        iVar11 = 0x7fffffff;
      }
      else if (cVar2 == '\x02') {
        iVar11 = -0x80000000;
      }
    }
  }
  else {
    iVar11 = iVar11 + (uint)(iVar11 < iVar10);
  }
  iVar10 = (int)(short)DAT_00018a68[1] * (int)(short)param_1[1];
  cVar2 = (-1 < iVar10) + (iVar11 < 0);
  iVar10 = iVar11 + iVar10;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((char)((iVar10 < 0) + (iVar11 < 0)) == '\x01') {
      if (cVar2 == '\0') {
        iVar10 = 0x7fffffff;
      }
      else if (cVar2 == '\x02') {
        iVar10 = -0x80000000;
      }
    }
  }
  else {
    iVar10 = iVar10 + (uint)(iVar10 < iVar11);
  }
  if (iVar10 < 1) {
    uVar3 = *unaff_r13 * 0x100 + (int)psVar6[2];
    uVar7 = unaff_r13[1] * 0x100 + (int)psVar6[1];
    uVar9 = unaff_r13[2] * 0x100 + (int)*psVar6;
  }
  else {
    sVar5 = (short)((uint)iVar10 >> 0x10);
    uVar3 = (int)*DAT_00018a6c * (int)sVar5 + *unaff_r13 * 0x100 + (int)psVar6[2];
    uVar7 = (int)DAT_00018a6c[1] * (int)sVar5 + unaff_r13[1] * 0x100 + (int)psVar6[1];
    uVar9 = (int)DAT_00018a6c[2] * (int)sVar5 + unaff_r13[2] * 0x100 + (int)*psVar6;
  }
  uVar4 = (uint)DAT_00018ace;
  bVar1 = (int)uVar4 <= (int)uVar3;
  if ((int)uVar3 < 1) {
    uVar3 = 0;
  }
  uVar3 = uVar3 & uVar4;
  if (bVar1) {
    uVar3 = uVar4;
  }
  uVar3 = uVar3 * 4;
  if (0 < (int)uVar7) {
    uVar8 = uVar7 & uVar4;
    if ((int)uVar4 <= (int)uVar7) {
      uVar8 = uVar4;
    }
    uVar3 = uVar3 + (uVar8 >> 3);
  }
  if ((int)uVar9 < 1) {
    return uVar3;
  }
  if ((int)uVar4 < (int)uVar9) {
    return uVar3 | 0x1f;
  }
  return uVar3 | uVar9 >> 8;
}



uint FUN_00018a3c(undefined4 *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  short sVar5;
  uint uVar4;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int unaff_r10;
  int unaff_r11;
  int unaff_r12;
  char *unaff_r13;
  uint in_sr;
  int iVar9;
  int iVar10;
  
  iVar9 = (int)(short)*DAT_00018a68 * (int)(short)*param_1;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if (iVar9 < 0) {
      if (-1 < iVar9) {
        if (-1 < iVar9 == true) {
          iVar9 = -0x80000000;
        }
      }
      else {
        iVar9 = 0x7fffffff;
      }
    }
  }
  else {
    iVar9 = iVar9 + (uint)(iVar9 < 0);
  }
  iVar10 = (int)(short)*(undefined4 *)((int)DAT_00018a68 + 2) *
           (int)(short)*(undefined4 *)((int)param_1 + 2);
  cVar2 = (-1 < iVar10) + (iVar9 < 0);
  iVar10 = iVar9 + iVar10;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((char)((iVar10 < 0) + (iVar9 < 0)) == '\x01') {
      if (cVar2 == '\0') {
        iVar10 = 0x7fffffff;
      }
      else if (cVar2 == '\x02') {
        iVar10 = -0x80000000;
      }
    }
  }
  else {
    iVar10 = iVar10 + (uint)(iVar10 < iVar9);
  }
  iVar9 = (int)(short)DAT_00018a68[1] * (int)(short)param_1[1];
  cVar2 = (-1 < iVar9) + (iVar10 < 0);
  iVar9 = iVar10 + iVar9;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((char)((iVar9 < 0) + (iVar10 < 0)) == '\x01') {
      if (cVar2 == '\0') {
        iVar9 = 0x7fffffff;
      }
      else if (cVar2 == '\x02') {
        iVar9 = -0x80000000;
      }
    }
  }
  else {
    iVar9 = iVar9 + (uint)(iVar9 < iVar10);
  }
  if (iVar9 < 1) {
    uVar3 = *unaff_r13 * 0x100 + unaff_r10;
    uVar6 = unaff_r13[1] * 0x100 + unaff_r11;
    uVar8 = unaff_r13[2] * 0x100 + unaff_r12;
  }
  else {
    sVar5 = (short)((uint)iVar9 >> 0x10);
    uVar3 = (int)*DAT_00018a6c * (int)sVar5 + *unaff_r13 * 0x100 + unaff_r10;
    uVar6 = (int)DAT_00018a6c[1] * (int)sVar5 + unaff_r13[1] * 0x100 + unaff_r11;
    uVar8 = (int)DAT_00018a6c[2] * (int)sVar5 + unaff_r13[2] * 0x100 + unaff_r12;
  }
  uVar4 = (uint)DAT_00018ace;
  bVar1 = (int)uVar4 <= (int)uVar3;
  if ((int)uVar3 < 1) {
    uVar3 = 0;
  }
  uVar3 = uVar3 & uVar4;
  if (bVar1) {
    uVar3 = uVar4;
  }
  uVar3 = uVar3 * 4;
  if (0 < (int)uVar6) {
    uVar7 = uVar6 & uVar4;
    if ((int)uVar4 <= (int)uVar6) {
      uVar7 = uVar4;
    }
    uVar3 = uVar3 + (uVar7 >> 3);
  }
  if ((int)uVar8 < 1) {
    return uVar3;
  }
  if ((int)uVar4 < (int)uVar8) {
    return uVar3 | 0x1f;
  }
  return uVar3 | uVar8 >> 8;
}



void FUN_00018b4c(int *param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  
  while( true ) {
    iVar2 = *param_1;
    piVar1 = param_1 + 1;
    param_1 = param_1 + 2;
    bVar3 = *piVar1 == iVar2;
    if ((bool)bVar3) break;
    FUN_000194b8();
    if ((bVar3 & 1) != 1) {
      FUN_00018b86();
    }
  }
  return;
}



void FUN_00018b68(int *param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  
  while( true ) {
    iVar2 = *param_1;
    piVar1 = param_1 + 1;
    param_1 = param_1 + 2;
    bVar3 = *piVar1 == iVar2;
    if ((bool)bVar3) break;
    FUN_0001951c();
    if ((bVar3 & 1) != 1) {
      FUN_00018b86();
    }
  }
  return;
}



void FUN_00018b86(void)

{
  uint in_r0;
  undefined2 uVar1;
  uint uVar2;
  undefined2 *extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  int extraout_r2_04;
  undefined2 *extraout_r2_05;
  undefined2 *extraout_r2_06;
  int extraout_r2_07;
  int extraout_r2_08;
  int extraout_r2_09;
  undefined2 *extraout_r2_10;
  int extraout_r2_11;
  undefined2 *extraout_r2_12;
  int extraout_r2_13;
  int extraout_r2_14;
  int extraout_r2_15;
  int extraout_r2_16;
  int extraout_r2_17;
  undefined2 *extraout_r2_18;
  undefined2 *extraout_r2_19;
  int extraout_r2_20;
  int extraout_r2_21;
  int extraout_r2_22;
  undefined2 *extraout_r2_23;
  int extraout_r2_24;
  uint *extraout_r2_25;
  int unaff_r8;
  uint unaff_r9;
  uint uVar3;
  int *unaff_r13;
  int unaff_r14;
  
  uVar3 = unaff_r9 & in_r0;
  if (uVar3 == 0) {
    *unaff_r13 = unaff_r14 + -0x20;
    return;
  }
  uVar2 = unaff_r13[4];
  unaff_r13[4] = uVar2 - 8;
  *(short *)(unaff_r14 + 0x1c) = (short)(uVar2 >> 3);
  *unaff_r13 = unaff_r14 + -0x20;
  if (uVar3 == 1) {
    uVar3 = FUN_00018c72();
    uVar3 = uVar3 << 0x10 | uVar3 & 0xffff;
    *extraout_r2_25 = uVar3;
    extraout_r2_25[1] = uVar3;
    return;
  }
  if (uVar3 != 2) {
    uVar1 = FUN_00018c72();
    if (unaff_r8 == 0) {
      *extraout_r2 = uVar1;
      uVar1 = FUN_00018c84();
      *(undefined2 *)(extraout_r2_00 + 2) = uVar1;
      uVar1 = FUN_00018c84();
      *(undefined2 *)(extraout_r2_01 + 4) = uVar1;
      uVar1 = FUN_00018c84();
      *(undefined2 *)(extraout_r2_02 + 6) = uVar1;
      return;
    }
    if (unaff_r8 != 1) {
      if (unaff_r8 != 2) {
        extraout_r2[3] = uVar1;
        uVar1 = FUN_00018c84();
        *(undefined2 *)(extraout_r2_03 + 4) = uVar1;
        uVar1 = FUN_00018c84();
        *(undefined2 *)(extraout_r2_04 + 2) = uVar1;
        uVar1 = FUN_00018c84();
        *extraout_r2_05 = uVar1;
        return;
      }
      extraout_r2[2] = uVar1;
      uVar1 = FUN_00018c84();
      *(undefined2 *)(extraout_r2_09 + 6) = uVar1;
      uVar1 = FUN_00018c84();
      *extraout_r2_10 = uVar1;
      uVar1 = FUN_00018c84();
      *(undefined2 *)(extraout_r2_11 + 2) = uVar1;
      return;
    }
    extraout_r2[1] = uVar1;
    uVar1 = FUN_00018c84();
    *extraout_r2_06 = uVar1;
    uVar1 = FUN_00018c84();
    *(undefined2 *)(extraout_r2_07 + 6) = uVar1;
    uVar1 = FUN_00018c84();
    *(undefined2 *)(extraout_r2_08 + 4) = uVar1;
    return;
  }
  uVar1 = FUN_00018cf6();
  if (unaff_r8 == 0) {
    *extraout_r2_12 = uVar1;
    uVar1 = FUN_00018d08();
    *(undefined2 *)(extraout_r2_13 + 2) = uVar1;
    uVar1 = FUN_00018d08();
    *(undefined2 *)(extraout_r2_14 + 4) = uVar1;
    uVar1 = FUN_00018d08();
    *(undefined2 *)(extraout_r2_15 + 6) = uVar1;
    return;
  }
  if (unaff_r8 != 1) {
    if (unaff_r8 != 2) {
      extraout_r2_12[3] = uVar1;
      uVar1 = FUN_00018d08();
      *(undefined2 *)(extraout_r2_16 + 4) = uVar1;
      uVar1 = FUN_00018d08();
      *(undefined2 *)(extraout_r2_17 + 2) = uVar1;
      uVar1 = FUN_00018d08();
      *extraout_r2_18 = uVar1;
      return;
    }
    extraout_r2_12[2] = uVar1;
    uVar1 = FUN_00018d08();
    *(undefined2 *)(extraout_r2_22 + 6) = uVar1;
    uVar1 = FUN_00018d08();
    *extraout_r2_23 = uVar1;
    uVar1 = FUN_00018d08();
    *(undefined2 *)(extraout_r2_24 + 2) = uVar1;
    return;
  }
  extraout_r2_12[1] = uVar1;
  uVar1 = FUN_00018d08();
  *extraout_r2_19 = uVar1;
  uVar1 = FUN_00018d08();
  *(undefined2 *)(extraout_r2_20 + 6) = uVar1;
  uVar1 = FUN_00018d08();
  *(undefined2 *)(extraout_r2_21 + 4) = uVar1;
  return;
}



uint FUN_00018c72(undefined4 *param_1)

{
  bool bVar1;
  char cVar2;
  int in_r1;
  uint uVar3;
  short sVar5;
  uint uVar4;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint in_sr;
  int iVar9;
  int iVar10;
  
  uVar3 = (uint)(in_r1 << 1) >> 8 & 0xfffffff8;
  uVar8 = (uint)*(short *)((int)&DAT_00018e58 + uVar3);
  uVar7 = (uint)*(short *)((int)&DAT_00018e58 + uVar3 + 2);
  uVar3 = (uint)*(short *)((int)&DAT_00018e5c + uVar3);
  iVar9 = (int)DAT_00018e3c._2_2_ * (int)(short)*param_1;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if (iVar9 < 0) {
      if (-1 < iVar9) {
        if (-1 < iVar9 == true) {
          iVar9 = -0x80000000;
        }
      }
      else {
        iVar9 = 0x7fffffff;
      }
    }
  }
  else {
    iVar9 = iVar9 + (uint)(iVar9 < 0);
  }
  iVar10 = (int)DAT_00018e40._0_2_ * (int)(short)*(undefined4 *)((int)param_1 + 2);
  cVar2 = (-1 < iVar10) + (iVar9 < 0);
  iVar10 = iVar9 + iVar10;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((char)((iVar10 < 0) + (iVar9 < 0)) == '\x01') {
      if (cVar2 == '\0') {
        iVar10 = 0x7fffffff;
      }
      else if (cVar2 == '\x02') {
        iVar10 = -0x80000000;
      }
    }
  }
  else {
    iVar10 = iVar10 + (uint)(iVar10 < iVar9);
  }
  iVar9 = (int)DAT_00018e40._2_2_ * (int)(short)param_1[1];
  cVar2 = (-1 < iVar9) + (iVar10 < 0);
  iVar9 = iVar10 + iVar9;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((char)((iVar9 < 0) + (iVar10 < 0)) == '\x01') {
      if (cVar2 == '\0') {
        iVar9 = 0x7fffffff;
      }
      else if (cVar2 == '\x02') {
        iVar9 = -0x80000000;
      }
    }
  }
  else {
    iVar9 = iVar9 + (uint)(iVar9 < iVar10);
  }
  if (0 < iVar9) {
    sVar5 = (short)((uint)iVar9 >> 0x10);
    uVar3 = (int)DAT_00018e50 * (int)sVar5 + uVar3;
    uVar7 = (int)DAT_00018e52 * (int)sVar5 + uVar7;
    uVar8 = (int)DAT_00018e54 * (int)sVar5 + uVar8;
  }
  uVar4 = (uint)DAT_00018cec;
  bVar1 = (int)uVar4 <= (int)uVar3;
  if ((int)uVar3 < 1) {
    uVar3 = 0;
  }
  uVar3 = uVar3 & uVar4;
  if (bVar1) {
    uVar3 = uVar4;
  }
  uVar3 = uVar3 * 4;
  if (0 < (int)uVar7) {
    uVar6 = uVar7 & uVar4;
    if ((int)uVar4 <= (int)uVar7) {
      uVar6 = uVar4;
    }
    uVar3 = uVar3 + (uVar6 >> 3);
  }
  if ((int)uVar8 < 1) {
    return uVar3;
  }
  if ((int)uVar4 < (int)uVar8) {
    return uVar3 | 0x1f;
  }
  return uVar3 | uVar8 >> 8;
}



uint FUN_00018c84(undefined4 *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  short sVar5;
  uint uVar4;
  uint uVar6;
  uint unaff_r10;
  uint unaff_r11;
  uint unaff_r12;
  uint in_sr;
  int iVar7;
  int iVar8;
  
  iVar7 = (int)DAT_00018e3c._2_2_ * (int)(short)*param_1;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if (iVar7 < 0) {
      if (-1 < iVar7) {
        if (-1 < iVar7 == true) {
          iVar7 = -0x80000000;
        }
      }
      else {
        iVar7 = 0x7fffffff;
      }
    }
  }
  else {
    iVar7 = iVar7 + (uint)(iVar7 < 0);
  }
  iVar8 = (int)DAT_00018e40._0_2_ * (int)(short)*(undefined4 *)((int)param_1 + 2);
  cVar2 = (-1 < iVar8) + (iVar7 < 0);
  iVar8 = iVar7 + iVar8;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((char)((iVar8 < 0) + (iVar7 < 0)) == '\x01') {
      if (cVar2 == '\0') {
        iVar8 = 0x7fffffff;
      }
      else if (cVar2 == '\x02') {
        iVar8 = -0x80000000;
      }
    }
  }
  else {
    iVar8 = iVar8 + (uint)(iVar8 < iVar7);
  }
  iVar7 = (int)DAT_00018e40._2_2_ * (int)(short)param_1[1];
  cVar2 = (-1 < iVar7) + (iVar8 < 0);
  iVar7 = iVar8 + iVar7;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((char)((iVar7 < 0) + (iVar8 < 0)) == '\x01') {
      if (cVar2 == '\0') {
        iVar7 = 0x7fffffff;
      }
      else if (cVar2 == '\x02') {
        iVar7 = -0x80000000;
      }
    }
  }
  else {
    iVar7 = iVar7 + (uint)(iVar7 < iVar8);
  }
  if (0 < iVar7) {
    sVar5 = (short)((uint)iVar7 >> 0x10);
    unaff_r10 = (int)DAT_00018e50 * (int)sVar5 + unaff_r10;
    unaff_r11 = (int)DAT_00018e52 * (int)sVar5 + unaff_r11;
    unaff_r12 = (int)DAT_00018e54 * (int)sVar5 + unaff_r12;
  }
  uVar4 = (uint)DAT_00018cec;
  bVar1 = (int)uVar4 <= (int)unaff_r10;
  if ((int)unaff_r10 < 1) {
    unaff_r10 = 0;
  }
  uVar3 = unaff_r10 & uVar4;
  if (bVar1) {
    uVar3 = uVar4;
  }
  uVar3 = uVar3 * 4;
  if (0 < (int)unaff_r11) {
    uVar6 = unaff_r11 & uVar4;
    if ((int)uVar4 <= (int)unaff_r11) {
      uVar6 = uVar4;
    }
    uVar3 = uVar3 + (uVar6 >> 3);
  }
  if ((int)unaff_r12 < 1) {
    return uVar3;
  }
  if ((int)uVar4 < (int)unaff_r12) {
    return uVar3 | 0x1f;
  }
  return uVar3 | unaff_r12 >> 8;
}



uint FUN_00018cf6(undefined4 *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int in_r1;
  uint uVar4;
  short sVar6;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint in_sr;
  int iVar10;
  int iVar11;
  
  uVar4 = (uint)(in_r1 << 1) >> 8 & 0xfffffff8;
  iVar9 = (int)*(short *)((int)&DAT_00018e58 + uVar4 + 2);
  iVar10 = (int)DAT_00018e3c._2_2_ * (int)(short)*param_1;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if (iVar10 < 0) {
      if (-1 < iVar10) {
        if (-1 < iVar10 == true) {
          iVar10 = -0x80000000;
        }
      }
      else {
        iVar10 = 0x7fffffff;
      }
    }
  }
  else {
    iVar10 = iVar10 + (uint)(iVar10 < 0);
  }
  iVar11 = (int)DAT_00018e40._0_2_ * (int)(short)*(undefined4 *)((int)param_1 + 2);
  cVar2 = (-1 < iVar11) + (iVar10 < 0);
  iVar11 = iVar10 + iVar11;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((char)((iVar11 < 0) + (iVar10 < 0)) == '\x01') {
      if (cVar2 == '\0') {
        iVar11 = 0x7fffffff;
      }
      else if (cVar2 == '\x02') {
        iVar11 = -0x80000000;
      }
    }
  }
  else {
    iVar11 = iVar11 + (uint)(iVar11 < iVar10);
  }
  iVar10 = (int)DAT_00018e40._2_2_ * (int)(short)param_1[1];
  cVar2 = (-1 < iVar10) + (iVar11 < 0);
  iVar10 = iVar11 + iVar10;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((char)((iVar10 < 0) + (iVar11 < 0)) == '\x01') {
      if (cVar2 == '\0') {
        iVar10 = 0x7fffffff;
      }
      else if (cVar2 == '\x02') {
        iVar10 = -0x80000000;
      }
    }
  }
  else {
    iVar10 = iVar10 + (uint)(iVar10 < iVar11);
  }
  if (iVar10 < 1) {
    uVar3 = (int)*(short *)((int)param_1 + 6) + (int)*(short *)((int)&DAT_00018e5c + uVar4);
    uVar7 = *(short *)(param_1 + 2) + iVar9;
    uVar4 = (int)*(short *)((int)param_1 + 10) + (int)*(short *)((int)&DAT_00018e58 + uVar4);
  }
  else {
    sVar6 = (short)((uint)iVar10 >> 0x10);
    uVar3 = (int)DAT_00018e50 * (int)sVar6 +
            (int)*(short *)((int)param_1 + 6) + (int)*(short *)((int)&DAT_00018e5c + uVar4);
    uVar7 = (int)DAT_00018e52 * (int)sVar6 + *(short *)(param_1 + 2) + iVar9;
    uVar4 = (int)DAT_00018e54 * (int)sVar6 +
            (int)*(short *)((int)param_1 + 10) + (int)*(short *)((int)&DAT_00018e58 + uVar4);
  }
  uVar5 = (uint)DAT_00018d82;
  bVar1 = (int)uVar5 <= (int)uVar3;
  if ((int)uVar3 < 1) {
    uVar3 = 0;
  }
  uVar3 = uVar3 & uVar5;
  if (bVar1) {
    uVar3 = uVar5;
  }
  uVar3 = uVar3 * 4;
  if (0 < (int)uVar7) {
    uVar8 = uVar7 & uVar5;
    if ((int)uVar5 <= (int)uVar7) {
      uVar8 = uVar5;
    }
    uVar3 = uVar3 + (uVar8 >> 3);
  }
  if ((int)uVar4 < 1) {
    return uVar3;
  }
  if ((int)uVar5 < (int)uVar4) {
    return uVar3 | 0x1f;
  }
  return uVar3 | uVar4 >> 8;
}



uint FUN_00018d08(undefined4 *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  short sVar5;
  uint uVar4;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int unaff_r10;
  int unaff_r11;
  int unaff_r12;
  uint in_sr;
  int iVar9;
  int iVar10;
  
  iVar9 = (int)DAT_00018e3c._2_2_ * (int)(short)*param_1;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if (iVar9 < 0) {
      if (-1 < iVar9) {
        if (-1 < iVar9 == true) {
          iVar9 = -0x80000000;
        }
      }
      else {
        iVar9 = 0x7fffffff;
      }
    }
  }
  else {
    iVar9 = iVar9 + (uint)(iVar9 < 0);
  }
  iVar10 = (int)DAT_00018e40._0_2_ * (int)(short)*(undefined4 *)((int)param_1 + 2);
  cVar2 = (-1 < iVar10) + (iVar9 < 0);
  iVar10 = iVar9 + iVar10;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((char)((iVar10 < 0) + (iVar9 < 0)) == '\x01') {
      if (cVar2 == '\0') {
        iVar10 = 0x7fffffff;
      }
      else if (cVar2 == '\x02') {
        iVar10 = -0x80000000;
      }
    }
  }
  else {
    iVar10 = iVar10 + (uint)(iVar10 < iVar9);
  }
  iVar9 = (int)DAT_00018e40._2_2_ * (int)(short)param_1[1];
  cVar2 = (-1 < iVar9) + (iVar10 < 0);
  iVar9 = iVar10 + iVar9;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((char)((iVar9 < 0) + (iVar10 < 0)) == '\x01') {
      if (cVar2 == '\0') {
        iVar9 = 0x7fffffff;
      }
      else if (cVar2 == '\x02') {
        iVar9 = -0x80000000;
      }
    }
  }
  else {
    iVar9 = iVar9 + (uint)(iVar9 < iVar10);
  }
  if (iVar9 < 1) {
    uVar3 = *(short *)((int)param_1 + 6) + unaff_r10;
    uVar6 = *(short *)(param_1 + 2) + unaff_r11;
    uVar8 = *(short *)((int)param_1 + 10) + unaff_r12;
  }
  else {
    sVar5 = (short)((uint)iVar9 >> 0x10);
    uVar3 = (int)DAT_00018e50 * (int)sVar5 + *(short *)((int)param_1 + 6) + unaff_r10;
    uVar6 = (int)DAT_00018e52 * (int)sVar5 + *(short *)(param_1 + 2) + unaff_r11;
    uVar8 = (int)DAT_00018e54 * (int)sVar5 + *(short *)((int)param_1 + 10) + unaff_r12;
  }
  uVar4 = (uint)DAT_00018d82;
  bVar1 = (int)uVar4 <= (int)uVar3;
  if ((int)uVar3 < 1) {
    uVar3 = 0;
  }
  uVar3 = uVar3 & uVar4;
  if (bVar1) {
    uVar3 = uVar4;
  }
  uVar3 = uVar3 * 4;
  if (0 < (int)uVar6) {
    uVar7 = uVar6 & uVar4;
    if ((int)uVar4 <= (int)uVar6) {
      uVar7 = uVar4;
    }
    uVar3 = uVar3 + (uVar7 >> 3);
  }
  if ((int)uVar8 < 1) {
    return uVar3;
  }
  if ((int)uVar4 < (int)uVar8) {
    return uVar3 | 0x1f;
  }
  return uVar3 | uVar8 >> 8;
}



void FUN_00018d8c(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint in_sr;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar8 = *param_2;
  uVar6 = uVar8 ^ DAT_00018e44;
  if ((int)uVar8 < 0) {
    uVar8 = -uVar8;
  }
  uVar7 = DAT_00018e44;
  if ((int)DAT_00018e44 < 0) {
    uVar7 = -DAT_00018e44;
  }
  uVar3 = (uVar7 & 0xffff) * (uVar8 & 0xffff);
  iVar5 = (uVar7 >> 0x10) * (uVar8 & 0xffff);
  iVar2 = 0;
  uVar1 = iVar5 + (uVar7 & 0xffff) * (uVar8 >> 0x10);
  if (iVar5 != 0) {
    iVar2 = 0x10000;
  }
  uVar9 = uVar3 + uVar1 * 0x10000;
  uVar8 = iVar2 + (uint)(uVar9 < uVar3) + (uVar1 >> 0x10) + (uVar7 >> 0x10) * (uVar8 >> 0x10);
  if ((int)uVar6 < 0) {
    uVar8 = ~uVar8;
    if (uVar9 == 0) {
      uVar8 = uVar8 + 1;
    }
    else {
      uVar9 = ~uVar9 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((int)uVar8 < -0x8000) {
      uVar8 = 0xffff8000;
      uVar9 = 0;
    }
    if (0x7fff < (int)uVar8) {
      uVar8 = 0x7fff;
      uVar9 = 0xffffffff;
    }
    uVar8 = uVar8 & 0xffff;
  }
  uVar6 = param_2[4];
  uVar7 = uVar6 ^ DAT_00018e48;
  if ((int)uVar6 < 0) {
    uVar6 = -uVar6;
  }
  uVar1 = DAT_00018e48;
  if ((int)DAT_00018e48 < 0) {
    uVar1 = -DAT_00018e48;
  }
  uVar4 = (uVar1 & 0xffff) * (uVar6 & 0xffff);
  iVar5 = (uVar1 >> 0x10) * (uVar6 & 0xffff);
  iVar2 = 0;
  uVar3 = iVar5 + (uVar1 & 0xffff) * (uVar6 >> 0x10);
  if (iVar5 != 0) {
    iVar2 = 0x10000;
  }
  uVar10 = uVar4 + uVar3 * 0x10000;
  uVar6 = iVar2 + (uint)(uVar10 < uVar4) + (uVar3 >> 0x10) + (uVar1 >> 0x10) * (uVar6 >> 0x10);
  if ((int)uVar7 < 0) {
    uVar6 = ~uVar6;
    if (uVar10 == 0) {
      uVar6 = uVar6 + 1;
    }
    else {
      uVar10 = ~uVar10 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar10 = uVar9 + uVar10;
    uVar8 = uVar6 + (uVar10 < uVar9) + (uVar8 & 0xffff);
    if ((int)uVar8 < -0x8000) {
      uVar8 = 0xffff8000;
      uVar10 = 0;
    }
    if (0x7fff < (int)uVar8) {
      uVar8 = 0x7fff;
      uVar10 = 0xffffffff;
    }
    uVar8 = uVar8 & 0xffff;
  }
  else {
    uVar10 = uVar9 + uVar10;
    uVar8 = uVar6 + (uVar10 < uVar9) + uVar8;
  }
  uVar6 = param_2[8];
  uVar7 = uVar6 ^ DAT_00018e4c;
  if ((int)uVar6 < 0) {
    uVar6 = -uVar6;
  }
  uVar1 = DAT_00018e4c;
  if ((int)DAT_00018e4c < 0) {
    uVar1 = -DAT_00018e4c;
  }
  uVar9 = (uVar1 & 0xffff) * (uVar6 & 0xffff);
  iVar5 = (uVar1 >> 0x10) * (uVar6 & 0xffff);
  iVar2 = 0;
  uVar3 = iVar5 + (uVar1 & 0xffff) * (uVar6 >> 0x10);
  if (iVar5 != 0) {
    iVar2 = 0x10000;
  }
  uVar4 = uVar9 + uVar3 * 0x10000;
  uVar6 = iVar2 + (uint)(uVar4 < uVar9) + (uVar3 >> 0x10) + (uVar1 >> 0x10) * (uVar6 >> 0x10);
  if ((int)uVar7 < 0) {
    uVar6 = ~uVar6;
    if (uVar4 == 0) {
      uVar6 = uVar6 + 1;
    }
    else {
      uVar4 = ~uVar4 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar4 = uVar10 + uVar4;
    iVar2 = uVar6 + (uVar4 < uVar10) + (uVar8 & 0xffff);
    if (iVar2 < -0x8000) {
      iVar2 = -0x8000;
      uVar4 = 0;
    }
    DAT_00018e3c._0_2_ = (undefined2)(uVar4 >> 0x10);
    if (0x7fff < iVar2) {
      DAT_00018e3c._0_2_ = 0xffff;
    }
  }
  else {
    DAT_00018e3c._0_2_ = (undefined2)(uVar10 + uVar4 >> 0x10);
  }
  uVar8 = param_2[1];
  uVar6 = uVar8 ^ DAT_00018e44;
  if ((int)uVar8 < 0) {
    uVar8 = -uVar8;
  }
  uVar7 = DAT_00018e44;
  if ((int)DAT_00018e44 < 0) {
    uVar7 = -DAT_00018e44;
  }
  uVar3 = (uVar7 & 0xffff) * (uVar8 & 0xffff);
  iVar5 = (uVar7 >> 0x10) * (uVar8 & 0xffff);
  iVar2 = 0;
  uVar1 = iVar5 + (uVar7 & 0xffff) * (uVar8 >> 0x10);
  if (iVar5 != 0) {
    iVar2 = 0x10000;
  }
  uVar9 = uVar3 + uVar1 * 0x10000;
  uVar8 = iVar2 + (uint)(uVar9 < uVar3) + (uVar1 >> 0x10) + (uVar7 >> 0x10) * (uVar8 >> 0x10);
  if ((int)uVar6 < 0) {
    uVar8 = ~uVar8;
    if (uVar9 == 0) {
      uVar8 = uVar8 + 1;
    }
    else {
      uVar9 = ~uVar9 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((int)uVar8 < -0x8000) {
      uVar8 = 0xffff8000;
      uVar9 = 0;
    }
    if (0x7fff < (int)uVar8) {
      uVar8 = 0x7fff;
      uVar9 = 0xffffffff;
    }
    uVar8 = uVar8 & 0xffff;
  }
  uVar6 = param_2[5];
  uVar7 = uVar6 ^ DAT_00018e48;
  if ((int)uVar6 < 0) {
    uVar6 = -uVar6;
  }
  uVar1 = DAT_00018e48;
  if ((int)DAT_00018e48 < 0) {
    uVar1 = -DAT_00018e48;
  }
  uVar4 = (uVar1 & 0xffff) * (uVar6 & 0xffff);
  iVar5 = (uVar1 >> 0x10) * (uVar6 & 0xffff);
  iVar2 = 0;
  uVar3 = iVar5 + (uVar1 & 0xffff) * (uVar6 >> 0x10);
  if (iVar5 != 0) {
    iVar2 = 0x10000;
  }
  uVar10 = uVar4 + uVar3 * 0x10000;
  uVar6 = iVar2 + (uint)(uVar10 < uVar4) + (uVar3 >> 0x10) + (uVar1 >> 0x10) * (uVar6 >> 0x10);
  if ((int)uVar7 < 0) {
    uVar6 = ~uVar6;
    if (uVar10 == 0) {
      uVar6 = uVar6 + 1;
    }
    else {
      uVar10 = ~uVar10 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar10 = uVar9 + uVar10;
    uVar8 = uVar6 + (uVar10 < uVar9) + (uVar8 & 0xffff);
    if ((int)uVar8 < -0x8000) {
      uVar8 = 0xffff8000;
      uVar10 = 0;
    }
    if (0x7fff < (int)uVar8) {
      uVar8 = 0x7fff;
      uVar10 = 0xffffffff;
    }
    uVar8 = uVar8 & 0xffff;
  }
  else {
    uVar10 = uVar9 + uVar10;
    uVar8 = uVar6 + (uVar10 < uVar9) + uVar8;
  }
  uVar6 = param_2[9];
  uVar7 = uVar6 ^ DAT_00018e4c;
  if ((int)uVar6 < 0) {
    uVar6 = -uVar6;
  }
  uVar1 = DAT_00018e4c;
  if ((int)DAT_00018e4c < 0) {
    uVar1 = -DAT_00018e4c;
  }
  uVar9 = (uVar1 & 0xffff) * (uVar6 & 0xffff);
  iVar5 = (uVar1 >> 0x10) * (uVar6 & 0xffff);
  iVar2 = 0;
  uVar3 = iVar5 + (uVar1 & 0xffff) * (uVar6 >> 0x10);
  if (iVar5 != 0) {
    iVar2 = 0x10000;
  }
  uVar4 = uVar9 + uVar3 * 0x10000;
  uVar6 = iVar2 + (uint)(uVar4 < uVar9) + (uVar3 >> 0x10) + (uVar1 >> 0x10) * (uVar6 >> 0x10);
  if ((int)uVar7 < 0) {
    uVar6 = ~uVar6;
    if (uVar4 == 0) {
      uVar6 = uVar6 + 1;
    }
    else {
      uVar4 = ~uVar4 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar4 = uVar10 + uVar4;
    iVar2 = uVar6 + (uVar4 < uVar10) + (uVar8 & 0xffff);
    if (iVar2 < -0x8000) {
      iVar2 = -0x8000;
      uVar4 = 0;
    }
    DAT_00018e3c._2_2_ = (undefined2)(uVar4 >> 0x10);
    if (0x7fff < iVar2) {
      DAT_00018e3c._2_2_ = 0xffff;
    }
  }
  else {
    DAT_00018e3c._2_2_ = (undefined2)(uVar10 + uVar4 >> 0x10);
  }
  uVar8 = param_2[2];
  uVar6 = uVar8 ^ DAT_00018e44;
  if ((int)uVar8 < 0) {
    uVar8 = -uVar8;
  }
  uVar7 = DAT_00018e44;
  if ((int)DAT_00018e44 < 0) {
    uVar7 = -DAT_00018e44;
  }
  uVar3 = (uVar7 & 0xffff) * (uVar8 & 0xffff);
  iVar5 = (uVar7 >> 0x10) * (uVar8 & 0xffff);
  iVar2 = 0;
  uVar1 = iVar5 + (uVar7 & 0xffff) * (uVar8 >> 0x10);
  if (iVar5 != 0) {
    iVar2 = 0x10000;
  }
  uVar9 = uVar3 + uVar1 * 0x10000;
  uVar8 = iVar2 + (uint)(uVar9 < uVar3) + (uVar1 >> 0x10) + (uVar7 >> 0x10) * (uVar8 >> 0x10);
  if ((int)uVar6 < 0) {
    uVar8 = ~uVar8;
    if (uVar9 == 0) {
      uVar8 = uVar8 + 1;
    }
    else {
      uVar9 = ~uVar9 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((int)uVar8 < -0x8000) {
      uVar8 = 0xffff8000;
      uVar9 = 0;
    }
    if (0x7fff < (int)uVar8) {
      uVar8 = 0x7fff;
      uVar9 = 0xffffffff;
    }
    uVar8 = uVar8 & 0xffff;
  }
  uVar6 = param_2[6];
  uVar7 = uVar6 ^ DAT_00018e48;
  if ((int)uVar6 < 0) {
    uVar6 = -uVar6;
  }
  uVar1 = DAT_00018e48;
  if ((int)DAT_00018e48 < 0) {
    uVar1 = -DAT_00018e48;
  }
  uVar4 = (uVar1 & 0xffff) * (uVar6 & 0xffff);
  iVar5 = (uVar1 >> 0x10) * (uVar6 & 0xffff);
  iVar2 = 0;
  uVar3 = iVar5 + (uVar1 & 0xffff) * (uVar6 >> 0x10);
  if (iVar5 != 0) {
    iVar2 = 0x10000;
  }
  uVar10 = uVar4 + uVar3 * 0x10000;
  uVar6 = iVar2 + (uint)(uVar10 < uVar4) + (uVar3 >> 0x10) + (uVar1 >> 0x10) * (uVar6 >> 0x10);
  if ((int)uVar7 < 0) {
    uVar6 = ~uVar6;
    if (uVar10 == 0) {
      uVar6 = uVar6 + 1;
    }
    else {
      uVar10 = ~uVar10 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar10 = uVar9 + uVar10;
    uVar8 = uVar6 + (uVar10 < uVar9) + (uVar8 & 0xffff);
    if ((int)uVar8 < -0x8000) {
      uVar8 = 0xffff8000;
      uVar10 = 0;
    }
    if (0x7fff < (int)uVar8) {
      uVar8 = 0x7fff;
      uVar10 = 0xffffffff;
    }
    uVar8 = uVar8 & 0xffff;
  }
  else {
    uVar10 = uVar9 + uVar10;
    uVar8 = uVar6 + (uVar10 < uVar9) + uVar8;
  }
  uVar6 = param_2[10];
  uVar7 = uVar6 ^ DAT_00018e4c;
  if ((int)uVar6 < 0) {
    uVar6 = -uVar6;
  }
  uVar1 = DAT_00018e4c;
  if ((int)DAT_00018e4c < 0) {
    uVar1 = -DAT_00018e4c;
  }
  uVar9 = (uVar1 & 0xffff) * (uVar6 & 0xffff);
  iVar5 = (uVar1 >> 0x10) * (uVar6 & 0xffff);
  iVar2 = 0;
  uVar3 = iVar5 + (uVar1 & 0xffff) * (uVar6 >> 0x10);
  if (iVar5 != 0) {
    iVar2 = 0x10000;
  }
  uVar4 = uVar9 + uVar3 * 0x10000;
  uVar6 = iVar2 + (uint)(uVar4 < uVar9) + (uVar3 >> 0x10) + (uVar1 >> 0x10) * (uVar6 >> 0x10);
  if ((int)uVar7 < 0) {
    uVar6 = ~uVar6;
    if (uVar4 == 0) {
      uVar6 = uVar6 + 1;
    }
    else {
      uVar4 = ~uVar4 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar4 = uVar10 + uVar4;
    iVar2 = uVar6 + (uVar4 < uVar10) + (uVar8 & 0xffff);
    if (iVar2 < -0x8000) {
      iVar2 = -0x8000;
      uVar4 = 0;
    }
    DAT_00018e40._0_2_ = (undefined2)(uVar4 >> 0x10);
    if (0x7fff < iVar2) {
      DAT_00018e40._0_2_ = 0xffff;
    }
  }
  else {
    DAT_00018e40._0_2_ = (undefined2)(uVar10 + uVar4 >> 0x10);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018fee)
// WARNING: Removing unreachable block (ram,0x00018fec)
// WARNING: Removing unreachable block (ram,0x00018ff0)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00018fce(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *in_r1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint in_sr;
  uint in_mach;
  uint in_macl;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar2 = DAT_000190d8 - *(int *)(param_2 + 0x2c);
  uVar3 = DAT_000190d4 - *(int *)(param_2 + 0x1c);
  uVar4 = DAT_000190d0 - *(int *)(param_2 + 0xc);
  if ((int)uVar4 < 0) {
    uVar4 = -uVar4;
  }
  uVar10 = (uVar4 & 0xffff) * (uVar4 & 0xffff);
  iVar1 = (uVar4 >> 0x10) * (uVar4 & 0xffff);
  iVar5 = 0;
  uVar7 = iVar1 + (uVar4 & 0xffff) * (uVar4 >> 0x10);
  if (iVar1 != 0) {
    iVar5 = 0x10000;
  }
  uVar8 = uVar10 + uVar7 * 0x10000;
  iVar5 = iVar5 + (uint)(uVar8 < uVar10) + (uVar7 >> 0x10) + (uVar4 >> 0x10) * (uVar4 >> 0x10);
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar8 = in_macl + uVar8;
    uVar4 = iVar5 + (uint)(uVar8 < in_macl) + (in_mach & 0xffff);
    if ((int)uVar4 < -0x8000) {
      uVar4 = 0xffff8000;
      uVar8 = 0;
    }
    if (0x7fff < (int)uVar4) {
      uVar4 = 0x7fff;
      uVar8 = 0xffffffff;
    }
    uVar4 = uVar4 & 0xffff;
  }
  else {
    uVar8 = in_macl + uVar8;
    uVar4 = iVar5 + (uint)(uVar8 < in_macl) + in_mach;
  }
  if ((int)uVar3 < 0) {
    uVar3 = -uVar3;
  }
  uVar10 = (uVar3 & 0xffff) * (uVar3 & 0xffff);
  iVar1 = (uVar3 >> 0x10) * (uVar3 & 0xffff);
  iVar5 = 0;
  uVar7 = iVar1 + (uVar3 & 0xffff) * (uVar3 >> 0x10);
  if (iVar1 != 0) {
    iVar5 = 0x10000;
  }
  uVar9 = uVar10 + uVar7 * 0x10000;
  iVar5 = iVar5 + (uint)(uVar9 < uVar10) + (uVar7 >> 0x10) + (uVar3 >> 0x10) * (uVar3 >> 0x10);
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar9 = uVar8 + uVar9;
    uVar4 = iVar5 + (uint)(uVar9 < uVar8) + (uVar4 & 0xffff);
    if ((int)uVar4 < -0x8000) {
      uVar4 = 0xffff8000;
      uVar9 = 0;
    }
    if (0x7fff < (int)uVar4) {
      uVar4 = 0x7fff;
      uVar9 = 0xffffffff;
    }
    uVar4 = uVar4 & 0xffff;
  }
  else {
    uVar9 = uVar8 + uVar9;
    uVar4 = iVar5 + (uint)(uVar9 < uVar8) + uVar4;
  }
  if ((int)uVar2 < 0) {
    uVar2 = -uVar2;
  }
  uVar7 = (uVar2 & 0xffff) * (uVar2 & 0xffff);
  iVar1 = (uVar2 >> 0x10) * (uVar2 & 0xffff);
  iVar5 = 0;
  uVar3 = iVar1 + (uVar2 & 0xffff) * (uVar2 >> 0x10);
  if (iVar1 != 0) {
    iVar5 = 0x10000;
  }
  uVar10 = uVar7 + uVar3 * 0x10000;
  iVar5 = iVar5 + (uint)(uVar10 < uVar7) + (uVar3 >> 0x10) + (uVar2 >> 0x10) * (uVar2 >> 0x10);
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar10 = uVar9 + uVar10;
    uVar4 = iVar5 + (uint)(uVar10 < uVar9) + (uVar4 & 0xffff);
    if ((int)uVar4 < -0x8000) {
      uVar4 = 0xffff8000;
      uVar10 = 0;
    }
    if (0x7fff < (int)uVar4) {
      uVar4 = 0x7fff;
      uVar10 = 0xffffffff;
    }
    uVar4 = uVar4 & 0xffff;
  }
  else {
    uVar10 = uVar9 + uVar10;
    uVar4 = iVar5 + (uint)(uVar10 < uVar9) + uVar4;
  }
  uVar4 = uVar4 << 0x10 | uVar10 >> 0x10;
  if (uVar4 < DAT_000190e0) {
    uVar2 = 0;
    iVar5 = 0x10;
    uVar3 = _LAB_00019028;
    do {
      uVar7 = uVar2 + uVar3;
      uVar2 = uVar2 >> 1;
      if (uVar7 <= uVar4) {
        uVar4 = uVar4 - uVar7;
        uVar2 = uVar2 + uVar3;
      }
      iVar5 = iVar5 + -1;
      uVar3 = uVar3 >> 2;
    } while (iVar5 != 0);
    uVar3 = 0x100000;
    uVar4 = uVar2;
  }
  else {
    uVar3 = DAT_000190dc;
    if (DAT_000190dc < uVar4) {
      *in_r1 = 0;
      *(undefined2 *)(in_r1 + 1) = 0;
      return;
    }
  }
  puVar6 = (uint *)(int)DAT_0001904a;
  puVar6[3] = (uint)puVar6;
  *puVar6 = uVar4;
  puVar6[1] = uVar3;
  return;
}



uint FUN_0001916c(int *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int unaff_r8;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = (uint)((ulonglong)((longlong)*param_1 * (longlong)unaff_r8) >> 0x20);
  uVar3 = uVar8 << 0x10 | (uint)((longlong)*param_1 * (longlong)unaff_r8) >> 0x10;
  iVar2 = *(int *)(param_2 + 0x2c);
  if ((int)(iVar2 - uVar3) < *(int *)(param_3 + 0x14)) {
    if (*(int *)(param_3 + 0x10) <= (int)(iVar2 + uVar3)) {
      uVar8 = (uint)(*(int *)(param_3 + 0x14) <= (int)(iVar2 + uVar3)) << 1 |
              (uint)((int)(iVar2 - uVar3) < *(int *)(param_3 + 0x10));
      iVar4 = *(int *)(param_2 + 0x1c);
      lVar1 = (longlong)iVar2 * (longlong)*(int *)(param_3 + 0x24);
      uVar5 = (int)((ulonglong)lVar1 >> 0x20) << 0x10 | (uint)lVar1 >> 0x10;
      lVar1 = (longlong)(int)uVar3 * (longlong)*(int *)(param_3 + 0x20);
      uVar7 = (int)((ulonglong)lVar1 >> 0x20) << 0x10 | (uint)lVar1 >> 0x10;
      iVar6 = uVar5 + uVar7;
      if ((iVar4 <= iVar6) && (-iVar6 <= iVar4)) {
        iVar6 = uVar5 - uVar7;
        uVar8 = (uVar8 << 1 | (uint)(iVar6 < iVar4)) << 1 | (uint)(iVar4 < -iVar6);
        iVar4 = *(int *)(param_2 + 0xc);
        lVar1 = (longlong)iVar2 * (longlong)*(int *)(param_3 + 0x2c);
        uVar5 = (int)((ulonglong)lVar1 >> 0x20) << 0x10 | (uint)lVar1 >> 0x10;
        lVar1 = (longlong)(int)uVar3 * (longlong)*(int *)(param_3 + 0x28);
        uVar3 = (int)((ulonglong)lVar1 >> 0x20) << 0x10 | (uint)lVar1 >> 0x10;
        iVar2 = uVar5 + uVar3;
        if ((iVar4 <= iVar2) && (-iVar2 <= iVar4)) {
          iVar2 = uVar5 - uVar3;
          return (uVar8 << 1 | (uint)(iVar2 < iVar4)) << 1 | (uint)(iVar4 < -iVar2);
        }
      }
    }
  }
  return uVar8;
}



uint FUN_00019178(int *param_1,int param_2,int param_3)

{
  longlong lVar1;
  uint in_r0;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar3 = *param_1;
  iVar2 = *(int *)(param_2 + 0x2c);
  if (iVar2 - iVar3 < *(int *)(param_3 + 0x14)) {
    if (*(int *)(param_3 + 0x10) <= iVar2 + iVar3) {
      in_r0 = (uint)(*(int *)(param_3 + 0x14) <= iVar2 + iVar3) << 1 |
              (uint)(iVar2 - iVar3 < *(int *)(param_3 + 0x10));
      iVar4 = *(int *)(param_2 + 0x1c);
      lVar1 = (longlong)iVar2 * (longlong)*(int *)(param_3 + 0x24);
      uVar5 = (int)((ulonglong)lVar1 >> 0x20) << 0x10 | (uint)lVar1 >> 0x10;
      lVar1 = (longlong)iVar3 * (longlong)*(int *)(param_3 + 0x20);
      uVar7 = (int)((ulonglong)lVar1 >> 0x20) << 0x10 | (uint)lVar1 >> 0x10;
      iVar6 = uVar5 + uVar7;
      if ((iVar4 <= iVar6) && (-iVar6 <= iVar4)) {
        iVar6 = uVar5 - uVar7;
        in_r0 = (in_r0 << 1 | (uint)(iVar6 < iVar4)) << 1 | (uint)(iVar4 < -iVar6);
        iVar4 = *(int *)(param_2 + 0xc);
        lVar1 = (longlong)iVar2 * (longlong)*(int *)(param_3 + 0x2c);
        uVar5 = (int)((ulonglong)lVar1 >> 0x20) << 0x10 | (uint)lVar1 >> 0x10;
        lVar1 = (longlong)iVar3 * (longlong)*(int *)(param_3 + 0x28);
        uVar7 = (int)((ulonglong)lVar1 >> 0x20) << 0x10 | (uint)lVar1 >> 0x10;
        iVar2 = uVar5 + uVar7;
        if ((iVar4 <= iVar2) && (-iVar2 <= iVar4)) {
          iVar2 = uVar5 - uVar7;
          return (in_r0 << 1 | (uint)(iVar2 < iVar4)) << 1 | (uint)(iVar4 < -iVar2);
        }
      }
    }
  }
  return in_r0;
}



void FUN_00019202(int *param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  
  while( true ) {
    iVar2 = *param_1;
    piVar1 = param_1 + 1;
    param_1 = param_1 + 2;
    bVar3 = *piVar1 == iVar2;
    if ((bool)bVar3) break;
    FUN_000194b8();
    if ((bVar3 & 1) != 1) {
      FUN_000193ca();
    }
  }
  return;
}



void FUN_0001921e(int *param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  
  while( true ) {
    iVar2 = *param_1;
    piVar1 = param_1 + 1;
    param_1 = param_1 + 2;
    bVar3 = *piVar1 == iVar2;
    if ((bool)bVar3) break;
    FUN_0001951c();
    if ((bVar3 & 1) != 1) {
      FUN_000193ca();
    }
  }
  return;
}



void FUN_0001923a(void)

{
  char cVar1;
  undefined2 *in_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  undefined4 *unaff_r11;
  undefined4 *unaff_r12;
  int unaff_r13;
  int *unaff_r14;
  uint in_sr;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_000192ba();
  iVar2 = (int)(short)*unaff_r12 * (int)(short)*unaff_r11;
  cVar1 = (-1 < iVar2) + (unaff_r10 < 0);
  iVar2 = unaff_r10 + iVar2;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((char)((iVar2 < 0) + (unaff_r10 < 0)) == '\x01') {
      if (cVar1 == '\0') {
        iVar2 = 0x7fffffff;
      }
      else if (cVar1 == '\x02') {
        iVar2 = -0x80000000;
      }
    }
  }
  else {
    iVar2 = iVar2 + (uint)(iVar2 < unaff_r10);
  }
  iVar3 = (int)(short)*(undefined4 *)((int)unaff_r12 + 2) *
          (int)(short)*(undefined4 *)((int)unaff_r11 + 2);
  cVar1 = (-1 < iVar3) + (iVar2 < 0);
  iVar3 = iVar2 + iVar3;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((char)((iVar3 < 0) + (iVar2 < 0)) == '\x01') {
      if (cVar1 == '\0') {
        iVar3 = 0x7fffffff;
      }
      else if (cVar1 == '\x02') {
        iVar3 = -0x80000000;
      }
    }
  }
  else {
    iVar3 = iVar3 + (uint)(iVar3 < iVar2);
  }
  iVar2 = (int)(short)unaff_r12[1] * (int)(short)unaff_r11[1];
  cVar1 = (-1 < iVar2) + (iVar3 < 0);
  iVar2 = iVar3 + iVar2;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((char)((iVar2 < 0) + (iVar3 < 0)) == '\x01') {
      if (cVar1 == '\0') {
        iVar2 = 0x7fffffff;
      }
      else if (cVar1 == '\x02') {
        iVar2 = -0x80000000;
      }
    }
  }
  else {
    iVar2 = iVar2 + (uint)(iVar2 < iVar3);
  }
  unaff_r14[4] = 0x100;
  *unaff_r14 = iVar2;
  unaff_r14[5] = 0;
  while( true ) {
    *(int *)(in_r7 + 2) = iVar2;
    iVar2 = (int)(short)*unaff_r12 * (int)(short)unaff_r11[-3];
    cVar1 = (-1 < iVar2) + (unaff_r8 < 0);
    iVar2 = unaff_r8 + iVar2;
    if (((byte)(in_sr >> 1) & 1) == 1) {
      if ((char)((iVar2 < 0) + (unaff_r8 < 0)) == '\x01') {
        if (cVar1 == '\0') {
          iVar2 = 0x7fffffff;
        }
        else if (cVar1 == '\x02') {
          iVar2 = -0x80000000;
        }
      }
    }
    else {
      iVar2 = iVar2 + (uint)(iVar2 < unaff_r8);
    }
    iVar3 = (int)(short)*(undefined4 *)((int)unaff_r12 + 2) *
            (int)(short)*(undefined4 *)((int)unaff_r11 + -10);
    cVar1 = (-1 < iVar3) + (iVar2 < 0);
    iVar3 = iVar2 + iVar3;
    if (((byte)(in_sr >> 1) & 1) == 1) {
      if ((char)((iVar3 < 0) + (iVar2 < 0)) == '\x01') {
        if (cVar1 == '\0') {
          iVar3 = 0x7fffffff;
        }
        else if (cVar1 == '\x02') {
          iVar3 = -0x80000000;
        }
      }
    }
    else {
      iVar3 = iVar3 + (uint)(iVar3 < iVar2);
    }
    iVar4 = (int)(short)unaff_r12[1] * (int)(short)unaff_r11[-2];
    cVar1 = (-1 < iVar4) + (iVar3 < 0);
    iVar4 = iVar3 + iVar4;
    if (((byte)(in_sr >> 1) & 1) == 1) {
      if ((char)((iVar4 < 0) + (iVar3 < 0)) == '\x01') {
        if (cVar1 == '\0') {
          iVar4 = 0x7fffffff;
        }
        else if (cVar1 == '\x02') {
          iVar4 = -0x80000000;
        }
      }
    }
    else {
      iVar4 = iVar4 + (uint)(iVar4 < iVar3);
    }
    iVar2 = (int)(short)*unaff_r12 * (int)(short)*(undefined4 *)((int)unaff_r11 + -6);
    cVar1 = (-1 < iVar2) + (unaff_r9 < 0);
    iVar2 = unaff_r9 + iVar2;
    if (((byte)(in_sr >> 1) & 1) == 1) {
      if ((char)((iVar2 < 0) + (unaff_r9 < 0)) == '\x01') {
        if (cVar1 == '\0') {
          iVar2 = 0x7fffffff;
        }
        else if (cVar1 == '\x02') {
          iVar2 = -0x80000000;
        }
      }
    }
    else {
      iVar2 = iVar2 + (uint)(iVar2 < unaff_r9);
    }
    iVar3 = (int)(short)*(undefined4 *)((int)unaff_r12 + 2) * (int)(short)unaff_r11[-1];
    cVar1 = (-1 < iVar3) + (iVar2 < 0);
    iVar3 = iVar2 + iVar3;
    if (((byte)(in_sr >> 1) & 1) == 1) {
      if ((char)((iVar3 < 0) + (iVar2 < 0)) == '\x01') {
        if (cVar1 == '\0') {
          iVar3 = 0x7fffffff;
        }
        else if (cVar1 == '\x02') {
          iVar3 = -0x80000000;
        }
      }
    }
    else {
      iVar3 = iVar3 + (uint)(iVar3 < iVar2);
    }
    iVar5 = (int)(short)unaff_r12[1] * (int)(short)*(undefined4 *)((int)unaff_r11 + -2);
    cVar1 = (-1 < iVar5) + (iVar3 < 0);
    iVar5 = iVar3 + iVar5;
    if (((byte)(in_sr >> 1) & 1) == 1) {
      if ((char)((iVar5 < 0) + (iVar3 < 0)) == '\x01') {
        if (cVar1 == '\0') {
          iVar5 = 0x7fffffff;
        }
        else if (cVar1 == '\x02') {
          iVar5 = -0x80000000;
        }
      }
    }
    else {
      iVar5 = iVar5 + (uint)(iVar5 < iVar3);
    }
    unaff_r13 = unaff_r13 + -1;
    if (unaff_r13 == 0) break;
    iVar2 = (int)(short)*(undefined4 *)((int)unaff_r12 + 6) * (int)(short)*unaff_r11;
    cVar1 = (-1 < iVar2) + (unaff_r10 < 0);
    iVar2 = unaff_r10 + iVar2;
    if (((byte)(in_sr >> 1) & 1) == 1) {
      if ((char)((iVar2 < 0) + (unaff_r10 < 0)) == '\x01') {
        if (cVar1 == '\0') {
          iVar2 = 0x7fffffff;
        }
        else if (cVar1 == '\x02') {
          iVar2 = -0x80000000;
        }
      }
    }
    else {
      iVar2 = iVar2 + (uint)(iVar2 < unaff_r10);
    }
    iVar3 = (int)(short)unaff_r12[2] * (int)(short)*(undefined4 *)((int)unaff_r11 + 2);
    cVar1 = (-1 < iVar3) + (iVar2 < 0);
    iVar3 = iVar2 + iVar3;
    if (((byte)(in_sr >> 1) & 1) == 1) {
      if ((char)((iVar3 < 0) + (iVar2 < 0)) == '\x01') {
        if (cVar1 == '\0') {
          iVar3 = 0x7fffffff;
        }
        else if (cVar1 == '\x02') {
          iVar3 = -0x80000000;
        }
      }
    }
    else {
      iVar3 = iVar3 + (uint)(iVar3 < iVar2);
    }
    iVar2 = (int)(short)*(undefined4 *)((int)unaff_r12 + 10) * (int)(short)unaff_r11[1];
    cVar1 = (-1 < iVar2) + (iVar3 < 0);
    iVar2 = iVar3 + iVar2;
    if (((byte)(in_sr >> 1) & 1) == 1) {
      if ((char)((iVar2 < 0) + (iVar3 < 0)) == '\x01') {
        if (cVar1 == '\0') {
          iVar2 = 0x7fffffff;
        }
        else if (cVar1 == '\x02') {
          iVar2 = -0x80000000;
        }
      }
    }
    else {
      iVar2 = iVar2 + (uint)(iVar2 < iVar3);
    }
    unaff_r12 = (undefined4 *)((int)unaff_r12 + 6);
    unaff_r14[4] = 0x100;
    *unaff_r14 = iVar2;
    iVar3 = unaff_r14[7];
    unaff_r14[5] = 0;
    *in_r7 = (short)((ulonglong)((longlong)iVar4 * (longlong)iVar3) >> 0x20);
    in_r7[1] = (short)((ulonglong)((longlong)iVar5 * (longlong)iVar3) >> 0x20);
    in_r7 = in_r7 + 4;
    in_sr = in_sr & 0xfffffffe;
  }
  iVar2 = unaff_r14[7];
  *in_r7 = (short)((ulonglong)((longlong)iVar4 * (longlong)iVar2) >> 0x20);
  in_r7[1] = (short)((ulonglong)((longlong)iVar5 * (longlong)iVar2) >> 0x20);
  unaff_r14[3] = 0;
  return;
}



void FUN_000192ba(undefined4 param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  
  iVar2 = *(int *)(param_3 + 0x18);
  iVar3 = 3;
  do {
    piVar4 = param_2;
    iVar3 = iVar3 + -1;
    *(short *)register0x0000003c = (short)((uint)(*piVar4 * iVar2 * 0x10) >> 0x10);
    register0x0000003c = (BADSPACEBASE *)((int)register0x0000003c + 2);
    param_2 = piVar4 + 1;
  } while (iVar3 != 0);
  iVar2 = *(int *)(param_3 + 0x1c);
  iVar3 = 3;
  piVar4 = piVar4 + 2;
  do {
    piVar5 = piVar4;
    iVar3 = iVar3 + -1;
    *(short *)register0x0000003c = (short)((uint)(*piVar5 * iVar2 * -0x10) >> 0x10);
    register0x0000003c = (BADSPACEBASE *)((int)register0x0000003c + 2);
    piVar4 = piVar5 + 1;
  } while (iVar3 != 0);
  puVar6 = (uint *)(piVar5 + 2);
  iVar2 = 3;
  do {
    uVar1 = *puVar6;
    puVar6 = puVar6 + 1;
    iVar2 = iVar2 + -1;
    *(short *)register0x0000003c = (short)(uVar1 >> 4);
    register0x0000003c = (BADSPACEBASE *)((int)register0x0000003c + 2);
  } while (iVar2 != 0);
  *(int *)(DAT_0001931e + 0xc) = (int)DAT_0001931e;
  return;
}



void FUN_00019320(undefined4 param_1,undefined4 param_2,int param_3,undefined2 *param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  undefined4 *unaff_r11;
  undefined4 *unaff_r12;
  undefined4 *puVar6;
  int unaff_r13;
  int *unaff_r14;
  uint in_sr;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  FUN_000192ba();
  do {
    while( true ) {
      iVar7 = (int)(short)*unaff_r12 * (int)(short)*unaff_r11;
      cVar4 = (-1 < iVar7) + (unaff_r10 < 0);
      iVar7 = unaff_r10 + iVar7;
      if (((byte)(in_sr >> 1) & 1) == 1) {
        if ((char)((iVar7 < 0) + (unaff_r10 < 0)) == '\x01') {
          if (cVar4 == '\0') {
            iVar7 = 0x7fffffff;
          }
          else if (cVar4 == '\x02') {
            iVar7 = -0x80000000;
          }
        }
      }
      else {
        iVar7 = iVar7 + (uint)(iVar7 < unaff_r10);
      }
      iVar8 = (int)(short)*(undefined4 *)((int)unaff_r12 + 2) *
              (int)(short)*(undefined4 *)((int)unaff_r11 + 2);
      cVar4 = (-1 < iVar8) + (iVar7 < 0);
      iVar8 = iVar7 + iVar8;
      if (((byte)(in_sr >> 1) & 1) == 1) {
        if ((char)((iVar8 < 0) + (iVar7 < 0)) == '\x01') {
          if (cVar4 == '\0') {
            iVar8 = 0x7fffffff;
          }
          else if (cVar4 == '\x02') {
            iVar8 = -0x80000000;
          }
        }
      }
      else {
        iVar8 = iVar8 + (uint)(iVar8 < iVar7);
      }
      iVar7 = (int)(short)unaff_r12[1] * (int)(short)unaff_r11[1];
      cVar4 = (-1 < iVar7) + (iVar8 < 0);
      iVar7 = iVar8 + iVar7;
      if (((byte)(in_sr >> 1) & 1) == 1) {
        if ((char)((iVar7 < 0) + (iVar8 < 0)) == '\x01') {
          if (cVar4 == '\0') {
            iVar7 = 0x7fffffff;
          }
          else if (cVar4 == '\x02') {
            iVar7 = -0x80000000;
          }
        }
      }
      else {
        iVar7 = iVar7 + (uint)(iVar7 < iVar8);
      }
      unaff_r14[4] = 0x100;
      *unaff_r14 = iVar7;
      unaff_r14[5] = 0;
      *(int *)(param_4 + 2) = iVar7;
      iVar8 = (int)(short)*unaff_r12 * (int)(short)unaff_r11[-3];
      cVar4 = (-1 < iVar8) + (unaff_r8 < 0);
      iVar8 = unaff_r8 + iVar8;
      if (((byte)(in_sr >> 1) & 1) == 1) {
        if ((char)((iVar8 < 0) + (unaff_r8 < 0)) == '\x01') {
          if (cVar4 == '\0') {
            iVar8 = 0x7fffffff;
          }
          else if (cVar4 == '\x02') {
            iVar8 = -0x80000000;
          }
        }
      }
      else {
        iVar8 = iVar8 + (uint)(iVar8 < unaff_r8);
      }
      iVar9 = (int)(short)*(undefined4 *)((int)unaff_r12 + 2) *
              (int)(short)*(undefined4 *)((int)unaff_r11 + -10);
      cVar4 = (-1 < iVar9) + (iVar8 < 0);
      iVar9 = iVar8 + iVar9;
      if (((byte)(in_sr >> 1) & 1) == 1) {
        if ((char)((iVar9 < 0) + (iVar8 < 0)) == '\x01') {
          if (cVar4 == '\0') {
            iVar9 = 0x7fffffff;
          }
          else if (cVar4 == '\x02') {
            iVar9 = -0x80000000;
          }
        }
      }
      else {
        iVar9 = iVar9 + (uint)(iVar9 < iVar8);
      }
      iVar8 = (int)(short)unaff_r12[1] * (int)(short)unaff_r11[-2];
      cVar4 = (-1 < iVar8) + (iVar9 < 0);
      iVar8 = iVar9 + iVar8;
      if (((byte)(in_sr >> 1) & 1) == 1) {
        if ((char)((iVar8 < 0) + (iVar9 < 0)) == '\x01') {
          if (cVar4 == '\0') {
            iVar8 = 0x7fffffff;
          }
          else if (cVar4 == '\x02') {
            iVar8 = -0x80000000;
          }
        }
      }
      else {
        iVar8 = iVar8 + (uint)(iVar8 < iVar9);
      }
      iVar9 = (int)(short)*unaff_r12 * (int)(short)*(undefined4 *)((int)unaff_r11 + -6);
      cVar4 = (-1 < iVar9) + (unaff_r9 < 0);
      iVar9 = unaff_r9 + iVar9;
      if (((byte)(in_sr >> 1) & 1) == 1) {
        if ((char)((iVar9 < 0) + (unaff_r9 < 0)) == '\x01') {
          if (cVar4 == '\0') {
            iVar9 = 0x7fffffff;
          }
          else if (cVar4 == '\x02') {
            iVar9 = -0x80000000;
          }
        }
      }
      else {
        iVar9 = iVar9 + (uint)(iVar9 < unaff_r9);
      }
      puVar6 = unaff_r12 + 1;
      iVar10 = (int)(short)*(undefined4 *)((int)unaff_r12 + 2) * (int)(short)unaff_r11[-1];
      cVar4 = (-1 < iVar10) + (iVar9 < 0);
      iVar10 = iVar9 + iVar10;
      if (((byte)(in_sr >> 1) & 1) == 1) {
        if ((char)((iVar10 < 0) + (iVar9 < 0)) == '\x01') {
          if (cVar4 == '\0') {
            iVar10 = 0x7fffffff;
          }
          else if (cVar4 == '\x02') {
            iVar10 = -0x80000000;
          }
        }
      }
      else {
        iVar10 = iVar10 + (uint)(iVar10 < iVar9);
      }
      unaff_r12 = (undefined4 *)((int)unaff_r12 + 6);
      iVar9 = (int)(short)*puVar6 * (int)(short)*(undefined4 *)((int)unaff_r11 + -2);
      cVar4 = (-1 < iVar9) + (iVar10 < 0);
      iVar9 = iVar10 + iVar9;
      if (((byte)(in_sr >> 1) & 1) == 1) {
        if ((char)((iVar9 < 0) + (iVar10 < 0)) == '\x01') {
          if (cVar4 == '\0') {
            iVar9 = 0x7fffffff;
          }
          else if (cVar4 == '\x02') {
            iVar9 = -0x80000000;
          }
        }
      }
      else {
        iVar9 = iVar9 + (uint)(iVar9 < iVar10);
      }
      *(int *)(param_4 + 4) = iVar8;
      in_sr = in_sr & 0xfffffffe;
      bVar1 = iVar7 < *(int *)(param_3 + 0x10) << 8;
      uVar5 = (uint)(*(int *)(param_3 + 0x14) << 8 <= iVar7) << 1 | (uint)bVar1;
      if (bVar1) break;
      iVar7 = unaff_r14[7];
      *(int *)(param_4 + 6) = iVar9;
      lVar2 = (longlong)iVar9 * (longlong)iVar7;
      iVar9 = (int)((ulonglong)lVar2 >> 0x20);
      lVar3 = (longlong)iVar8 * (longlong)iVar7;
      iVar7 = (int)((ulonglong)lVar3 >> 0x20);
      param_4[1] = (short)((ulonglong)lVar2 >> 0x20);
      *param_4 = (short)((ulonglong)lVar3 >> 0x20);
      *(uint *)(param_4 + 0xc) =
           (((uVar5 << 1 | (uint)(*(short *)(param_3 + 8) < iVar9)) << 1 |
            (uint)(iVar9 < *(short *)(param_3 + 10))) << 1 |
           (uint)(*(short *)(param_3 + 0xe) < iVar7)) << 1 |
           (uint)(iVar7 < *(short *)(param_3 + 0xc));
      unaff_r13 = unaff_r13 + -1;
      param_4 = param_4 + 0x10;
      if (unaff_r13 == 0) {
        unaff_r14[3] = 0;
        return;
      }
    }
    *(uint *)(param_4 + 0xc) = uVar5 << 4;
    unaff_r13 = unaff_r13 + -1;
    *(int *)(param_4 + 6) = iVar9;
    param_4 = param_4 + 0x10;
  } while (unaff_r13 != 0);
  unaff_r14[3] = 0;
  return;
}



void FUN_000193ca(void)

{
  uint in_r0;
  undefined2 uVar1;
  uint uVar2;
  undefined2 *extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  int extraout_r2_04;
  undefined2 *extraout_r2_05;
  undefined2 *extraout_r2_06;
  int extraout_r2_07;
  int extraout_r2_08;
  int extraout_r2_09;
  undefined2 *extraout_r2_10;
  int extraout_r2_11;
  undefined2 *extraout_r2_12;
  int extraout_r2_13;
  int extraout_r2_14;
  int extraout_r2_15;
  int extraout_r2_16;
  int extraout_r2_17;
  undefined2 *extraout_r2_18;
  undefined2 *extraout_r2_19;
  int extraout_r2_20;
  int extraout_r2_21;
  int extraout_r2_22;
  undefined2 *extraout_r2_23;
  int extraout_r2_24;
  uint *extraout_r2_25;
  int unaff_r8;
  uint unaff_r9;
  uint uVar3;
  int *unaff_r13;
  int unaff_r14;
  
  uVar3 = unaff_r9 & in_r0;
  if (uVar3 == 0) {
    *unaff_r13 = unaff_r14 + 0x20;
    return;
  }
  uVar2 = unaff_r13[4];
  unaff_r13[4] = uVar2 + 8;
  *(short *)(unaff_r14 + 0x1c) = (short)(uVar2 >> 3);
  *unaff_r13 = unaff_r14 + 0x20;
  if (uVar3 == 1) {
    uVar3 = FUN_00019982();
    uVar3 = uVar3 << 0x10 | uVar3 & 0xffff;
    *extraout_r2_25 = uVar3;
    extraout_r2_25[1] = uVar3;
    return;
  }
  if (uVar3 != 2) {
    uVar1 = FUN_00019982();
    if (unaff_r8 == 0) {
      *extraout_r2 = uVar1;
      uVar1 = FUN_00019994();
      *(undefined2 *)(extraout_r2_00 + 2) = uVar1;
      uVar1 = FUN_00019994();
      *(undefined2 *)(extraout_r2_01 + 4) = uVar1;
      uVar1 = FUN_00019994();
      *(undefined2 *)(extraout_r2_02 + 6) = uVar1;
      return;
    }
    if (unaff_r8 != 1) {
      if (unaff_r8 != 2) {
        extraout_r2[3] = uVar1;
        uVar1 = FUN_00019994();
        *(undefined2 *)(extraout_r2_03 + 4) = uVar1;
        uVar1 = FUN_00019994();
        *(undefined2 *)(extraout_r2_04 + 2) = uVar1;
        uVar1 = FUN_00019994();
        *extraout_r2_05 = uVar1;
        return;
      }
      extraout_r2[2] = uVar1;
      uVar1 = FUN_00019994();
      *(undefined2 *)(extraout_r2_09 + 6) = uVar1;
      uVar1 = FUN_00019994();
      *extraout_r2_10 = uVar1;
      uVar1 = FUN_00019994();
      *(undefined2 *)(extraout_r2_11 + 2) = uVar1;
      return;
    }
    extraout_r2[1] = uVar1;
    uVar1 = FUN_00019994();
    *extraout_r2_06 = uVar1;
    uVar1 = FUN_00019994();
    *(undefined2 *)(extraout_r2_07 + 6) = uVar1;
    uVar1 = FUN_00019994();
    *(undefined2 *)(extraout_r2_08 + 4) = uVar1;
    return;
  }
  uVar1 = FUN_00019a06();
  if (unaff_r8 == 0) {
    *extraout_r2_12 = uVar1;
    uVar1 = FUN_00019a18();
    *(undefined2 *)(extraout_r2_13 + 2) = uVar1;
    uVar1 = FUN_00019a18();
    *(undefined2 *)(extraout_r2_14 + 4) = uVar1;
    uVar1 = FUN_00019a18();
    *(undefined2 *)(extraout_r2_15 + 6) = uVar1;
    return;
  }
  if (unaff_r8 != 1) {
    if (unaff_r8 != 2) {
      extraout_r2_12[3] = uVar1;
      uVar1 = FUN_00019a18();
      *(undefined2 *)(extraout_r2_16 + 4) = uVar1;
      uVar1 = FUN_00019a18();
      *(undefined2 *)(extraout_r2_17 + 2) = uVar1;
      uVar1 = FUN_00019a18();
      *extraout_r2_18 = uVar1;
      return;
    }
    extraout_r2_12[2] = uVar1;
    uVar1 = FUN_00019a18();
    *(undefined2 *)(extraout_r2_22 + 6) = uVar1;
    uVar1 = FUN_00019a18();
    *extraout_r2_23 = uVar1;
    uVar1 = FUN_00019a18();
    *(undefined2 *)(extraout_r2_24 + 2) = uVar1;
    return;
  }
  extraout_r2_12[1] = uVar1;
  uVar1 = FUN_00019a18();
  *extraout_r2_19 = uVar1;
  uVar1 = FUN_00019a18();
  *(undefined2 *)(extraout_r2_20 + 6) = uVar1;
  uVar1 = FUN_00019a18();
  *(undefined2 *)(extraout_r2_21 + 4) = uVar1;
  return;
}



void FUN_000194b8(uint *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int unaff_r11;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int unaff_r13;
  undefined4 *puVar13;
  ushort *puVar14;
  ushort **in_gbr;
  
  puVar10 = (undefined4 *)(((uint)(unaff_r11 << 1) >> 0x10) + param_4);
  puVar11 = (undefined4 *)((unaff_r11 << 1 & 0xffffU) + param_4);
  puVar12 = (undefined4 *)(((uint)(unaff_r13 << 3) >> 0x10) + param_4);
  puVar13 = (undefined4 *)((unaff_r13 << 3 & 0xffffU) + param_4);
  if ((int)(short)(*(short *)((int)puVar13 + 2) - *(short *)((int)puVar11 + 2)) *
      (int)(short)(*(short *)puVar12 - *(short *)puVar10) <
      (int)(short)(*(short *)((int)puVar12 + 2) - *(short *)((int)puVar10 + 2)) *
      (int)(short)(*(short *)puVar13 - *(short *)puVar11)) {
    return;
  }
  uVar4 = *param_1;
  puVar14 = *in_gbr;
  uVar1 = *puVar11;
  *(undefined4 *)(puVar14 + 6) = *puVar10;
  *(undefined4 *)(puVar14 + 8) = uVar1;
  uVar1 = *puVar13;
  *(undefined4 *)(puVar14 + 10) = *puVar12;
  *(undefined4 *)(puVar14 + 0xc) = uVar1;
  uVar2 = param_1[1];
  uVar5 = param_1[2];
  *puVar14 = DAT_000196c8 | (ushort)uVar4;
  *(uint *)(puVar14 + 2) = uVar2;
  *(uint *)(puVar14 + 4) = uVar5;
  iVar3 = puVar10[1];
  uVar2 = (uVar4 >> 0x10 & 0xf000) >> 8;
  iVar6 = puVar11[1];
  iVar8 = puVar12[1];
  iVar9 = puVar13[1];
  if (uVar2 == 0x20) {
    iVar3 = iVar3 + (iVar6 + iVar3 * -3 + iVar8 + iVar9 >> 2);
  }
  else if (uVar2 == 0) {
    if (iVar3 <= iVar6) {
      iVar3 = iVar6;
    }
    if (iVar8 <= iVar9) {
      iVar8 = iVar9;
    }
    if (iVar3 <= iVar8) {
      iVar3 = iVar8;
    }
  }
  else {
    if (uVar2 == 0x30) {
      puVar7 = in_gbr[8];
      puVar7[3] = (ushort)((uint)puVar14 >> 3);
      puVar7[2] = DAT_000196fa;
      goto LAB_0001973c;
    }
    if (iVar6 <= iVar3) {
      iVar3 = iVar6;
    }
    if (iVar9 <= iVar8) {
      iVar8 = iVar9;
    }
    if (iVar8 <= iVar3) {
      iVar3 = iVar8;
    }
  }
  iVar3 = (int)((ulonglong)((longlong)*(int *)(param_3 + 0x34) * (longlong)iVar3) >> 0x20);
  puVar7 = in_gbr[8];
  puVar7[3] = (ushort)((uint)puVar14 >> 3);
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  puVar7[2] = (ushort)iVar3;
LAB_0001973c:
  in_gbr[8] = puVar7 + 4;
  in_gbr[3] = (ushort *)((int)in_gbr[3] + 1);
  in_gbr[7] = (ushort *)((int)in_gbr[7] + 1);
  return;
}



void FUN_0001951c(uint *param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int unaff_r11;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int unaff_r13;
  undefined4 *puVar18;
  ushort *puVar19;
  byte bVar20;
  ushort **in_gbr;
  
  puVar12 = (undefined4 *)(((uint)(unaff_r11 << 3) >> 0x10) + param_4);
  puVar14 = (undefined4 *)((unaff_r11 << 3 & 0xffffU) + param_4);
  puVar16 = (undefined4 *)(((uint)(unaff_r13 << 5) >> 0x10) + param_4);
  puVar18 = (undefined4 *)((unaff_r13 << 5 & 0xffffU) + param_4);
  uVar2 = puVar12[6];
  uVar5 = puVar14[6];
  uVar8 = puVar16[6];
  uVar11 = puVar18[6];
  if (((uVar11 & uVar2 & uVar5 & uVar8) != 0) ||
     (uVar1 = uVar2 | uVar5 | uVar8 | uVar11, (uVar1 & 0x20) != 0)) {
    return;
  }
  bVar20 = uVar1 == 0;
  if ((bool)bVar20) {
    if ((int)(short)(*(short *)((int)puVar18 + 2) - *(short *)((int)puVar14 + 2)) *
        (int)(short)(*(short *)puVar16 - *(short *)puVar12) <
        (int)(short)(*(short *)((int)puVar16 + 2) - *(short *)((int)puVar12 + 2)) *
        (int)(short)(*(short *)puVar18 - *(short *)puVar14)) {
      return;
    }
    uVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar19 = *in_gbr;
    uVar3 = *puVar14;
    *(undefined4 *)(puVar19 + 6) = *puVar12;
    *(undefined4 *)(puVar19 + 8) = uVar3;
    uVar3 = *puVar18;
    *(undefined4 *)(puVar19 + 10) = *puVar16;
    *(undefined4 *)(puVar19 + 0xc) = uVar3;
    uVar5 = uVar2;
  }
  else {
    puVar12[7] = uVar2;
    puVar14[7] = uVar5;
    puVar16[7] = uVar8;
    puVar18[7] = uVar11;
    puVar12[4] = (int)*(short *)puVar12;
    puVar12[5] = (int)*(short *)((int)puVar12 + 2);
    puVar14[4] = (int)*(short *)puVar14;
    puVar14[5] = (int)*(short *)((int)puVar14 + 2);
    puVar16[4] = (int)*(short *)puVar16;
    puVar16[5] = (int)*(short *)((int)puVar16 + 2);
    puVar18[4] = (int)*(short *)puVar18;
    puVar18[5] = (int)*(short *)((int)puVar18 + 2);
    FUN_00019750();
    if ((bVar20 & 1) == 1) {
      return;
    }
    bVar20 = (int)(short)((short)puVar18[5] - (short)puVar14[5]) *
             (int)(short)((short)puVar16[4] - (short)puVar12[4]) <
             (int)(short)((short)puVar16[5] - (short)puVar12[5]) *
             (int)(short)((short)puVar18[4] - (short)puVar14[4]);
    if ((bool)bVar20) {
      return;
    }
    FUN_00019750();
    if ((bVar20 & 1) == 1) {
      return;
    }
    FUN_00019750();
    if ((bVar20 & 1) == 1) {
      return;
    }
    FUN_00019750();
    if ((bVar20 & 1) == 1) {
      return;
    }
    FUN_00019750();
    if ((bVar20 & 1) == 1) {
      return;
    }
    uVar5 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = uVar5;
    puVar13 = puVar12;
    puVar15 = puVar14;
    puVar17 = puVar16;
    if (puVar12[7] != 0) {
      if (puVar14[7] == 0) {
        uVar2 = uVar5 ^ 0x10;
        puVar13 = puVar14;
        puVar15 = puVar12;
        puVar17 = puVar18;
        puVar18 = puVar16;
      }
      else if (puVar16[7] == 0) {
        uVar2 = uVar5 ^ 0x30;
        puVar13 = puVar16;
        puVar15 = puVar18;
        puVar17 = puVar12;
        puVar18 = puVar14;
      }
      else if (puVar18[7] == 0) {
        uVar2 = uVar5 ^ 0x20;
        puVar13 = puVar18;
        puVar15 = puVar16;
        puVar17 = puVar14;
        puVar18 = puVar12;
      }
    }
    puVar19 = *in_gbr;
    *(uint *)(puVar19 + 6) = puVar13[4] << 0x10 | puVar13[5] & 0xffff;
    *(uint *)(puVar19 + 8) = puVar15[4] << 0x10 | puVar15[5] & 0xffff;
    *(uint *)(puVar19 + 10) = puVar17[4] << 0x10 | puVar17[5] & 0xffff;
    *(uint *)(puVar19 + 0xc) = puVar18[4] << 0x10 | puVar18[5] & 0xffff;
    puVar12 = puVar13;
    puVar14 = puVar15;
    puVar16 = puVar17;
  }
  uVar8 = *param_1;
  uVar11 = param_1[1];
  *puVar19 = DAT_000196c8 | (ushort)uVar2;
  *(uint *)(puVar19 + 2) = uVar8;
  *(uint *)(puVar19 + 4) = uVar11;
  iVar4 = puVar12[1];
  uVar2 = uVar5 >> 0x18 & 0xf0;
  iVar6 = puVar14[1];
  iVar9 = puVar16[1];
  iVar10 = puVar18[1];
  if (uVar2 == 0x20) {
    iVar4 = iVar4 + (iVar6 + iVar4 * -3 + iVar9 + iVar10 >> 2);
  }
  else if (uVar2 == 0) {
    if (iVar4 <= iVar6) {
      iVar4 = iVar6;
    }
    if (iVar9 <= iVar10) {
      iVar9 = iVar10;
    }
    if (iVar4 <= iVar9) {
      iVar4 = iVar9;
    }
  }
  else {
    if (uVar2 == 0x30) {
      puVar7 = in_gbr[8];
      puVar7[3] = (ushort)((uint)puVar19 >> 3);
      puVar7[2] = DAT_000196fa;
      goto LAB_0001973c;
    }
    if (iVar6 <= iVar4) {
      iVar4 = iVar6;
    }
    if (iVar10 <= iVar9) {
      iVar9 = iVar10;
    }
    if (iVar9 <= iVar4) {
      iVar4 = iVar9;
    }
  }
  iVar4 = (int)((ulonglong)((longlong)*(int *)(param_3 + 0x34) * (longlong)iVar4) >> 0x20);
  puVar7 = in_gbr[8];
  puVar7[3] = (ushort)((uint)puVar19 >> 3);
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  puVar7[2] = (ushort)iVar4;
LAB_0001973c:
  in_gbr[8] = puVar7 + 4;
  in_gbr[3] = (ushort *)((int)in_gbr[3] + 1);
  in_gbr[7] = (ushort *)((int)in_gbr[7] + 1);
  return;
}



void FUN_00019750(void)

{
  bool bVar1;
  bool bVar2;
  uint in_r1;
  int unaff_r10;
  int unaff_r11;
  int unaff_r12;
  int unaff_r13;
  code *UNRECOVERED_JUMPTABLE_00;
  
  bVar1 = (in_r1 & *(uint *)(unaff_r12 + 0x1c)) != 0;
  if ((in_r1 & *(uint *)(unaff_r13 + 0x1c)) == 0) {
    bVar2 = (in_r1 & *(uint *)(unaff_r11 + 0x1c)) != 0;
    if (!bVar1) {
      bVar1 = (in_r1 & *(uint *)(unaff_r10 + 0x1c)) != 0;
      if (bVar2) {
        if (bVar1) {
          (*UNRECOVERED_JUMPTABLE_00)();
                    // WARNING: Could not recover jumptable at 0x0001979e. Too many branches
                    // WARNING: Treating indirect jump as call
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
        if (*(int *)(unaff_r10 + 4) <= *(int *)(unaff_r12 + 4)) {
                    // WARNING: Could not recover jumptable at 0x0001978a. Too many branches
                    // WARNING: Treating indirect jump as call
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
                    // WARNING: Could not recover jumptable at 0x0001978e. Too many branches
                    // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      if (!bVar1) {
        return;
      }
      if (*(int *)(unaff_r11 + 4) <= *(int *)(unaff_r13 + 4)) {
                    // WARNING: Could not recover jumptable at 0x00019776. Too many branches
                    // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
                    // WARNING: Could not recover jumptable at 0x0001977a. Too many branches
                    // WARNING: Treating indirect jump as call
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    bVar1 = (in_r1 & *(uint *)(unaff_r10 + 0x1c)) == 0;
    if (bVar2) {
      if (bVar1) {
        (*UNRECOVERED_JUMPTABLE_00)();
                    // WARNING: Could not recover jumptable at 0x000197ca. Too many branches
                    // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      (*UNRECOVERED_JUMPTABLE_00)();
      (*UNRECOVERED_JUMPTABLE_00)();
                    // WARNING: Could not recover jumptable at 0x000197dc. Too many branches
                    // WARNING: Treating indirect jump as call
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    if (bVar1) {
      if (*(int *)(unaff_r13 + 4) <= *(int *)(unaff_r11 + 4)) {
                    // WARNING: Could not recover jumptable at 0x000197b4. Too many branches
                    // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
                    // WARNING: Could not recover jumptable at 0x000197b8. Too many branches
                    // WARNING: Treating indirect jump as call
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  else {
    bVar2 = (in_r1 & *(uint *)(unaff_r11 + 0x1c)) == 0;
    if (bVar1) {
      bVar1 = (in_r1 & *(uint *)(unaff_r10 + 0x1c)) == 0;
      if (bVar2) {
        if (bVar1) {
          (*UNRECOVERED_JUMPTABLE_00)();
                    // WARNING: Could not recover jumptable at 0x0001983c. Too many branches
                    // WARNING: Treating indirect jump as call
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
        (*UNRECOVERED_JUMPTABLE_00)();
        (*UNRECOVERED_JUMPTABLE_00)();
                    // WARNING: Could not recover jumptable at 0x0001984e. Too many branches
                    // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      if (bVar1) {
        (*UNRECOVERED_JUMPTABLE_00)();
        (*UNRECOVERED_JUMPTABLE_00)();
                    // WARNING: Could not recover jumptable at 0x00019862. Too many branches
                    // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
    }
    else {
      bVar1 = (in_r1 & *(uint *)(unaff_r10 + 0x1c)) != 0;
      if (bVar2) {
        if (bVar1) {
          (*UNRECOVERED_JUMPTABLE_00)();
                    // WARNING: Could not recover jumptable at 0x0001980c. Too many branches
                    // WARNING: Treating indirect jump as call
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
        if (*(int *)(unaff_r12 + 4) <= *(int *)(unaff_r10 + 4)) {
                    // WARNING: Could not recover jumptable at 0x000197f8. Too many branches
                    // WARNING: Treating indirect jump as call
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
                    // WARNING: Could not recover jumptable at 0x000197fc. Too many branches
                    // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      if (bVar1) {
        (*UNRECOVERED_JUMPTABLE_00)();
        (*UNRECOVERED_JUMPTABLE_00)();
                    // WARNING: Could not recover jumptable at 0x00019824. Too many branches
                    // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
    }
  }
  return;
}



uint FUN_00019982(undefined4 *param_1)

{
  bool bVar1;
  char cVar2;
  int in_r1;
  uint uVar3;
  short sVar5;
  uint uVar4;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint in_sr;
  int iVar9;
  int iVar10;
  
  uVar3 = (uint)(in_r1 << 1) >> 8 & 0xfffffff8;
  uVar8 = (uint)*(short *)((int)&DAT_00019bdc + uVar3);
  uVar7 = (uint)*(short *)((int)&DAT_00019bde + uVar3);
  uVar3 = (uint)*(short *)((int)&DAT_00019be0 + uVar3);
  iVar9 = (int)DAT_00019bc0._2_2_ * (int)(short)*param_1;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if (iVar9 < 0) {
      if (-1 < iVar9) {
        if (-1 < iVar9 == true) {
          iVar9 = -0x80000000;
        }
      }
      else {
        iVar9 = 0x7fffffff;
      }
    }
  }
  else {
    iVar9 = iVar9 + (uint)(iVar9 < 0);
  }
  iVar10 = (int)DAT_00019bc4._0_2_ * (int)(short)*(undefined4 *)((int)param_1 + 2);
  cVar2 = (-1 < iVar10) + (iVar9 < 0);
  iVar10 = iVar9 + iVar10;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((char)((iVar10 < 0) + (iVar9 < 0)) == '\x01') {
      if (cVar2 == '\0') {
        iVar10 = 0x7fffffff;
      }
      else if (cVar2 == '\x02') {
        iVar10 = -0x80000000;
      }
    }
  }
  else {
    iVar10 = iVar10 + (uint)(iVar10 < iVar9);
  }
  iVar9 = (int)DAT_00019bc4._2_2_ * (int)(short)param_1[1];
  cVar2 = (-1 < iVar9) + (iVar10 < 0);
  iVar9 = iVar10 + iVar9;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((char)((iVar9 < 0) + (iVar10 < 0)) == '\x01') {
      if (cVar2 == '\0') {
        iVar9 = 0x7fffffff;
      }
      else if (cVar2 == '\x02') {
        iVar9 = -0x80000000;
      }
    }
  }
  else {
    iVar9 = iVar9 + (uint)(iVar9 < iVar10);
  }
  if (0 < iVar9) {
    sVar5 = (short)((uint)iVar9 >> 0x10);
    uVar3 = (int)DAT_00019bd4 * (int)sVar5 + uVar3;
    uVar7 = (int)DAT_00019bd6 * (int)sVar5 + uVar7;
    uVar8 = (int)DAT_00019bd8 * (int)sVar5 + uVar8;
  }
  uVar4 = (uint)DAT_000199fc;
  bVar1 = (int)uVar4 <= (int)uVar3;
  if ((int)uVar3 < 1) {
    uVar3 = 0;
  }
  uVar3 = uVar3 & uVar4;
  if (bVar1) {
    uVar3 = uVar4;
  }
  uVar3 = uVar3 * 4;
  if (0 < (int)uVar7) {
    uVar6 = uVar7 & uVar4;
    if ((int)uVar4 <= (int)uVar7) {
      uVar6 = uVar4;
    }
    uVar3 = uVar3 + (uVar6 >> 3);
  }
  if ((int)uVar8 < 1) {
    return uVar3;
  }
  if ((int)uVar4 < (int)uVar8) {
    return uVar3 | 0x1f;
  }
  return uVar3 | uVar8 >> 8;
}



uint FUN_00019994(undefined4 *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  short sVar5;
  uint uVar4;
  uint uVar6;
  uint unaff_r10;
  uint unaff_r11;
  uint unaff_r12;
  uint in_sr;
  int iVar7;
  int iVar8;
  
  iVar7 = (int)DAT_00019bc0._2_2_ * (int)(short)*param_1;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if (iVar7 < 0) {
      if (-1 < iVar7) {
        if (-1 < iVar7 == true) {
          iVar7 = -0x80000000;
        }
      }
      else {
        iVar7 = 0x7fffffff;
      }
    }
  }
  else {
    iVar7 = iVar7 + (uint)(iVar7 < 0);
  }
  iVar8 = (int)DAT_00019bc4._0_2_ * (int)(short)*(undefined4 *)((int)param_1 + 2);
  cVar2 = (-1 < iVar8) + (iVar7 < 0);
  iVar8 = iVar7 + iVar8;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((char)((iVar8 < 0) + (iVar7 < 0)) == '\x01') {
      if (cVar2 == '\0') {
        iVar8 = 0x7fffffff;
      }
      else if (cVar2 == '\x02') {
        iVar8 = -0x80000000;
      }
    }
  }
  else {
    iVar8 = iVar8 + (uint)(iVar8 < iVar7);
  }
  iVar7 = (int)DAT_00019bc4._2_2_ * (int)(short)param_1[1];
  cVar2 = (-1 < iVar7) + (iVar8 < 0);
  iVar7 = iVar8 + iVar7;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((char)((iVar7 < 0) + (iVar8 < 0)) == '\x01') {
      if (cVar2 == '\0') {
        iVar7 = 0x7fffffff;
      }
      else if (cVar2 == '\x02') {
        iVar7 = -0x80000000;
      }
    }
  }
  else {
    iVar7 = iVar7 + (uint)(iVar7 < iVar8);
  }
  if (0 < iVar7) {
    sVar5 = (short)((uint)iVar7 >> 0x10);
    unaff_r10 = (int)DAT_00019bd4 * (int)sVar5 + unaff_r10;
    unaff_r11 = (int)DAT_00019bd6 * (int)sVar5 + unaff_r11;
    unaff_r12 = (int)DAT_00019bd8 * (int)sVar5 + unaff_r12;
  }
  uVar4 = (uint)DAT_000199fc;
  bVar1 = (int)uVar4 <= (int)unaff_r10;
  if ((int)unaff_r10 < 1) {
    unaff_r10 = 0;
  }
  uVar3 = unaff_r10 & uVar4;
  if (bVar1) {
    uVar3 = uVar4;
  }
  uVar3 = uVar3 * 4;
  if (0 < (int)unaff_r11) {
    uVar6 = unaff_r11 & uVar4;
    if ((int)uVar4 <= (int)unaff_r11) {
      uVar6 = uVar4;
    }
    uVar3 = uVar3 + (uVar6 >> 3);
  }
  if ((int)unaff_r12 < 1) {
    return uVar3;
  }
  if ((int)uVar4 < (int)unaff_r12) {
    return uVar3 | 0x1f;
  }
  return uVar3 | unaff_r12 >> 8;
}



uint FUN_00019a06(undefined4 *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int in_r1;
  uint uVar4;
  short sVar6;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  uint in_sr;
  int iVar9;
  int iVar10;
  
  uVar4 = (uint)(in_r1 << 1) >> 8 & 0xfffffff8;
  iVar9 = (int)DAT_00019bc0._2_2_ * (int)(short)*param_1;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if (iVar9 < 0) {
      if (-1 < iVar9) {
        if (-1 < iVar9 == true) {
          iVar9 = -0x80000000;
        }
      }
      else {
        iVar9 = 0x7fffffff;
      }
    }
  }
  else {
    iVar9 = iVar9 + (uint)(iVar9 < 0);
  }
  iVar10 = (int)DAT_00019bc4._0_2_ * (int)(short)*(undefined4 *)((int)param_1 + 2);
  cVar2 = (-1 < iVar10) + (iVar9 < 0);
  iVar10 = iVar9 + iVar10;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((char)((iVar10 < 0) + (iVar9 < 0)) == '\x01') {
      if (cVar2 == '\0') {
        iVar10 = 0x7fffffff;
      }
      else if (cVar2 == '\x02') {
        iVar10 = -0x80000000;
      }
    }
  }
  else {
    iVar10 = iVar10 + (uint)(iVar10 < iVar9);
  }
  iVar9 = (int)DAT_00019bc4._2_2_ * (int)(short)param_1[1];
  cVar2 = (-1 < iVar9) + (iVar10 < 0);
  iVar9 = iVar10 + iVar9;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((char)((iVar9 < 0) + (iVar10 < 0)) == '\x01') {
      if (cVar2 == '\0') {
        iVar9 = 0x7fffffff;
      }
      else if (cVar2 == '\x02') {
        iVar9 = -0x80000000;
      }
    }
  }
  else {
    iVar9 = iVar9 + (uint)(iVar9 < iVar10);
  }
  if (iVar9 < 1) {
    uVar3 = (int)*(short *)((int)param_1 + 6) + (int)*(short *)((int)&DAT_00019be0 + uVar4);
    uVar7 = (int)*(short *)(param_1 + 2) + (int)*(short *)((int)&DAT_00019bde + uVar4);
    uVar4 = (int)*(short *)((int)param_1 + 10) + (int)*(short *)((int)&DAT_00019bdc + uVar4);
  }
  else {
    sVar6 = (short)((uint)iVar9 >> 0x10);
    uVar3 = (int)DAT_00019bd4 * (int)sVar6 +
            (int)*(short *)((int)param_1 + 6) + (int)*(short *)((int)&DAT_00019be0 + uVar4);
    uVar7 = (int)DAT_00019bd6 * (int)sVar6 +
            (int)*(short *)(param_1 + 2) + (int)*(short *)((int)&DAT_00019bde + uVar4);
    uVar4 = (int)DAT_00019bd8 * (int)sVar6 +
            (int)*(short *)((int)param_1 + 10) + (int)*(short *)((int)&DAT_00019bdc + uVar4);
  }
  uVar5 = (uint)DAT_00019a92;
  bVar1 = (int)uVar5 <= (int)uVar3;
  if ((int)uVar3 < 1) {
    uVar3 = 0;
  }
  uVar3 = uVar3 & uVar5;
  if (bVar1) {
    uVar3 = uVar5;
  }
  uVar3 = uVar3 * 4;
  if (0 < (int)uVar7) {
    uVar8 = uVar7 & uVar5;
    if ((int)uVar5 <= (int)uVar7) {
      uVar8 = uVar5;
    }
    uVar3 = uVar3 + (uVar8 >> 3);
  }
  if ((int)uVar4 < 1) {
    return uVar3;
  }
  if ((int)uVar5 < (int)uVar4) {
    return uVar3 | 0x1f;
  }
  return uVar3 | uVar4 >> 8;
}



uint FUN_00019a18(undefined4 *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  short sVar5;
  uint uVar4;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int unaff_r10;
  int unaff_r11;
  int unaff_r12;
  uint in_sr;
  int iVar9;
  int iVar10;
  
  iVar9 = (int)DAT_00019bc0._2_2_ * (int)(short)*param_1;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if (iVar9 < 0) {
      if (-1 < iVar9) {
        if (-1 < iVar9 == true) {
          iVar9 = -0x80000000;
        }
      }
      else {
        iVar9 = 0x7fffffff;
      }
    }
  }
  else {
    iVar9 = iVar9 + (uint)(iVar9 < 0);
  }
  iVar10 = (int)DAT_00019bc4._0_2_ * (int)(short)*(undefined4 *)((int)param_1 + 2);
  cVar2 = (-1 < iVar10) + (iVar9 < 0);
  iVar10 = iVar9 + iVar10;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((char)((iVar10 < 0) + (iVar9 < 0)) == '\x01') {
      if (cVar2 == '\0') {
        iVar10 = 0x7fffffff;
      }
      else if (cVar2 == '\x02') {
        iVar10 = -0x80000000;
      }
    }
  }
  else {
    iVar10 = iVar10 + (uint)(iVar10 < iVar9);
  }
  iVar9 = (int)DAT_00019bc4._2_2_ * (int)(short)param_1[1];
  cVar2 = (-1 < iVar9) + (iVar10 < 0);
  iVar9 = iVar10 + iVar9;
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((char)((iVar9 < 0) + (iVar10 < 0)) == '\x01') {
      if (cVar2 == '\0') {
        iVar9 = 0x7fffffff;
      }
      else if (cVar2 == '\x02') {
        iVar9 = -0x80000000;
      }
    }
  }
  else {
    iVar9 = iVar9 + (uint)(iVar9 < iVar10);
  }
  if (iVar9 < 1) {
    uVar3 = *(short *)((int)param_1 + 6) + unaff_r10;
    uVar6 = *(short *)(param_1 + 2) + unaff_r11;
    uVar8 = *(short *)((int)param_1 + 10) + unaff_r12;
  }
  else {
    sVar5 = (short)((uint)iVar9 >> 0x10);
    uVar3 = (int)DAT_00019bd4 * (int)sVar5 + *(short *)((int)param_1 + 6) + unaff_r10;
    uVar6 = (int)DAT_00019bd6 * (int)sVar5 + *(short *)(param_1 + 2) + unaff_r11;
    uVar8 = (int)DAT_00019bd8 * (int)sVar5 + *(short *)((int)param_1 + 10) + unaff_r12;
  }
  uVar4 = (uint)DAT_00019a92;
  bVar1 = (int)uVar4 <= (int)uVar3;
  if ((int)uVar3 < 1) {
    uVar3 = 0;
  }
  uVar3 = uVar3 & uVar4;
  if (bVar1) {
    uVar3 = uVar4;
  }
  uVar3 = uVar3 * 4;
  if (0 < (int)uVar6) {
    uVar7 = uVar6 & uVar4;
    if ((int)uVar4 <= (int)uVar6) {
      uVar7 = uVar4;
    }
    uVar3 = uVar3 + (uVar7 >> 3);
  }
  if ((int)uVar8 < 1) {
    return uVar3;
  }
  if ((int)uVar4 < (int)uVar8) {
    return uVar3 | 0x1f;
  }
  return uVar3 | uVar8 >> 8;
}



void FUN_00019a9c(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint in_sr;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar8 = *param_2;
  uVar6 = uVar8 ^ DAT_00019bc8;
  if ((int)uVar8 < 0) {
    uVar8 = -uVar8;
  }
  uVar7 = DAT_00019bc8;
  if ((int)DAT_00019bc8 < 0) {
    uVar7 = -DAT_00019bc8;
  }
  uVar3 = (uVar7 & 0xffff) * (uVar8 & 0xffff);
  iVar5 = (uVar7 >> 0x10) * (uVar8 & 0xffff);
  iVar2 = 0;
  uVar1 = iVar5 + (uVar7 & 0xffff) * (uVar8 >> 0x10);
  if (iVar5 != 0) {
    iVar2 = 0x10000;
  }
  uVar9 = uVar3 + uVar1 * 0x10000;
  uVar8 = iVar2 + (uint)(uVar9 < uVar3) + (uVar1 >> 0x10) + (uVar7 >> 0x10) * (uVar8 >> 0x10);
  if ((int)uVar6 < 0) {
    uVar8 = ~uVar8;
    if (uVar9 == 0) {
      uVar8 = uVar8 + 1;
    }
    else {
      uVar9 = ~uVar9 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((int)uVar8 < -0x8000) {
      uVar8 = 0xffff8000;
      uVar9 = 0;
    }
    if (0x7fff < (int)uVar8) {
      uVar8 = 0x7fff;
      uVar9 = 0xffffffff;
    }
    uVar8 = uVar8 & 0xffff;
  }
  uVar6 = param_2[4];
  uVar7 = uVar6 ^ DAT_00019bcc;
  if ((int)uVar6 < 0) {
    uVar6 = -uVar6;
  }
  uVar1 = DAT_00019bcc;
  if ((int)DAT_00019bcc < 0) {
    uVar1 = -DAT_00019bcc;
  }
  uVar4 = (uVar1 & 0xffff) * (uVar6 & 0xffff);
  iVar5 = (uVar1 >> 0x10) * (uVar6 & 0xffff);
  iVar2 = 0;
  uVar3 = iVar5 + (uVar1 & 0xffff) * (uVar6 >> 0x10);
  if (iVar5 != 0) {
    iVar2 = 0x10000;
  }
  uVar10 = uVar4 + uVar3 * 0x10000;
  uVar6 = iVar2 + (uint)(uVar10 < uVar4) + (uVar3 >> 0x10) + (uVar1 >> 0x10) * (uVar6 >> 0x10);
  if ((int)uVar7 < 0) {
    uVar6 = ~uVar6;
    if (uVar10 == 0) {
      uVar6 = uVar6 + 1;
    }
    else {
      uVar10 = ~uVar10 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar10 = uVar9 + uVar10;
    uVar8 = uVar6 + (uVar10 < uVar9) + (uVar8 & 0xffff);
    if ((int)uVar8 < -0x8000) {
      uVar8 = 0xffff8000;
      uVar10 = 0;
    }
    if (0x7fff < (int)uVar8) {
      uVar8 = 0x7fff;
      uVar10 = 0xffffffff;
    }
    uVar8 = uVar8 & 0xffff;
  }
  else {
    uVar10 = uVar9 + uVar10;
    uVar8 = uVar6 + (uVar10 < uVar9) + uVar8;
  }
  uVar6 = param_2[8];
  uVar7 = uVar6 ^ DAT_00019bd0;
  if ((int)uVar6 < 0) {
    uVar6 = -uVar6;
  }
  uVar1 = DAT_00019bd0;
  if ((int)DAT_00019bd0 < 0) {
    uVar1 = -DAT_00019bd0;
  }
  uVar9 = (uVar1 & 0xffff) * (uVar6 & 0xffff);
  iVar5 = (uVar1 >> 0x10) * (uVar6 & 0xffff);
  iVar2 = 0;
  uVar3 = iVar5 + (uVar1 & 0xffff) * (uVar6 >> 0x10);
  if (iVar5 != 0) {
    iVar2 = 0x10000;
  }
  uVar4 = uVar9 + uVar3 * 0x10000;
  uVar6 = iVar2 + (uint)(uVar4 < uVar9) + (uVar3 >> 0x10) + (uVar1 >> 0x10) * (uVar6 >> 0x10);
  if ((int)uVar7 < 0) {
    uVar6 = ~uVar6;
    if (uVar4 == 0) {
      uVar6 = uVar6 + 1;
    }
    else {
      uVar4 = ~uVar4 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar4 = uVar10 + uVar4;
    iVar2 = uVar6 + (uVar4 < uVar10) + (uVar8 & 0xffff);
    if (iVar2 < -0x8000) {
      iVar2 = -0x8000;
      uVar4 = 0;
    }
    DAT_00019bc0._0_2_ = (undefined2)(uVar4 >> 0x10);
    if (0x7fff < iVar2) {
      DAT_00019bc0._0_2_ = 0xffff;
    }
  }
  else {
    DAT_00019bc0._0_2_ = (undefined2)(uVar10 + uVar4 >> 0x10);
  }
  uVar8 = param_2[1];
  uVar6 = uVar8 ^ DAT_00019bc8;
  if ((int)uVar8 < 0) {
    uVar8 = -uVar8;
  }
  uVar7 = DAT_00019bc8;
  if ((int)DAT_00019bc8 < 0) {
    uVar7 = -DAT_00019bc8;
  }
  uVar3 = (uVar7 & 0xffff) * (uVar8 & 0xffff);
  iVar5 = (uVar7 >> 0x10) * (uVar8 & 0xffff);
  iVar2 = 0;
  uVar1 = iVar5 + (uVar7 & 0xffff) * (uVar8 >> 0x10);
  if (iVar5 != 0) {
    iVar2 = 0x10000;
  }
  uVar9 = uVar3 + uVar1 * 0x10000;
  uVar8 = iVar2 + (uint)(uVar9 < uVar3) + (uVar1 >> 0x10) + (uVar7 >> 0x10) * (uVar8 >> 0x10);
  if ((int)uVar6 < 0) {
    uVar8 = ~uVar8;
    if (uVar9 == 0) {
      uVar8 = uVar8 + 1;
    }
    else {
      uVar9 = ~uVar9 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((int)uVar8 < -0x8000) {
      uVar8 = 0xffff8000;
      uVar9 = 0;
    }
    if (0x7fff < (int)uVar8) {
      uVar8 = 0x7fff;
      uVar9 = 0xffffffff;
    }
    uVar8 = uVar8 & 0xffff;
  }
  uVar6 = param_2[5];
  uVar7 = uVar6 ^ DAT_00019bcc;
  if ((int)uVar6 < 0) {
    uVar6 = -uVar6;
  }
  uVar1 = DAT_00019bcc;
  if ((int)DAT_00019bcc < 0) {
    uVar1 = -DAT_00019bcc;
  }
  uVar4 = (uVar1 & 0xffff) * (uVar6 & 0xffff);
  iVar5 = (uVar1 >> 0x10) * (uVar6 & 0xffff);
  iVar2 = 0;
  uVar3 = iVar5 + (uVar1 & 0xffff) * (uVar6 >> 0x10);
  if (iVar5 != 0) {
    iVar2 = 0x10000;
  }
  uVar10 = uVar4 + uVar3 * 0x10000;
  uVar6 = iVar2 + (uint)(uVar10 < uVar4) + (uVar3 >> 0x10) + (uVar1 >> 0x10) * (uVar6 >> 0x10);
  if ((int)uVar7 < 0) {
    uVar6 = ~uVar6;
    if (uVar10 == 0) {
      uVar6 = uVar6 + 1;
    }
    else {
      uVar10 = ~uVar10 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar10 = uVar9 + uVar10;
    uVar8 = uVar6 + (uVar10 < uVar9) + (uVar8 & 0xffff);
    if ((int)uVar8 < -0x8000) {
      uVar8 = 0xffff8000;
      uVar10 = 0;
    }
    if (0x7fff < (int)uVar8) {
      uVar8 = 0x7fff;
      uVar10 = 0xffffffff;
    }
    uVar8 = uVar8 & 0xffff;
  }
  else {
    uVar10 = uVar9 + uVar10;
    uVar8 = uVar6 + (uVar10 < uVar9) + uVar8;
  }
  uVar6 = param_2[9];
  uVar7 = uVar6 ^ DAT_00019bd0;
  if ((int)uVar6 < 0) {
    uVar6 = -uVar6;
  }
  uVar1 = DAT_00019bd0;
  if ((int)DAT_00019bd0 < 0) {
    uVar1 = -DAT_00019bd0;
  }
  uVar9 = (uVar1 & 0xffff) * (uVar6 & 0xffff);
  iVar5 = (uVar1 >> 0x10) * (uVar6 & 0xffff);
  iVar2 = 0;
  uVar3 = iVar5 + (uVar1 & 0xffff) * (uVar6 >> 0x10);
  if (iVar5 != 0) {
    iVar2 = 0x10000;
  }
  uVar4 = uVar9 + uVar3 * 0x10000;
  uVar6 = iVar2 + (uint)(uVar4 < uVar9) + (uVar3 >> 0x10) + (uVar1 >> 0x10) * (uVar6 >> 0x10);
  if ((int)uVar7 < 0) {
    uVar6 = ~uVar6;
    if (uVar4 == 0) {
      uVar6 = uVar6 + 1;
    }
    else {
      uVar4 = ~uVar4 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar4 = uVar10 + uVar4;
    iVar2 = uVar6 + (uVar4 < uVar10) + (uVar8 & 0xffff);
    if (iVar2 < -0x8000) {
      iVar2 = -0x8000;
      uVar4 = 0;
    }
    DAT_00019bc0._2_2_ = (undefined2)(uVar4 >> 0x10);
    if (0x7fff < iVar2) {
      DAT_00019bc0._2_2_ = 0xffff;
    }
  }
  else {
    DAT_00019bc0._2_2_ = (undefined2)(uVar10 + uVar4 >> 0x10);
  }
  uVar8 = param_2[2];
  uVar6 = uVar8 ^ DAT_00019bc8;
  if ((int)uVar8 < 0) {
    uVar8 = -uVar8;
  }
  uVar7 = DAT_00019bc8;
  if ((int)DAT_00019bc8 < 0) {
    uVar7 = -DAT_00019bc8;
  }
  uVar3 = (uVar7 & 0xffff) * (uVar8 & 0xffff);
  iVar5 = (uVar7 >> 0x10) * (uVar8 & 0xffff);
  iVar2 = 0;
  uVar1 = iVar5 + (uVar7 & 0xffff) * (uVar8 >> 0x10);
  if (iVar5 != 0) {
    iVar2 = 0x10000;
  }
  uVar9 = uVar3 + uVar1 * 0x10000;
  uVar8 = iVar2 + (uint)(uVar9 < uVar3) + (uVar1 >> 0x10) + (uVar7 >> 0x10) * (uVar8 >> 0x10);
  if ((int)uVar6 < 0) {
    uVar8 = ~uVar8;
    if (uVar9 == 0) {
      uVar8 = uVar8 + 1;
    }
    else {
      uVar9 = ~uVar9 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((int)uVar8 < -0x8000) {
      uVar8 = 0xffff8000;
      uVar9 = 0;
    }
    if (0x7fff < (int)uVar8) {
      uVar8 = 0x7fff;
      uVar9 = 0xffffffff;
    }
    uVar8 = uVar8 & 0xffff;
  }
  uVar6 = param_2[6];
  uVar7 = uVar6 ^ DAT_00019bcc;
  if ((int)uVar6 < 0) {
    uVar6 = -uVar6;
  }
  uVar1 = DAT_00019bcc;
  if ((int)DAT_00019bcc < 0) {
    uVar1 = -DAT_00019bcc;
  }
  uVar4 = (uVar1 & 0xffff) * (uVar6 & 0xffff);
  iVar5 = (uVar1 >> 0x10) * (uVar6 & 0xffff);
  iVar2 = 0;
  uVar3 = iVar5 + (uVar1 & 0xffff) * (uVar6 >> 0x10);
  if (iVar5 != 0) {
    iVar2 = 0x10000;
  }
  uVar10 = uVar4 + uVar3 * 0x10000;
  uVar6 = iVar2 + (uint)(uVar10 < uVar4) + (uVar3 >> 0x10) + (uVar1 >> 0x10) * (uVar6 >> 0x10);
  if ((int)uVar7 < 0) {
    uVar6 = ~uVar6;
    if (uVar10 == 0) {
      uVar6 = uVar6 + 1;
    }
    else {
      uVar10 = ~uVar10 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar10 = uVar9 + uVar10;
    uVar8 = uVar6 + (uVar10 < uVar9) + (uVar8 & 0xffff);
    if ((int)uVar8 < -0x8000) {
      uVar8 = 0xffff8000;
      uVar10 = 0;
    }
    if (0x7fff < (int)uVar8) {
      uVar8 = 0x7fff;
      uVar10 = 0xffffffff;
    }
    uVar8 = uVar8 & 0xffff;
  }
  else {
    uVar10 = uVar9 + uVar10;
    uVar8 = uVar6 + (uVar10 < uVar9) + uVar8;
  }
  uVar6 = param_2[10];
  uVar7 = uVar6 ^ DAT_00019bd0;
  if ((int)uVar6 < 0) {
    uVar6 = -uVar6;
  }
  uVar1 = DAT_00019bd0;
  if ((int)DAT_00019bd0 < 0) {
    uVar1 = -DAT_00019bd0;
  }
  uVar9 = (uVar1 & 0xffff) * (uVar6 & 0xffff);
  iVar5 = (uVar1 >> 0x10) * (uVar6 & 0xffff);
  iVar2 = 0;
  uVar3 = iVar5 + (uVar1 & 0xffff) * (uVar6 >> 0x10);
  if (iVar5 != 0) {
    iVar2 = 0x10000;
  }
  uVar4 = uVar9 + uVar3 * 0x10000;
  uVar6 = iVar2 + (uint)(uVar4 < uVar9) + (uVar3 >> 0x10) + (uVar1 >> 0x10) * (uVar6 >> 0x10);
  if ((int)uVar7 < 0) {
    uVar6 = ~uVar6;
    if (uVar4 == 0) {
      uVar6 = uVar6 + 1;
    }
    else {
      uVar4 = ~uVar4 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar4 = uVar10 + uVar4;
    iVar2 = uVar6 + (uVar4 < uVar10) + (uVar8 & 0xffff);
    if (iVar2 < -0x8000) {
      iVar2 = -0x8000;
      uVar4 = 0;
    }
    DAT_00019bc4._0_2_ = (undefined2)(uVar4 >> 0x10);
    if (0x7fff < iVar2) {
      DAT_00019bc4._0_2_ = 0xffff;
    }
  }
  else {
    DAT_00019bc4._0_2_ = (undefined2)(uVar10 + uVar4 >> 0x10);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00019d72)
// WARNING: Removing unreachable block (ram,0x00019d70)
// WARNING: Removing unreachable block (ram,0x00019d74)

void FUN_00019d52(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *in_r1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint in_sr;
  uint in_mach;
  uint in_macl;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar2 = DAT_00019e58 - *(int *)(param_2 + 0x2c);
  uVar3 = DAT_00019e54 - *(int *)(param_2 + 0x1c);
  uVar4 = DAT_00019e50 - *(int *)(param_2 + 0xc);
  if ((int)uVar4 < 0) {
    uVar4 = -uVar4;
  }
  uVar10 = (uVar4 & 0xffff) * (uVar4 & 0xffff);
  iVar1 = (uVar4 >> 0x10) * (uVar4 & 0xffff);
  iVar5 = 0;
  uVar7 = iVar1 + (uVar4 & 0xffff) * (uVar4 >> 0x10);
  if (iVar1 != 0) {
    iVar5 = 0x10000;
  }
  uVar8 = uVar10 + uVar7 * 0x10000;
  iVar5 = iVar5 + (uint)(uVar8 < uVar10) + (uVar7 >> 0x10) + (uVar4 >> 0x10) * (uVar4 >> 0x10);
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar8 = in_macl + uVar8;
    uVar4 = iVar5 + (uint)(uVar8 < in_macl) + (in_mach & 0xffff);
    if ((int)uVar4 < -0x8000) {
      uVar4 = 0xffff8000;
      uVar8 = 0;
    }
    if (0x7fff < (int)uVar4) {
      uVar4 = 0x7fff;
      uVar8 = 0xffffffff;
    }
    uVar4 = uVar4 & 0xffff;
  }
  else {
    uVar8 = in_macl + uVar8;
    uVar4 = iVar5 + (uint)(uVar8 < in_macl) + in_mach;
  }
  if ((int)uVar3 < 0) {
    uVar3 = -uVar3;
  }
  uVar10 = (uVar3 & 0xffff) * (uVar3 & 0xffff);
  iVar1 = (uVar3 >> 0x10) * (uVar3 & 0xffff);
  iVar5 = 0;
  uVar7 = iVar1 + (uVar3 & 0xffff) * (uVar3 >> 0x10);
  if (iVar1 != 0) {
    iVar5 = 0x10000;
  }
  uVar9 = uVar10 + uVar7 * 0x10000;
  iVar5 = iVar5 + (uint)(uVar9 < uVar10) + (uVar7 >> 0x10) + (uVar3 >> 0x10) * (uVar3 >> 0x10);
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar9 = uVar8 + uVar9;
    uVar4 = iVar5 + (uint)(uVar9 < uVar8) + (uVar4 & 0xffff);
    if ((int)uVar4 < -0x8000) {
      uVar4 = 0xffff8000;
      uVar9 = 0;
    }
    if (0x7fff < (int)uVar4) {
      uVar4 = 0x7fff;
      uVar9 = 0xffffffff;
    }
    uVar4 = uVar4 & 0xffff;
  }
  else {
    uVar9 = uVar8 + uVar9;
    uVar4 = iVar5 + (uint)(uVar9 < uVar8) + uVar4;
  }
  if ((int)uVar2 < 0) {
    uVar2 = -uVar2;
  }
  uVar7 = (uVar2 & 0xffff) * (uVar2 & 0xffff);
  iVar1 = (uVar2 >> 0x10) * (uVar2 & 0xffff);
  iVar5 = 0;
  uVar3 = iVar1 + (uVar2 & 0xffff) * (uVar2 >> 0x10);
  if (iVar1 != 0) {
    iVar5 = 0x10000;
  }
  uVar10 = uVar7 + uVar3 * 0x10000;
  iVar5 = iVar5 + (uint)(uVar10 < uVar7) + (uVar3 >> 0x10) + (uVar2 >> 0x10) * (uVar2 >> 0x10);
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar10 = uVar9 + uVar10;
    uVar4 = iVar5 + (uint)(uVar10 < uVar9) + (uVar4 & 0xffff);
    if ((int)uVar4 < -0x8000) {
      uVar4 = 0xffff8000;
      uVar10 = 0;
    }
    if (0x7fff < (int)uVar4) {
      uVar4 = 0x7fff;
      uVar10 = 0xffffffff;
    }
    uVar4 = uVar4 & 0xffff;
  }
  else {
    uVar10 = uVar9 + uVar10;
    uVar4 = iVar5 + (uint)(uVar10 < uVar9) + uVar4;
  }
  uVar4 = uVar4 << 0x10 | uVar10 >> 0x10;
  if (uVar4 < DAT_00019e60) {
    uVar2 = 0;
    iVar5 = 0x10;
    uVar3 = DAT_00019dac;
    do {
      uVar7 = uVar2 + uVar3;
      uVar2 = uVar2 >> 1;
      if (uVar7 <= uVar4) {
        uVar4 = uVar4 - uVar7;
        uVar2 = uVar2 + uVar3;
      }
      iVar5 = iVar5 + -1;
      uVar3 = uVar3 >> 2;
    } while (iVar5 != 0);
    uVar3 = 0x100000;
    uVar4 = uVar2;
  }
  else {
    uVar3 = DAT_00019e5c;
    if (DAT_00019e5c < uVar4) {
      *in_r1 = 0;
      *(undefined2 *)(in_r1 + 1) = 0;
      return;
    }
  }
  puVar6 = (uint *)(int)DAT_00019dce;
  puVar6[3] = (uint)puVar6;
  *puVar6 = uVar4;
  puVar6[1] = uVar3;
  return;
}



uint FUN_0001a084(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((*(ushort *)(param_1 + 8) & 2) == 0) {
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar1 = (int)*(short *)(param_1 + 10) & 0xffff;
      if (((int)*(short *)(param_1 + 10) & 0x20U) == 0) {
        uVar1 = *(uint *)(param_1 + 0x38);
        uVar2 = DAT_0001a1ec;
        if (uVar1 == 0) {
          *(undefined4 *)(param_1 + 0x18) = DAT_0001a1f0;
          return 0;
        }
      }
      else {
        uVar2 = DAT_0001a1e4;
        if (*(int *)(param_1 + 0x38) == 0) {
          *(undefined4 *)(param_1 + 0x18) = DAT_0001a1e8;
          return uVar1;
        }
      }
    }
    else {
      uVar1 = (int)*(short *)(param_1 + 10) & 0xffff;
      if (((int)*(short *)(param_1 + 10) & 0x20U) == 0) {
        uVar1 = *(uint *)(param_1 + 0x38);
        uVar2 = DAT_0001a1dc;
        if (uVar1 == 0) {
          *(undefined4 *)(param_1 + 0x18) = DAT_0001a1e0;
          return 0;
        }
      }
      else {
        uVar2 = DAT_0001a1d4;
        if (*(int *)(param_1 + 0x38) == 0) {
          *(undefined4 *)(param_1 + 0x18) = DAT_0001a1d8;
          return uVar1;
        }
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar2 = DAT_0001a1cc;
      if (*(int *)(param_1 + 0x38) == 0) {
        *(undefined4 *)(param_1 + 0x18) = DAT_0001a1d0;
        return 0x40;
      }
    }
    else {
      uVar2 = DAT_0001a1c4;
      if (*(int *)(param_1 + 0x38) == 0) {
        *(undefined4 *)(param_1 + 0x18) = DAT_0001a1c8;
        return 0x40;
      }
    }
    uVar1 = 0x40;
  }
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  return uVar1;
}



void FUN_0001a11c(int param_1,int param_2)

{
  while( true ) {
    *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + 1;
    if (*(int *)(param_2 + 4) != 0) {
      FUN_0001a11c(param_1,*(undefined4 *)(param_2 + 4));
    }
    if (*(int *)(param_2 + 8) == 0) break;
    param_2 = *(int *)(param_2 + 8);
  }
  return;
}



undefined4 FUN_0001a14e(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  param_1[0x10] = param_2;
  pcVar1 = DAT_0001a1f4;
  iVar2 = (*DAT_0001a1f4)(*param_1,(int)*(short *)((int)param_1 + 0x12) << 2);
  param_1[0x11] = iVar2;
  if (iVar2 == 0) {
LAB_0001a1a0:
    uVar4 = 0;
  }
  else {
    iVar5 = param_1[0x10];
    piVar6 = (int *)param_1[0x11];
    iVar2 = (int)*(short *)((int)param_1 + 0x12);
    do {
      if (*(int *)(iVar5 + 4) < 1) {
        *piVar6 = 0;
      }
      else {
        iVar3 = (*pcVar1)(*param_1,*(int *)(iVar5 + 4) * 0xc);
        *piVar6 = iVar3;
        if (iVar3 == 0) goto LAB_0001a1a0;
      }
      iVar5 = iVar5 + 8;
      iVar2 = iVar2 + -1;
      piVar6 = piVar6 + 1;
    } while (iVar2 != 0);
    uVar4 = 1;
  }
  return uVar4;
}



void FUN_0001a356(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_1;
  while( true ) {
    (*DAT_0001a410)(piVar1);
    (*DAT_0001a414)(*param_2);
    (*DAT_0001a418)(*param_2 + 0xc);
    if (*param_1 != 0) {
      (*DAT_0001a41c)(*param_1);
    }
    if (param_1[1] != 0) {
      *param_2 = *param_2 + (int)DAT_0001a408;
      FUN_0001a356(param_1[1],param_2);
    }
    (*DAT_0001a420)();
    if (param_1[2] == 0) break;
    *param_2 = *param_2 + (int)DAT_0001a408;
    param_1 = (int *)param_1[2];
    piVar1 = param_2;
  }
  return;
}



void FUN_0001a424(int **param_1,int **param_2,int **param_3,int **param_4)

{
  int **ppiVar1;
  int **ppiVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  ppiVar1 = param_1;
  ppiVar2 = param_2;
  while( true ) {
    (*DAT_0001a508)(ppiVar1,ppiVar2,param_3);
    (*DAT_0001a50c)(*param_2);
    (*DAT_0001a510)(*param_2 + 3);
    if (*param_1 != (int *)0x0) {
      (*DAT_0001a514)(*param_1);
    }
    iVar3 = (*param_3)[1];
    if (iVar3 != 0) {
      iVar4 = **param_3;
      iVar5 = **param_4;
      do {
        (*DAT_0001a518)(iVar4 + 4,iVar5);
        iVar4 = iVar4 + 0x14;
        iVar3 = iVar3 + -1;
        iVar5 = iVar5 + 0xc;
      } while (iVar3 != 0);
    }
    if (param_1[1] != (int *)0x0) {
      *param_2 = (int *)((int)*param_2 + (int)DAT_0001a504);
      *param_3 = *param_3 + 2;
      *param_4 = *param_4 + 1;
      FUN_0001a424(param_1[1],param_2,param_3,param_4);
    }
    (*DAT_0001a51c)();
    if (param_1[2] == (int *)0x0) break;
    *param_2 = (int *)((int)*param_2 + (int)DAT_0001a504);
    *param_3 = *param_3 + 2;
    *param_4 = *param_4 + 1;
    param_1 = (int **)param_1[2];
    ppiVar1 = param_2;
    ppiVar2 = param_4;
  }
  return;
}



void FUN_0001a520(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_1;
  while( true ) {
    (*DAT_0001a5ec)(piVar1);
    (*DAT_0001a5f0)(*param_2);
    (*DAT_0001a5f4)(*param_2 + 0xc);
    (*DAT_0001a5f8)(*(undefined4 *)(*param_2 + 0x18));
    (*DAT_0001a5fc)(*(undefined4 *)(*param_2 + 0x1c));
    (*DAT_0001a600)(*(undefined4 *)(*param_2 + 0x20));
    if (*param_1 != 0) {
      (*DAT_0001a604)(*param_1);
    }
    if (param_1[1] != 0) {
      *param_2 = *param_2 + (int)DAT_0001a5e8;
      FUN_0001a520(param_1[1],param_2);
    }
    (*DAT_0001a608)();
    if (param_1[2] == 0) break;
    *param_2 = *param_2 + (int)DAT_0001a5e8;
    param_1 = (int *)param_1[2];
    piVar1 = param_2;
  }
  return;
}



void FUN_0001a60c(int **param_1,int **param_2,int **param_3,int **param_4)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  ppiVar1 = param_1;
  ppiVar2 = param_2;
  ppiVar3 = param_3;
  while( true ) {
    (*DAT_0001a718)(ppiVar1,ppiVar2,ppiVar3);
    (*DAT_0001a71c)(*param_2);
    (*DAT_0001a720)(*param_2 + 3);
    (*DAT_0001a724)((*param_2)[6]);
    (*DAT_0001a728)((*param_2)[7]);
    (*DAT_0001a72c)((*param_2)[8]);
    if (*param_1 != (int *)0x0) {
      (*DAT_0001a730)(*param_1);
    }
    iVar4 = (*param_3)[1];
    if (iVar4 != 0) {
      iVar5 = **param_3;
      iVar6 = **param_4;
      do {
        (*DAT_0001a734)(iVar5 + 4,iVar6);
        iVar5 = iVar5 + 0x14;
        iVar4 = iVar4 + -1;
        iVar6 = iVar6 + 0xc;
      } while (iVar4 != 0);
    }
    if (param_1[1] != (int *)0x0) {
      *param_2 = (int *)((int)*param_2 + (int)DAT_0001a714);
      *param_3 = *param_3 + 2;
      *param_4 = *param_4 + 1;
      FUN_0001a60c(param_1[1],param_2,param_3,param_4);
    }
    (*DAT_0001a738)();
    if (param_1[2] == (int *)0x0) break;
    *param_2 = (int *)((int)*param_2 + (int)DAT_0001a714);
    *param_3 = *param_3 + 2;
    *param_4 = *param_4 + 1;
    param_1 = (int **)param_1[2];
    ppiVar1 = param_2;
    ppiVar2 = param_3;
    ppiVar3 = param_4;
  }
  return;
}



void FUN_0001a73c(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = param_1;
  piVar2 = param_2;
  while( true ) {
    (*DAT_0001a81c)(piVar1,piVar2);
    (*DAT_0001a820)(*param_2);
    (*DAT_0001a824)(*param_2 + 0xc);
    if (*param_1 != 0) {
      (*DAT_0001a828)(*param_1,*(undefined4 *)*param_3);
    }
    if (param_1[1] != 0) {
      *param_2 = *param_2 + (int)DAT_0001a818;
      *param_3 = *param_3 + 4;
      FUN_0001a73c(param_1[1],param_2,param_3);
    }
    (*DAT_0001a82c)();
    if (param_1[2] == 0) break;
    *param_2 = *param_2 + (int)DAT_0001a818;
    *param_3 = *param_3 + 4;
    param_1 = (int *)param_1[2];
    piVar1 = param_2;
    piVar2 = param_3;
  }
  return;
}



void FUN_0001a830(int **param_1,int **param_2,int **param_3,int **param_4,int **param_5)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int iVar5;
  int iVar6;
  int local_24;
  
  ppiVar1 = param_1;
  ppiVar2 = param_2;
  ppiVar3 = param_3;
  ppiVar4 = param_4;
  while( true ) {
    (*DAT_0001a948)(ppiVar1,ppiVar2,ppiVar3,ppiVar4);
    (*DAT_0001a94c)(*param_2);
    (*DAT_0001a950)(*param_2 + 3);
    if (*param_1 != (int *)0x0) {
      (*DAT_0001a954)(*param_1,**param_3);
    }
    local_24 = (*param_4)[1];
    if (local_24 != 0) {
      iVar5 = **param_4;
      iVar6 = **param_5;
      do {
        (*DAT_0001a958)(iVar5 + 4,iVar6);
        iVar5 = iVar5 + 0x14;
        local_24 = local_24 + -1;
        iVar6 = iVar6 + 0xc;
      } while (local_24 != 0);
    }
    if (param_1[1] != (int *)0x0) {
      *param_2 = (int *)((int)*param_2 + (int)DAT_0001a944);
      *param_3 = *param_3 + 1;
      *param_4 = *param_4 + 2;
      *param_5 = *param_5 + 1;
      FUN_0001a830(param_1[1],param_2,param_3,param_4,param_5);
    }
    (*DAT_0001a95c)();
    if (param_1[2] == (int *)0x0) break;
    *param_2 = (int *)((int)*param_2 + (int)DAT_0001a944);
    *param_3 = *param_3 + 1;
    *param_4 = *param_4 + 2;
    *param_5 = *param_5 + 1;
    param_1 = (int **)param_1[2];
    ppiVar1 = param_2;
    ppiVar2 = param_3;
    ppiVar3 = param_4;
    ppiVar4 = param_5;
  }
  return;
}



void FUN_0001a960(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = param_1;
  piVar2 = param_2;
  while( true ) {
    (*DAT_0001aa58)(piVar1,piVar2);
    (*DAT_0001aa5c)(*param_2);
    (*DAT_0001aa60)(*param_2 + 0xc);
    (*DAT_0001aa64)(*(undefined4 *)(*param_2 + 0x18));
    (*DAT_0001aa68)(*(undefined4 *)(*param_2 + 0x1c));
    (*DAT_0001aa6c)(*(undefined4 *)(*param_2 + 0x20));
    if (*param_1 != 0) {
      (*DAT_0001aa70)(*param_1,*(undefined4 *)*param_3);
    }
    if (param_1[1] != 0) {
      *param_2 = *param_2 + (int)DAT_0001aa54;
      *param_3 = *param_3 + 4;
      FUN_0001a960(param_1[1],param_2,param_3);
    }
    (*DAT_0001aa74)();
    if (param_1[2] == 0) break;
    *param_2 = *param_2 + (int)DAT_0001aa54;
    *param_3 = *param_3 + 4;
    param_1 = (int *)param_1[2];
    piVar1 = param_2;
    piVar2 = param_3;
  }
  return;
}



void FUN_0001aa78(int **param_1,int **param_2,int **param_3,int **param_4,int **param_5)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int iVar5;
  int iVar6;
  int local_24;
  
  ppiVar1 = param_1;
  ppiVar2 = param_2;
  ppiVar3 = param_3;
  ppiVar4 = param_4;
  while( true ) {
    (*DAT_0001ab98)(ppiVar1,ppiVar2,ppiVar3,ppiVar4);
    (*DAT_0001ab9c)(*param_2);
    (*DAT_0001aba0)(*param_2 + 3);
    (*DAT_0001aba4)((*param_2)[6]);
    (*DAT_0001aba8)((*param_2)[7]);
    (*DAT_0001abac)((*param_2)[8]);
    if (*param_1 != (int *)0x0) {
      (*DAT_0001abb0)(*param_1,**param_3);
    }
    local_24 = (*param_4)[1];
    if (local_24 != 0) {
      iVar5 = **param_4;
      iVar6 = **param_5;
      do {
        (*DAT_0001abb4)(iVar5 + 4,iVar6);
        iVar5 = iVar5 + 0x14;
        local_24 = local_24 + -1;
        iVar6 = iVar6 + 0xc;
      } while (local_24 != 0);
    }
    if (param_1[1] != (int *)0x0) {
      *param_2 = (int *)((int)*param_2 + (int)DAT_0001ab94);
      *param_3 = *param_3 + 1;
      *param_4 = *param_4 + 2;
      *param_5 = *param_5 + 1;
      FUN_0001aa78(param_1[1],param_2,param_3,param_4,param_5);
    }
    (*DAT_0001abb8)();
    if (param_1[2] == (int *)0x0) break;
    *param_2 = (int *)((int)*param_2 + (int)DAT_0001ab94);
    *param_3 = *param_3 + 1;
    *param_4 = *param_4 + 2;
    *param_5 = *param_5 + 1;
    param_1 = (int **)param_1[2];
    ppiVar1 = param_2;
    ppiVar2 = param_3;
    ppiVar3 = param_4;
    ppiVar4 = param_5;
  }
  return;
}



void FUN_0001abbc(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_1;
  while( true ) {
    (*DAT_0001ae24)(piVar1);
    (*DAT_0001ae28)(*param_2);
    if (*param_1 != 0) {
      (*DAT_0001ae2c)(*param_1);
    }
    if (param_1[1] != 0) {
      *param_2 = *param_2 + 0x30;
      FUN_0001abbc(param_1[1],param_2);
    }
    (*DAT_0001ae30)();
    if (param_1[2] == 0) break;
    *param_2 = *param_2 + 0x30;
    param_1 = (int *)param_1[2];
    piVar1 = param_2;
  }
  return;
}



void FUN_0001ac60(int **param_1,int **param_2,int **param_3,int **param_4)

{
  code *pcVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int iVar5;
  
  ppiVar2 = param_1;
  ppiVar3 = param_2;
  ppiVar4 = param_3;
  while( true ) {
    (*DAT_0001ae24)(ppiVar2,ppiVar3,ppiVar4);
    (*DAT_0001ae28)(*param_2);
    if (*param_1 != (int *)0x0) {
      (*DAT_0001ae2c)(*param_1);
    }
    pcVar1 = DAT_0001ae34;
    for (iVar5 = 0; iVar5 < (*param_3)[1]; iVar5 = iVar5 + 1) {
      (*pcVar1)(**param_3 + iVar5 * 0x14 + 4,iVar5 * 0xc + **param_4);
    }
    if (param_1[1] != (int *)0x0) {
      *param_2 = *param_2 + 0xc;
      *param_3 = *param_3 + 2;
      *param_4 = *param_4 + 1;
      FUN_0001ac60(param_1[1],param_2,param_3,param_4);
    }
    (*DAT_0001ae30)();
    if (param_1[2] == (int *)0x0) break;
    *param_2 = *param_2 + 0xc;
    *param_3 = *param_3 + 2;
    *param_4 = *param_4 + 1;
    param_1 = (int **)param_1[2];
    ppiVar2 = param_2;
    ppiVar3 = param_3;
    ppiVar4 = param_4;
  }
  return;
}



void FUN_0001ad52(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = param_1;
  piVar2 = param_2;
  while( true ) {
    (*DAT_0001ae24)(piVar1,piVar2);
    (*DAT_0001ae28)(*param_2);
    if (*param_1 != 0) {
      (*DAT_0001ae38)(*param_1,*(undefined4 *)*param_3);
    }
    if (param_1[1] != 0) {
      *param_2 = *param_2 + 0x30;
      *param_3 = *param_3 + 4;
      FUN_0001ad52(param_1[1],param_2,param_3);
    }
    (*DAT_0001ae30)();
    if (param_1[2] == 0) break;
    *param_2 = *param_2 + 0x30;
    *param_3 = *param_3 + 4;
    param_1 = (int *)param_1[2];
    piVar1 = param_2;
    piVar2 = param_3;
  }
  return;
}



void FUN_0001ae3c(int **param_1,int **param_2,int **param_3,int **param_4,int **param_5)

{
  code *pcVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int iVar6;
  
  ppiVar2 = param_1;
  ppiVar3 = param_2;
  ppiVar4 = param_3;
  ppiVar5 = param_4;
  while( true ) {
    (*DAT_0001af14)(ppiVar2,ppiVar3,ppiVar4,ppiVar5);
    (*DAT_0001af18)(*param_2);
    if (*param_1 != (int *)0x0) {
      (*DAT_0001af1c)(*param_1,**param_3);
    }
    pcVar1 = DAT_0001af20;
    for (iVar6 = 0; iVar6 < (*param_4)[1]; iVar6 = iVar6 + 1) {
      (*pcVar1)(**param_4 + iVar6 * 0x14 + 4,iVar6 * 0xc + **param_5);
    }
    if (param_1[1] != (int *)0x0) {
      *param_2 = *param_2 + 0xc;
      *param_3 = *param_3 + 1;
      *param_4 = *param_4 + 2;
      *param_5 = *param_5 + 1;
      FUN_0001ae3c(param_1[1],param_2,param_3,param_4,param_5);
    }
    (*DAT_0001af24)();
    if (param_1[2] == (int *)0x0) break;
    *param_2 = *param_2 + 0xc;
    *param_3 = *param_3 + 1;
    *param_4 = *param_4 + 2;
    *param_5 = *param_5 + 1;
    param_1 = (int **)param_1[2];
    ppiVar2 = param_2;
    ppiVar3 = param_3;
    ppiVar4 = param_4;
    ppiVar5 = param_5;
  }
  return;
}



void FUN_0001af28(int **param_1,int **param_2,int **param_3,int **param_4)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  ppiVar1 = param_1;
  ppiVar2 = param_2;
  ppiVar3 = param_3;
  while( true ) {
    (*DAT_0001afd8)(ppiVar1,ppiVar2,ppiVar3);
    (*DAT_0001afdc)(*param_2);
    (*DAT_0001afe0)(*param_2 + 3);
    iVar4 = (*param_3)[1];
    if (iVar4 != 0) {
      iVar5 = **param_3;
      iVar6 = **param_4;
      do {
        (*DAT_0001afe4)(iVar5 + 4,iVar6);
        iVar5 = iVar5 + 0x14;
        iVar4 = iVar4 + -1;
        iVar6 = iVar6 + 0xc;
      } while (iVar4 != 0);
    }
    if (param_1[1] != (int *)0x0) {
      *param_2 = (int *)((int)*param_2 + (int)DAT_0001afd6);
      *param_3 = *param_3 + 2;
      *param_4 = *param_4 + 1;
      FUN_0001af28(param_1[1],param_2,param_3,param_4);
    }
    (*DAT_0001afe8)();
    if (param_1[2] == (int *)0x0) break;
    *param_2 = (int *)((int)*param_2 + (int)DAT_0001afd6);
    *param_3 = *param_3 + 2;
    *param_4 = *param_4 + 1;
    param_1 = (int **)param_1[2];
    ppiVar1 = param_2;
    ppiVar2 = param_3;
    ppiVar3 = param_4;
  }
  return;
}



void FUN_0001afec(int **param_1,int **param_2,int **param_3,int **param_4)

{
  int **ppiVar1;
  int **ppiVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  ppiVar1 = param_1;
  ppiVar2 = param_2;
  while( true ) {
    (*DAT_0001b0b4)(ppiVar1,ppiVar2,param_3);
    (*DAT_0001b0b8)(*param_2);
    (*DAT_0001b0bc)(*param_2 + 3);
    (*DAT_0001b0c0)((*param_2)[6]);
    (*DAT_0001b0c4)((*param_2)[7]);
    (*DAT_0001b0c8)((*param_2)[8]);
    iVar3 = (*param_3)[1];
    if (iVar3 != 0) {
      iVar4 = **param_3;
      iVar5 = **param_4;
      do {
        (*DAT_0001b0cc)(iVar4 + 4,iVar5);
        iVar4 = iVar4 + 0x14;
        iVar3 = iVar3 + -1;
        iVar5 = iVar5 + 0xc;
      } while (iVar3 != 0);
    }
    if (param_1[1] != (int *)0x0) {
      *param_2 = (int *)((int)*param_2 + (int)DAT_0001b0b2);
      *param_3 = *param_3 + 2;
      *param_4 = *param_4 + 1;
      FUN_0001afec(param_1[1],param_2,param_3,param_4);
    }
    (*DAT_0001b0d0)();
    if (param_1[2] == (int *)0x0) break;
    *param_2 = (int *)((int)*param_2 + (int)DAT_0001b0b2);
    *param_3 = *param_3 + 2;
    *param_4 = *param_4 + 1;
    param_1 = (int **)param_1[2];
    ppiVar1 = param_2;
    ppiVar2 = param_4;
  }
  return;
}



void FUN_0001b0d4(int **param_1,int **param_2,int **param_3,int **param_4)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  ppiVar1 = param_1;
  ppiVar2 = param_2;
  ppiVar3 = param_3;
  while( true ) {
    (*DAT_0001b274)(ppiVar1,ppiVar2,ppiVar3);
    (*DAT_0001b278)(*param_2);
    iVar4 = (*param_3)[1];
    if (iVar4 != 0) {
      iVar5 = **param_3;
      iVar6 = **param_4;
      do {
        (*DAT_0001b27c)(iVar5 + 4,iVar6);
        iVar5 = iVar5 + 0x14;
        iVar4 = iVar4 + -1;
        iVar6 = iVar6 + 0xc;
      } while (iVar4 != 0);
    }
    if (param_1[1] != (int *)0x0) {
      *param_2 = *param_2 + 0xc;
      *param_3 = *param_3 + 2;
      *param_4 = *param_4 + 1;
      FUN_0001b0d4(param_1[1],param_2,param_3,param_4);
    }
    (*DAT_0001b280)();
    if (param_1[2] == (int *)0x0) break;
    *param_2 = *param_2 + 0xc;
    *param_3 = *param_3 + 2;
    *param_4 = *param_4 + 1;
    param_1 = (int **)param_1[2];
    ppiVar1 = param_2;
    ppiVar2 = param_3;
    ppiVar3 = param_4;
  }
  return;
}



void FUN_0001b176(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_1;
  while( true ) {
    (*DAT_0001b274)(piVar1);
    (*DAT_0001b284)(*param_2);
    (*DAT_0001b288)(*param_2 + 0xc);
    if (*param_1 != 0) {
      (*DAT_0001b28c)(*param_1);
    }
    if (param_1[1] != 0) {
      *param_2 = *param_2 + 0x24;
      FUN_0001b176(param_1[1],param_2);
    }
    (*DAT_0001b280)();
    if (param_1[2] == 0) break;
    *param_2 = *param_2 + 0x24;
    param_1 = (int *)param_1[2];
    piVar1 = param_2;
  }
  return;
}



void FUN_0001b1f8(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_1;
  while( true ) {
    (*DAT_0001b274)(piVar1);
    (*DAT_0001b284)(*param_2);
    if (*param_1 != 0) {
      (*DAT_0001b290)(*param_1);
    }
    if (param_1[1] != 0) {
      *param_2 = *param_2 + 0x24;
      FUN_0001b1f8(param_1[1],param_2);
    }
    (*DAT_0001b280)();
    if (param_1[2] == 0) break;
    *param_2 = *param_2 + 0x24;
    param_1 = (int *)param_1[2];
    piVar1 = param_2;
  }
  return;
}



int FUN_0001b51c(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  puVar3 = *(undefined4 **)(param_1 + 0x34);
  sVar1 = *(short *)(param_1 + 0x12);
  iVar5 = (int)sVar1;
  do {
    iVar5 = iVar5 + -1;
    *puVar4 = *puVar3;
    puVar4[1] = puVar3[1];
    iVar2 = (int)DAT_0001b612;
    puVar4[2] = puVar3[2];
    puVar4 = (undefined4 *)((int)puVar4 + iVar2);
    puVar3 = puVar3 + 9;
  } while (iVar5 != 0);
  return (int)sVar1;
}



int FUN_0001b53e(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  iVar2 = *(int *)(param_1 + 0x34);
  sVar1 = *(short *)(param_1 + 0x12);
  iVar4 = (int)sVar1;
  do {
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
    iVar3 = iVar3 + DAT_0001b612;
    iVar2 = iVar2 + 0x24;
  } while (iVar4 != 0);
  return (int)sVar1;
}



int FUN_0001b560(int param_1)

{
  short sVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  puVar2 = PTR_DAT_0001b614;
  iVar4 = *(int *)(param_1 + 0x2c);
  sVar1 = *(short *)(param_1 + 0x12);
  iVar5 = (int)sVar1;
  do {
    *(undefined **)(iVar4 + 0x18) = puVar2;
    iVar5 = iVar5 + -1;
    iVar3 = (int)DAT_0001b612;
    *(undefined **)(iVar4 + 0x1c) = puVar2;
    *(undefined **)(iVar4 + 0x20) = puVar2;
    iVar4 = iVar4 + iVar3;
  } while (iVar5 != 0);
  return (int)sVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0001b57a(int param_1,ushort *param_2)

{
  undefined4 uVar1;
  ushort uVar3;
  int iVar2;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  if (param_2 == (ushort *)0x0) {
    if ((*(ushort *)(param_1 + 10) & 8) != 0) {
      FUN_0001b51c(param_1);
    }
    if ((*(ushort *)(param_1 + 10) & 0x10) != 0) {
      FUN_0001b53e(param_1);
    }
    if ((*(ushort *)(param_1 + 10) & 0x20) != 0) {
      FUN_0001b560(param_1);
    }
    *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) & (ushort)_DAT_0001b618;
    *(undefined4 *)(param_1 + 0x30) = 0;
    return 1;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | *param_2;
    (*_LAB_0001b61b_1)(param_1);
  }
  else {
    if (**(ushort **)(param_1 + 0x30) == *param_2) {
      *(ushort **)(param_1 + 0x30) = param_2;
      *(undefined2 *)(param_1 + 0x10) = 0;
      uVar3 = *param_2 & 7;
      if (((uVar3 != 1) && (uVar3 != 4)) && (uVar3 != 5)) {
        return 1;
      }
      iVar7 = (int)DAT_0001b71c;
      for (iVar9 = 0; iVar9 < *(short *)(param_1 + 0x12); iVar9 = iVar9 + 1) {
        iVar10 = iVar9 * iVar7;
        iVar4 = 0;
        cVar6 = '\0';
        do {
          iVar2 = (int)cVar6;
          *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar10 + 0x48 + iVar2) = 0;
          iVar4 = iVar4 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar10 + iVar2 + 0x4c) = 0;
          *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x2c) + iVar10 + 0x50) = 0;
          cVar6 = cVar6 + '\f';
        } while (iVar4 < 9);
      }
      return 1;
    }
    *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) & (ushort)_DAT_0001b618;
    *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | *param_2;
    (*_LAB_0001b61b_1)(param_1);
  }
  *(ushort **)(param_1 + 0x30) = param_2;
  *(undefined2 *)(param_1 + 0x10) = 0;
  if (((*param_2 & 8) == 0) || ((DAT_0001b378 & *(ushort *)(param_1 + 10)) != 0)) {
    FUN_0001b51c(param_1);
  }
  if ((*param_2 & 0x10) == 0) {
    FUN_0001b53e(param_1);
  }
  if ((*param_2 & 0x20) == 0) {
    FUN_0001b560(param_1);
  }
  uVar1 = DAT_0001b4f4;
  uVar5 = DAT_0001b380;
  uVar8 = (uint)(short)DAT_0001b378;
  iVar9 = uVar8 - 0x4c;
  uVar3 = *param_2 & 7;
  if (uVar3 == 0) {
    *(undefined4 *)(param_1 + 0x20) = DAT_0001b37c;
    *(undefined4 *)(param_1 + 0x24) = uVar5;
    uVar5 = DAT_0001b384;
  }
  else {
    if (uVar3 == 1) {
      if ((uVar8 & (int)*(short *)(param_1 + 10) & 0xffffU) == 0) {
        *(undefined4 *)(param_1 + 0x20) = DAT_0001b4d8;
      }
      else {
        *(undefined4 *)(param_1 + 0x20) = DAT_0001b4d4;
      }
      uVar5 = DAT_0001b4e0;
      *(undefined4 *)(param_1 + 0x24) = DAT_0001b4dc;
      *(undefined4 *)(param_1 + 0x28) = uVar5;
      for (iVar7 = 0; iVar7 < *(short *)(param_1 + 0x12); iVar7 = iVar7 + 1) {
        iVar4 = 0;
        iVar10 = iVar7 * iVar9;
        cVar6 = '\0';
        do {
          iVar2 = (int)cVar6;
          iVar4 = iVar4 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar10 + 0x48 + iVar2) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar10 + iVar2 + 0x4c) = 0;
          *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x2c) + iVar10 + 0x50) = 0;
          cVar6 = cVar6 + '\f';
        } while (iVar4 < 9);
      }
      return 1;
    }
    if (uVar3 != 2) {
      if (uVar3 == 3) {
        *(undefined4 *)(param_1 + 0x20) = DAT_0001b4f0;
        *(undefined4 *)(param_1 + 0x24) = uVar1;
        *(undefined4 *)(param_1 + 0x28) = DAT_0001b4f8;
        return 1;
      }
      if (uVar3 != 4) {
        if (uVar3 == 5) {
          if ((uVar8 & (int)*(short *)(param_1 + 10) & 0xffffU) == 0) {
            *(undefined4 *)(param_1 + 0x20) = DAT_0001b510;
          }
          else {
            *(undefined4 *)(param_1 + 0x20) = DAT_0001b50c;
          }
          uVar5 = DAT_0001b518;
          *(undefined4 *)(param_1 + 0x24) = DAT_0001b514;
          *(undefined4 *)(param_1 + 0x28) = uVar5;
          for (iVar7 = 0; iVar7 < *(short *)(param_1 + 0x12); iVar7 = iVar7 + 1) {
            iVar4 = 0;
            iVar10 = iVar7 * iVar9;
            cVar6 = '\0';
            do {
              iVar2 = (int)cVar6;
              iVar4 = iVar4 + 1;
              *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar10 + 0x48 + iVar2) = 0;
              *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar10 + iVar2 + 0x4c) = 0;
              *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x2c) + iVar10 + 0x50) = 0;
              cVar6 = cVar6 + '\f';
            } while (iVar4 < 9);
          }
          return 1;
        }
        return 0;
      }
      if ((uVar8 & (int)*(short *)(param_1 + 10) & 0xffffU) == 0) {
        *(undefined4 *)(param_1 + 0x20) = DAT_0001b500;
      }
      else {
        *(undefined4 *)(param_1 + 0x20) = DAT_0001b4fc;
      }
      uVar5 = DAT_0001b508;
      *(undefined4 *)(param_1 + 0x24) = DAT_0001b504;
      *(undefined4 *)(param_1 + 0x28) = uVar5;
      for (iVar7 = 0; iVar7 < *(short *)(param_1 + 0x12); iVar7 = iVar7 + 1) {
        iVar4 = 0;
        iVar10 = iVar7 * iVar9;
        cVar6 = '\0';
        do {
          iVar2 = (int)cVar6;
          iVar4 = iVar4 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar10 + 0x48 + iVar2) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar10 + iVar2 + 0x4c) = 0;
          *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x2c) + iVar10 + 0x50) = 0;
          cVar6 = cVar6 + '\f';
        } while (iVar4 < 9);
      }
      return 1;
    }
    *(undefined4 *)(param_1 + 0x20) = DAT_0001b4e4;
    *(undefined4 *)(param_1 + 0x24) = DAT_0001b4e8;
    uVar5 = DAT_0001b4ec;
  }
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  return 1;
}



undefined4 FUN_0001b690(int param_1,ushort *param_2)

{
  undefined4 uVar1;
  ushort uVar3;
  int iVar2;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  if (param_2 == (ushort *)0x0) {
    if ((*(ushort *)(param_1 + 10) & 0x10) != 0) {
      FUN_0001b53e(param_1);
    }
    if ((*(ushort *)(param_1 + 10) & 0x20) != 0) {
      FUN_0001b560(param_1);
    }
    *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) & (ushort)DAT_0001b720;
    *(undefined4 *)(param_1 + 0x30) = 0;
    return 1;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | *param_2;
    (*DAT_0001b724)(param_1);
  }
  else {
    if (**(ushort **)(param_1 + 0x30) == *param_2) {
      *(ushort **)(param_1 + 0x30) = param_2;
      *(undefined2 *)(param_1 + 0x10) = 0;
      uVar3 = *param_2 & 7;
      if (((uVar3 != 1) && (uVar3 != 4)) && (uVar3 != 5)) {
        return 1;
      }
      iVar9 = (int)DAT_0001b832;
      for (iVar11 = 0; iVar11 < *(short *)(param_1 + 0x12); iVar11 = iVar11 + 1) {
        iVar12 = iVar11 * iVar9;
        iVar4 = 0;
        cVar8 = '\0';
        do {
          iVar2 = (int)cVar8;
          *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar12 + 0x48 + iVar2) = 0;
          iVar4 = iVar4 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar12 + iVar2 + 0x4c) = 0;
          *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x2c) + iVar12 + 0x50) = 0;
          cVar8 = cVar8 + '\f';
        } while (iVar4 < 9);
      }
      return 1;
    }
    *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) & (ushort)DAT_0001b720;
    *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | *param_2;
    (*DAT_0001b724)(param_1);
  }
  *(ushort **)(param_1 + 0x30) = param_2;
  *(undefined2 *)(param_1 + 0x10) = 0;
  if (((*param_2 & 8) == 0) || ((DAT_0001b378 & *(ushort *)(param_1 + 10)) != 0)) {
    puVar5 = *(undefined4 **)(param_1 + 0x2c);
    puVar6 = *(undefined4 **)(param_1 + 0x34);
    *puVar5 = *puVar6;
    puVar5[1] = puVar6[1];
    puVar5[2] = puVar6[2];
  }
  if ((*param_2 & 0x10) == 0) {
    FUN_0001b53e(param_1);
  }
  if ((*param_2 & 0x20) == 0) {
    FUN_0001b560(param_1);
  }
  uVar1 = DAT_0001b4f4;
  uVar7 = DAT_0001b380;
  uVar10 = (uint)(short)DAT_0001b378;
  iVar11 = uVar10 - 0x4c;
  uVar3 = *param_2 & 7;
  if (uVar3 == 0) {
    *(undefined4 *)(param_1 + 0x20) = DAT_0001b37c;
    *(undefined4 *)(param_1 + 0x24) = uVar7;
    uVar7 = DAT_0001b384;
  }
  else {
    if (uVar3 == 1) {
      if ((uVar10 & (int)*(short *)(param_1 + 10) & 0xffffU) == 0) {
        *(undefined4 *)(param_1 + 0x20) = DAT_0001b4d8;
      }
      else {
        *(undefined4 *)(param_1 + 0x20) = DAT_0001b4d4;
      }
      uVar7 = DAT_0001b4e0;
      *(undefined4 *)(param_1 + 0x24) = DAT_0001b4dc;
      *(undefined4 *)(param_1 + 0x28) = uVar7;
      for (iVar9 = 0; iVar9 < *(short *)(param_1 + 0x12); iVar9 = iVar9 + 1) {
        iVar4 = 0;
        iVar12 = iVar9 * iVar11;
        cVar8 = '\0';
        do {
          iVar2 = (int)cVar8;
          iVar4 = iVar4 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar12 + 0x48 + iVar2) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar12 + iVar2 + 0x4c) = 0;
          *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x2c) + iVar12 + 0x50) = 0;
          cVar8 = cVar8 + '\f';
        } while (iVar4 < 9);
      }
      return 1;
    }
    if (uVar3 != 2) {
      if (uVar3 == 3) {
        *(undefined4 *)(param_1 + 0x20) = DAT_0001b4f0;
        *(undefined4 *)(param_1 + 0x24) = uVar1;
        *(undefined4 *)(param_1 + 0x28) = DAT_0001b4f8;
        return 1;
      }
      if (uVar3 != 4) {
        if (uVar3 == 5) {
          if ((uVar10 & (int)*(short *)(param_1 + 10) & 0xffffU) == 0) {
            *(undefined4 *)(param_1 + 0x20) = DAT_0001b510;
          }
          else {
            *(undefined4 *)(param_1 + 0x20) = DAT_0001b50c;
          }
          uVar7 = DAT_0001b518;
          *(undefined4 *)(param_1 + 0x24) = DAT_0001b514;
          *(undefined4 *)(param_1 + 0x28) = uVar7;
          for (iVar9 = 0; iVar9 < *(short *)(param_1 + 0x12); iVar9 = iVar9 + 1) {
            iVar4 = 0;
            iVar12 = iVar9 * iVar11;
            cVar8 = '\0';
            do {
              iVar2 = (int)cVar8;
              iVar4 = iVar4 + 1;
              *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar12 + 0x48 + iVar2) = 0;
              *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar12 + iVar2 + 0x4c) = 0;
              *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x2c) + iVar12 + 0x50) = 0;
              cVar8 = cVar8 + '\f';
            } while (iVar4 < 9);
          }
          return 1;
        }
        return 0;
      }
      if ((uVar10 & (int)*(short *)(param_1 + 10) & 0xffffU) == 0) {
        *(undefined4 *)(param_1 + 0x20) = DAT_0001b500;
      }
      else {
        *(undefined4 *)(param_1 + 0x20) = DAT_0001b4fc;
      }
      uVar7 = DAT_0001b508;
      *(undefined4 *)(param_1 + 0x24) = DAT_0001b504;
      *(undefined4 *)(param_1 + 0x28) = uVar7;
      for (iVar9 = 0; iVar9 < *(short *)(param_1 + 0x12); iVar9 = iVar9 + 1) {
        iVar4 = 0;
        iVar12 = iVar9 * iVar11;
        cVar8 = '\0';
        do {
          iVar2 = (int)cVar8;
          iVar4 = iVar4 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar12 + 0x48 + iVar2) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar12 + iVar2 + 0x4c) = 0;
          *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x2c) + iVar12 + 0x50) = 0;
          cVar8 = cVar8 + '\f';
        } while (iVar4 < 9);
      }
      return 1;
    }
    *(undefined4 *)(param_1 + 0x20) = DAT_0001b4e4;
    *(undefined4 *)(param_1 + 0x24) = DAT_0001b4e8;
    uVar7 = DAT_0001b4ec;
  }
  *(undefined4 *)(param_1 + 0x28) = uVar7;
  return 1;
}



int FUN_0001b798(int param_1)

{
  short sVar1;
  
  if ((*(ushort *)(param_1 + 10) & 0x38) == 0) {
    return 0;
  }
  if ((**(ushort **)(param_1 + 0x30) & 8) != 0) {
    (**(code **)(param_1 + 0x20))(param_1);
  }
  if ((**(ushort **)(param_1 + 0x30) & 0x10) != 0) {
    (**(code **)(param_1 + 0x24))(param_1);
  }
  if ((**(ushort **)(param_1 + 0x30) & 0x20) != 0) {
    (**(code **)(param_1 + 0x28))(param_1);
  }
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_1 + 0x10);
  sVar1 = *(short *)(param_1 + 0x10) + 1;
  *(short *)(param_1 + 0x10) = sVar1;
  if (*(short *)(*(int *)(param_1 + 0x30) + 4) <= sVar1) {
    *(undefined2 *)(param_1 + 0x10) = 0;
  }
  return (int)*(short *)(param_1 + 0x16);
}



void FUN_0001b7fe(int param_1)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((*(ushort *)(param_1 + 10) & 0x38) == 0) {
    return;
  }
  *(undefined2 *)(param_1 + 0x10) = 0;
  uVar1 = **(ushort **)(param_1 + 0x30) & 7;
  if (((uVar1 == 1) || (uVar1 == 4)) || (uVar1 == 5)) {
    iVar5 = (int)DAT_0001b832;
    for (iVar6 = 0; iVar6 < *(short *)(param_1 + 0x12); iVar6 = iVar6 + 1) {
      iVar7 = iVar6 * iVar5;
      iVar2 = 0;
      cVar3 = '\0';
      do {
        iVar4 = (int)cVar3;
        *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar7 + 0x48 + iVar4) = 0;
        iVar2 = iVar2 + 1;
        *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar7 + iVar4 + 0x4c) = 0;
        *(undefined4 *)(iVar4 + *(int *)(param_1 + 0x2c) + iVar7 + 0x50) = 0;
        cVar3 = cVar3 + '\f';
      } while (iVar2 < 9);
    }
  }
  FUN_0001b798();
  return;
}



void FUN_0001b9f8(int **param_1,int **param_2,int **param_3,int **param_4)

{
  int **ppiVar1;
  int **ppiVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  ppiVar1 = param_1;
  ppiVar2 = param_2;
  while( true ) {
    (*DAT_0001bc78)(ppiVar1,ppiVar2,param_3);
    (*DAT_0001bc7c)(*param_2);
    (*DAT_0001bc80)(*param_2 + 3);
    (*DAT_0001bc84)((*param_2)[6]);
    (*DAT_0001bc88)((*param_2)[7]);
    (*DAT_0001bc8c)((*param_2)[8]);
    iVar3 = (*param_3)[1];
    if (iVar3 != 0) {
      iVar4 = **param_3;
      iVar5 = **param_4;
      do {
        (*DAT_0001bc90)(iVar4 + 4,iVar5);
        iVar4 = iVar4 + 0x14;
        iVar3 = iVar3 + -1;
        iVar5 = iVar5 + 0xc;
      } while (iVar3 != 0);
    }
    if (param_1[1] != (int *)0x0) {
      *param_2 = *param_2 + 0x12;
      *param_3 = *param_3 + 2;
      *param_4 = *param_4 + 1;
      FUN_0001b9f8(param_1[1],param_2,param_3,param_4);
    }
    (*DAT_0001bc94)();
    if (param_1[2] == (int *)0x0) break;
    *param_2 = *param_2 + 0x12;
    *param_3 = *param_3 + 2;
    *param_4 = *param_4 + 1;
    param_1 = (int **)param_1[2];
    ppiVar1 = param_2;
    ppiVar2 = param_4;
  }
  return;
}



void FUN_0001baba(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_1;
  while( true ) {
    (*DAT_0001bc78)(piVar1);
    (*DAT_0001bc7c)(*param_2);
    (*DAT_0001bc80)(*param_2 + 0xc);
    (*DAT_0001bc84)(*(undefined4 *)(*param_2 + 0x18));
    (*DAT_0001bc88)(*(undefined4 *)(*param_2 + 0x1c));
    (*DAT_0001bc8c)(*(undefined4 *)(*param_2 + 0x20));
    if (*param_1 != 0) {
      (*DAT_0001bc98)(*param_1);
    }
    if (param_1[1] != 0) {
      *param_2 = *param_2 + 0x48;
      FUN_0001baba(param_1[1],param_2);
    }
    (*DAT_0001bc94)();
    if (param_1[2] == 0) break;
    *param_2 = *param_2 + 0x48;
    param_1 = (int *)param_1[2];
    piVar1 = param_2;
  }
  return;
}



void FUN_0001bb56(int **param_1,int **param_2,int **param_3,int **param_4)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  ppiVar1 = param_1;
  ppiVar2 = param_2;
  ppiVar3 = param_3;
  while( true ) {
    (*DAT_0001bc78)(ppiVar1,ppiVar2,ppiVar3);
    (*DAT_0001bc7c)(*param_2);
    (*DAT_0001bc80)(*param_2 + 3);
    (*DAT_0001bc84)((*param_2)[6]);
    (*DAT_0001bc88)((*param_2)[7]);
    (*DAT_0001bc8c)((*param_2)[8]);
    if (*param_1 != (int *)0x0) {
      (*DAT_0001bc98)(*param_1);
    }
    iVar4 = (*param_3)[1];
    if (iVar4 != 0) {
      iVar5 = **param_3;
      iVar6 = **param_4;
      do {
        (*DAT_0001bc90)(iVar5 + 4,iVar6);
        iVar5 = iVar5 + 0x14;
        iVar4 = iVar4 + -1;
        iVar6 = iVar6 + 0xc;
      } while (iVar4 != 0);
    }
    if (param_1[1] != (int *)0x0) {
      *param_2 = *param_2 + 0x12;
      *param_3 = *param_3 + 2;
      *param_4 = *param_4 + 1;
      FUN_0001bb56(param_1[1],param_2,param_3,param_4);
    }
    (*DAT_0001bc94)();
    if (param_1[2] == (int *)0x0) break;
    *param_2 = *param_2 + 0x12;
    *param_3 = *param_3 + 2;
    *param_4 = *param_4 + 1;
    param_1 = (int **)param_1[2];
    ppiVar1 = param_2;
    ppiVar2 = param_3;
    ppiVar3 = param_4;
  }
  return;
}



undefined4 FUN_0001bc9c(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < 1) || (param_1[0xe] != 0)) {
LAB_0001bd7c:
    *(undefined2 *)(param_1 + 0x13) = 0;
    *(undefined2 *)((int)param_1 + 0x4e) = 0;
    uVar2 = 0;
  }
  else {
    if (param_1[0x12] == 0) {
      iVar1 = (*DAT_0001bddc)(*param_1,*(short *)((int)param_1 + 0x12) * 0x48);
      param_1[0x12] = iVar1;
      if (iVar1 == 0) goto LAB_0001bd7c;
      puVar4 = (undefined4 *)param_1[0xb];
      puVar3 = (undefined4 *)param_1[0x12];
      iVar1 = (int)*(short *)((int)param_1 + 0x12);
      do {
        puVar3[9] = *puVar4;
        puVar3[10] = puVar4[1];
        puVar3[0xb] = puVar4[2];
        *puVar3 = *puVar4;
        puVar3[1] = puVar4[1];
        puVar3[2] = puVar4[2];
        puVar3[0xc] = puVar4[3];
        puVar3[0xd] = puVar4[4];
        puVar3[0xe] = puVar4[5];
        puVar3[3] = puVar4[3];
        puVar3[4] = puVar4[4];
        puVar3[5] = puVar4[5];
        puVar3[0xf] = puVar4[6];
        puVar3[0x10] = puVar4[7];
        puVar3[0x11] = puVar4[8];
        iVar1 = iVar1 + -1;
        puVar3[6] = puVar4[6];
        puVar3[7] = puVar4[7];
        puVar3[8] = puVar4[8];
        puVar4 = (undefined4 *)((int)puVar4 + (int)DAT_0001bdd6);
        puVar3 = puVar3 + 0x12;
      } while (iVar1 != 0);
    }
    else {
      puVar3 = (undefined4 *)param_1[0x12];
      iVar1 = (int)*(short *)((int)param_1 + 0x12);
      do {
        iVar1 = iVar1 + -1;
        puVar3[9] = *puVar3;
        puVar3[10] = puVar3[1];
        puVar3[0xb] = puVar3[2];
        puVar3[0xc] = puVar3[3];
        puVar3[0xd] = puVar3[4];
        puVar3[0xe] = puVar3[5];
        puVar3[0xf] = puVar3[6];
        puVar3[0x10] = puVar3[7];
        puVar3[0x11] = puVar3[8];
        puVar3 = puVar3 + 0x12;
      } while (iVar1 != 0);
    }
    *(undefined2 *)(param_1 + 0x13) = 0;
    *(short *)((int)param_1 + 0x4e) = (short)param_2;
    uVar2 = 1;
  }
  return uVar2;
}



int FUN_0001be5c(undefined4 *param_1)

{
  short sVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  
  iVar3 = param_1[0x12];
  if (iVar3 != 0) {
    sVar1 = *(short *)(param_1 + 0x13);
    *(short *)(param_1 + 0x13) = sVar1 + 1;
    if (*(short *)((int)param_1 + 0x4e) <= (short)(sVar1 + 1)) {
      (*DAT_0001bf1c)(*param_1,param_1[0x12]);
      UNRECOVERED_JUMPTABLE = DAT_0001bf20;
      param_1[0x12] = 0;
                    // WARNING: Could not recover jumptable at 0x0001beae. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar3 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return iVar3;
    }
    piVar7 = (int *)param_1[0xb];
    piVar8 = (int *)param_1[0x12];
    iVar4 = (int)*(short *)((int)param_1 + 0x12);
    uVar5 = (*DAT_0001bf24)((int)*(short *)(param_1 + 0x13),(int)*(short *)((int)param_1 + 0x4e));
    UNRECOVERED_JUMPTABLE = DAT_0001bf2c;
    uVar2 = DAT_0001bf28;
    do {
      iVar3 = (*UNRECOVERED_JUMPTABLE)(*piVar7 - piVar8[9],uVar5);
      *piVar8 = iVar3 + piVar8[9];
      iVar3 = (*UNRECOVERED_JUMPTABLE)(piVar7[1] - piVar8[10],uVar5);
      piVar8[1] = iVar3 + piVar8[10];
      iVar3 = (*UNRECOVERED_JUMPTABLE)(piVar7[2] - piVar8[0xb],uVar5);
      piVar8[2] = iVar3 + piVar8[0xb];
      uVar6 = piVar7[3] - piVar8[0xc];
      if ((uVar2 & uVar6) == 0) {
        uVar6 = DAT_0001c06c & uVar6;
      }
      else {
        uVar6 = DAT_0001bf30 | uVar6;
      }
      iVar3 = (*UNRECOVERED_JUMPTABLE)(uVar6,uVar5);
      piVar8[3] = iVar3 + piVar8[0xc];
      uVar6 = piVar7[4] - piVar8[0xd];
      if ((uVar2 & uVar6) == 0) {
        uVar6 = DAT_0001c06c & uVar6;
      }
      else {
        uVar6 = DAT_0001c070 | uVar6;
      }
      iVar3 = (*UNRECOVERED_JUMPTABLE)(uVar6,uVar5);
      piVar8[4] = iVar3 + piVar8[0xd];
      uVar6 = piVar7[5] - piVar8[0xe];
      if ((uVar2 & uVar6) == 0) {
        uVar6 = DAT_0001c06c & uVar6;
      }
      else {
        uVar6 = DAT_0001c070 | uVar6;
      }
      iVar3 = (*UNRECOVERED_JUMPTABLE)(uVar6,uVar5);
      piVar8[5] = iVar3 + piVar8[0xe];
      iVar3 = (*UNRECOVERED_JUMPTABLE)(piVar7[6] - piVar8[0xf],uVar5);
      piVar8[6] = iVar3 + piVar8[0xf];
      iVar3 = (*UNRECOVERED_JUMPTABLE)(piVar7[7] - piVar8[0x10],uVar5);
      piVar8[7] = iVar3 + piVar8[0x10];
      iVar3 = (*UNRECOVERED_JUMPTABLE)(piVar7[8] - piVar8[0x11],uVar5);
      iVar4 = iVar4 + -1;
      piVar7 = (int *)((int)piVar7 + (int)DAT_0001c06a);
      iVar3 = iVar3 + piVar8[0x11];
      piVar8[8] = iVar3;
      piVar8 = piVar8 + 0x12;
    } while (iVar4 != 0);
  }
  return iVar3;
}



uint FUN_0001cd44(int *param_1,short *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (0 < param_1[1]) {
    param_1[1] = param_1[1] + -1;
    return param_1[2];
  }
  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar3 = (int)*param_2 << 4;
    param_1[1] = 0;
  }
  else {
    uVar2 = (int)param_2[iVar1] & 0xf;
    uVar3 = (int)param_2[iVar1] ^ uVar2;
    param_1[1] = uVar2 - 1;
  }
  param_1[2] = uVar3;
  if (iVar1 + 1 < param_3) {
    *param_1 = iVar1 + 1;
    return uVar3;
  }
  *param_1 = 0;
  return uVar3;
}



undefined4 FUN_0001cd86(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_r1;
  int *in_r2;
  
  iVar1 = DAT_0001cdb0;
  iVar2 = (int)*(short *)(param_1 + 0x12);
  do {
    *in_r1 = *in_r2 + *in_r1;
    in_r1[1] = in_r2[1] + in_r1[1];
    in_r1[2] = in_r2[2] + in_r1[2];
    in_r1 = (int *)((int)in_r1 + iVar1);
    iVar2 = iVar2 + -1;
    in_r2 = (int *)((int)in_r2 + iVar1);
  } while (iVar2 != 0);
  return 0;
}



void FUN_0001d0e4(int param_1)

{
  (*DAT_0001d194)(DAT_0001d190,param_1,0x50);
  (*DAT_0001d194)(DAT_0001d198,param_1 + 0x50,(int)DAT_0001d18c);
                    // WARNING: Could not recover jumptable at 0x0001d10e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0001d1a0)(DAT_0001d19c,DAT_0001d18e + param_1,0x40,0);
  return;
}



void FUN_0001d112(int param_1)

{
  (*DAT_0001d194)(param_1,DAT_0001d190,0x50);
  (*DAT_0001d194)(param_1 + 0x50,DAT_0001d198,(int)DAT_0001d18c);
                    // WARNING: Could not recover jumptable at 0x0001d13a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0001d1a0)(DAT_0001d18e + param_1,DAT_0001d19c,0x40,0);
  return;
}



void FUN_0001d13e(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34) + 1;
  *(int *)(param_1 + 0x34) = iVar1;
  *(undefined *)(param_1 + 0x20 + iVar1) = 0;
  if (0xe < *(int *)(param_1 + 0x34)) {
    *(undefined *)(param_1 + 8) = 1;
    *(undefined2 *)(param_1 + 10) = 2;
    *(undefined2 *)(param_1 + 0xc) = 0;
  }
                    // WARNING: Could not recover jumptable at 0x0001d164. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0001d1a4)(0);
  return;
}



void FUN_0001d1a8(int param_1,short *param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  
  iVar5 = DAT_0001d2e4;
  iVar9 = ((param_3 & 0xffff) * 0x1c & 0xff) + DAT_0001d2e8;
  sVar1 = *param_2 - *(short *)(DAT_0001d2e2 + DAT_0001d2e4 + 0x44);
  uVar7 = *(uint *)(iVar9 + 0xc);
  sVar3 = *(short *)(DAT_0001d2e2 + DAT_0001d2e4 + 0x46) - param_2[1];
  uVar6 = *(uint *)(iVar9 + 0x10);
  sVar2 = (short)(*(uint *)(iVar9 + 0x14) >> 0xc);
  sVar4 = (short)(*(uint *)(iVar9 + 0x18) >> 0xc);
  puVar10 = (undefined4 *)(DAT_0001d2e4 + 0x14);
  puVar8 = (undefined2 *)*puVar10;
  *puVar8 = *(undefined2 *)(iVar9 + 2);
  puVar8[2] = *(undefined2 *)(iVar9 + 4);
  puVar8[3] = *(undefined2 *)(iVar9 + 10);
  puVar8[4] = *(short *)(iVar9 + 6) + *(short *)(*(int *)(param_1 + 4) + 4);
  puVar8[5] = *(undefined2 *)(iVar9 + 8);
  puVar8[6] = sVar1 + sVar2;
  puVar8[7] = -(sVar3 + sVar4);
  puVar8[10] = (short)(uVar7 >> 0xc) + sVar1 + sVar2;
  puVar8[0xb] = -((sVar3 - (short)(uVar6 >> 0xc)) + sVar4);
  iVar9 = *(int *)(iVar5 + 0x34);
  *(undefined2 *)(iVar9 + 4) = 0;
  *(short *)(iVar9 + 6) = (short)((uint)puVar8 >> 3);
  *(int *)(iVar5 + 0x34) = iVar9 + 8;
  *(int *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) + 1;
  *puVar10 = puVar8 + 0x10;
  *(int *)(iVar5 + 0x20) = *(int *)(iVar5 + 0x20) + 1;
  return;
}



void FUN_0001d292(int param_1)

{
  short local_c;
  undefined2 uStack10;
  
  (*DAT_0001d2ec)(0xe,2,0x10);
  (*DAT_0001d2f0)();
  (*DAT_0001d2f4)(0xe,2);
  (*DAT_0001d2f8)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x34) < 0xf) {
    local_c = ((short)*(undefined4 *)(param_1 + 0x34) + 0xe) * 8;
    uStack10 = 0x10;
    FUN_0001d1a8(*(undefined4 *)(param_1 + 0x10),&local_c,0);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001d304)
// WARNING: Removing unreachable block (ram,0x0001d334)
// WARNING: Removing unreachable block (ram,0x0001d338)
// WARNING: Removing unreachable block (ram,0x0001d33e)
// WARNING: Removing unreachable block (ram,0x0001d342)

int FUN_0001d2fc(int param_1)

{
  return (int)*(char *)(param_1 + 1);
}



void FUN_0001d348(char *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  
  pcVar2 = DAT_0001d4f0;
  iVar1 = DAT_0001d4ec;
  iVar5 = DAT_0001d4e8;
  if (param_1[8] == '\0') {
    iVar6 = (char)(param_1[1] * '\f') + DAT_0001d4e8;
  }
  else {
    iVar6 = DAT_0001d4e8 + 0x24;
  }
  if (*param_1 == '\0') {
    if ((*(ushort *)(DAT_0001d4ec + 0xc) & 0x40) != 0) {
      (*DAT_0001d4f0)(10);
      *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
    }
    if ((*(ushort *)(iVar1 + 0xc) & 0x80) != 0) {
      (*pcVar2)(10);
      *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + 1;
    }
    if ((*(ushort *)(iVar1 + 0xc) & 0x10) != 0) {
      (*pcVar2)(10);
      *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + -1;
    }
    if ((*(ushort *)(iVar1 + 0xc) & 0x20) != 0) {
      (*pcVar2)(10);
      *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
    }
  }
  while (*(short *)(param_1 + 10) < 0) {
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + *(short *)(iVar6 + 4);
  }
  while (*(short *)(iVar6 + 4) <= *(short *)(param_1 + 10)) {
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) - *(short *)(iVar6 + 4);
  }
  if (0xf < *(int *)(param_1 + 0x34)) {
    *(undefined2 *)(param_1 + 0xc) = 0;
  }
  if ((*(short *)(param_1 + 0xc) < 0) || (*(short *)(iVar6 + 6) <= *(short *)(param_1 + 0xc))) {
    param_1[8] = param_1[8] ^ 1;
    if (param_1[8] == '\0') {
      if (*(short *)(param_1 + 10) < 1) {
        *(undefined2 *)(param_1 + 10) = 9;
      }
      else {
        if (*(short *)(param_1 + 10) < 2) {
          uVar3 = 0xc;
        }
        else {
          uVar3 = 0xf;
        }
        *(undefined2 *)(param_1 + 10) = uVar3;
      }
      iVar5 = (char)(param_1[1] * '\f') + iVar5;
    }
    else {
      if (*(short *)(param_1 + 10) < 0xc) {
        *(undefined2 *)(param_1 + 10) = 0;
      }
      else {
        if (*(short *)(param_1 + 10) < 0xf) {
          uVar3 = 1;
        }
        else {
          uVar3 = 2;
        }
        *(undefined2 *)(param_1 + 10) = uVar3;
      }
      iVar5 = iVar5 + 0x24;
    }
    if (*(short *)(param_1 + 0xc) < 0) {
      sVar4 = *(short *)(iVar5 + 6) + -1;
    }
    else {
      sVar4 = 0;
    }
    *(short *)(param_1 + 0xc) = sVar4;
  }
  return;
}



void FUN_0001d47a(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (char)(*(char *)(param_1 + 1) * '\f') + DAT_0001d4e8;
  if ((*(ushort *)(DAT_0001d4ec + 8) & 6) != 0) {
    if (*(int *)(param_1 + 0x34) < 0xf) {
      *(undefined *)(param_1 + 0x20 + *(int *)(param_1 + 0x34)) =
           *(undefined *)
            (*(int *)(iVar2 + 8) +
            (int)*(short *)(param_1 + 10) * (int)*(short *)(iVar2 + 6) +
            (int)*(short *)(param_1 + 0xc));
      FUN_0001d13e(param_1);
    }
    else {
      (*DAT_0001d4f0)(5);
    }
  }
  if ((*(ushort *)(DAT_0001d4ec + 8) & 1) != 0) {
    if (*(int *)(param_1 + 0x34) < 1) {
      uVar1 = 5;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x34) + -1;
      *(int *)(param_1 + 0x34) = iVar2;
      *(undefined *)(param_1 + 0x20 + iVar2) = 0;
      uVar1 = 1;
    }
                    // WARNING: Could not recover jumptable at 0x0001d188. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_0001d1a4)(uVar1);
    return;
  }
  return;
}



uint FUN_0001d4f4(char *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  pcVar1 = DAT_0001d6fc;
  uVar2 = (uint)*param_1;
  if (uVar2 == 0) {
    if ((*(ushort *)(DAT_0001d6f8 + 8) & 1) != 0) {
LAB_0001d168:
      if (*(int *)(param_1 + 0x34) < 1) {
        uVar4 = 5;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x34);
        *(int *)(param_1 + 0x34) = iVar3 + -1;
        param_1[iVar3 + 0x1f] = '\0';
        uVar4 = 1;
      }
                    // WARNING: Could not recover jumptable at 0x0001d188. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar2 = (*DAT_0001d1a4)(uVar4);
      return uVar2;
    }
    uVar2 = (uint)*(short *)(DAT_0001d6f8 + 8);
    if ((uVar2 & 6) != 0) {
      uVar2 = (uint)*(short *)(param_1 + 10);
      if (uVar2 == 0) goto LAB_0001d168;
      if (uVar2 == 1) {
        if (*(int *)(param_1 + 0x34) < 0xf) {
          param_1[*(int *)(param_1 + 0x34) + 0x20] = ' ';
          uVar2 = FUN_0001d13e(param_1);
          return uVar2;
        }
        uVar2 = (*DAT_0001d6fc)(5);
      }
      else if (uVar2 == 2) {
        if (*(int *)(param_1 + 0x34) < 2) {
          uVar4 = 5;
        }
        else {
          if (*(int *)(param_1 + 0x38) != 0) {
            (*DAT_0001d700)(param_1 + 0x20,*(undefined4 *)(param_1 + 0x38),
                            *(int *)(param_1 + 0x34) + 1);
          }
          uVar4 = 0;
          *param_1 = '\x01';
        }
        uVar2 = (*pcVar1)(uVar4);
      }
    }
  }
  return uVar2;
}



void FUN_0001d9c0(char *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 1;
  uVar1 = param_3;
  do {
    if (*param_1 == '\0') {
      if ((uVar2 & param_3) == 0) {
        if ((uVar2 & (int)*(short *)(param_2 + 6)) != 0) {
          uVar1 = uVar1 | uVar2;
        }
      }
      else {
        *param_1 = '\x14';
      }
    }
    if (*param_1 != '\0') {
      if ((uVar2 & param_4) == 0) {
        *param_1 = *param_1 + -1;
      }
      else {
        *param_1 = '\0';
      }
    }
    uVar2 = uVar2 << 1;
    param_1 = param_1 + 1;
  } while ((short)uVar2 != 0);
  *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) | (ushort)uVar1;
  return;
}



void FUN_0001da18(char *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 1;
  uVar2 = 0;
  uVar1 = 0;
  do {
    if (*param_1 == '\0') {
      if ((uVar3 & param_3) != 0) {
        *param_1 = '\f';
      }
    }
    else if (*param_1 < '\x01') {
      if ((uVar3 & param_4) == 0) {
        uVar2 = uVar2 | uVar3;
      }
      else {
        *param_1 = '\0';
      }
    }
    else if ((uVar3 & param_3) == 0) {
      *param_1 = *param_1 + -1;
    }
    else {
      uVar2 = uVar2 | uVar3;
      uVar1 = uVar1 | uVar3;
      *param_1 = -1;
    }
    uVar3 = uVar3 << 1;
    param_1 = param_1 + 1;
  } while ((short)uVar3 != 0);
  *(ushort *)(param_2 + 0xe) = *(ushort *)(param_2 + 0xe) | (ushort)uVar2;
  *(ushort *)(param_2 + 0x10) = *(ushort *)(param_2 + 0x10) | (ushort)uVar1;
  return;
}



void FUN_0001da98(char *param_1,int param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 1;
  uVar3 = 0;
  uVar2 = 0;
  do {
    if (*param_1 == '\0') {
      if ((uVar4 & param_3) != 0) {
        *param_1 = '\x1e';
      }
    }
    else if (*param_1 < '\x01') {
      if ((uVar4 & param_4) == 0) {
        uVar3 = uVar3 | uVar4;
      }
      else {
        uVar2 = uVar2 | uVar4;
        *param_1 = '\0';
      }
    }
    else if ((uVar4 & (int)*(short *)(param_2 + 6)) == 0) {
      *param_1 = '\0';
    }
    else {
      cVar1 = *param_1;
      *param_1 = cVar1 + -1;
      if ((char)(cVar1 + -1) == '\0') {
        uVar3 = uVar3 | uVar4;
        *param_1 = -1;
      }
    }
    uVar4 = uVar4 << 1;
    param_1 = param_1 + 1;
  } while ((short)uVar4 != 0);
  *(ushort *)(param_2 + 0x12) = *(ushort *)(param_2 + 0x12) | (ushort)uVar3;
  *(ushort *)(param_2 + 0x14) = *(ushort *)(param_2 + 0x14) | (ushort)uVar2;
  return;
}



void FUN_0001db40(char *param_1,undefined *param_2)

{
  int iVar1;
  
  if ((*param_1 == '\0') ||
     (iVar1 = (**(code **)(param_1[1] * 4 + DAT_0001dbc4))((int)param_1[2],param_1 + 3,param_2),
     iVar1 == 0)) {
    *param_2 = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    *(undefined2 *)(param_2 + 6) = 0;
  }
  return;
}



void FUN_0001de00(byte param_1,uint param_2)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  
  piVar2 = DAT_0001def4;
  if (*DAT_0001def4 != *DAT_0001def8) {
    *DAT_0001def4 = *DAT_0001def8;
    *(byte *)((int)piVar2 + 0x3b) = param_1;
    pbVar3 = (byte *)((int)piVar2 + (char)((char)(param_2 >> 3) * '\x03') + 0x3c);
    if ((param_1 & 8) == 0) {
      if ((param_1 & 1) != 0) {
        *pbVar3 = *pbVar3 & *(byte *)((param_2 & 7) + DAT_0001df00);
      }
    }
    else {
      bVar1 = *(byte *)((param_2 & 7) + DAT_0001defc);
      pbVar3[2] = pbVar3[2] | ~*pbVar3 & bVar1;
      pbVar3[1] = pbVar3[1] | bVar1;
      *pbVar3 = *pbVar3 | bVar1;
    }
  }
  return;
}



void FUN_0001e0c8(char *param_1,undefined2 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 *puVar3;
  int iVar4;
  
  puVar3 = *(undefined2 **)(param_1 + 4);
  if ((puVar3 != (undefined2 *)0x0) && (*param_1 == '\0')) {
    if (*(int *)(param_1 + 0xc) == 0) {
      if ((*(byte *)((int)puVar3 + 1) & 1) == 0) {
        puVar3 = (undefined2 *)0x0;
      }
      else {
        uVar1 = *(ushort *)(param_1 + 2);
        uVar2 = ~uVar1;
        *(undefined *)param_2 = *(undefined *)puVar3;
        *(undefined *)(param_2 + 1) = *(undefined *)(puVar3 + 1);
        *(undefined *)((int)param_2 + 3) = *(undefined *)((int)puVar3 + 3);
        *(undefined *)(param_2 + 2) = *(undefined *)(puVar3 + 2);
        *(undefined *)((int)param_2 + 5) = *(undefined *)((int)puVar3 + 5);
        param_2[3] = puVar3[3] & uVar2 | param_2[3] & uVar1;
        param_2[4] = puVar3[4] & uVar2 | param_2[4] & uVar1;
        param_2[5] = puVar3[5] & uVar2 | param_2[5] & uVar1;
        param_2[6] = puVar3[6] & uVar2 | param_2[6] & uVar1;
        param_2[7] = puVar3[7] & uVar2 | param_2[7] & uVar1;
        param_2[8] = puVar3[8] & uVar2 | param_2[8] & uVar1;
        param_2[9] = puVar3[9] & uVar2 | param_2[9] & uVar1;
        param_2[10] = param_2[10] & uVar1 | uVar2 & puVar3[10];
        puVar3 = puVar3 + 0xb;
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 0xc) + -1;
      *puVar3 = *param_2;
      puVar3[1] = param_2[1];
      puVar3[2] = param_2[2];
      puVar3[3] = param_2[3];
      puVar3[4] = param_2[4];
      puVar3[5] = param_2[5];
      puVar3[6] = param_2[6];
      puVar3[7] = param_2[7];
      puVar3[8] = param_2[8];
      puVar3[9] = param_2[9];
      puVar3[10] = param_2[10];
      if (iVar4 == 0) {
        *(byte *)((int)puVar3 + 1) = *(byte *)((int)puVar3 + 1) & 0xfe;
        puVar3 = (undefined2 *)0x0;
      }
      else {
        *(byte *)((int)puVar3 + 1) = *(byte *)((int)puVar3 + 1) | 1;
        puVar3 = puVar3 + 0xb;
      }
      *(int *)(param_1 + 0xc) = iVar4;
    }
    *(undefined2 **)(param_1 + 4) = puVar3;
  }
  return;
}



void FUN_0001e384(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = (int)DAT_0001e420;
  puVar1 = DAT_0001e44c;
  do {
    iVar2 = iVar2 + -1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
  } while (iVar2 != 0);
                    // WARNING: Could not recover jumptable at 0x0001e39a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0001e45c)();
  return;
}



undefined4 FUN_0001e39e(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_0001e3e2();
  puVar1 = DAT_0001e454;
  *DAT_0001e454 = 0;
  iVar3 = puVar1[1];
  puVar1[1] = iVar3 + 1;
  if (0x3f < iVar3 + 1) {
    puVar1[1] = 0;
  }
  return uVar2;
}



undefined4 FUN_0001e3c0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_0001e460();
  puVar1 = DAT_0001e454;
  *DAT_0001e454 = 0;
  iVar3 = puVar1[1];
  puVar1[1] = iVar3 + 2;
  if (0x3f < iVar3 + 2) {
    puVar1[1] = 0;
  }
  return uVar2;
}



int FUN_0001e3e2(char *param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  short *psVar4;
  int iVar5;
  
  iVar5 = 0;
  sVar2 = *(short *)(DAT_0001e454 + 4);
  psVar4 = (short *)((DAT_0001e454[1] * 0x40 + *DAT_0001e454) * 2 + DAT_0001e44c);
  while( true ) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    if (cVar1 == 0) break;
    uVar3 = (int)cVar1 - 0x20;
    if (uVar3 < 0x60) {
      iVar5 = iVar5 + 1;
      *psVar4 = (short)uVar3 + sVar2 + 3;
      psVar4 = psVar4 + 1;
    }
  }
  return iVar5;
}



void FUN_0001e460(char *param_1)

{
  char *pcVar1;
  short sVar3;
  uint uVar2;
  short *psVar4;
  short sVar5;
  uint uVar6;
  
  uVar6 = (uint)DAT_0001e554;
  psVar4 = (short *)((DAT_0001e564[1] * 0x40 + *DAT_0001e564) * 2 + DAT_0001e568);
  sVar5 = *(short *)(DAT_0001e564 + 4) + 99;
  do {
    pcVar1 = param_1 + 1;
    uVar2 = (int)*param_1 & 0xff;
    if (uVar2 == 0) {
      return;
    }
    sVar3 = (short)uVar2;
    if (uVar2 < uVar6 - 0x3d) {
      if (0x1f < uVar2) {
        sVar3 = sVar3 + -0x20;
        goto LAB_0001e4ca;
      }
      *psVar4 = sVar5;
      psVar4[0x40] = sVar5;
    }
    else {
      if (((int)*pcVar1 & 0xffU) == uVar6) {
        sVar3 = sVar3 + -0x16;
      }
      else {
        if (((int)*pcVar1 & 0xffU) != (int)DAT_0001e556) {
          sVar3 = sVar3 + -0x41;
          goto LAB_0001e4ca;
        }
        sVar3 = sVar3 + -0x1b;
      }
      pcVar1 = param_1 + 2;
LAB_0001e4ca:
      sVar3 = sVar3 * 2 + sVar5;
      *psVar4 = sVar3;
      psVar4[0x40] = sVar3 + 1;
    }
    psVar4 = psVar4 + 1;
    param_1 = pcVar1;
  } while( true );
}



void FUN_0001ebe0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined uVar5;
  int *piVar6;
  int iStack17;
  
  bVar1 = false;
  iVar4 = 0;
  if ((param_2 != 0) && (param_1 < 0)) {
    param_1 = -param_1;
    bVar1 = true;
  }
  if (*(int *)(param_3 + 4) == 0) {
    uVar5 = 0x30;
  }
  else {
    uVar5 = 0x20;
  }
  piVar6 = &iStack17;
  do {
    iVar2 = (*DAT_0001ed94)(param_1);
    piVar6 = (int *)((int)piVar6 + -1);
    *piVar6 = iVar2 + 0x30;
    param_1 = (*DAT_0001ed98)();
    iVar4 = iVar4 + 1;
  } while (param_1 != 0);
  iVar2 = *(int *)(param_3 + 8) - iVar4;
  if (bVar1) {
    puVar3 = *(undefined **)(param_3 + 0xc);
    iVar2 = iVar2 + -1;
    *(undefined **)(param_3 + 0xc) = puVar3 + 1;
    *puVar3 = 0x2d;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
  }
  if (0 < iVar2) {
    do {
      iVar2 = iVar2 + -1;
      puVar3 = *(undefined **)(param_3 + 0xc);
      *(undefined **)(param_3 + 0xc) = puVar3 + 1;
      *puVar3 = uVar5;
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
    } while (iVar2 != 0);
  }
  *(int *)(param_3 + 8) = iVar2;
  do {
    puVar3 = *(undefined **)(param_3 + 0xc);
    iVar4 = iVar4 + -1;
    *(undefined **)(param_3 + 0xc) = puVar3 + 1;
    uVar5 = *(undefined *)piVar6;
    piVar6 = (int *)((int)piVar6 + 1);
    *puVar3 = uVar5;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
  } while (iVar4 != 0);
  return;
}



void FUN_0001ec8a(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined uVar6;
  
  iVar5 = 0;
  iVar3 = DAT_0001eda0;
  if (param_2 != 0) {
    iVar3 = DAT_0001ed9c;
  }
  if (*(int *)(param_3 + 4) == 0) {
    uVar6 = 0x30;
  }
  else {
    uVar6 = 0x20;
  }
  piVar4 = (int *)&stack0xfffffffb;
  do {
    uVar1 = param_1 & 0xf;
    param_1 = param_1 >> 4;
    piVar4 = (int *)((int)piVar4 + -1);
    *piVar4 = (int)*(char *)(iVar3 + uVar1);
    iVar5 = iVar5 + 1;
  } while (param_1 != 0);
  iVar3 = *(int *)(param_3 + 8) - iVar5;
  if (0 < iVar3) {
    do {
      puVar2 = *(undefined **)(param_3 + 0xc);
      iVar3 = iVar3 + -1;
      *(undefined **)(param_3 + 0xc) = puVar2 + 1;
      *puVar2 = uVar6;
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
    } while (iVar3 != 0);
  }
  *(int *)(param_3 + 8) = iVar3;
  do {
    iVar5 = iVar5 + -1;
    puVar2 = *(undefined **)(param_3 + 0xc);
    *(undefined **)(param_3 + 0xc) = puVar2 + 1;
    uVar6 = *(undefined *)piVar4;
    piVar4 = (int *)((int)piVar4 + 1);
    *puVar2 = uVar6;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
  } while (iVar5 != 0);
  return;
}



int FUN_0001ecfa(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined uVar3;
  undefined *puVar4;
  char *pcVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_2 + 8);
  iVar6 = 0;
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_2 + 4);
    pcVar5 = param_1;
    if (iVar2 == 0) {
      uVar3 = 0x30;
    }
    else {
      uVar3 = 0x20;
    }
    while (*pcVar5 != '\0') {
      iVar6 = iVar6 + 1;
      pcVar5 = pcVar5 + 1;
    }
    iVar6 = *(int *)(param_2 + 8) - iVar6;
    if (0 < iVar6) {
      do {
        iVar6 = iVar6 + -1;
        puVar4 = *(undefined **)(param_2 + 0xc);
        *(undefined **)(param_2 + 0xc) = puVar4 + 1;
        *puVar4 = uVar3;
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
      } while (iVar6 != 0);
    }
    *(int *)(param_2 + 8) = iVar6;
  }
  while( true ) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    if (cVar1 == '\0') break;
    pcVar5 = *(char **)(param_2 + 0xc);
    *(char **)(param_2 + 0xc) = pcVar5 + 1;
    *pcVar5 = cVar1;
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  }
  return iVar2;
}



void FUN_0001ed58(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = DAT_0001eda4;
  if (param_1 < 0) {
    param_1 = param_1 + 0x2c;
  }
  *DAT_0001eda4 = param_1;
  if (param_2 < 0) {
    param_2 = param_2 + 0x1c;
  }
  piVar1[1] = param_2;
  return;
}



void FUN_0001ee50(void)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_0001f090;
  piVar1 = DAT_0001f08c;
  *DAT_0001f08c = (int)DAT_0001f090;
  *puVar2 = 0;
  *(undefined4 *)(*piVar1 + 4) = 0;
  *(undefined4 *)(*piVar1 + 8) = 0;
  *(undefined4 *)(*piVar1 + 0xc) = 0;
  *(undefined4 *)(*piVar1 + 0x10) = 0;
  *(undefined *)(*piVar1 + 0x14) = 0;
  *(undefined *)(*piVar1 + 0x15) = 0;
  *(undefined4 *)(*piVar1 + 0x18) = 0;
  *(undefined4 *)(*piVar1 + 0x1c) = 0;
  return;
}



void FUN_0001ee82(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0001f094;
  *DAT_0001f094 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



void FUN_0001ee90(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0001f098;
  *DAT_0001f098 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0x2c;
  puVar1[6] = 0x1e;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(short *)(puVar1 + 0xf) = (short)DAT_0001f09c;
  return;
}



int FUN_0001ef22(void)

{
  int iVar1;
  
  for (iVar1 = DAT_0001f090; *(int *)(iVar1 + 0x1c) != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
  }
  return iVar1;
}



int * FUN_0001ef34(int param_1)

{
  int *piVar1;
  
  piVar1 = DAT_0001f090;
  while( true ) {
    if (*piVar1 == param_1) {
      return piVar1;
    }
    if (piVar1[7] == 0) break;
    piVar1 = (int *)piVar1[7];
  }
  return (int *)0x0;
}



int FUN_0001ef52(short *param_1)

{
  bool bVar1;
  int **ppiVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  piVar3 = (int *)FUN_0001ef22();
  piVar4 = (int *)(*DAT_0001f0c4)(0x20);
  if (piVar4 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    bVar1 = false;
    *piVar4 = *piVar3 + 1;
    piVar4[1] = (int)*param_1 & 0xffff;
    piVar4[2] = (int)param_1;
    piVar4[3] = 0;
    piVar4[4] = 0;
    piVar4[6] = (int)piVar3;
    piVar4[7] = 0;
    *(undefined *)((int)piVar4 + 0x15) = 0;
    *(char *)(piVar4 + 5) = (char)param_1[1];
    ppiVar2 = DAT_0001f0c8;
    if (*(char *)(piVar4 + 5) == '\x04') {
      piVar4[3] = (int)(param_1 + 8);
    }
    else if (*(char *)(piVar4 + 5) == '\x05') {
      bVar1 = true;
      piVar4[3] = (int)(param_1 + 8);
      *ppiVar2 = piVar4;
    }
    piVar3[7] = (int)piVar4;
    *DAT_0001f08c = piVar4;
    FUN_0001f14c();
    if (bVar1) {
      (*DAT_0001f0cc)();
    }
    iVar5 = **DAT_0001f08c;
  }
  return iVar5;
}



undefined4 FUN_0001f14c(void)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  int iVar3;
  
  uVar1 = FUN_0001f558();
  iVar3 = (int)DAT_0001f196;
  puVar2 = DAT_0001f1a4;
  do {
    *puVar2 = 0;
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001f166(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  iVar2 = (int)_DAT_0001f198;
  puVar3 = (undefined2 *)((param_2 * 0x40 + param_1) * 2 + DAT_0001f1a8);
  iVar1 = param_3;
  puVar4 = puVar3;
  do {
    do {
      iVar1 = iVar1 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (iVar1 != 0);
    param_4 = param_4 + -1;
    puVar3 = (undefined2 *)((int)puVar4 + iVar2);
    iVar1 = param_3;
    puVar4 = puVar3;
  } while (param_4 != 0);
  return;
}



void FUN_0001f1ee(int param_1,ushort param_2,uint param_3)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = param_1 * 0x20 + DAT_0001f2d0;
  uVar2 = (ushort)((((param_3 & 0xffff) >> 5 & 0x1f) + (param_2 >> 5 & 0x1f) >> 1) << 10) |
          (ushort)((((param_3 & 0xffff) >> 10 & 0x1f) + (param_2 >> 10 & 0x1f) >> 1) << 5) |
          (ushort)((param_2 & 0x1f) + (param_3 & 0x1f) >> 1) | (ushort)PTR_DAT_0001f2cc;
  *(ushort *)(iVar1 + 2) = param_2;
  *(ushort *)(iVar1 + 4) = uVar2;
  *(ushort *)(iVar1 + 6) = param_2;
  *(undefined2 *)(iVar1 + 8) = *DAT_0001f2d4;
  *(ushort *)(iVar1 + 10) = param_2;
  *(ushort *)(iVar1 + 0xc) = uVar2;
  *(ushort *)(iVar1 + 0xe) = param_2;
  return;
}



void FUN_0001f4de(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_0001f544;
  *param_2 = DAT_0001f544[1];
  param_2[1] = puVar1[2];
  param_2[4] = puVar1[3];
  param_2[5] = puVar1[4];
  param_2[2] = puVar1[5];
  param_2[3] = puVar1[6];
  param_2[6] = puVar1[3] + puVar1[5];
  iVar2 = DAT_0001f554;
  param_2[7] = puVar1[4] + puVar1[6];
  param_2[8] = param_1;
  param_2[9] = (puVar1[2] * 0x40 + puVar1[1]) * 2 + iVar2;
  *(short *)(param_2 + 10) = (short)*puVar1;
  param_2[0xb] = puVar1[0xe];
  return;
}



void FUN_0001f52a(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0001f544;
  *(undefined4 *)(DAT_0001f544 + 4) = *param_1;
  *(undefined4 *)(iVar1 + 8) = param_1[1];
  return;
}



void FUN_0001f558(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = (int)DAT_0001f696;
  puVar1 = DAT_0001f698;
  do {
    iVar2 = iVar2 + -1;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0);
  return;
}



void FUN_0001f56a(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_0001f6a0;
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 * 4 + *DAT_0001f69c);
  *(undefined4 *)(param_2 + 0x2c) = *puVar1;
  FUN_0001fac6(param_2);
  *(undefined4 *)(param_2 + 0x20) = uVar3;
  *(undefined4 *)(param_2 + 0x2c) = uVar2;
  return;
}



void FUN_0001f5d6(int *param_1)

{
  int iVar1;
  
  if ((param_1[0xb] & 1U) != 0) {
    iVar1 = FUN_0001f6a8(param_1[8],param_1[2]);
    if (iVar1 < param_1[2]) {
      *param_1 = *param_1 + ((int)((param_1[2] - iVar1) + (uint)(param_1[2] - iVar1 < 0)) >> 1);
    }
  }
  return;
}



void FUN_0001f616(int *param_1)

{
  *param_1 = param_1[4];
  param_1[1] = param_1[1] + 2;
  if (*(char *)param_1[8] == '\n') {
    param_1[8] = param_1[8] + 1;
  }
  FUN_0001f5d6(param_1);
  param_1[9] = (param_1[1] * 0x40 + *param_1) * 2 + DAT_0001f6a4;
  return;
}



void FUN_0001f656(int *param_1)

{
  *param_1 = param_1[4];
  param_1[1] = param_1[1] + 2;
  if (*(char *)param_1[8] == '\x06') {
    param_1[8] = param_1[8] + 1;
  }
  FUN_0001f5d6(param_1);
  param_1[9] = (param_1[1] * 0x40 + *param_1) * 2 + DAT_0001f6a4;
  return;
}



int FUN_0001f6a8(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = DAT_0001f780;
  iVar7 = 1;
  uVar6 = (uint)DAT_0001f77c;
  iVar4 = (int)DAT_0001f77a;
  if (1 < param_2) {
    do {
      pcVar5 = param_1 + 1;
      uVar3 = (int)*param_1 & uVar6;
      if (uVar3 == 0) {
        return iVar7;
      }
      if (uVar3 == 10) {
        return iVar7;
      }
      iVar8 = iVar7;
      if (uVar3 == 0x25) {
        cVar1 = *pcVar5;
        pcVar5 = param_1 + 2;
        uVar3 = (int)cVar1 & uVar6;
        if (uVar3 != 0x25) {
          if (uVar3 == 0x61) {
            cVar1 = *pcVar5;
            pcVar5 = param_1 + 3;
            iVar7 = FUN_0001f6a8(*(undefined4 *)((cVar1 + -0x30) * 4 + *(int *)(iVar2 + 8)),iVar4);
            iVar8 = iVar7 + 1 + iVar7 + -3;
          }
          else {
            iVar8 = iVar7 + 1;
            if (uVar3 == 99) {
              pcVar5 = param_1 + 3;
              iVar8 = iVar7 + -2;
            }
          }
        }
      }
      iVar7 = iVar8 + 1;
      param_1 = pcVar5;
    } while (iVar7 < param_2);
  }
  return param_2;
}



int FUN_0001f736(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar4 = (int)DAT_0001f77a;
  uVar5 = (uint)DAT_0001f77c;
  if (param_2 < 1) {
    return param_2;
  }
  do {
    pcVar6 = param_1 + 1;
    uVar3 = (int)*param_1 & uVar5;
    if (uVar3 == 0) {
      return iVar7;
    }
    if (uVar3 == 1) {
      cVar1 = *pcVar6;
      pcVar6 = param_1 + 2;
      iVar2 = FUN_0001f736(*(undefined4 *)(cVar1 * 4 + *DAT_0001f8a8),iVar4);
      iVar7 = iVar7 + iVar2 + -2;
    }
    else {
      if (uVar3 != 2) {
        if (uVar3 != 3) {
          if (uVar3 == 5) {
            iVar7 = iVar7 + -1;
          }
          else {
            if (uVar3 == 6) {
              return iVar7;
            }
            if ((int)(uVar5 - 0x7f) <= (int)uVar3) {
              pcVar6 = param_1 + 2;
            }
          }
          goto LAB_0001f7b0;
        }
        iVar7 = iVar7 + -2;
      }
      pcVar6 = param_1 + 2;
    }
LAB_0001f7b0:
    iVar7 = iVar7 + 2;
    param_1 = pcVar6;
    if (param_2 <= iVar7) {
      return param_2;
    }
  } while( true );
}



void FUN_0001f7e6(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  char cVar4;
  int iVar3;
  char *extraout_r2;
  char *extraout_r2_00;
  uint uVar5;
  int iVar6;
  undefined auStack32 [11];
  undefined uStack21;
  
  bVar1 = param_2 < 0;
  uStack21 = 0;
  if (bVar1) {
    param_2 = -param_2;
  }
  uVar5 = (uint)bVar1;
  iVar6 = 9;
  cVar4 = (*DAT_0001f8ac)(10,param_2);
  *extraout_r2 = cVar4 + '0';
  while (iVar3 = (*DAT_0001f8b0)(), puVar2 = DAT_0001f8b4, iVar3 != 0) {
    iVar6 = iVar6 + -1;
    cVar4 = (*DAT_0001f8ac)();
    *extraout_r2_00 = cVar4 + '0';
  }
  iVar3 = iVar6;
  if (uVar5 != 0) {
    iVar3 = iVar6 + -1;
    auStack32[iVar6] = 0x2d;
  }
  if (0 < param_3) {
    for (; 0xb - param_3 <= iVar3; iVar3 = iVar3 + -1) {
      auStack32[iVar3] = 0x20;
    }
  }
  DAT_0001f8b4[2] = *DAT_0001f8b4;
  puVar2[3] = puVar2[1];
  (*DAT_0001f8b8)(*param_1,param_1[1]);
  iVar6 = (*DAT_0001f8bc)(auStack32 + iVar3 + 1);
  *param_1 = *param_1 + iVar6;
  param_1[9] = param_1[9] + iVar6 * 2;
  *puVar2 = puVar2[2];
  puVar2[1] = puVar2[3];
  return;
}



int FUN_0001f8c0(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  short sVar7;
  int iVar5;
  uint uVar6;
  short *extraout_r2;
  short *extraout_r2_00;
  int iVar8;
  int iVar9;
  short *psVar10;
  undefined *puVar11;
  short *psVar12;
  int iVar13;
  undefined auStack56 [28];
  
  uVar3 = DAT_0001fa0c;
  bVar1 = param_2 < 0;
  sVar2 = (short)*(undefined4 *)(((int)*(short *)(param_1 + 10) & 0xffffU) * 4 + DAT_0001fa08) *
          0x1000 + DAT_0001fa04;
  if (bVar1) {
    param_2 = -param_2;
  }
  puVar11 = auStack56;
  iVar8 = 9;
  sVar7 = (*DAT_0001fa10)(9,param_2);
  *extraout_r2 = sVar7 + (short)uVar3;
  while (iVar5 = (*DAT_0001fa14)(), iVar4 = DAT_0001fa1c, iVar5 != 0) {
    iVar8 = iVar8 + -1;
    sVar7 = (*DAT_0001fa10)();
    *extraout_r2_00 = sVar7 + (short)uVar3;
  }
  iVar9 = iVar8;
  if (bVar1) {
    iVar9 = iVar8 + -1;
    iVar5 = iVar8 * 2;
    *(short *)(puVar11 + iVar5) = (short)DAT_0001fa18;
  }
  if (0 < param_3) {
    for (; 0xb - param_3 <= iVar9; iVar9 = iVar9 + -1) {
      iVar5 = iVar9 * 2;
      *(undefined2 *)(puVar11 + iVar5) = 0;
    }
  }
  iVar8 = (int)DAT_0001fa06;
  iVar13 = iVar8 + -2;
  psVar10 = (short *)(puVar11 + (iVar9 + 1) * 2);
  for (psVar12 = psVar10; psVar12 < puVar11 + 0x16; psVar12 = psVar12 + 1) {
    if (*psVar12 == 0) {
      uVar6 = FUN_0001ffdc(DAT_0001fb54);
      iVar5 = (uVar6 & 0xffff) * 4;
      sVar7 = (short)iVar5 + sVar2;
      *(short *)param_1[9] = sVar7;
      *(short *)(param_1[9] + 2) = sVar7 + 1;
      *(short *)(param_1[9] + iVar13) = sVar7 + 2;
      *(short *)(param_1[9] + iVar8) = sVar7 + 3;
      *(short *)(*param_1 * iVar13 + iVar4 + param_1[1] * 2) = sVar7;
      *(short *)((*param_1 + 1) * iVar13 + iVar4 + param_1[1] * 2) = sVar7 + 1;
      *(short *)(*param_1 * iVar13 + iVar4 + (param_1[1] + 1) * 2) = sVar7 + 2;
      *(short *)((*param_1 + 1) * iVar13 + iVar4 + (param_1[1] + 1) * 2) = sVar7 + 3;
      param_1[9] = param_1[9] + 4;
    }
    else {
      uVar6 = FUN_0001ffdc((int)*psVar10);
      iVar5 = (uVar6 & 0xffff) * 4;
      sVar7 = (short)iVar5 + sVar2;
      *(short *)param_1[9] = sVar7;
      *(short *)(param_1[9] + 2) = sVar7 + 1;
      *(short *)(param_1[9] + iVar13) = sVar7 + 2;
      *(short *)(param_1[9] + iVar8) = sVar7 + 3;
      *(short *)(*param_1 * iVar13 + iVar4 + param_1[1] * 2) = sVar7;
      *(short *)((*param_1 + 1) * iVar13 + iVar4 + param_1[1] * 2) = sVar7 + 1;
      *(short *)(*param_1 * iVar13 + iVar4 + (param_1[1] + 1) * 2) = sVar7 + 2;
      *(short *)((*param_1 + 1) * iVar13 + iVar4 + (param_1[1] + 1) * 2) = sVar7 + 3;
      param_1[9] = param_1[9] + 4;
    }
    psVar10 = psVar10 + 1;
    *param_1 = *param_1 + 2;
  }
  return iVar5;
}



void FUN_0001fac6(int *param_1)

{
  undefined4 uVar1;
  short sVar4;
  char *pcVar2;
  uint uVar3;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)(((int)*(short *)(param_1 + 10) & 0xffffU) * 4 + DAT_0001fb58) * 0x1000 + 99;
  FUN_0001f5d6();
  uVar1 = DAT_0001fb60;
  uVar6 = (uint)DAT_0001fb50;
  param_1[9] = (param_1[1] * 0x40 + *param_1) * 2 + DAT_0001fb5c;
  do {
    pcVar2 = (char *)param_1[8];
    param_1[8] = (int)(pcVar2 + 1);
    uVar3 = (int)*pcVar2 & uVar6;
    if (uVar3 == 0) break;
    if (uVar3 == 10) {
      FUN_0001f616(param_1);
    }
    else {
      sVar4 = (short)iVar5;
      if (uVar3 == 0x25) {
        pcVar2 = (char *)param_1[8];
        param_1[8] = (int)(pcVar2 + 1);
        uVar3 = (int)*pcVar2 & uVar6;
        if (uVar3 == 0x25) {
          *(short *)param_1[9] = sVar4 + 10;
          *(short *)(param_1[9] + (uVar6 - 0x7f)) = sVar4 + 0xb;
          param_1[9] = param_1[9] + 2;
          *param_1 = *param_1 + 1;
        }
        else if (uVar3 == 0x61) {
          pcVar2 = (char *)param_1[8];
          param_1[8] = (int)(pcVar2 + 1);
          FUN_0001f56a(*pcVar2 + -0x30);
        }
        else if (uVar3 == 99) {
          pcVar2 = (char *)param_1[8];
          param_1[8] = (int)(pcVar2 + 1);
          *(ushort *)(param_1 + 10) = (short)*pcVar2 + (short)uVar1 & 7;
          if (*(short *)(param_1 + 10) == 9) {
            *(undefined2 *)(param_1 + 10) = *DAT_0001fc8c;
          }
          iVar5 = *(int *)(((int)*(short *)(param_1 + 10) & 0xffffU) * 4 + DAT_0001fc90) * 0x1000 +
                  99;
        }
      }
      else {
        sVar4 = ((short)uVar3 + -0x20) * 2 + sVar4;
        *(short *)param_1[9] = sVar4;
        *(short *)(param_1[9] + (uVar6 - 0x7f)) = sVar4 + 1;
        param_1[9] = param_1[9] + 2;
        *param_1 = *param_1 + 1;
      }
    }
    if ((param_1[2] != 0) && (param_1[6] - *param_1 < 1)) {
      FUN_0001f616(param_1);
    }
  } while ((param_1[3] == 0) || (1 < param_1[7] - param_1[1]));
  param_1[8] = param_1[8] + -1;
  return;
}



void FUN_0001fc3c(int *param_1)

{
  int iVar1;
  ushort uVar3;
  int iVar2;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  uint uVar10;
  
  iVar6 = *(int *)(((int)*(short *)(param_1 + 10) & 0xffffU) * 4 + DAT_0001fc90) * 0x1000 +
          (int)DAT_0001fc88;
  FUN_0001f5d6();
  iVar1 = DAT_0001fc98;
  uVar7 = (uint)DAT_0001fc8a;
  param_1[9] = (param_1[1] * 0x40 + *param_1) * 2 + DAT_0001fc94;
  uVar10 = uVar7 - 0x7f;
  do {
    pcVar4 = (char *)param_1[8];
    param_1[8] = (int)(pcVar4 + 1);
    uVar5 = (int)*pcVar4 & uVar7;
    if (uVar5 == 0) break;
    if (uVar5 < 0x10) {
      if (uVar5 == 1) {
        pcVar4 = (char *)param_1[8];
        param_1[8] = (int)(pcVar4 + 1);
        FUN_0001f56a((int)*pcVar4);
      }
      else if (uVar5 == 3) {
        pcVar4 = (char *)param_1[8];
        param_1[8] = (int)(pcVar4 + 1);
        *(ushort *)(param_1 + 10) = (short)*pcVar4 & 7;
        if (*(short *)(param_1 + 10) == 9) {
          *(undefined2 *)(param_1 + 10) = *DAT_0001fd2c;
        }
        iVar6 = *(int *)(((int)*(short *)(param_1 + 10) & 0xffffU) * 4 + DAT_0001fd30) * 0x1000 +
                (int)DAT_0001fd2a;
      }
      else if (uVar5 == 5) {
        FUN_0001fe80(0,param_1);
        param_1[9] = param_1[9] + 2;
        *param_1 = *param_1 + 1;
      }
      else if (uVar5 == 6) {
        FUN_0001f656(param_1);
      }
    }
    else {
      if (uVar10 <= uVar5) {
        pcVar4 = (char *)param_1[8];
        param_1[8] = (int)(pcVar4 + 1);
        uVar5 = ((int)*pcVar4 & uVar7) + uVar5 * 0x100;
      }
      uVar3 = FUN_0001ffdc(uVar5);
      iVar8 = (uint)uVar3 * 4 + iVar6;
      iVar2 = FUN_0001fe38(iVar8,param_1);
      if (iVar2 == 0) {
        FUN_0001ff8c((int)(short)uVar3);
        param_1[9] = param_1[9] + 4;
        *param_1 = *param_1 + 2;
      }
      else {
        sVar9 = (short)iVar8;
        *(short *)param_1[9] = sVar9;
        *(short *)(param_1[9] + 2) = sVar9 + 1;
        *(short *)(param_1[9] + uVar10) = sVar9 + 2;
        *(short *)(param_1[9] + (int)DAT_0001fe7e) = sVar9 + 3;
        *(short *)(*param_1 * uVar10 + iVar1 + param_1[1] * 2) = sVar9;
        *(short *)((*param_1 + 1) * uVar10 + iVar1 + param_1[1] * 2) = sVar9 + 1;
        *(short *)(*param_1 * uVar10 + iVar1 + (param_1[1] + 1) * 2) = sVar9 + 2;
        *(short *)((*param_1 + 1) * uVar10 + iVar1 + (param_1[1] + 1) * 2) = sVar9 + 3;
        param_1[9] = param_1[9] + 4;
        *param_1 = *param_1 + 2;
      }
    }
    if ((param_1[2] != 0) && (param_1[6] - *param_1 < 2)) {
      FUN_0001f656(param_1);
    }
  } while ((param_1[3] == 0) || (1 < param_1[7] - param_1[1]));
  param_1[8] = param_1[8] + -1;
  return;
}



bool FUN_0001fe38(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001feb8(param_1,*param_2,param_2[1]);
  if (iVar1 != 0) {
    FUN_0001feb8(param_1,*param_2 + 1,param_2[1]);
    FUN_0001feb8(param_1,*param_2,param_2[1] + 1);
    FUN_0001feb8(param_1,*param_2 + 1,param_2[1] + 1);
  }
  return iVar1 != 0;
}



undefined4 FUN_0001fe80(short param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001feb8((int)param_1,*param_2,param_2[1]);
  if (iVar1 != 0) {
    FUN_0001feb8((int)param_1,*param_2,param_2[1] + 1);
    return 1;
  }
  return 0;
}



undefined4 FUN_0001feb8(uint param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  
  if ((param_1 & 0xffff) == 0) {
    *(undefined2 *)((param_3 * 0x40 + param_2) * 2 + DAT_0001ffcc) = 0;
  }
  iVar4 = DAT_0001ffd0;
  uVar7 = (uint)*(short *)(param_3 * 2 + param_2 * 0x80 + DAT_0001ffd0);
  uVar8 = uVar7 & 0xffff;
  if (uVar8 == (param_1 & 0xffff)) {
    uVar1 = 0;
  }
  else if (uVar8 == 0) {
    uVar1 = 2;
  }
  else {
    param_2 = param_2 - (uVar7 & 1);
    param_3 = param_3 - ((int)(uVar7 & 2) >> 1);
    iVar3 = param_2 * 0x80 + DAT_0001ffd0;
    *(undefined2 *)(iVar3 + param_3 * 2) = 0;
    iVar4 = (param_2 + 1) * 0x80 + iVar4;
    *(undefined2 *)(iVar4 + param_3 * 2) = 0;
    iVar2 = (int)DAT_0001ffc8;
    iVar5 = (param_3 + 1) * 2;
    *(undefined2 *)(iVar3 + iVar5) = 0;
    *(undefined2 *)(iVar5 + iVar4) = 0;
    puVar6 = (undefined2 *)((param_3 * 0x40 + param_2) * 2 + DAT_0001ffcc);
    *puVar6 = 0;
    puVar6[1] = 0;
    iVar4 = (int)DAT_0001ffc4;
    *(undefined2 *)((int)puVar6 + iVar4) = 0;
    *(undefined2 *)((int)puVar6 + iVar4 + 2) = 0;
    FUN_0001ff8c((int)(((int)DAT_0001ffc6 & uVar8) + iVar2) >> 2);
    uVar1 = 1;
  }
  return uVar1;
}



void FUN_0001ff8c(uint param_1)

{
  int iVar1;
  
  if ((int)DAT_0001ffc4 <= (int)(param_1 & 0xffff)) {
    iVar1 = ((param_1 & 0xffff) - 0x80) * 4;
    *(short *)(iVar1 + DAT_0001ffd4) = *(short *)(iVar1 + DAT_0001ffd4) + -1;
  }
  return;
}



undefined * FUN_0001ffdc(uint param_1)

{
  undefined *puVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  if ((int)(param_1 & 0xffff) < DAT_000200b0) {
    puVar1 = PTR_DAT_000200b4 + param_1;
  }
  else {
    puVar5 = (undefined *)(int)DAT_000200a8;
    psVar2 = DAT_000200b8;
    psVar3 = DAT_000200b8;
    puVar1 = puVar5;
    if (DAT_000200b8 < (short *)((int)DAT_000200aa + (int)DAT_000200b8)) {
      do {
        if (((int)*psVar2 & 0xffffU) == (param_1 & 0xffff)) {
          psVar3[1] = psVar3[1] + 1;
          return puVar1;
        }
        puVar1 = puVar1 + 1;
        psVar2 = psVar2 + 2;
        psVar3 = psVar3 + 2;
      } while (psVar2 < (short *)((int)DAT_000200aa + (int)DAT_000200b8));
    }
    iVar4 = 0;
    puVar1 = puVar5;
    psVar2 = DAT_000200b8;
    puVar6 = puVar5;
    do {
      if (DAT_000200b8[iVar4 * 2 + 1] == 0) {
        FUN_0002006e(puVar1,param_1);
        *psVar2 = (short)param_1;
        psVar2[1] = 1;
        return puVar6;
      }
      iVar4 = iVar4 + 1;
      puVar6 = puVar6 + 1;
      psVar2 = psVar2 + 2;
      puVar1 = puVar1 + 1;
    } while (iVar4 < (int)puVar5);
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



void FUN_0002006e(int param_1,uint param_2)

{
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
  
  iVar2 = *(int *)(*DAT_000200c0 + 0xc);
  uVar1 = (param_2 & 0xffff) + (int)DAT_000200ac & (uint)PTR_DAT_0000fffc_3_000200c4;
  if (*(char *)(*DAT_000200c0 + 0x14) == '\x04') {
    if ((int)uVar1 < (int)DAT_000200ae) {
      iVar2 = *(int *)(*DAT_000200c8 + 0xc);
    }
    else {
      uVar1 = uVar1 - (int)DAT_000200ae;
    }
  }
  psVar6 = (short *)(uVar1 * 0x20 + iVar2);
  pcVar8 = (char *)(param_1 * 0x80 + DAT_000200bc);
  iStack48 = 2;
  do {
    iVar2 = 8;
    do {
      pcVar9 = pcVar8;
      uVar7 = (int)*psVar6 & 0xffff;
      uVar1 = uVar7 << 1 | uVar7 >> 1;
      uVar3 = ((int)psVar6[-1] & 0xffffU | (int)psVar6[1] & 0xffffU) & uVar1;
      uVar1 = uVar1 | (int)psVar6[-1] & 0xffffU | (int)psVar6[1] & 0xffffU | uVar3 << 1 | uVar3 >> 1
      ;
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
      *pcVar9 = ((char)(uVar5 >> 3) + (char)uVar5 & 0x22U) + cStack36 +
                ((char)(uVar7 >> 3) + (char)uVar7 & 0x44U);
      uVar7 = uVar3 >> 8 & 0x30;
      uVar5 = uVar1 >> 7 & 0x60;
      pcVar9[1] = ((char)(uVar5 >> 3) + (char)uVar5 & 0x44U) +
                  ((char)(uVar7 >> 3) + (char)uVar7 & 0x22U) + cStack35;
      uVar5 = uVar3 >> 6 & 0x30;
      uVar7 = uVar1 >> 5 & 0x60;
      pcVar9[2] = ((char)(uVar7 >> 3) + (char)uVar7 & 0x44U) +
                  ((char)(uVar5 >> 3) + (char)uVar5 & 0x22U) + cStack34;
      uVar5 = uVar3 >> 4 & 0x30;
      uVar7 = uVar1 >> 3 & 0x60;
      pcVar9[3] = ((char)(uVar5 >> 3) + (char)uVar5 & 0x22U) + cStack33 +
                  ((char)(uVar7 >> 3) + (char)uVar7 & 0x44U);
      uVar5 = uVar3 >> 2 & 0x30;
      uVar7 = uVar1 >> 1 & 0x60;
      pcVar9[0x20] = ((char)(uVar5 >> 3) + (char)uVar5 & 0x22U) + cStack32 +
                     ((char)(uVar7 >> 3) + (char)uVar7 & 0x44U);
      uVar7 = (uVar1 & 0x30) << 1;
      pcVar9[0x21] = ((char)((uVar3 & 0x30) >> 3) + (char)(uVar3 & 0x30) & 0x22U) + cStack31 +
                     ((char)(uVar7 >> 3) + (char)uVar7 & 0x44U);
      uVar7 = (uVar3 & 0xc) * 4;
      pcVar9[0x22] = ((char)(uVar7 >> 3) + (char)uVar7 & 0x22U) + cStack30 +
                     (((byte)uVar1 & 0xc) + (char)((uVar1 & 0xc) << 3) & 0x44);
      uVar3 = (uVar3 & 3) * 0x10;
      uVar1 = (uVar1 & 3) << 5;
      psVar6 = psVar6 + 1;
      pcVar9[0x23] = ((char)(uVar3 >> 3) + (char)uVar3 & 0x22U) +
                     ((char)(uVar1 >> 3) + (char)uVar1 & 0x44U) + bStack29;
      iVar2 = iVar2 + -1;
      pcVar8 = pcVar9 + 4;
    } while (iVar2 != 0);
    iStack48 = iStack48 + -1;
    pcVar8 = pcVar9 + 0x24;
  } while (iStack48 != 0);
  return;
}



int * FUN_00020eb0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar2 = (*DAT_00020f88)(param_1);
  if (iVar2 == 0) {
    uVar3 = (*DAT_00020f8c)(param_1,param_2);
    iVar2 = (*DAT_00020f90)(uVar3);
    pcVar1 = DAT_00020f94;
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x1c), iVar2 == DAT_00020f86)) {
      piVar4 = (int *)(*DAT_00020f98)(iVar2);
      if (piVar4 != (int *)0x0) {
        (*DAT_00020f9c)(param_1,param_2,piVar4);
        iVar2 = FUN_00020f3c(piVar4,iVar2);
        if ((iVar2 == *piVar4) && ((undefined *)piVar4[1] == PTR_DAT_00020fa0)) {
          (*pcVar1)(uVar3);
          return piVar4;
        }
      }
      (*pcVar1)(piVar4);
    }
    (*pcVar1)(uVar3);
  }
  return (int *)0x0;
}



int FUN_00020f3c(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar4 = 1;
  pcVar2 = (char *)(param_1 + 4);
  param_2 = param_2 + -4;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    param_2 = param_2 + -1;
    iVar5 = iVar4 * ((int)cVar1 & 0xffU);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + iVar5;
  } while (param_2 != 0);
  return iVar3;
}



int * FUN_00021034(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  
  iVar2 = (*DAT_000210b0)(param_1);
  if (iVar2 == 0) {
    uVar3 = (*DAT_000210b4)(param_1,param_2);
    iVar2 = (*DAT_000210b8)(uVar3);
    pcVar1 = DAT_000210ac;
    if (iVar2 != 0) {
      uVar5 = *(undefined4 *)(iVar2 + 0x1c);
      piVar4 = (int *)(*DAT_000210bc)(uVar5);
      if (piVar4 != (int *)0x0) {
        (*DAT_000210c0)(param_1,param_2,piVar4);
        iVar2 = FUN_00020f3c(piVar4,uVar5);
        if ((iVar2 == *piVar4) && (piVar4[1] == DAT_000210c4)) {
          (*pcVar1)(uVar3);
          return piVar4;
        }
      }
      (*pcVar1)(piVar4);
    }
    (*pcVar1)(uVar3);
  }
  return (int *)0x0;
}



int FUN_00021110(undefined2 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0002123c;
  iVar2 = (int)*(short *)(DAT_0002123c + 8);
  if (iVar2 == 0) {
    *(undefined2 *)(DAT_0002123c + 8) = param_1;
    iVar2 = 0;
    *(undefined *)(iVar1 + 2) = 0;
  }
  return iVar2;
}



int FUN_00021124(undefined2 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0002123c;
  iVar2 = (int)*(short *)(DAT_0002123c + 8);
  if (iVar2 == 0) {
    *(undefined2 *)(DAT_0002123c + 8) = param_1;
    iVar2 = 1;
    *(undefined *)(iVar1 + 2) = 1;
  }
  return iVar2;
}



undefined4 FUN_00021a70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 uVar7;
  int iVar8;
  int local_1c;
  int iStack24;
  int iStack20;
  
  uVar2 = DAT_00022124;
  pbVar4 = DAT_00022100;
  uVar7 = DAT_00021fdc;
  iVar1 = DAT_00021aa8;
  iStack20 = (int)*(char *)(DAT_00021aa8 + 1);
  iStack24 = (int)*(char *)(DAT_00021aa8 + 2);
  local_1c = (int)*(char *)(DAT_00021aa8 + 3);
  pbVar5 = DAT_000223b4;
  switch(param_2) {
  case 1:
    *DAT_00021d20 = *DAT_00021d20 | *DAT_00021d24;
    uVar7 = 2;
    break;
  case 2:
    uVar7 = 3;
    goto LAB_000222a2;
  case 3:
    *DAT_00021d20 = *DAT_00021d20 | *DAT_00021d28;
    uVar7 = 4;
    break;
  case 4:
    uVar7 = 5;
    goto LAB_000222a2;
  case 5:
    *DAT_00021d20 = *DAT_00021d20 | *DAT_00021d2c;
    uVar7 = 0x50;
    break;
  case 6:
    *DAT_00021d20 = *DAT_00021d20 | *DAT_00021d30;
    *DAT_00021d34 = *DAT_00021d34 | *DAT_00021d38;
    uVar7 = 0x51;
    goto LAB_000222a2;
  case 7:
    *DAT_00021d20 = *DAT_00021d20 | *DAT_00021d3c;
    pbVar4 = DAT_00021d28;
    pbVar6 = DAT_00021d28 + 5;
    *DAT_00021d40 = *DAT_00021d40 | *DAT_00021d28;
    pbVar5 = DAT_00021d44;
    *DAT_00021d44 = *DAT_00021d44 | *pbVar6;
    *pbVar5 = *pbVar5 | *DAT_00021d48;
    pbVar5 = DAT_00021d4c;
    *DAT_00021d4c = *DAT_00021d4c | *pbVar4;
    *pbVar5 = *pbVar5 | *DAT_00021d24;
    uVar7 = 0x53;
    goto LAB_000222a2;
  case 8:
    *DAT_00021d20 = *DAT_00021d20 | *DAT_00021d50;
    uVar7 = 9;
    break;
  case 9:
    *DAT_00021d34 = *DAT_00021d34 | *DAT_00021d48;
    uVar7 = 10;
    break;
  case 10:
    *DAT_00021d20 = *DAT_00021d20 | *DAT_00021d38;
    pbVar4 = DAT_00021d4c;
    *DAT_00021d4c = *DAT_00021d4c | *DAT_00021d2c;
    *pbVar4 = *pbVar4 & *DAT_00021d54;
    FUN_00021110(0x4f);
    goto LAB_00021dfa;
  case 0xb:
    *DAT_00021d5c = *DAT_00021d5c | *DAT_00021d24;
    uVar7 = 0xc;
    break;
  case 0xc:
    uVar7 = 0xd;
    goto LAB_000222a2;
  case 0xd:
    *DAT_00021d60 = *DAT_00021d60 | *DAT_00021d24;
    pbVar5 = DAT_00021d4c;
    *DAT_00021d4c = *DAT_00021d4c & *DAT_00021d64;
    pbVar4 = DAT_00021d48;
    *pbVar5 = *pbVar5 | *DAT_00021d38;
    *pbVar5 = *pbVar5 | *DAT_00021d50;
    *DAT_00021d68 = *DAT_00021d68 | *pbVar4;
    *DAT_00021d6c = *DAT_00021d6c & *DAT_00021d54;
    FUN_00021110(0x58);
    local_1c = 0;
    goto switchD_00021aa4_caseD_49;
  case 0xe:
    uVar7 = 0xf;
    goto LAB_000223f2;
  case 0xf:
    *DAT_00021d60 = *DAT_00021d60 | *DAT_00021d2c;
    uVar7 = 0x10;
    break;
  case 0x10:
    *DAT_00021e68 = *DAT_00021e68 | *DAT_00021e6c;
    pbVar5 = DAT_00021e74 + -1;
    *DAT_00021e70 = *DAT_00021e70 & *DAT_00021e74;
    pbVar4 = DAT_00021e7c;
    *DAT_00021e78 = *DAT_00021e78 & *pbVar5;
    pbVar5 = DAT_00021e80;
    *DAT_00021e70 = *DAT_00021e70 | *pbVar4;
    pbVar4 = DAT_00021e78;
    *DAT_00021e78 = *DAT_00021e78 & *pbVar5;
    iVar8 = (int)DAT_00021e64;
    *pbVar4 = *pbVar4 | *DAT_00021e84;
    (*DAT_00021e8c)(DAT_00021e88,iVar8,2,1);
    uVar7 = 0x11;
    goto LAB_000223f2;
  case 0x11:
    uVar7 = 0x4c;
    goto LAB_000223f2;
  case 0x12:
    *DAT_00021e90 = *DAT_00021e90 | *DAT_00021e94;
    uVar7 = 0x13;
    break;
  case 0x13:
    *DAT_00021e90 = *DAT_00021e90 | *DAT_00021e98;
    uVar7 = 0x14;
    break;
  case 0x14:
    *DAT_00021e90 = *DAT_00021e90 | *DAT_00021e9c;
    FUN_00021110(0x15);
LAB_00021dfa:
    local_1c = 2;
    goto switchD_00021aa4_caseD_49;
  case 0x15:
    *DAT_00021e68 = *DAT_00021e68 | *DAT_00021ea0;
    FUN_00021110(0x5a);
    local_1c = 0;
    goto switchD_00021aa4_caseD_49;
  case 0x16:
    bVar3 = *DAT_00021ea4 | *DAT_00021e6c;
    pbVar5 = DAT_00021ea4;
    goto LAB_0002227c;
  case 0x17:
    *DAT_00021ea4 = *DAT_00021ea4 | *DAT_00021ea8;
    uVar7 = 0x18;
    break;
  case 0x18:
    uVar7 = 0x6b;
    goto LAB_000222a2;
  case 0x19:
    *DAT_00021ea4 = *DAT_00021ea4 | *DAT_00021ea0;
    uVar7 = 0x1a;
    break;
  case 0x1a:
    *DAT_00021e68 = *DAT_00021e68 | *DAT_00021e94;
    uVar7 = 0x1b;
    break;
  case 0x1b:
    *DAT_00021ea4 = *DAT_00021ea4 | *DAT_00021e94;
    uVar7 = 0x1c;
    break;
  case 0x1c:
    *DAT_00021fa8 = *DAT_00021fa8 | *DAT_00021fac;
    *DAT_00021fb0 = *DAT_00021fb0 | *DAT_00021fb4;
    FUN_00021110(0x6c);
    iStack20 = 8;
    iStack24 = 6;
    local_1c = 7;
    goto switchD_00021aa4_caseD_49;
  case 0x1d:
    *DAT_00021fa8 = *DAT_00021fa8 | *DAT_00021fb8;
    uVar7 = 0x1e;
    break;
  case 0x1e:
    *DAT_00021fa8 = *DAT_00021fa8 | *DAT_00021fbc;
    FUN_00021110(0x1f);
    iStack20 = 2;
    iStack24 = 1;
    local_1c = 4;
    goto switchD_00021aa4_caseD_49;
  case 0x1f:
    *DAT_00021fc0 = *DAT_00021fc0 | *DAT_00021fac;
    pbVar4 = DAT_00021fc4;
    *DAT_00021fb0 = *DAT_00021fb0 & *DAT_00021fc4;
    pbVar5 = DAT_00021fc8;
    *DAT_00021fc8 = *DAT_00021fc8 & *pbVar4;
    *pbVar5 = *pbVar5 | *DAT_00021fac;
    *pbVar5 = *pbVar5 & *DAT_00021fcc;
    *pbVar5 = *pbVar5 | *DAT_00021fd0;
    FUN_00021110(0x20);
    local_1c = 0;
    goto switchD_00021aa4_caseD_49;
  case 0x20:
    iVar8 = (int)DAT_00021fa4;
    *DAT_00021fd4 = *DAT_00021fd4 | *DAT_00021fd8;
    (*DAT_00021fe0)(uVar7,iVar8,2);
    uVar7 = 0x21;
    goto LAB_000223f2;
  case 0x21:
    uVar7 = 0x4d;
    goto LAB_000223f2;
  case 0x22:
    uVar7 = 0x67;
    goto LAB_000223f2;
  case 0x23:
    *DAT_00021fc0 = *DAT_00021fc0 | *DAT_00021fb8;
    *DAT_00021fe4 = *DAT_00021fe4 & *DAT_00021fe8;
    uVar7 = 0x4f;
    goto LAB_000222a2;
  case 0x24:
    bVar3 = *DAT_00021fd4 | *DAT_00021fac;
    pbVar5 = DAT_00021fd4;
    goto LAB_0002227c;
  case 0x25:
    bVar3 = *DAT_00021fd4 | *DAT_00021fb8;
    pbVar5 = DAT_00021fd4;
    goto LAB_0002227c;
  case 0x26:
    *DAT_000220f0 = *DAT_000220f0 | *DAT_000220f4;
    *DAT_000220f8 = *DAT_000220f8 & *DAT_000220fc;
    uVar7 = 0x27;
    goto LAB_000222a2;
  case 0x27:
    *DAT_00022100 = *DAT_00022100 | *DAT_00022104;
    *pbVar4 = *pbVar4 | *DAT_00022108;
    pbVar4 = DAT_000220f8;
    *DAT_000220f8 = *DAT_000220f8 & *DAT_0002210c;
    *pbVar4 = *pbVar4 | *DAT_00022110;
    uVar7 = 0x5f;
    goto LAB_000222a2;
  case 0x28:
    uVar7 = 0x29;
    goto LAB_000222a2;
  case 0x29:
    *DAT_00022100 = *DAT_00022100 | *DAT_00022114;
    uVar7 = 0x2a;
    break;
  case 0x2a:
    *DAT_00022118 = *DAT_00022118 | *DAT_00022104;
    pbVar4 = DAT_000220f8;
    *DAT_000220f8 = *DAT_000220f8 & *DAT_0002211c;
    *pbVar4 = *pbVar4 | *DAT_000220f4;
    uVar7 = 0x2b;
    goto LAB_000222a2;
  case 0x2b:
    *DAT_00022100 = *DAT_00022100 | *DAT_00022120;
    (*DAT_00022128)(uVar2,0x87,6);
    uVar7 = 0x4f;
    goto LAB_000223f2;
  case 0x2c:
    *DAT_00022100 = *DAT_00022100 | *DAT_00022110;
    uVar7 = 0x69;
    break;
  case 0x2d:
    *DAT_00022118 = *DAT_00022118 | *DAT_00022108;
    *DAT_000220f8 = *DAT_000220f8 & *DAT_0002212c;
    uVar7 = 0x2e;
    goto LAB_000222a2;
  case 0x2e:
    *DAT_00022100 = *DAT_00022100 | *DAT_00022130;
    uVar7 = 0x2f;
    break;
  case 0x2f:
    iVar8 = (int)DAT_000220ec;
    *DAT_00022100 = *DAT_00022100 | *DAT_00022134;
    (*DAT_00022128)(uVar2,iVar8,2,3);
    uVar7 = 0x30;
    goto LAB_000223f2;
  case 0x30:
    uVar7 = 0x4e;
    goto LAB_000223f2;
  case 0x31:
    *DAT_00022374 = *DAT_00022374 | *DAT_00022378;
    pbVar4 = DAT_0002237c;
    *DAT_0002237c = *DAT_0002237c & *DAT_00022380;
    bVar3 = *pbVar4 | *DAT_00022384;
    goto LAB_00022184;
  case 0x32:
    bVar3 = *DAT_00022388 | *DAT_0002238c;
    pbVar5 = DAT_00022388;
    goto LAB_0002227c;
  case 0x33:
    *DAT_00022388 = *DAT_00022388 | *DAT_00022390;
    bVar3 = *DAT_00022394 | *DAT_00022398;
    pbVar4 = DAT_00022394;
LAB_00022184:
    *pbVar4 = bVar3;
    goto switchD_00021aa4_caseD_49;
  case 0x34:
    *DAT_0002239c = *DAT_0002239c | *DAT_000223a0;
    pbVar4 = DAT_0002237c;
    *DAT_0002237c = *DAT_0002237c & *DAT_000223a4;
    *pbVar4 = *pbVar4 | *DAT_000223a8;
    uVar7 = 0x4f;
    goto LAB_000222a2;
  case 0x35:
    *DAT_0002239c = *DAT_0002239c | *DAT_00022398;
    (*DAT_000223ac)(0x5f);
    local_1c = 5;
    goto switchD_00021aa4_caseD_49;
  case 0x36:
    *DAT_00022388 = *DAT_00022388 | *DAT_00022398;
    *DAT_00022394 = *DAT_00022394 | *DAT_0002238c;
    uVar7 = 0x6f;
    goto LAB_000222a2;
  case 0x37:
    *DAT_00022388 = *DAT_00022388 | *DAT_000223b0;
    *DAT_0002239c = *DAT_0002239c | *DAT_00022384;
    uVar7 = 0x38;
    goto LAB_000222a2;
  case 0x38:
    *DAT_00022388 = *DAT_00022388 | *DAT_000223a8;
    (*DAT_000223ac)(0x70);
    local_1c = 0;
    goto switchD_00021aa4_caseD_49;
  case 0x39:
    uVar7 = 0x70;
    goto LAB_000223f2;
  case 0x3a:
    uVar7 = 0x70;
    goto LAB_000223f2;
  case 0x3b:
    uVar7 = 0x70;
    goto LAB_000223f2;
  case 0x3c:
    uVar7 = 0x70;
    goto LAB_000223f2;
  case 0x3d:
    uVar7 = 0x70;
    goto LAB_000223f2;
  case 0x3e:
    *DAT_0002239c = *DAT_0002239c | *DAT_000223b0;
    uVar7 = 0x44;
    break;
  case 0x3f:
    bVar3 = *DAT_00022388 | *DAT_00022378;
    pbVar5 = DAT_00022388;
    goto LAB_0002227c;
  case 0x40:
    bVar3 = *DAT_000223b4 | *DAT_0002238c;
    goto LAB_0002227c;
  case 0x41:
    bVar3 = *DAT_000223b4 | *DAT_00022390;
    goto LAB_0002227c;
  case 0x42:
    bVar3 = *DAT_000223b4 | *DAT_000223a0;
    goto LAB_0002227c;
  case 0x43:
    bVar3 = *DAT_000223b4 | *DAT_00022398;
LAB_0002227c:
    *pbVar5 = bVar3;
    goto switchD_00021aa4_caseD_49;
  case 0x44:
    *DAT_000223b4 = *DAT_000223b4 | *DAT_00022384;
    uVar7 = 0x45;
    break;
  case 0x45:
    *DAT_000223b4 = *DAT_000223b4 | *DAT_000223b0;
    uVar7 = 0x46;
    break;
  case 0x46:
    uVar7 = 0x47;
    goto LAB_000222a2;
  case 0x47:
    *DAT_000223b8 = *DAT_000223b8 | *DAT_000223a8;
    pbVar5 = DAT_000223a4;
    pbVar6 = DAT_000223a4 + 1;
    *DAT_0002239c = *DAT_0002239c & *DAT_000223a4;
    pbVar4 = DAT_00022388;
    *DAT_00022388 = *DAT_00022388 & *pbVar6;
    *pbVar4 = *pbVar4 & *DAT_000223bc;
    *pbVar4 = *pbVar4 & *DAT_000223c0;
    pbVar4 = DAT_000223b4;
    *DAT_000223b4 = *DAT_000223b4 & pbVar5[-4];
    *pbVar4 = *pbVar4 & *DAT_000223c4;
    *pbVar4 = *pbVar4 & *DAT_000223c8;
    *pbVar4 = *pbVar4 & *DAT_00022380;
    *pbVar4 = *pbVar4 & *DAT_000223a4;
    *pbVar4 = *pbVar4 & *DAT_000223cc;
    pbVar4 = DAT_000223d0;
    uVar7 = 0x48;
    *DAT_000223d0 = *DAT_000223d0 & pbVar5[-4];
    *pbVar4 = *pbVar4 & *DAT_000223c4;
    *pbVar4 = *pbVar4 & *DAT_000223c8;
    *pbVar4 = *pbVar4 & *DAT_00022380;
    *pbVar4 = *pbVar4 & *DAT_000223a4;
    *pbVar4 = *pbVar4 & *DAT_000223cc;
    *pbVar4 = *pbVar4 & *DAT_000223bc;
    break;
  case 0x48:
  case 0x71:
  case 0x72:
  case 0x74:
    return 0xffffffff;
  default:
    goto switchD_00021aa4_caseD_49;
  case 0x4a:
    if (*DAT_000224fc == 0) {
      return 0xffffffff;
    }
    goto switchD_00021aa4_caseD_49;
  case 0x54:
    *DAT_00021d20 = *DAT_00021d20 | *DAT_00021d48;
    pbVar4 = DAT_00021d4c;
    *DAT_00021d4c = *DAT_00021d4c & *DAT_00021d58;
    *pbVar4 = *pbVar4 | *DAT_00021d3c;
    *pbVar4 = *pbVar4 | *DAT_00021d30;
    uVar7 = 0x55;
    goto LAB_000222a2;
  case 0x66:
    uVar7 = 0x28;
LAB_000222a2:
    (*DAT_000223ac)(uVar7);
    goto switchD_00021aa4_caseD_49;
  case 0x6a:
    *DAT_00022500 = *DAT_00022500 | *DAT_00022504;
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x73:
    uVar7 = 0x4f;
LAB_000223f2:
    (*DAT_00022508)(uVar7);
    goto switchD_00021aa4_caseD_49;
  }
  (*DAT_000223ac)(uVar7);
switchD_00021aa4_caseD_49:
  if (iStack20 != *(char *)(iVar1 + 1)) {
    (*DAT_0002250c)();
    (*DAT_00022518)(param_1,DAT_00022514,PTR_LAB_00022510,0);
    (*DAT_0002251c)(iStack20);
    (*DAT_00022520)(param_1);
    *(undefined2 *)(iVar1 + 0x10) = *(undefined2 *)(DAT_000224f6 + iVar1);
    *(undefined2 *)(iVar1 + 0x14) = *(undefined2 *)(DAT_000224f8 + iVar1);
  }
  if (iStack24 != *(char *)(iVar1 + 2)) {
    (*DAT_0002250c)();
    (*DAT_00022518)(param_1,DAT_00022514,PTR_LAB_00022510,0);
    (*DAT_00022524)(iStack24);
    (*DAT_00022520)(param_1);
  }
  if (local_1c != *(char *)(iVar1 + 3)) {
    (*DAT_0002250c)();
    (*DAT_00022518)(param_1,DAT_00022514,PTR_LAB_00022510,0);
    (*DAT_00022528)(local_1c);
    (*DAT_00022520)(param_1);
  }
  return 0;
}



void FUN_00022c94(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_00022d00;
  puVar1 = DAT_00022cfc;
  *DAT_00022cfc = PTR_DAT_00022d00;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = puVar2;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = puVar2;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  return;
}



void FUN_0002315e(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_00023200;
  iVar2 = (short)((*DAT_000231f4 * 2 + *DAT_000231f8) * 0x70) + DAT_000231fc;
  *(undefined4 *)(iVar2 + 0x1c) = *DAT_00023200;
  *(undefined4 *)(iVar2 + 0x20) = puVar1[1];
  *(undefined4 *)(iVar2 + 0x24) = puVar1[2];
  *(undefined4 *)(iVar2 + 0x28) = puVar1[3];
  *(undefined4 *)(iVar2 + 0x2c) = puVar1[4];
  *(undefined4 *)(iVar2 + 0x30) = puVar1[5];
  *(undefined4 *)(iVar2 + 0x44) = puVar1[9];
  *(undefined4 *)(iVar2 + 0x48) = puVar1[10];
  return;
}



void FUN_0002358e(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = DAT_00023658;
  param_1[4] = DAT_00023658;
  param_1[5] = uVar1;
  param_1[6] = 0;
  param_1[7] = DAT_00023658;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = DAT_00023658;
  param_1[0xc] = 0;
  param_1[0xd] = DAT_0002365c;
  param_1[0xe] = DAT_00023660;
  param_1[0xf] = DAT_0002365c;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  uVar1 = DAT_00023658;
  param_1[0x13] = DAT_00023658;
  param_1[0x14] = uVar1;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = DAT_00023658;
  return;
}



void FUN_00023632(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_00023658;
  while (bVar1 = param_3 != 0, param_3 = param_3 + -1, bVar1) {
    *param_1 = uVar2;
    *param_2 = uVar2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



void FUN_00023668(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  pcVar7 = DAT_000237cc;
  if (param_2 - param_1 != 0) {
    iVar14 = (short)((*DAT_000237cc * 2 + *DAT_000237d0) * 0x70) + DAT_000237d4;
    sVar1 = *(short *)(iVar14 + 0x34);
    sVar2 = *(short *)(iVar14 + 0x3c);
    iVar11 = *(int *)(DAT_000237d8 + 0x18);
    sVar3 = *(short *)(iVar14 + 0x36);
    sVar4 = *(short *)(iVar14 + 0x3e);
    iVar8 = *(int *)(DAT_000237d8 + 0x1c);
    sVar5 = *(short *)(iVar14 + 0x38);
    iVar9 = *(int *)(DAT_000237d8 + 0x20);
    sVar6 = *(short *)(iVar14 + 0x40);
    iVar10 = *(int *)(DAT_000237d8 + 0x2c);
    if (DAT_000237cc[1] == '\0') {
      iVar13 = *(int *)(DAT_000237d8 + 0x1c);
      iVar12 = *(int *)(DAT_000237d8 + 0x18) * (int)*(short *)(iVar14 + 0x34) +
               iVar13 * (*(short *)(iVar14 + 0x36) - param_1);
      iVar14 = *(short *)(iVar14 + 0x38) * 0x10000 - *(int *)(iVar14 + 8);
    }
    else {
      iVar13 = *(int *)(DAT_000237d8 + 0x18);
      iVar12 = iVar13 * (*(short *)(iVar14 + 0x34) - param_1) +
               *(int *)(DAT_000237d8 + 0x1c) * (int)*(short *)(iVar14 + 0x36);
      iVar14 = *(short *)(iVar14 + 0x38) * 0x10000 - *(int *)(iVar14 + 8);
    }
    iVar14 = (*DAT_000237dc)(*(undefined4 *)(DAT_000237d8 + 0x20),iVar14);
    (*DAT_000237e8)(iVar11 * ((int)sVar1 - (int)sVar2) + iVar8 * ((int)sVar3 - (int)sVar4) +
                    iVar9 * ((int)sVar5 - (int)sVar6) + sVar6 * 0x10000 + iVar10,iVar12 + iVar14,
                    iVar13,param_2 - param_1,
                    *(undefined4 *)((*pcVar7 * 2 + *DAT_000237e4) * 4 + DAT_000237e0));
  }
  return;
}



void FUN_00024572(void)

{
  undefined4 *unaff_r14;
  
  *(uint *)(unaff_r14[1] + -4) = *(uint *)(unaff_r14[1] + -4) & 0xfffffffd;
  *unaff_r14 = 0;
  if (((unaff_r14[1] == 0) || ((*(uint *)(unaff_r14[1] + -4) & 1) != 0)) &&
     (unaff_r14 != (undefined4 *)0x0)) {
    unaff_r14[-1] = unaff_r14[-1] | 1;
  }
  return;
}



void FUN_0002466e(void)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  
  (*DAT_000246cc)();
  pcVar1 = DAT_000246d0;
  pcVar2 = (char *)(int)DAT_000246aa;
  uVar3 = (uint)DAT_000246ac;
  while ((uVar3 & (int)*pcVar2 & 0xffU) == 0) {
    (*pcVar1)(0x7f);
  }
                    // WARNING: Could not recover jumptable at 0x000246a2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_000246d8)(0,0,0,DAT_000246d4);
  return;
}



void FUN_00024c22(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_0002466e();
  uVar2 = DAT_00024cd8;
  iVar1 = DAT_00024cd4;
  *(uint *)(DAT_00024cd4 + 0x10) =
       (param_1[1] & DAT_00024cd8) >> 8 | (*param_1 & DAT_00024cd8) >> 0x10 |
       param_1[2] & DAT_00024cd8;
  *(uint *)(iVar1 + 0x14) =
       (param_1[3] & uVar2) >> 0x10 | (param_1[4] & uVar2) >> 8 | param_1[5] & uVar2;
  *(uint *)(iVar1 + 0x18) =
       (param_1[6] & uVar2) >> 0x10 | (param_1[7] & uVar2) >> 8 | param_1[8] & uVar2;
  return;
}



void FUN_00024e42(byte *param_1,undefined *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  
  iVar6 = 2;
  do {
    pbVar8 = param_2 + 1;
    uVar7 = (int)(char)*param_1 & 0xf;
    *param_2 = (char)uVar7;
    param_1 = param_1 + 1;
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      bVar1 = *param_1;
      pbVar4 = param_1 + 1;
      bVar3 = (byte)(((int)(char)bVar1 & 0xffU) >> 4);
      *pbVar8 = bVar3;
      pbVar2 = pbVar8 + 2;
      if (bVar3 < 0xf) {
        uVar5 = (int)(char)bVar1 & 0xf;
        if (uVar5 == 0) {
          uVar5 = 0xf;
          pbVar4 = param_1 + 2;
        }
        pbVar8[1] = (byte)uVar5;
        do {
          bVar1 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          uVar5 = uVar5 - 1;
          *pbVar2 = bVar1;
          pbVar2 = pbVar2 + 1;
        } while (uVar5 != 0);
      }
      pbVar8 = pbVar8 + 0x11;
      param_1 = pbVar4;
    }
    iVar6 = iVar6 + -1;
    param_2 = param_2 + DAT_00024e9c;
  } while (iVar6 != 0);
  return;
}



int FUN_00024eac(int param_1,short param_2)

{
  if (99 < param_2) {
    return *(int *)(*(int *)(param_1 + DAT_00024ff4) + 4) + (param_2 + -100) * 4;
  }
  return param_2 * 4 + DAT_00025008;
}



int FUN_00024ece(int param_1,short param_2)

{
  if (99 < param_2) {
    return *(int *)(*(int *)(param_1 + DAT_00024ff6) + 4) + (param_2 + -100) * 4;
  }
  return param_2 * 4 + DAT_00025008;
}



int FUN_00024ef0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  sVar1 = DAT_00024ff8;
  iVar2 = (int)DAT_00024ff8;
  iVar3 = 8;
  do {
    iVar3 = iVar3 + -1;
    *(short *)(param_1 + 2) = sVar1;
    param_1 = param_1 + 6;
  } while (iVar3 != 0);
  return iVar2;
}



int FUN_00024f28(undefined2 *param_1,undefined2 *param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 8;
  do {
    iVar2 = iVar2 + -1;
    *param_2 = *param_1;
    sVar1 = param_1[1];
    param_1 = param_1 + 3;
    param_2[1] = sVar1;
    param_2 = param_2 + 3;
  } while (iVar2 != 0);
  return (int)sVar1;
}



void FUN_00024f3e(undefined2 *param_1)

{
  int iVar1;
  
  param_1[0x18] = 0xffff;
  *(undefined *)(param_1 + 0x19) = 1;
  *(undefined *)((int)param_1 + 0x33) = 0;
  iVar1 = 8;
  FUN_000256a8();
  do {
    *param_1 = 0xffff;
    param_1[1] = 0x80;
    iVar1 = iVar1 + -1;
    param_1 = param_1 + 3;
  } while (iVar1 != 0);
  return;
}



void FUN_00024f5a(int param_1)

{
  int iVar1;
  
  iVar1 = 8;
  param_1 = param_1 + 0x10;
  do {
    FUN_00024f3e(param_1);
    iVar1 = iVar1 + -1;
    param_1 = param_1 + 0x34;
  } while (iVar1 != 0);
  return;
}



void FUN_00024f8c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)DAT_00024ffe;
  *(undefined2 *)(param_1 + iVar2) = 0;
  *(undefined2 *)(param_1 + iVar2 + 2) = 0;
  FUN_00024f5a(param_1);
  uVar1 = DAT_0002500c;
  iVar2 = (int)DAT_00024ffa;
  *(undefined2 *)(param_1 + iVar2) = 0;
  *(undefined2 *)(param_1 + iVar2 + 2) = 0;
  *(undefined2 *)(param_1 + DAT_00024ffc) = 0;
  iVar3 = (int)DAT_00024ff6;
  *(undefined4 *)(param_1 + iVar3) = 0;
  iVar2 = DAT_00025010;
  *(undefined4 *)(param_1 + iVar3 + -4) = 0;
  *(undefined *)(param_1 + DAT_00025000) = 0;
  *(undefined2 *)(param_1 + DAT_00025002) = 0;
  iVar3 = (int)DAT_00025004;
  *(undefined *)(param_1 + iVar3) = 0xff;
  *(undefined *)(param_1 + iVar3 + 1) = 0;
  *(undefined *)(param_1 + iVar3 + 4) = 0;
  *(undefined *)(param_1 + iVar3 + 5) = 0;
  *(undefined *)(param_1 + iVar3 + 6) = 0;
  *(undefined *)(param_1 + iVar3 + 0x38) = 0;
  *(undefined *)(param_1 + iVar3 + 0x37) = 0;
  *(undefined4 *)(iVar2 + iVar3 + -6) = uVar1;
  *(undefined2 *)(iVar2 + iVar3 + -2) = 100;
  return;
}



void FUN_00025024(int param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(*(short *)(param_1 + DAT_000250ce) * 4 + DAT_000250e0);
  *puVar2 = param_2[3];
  puVar2[-1] = param_2[2];
  puVar2[-2] = param_2[1];
  puVar2[-3] = *param_2;
  sVar1 = *(short *)(param_1 + DAT_000250ce) + 1;
  *(short *)(param_1 + DAT_000250ce) = sVar1;
  if (7 < sVar1) {
    *(undefined2 *)(param_1 + DAT_000250ce) = 0;
  }
  *(undefined *)(param_1 + DAT_000250d0) = 1;
  return;
}



void FUN_0002506a(int param_1,undefined4 param_2)

{
  int iVar1;
  short sVar2;
  
  iVar1 = (int)DAT_000250ce;
  *(undefined4 *)(*(int *)(*(short *)(param_1 + DAT_000250ce) * 4 + DAT_000250e0) + -0xc) = param_2;
  sVar2 = *(short *)(param_1 + iVar1) + 1;
  *(short *)(param_1 + iVar1) = sVar2;
  if (7 < sVar2) {
    *(undefined2 *)(param_1 + DAT_000250ce) = 0;
  }
  *(undefined *)(param_1 + DAT_000250d0) = 1;
  return;
}



int FUN_00025096(int param_1)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  uVar2 = DAT_000250d4;
  iVar3 = (int)*(char *)(*(int *)(param_1 + DAT_000250d2) + 0xc);
  puVar4 = DAT_000250e4;
  iVar5 = iVar3;
  while (bVar1 = iVar5 != 0, iVar5 = iVar5 + -1, bVar1) {
    *puVar4 = (char)uVar2;
    puVar4 = puVar4 + 8;
  }
  return iVar3;
}



void FUN_00025188(short param_1,undefined param_2,undefined param_3,undefined param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  
  iVar2 = DAT_000251d0;
  if ((-1 < param_1) && (*(short *)(DAT_000251d0 + DAT_000251ca) < 0x20)) {
    sVar1 = *(short *)(DAT_000251d0 + DAT_000251ca);
    iVar3 = (int)DAT_000251cc;
    *(short *)(DAT_000251d0 + DAT_000251ca) = sVar1 + 1;
    psVar4 = (short *)(iVar2 + iVar3 + (sVar1 * 6 & 0xffU));
    *psVar4 = param_1;
    *(undefined *)(psVar4 + 1) = param_2;
    *(undefined *)((int)psVar4 + 3) = param_3;
    *(undefined *)(psVar4 + 2) = param_4;
  }
  return;
}



void FUN_00025208(int param_1,int param_2,undefined param_3,short param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)(short)(param_4 * 0x34) + param_1 + 0x10;
  iVar2 = (int)*(short *)(iVar3 + 0x30);
  iVar1 = (int)DAT_00025338;
  *(undefined4 *)(param_1 + iVar1 + 4) = *(undefined4 *)(param_1 + iVar1);
  *(int *)(param_1 + iVar1) = param_2 * 0x10 + DAT_00025340;
  *(undefined *)(iVar3 + 0x33) = 0;
  *(short *)(iVar3 + 0x30) = (short)param_2;
  *(undefined *)(iVar3 + 0x32) = param_3;
  FUN_00024ef0(iVar3);
  *(undefined2 *)(param_1 + DAT_0002533a) = 0;
  if ((iVar2 < 0) ||
     (*(short *)(*(int *)(param_1 + DAT_00025338) + 8) != *(short *)(DAT_00025344 + iVar2 * 0x10)))
  {
    *(undefined *)(param_1 + DAT_0002533c) = 0;
  }
  else if (iVar2 == param_2) {
    *(undefined *)(param_1 + DAT_0002533c) = 8;
  }
  else {
    *(undefined *)(param_1 + DAT_0002533c) = 2;
  }
  *(undefined *)(param_1 + DAT_0002533e) = 0;
  return;
}



void FUN_0002529a(int param_1,int param_2,undefined param_3,short param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)(short)(param_4 * 0x34) + param_1 + 0x10;
  if (*(char *)(*(int *)(param_1 + DAT_00025338) + 0xe) != '\0') {
    *(short *)(iVar2 + -4) =
         *(short *)(iVar2 + -4) + (short)*(char *)(*(int *)(DAT_00025338 + param_1) + 0xe);
  }
  iVar1 = (int)DAT_00025338;
  *(undefined4 *)(param_1 + iVar1 + 4) = *(undefined4 *)(param_1 + iVar1);
  *(int *)(param_1 + iVar1) = param_2 * 0x10 + DAT_00025340;
  *(undefined *)(iVar2 + -1) = 0;
  *(short *)(iVar2 + 0x30) = (short)param_2;
  *(undefined *)(iVar2 + 0x32) = param_3;
  FUN_00024ef0(iVar2 + -0x34);
  FUN_00024f28(iVar2 + -0x34,iVar2);
  *(undefined2 *)(param_1 + DAT_0002533a) = 0;
  if (*(short *)(iVar2 + 0x30) == *(short *)(iVar2 + -4)) {
    *(undefined *)(param_1 + DAT_0002533c) = 8;
  }
  else if (*(short *)(*(int *)(param_1 + DAT_00025338) + 8) ==
           *(short *)(DAT_00025344 + *(short *)(iVar2 + -4) * 0x10)) {
    *(undefined *)(param_1 + DAT_0002548e) = 2;
  }
  else {
    *(undefined *)(param_1 + DAT_0002533c) = 0;
  }
  *(undefined *)(param_1 + DAT_00025490) = 0;
  return;
}



void FUN_0002535e(int param_1,short param_2,undefined param_3)

{
  int iVar1;
  int iVar2;
  undefined uVar3;
  int iVar4;
  
  iVar1 = DAT_00025498;
  iVar4 = (int)(short)(param_2 * 0x34) + param_1 + 0x10;
  *(undefined4 *)(param_1 + DAT_00025492 + 4) = *(undefined4 *)(param_1 + DAT_00025492);
  iVar2 = (int)DAT_00025492;
  *(int *)(param_1 + iVar2) = *(short *)(iVar4 + 0x30) * 0x10 + iVar1;
  *(undefined2 *)(param_1 + iVar2 + 10) = 1;
  if (*(short *)(iVar4 + 0x30) == *(short *)(iVar4 + 100)) {
    uVar3 = 8;
  }
  else {
    if (*(short *)(*(int *)(param_1 + DAT_00025492) + 8) ==
        *(short *)(iVar1 + *(short *)(iVar4 + 100) * 0x10 + 8)) {
      *(undefined *)(param_1 + DAT_0002548e) = 2;
      goto LAB_000253c6;
    }
    uVar3 = 0;
  }
  *(undefined *)(param_1 + DAT_0002548e) = uVar3;
LAB_000253c6:
  *(undefined *)(param_1 + DAT_00025490) = param_3;
  *(undefined *)(iVar4 + 0x67) = 0;
  *(undefined2 *)(iVar4 + 100) = 0xffff;
  return;
}



int FUN_000256a8(void)

{
  return (int)*(short *)((short)(*(short *)(DAT_00025710 + DAT_0002570a) * 0x34) + DAT_00025710 +
                        0x40);
}



undefined4 FUN_00025718(int param_1)

{
  undefined4 uVar1;
  undefined2 local_14;
  undefined2 uStack18;
  undefined2 uStack16;
  undefined2 uStack14;
  
  local_14 = (undefined2)(param_1 << 8);
  uStack14 = 0;
  uStack16 = 0;
  uStack18 = 0;
  FUN_00025ff4(&local_14);
  uStack18 = DAT_00025782;
  FUN_00025ff4(&local_14);
  uStack18 = DAT_00025784;
  FUN_00025ff4(&local_14);
  uStack18 = DAT_00025786;
  FUN_00025ff4(&local_14);
  uStack18 = DAT_00025788;
  FUN_00025ff4(&local_14);
  uStack18 = DAT_0002578a;
  FUN_00025ff4(&local_14);
  uStack18 = DAT_0002578c;
  FUN_00025ff4(&local_14);
  uStack18 = DAT_0002578e;
  uVar1 = FUN_00025ff4(&local_14);
  return uVar1;
}



void FUN_00025790(short *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  
  pcVar1 = DAT_000258c0;
  iVar3 = (int)DAT_000258ba;
  piVar5 = **(int ***)((int)param_1 + iVar3 + -10);
  psVar7 = (short *)((int)param_1 +
                    (short)((*(short *)((int)param_1 + iVar3 + -2) +
                            *(short *)((int)param_1 + iVar3)) * 0x34) + 0x10);
  do {
    iVar3 = (*pcVar1)(*piVar5,piVar5[1]);
    if (iVar3 == 0) {
      *(byte *)((int)param_1 + (int)DAT_000258bc) =
           *(byte *)((int)param_1 + (int)DAT_000258bc) | (byte)piVar5[2];
    }
    uVar2 = DAT_000258c4;
    piVar5 = piVar5 + 3;
  } while (*piVar5 != 0);
  iVar3 = 8;
  psVar6 = param_1;
  do {
    if (((uVar2 & (int)*psVar6 & 0xffffU) != 0) && (-1 < *psVar7)) {
      FUN_00024ece(param_1,(int)*psVar7);
      uVar4 = (*DAT_000258c8)();
      if (((int)*(char *)((int)DAT_000258bc + (int)param_1) & uVar4) != 0) {
        FUN_00025188((int)*psVar7,2,0);
      }
    }
    psVar8 = psVar7 + 3;
    if (((uVar2 & (int)psVar6[1] & 0xffffU) != 0) && (-1 < *psVar8)) {
      FUN_00024ece(param_1,(int)*psVar8);
      uVar4 = (*DAT_000258c8)();
      if (((int)*(char *)((int)DAT_000258bc + (int)param_1) & uVar4) != 0) {
        FUN_00025188((int)*psVar8,2,0);
      }
    }
    psVar8 = psVar7 + 6;
    if (((uVar2 & (int)psVar6[2] & 0xffffU) != 0) && (-1 < *psVar8)) {
      FUN_00024ece(param_1,(int)*psVar8);
      uVar4 = (*DAT_000258c8)();
      if (((int)*(char *)((int)DAT_000258bc + (int)param_1) & uVar4) != 0) {
        FUN_00025188((int)*psVar8,2,0);
      }
    }
    psVar8 = psVar7 + 9;
    if (((uVar2 & (int)psVar6[3] & 0xffffU) != 0) && (-1 < *psVar8)) {
      FUN_00024ece(param_1,(int)*psVar8);
      uVar4 = (*DAT_000258c8)();
      if (((int)*(char *)((int)DAT_000258bc + (int)param_1) & uVar4) != 0) {
        FUN_00025188((int)*psVar8,2,0);
      }
    }
    psVar6 = psVar6 + 4;
    iVar3 = iVar3 + -4;
    psVar7 = psVar7 + 0xc;
  } while (iVar3 != 0);
  return;
}



undefined4 FUN_000258ec(short *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  
  uVar1 = DAT_000259c8;
  iVar3 = 8;
  psVar5 = (short *)((int)param_1 +
                    (short)((*(short *)((int)param_1 + DAT_000259c0 + -2) +
                            *(short *)((int)param_1 + (int)DAT_000259c0)) * 0x34) + 0x10);
  psVar4 = param_1;
  do {
    if (((uVar1 & (int)*psVar4 & 0xffffU) != 0) && (-1 < *psVar5)) {
      FUN_00024ece(param_1,(int)*psVar5);
      uVar2 = (*DAT_000259cc)();
      if (((int)*(char *)((int)DAT_000259c2 + (int)param_1) & uVar2) != 0) {
        return 0;
      }
    }
    psVar4 = psVar4 + 1;
    iVar3 = iVar3 + -1;
    psVar5 = psVar5 + 3;
  } while (iVar3 != 0);
  return 1;
}



void FUN_00025962(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  
  iVar3 = 8;
  psVar4 = (short *)((int)(short)(*(short *)(param_1 + DAT_000259c4) * 0x34) + param_1 + 0x10);
  do {
    if (((-1 < *psVar4) &&
        (iVar1 = FUN_00024eac(param_1,(int)*psVar4), *(char *)(iVar1 + 2) != '\0')) &&
       (uVar2 = (*DAT_000259cc)(), ((int)*(char *)(DAT_000259c2 + param_1) & uVar2) != 0)) {
      FUN_00025188((int)*psVar4,1,0x7f,0);
    }
    iVar3 = iVar3 + -1;
    psVar4 = psVar4 + 3;
  } while (iVar3 != 0);
  return;
}



int FUN_000259d0(int param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_28;
  undefined4 uStack36;
  undefined4 uStack32;
  undefined4 uStack28;
  
  iVar5 = DAT_00025bb0;
  pcVar3 = DAT_00025ab8;
  iVar4 = (int)*(char *)(param_1 + DAT_00025a9e);
  if (iVar4 == 0) {
    local_28 = DAT_00025aa4;
    uStack36 = DAT_00025aa8;
    uStack28 = 0;
    uStack32 = 0;
    FUN_00025024(param_1,&local_28);
LAB_00025a76:
    iVar5 = (int)DAT_00025a9e;
    *(char *)(param_1 + iVar5) = *(char *)(param_1 + iVar5) + '\x01';
    return iVar5;
  }
  if (iVar4 == 1) {
    FUN_0002506a(param_1,DAT_00025aac | (int)*(short *)(*(int *)(param_1 + DAT_00025aa0) + 8) << 8);
    *(char *)(param_1 + DAT_00025a9e) = *(char *)(param_1 + DAT_00025a9e) + '\x01';
  }
  else if (iVar4 != 2) {
    if (iVar4 == 3) {
      iVar5 = FUN_000258ec(param_1);
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = (int)DAT_00025a9e;
      *(char *)(param_1 + iVar5) = *(char *)(param_1 + iVar5) + '\x01';
      return iVar5;
    }
    if (iVar4 == 4) {
      return 4;
    }
    if (iVar4 != 5) {
      if (iVar4 != 6) {
        if (iVar4 != 7) {
          if (iVar4 != 8) {
            return iVar4;
          }
          cVar1 = *(char *)((short)(*(short *)(param_1 + DAT_00025b9a) * 0x34) + param_1 + 0x42);
          if ('\x01' < cVar1) {
            *(char *)(DAT_00025bb0 + 1) = cVar1;
            *(undefined *)(iVar5 + 2) = 0;
            *(undefined *)(iVar5 + 4) = 0xf;
          }
          iVar5 = (int)DAT_00025b98;
          *(undefined *)(param_1 + iVar5) = 0xff;
          *(undefined *)(param_1 + iVar5 + 5) = 0;
          *(undefined2 *)(param_1 + DAT_00025b9c) = 0;
          if (*(char *)(param_1 + DAT_00025b9e) != '\0') {
            FUN_00025962(param_1);
            *(undefined *)(param_1 + DAT_00025b9e) = 0;
          }
          iVar5 = (int)DAT_00025ba0;
          *(undefined *)(param_1 + iVar5) = 0;
          return iVar5;
        }
        iVar5 = (int)*(char *)(param_1 + DAT_00025aa2);
        bVar2 = true;
        if (iVar5 != 0) {
          piVar6 = **(int ***)(param_1 + DAT_00025aa0);
          do {
            iVar5 = (*pcVar3)(*piVar6);
            if (iVar5 == 0) {
              bVar2 = false;
              break;
            }
            piVar6 = piVar6 + 3;
            iVar5 = *piVar6;
          } while (iVar5 != 0);
        }
        if (!bVar2) {
          return iVar5;
        }
        *(char *)(param_1 + DAT_00025b98) = *(char *)(param_1 + DAT_00025b98) + '\x01';
        iVar5 = FUN_00025096(param_1);
        return iVar5;
      }
      FUN_0002506a(param_1,DAT_00025ab4);
      goto LAB_00025a76;
    }
    FUN_0002506a(param_1,DAT_00025ab0);
    goto LAB_00025a66;
  }
  FUN_00025790(param_1);
LAB_00025a66:
  iVar5 = (int)DAT_00025a9e;
  *(char *)(param_1 + iVar5) = *(char *)(param_1 + iVar5) + '\x01';
  return iVar5;
}



void FUN_00025bf4(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_00025ce0;
  puVar2 = DAT_00025ce0 + 1;
  *param_1 = *DAT_00025ce0;
  param_1[1] = *puVar2;
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00025c0e(int param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  
  FUN_00025bf4();
  uVar1 = DAT_00025ce8;
  if (*_LAB_00025ce4 < '\0') {
    puVar2 = (undefined2 *)
             ((int)(short)((*(short *)(param_1 + DAT_00025cde + -2) +
                           *(short *)(param_1 + DAT_00025cde)) * 0x34) + param_1 + 0x10);
    iVar5 = 0;
    puVar3 = puVar2;
    puVar4 = puVar2;
    do {
      if ((uVar1 & (int)*(short *)(param_1 + iVar5 * 2) & 0xffffU) == 0) {
        if (*(char *)(puVar2 + 2) == '\0') {
          *puVar4 = 0xffff;
        }
      }
      else {
        *(undefined *)(puVar3 + 2) = 0;
      }
      if ((uVar1 & (int)*(short *)(param_1 + (iVar5 + 1) * 2) & 0xffffU) == 0) {
        if (*(char *)(puVar2 + 5) == '\0') {
          puVar4[3] = 0xffff;
        }
      }
      else {
        *(undefined *)(puVar3 + 5) = 0;
      }
      if ((uVar1 & (int)*(short *)(param_1 + (iVar5 + 2) * 2) & 0xffffU) == 0) {
        if (*(char *)(puVar2 + 8) == '\0') {
          puVar4[6] = 0xffff;
        }
      }
      else {
        *(undefined *)(puVar3 + 8) = 0;
      }
      if ((uVar1 & (int)*(short *)(param_1 + (iVar5 + 3) * 2) & 0xffffU) == 0) {
        if (*(char *)(puVar2 + 0xb) == '\0') {
          puVar4[9] = 0xffff;
        }
      }
      else {
        *(undefined *)(puVar3 + 0xb) = 0;
      }
      iVar5 = iVar5 + 4;
      puVar3 = puVar3 + 0xc;
      puVar4 = puVar4 + 0xc;
      puVar2 = puVar2 + 0xc;
    } while (iVar5 < 8);
  }
  return;
}



void FUN_00025d08(int param_1)

{
  char cVar1;
  undefined *puVar2;
  byte bVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int iStack52;
  short sStack48;
  short sStack46;
  ushort uStack44;
  undefined2 uStack42;
  undefined4 uStack40;
  undefined4 uStack36;
  
  iStack52 = 0;
  iVar5 = (int)(short)((*(short *)(param_1 + DAT_00025e1e + -2) + *(short *)(param_1 + DAT_00025e1e)
                       ) * 0x34) + param_1 + 0x10;
  do {
    if (*(short *)(param_1 + DAT_00025f2e) <= iStack52) {
      *(undefined2 *)(param_1 + DAT_00025f2e) = 0;
      return;
    }
    psVar7 = (short *)((iStack52 * 6 & 0xffU) + DAT_00025e20 + param_1);
    if (*(char *)(psVar7 + 1) == '\x01') {
      if ((*(char *)(param_1 + DAT_00025e22) < '\0') && (*(char *)(param_1 + DAT_00025e24) == '\0'))
      {
        puVar2 = (undefined *)FUN_00024eac(param_1,(int)*psVar7);
        cVar1 = puVar2[3];
        iVar6 = (int)cVar1;
        if (((int)*(char *)((int)psVar7 + 3) & 0xffU) != (int)*(short *)(iVar6 * 6 + iVar5 + 2)) {
          sStack48 = 0x500;
          sStack46 = CONCAT11(cVar1,*(undefined *)((int)psVar7 + 3));
          uStack44 = 0;
          uStack42 = 0;
          uStack40 = 0;
          uStack36 = 0;
          FUN_00025ff4(&sStack48);
          *(ushort *)(iVar6 * 6 + iVar5 + 2) = (short)*(char *)((int)psVar7 + 3) & 0xff;
        }
        sStack48 = 0x100;
        sStack46 = CONCAT11(cVar1,*puVar2);
        uStack44 = (ushort)(byte)puVar2[1] << 8;
        uStack42 = 0;
        uStack40 = 0;
        uStack36 = 0;
        FUN_00025ff4(&sStack48);
        psVar4 = (short *)(iVar6 * 6 + iVar5);
        *psVar4 = *psVar7;
        *(undefined *)(psVar4 + 2) = 1;
      }
    }
    else {
      bVar3 = FUN_0002605c((int)*psVar7);
      iVar6 = (int)(char)bVar3;
      if (iVar6 != -1) {
        cVar1 = *(char *)(psVar7 + 1);
        if (((cVar1 == '\x02') || (cVar1 == '\x03')) || (cVar1 == '\x04')) {
          sStack48 = (ushort)*(byte *)(psVar7 + 1) << 8;
          sStack46 = (ushort)bVar3 << 8;
          uStack44 = 0;
LAB_00025ed8:
          uStack42 = 0;
          uStack36 = 0;
          uStack40 = 0;
          FUN_00025ff4(&sStack48);
        }
        else if (cVar1 == '\x05') {
          sStack48 = 0x500;
          sStack46 = CONCAT11(bVar3,*(undefined *)((int)psVar7 + 3));
          uStack44 = (ushort)*(byte *)(psVar7 + 2) << 8;
          uStack42 = 0;
          uStack40 = 0;
          uStack36 = 0;
          FUN_00025ff4(&sStack48);
          *(ushort *)(iVar6 * 6 + iVar5 + 2) = (short)*(char *)((int)psVar7 + 3) & 0xff;
        }
        else if (cVar1 == '\a') {
          sStack48 = DAT_00025f2c;
          sStack46 = (short)(iVar6 << 8);
          uStack44 = (short)*(char *)((int)psVar7 + 3) & 0xff;
          goto LAB_00025ed8;
        }
      }
    }
    iStack52 = iStack52 + 1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00025f0c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)*(char *)(param_1 + 0xd);
  if (iVar1 == 0) {
    uVar3 = (uint)*_LAB_00025f30;
    if (8 < uVar3) {
      uVar3 = 0;
    }
    return *(int *)(DAT_00026044 + uVar3 * 4);
  }
  if (iVar1 == 1) {
    return DAT_00026048;
  }
  iVar2 = DAT_0002604c;
  if (iVar1 != 2) {
    iVar2 = iVar1;
  }
  return iVar2;
}



void FUN_00025ff4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  iVar1 = DAT_00026058;
  uVar4 = (int)*(short *)(DAT_00026058 + DAT_0002603e) + 1U & 0x3f;
  if (uVar4 == (int)*(short *)(DAT_00026058 + DAT_00026040)) {
    *(ushort *)(DAT_00026040 + DAT_00026058) = *(short *)(DAT_00026058 + DAT_00026040) + 1U & 0x3f;
  }
  iVar2 = (int)DAT_0002603e;
  puVar3 = (undefined4 *)(uVar4 * 0x10 + DAT_00026042 + iVar1);
  *puVar3 = *param_1;
  puVar3[1] = param_1[1];
  puVar3[2] = param_1[2];
  puVar3[3] = param_1[3];
  *(short *)(iVar1 + iVar2) = (short)uVar4;
  return;
}



int FUN_0002605c(short param_1)

{
  int iVar1;
  short *psVar2;
  
  psVar2 = (short *)((int)(short)((*(short *)(DAT_00026194 + DAT_0002618a + -2) +
                                  *(short *)(DAT_00026194 + DAT_0002618a)) * 0x34) +
                    DAT_00026194 + 0x10);
  iVar1 = 0;
  do {
    if (param_1 == *psVar2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    psVar2 = psVar2 + 3;
  } while (iVar1 < 8);
  return -1;
}



int FUN_00026354(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (*DAT_00026450)(param_1,param_1,param_3,param_4,param_1);
  uVar1 = (*DAT_00026454)(uVar1);
  iVar2 = (*DAT_00026458)(uVar1);
  iVar2 = iVar2 + 0x7f;
  if (iVar2 < 0) {
    return 0;
  }
  if (0x7f < iVar2) {
    return 0x7f;
  }
  return iVar2;
}



void FUN_00026696(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(int)DAT_000266c8;
  puVar1[3] = puVar1;
  *puVar1 = *(undefined4 *)(param_1 + 8);
  puVar1[4] = 1;
  puVar1[5] = 0;
  FUN_000266ca(param_1,param_2,*(undefined4 *)(param_3 + 0x1c));
  FUN_000266ca();
  FUN_000266ca();
  FUN_000266d6();
  puVar1[3] = 0;
  return;
}



void FUN_000266ca(int *param_1,uint *param_2,int param_3,int *param_4)

{
  longlong lVar1;
  int in_r2;
  int iVar2;
  int unaff_r14;
  
  *param_4 = param_1[5];
  param_4[4] = 1;
  param_4[5] = 0;
  lVar1 = (longlong)
          (int)((int)((ulonglong)((longlong)*param_1 * (longlong)in_r2) >> 0x20) << 0x10 |
               (uint)((longlong)*param_1 * (longlong)in_r2) >> 0x10) * (longlong)unaff_r14;
  iVar2 = param_1[1];
  *param_2 = (int)((ulonglong)lVar1 >> 0x20) << 0x10 | (uint)lVar1 >> 0x10;
  lVar1 = (longlong)
          (int)((int)((ulonglong)((longlong)iVar2 * (longlong)in_r2) >> 0x20) << 0x10 |
               (uint)((longlong)iVar2 * (longlong)in_r2) >> 0x10) * (longlong)param_3;
  param_2[1] = (int)((ulonglong)lVar1 >> 0x20) << 0x10 | (uint)lVar1 >> 0x10;
  return;
}



void FUN_000266d6(int *param_1,uint *param_2,int param_3)

{
  longlong lVar1;
  int in_r2;
  int iVar2;
  int unaff_r14;
  
  lVar1 = (longlong)
          (int)((int)((ulonglong)((longlong)*param_1 * (longlong)in_r2) >> 0x20) << 0x10 |
               (uint)((longlong)*param_1 * (longlong)in_r2) >> 0x10) * (longlong)unaff_r14;
  iVar2 = param_1[1];
  *param_2 = (int)((ulonglong)lVar1 >> 0x20) << 0x10 | (uint)lVar1 >> 0x10;
  lVar1 = (longlong)
          (int)((int)((ulonglong)((longlong)iVar2 * (longlong)in_r2) >> 0x20) << 0x10 |
               (uint)((longlong)iVar2 * (longlong)in_r2) >> 0x10) * (longlong)param_3;
  param_2[1] = (int)((ulonglong)lVar1 >> 0x20) << 0x10 | (uint)lVar1 >> 0x10;
  return;
}



undefined4 FUN_000267c6(int param_1,int param_2)

{
  if ((((*(int *)(param_1 + 0x2c) < param_2) && (*(int *)(param_1 + 0x20) < param_2)) &&
      (*(int *)(param_1 + 0x14) < param_2)) && (*(int *)(param_1 + 8) < param_2)) {
    return 0;
  }
  return 2;
}



void FUN_000267e6(int param_1,int param_2)

{
  (*(code *)(*(short *)(&LAB_00026828 +
                       ((((uint)(param_2 < *(int *)(param_1 + 0x28)) << 1 |
                         (uint)(param_2 < *(int *)(param_1 + 0x1c))) << 1 |
                        (uint)(param_2 < *(int *)(param_1 + 0x10))) << 1 |
                       (uint)(param_2 < *(int *)(param_1 + 4))) * 2) + 0x2681a))();
  return;
}



void FUN_000267f0(int *param_1,int param_2)

{
  (*(code *)(*(short *)(&LAB_00026828 +
                       ((((uint)(param_2 < param_1[9]) << 1 | (uint)(param_2 < param_1[6])) << 1 |
                        (uint)(param_2 < param_1[3])) << 1 | (uint)(param_2 < *param_1)) * 2) +
            0x2681a))();
  return;
}



void FUN_00026848(int param_1,int param_2)

{
  (*(code *)(*(short *)(&LAB_00026898 +
                       ((((uint)(*(int *)(param_1 + 0x2c) < param_2) << 1 |
                         (uint)(*(int *)(param_1 + 0x20) < param_2)) << 1 |
                        (uint)(*(int *)(param_1 + 0x14) < param_2)) << 1 |
                       (uint)(*(int *)(param_1 + 8) < param_2)) * 2) + 0x2688a))();
  return;
}



void FUN_00026854(int param_1,int param_2)

{
  (*(code *)(*(short *)(&LAB_00026898 +
                       ((((uint)(*(int *)(param_1 + 0x28) < param_2) << 1 |
                         (uint)(*(int *)(param_1 + 0x1c) < param_2)) << 1 |
                        (uint)(*(int *)(param_1 + 0x10) < param_2)) << 1 |
                       (uint)(*(int *)(param_1 + 4) < param_2)) * 2) + 0x2688a))();
  return;
}



void FUN_00026860(int *param_1,int param_2)

{
  (*(code *)(*(short *)(&LAB_00026898 +
                       ((((uint)(param_1[9] < param_2) << 1 | (uint)(param_1[6] < param_2)) << 1 |
                        (uint)(param_1[3] < param_2)) << 1 | (uint)(*param_1 < param_2)) * 2) +
            0x2688a))();
  return;
}



void FUN_00026af4(ushort param_1,undefined2 *param_2,undefined2 param_3,int param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  
  puVar2 = DAT_00026c28;
  uVar1 = DAT_00026c20;
  puVar3 = (undefined2 *)*DAT_00026c28;
  *puVar3 = DAT_00026c1e;
  puVar3[2] = uVar1 | param_1;
  puVar3[3] = param_3;
  puVar3[6] = *param_2;
  puVar3[7] = -param_2[1];
  puVar3[8] = param_2[2];
  puVar3[9] = -param_2[3];
  puVar3[10] = param_2[4];
  puVar3[0xb] = -param_2[5];
  puVar3[0xc] = param_2[6];
  puVar3[0xd] = -param_2[7];
  iVar4 = puVar2[8];
  *(short *)(iVar4 + 4) = (short)((uint)(param_4 * *DAT_00026c2c) >> 0x10);
  *(short *)(iVar4 + 6) = (short)((uint)puVar3 >> 3);
  puVar2[8] = iVar4 + 8;
  puVar2[7] = puVar2[7] + 1;
  *puVar2 = puVar3 + 0x10;
  puVar2[3] = puVar2[3] + 1;
  return;
}



void FUN_00026b5e(ushort param_1,undefined2 *param_2,undefined2 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  
  puVar1 = DAT_00026c28;
  puVar2 = (undefined2 *)*DAT_00026c28;
  *puVar2 = DAT_00026c22;
  puVar2[2] = DAT_00026c20 | param_1;
  puVar2[3] = param_3;
  puVar2[6] = *param_2;
  puVar2[7] = -param_2[1];
  puVar2[8] = param_2[2];
  puVar2[9] = -param_2[3];
  puVar2[10] = param_2[4];
  puVar2[0xb] = -param_2[5];
  puVar2[0xc] = param_2[6];
  puVar2[0xd] = -param_2[7];
  iVar3 = puVar1[8];
  *(short *)(iVar3 + 4) = (short)((uint)(param_4 * *DAT_00026c2c) >> 0x10);
  *(short *)(iVar3 + 6) = (short)((uint)puVar2 >> 3);
  puVar1[8] = iVar3 + 8;
  puVar1[7] = puVar1[7] + 1;
  *puVar1 = puVar2 + 0x10;
  puVar1[3] = puVar1[3] + 1;
  return;
}



void FUN_00026bc8(ushort param_1,undefined2 *param_2,undefined2 param_3,int param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined2 *puVar4;
  int iVar5;
  
  puVar2 = DAT_00026c28;
  uVar1 = DAT_00026c20;
  puVar4 = (undefined2 *)*DAT_00026c28;
  *puVar4 = DAT_00026c24;
  piVar3 = DAT_00026c2c;
  puVar4[2] = uVar1 | param_1;
  puVar4[3] = param_3;
  puVar4[6] = *param_2;
  puVar4[7] = -param_2[1];
  puVar4[8] = param_2[2];
  puVar4[9] = -param_2[3];
  iVar5 = puVar2[8];
  *(short *)(iVar5 + 4) = (short)((uint)(param_4 * *piVar3) >> 0x10);
  *(short *)(iVar5 + 6) = (short)((uint)puVar4 >> 3);
  puVar2[8] = iVar5 + 8;
  puVar2[7] = puVar2[7] + 1;
  *puVar2 = puVar4 + 0x10;
  puVar2[3] = puVar2[3] + 1;
  return;
}



void FUN_00026c30(int param_1,short param_2,int param_3)

{
  int iVar1;
  undefined2 uStack72;
  undefined2 uStack70;
  undefined2 uStack58;
  undefined auStack56 [2];
  undefined2 uStack54;
  undefined2 uStack50;
  undefined2 uStack14;
  
  iVar1 = (*DAT_00026cf8)(param_1,auStack56,DAT_00026cf4);
  if (iVar1 != 0) {
    if (param_3 < 0) {
      param_3 = *(int *)(param_1 + 8);
    }
    uStack72 = uStack54;
    uStack70 = uStack50;
    uStack58 = uStack14;
    FUN_00026af4((int)DAT_00026cf0,&uStack72,(int)param_2,param_3);
  }
  return;
}



void FUN_00026c90(int param_1,short param_2,int param_3)

{
  int iVar1;
  undefined2 uStack72;
  undefined2 uStack70;
  undefined2 uStack58;
  undefined auStack56 [2];
  undefined2 uStack54;
  undefined2 uStack50;
  undefined2 uStack14;
  
  iVar1 = (*DAT_00026cf8)(param_1,auStack56,DAT_00026cf4);
  if (iVar1 != 0) {
    if (param_3 < 0) {
      param_3 = *(int *)(param_1 + 8);
    }
    uStack72 = uStack54;
    uStack70 = uStack50;
    uStack58 = uStack14;
    FUN_00026b5e((int)DAT_00026cf0,&uStack72,(int)param_2,param_3);
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_00026cfc(undefined4 *param_1,short param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 uStack56;
  undefined2 uStack54;
  undefined2 uStack52;
  undefined2 uStack50;
  undefined4 uStack48;
  undefined4 uStack44;
  undefined4 uStack36;
  undefined4 uStack32;
  
  iVar4 = DAT_00026e30;
  iVar2 = (*DAT_00026e34)(param_1,*(undefined4 *)(DAT_00026e30 + 0x10));
  if ((iVar2 != 2) && (iVar2 = (*DAT_00026e38)(param_1,*(undefined4 *)(iVar4 + 0x14)), iVar2 != 2))
  {
    uVar3 = (*DAT_00026e40)(PTR_DAT_00026e3c,param_1[2]);
    (*DAT_00026e44)(PTR_DAT_00026e3c,param_1[5]);
    pcVar1 = DAT_00026e48;
    uStack48 = (*DAT_00026e48)(*(undefined4 *)(iVar4 + 0x18),*param_1,uVar3);
    uStack44 = (*pcVar1)(*(undefined4 *)(iVar4 + 0x1c),param_1[1],uVar3);
    uVar3 = (*DAT_00026e4c)();
    uStack36 = (*pcVar1)(*(undefined4 *)(iVar4 + 0x18),param_1[3],uVar3);
    uStack32 = (*pcVar1)(*(undefined4 *)(iVar4 + 0x1c),param_1[4],uVar3);
    iVar2 = (*DAT_00026e50)(&uStack48,(int)*(short *)(iVar4 + 0xe));
    if ((iVar2 != 2) &&
       (((iVar2 = (*DAT_00026e54)(&uStack48,(int)*(short *)(iVar4 + 0xc)), iVar2 != 2 &&
         (iVar2 = (*DAT_00026e58)(&uStack48,(int)*(short *)(iVar4 + 8)), iVar2 != 2)) &&
        (iVar4 = (*DAT_00026e5c)(&uStack48,(int)*(short *)(iVar4 + 10)), iVar4 != 2)))) {
      if (param_3 < 0) {
        param_3 = param_1[2];
      }
      uStack56 = uStack48._2_2_;
      uStack54 = uStack44._2_2_;
      uStack52 = uStack36._2_2_;
      uStack50 = uStack32._2_2_;
      FUN_00026bc8((int)DAT_00026e2c,&uStack56,(int)param_2,param_3);
    }
  }
  return;
}



undefined4 FUN_00027580(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort *puVar5;
  undefined auStack64 [2];
  ushort uStack62;
  short sStack58;
  ushort uStack50;
  short sStack46;
  ushort uStack38;
  short sStack34;
  ushort uStack26;
  short sStack22;
  
  iVar1 = DAT_000276bc;
  iVar2 = (*DAT_000276c0)(param_3,auStack64,DAT_000276b4 + DAT_000276bc);
  uVar4 = DAT_000276b8;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    if (param_4 < 0) {
      param_4 = *(int *)(param_3 + 8);
    }
    puVar5 = *(ushort **)(iVar1 + 0x14);
    *puVar5 = *(ushort *)(param_2 + 2) | DAT_000276b6;
    puVar5[2] = *(ushort *)(param_2 + 4) | uVar4;
    if ((*(ushort *)(param_2 + 4) & 0x38) == 8) {
      uVar4 = *(short *)(param_2 + 10) + *(short *)(param_1 + 4);
    }
    else {
      uVar4 = *(ushort *)(param_2 + 10);
    }
    puVar5[3] = uVar4;
    puVar5[4] = *(short *)(param_2 + 6) + *(short *)(param_1 + 4);
    puVar5[5] = *(ushort *)(param_2 + 8);
    puVar5[6] = uStack62;
    puVar5[7] = -sStack58;
    puVar5[8] = uStack50;
    puVar5[9] = -sStack46;
    puVar5[10] = uStack38;
    puVar5[0xb] = -sStack34;
    puVar5[0xc] = uStack26;
    puVar5[0xd] = -sStack22;
    iVar2 = *(int *)(iVar1 + 0x34);
    *(short *)(iVar2 + 4) = (short)((uint)(param_4 * *(int *)(iVar1 + DAT_000276ba)) >> 0x10);
    *(short *)(iVar2 + 6) = (short)((uint)puVar5 >> 3);
    *(int *)(iVar1 + 0x34) = iVar2 + 8;
    *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + 1;
    *(ushort **)(iVar1 + 0x14) = puVar5 + 0x10;
    uVar3 = 1;
    *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  }
  return uVar3;
}



undefined4 FUN_00027696(int *param_1)

{
  short *psVar1;
  uint uVar2;
  
  psVar1 = DAT_000276c4;
  uVar2 = 0;
  if (*param_1 < (int)DAT_000276c4[6]) {
    uVar2 = 1;
    if (*param_1 < (int)DAT_000276c4[2]) {
      *param_1 = (int)DAT_000276c4[2];
    }
  }
  else if (((int)DAT_000276c4[7] < *param_1) && (uVar2 = 1, (int)DAT_000276c4[3] < *param_1)) {
    *param_1 = (int)DAT_000276c4[3];
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
  if (param_1[3] < (int)psVar1[6]) {
    uVar2 = uVar2 | 2;
    if (param_1[3] < (int)psVar1[2]) {
      param_1[3] = (int)psVar1[2];
    }
  }
  else if (((int)psVar1[7] < param_1[3]) && (uVar2 = uVar2 | 2, (int)psVar1[3] < param_1[3])) {
    param_1[3] = (int)psVar1[3];
  }
  if (param_1[4] < (int)psVar1[5]) {
    uVar2 = uVar2 | 2;
    if (param_1[4] < (int)psVar1[1]) {
      param_1[4] = (int)psVar1[1];
    }
  }
  else if (((int)psVar1[4] < param_1[4]) && (uVar2 = uVar2 | 2, (int)*psVar1 < param_1[4])) {
    param_1[4] = (int)*psVar1;
  }
  if (param_1[6] < (int)psVar1[6]) {
    uVar2 = uVar2 | 4;
    if (param_1[6] < (int)psVar1[2]) {
      param_1[6] = (int)psVar1[2];
    }
  }
  else if (((int)psVar1[7] < param_1[6]) && (uVar2 = uVar2 | 4, (int)psVar1[3] < param_1[6])) {
    param_1[6] = (int)psVar1[3];
  }
  if (param_1[7] < (int)psVar1[5]) {
    uVar2 = uVar2 | 4;
    if (param_1[7] < (int)psVar1[1]) {
      param_1[7] = (int)psVar1[1];
    }
  }
  else if (((int)psVar1[4] < param_1[7]) && (uVar2 = uVar2 | 4, (int)*psVar1 < param_1[7])) {
    param_1[7] = (int)*psVar1;
  }
  if (param_1[9] < (int)psVar1[6]) {
    uVar2 = uVar2 | 8;
    if (param_1[9] < (int)psVar1[2]) {
      param_1[9] = (int)psVar1[2];
    }
  }
  else if (((int)psVar1[7] < param_1[9]) && (uVar2 = uVar2 | 8, (int)psVar1[3] < param_1[9])) {
    param_1[9] = (int)psVar1[3];
  }
  if (param_1[10] < (int)psVar1[5]) {
    uVar2 = uVar2 | 8;
    if (param_1[10] < (int)psVar1[1]) {
      param_1[10] = (int)psVar1[1];
    }
  }
  else if (((int)psVar1[4] < param_1[10]) && (uVar2 = uVar2 | 8, (int)*psVar1 < param_1[10])) {
    param_1[10] = (int)*psVar1;
  }
  if (uVar2 == 0xf) {
    return 2;
  }
  return 0;
}



undefined4 FUN_00027836(int *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  short *psVar5;
  
  psVar5 = DAT_000278b8;
  bVar2 = false;
  bVar1 = false;
  if (*param_1 < (int)DAT_000278b8[6]) {
    bVar2 = false;
    bVar1 = true;
    if (*param_1 < (int)DAT_000278b8[2]) {
      *param_1 = (int)DAT_000278b8[2];
    }
  }
  else if ((int)DAT_000278b8[7] < *param_1) {
    bVar2 = true;
    bVar1 = false;
    if ((int)DAT_000278b8[3] < *param_1) {
      *param_1 = (int)DAT_000278b8[3];
    }
  }
  bVar4 = false;
  bVar3 = false;
  if (param_1[2] < (int)psVar5[6]) {
    if (bVar1) {
      return 2;
    }
    if (param_1[2] < (int)psVar5[2]) {
      param_1[2] = (int)psVar5[2];
    }
  }
  else if ((int)psVar5[7] < param_1[2]) {
    if (bVar2) {
      return 2;
    }
    if ((int)psVar5[3] < param_1[2]) {
      param_1[2] = (int)psVar5[3];
    }
  }
  if (param_1[1] < (int)psVar5[5]) {
    bVar4 = false;
    bVar3 = true;
    if (param_1[1] < (int)psVar5[1]) {
      param_1[1] = (int)psVar5[1];
    }
  }
  else if ((int)psVar5[4] < param_1[1]) {
    bVar4 = true;
    bVar3 = false;
    if ((int)*psVar5 < param_1[1]) {
      param_1[1] = (int)*psVar5;
    }
  }
  if (param_1[3] < (int)psVar5[5]) {
    if (bVar3) {
      return 2;
    }
    if (param_1[3] < (int)psVar5[1]) {
      param_1[3] = (int)psVar5[1];
    }
  }
  else if ((int)psVar5[4] < param_1[3]) {
    if (bVar4) {
      return 2;
    }
    if ((int)*psVar5 < param_1[3]) {
      param_1[3] = (int)*psVar5;
    }
  }
  return 0;
}



undefined4 FUN_00027912(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (*DAT_000279a4)(param_1,*(undefined4 *)(param_2 + 0x10));
  if ((iVar1 != 2) && (iVar1 = (*DAT_000279a8)(param_1,*(undefined4 *)(param_2 + 0x14)), iVar1 != 2)
     ) {
    return 1;
  }
  return 0;
}



undefined4 FUN_00027946(undefined4 param_1,short *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*DAT_000279ac)(param_1,(int)param_2[7],(int)param_2[3]);
  if ((((iVar1 == 2) ||
       (iVar1 = (*DAT_000279b0)(param_1,(int)param_2[6],(int)param_2[2]), iVar1 == 2)) ||
      (iVar1 = (*DAT_000279b4)(param_1,(int)param_2[4],(int)*param_2), iVar1 == 2)) ||
     (iVar1 = (*DAT_000279b8)(param_1,(int)param_2[5],(int)param_2[1]), iVar1 == 2)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



void FUN_000279bc(int param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,
                 ushort param_6)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined2 *puVar4;
  
  puVar1 = DAT_00027ae0;
  puVar4 = (undefined2 *)*DAT_00027ae0;
  *puVar4 = DAT_00027ad6;
  puVar4[2] = param_6 | DAT_00027ad8;
  puVar4[4] = param_3;
  puVar4[5] = param_4;
  puVar4[3] = param_5;
  puVar4[6] = *(undefined2 *)(param_1 + 2);
  puVar4[7] = -*(short *)(param_1 + 6);
  puVar4[8] = *(undefined2 *)(param_1 + 0xe);
  puVar4[9] = -*(short *)(param_1 + 0x12);
  puVar4[10] = *(undefined2 *)(param_1 + 0x1a);
  puVar4[0xb] = -*(short *)(param_1 + 0x1e);
  piVar2 = DAT_00027ae4;
  puVar4[0xc] = (short)*(undefined4 *)(param_1 + 0x24);
  puVar4[0xd] = -(short)*(undefined4 *)(param_1 + 0x28);
  iVar3 = puVar1[8];
  *(short *)(iVar3 + 4) = (short)((uint)(param_2 * *piVar2) >> 0x10);
  *(short *)(iVar3 + 6) = (short)((uint)puVar4 >> 3);
  puVar1[8] = iVar3 + 8;
  puVar1[7] = puVar1[7] + 1;
  *puVar1 = puVar4 + 0x10;
  puVar1[3] = puVar1[3] + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00027a34(int param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,
                 undefined2 *param_6,ushort param_7)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  
  iVar1 = DAT_00027ae8;
  puVar4 = (undefined4 *)(DAT_00027ae8 + 0x14);
  puVar5 = (undefined2 *)*puVar4;
  *puVar5 = DAT_00027ad6;
  puVar5[2] = param_7 | _LAB_00027ada;
  puVar5[4] = param_3;
  puVar5[5] = param_4;
  puVar5[3] = param_5;
  puVar5[6] = *(undefined2 *)(param_1 + 2);
  puVar5[7] = -*(short *)(param_1 + 6);
  puVar5[8] = *(undefined2 *)(param_1 + 0xe);
  puVar5[9] = -*(short *)(param_1 + 0x12);
  puVar5[10] = *(undefined2 *)(param_1 + 0x1a);
  puVar5[0xb] = -*(short *)(param_1 + 0x1e);
  puVar5[0xc] = (short)*(undefined4 *)(param_1 + 0x24);
  puVar5[0xd] = -(short)*(undefined4 *)(param_1 + 0x28);
  puVar2 = *(undefined2 **)(iVar1 + 0x24);
  *(undefined2 **)(iVar1 + 0x24) = puVar2 + 4;
  *puVar2 = *param_6;
  puVar2[1] = param_6[1];
  puVar2[2] = param_6[2];
  puVar2[3] = param_6[3];
  puVar5[0xe] = (short)((uint)puVar2 >> 3);
  iVar3 = *(int *)(iVar1 + 0x34);
  *(short *)(iVar3 + 4) = (short)((uint)(param_2 * *(int *)(iVar1 + DAT_00027adc)) >> 0x10);
  *(short *)(iVar3 + 6) = (short)((uint)puVar5 >> 3);
  *(int *)(iVar1 + 0x34) = iVar3 + 8;
  *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + 1;
  *puVar4 = puVar5 + 0x10;
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  return;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

bool FUN_00027cf2(undefined4 *param_1,undefined4 *param_2,int param_3,int *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  short sVar13;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar14;
  undefined4 uVar15;
  
  iVar2 = FUN_00027912(param_1,param_3);
  if (iVar2 != 0) {
    uVar3 = (*DAT_0002801c)(PTR_DAT_00028018,param_1[2]);
    pcVar1 = DAT_00028020;
    iVar4 = (*DAT_00028020)(*(undefined4 *)(param_3 + 0x18),*param_1,uVar3);
    iVar5 = (*pcVar1)(*(undefined4 *)(param_3 + 0x1c),param_1[1],uVar3);
    uVar6 = (*DAT_0002801c)(PTR_DAT_00028018,param_1[5]);
    iVar7 = (*pcVar1)(*(undefined4 *)(param_3 + 0x18),param_1[3],uVar6);
    iVar8 = (*pcVar1)(*(undefined4 *)(param_3 + 0x1c),param_1[4],uVar6);
    sVar13 = (*DAT_00028024)(iVar5 - iVar8,iVar4 - iVar7);
    uVar15 = *(undefined4 *)(sVar13 * 4 + DAT_00028028);
    uVar14 = *(undefined4 *)(sVar13 * 4 + DAT_0002802c);
    uVar9 = (*DAT_00028030)(*param_2,uVar14);
    uVar10 = (*DAT_00028030)(*param_2,uVar15);
    iVar11 = (*pcVar1)(*(undefined4 *)(param_3 + 0x18),uVar9,uVar3);
    iVar12 = (*pcVar1)(*(undefined4 *)(param_3 + 0x1c),uVar10,uVar3);
    *param_4 = iVar4 - iVar11;
    param_4[1] = iVar5 + iVar12;
    param_4[9] = iVar4 + iVar11;
    param_4[10] = iVar5 - iVar12;
    uVar3 = (*DAT_00028030)(param_2[1],uVar14);
    uVar9 = (*DAT_00028030)(param_2[1],uVar15);
    iVar4 = (*pcVar1)(*(undefined4 *)(param_3 + 0x18),uVar3,uVar6);
    iVar5 = (*pcVar1)(*(undefined4 *)(param_3 + 0x1c),uVar9,uVar6);
    param_4[3] = iVar7 - iVar4;
    param_4[4] = iVar8 + iVar5;
    param_4[6] = iVar7 + iVar4;
    param_4[7] = iVar8 - iVar5;
  }
  return iVar2 != 0;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

bool FUN_00027e68(undefined4 *param_1,undefined4 param_2,int param_3,int *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  short sVar12;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar13;
  
  iVar2 = FUN_00027912(param_1,param_3);
  if (iVar2 != 0) {
    uVar3 = (*DAT_0002801c)(PTR_DAT_00028018,param_1[2]);
    pcVar1 = DAT_00028020;
    iVar4 = (*DAT_00028020)(*(undefined4 *)(param_3 + 0x18),*param_1,uVar3);
    iVar5 = (*pcVar1)(*(undefined4 *)(param_3 + 0x1c),param_1[1],uVar3);
    uVar6 = (*DAT_0002801c)(PTR_DAT_00028018,param_1[5]);
    iVar7 = (*pcVar1)(*(undefined4 *)(param_3 + 0x18),param_1[3],uVar6);
    iVar8 = (*pcVar1)(*(undefined4 *)(param_3 + 0x1c),param_1[4],uVar6);
    sVar12 = (*DAT_00028024)(iVar5 - iVar8,iVar4 - iVar7);
    uVar13 = *(undefined4 *)(sVar12 * 4 + DAT_00028028);
    uVar9 = (*DAT_00028030)(param_2,*(undefined4 *)(sVar12 * 4 + DAT_0002802c));
    uVar13 = (*DAT_00028030)(param_2,uVar13);
    iVar10 = (*pcVar1)(*(undefined4 *)(param_3 + 0x18),uVar9,uVar3);
    iVar11 = (*pcVar1)(*(undefined4 *)(param_3 + 0x1c),uVar13,uVar3);
    *param_4 = iVar4 - iVar10;
    param_4[1] = iVar5 + iVar11;
    param_4[9] = iVar4 + iVar10;
    param_4[10] = iVar5 - iVar11;
    iVar4 = (*pcVar1)(*(undefined4 *)(param_3 + 0x18),uVar9,uVar6);
    iVar5 = (*pcVar1)(*(undefined4 *)(param_3 + 0x1c),uVar13,uVar6);
    param_4[3] = iVar7 - iVar4;
    param_4[4] = iVar8 + iVar5;
    param_4[6] = iVar7 + iVar4;
    param_4[7] = iVar8 - iVar5;
  }
  return iVar2 != 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_000287c8(int param_1,int param_2,short param_3,short param_4,short param_5,short param_6)

{
  int iVar1;
  undefined auStack52 [52];
  
  iVar1 = (*DAT_00028838)(param_1,auStack52,_LAB_00028834);
  if (iVar1 != 0) {
    iVar1 = FUN_000279bc(auStack52,
                         (*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14) +
                          *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x2c) >> 2) + param_2,
                         (int)param_3,(int)param_4,(int)param_5,(int)param_6);
  }
  return iVar1;
}



int FUN_000288a4(int param_1,int param_2,short param_3,short param_4,short param_5,
                undefined4 param_6,short param_7)

{
  int iVar1;
  undefined auStack52 [52];
  
  iVar1 = (*DAT_00028910)(param_1,auStack52,DAT_0002890c);
  if (iVar1 != 0) {
    iVar1 = FUN_00027a34(auStack52,
                         (*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14) +
                          *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x2c) >> 2) + param_2,
                         (int)param_3,(int)param_4,(int)param_5,param_6,(int)param_7);
  }
  return iVar1;
}



undefined4 FUN_000289ae(int *param_1)

{
  short *psVar1;
  uint uVar2;
  
  psVar1 = DAT_00028a38;
  uVar2 = 0;
  if (*param_1 < (int)DAT_00028a38[6]) {
    uVar2 = 1;
    if (*param_1 < (int)DAT_00028a38[2]) {
      *param_1 = (int)DAT_00028a38[2];
    }
  }
  else if (((int)DAT_00028a38[7] < *param_1) && (uVar2 = 1, (int)DAT_00028a38[3] < *param_1)) {
    *param_1 = (int)DAT_00028a38[3];
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00028bf0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  
  pcVar2 = _LAB_00028c94;
  bVar1 = param_1[2] < param_2;
  if (param_1[5] < param_2 && bVar1) {
    uVar3 = 2;
  }
  else if (bVar1 || param_1[5] < param_2) {
    if (bVar1) {
      iVar4 = param_1[5];
      iVar4 = (*_LAB_00028c94)(*param_1 - param_1[3],param_2 - iVar4,param_1[2] - iVar4,param_4,
                               iVar4);
      *param_1 = iVar4 + param_1[3];
      iVar4 = param_1[5];
      iVar4 = (*pcVar2)(param_1[1] - param_1[4],param_2 - iVar4,param_1[2] - iVar4,param_4,iVar4);
      param_1[1] = iVar4 + param_1[4];
      param_1[2] = param_2;
    }
    else {
      iVar4 = param_1[2];
      iVar4 = (*_LAB_00028c94)(param_1[3] - *param_1,param_2 - iVar4,param_1[5] - iVar4,param_4,
                               param_1,iVar4);
      param_1[3] = iVar4 + *param_1;
      iVar4 = param_1[2];
      iVar4 = (*pcVar2)(param_1[4] - param_1[1],param_2 - iVar4,param_1[5] - iVar4,param_4,iVar4);
      param_1[4] = iVar4 + param_1[1];
      param_1[5] = param_2;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 FUN_00028cf6(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  
  pcVar2 = DAT_00028f00;
  bVar1 = param_2 < param_1[2];
  if (param_2 < param_1[5] && bVar1) {
    uVar3 = 2;
  }
  else if (bVar1 || param_2 < param_1[5]) {
    if (bVar1) {
      iVar4 = param_1[5];
      iVar4 = (*DAT_00028f00)(*param_1 - param_1[3],param_2 - iVar4,param_1[2] - iVar4,param_4,iVar4
                             );
      *param_1 = iVar4 + param_1[3];
      iVar4 = param_1[5];
      iVar4 = (*pcVar2)(param_1[1] - param_1[4],param_2 - iVar4,param_1[2] - iVar4,param_4,iVar4);
      param_1[1] = iVar4 + param_1[4];
      param_1[2] = param_2;
    }
    else {
      iVar4 = param_1[2];
      iVar4 = (*DAT_00028f00)(param_1[3] - *param_1,param_2 - iVar4,param_1[5] - iVar4,param_4,
                              param_1,iVar4);
      param_1[3] = iVar4 + *param_1;
      iVar4 = param_1[2];
      iVar4 = (*pcVar2)(param_1[4] - param_1[1],param_2 - iVar4,param_1[5] - iVar4,param_4,iVar4);
      param_1[4] = iVar4 + param_1[1];
      param_1[5] = param_2;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 FUN_00028df6(int *param_1)

{
  short *psVar1;
  uint uVar2;
  
  psVar1 = DAT_00028f04;
  uVar2 = 0;
  if (*param_1 < (int)DAT_00028f04[6]) {
    uVar2 = 1;
    if (*param_1 < (int)DAT_00028f04[2]) {
      *param_1 = (int)DAT_00028f04[2];
    }
  }
  else if (((int)DAT_00028f04[7] < *param_1) && (uVar2 = 1, (int)DAT_00028f04[3] < *param_1)) {
    *param_1 = (int)DAT_00028f04[3];
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
  if (param_1[3] < (int)psVar1[6]) {
    uVar2 = uVar2 | 2;
    if (param_1[3] < (int)psVar1[2]) {
      param_1[3] = (int)psVar1[2];
    }
  }
  else if (((int)psVar1[7] < param_1[3]) && (uVar2 = uVar2 | 2, (int)psVar1[3] < param_1[3])) {
    param_1[3] = (int)psVar1[3];
  }
  if (param_1[4] < (int)psVar1[5]) {
    uVar2 = uVar2 | 2;
    if (param_1[4] < (int)psVar1[1]) {
      param_1[4] = (int)psVar1[1];
    }
  }
  else if (((int)psVar1[4] < param_1[4]) && (uVar2 = uVar2 | 2, (int)*psVar1 < param_1[4])) {
    param_1[4] = (int)*psVar1;
  }
  if (param_1[6] < (int)psVar1[6]) {
    uVar2 = uVar2 | 4;
    if (param_1[6] < (int)psVar1[2]) {
      param_1[6] = (int)psVar1[2];
    }
  }
  else if (((int)psVar1[7] < param_1[6]) && (uVar2 = uVar2 | 4, (int)psVar1[3] < param_1[6])) {
    param_1[6] = (int)psVar1[3];
  }
  if (param_1[7] < (int)psVar1[5]) {
    uVar2 = uVar2 | 4;
    if (param_1[7] < (int)psVar1[1]) {
      param_1[7] = (int)psVar1[1];
    }
  }
  else if (((int)psVar1[4] < param_1[7]) && (uVar2 = uVar2 | 4, (int)*psVar1 < param_1[7])) {
    param_1[7] = (int)*psVar1;
  }
  if (param_1[9] < (int)psVar1[6]) {
    uVar2 = uVar2 | 8;
    if (param_1[9] < (int)psVar1[2]) {
      param_1[9] = (int)psVar1[2];
    }
  }
  else if (((int)psVar1[7] < param_1[9]) && (uVar2 = uVar2 | 8, (int)psVar1[3] < param_1[9])) {
    param_1[9] = (int)psVar1[3];
  }
  if (param_1[10] < (int)psVar1[5]) {
    uVar2 = uVar2 | 8;
    if (param_1[10] < (int)psVar1[1]) {
      param_1[10] = (int)psVar1[1];
    }
  }
  else if (((int)psVar1[4] < param_1[10]) && (uVar2 = uVar2 | 8, (int)*psVar1 < param_1[10])) {
    param_1[10] = (int)*psVar1;
  }
  if (uVar2 == 0xf) {
    return 2;
  }
  return 0;
}



void FUN_00029928(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  
  pcVar2 = DAT_00029b40;
  piVar1 = DAT_00029b3c;
  puVar6 = (undefined4 *)*param_1;
  do {
    if ((puVar6[5] & 1) == 0) {
      if ((puVar6[5] & 2) == 0) {
        if (((code *)puVar6[2] != (code *)0x0) && (*DAT_00029b44 == '\0')) {
          (*(code *)puVar6[2])(puVar6 + 6);
        }
        if ((code *)puVar6[3] != (code *)0x0) {
          (*(code *)puVar6[3])(puVar6 + 6);
        }
        goto LAB_00029970;
      }
    }
    else {
LAB_00029970:
      if ((puVar6[5] & 1) == 0) {
        if (puVar6[1] != 0) {
          FUN_00029928(puVar6 + 1);
        }
      }
      else {
        uVar3 = puVar6[5];
        puVar6[5] = uVar3 ^ 4;
        if (((uVar3 ^ 4) & 4) != 0) {
          for (piVar4 = (int *)puVar6[1]; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
            piVar4[5] = piVar4[5] | 1;
          }
        }
        if (puVar6[1] != 0) {
          FUN_00029928(puVar6 + 1);
        }
        if ((puVar6[5] & 4) == 0) {
          piVar4 = (int *)puVar6[-2];
          while (piVar4 != (int *)0x0) {
            iVar5 = (int)(piVar4 + 2);
            piVar4 = (int *)*piVar4;
            (*pcVar2)(iVar5);
          }
          (*pcVar2)(puVar6);
          *param_1 = *puVar6;
          puVar6 = param_1;
        }
        else {
          if ((code *)puVar6[4] != (code *)0x0) {
            (*(code *)puVar6[4])(puVar6 + 6);
          }
          *piVar1 = *piVar1 + -1;
        }
      }
    }
    param_1 = puVar6;
    puVar6 = (undefined4 *)*param_1;
    if (puVar6 == (undefined4 *)0x0) {
      return;
    }
  } while( true );
}



void FUN_00029cc6(undefined4 *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = param_2 + 3U >> 2;
    do {
      *param_1 = 0;
      uVar1 = uVar1 - 1;
      param_1 = param_1 + 1;
    } while (uVar1 != 0);
  }
  return;
}



void FUN_0002a060(int param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_0002a148;
  *(char *)(DAT_0002a148 + 0x5c) = (char)param_1;
  pcVar2 = DAT_0002a150;
  *(char *)(iVar1 + 0x5d) = (char)param_2;
  (*pcVar2)(DAT_0002a14c,0,2);
  (*DAT_0002a15c)(*(undefined4 *)(param_1 * 0x10 + DAT_0002a158),DAT_0002a154,0);
  uVar3 = DAT_0002a164;
  *DAT_0002a160 = 1;
  (*DAT_0002a168)(uVar3);
  (*DAT_0002a16c)();
  (*DAT_0002a170)();
  (*DAT_0002a174)();
  (*DAT_0002a17c)(*DAT_0002a178 + 0x28);
                    // WARNING: Could not recover jumptable at 0x0002a0c8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0002a154)(*DAT_0002a180,param_2);
  return;
}



void FUN_0002a198(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*param_1 * 0x10 + DAT_0002a270);
  iVar2 = 0;
  if (piVar3 != (int *)0x0) {
    while (iVar1 = *piVar3, piVar3 = piVar3 + 1, iVar1 != 0) {
      iVar2 = iVar2 + 1;
    }
  }
  param_1[2] = iVar2;
  param_1[1] = 0;
  return;
}



undefined4 FUN_0002a1bc(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  pcVar1 = DAT_0002a278;
  piVar4 = *(int **)(param_1 * 0x10 + DAT_0002a274);
  if (piVar4 == (int *)0x0) {
LAB_0002a1e8:
    uVar2 = 1;
  }
  else {
    do {
      iVar3 = *piVar4;
      piVar4 = piVar4 + 1;
      if (iVar3 == 0) goto LAB_0002a1e8;
      iVar3 = (*pcVar1)();
    } while (iVar3 != 0);
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_0002a372(int *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  int *piVar6;
  int iVar7;
  
  iVar3 = DAT_0002a4c8;
  uVar2 = DAT_0002a4c4;
  puVar1 = PTR_DAT_0002a4c0;
  piVar6 = *(int **)(*param_1 * 0x10 + DAT_0002a4bc);
  if (piVar6 != (int *)0x0) {
    iVar7 = 0;
    for (; *piVar6 != 0; piVar6 = piVar6 + 1) {
      iVar4 = (*DAT_0002a4cc)();
      (*DAT_0002a4d0)(iVar4 * 0xe + 0x10,iVar7 + iVar4 * -0x14 + 4);
      if (iVar7 == param_1[1]) {
        uVar5 = SUB42(puVar1,0);
      }
      else {
        uVar5 = (undefined2)uVar2;
      }
      *(undefined2 *)(iVar3 + 0x10) = uVar5;
      (*DAT_0002a4d4)(*piVar6);
      iVar7 = iVar7 + 1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0002a6d2(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  
  iVar1 = _LAB_0002a72c;
  if (*(int *)(param_1 + 8) != 0) {
    (*DAT_0002a730)();
    if (*(int *)(param_1 + 8) == 1) {
      uVar3 = (*DAT_0002a708)(*(undefined4 *)(param_1 + 0xc));
      (*DAT_0002a734)(uVar3);
    }
    else {
      iVar6 = *(int *)(param_1 + 0xc);
      (*DAT_0002a7dc)(iVar6 + 8);
      if (*(int *)(iVar6 + 0x2c) == 3) {
        (*DAT_0002a7e0)((int)(*(int *)(iVar6 + 0x18) + (uint)(*(int *)(iVar6 + 0x18) < 0)) >> 1);
      }
    }
    piVar2 = DAT_0002a7e4;
    iVar6 = *DAT_0002a7e4;
    if ((*(int *)(iVar6 + 0x2c) < *(int *)(iVar1 + 0x14)) &&
       (*(int *)(iVar1 + 0x10) <= *(int *)(iVar6 + 0x2c))) {
      sVar4 = (*DAT_0002a7e8)(*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar6 + 0xc),
                              *(undefined4 *)(iVar6 + 0x2c));
      sVar5 = (*DAT_0002a7e8)(*(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(*piVar2 + 0x1c),
                              *(undefined4 *)(*piVar2 + 0x2c));
      if (((int)sVar4 < *(short *)(iVar1 + 0xc) + -0x10) ||
         (((*(short *)(iVar1 + 0xe) + 0x10 < (int)sVar4 ||
           ((int)sVar5 < *(short *)(iVar1 + 10) + -0x10)) ||
          (*(short *)(iVar1 + 8) + 0x10 < (int)sVar5)))) {
        *(undefined4 *)(param_1 + 8) = 0;
      }
      else {
        *(short *)(param_1 + 0x14) = sVar4;
        *(short *)(param_1 + 0x16) = sVar5;
      }
    }
    else {
      *(undefined4 *)(param_1 + 8) = 0;
    }
    (*DAT_0002a7ec)();
  }
  return;
}



void FUN_0002ac18(undefined4 param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int iVar7;
  int iStack24;
  undefined4 uStack20;
  
  iVar1 = DAT_0002ad30;
  iVar7 = (short)((ushort)((uint)param_1 >> 0x10) & DAT_0002ad22) * 4;
  uVar4 = (*DAT_0002ad3c)((int)*(short *)(DAT_0002ad30 + 0x40) -
                          (int)*(short *)(DAT_0002ad30 + 0x3c) >> 1,
                          *(undefined4 *)(iVar7 + DAT_0002ad38),
                          *(undefined4 *)(iVar7 + DAT_0002ad34));
  pcVar2 = DAT_0002ad40;
  puVar6 = PTR_LAB_00011998_1_0002ad44;
  if ((param_2 == 0) || (puVar6 = PTR_LAB_0000d332_1_0002ad48, param_2 == 1)) {
    uVar5 = (*DAT_0002ad40)(uVar4,puVar6);
    puVar6 = PTR_LAB_0002ad4c;
    *(undefined4 *)(iVar1 + 0x18) = uVar5;
  }
  else {
    if (param_2 != 2) goto LAB_0002ac90;
    uVar5 = (*DAT_0002ad40)(uVar4,PTR_LAB_0000d332_1_0002ad48);
    *(undefined4 *)(iVar1 + 0x18) = uVar5;
    puVar6 = PTR_LAB_0000b332_1_0002ad50;
  }
  uVar4 = (*pcVar2)(uVar4,puVar6);
  *(undefined4 *)(iVar1 + 0x1c) = uVar4;
LAB_0002ac90:
  pcVar2 = DAT_0002ad54;
  iStack24 = (int)DAT_0002ad24;
  uStack20 = *(undefined4 *)(iVar1 + 0x18);
  uVar4 = (*DAT_0002ad54)(iStack24,uStack20);
  pcVar3 = DAT_0002ad58;
  *(undefined4 *)(iVar1 + 0x2c) = uVar4;
  uVar4 = (*pcVar3)(&iStack24,&iStack24);
  uVar4 = (*DAT_0002ad5c)(uVar4);
  uVar4 = (*pcVar2)(uVar4,uStack20);
  *(undefined4 *)(iVar1 + 0x28) = uVar4;
  iStack24 = 0x70;
  uStack20 = *(undefined4 *)(iVar1 + 0x1c);
  uVar4 = (*pcVar2)(0x70,uStack20);
  pcVar3 = DAT_0002ad58;
  *(undefined4 *)(iVar1 + 0x24) = uVar4;
  uVar4 = (*pcVar3)(&iStack24,&iStack24);
  uVar4 = (*DAT_0002ad5c)(uVar4);
  uVar4 = (*pcVar2)(uVar4,uStack20);
  *(undefined4 *)(iVar1 + 0x20) = uVar4;
  return;
}



void FUN_0002af42(int param_1)

{
  int iVar1;
  
  iVar1 = 0x20;
  do {
    *(int *)(param_1 + 4) = param_1;
    iVar1 = iVar1 + -1;
    param_1 = param_1 + 8;
  } while (iVar1 != 0);
  return;
}



void FUN_0002af78(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  if (param_2 != 0) {
    do {
      iVar1 = ((int)*(short *)(param_1 + 4) & 0x1fU) * 8 + param_5;
      param_2 = param_2 + -1;
      **(int **)(iVar1 + 4) = param_1;
      *(int *)(iVar1 + 4) = param_1;
      param_1 = param_1 + 8;
    } while (param_2 != 0);
  }
  if (param_4 != 0) {
    do {
      iVar1 = ((int)*(short *)(param_3 + 4) & 0x1fU) * 8 + param_5;
      param_4 = param_4 + -1;
      **(int **)(iVar1 + 4) = param_3;
      *(int *)(iVar1 + 4) = param_3;
      param_3 = param_3 + 8;
    } while (param_4 != 0);
  }
  return;
}



void FUN_0002afba(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != 0) {
    do {
      iVar1 = ((uint)(int)*(short *)(param_1 + 1) >> 5 & 0x1f) * 8 + param_3;
      param_2 = param_2 + -1;
      **(int **)(iVar1 + 4) = (int)param_1;
      *(int **)(iVar1 + 4) = param_1;
      param_1 = (int *)*param_1;
    } while (param_2 != 0);
  }
  return;
}



void FUN_0002afe2(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != 0) {
    do {
      iVar1 = ((uint)(int)*(short *)(param_1 + 1) >> 10 & 0x1f) * 8 + param_3;
      param_2 = param_2 + -1;
      **(int **)(iVar1 + 4) = (int)param_1;
      *(int **)(iVar1 + 4) = param_1;
      param_1 = (int *)*param_1;
    } while (param_2 != 0);
  }
  return;
}



undefined4
FUN_0002b008(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)((int)DAT_0002b082 + (int)param_1);
  do {
    if (puVar2 == param_1) goto joined_r0x0002b024;
    puVar3 = puVar2 + -2;
    piVar1 = puVar2 + -1;
    puVar2 = puVar3;
  } while ((undefined4 *)*piVar1 == puVar3);
  param_4 = *puVar3;
  param_3 = puVar3;
joined_r0x0002b024:
  while (puVar2 != param_1) {
    puVar3 = puVar2 + -2;
    piVar1 = puVar2 + -1;
    puVar2 = puVar3;
    if ((undefined4 *)*piVar1 != puVar3) {
      *(undefined4 *)param_3[1] = *puVar3;
      param_3 = puVar3;
    }
  }
  *(undefined4 *)param_3[1] = 0;
  return param_4;
}



void FUN_0002b044(int **param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0002b084;
  **(undefined2 **)(DAT_0002b084 + 8) = *(undefined2 *)((int)param_1 + 6);
  iVar2 = DAT_0002b088;
  for (; *param_1 != (int *)0x0; param_1 = (int **)*param_1) {
    *(undefined2 *)(((int)*(short *)((int)param_1 + 6) & 0xffffU) * 8 + iVar2 + 2) =
         *(undefined2 *)((int)*param_1 + 6);
  }
  *(undefined2 *)(((int)*(short *)((int)param_1 + 6) & 0xffffU) * 8 + iVar2 + 2) =
       *(undefined2 *)(iVar1 + 6);
  return;
}



void FUN_0002b08c(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  
  if (8 < param_3) {
    *param_1 = *param_2;
    uVar1 = param_3 - 5 >> 2;
    param_1[1] = param_2[1];
    param_1 = param_1 + 2;
    do {
      *param_1 = 0;
      uVar1 = uVar1 - 1;
      param_1 = param_1 + 1;
    } while (uVar1 != 0);
  }
  return;
}



void FUN_0002b434(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = *DAT_0002b594;
  iVar3 = 0;
  if (iVar4 != 0) {
    puVar5 = *(undefined4 **)(iVar4 + 0xc);
    for (puVar2 = *(undefined4 **)(iVar4 + 8); puVar2 < puVar5;
        puVar2 = (undefined4 *)((int)puVar2 + puVar2[1])) {
      iVar3 = iVar3 + 8;
    }
    puVar1 = (undefined4 *)(*DAT_0002b5a0)(param_1,iVar3);
    *(undefined4 **)(iVar4 + 0x14) = puVar1;
    for (puVar2 = *(undefined4 **)(iVar4 + 8); puVar2 < puVar5;
        puVar2 = (undefined4 *)((int)puVar2 + puVar2[1])) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1 = puVar1 + 2;
    }
  }
  return;
}



void FUN_0002b484(undefined4 param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  pcVar2 = DAT_0002b5a4;
  iVar5 = *DAT_0002b594;
  if (iVar5 != 0) {
    puVar4 = *(undefined4 **)(iVar5 + 0x14);
    puVar6 = *(undefined4 **)(iVar5 + 8);
    puVar3 = *(undefined4 **)(iVar5 + 0xc);
    do {
      *puVar6 = *puVar4;
      puVar1 = puVar4 + 1;
      puVar4 = puVar4 + 2;
      puVar6[1] = *puVar1;
      (*pcVar2)(puVar6,8);
      puVar6 = (undefined4 *)((int)puVar6 + puVar6[1]);
    } while (puVar6 < puVar3);
                    // WARNING: Could not recover jumptable at 0x0002b4ce. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_0002b5a8)(param_1,*(undefined4 *)(iVar5 + 0x14));
    return;
  }
  return;
}



undefined4 * FUN_0002b5f8(int param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  pcVar1 = DAT_0002b6e4;
  if (param_1 == 0) {
LAB_0002b64e:
    puVar6 = (undefined4 *)0x0;
  }
  else {
    uVar5 = param_1 + 0x17U & 0xfffffff0;
    puVar6 = (undefined4 *)*DAT_0002b6d8;
    do {
      puVar3 = puVar6;
      puVar6 = (undefined4 *)*puVar3;
      if (puVar6 == (undefined4 *)0x0) goto LAB_0002b64e;
      uVar4 = puVar6[1];
    } while (uVar4 < uVar5);
    if (uVar4 == uVar5) {
      *puVar3 = *puVar6;
    }
    else {
      puVar2 = (undefined4 *)(uVar5 + (int)puVar6);
      *puVar3 = puVar2;
      *puVar2 = *puVar6;
      puVar2[1] = uVar4 - uVar5;
      (*pcVar1)(puVar2,8);
      puVar6[1] = uVar5;
    }
    *puVar6 = 0;
    puVar6 = puVar6 + 2;
  }
  return puVar6;
}



void FUN_0002b65c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != 0) {
    puVar1 = (undefined4 *)(param_1 + -8);
    puVar3 = (undefined4 *)*DAT_0002b6d8;
    do {
      puVar2 = puVar3;
      puVar3 = (undefined4 *)*puVar2;
      if (puVar3 == (undefined4 *)0x0) break;
    } while (puVar3 <= puVar1);
    if ((undefined4 *)(*(int *)(param_1 + -4) + (int)puVar1) == puVar3) {
      *puVar1 = *puVar3;
      *(int *)(param_1 + -4) = *(int *)(param_1 + -4) + puVar3[1];
    }
    else {
      *puVar1 = puVar3;
    }
    if ((undefined4 *)(puVar2[1] + (int)puVar2) == puVar1) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar2[1] + *(int *)(param_1 + -4);
    }
    else {
      *puVar2 = puVar1;
    }
  }
  return;
}



int FUN_0002b6a8(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *DAT_0002b6d8;
  iVar1 = 0;
  while (piVar2 = (int *)*piVar2, piVar2 != (int *)0x0) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



int FUN_0002b6be(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *DAT_0002b6d8;
  iVar2 = 0;
  while (piVar1 = (int *)*piVar1, piVar1 != (int *)0x0) {
    iVar2 = iVar2 + piVar1[1];
  }
  return iVar2;
}



undefined4 * FUN_0002b768(int param_1)

{
  short sVar2;
  undefined4 *puVar1;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *DAT_0002b7e0;
  if (param_1 == 0) {
LAB_0002b7be:
    puVar1 = (undefined4 *)0x0;
  }
  else {
    uVar3 = (param_1 + 0x1fU & 0xffffffe0) >> 3;
    puVar4 = (undefined4 *)(iVar6 + 8);
    do {
      puVar1 = puVar4;
      puVar4 = (undefined4 *)*puVar1;
      if (puVar4 == (undefined4 *)0x0) goto LAB_0002b7be;
      uVar5 = (int)*(short *)((int)puVar4 + 6) & 0xffff;
    } while (uVar5 < uVar3);
    if (uVar5 == uVar3) {
      *puVar1 = *puVar4;
      puVar1 = puVar4;
    }
    else {
      puVar1 = *(undefined4 **)(iVar6 + 4);
      sVar2 = (short)uVar5 - (short)uVar3;
      *(undefined4 *)(iVar6 + 4) = *puVar1;
      *(short *)((int)puVar4 + 6) = sVar2;
      *(short *)(puVar1 + 1) = *(short *)(puVar4 + 1) + sVar2;
      *(short *)((int)puVar1 + 6) = (short)uVar3;
    }
    *puVar1 = 0;
  }
  return puVar1;
}



void FUN_0002b7c6(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *DAT_0002b7e0;
  if (param_1 != (undefined4 *)0x0) {
    uVar4 = (int)*(short *)(param_1 + 1) & 0xffff;
    puVar1 = (undefined4 *)(iVar3 + 8);
    do {
      puVar2 = puVar1;
      puVar1 = (undefined4 *)*puVar2;
      if (puVar1 == (undefined4 *)0x0) break;
    } while (((int)*(short *)(puVar1 + 1) & 0xffffU) <= uVar4);
    if ((puVar1 == (undefined4 *)0x0) ||
       (((int)*(short *)((int)param_1 + 6) & 0xffffU) + uVar4 !=
        ((int)*(short *)(puVar1 + 1) & 0xffffU))) {
      *param_1 = puVar1;
    }
    else {
      *(short *)(puVar1 + 1) = (short)uVar4;
      *(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + *(short *)((int)param_1 + 6);
      *param_1 = *(undefined4 *)(iVar3 + 4);
      *(undefined4 **)(iVar3 + 4) = param_1;
      param_1 = puVar1;
    }
    if (((int)*(short *)(puVar2 + 1) & 0xffffU) + ((int)*(short *)((int)puVar2 + 6) & 0xffffU) ==
        uVar4) {
      *puVar2 = *param_1;
      *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + *(short *)((int)param_1 + 6);
      *param_1 = *(undefined4 *)(iVar3 + 4);
      *(undefined4 **)(iVar3 + 4) = param_1;
    }
    else {
      *puVar2 = param_1;
    }
  }
  return;
}



int FUN_0002b850(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = (int *)(*DAT_0002b9fc + 8);
  while (piVar1 = (int *)*piVar1, piVar1 != (int *)0x0) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



int FUN_0002b868(void)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = (int *)(*DAT_0002b9fc + 8);
  while (piVar1 = (int *)*piVar1, piVar1 != (int *)0x0) {
    uVar2 = uVar2 + (int)*(short *)((int)piVar1 + 6);
  }
  return (uVar2 & 0xffff) << 3;
}



void FUN_0002b886(int *param_1,int param_2)

{
  int iVar1;
  
  while( true ) {
    if (*param_1 != 0) {
      *param_1 = *param_1 + param_2;
    }
    if (param_1[1] != 0) {
      iVar1 = param_1[1];
      param_1[1] = iVar1 + param_2;
      FUN_0002b886(iVar1 + param_2,param_2);
    }
    if (param_1[2] == 0) break;
    iVar1 = param_1[2];
    param_1[2] = (int)(int *)(iVar1 + param_2);
    param_1 = (int *)(iVar1 + param_2);
  }
  return;
}



void FUN_0002b8c8(int param_1,int param_2,short param_3)

{
  byte bVar1;
  short *local_4;
  
  if (*(int *)(param_1 + 4) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2;
    local_4 = (short *)(param_1 + 0xc);
    while ((((*local_4 != 0 || (local_4[1] != 0)) || (local_4[2] != 0)) || (local_4[3] != 0))) {
      if ((local_4[6] & 0x38U) == 8) {
        local_4[7] = local_4[7] + param_3;
      }
      if ((*(byte *)(local_4 + 4) & 4) != 0) {
        local_4[8] = local_4[8] + param_3;
      }
      bVar1 = *(byte *)(local_4 + 4) & 3;
      if (bVar1 == 0) {
        local_4 = local_4 + 10;
      }
      else if (bVar1 == 1) {
        local_4 = local_4 + 0xe;
      }
      else if (bVar1 == 2) {
        local_4 = local_4 + 0x22;
      }
      else if (bVar1 == 3) {
        local_4 = local_4 + 0x16;
      }
    }
  }
  return;
}



uint FUN_0002b95e(ushort *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + (int)param_1;
  if ((*param_1 & 8) != 0) {
    iVar4 = *(int *)(param_1 + 4);
    iVar2 = (int)(short)param_1[1];
    while (bVar1 = 0 < iVar2, iVar2 = iVar2 + -1, bVar1) {
      *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + (int)param_1;
      *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + (int)param_1;
      *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + (int)param_1;
      iVar4 = iVar4 + 0x38;
    }
  }
  if ((*param_1 & 0x10) != 0) {
    iVar4 = *(int *)(param_1 + 4);
    iVar2 = (int)(short)param_1[1];
    while (bVar1 = 0 < iVar2, iVar2 = iVar2 + -1, bVar1) {
      *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + (int)param_1;
      *(int *)(iVar4 + 0x24) = *(int *)(iVar4 + 0x24) + (int)param_1;
      *(int *)(iVar4 + 0x28) = *(int *)(iVar4 + 0x28) + (int)param_1;
      iVar4 = iVar4 + 0x38;
    }
  }
  uVar3 = (int)(short)*param_1 & 0xffff;
  if (((int)(short)*param_1 & 0x20U) != 0) {
    iVar2 = *(int *)(param_1 + 4);
    uVar3 = (uint)(short)param_1[1];
    uVar5 = uVar3;
    while (bVar1 = 0 < (int)uVar5, uVar5 = uVar5 - 1, bVar1) {
      *(int *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) + (int)param_1;
      *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + (int)param_1;
      *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + (int)param_1;
      iVar2 = iVar2 + 0x38;
    }
  }
  return uVar3;
}



undefined4 FUN_0002b9e6(int param_1)

{
  int **ppiVar1;
  int *piVar2;
  
  ppiVar1 = (int **)(*(int *)(param_1 + 4) + param_1);
  *(int ***)(param_1 + 4) = ppiVar1;
  for (; *ppiVar1 != (int *)0x0; ppiVar1 = ppiVar1 + 1) {
    piVar2 = (int *)((int)*ppiVar1 + param_1);
    *ppiVar1 = piVar2;
    while (*piVar2 != 0) {
      if (*piVar2 != -1) {
        *piVar2 = *piVar2 + param_1;
        piVar2 = piVar2 + 1;
      }
    }
  }
  return 0;
}



void FUN_0002ba20(int *param_1,int param_2)

{
  *param_1 = *param_1 + param_2;
  param_1[1] = param_1[1] + param_2;
  param_1[2] = param_1[2] + param_2;
  return;
}



void FUN_0002ba34(char **param_1,short param_2)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  uint uVar6;
  
  *param_1 = *param_1 + (int)param_1;
  pcVar4 = *param_1;
  ppcVar5 = param_1 + 1;
  while (pcVar2 = DAT_0002bad4, *ppcVar5 != (char *)0x0) {
    *ppcVar5 = *ppcVar5 + (int)param_1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar3 = *ppcVar5;
    ppcVar5 = ppcVar5 + 1;
    if (cVar1 == '\0') {
      FUN_0002b886(pcVar3,param_1);
    }
    else if (cVar1 == '\x01') {
      FUN_0002b8c8(pcVar3,param_1,(int)param_2);
    }
    else if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        FUN_0002b95e();
      }
      else if (cVar1 == '\x04') {
        FUN_0002b9e6();
      }
      else if ((cVar1 != '\x05') && (cVar1 == '\x06')) {
        FUN_0002ba20(pcVar3,param_1);
      }
    }
  }
  pcVar4 = (char *)(int)DAT_0002bad0;
  uVar6 = (uint)DAT_0002bad2;
  while ((uVar6 & (int)*pcVar4 & 0xffU) == 0) {
    (*pcVar2)(0x7f);
  }
                    // WARNING: Could not recover jumptable at 0x0002bacc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0002badc)(0,0,0,DAT_0002bad8);
  return;
}



void FUN_0002bafa(int param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  
  pcVar6 = (char *)((char)(param_2 * '\x03') + DAT_0002bc4c);
  (*DAT_0002bc50)();
  iVar1 = DAT_0002bc54;
  *(short *)(DAT_0002bc54 + 0x10) = (short)DAT_0002bc58;
  pcVar2 = DAT_0002bc5c;
  (*DAT_0002bc5c)(10);
  pcVar3 = DAT_0002bc60;
  if (param_1 != 0) {
    (*DAT_0002bc64)(param_1);
    (*pcVar3)();
  }
  *(short *)(iVar1 + 0x10) = (short)(((int)*pcVar6 & 0xfU) << 0xc);
  (*pcVar2)(8,0xc);
  uVar4 = (*DAT_0002bc6c)();
  uVar5 = (*DAT_0002bc70)();
  uVar7 = DAT_0002bc74;
  (*pcVar3)();
  *(short *)(iVar1 + 0x10) = (short)(((int)pcVar6[1] & 0xfU) << 0xc);
  (*pcVar2)(8,0xd,param_3,param_4,uVar7,uVar5,uVar4);
  uVar4 = FUN_0002b6a8();
  uVar5 = FUN_0002b6be();
  uVar7 = DAT_0002bc78;
  (*pcVar3)();
  *(short *)(iVar1 + 0x10) = (short)(((int)pcVar6[2] & 0xfU) << 0xc);
  (*pcVar2)(8,0xe,param_3,param_4,uVar7,uVar5,uVar4);
  FUN_0002b850();
  FUN_0002b868();
  (*pcVar3)();
  Sleep_Standby();
  return;
}



void FUN_0002bbc2(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    *param_2 = 0xffffffff;
    *param_3 = 0;
  }
  else {
    uVar1 = (*DAT_0002bc80)();
    *param_2 = uVar1;
    uVar1 = (*DAT_0002bc84)(*param_2);
    *param_3 = uVar1;
  }
  return;
}



void FUN_0002bbfa(int *param_1)

{
  if (-1 < *(short *)(param_1 + 2)) {
    (*DAT_0002bc88)((int)*(short *)(param_1 + 2));
    *(undefined2 *)(param_1 + 2) = 0xffff;
  }
  if (-1 < *(short *)((int)param_1 + 10)) {
    (*DAT_0002bc88)((int)*(short *)((int)param_1 + 10));
    *(undefined2 *)((int)param_1 + 10) = 0xffff;
  }
  if (*param_1 != 0) {
    FUN_0002b65c(*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    FUN_0002b7c6(param_1[1]);
    param_1[1] = 0;
  }
  return;
}



int * FUN_0002bd68(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  
  piVar2 = (int *)(*DAT_0002be60)(param_1,DAT_0002be5c,0x10);
  if (piVar2 == (int *)0x0) {
    FUN_0002bafa(param_2,0);
  }
  iVar3 = FUN_0002b5f8(param_3);
  if (iVar3 == 0) {
    FUN_0002bafa(param_2,1);
  }
  (*DAT_0002be64)(param_2,iVar3,0);
  pcVar1 = DAT_0002be68;
  uVar5 = (uint)DAT_0002be5a;
  *piVar2 = iVar3;
  piVar2[1] = 0;
  *(undefined2 *)((int)piVar2 + 10) = 0xffff;
  *(undefined2 *)(piVar2 + 2) = 0xffff;
  pcVar4 = (char *)(int)DAT_0002be58;
  piVar2[3] = param_4;
  while ((uVar5 & (int)*pcVar4 & 0xffU) == 0) {
    (*pcVar1)(0x7f);
  }
  (*DAT_0002be70)(0,0,0,DAT_0002be6c);
  return piVar2;
}



int * FUN_0002bdec(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                  int param_6)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  piVar2 = (int *)(*DAT_0002be60)(param_1,DAT_0002be5c,0x10);
  if (piVar2 == (int *)0x0) {
    FUN_0002bafa(param_2,0);
  }
  if ((param_5 != 0) && (iVar5 = FUN_0002b768(param_5), iVar5 == 0)) {
    FUN_0002bafa(param_2,2);
  }
  pcVar1 = DAT_0002be64;
  if (param_3 != 0) {
    iVar4 = FUN_0002b5f8(param_3);
    if (iVar4 == 0) {
      FUN_0002bafa(param_2,1);
    }
    if (iVar5 == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = (int)*(short *)(iVar5 + 4);
    }
    (*pcVar1)(param_2,iVar4,iVar3);
  }
  if (iVar5 != 0) {
    (*pcVar1)(param_4,DAT_0002c0d8 + ((int)*(short *)(iVar5 + 4) & 0xffffU) * 8,0);
  }
  *piVar2 = iVar4;
  piVar2[1] = iVar5;
  *(undefined2 *)((int)piVar2 + 10) = 0xffff;
  *(undefined2 *)(piVar2 + 2) = 0xffff;
  piVar2[3] = param_6;
  return piVar2;
}



void FUN_0002c2b6(int param_1,uint param_2)

{
  undefined4 *puVar1;
  
  param_2 = param_2 >> 2;
  puVar1 = (undefined4 *)(DAT_0002c310 + param_1);
  do {
    param_2 = param_2 - 1;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (param_2 != 0);
  return;
}



void FUN_0002c2ca(int param_1,uint param_2)

{
  undefined4 *puVar1;
  
  param_2 = param_2 >> 2;
  puVar1 = (undefined4 *)(DAT_0002c314 + param_1);
  do {
    param_2 = param_2 - 1;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (param_2 != 0);
  return;
}



void FUN_0002c2de(void)

{
  FUN_0002c320(DAT_0002c318);
  FUN_0002c320(DAT_0002c31c);
  FUN_0002c5fe();
  return;
}



void FUN_0002c320(int *param_1)

{
  undefined *puVar1;
  
  *param_1 = (((int)*DAT_0002c3e0 & 1U) << 5 | (int)*DAT_0002c3e4 & 0xffffU & (uint)PTR_DAT_0002c3e8
             | 1) << 0x10;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (int)DAT_0002c3de;
  param_1[4] = -1;
  param_1[5] = -1;
  param_1[6] = -1;
  param_1[7] = -1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  puVar1 = PTR_DAT_0002c3ec;
  param_1[0x1e] = (int)PTR_DAT_0002c3ec;
  param_1[0x1f] = (int)puVar1;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  puVar1 = PTR_DAT_0002c3ec;
  param_1[0x22] = (int)PTR_DAT_0002c3ec;
  param_1[0x23] = (int)puVar1;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = DAT_0002c3f0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  return;
}



void FUN_0002c574(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0xe;
  iVar2 = DAT_0002c5b8;
  while (bVar1 = iVar3 != 0, iVar3 = iVar3 + -1, bVar1) {
    *(undefined *)(iVar2 + 0xf) = 0;
    iVar2 = iVar2 + 0x14;
  }
  return;
}



void FUN_0002c58c(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_0002c5bc;
  piVar2 = DAT_0002c5bc + 2;
  *DAT_0002c5bc = (int)piVar2;
  piVar1[1] = (int)piVar2;
  piVar1[6] = 0;
  return;
}



void FUN_0002c5fe(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  
  puVar1 = DAT_0002c6f8;
  puVar2 = (undefined2 *)*DAT_0002c6f4;
  iVar3 = (int)DAT_0002c6e8;
  *DAT_0002c6f8 = *puVar2;
  puVar1[1] = puVar2[1];
  puVar1[3] = puVar2[3];
  puVar1[7] = puVar2[7];
                    // WARNING: Could not recover jumptable at 0x0002c624. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0002c6fc)(puVar2 + 8,puVar1 + 8,iVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0002c628(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)DAT_0002c6f0 + (short)(((ushort)*DAT_0002c6f0 ^ 1) * 0x120) + 0x20;
  iVar2 = (int)DAT_0002c6f0 + (short)((ushort)*DAT_0002c6f0 * 0x120) + 0x20;
  (*DAT_0002c6fc)(iVar1,iVar2,0x70);
                    // WARNING: Could not recover jumptable at 0x0002c67c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0002c6fc)(DAT_0002c6ec + iVar1,_LAB_0002c6ea + 0x14 + iVar2);
  return;
}



void FUN_0002c680(void)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  pcVar2 = DAT_0002c6fc;
  puVar5 = (undefined4 *)*DAT_0002c700;
  iVar3 = *DAT_0002c6f0;
  while (puVar5 = (undefined4 *)puVar5[4], puVar5 != (undefined4 *)0x0) {
    *(undefined *)((int)puVar5 + 0xf) = 0;
    if (*(char *)((int)puVar5 + 0xe) == '\0') {
      sVar1 = *(short *)(puVar5 + 3);
      uVar6 = puVar5[2];
      uVar4 = *puVar5;
    }
    else {
      sVar1 = *(short *)(puVar5 + 3);
      uVar6 = puVar5[2];
      uVar4 = puVar5[iVar3];
    }
    (*pcVar2)(uVar4,uVar6,(int)sVar1 << 4);
  }
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_0002c951(undefined4 param_1)

{
  int in_r2;
  
  *(undefined4 *)(in_r2 + 8) = param_1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined4 FUN_0002f074(void)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  pcVar1 = DAT_0002f0f4;
  iVar3 = (*DAT_0002f0f4)(0);
  if ((iVar3 == 2) ||
     (iVar3 = (*pcVar1)(1), pcVar2 = DAT_0002f0fc, uVar4 = DAT_0002f0f8, iVar3 == 2)) {
    uVar4 = 2;
  }
  else {
    iVar7 = 0;
    iVar3 = 3;
    do {
      iVar5 = (*pcVar1)(iVar7);
      if (iVar5 == 0) {
        uVar6 = (*pcVar2)(iVar7,uVar4);
        iVar5 = (*DAT_0002f100)(uVar6);
        (*DAT_0002f104)(uVar6);
        if (iVar5 != 0) {
          return 0;
        }
        uVar6 = (*DAT_0002f108)();
        iVar5 = (*DAT_0002f10c)(iVar7,uVar6);
        if (iVar5 != 0) {
          return 0;
        }
      }
      iVar3 = iVar3 + -1;
      iVar7 = iVar7 + 1;
    } while (iVar3 != 0);
    uVar4 = 1;
  }
  return uVar4;
}



void FUN_0002f110(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  ushort *puVar4;
  int iVar5;
  
  (*DAT_0002f1b4)();
  (*DAT_0002f1c0)(DAT_0002f1bc,DAT_0002f1b8,0);
  (*DAT_0002f1c0)(DAT_0002f1c8,DAT_0002f1c4,0);
  (*DAT_0002f1d4)(DAT_0002f1d0,DAT_0002f1cc,0x20,0);
  pcVar3 = DAT_0002f1e4;
  iVar1 = DAT_0002f1dc;
  *(undefined4 *)(*(int *)(DAT_0002f1dc + 4) + 0x10) = DAT_0002f1d8;
  uVar2 = DAT_0002f1e0;
  *(undefined4 *)(iVar1 + 0x14) = 1;
  (*pcVar3)(uVar2);
  (*DAT_0002f1e8)(0,param_1 * 0x800 + DAT_0002f1c4,0,0,0);
  iVar5 = (int)DAT_0002f1b0;
  *(undefined2 *)(*(int *)(iVar1 + 4) + iVar5) = 6;
  *(undefined2 *)(*(int *)(iVar1 + 4) + iVar5 + 2) = DAT_0002f1b2;
  puVar4 = DAT_0002f1ec;
  *(undefined2 *)(*(int *)(iVar1 + 4) + iVar5 + 4) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 1;
  if ((*puVar4 & 1) == 0) {
    *DAT_0002f1f0 = 0;
    (*DAT_0002f1f8)(0,DAT_0002f1f4);
    *DAT_0002f1f0 = 4;
  }
  return;
}



void FUN_0002f23c(void)

{
  int iVar1;
  
  iVar1 = DAT_0002f334;
  *(undefined2 *)(*(int *)(DAT_0002f334 + 4) + 0x26) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 1;
  return;
}



void FUN_0002fdca(uint param_1,int param_2)

{
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
  
  iVar5 = ((int)DAT_0002fe48 & param_1) * 4;
  uVar6 = *(uint *)(DAT_0002fe50 + iVar5);
  uVar7 = *(uint *)(DAT_0002fe54 + iVar5);
  uVar10 = -uVar6;
  uVar8 = *(uint *)(param_2 + 4);
  uVar9 = uVar8 ^ uVar10;
  if ((int)uVar8 < 0) {
    uVar8 = -uVar8;
  }
  uVar4 = uVar10;
  if (0 < (int)uVar6) {
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
  if ((int)uVar9 < 0) {
    uVar8 = ~uVar8;
    if (uVar15 == 0) {
      uVar8 = uVar8 + 1;
    }
    else {
      uVar15 = ~uVar15 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((int)uVar8 < -0x8000) {
      uVar8 = 0xffff8000;
      uVar15 = 0;
    }
    if (0x7fff < (int)uVar8) {
      uVar8 = 0x7fff;
      uVar15 = 0xffffffff;
    }
    uVar8 = uVar8 & 0xffff;
  }
  uVar9 = *(uint *)(param_2 + 8);
  uVar4 = uVar9 ^ uVar7;
  if ((int)uVar9 < 0) {
    uVar9 = -uVar9;
  }
  uVar1 = uVar7;
  if ((int)uVar7 < 0) {
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
  if ((int)uVar4 < 0) {
    uVar9 = ~uVar9;
    if (uVar11 == 0) {
      uVar9 = uVar9 + 1;
    }
    else {
      uVar11 = ~uVar11 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar11 = uVar15 + uVar11;
    uVar8 = uVar9 + (uVar11 < uVar15) + (uVar8 & 0xffff);
    if ((int)uVar8 < -0x8000) {
      uVar8 = 0xffff8000;
      uVar11 = 0;
    }
    if (0x7fff < (int)uVar8) {
      uVar8 = 0x7fff;
      uVar11 = 0xffffffff;
    }
    uVar8 = uVar8 & 0xffff;
  }
  else {
    uVar11 = uVar15 + uVar11;
    uVar8 = uVar9 + (uVar11 < uVar15) + uVar8;
  }
  uVar9 = *(uint *)(param_2 + 4);
  uVar4 = uVar9 ^ uVar7;
  if ((int)uVar9 < 0) {
    uVar9 = -uVar9;
  }
  uVar1 = uVar7;
  if ((int)uVar7 < 0) {
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
  if ((int)uVar4 < 0) {
    uVar9 = ~uVar9;
    if (uVar13 == 0) {
      uVar9 = uVar9 + 1;
    }
    else {
      uVar13 = ~uVar13 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((int)uVar9 < -0x8000) {
      uVar9 = 0xffff8000;
      uVar13 = 0;
    }
    if (0x7fff < (int)uVar9) {
      uVar9 = 0x7fff;
      uVar13 = 0xffffffff;
    }
    uVar9 = uVar9 & 0xffff;
  }
  uVar4 = *(uint *)(param_2 + 8);
  uVar1 = uVar4 ^ uVar6;
  if ((int)uVar4 < 0) {
    uVar4 = -uVar4;
  }
  uVar14 = uVar6;
  if ((int)uVar6 < 0) {
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
  if ((int)uVar1 < 0) {
    uVar4 = ~uVar4;
    if (uVar12 == 0) {
      uVar4 = uVar4 + 1;
    }
    else {
      uVar12 = ~uVar12 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar12 = uVar13 + uVar12;
    uVar9 = uVar4 + (uVar12 < uVar13) + (uVar9 & 0xffff);
    if ((int)uVar9 < -0x8000) {
      uVar9 = 0xffff8000;
      uVar12 = 0;
    }
    if (0x7fff < (int)uVar9) {
      uVar9 = 0x7fff;
      uVar12 = 0xffffffff;
    }
    uVar9 = uVar9 & 0xffff;
  }
  else {
    uVar12 = uVar13 + uVar12;
    uVar9 = uVar4 + (uVar12 < uVar13) + uVar9;
  }
  *(uint *)(param_2 + 8) = uVar8 << 0x10 | uVar11 >> 0x10;
  *(uint *)(param_2 + 4) = uVar9 << 0x10 | uVar12 >> 0x10;
  uVar8 = *(uint *)(param_2 + 0x14);
  uVar9 = uVar8 ^ uVar10;
  if ((int)uVar8 < 0) {
    uVar8 = -uVar8;
  }
  uVar4 = uVar10;
  if (0 < (int)uVar6) {
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
  if ((int)uVar9 < 0) {
    uVar8 = ~uVar8;
    if (uVar15 == 0) {
      uVar8 = uVar8 + 1;
    }
    else {
      uVar15 = ~uVar15 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((int)uVar8 < -0x8000) {
      uVar8 = 0xffff8000;
      uVar15 = 0;
    }
    if (0x7fff < (int)uVar8) {
      uVar8 = 0x7fff;
      uVar15 = 0xffffffff;
    }
    uVar8 = uVar8 & 0xffff;
  }
  uVar9 = *(uint *)(param_2 + 0x18);
  uVar4 = uVar9 ^ uVar7;
  if ((int)uVar9 < 0) {
    uVar9 = -uVar9;
  }
  uVar1 = uVar7;
  if ((int)uVar7 < 0) {
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
  if ((int)uVar4 < 0) {
    uVar9 = ~uVar9;
    if (uVar11 == 0) {
      uVar9 = uVar9 + 1;
    }
    else {
      uVar11 = ~uVar11 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar11 = uVar15 + uVar11;
    uVar8 = uVar9 + (uVar11 < uVar15) + (uVar8 & 0xffff);
    if ((int)uVar8 < -0x8000) {
      uVar8 = 0xffff8000;
      uVar11 = 0;
    }
    if (0x7fff < (int)uVar8) {
      uVar8 = 0x7fff;
      uVar11 = 0xffffffff;
    }
    uVar8 = uVar8 & 0xffff;
  }
  else {
    uVar11 = uVar15 + uVar11;
    uVar8 = uVar9 + (uVar11 < uVar15) + uVar8;
  }
  uVar9 = *(uint *)(param_2 + 0x14);
  uVar4 = uVar9 ^ uVar7;
  if ((int)uVar9 < 0) {
    uVar9 = -uVar9;
  }
  uVar1 = uVar7;
  if ((int)uVar7 < 0) {
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
  if ((int)uVar4 < 0) {
    uVar9 = ~uVar9;
    if (uVar13 == 0) {
      uVar9 = uVar9 + 1;
    }
    else {
      uVar13 = ~uVar13 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((int)uVar9 < -0x8000) {
      uVar9 = 0xffff8000;
      uVar13 = 0;
    }
    if (0x7fff < (int)uVar9) {
      uVar9 = 0x7fff;
      uVar13 = 0xffffffff;
    }
    uVar9 = uVar9 & 0xffff;
  }
  uVar4 = *(uint *)(param_2 + 0x18);
  uVar1 = uVar4 ^ uVar6;
  if ((int)uVar4 < 0) {
    uVar4 = -uVar4;
  }
  uVar14 = uVar6;
  if ((int)uVar6 < 0) {
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
  if ((int)uVar1 < 0) {
    uVar4 = ~uVar4;
    if (uVar12 == 0) {
      uVar4 = uVar4 + 1;
    }
    else {
      uVar12 = ~uVar12 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar12 = uVar13 + uVar12;
    uVar9 = uVar4 + (uVar12 < uVar13) + (uVar9 & 0xffff);
    if ((int)uVar9 < -0x8000) {
      uVar9 = 0xffff8000;
      uVar12 = 0;
    }
    if (0x7fff < (int)uVar9) {
      uVar9 = 0x7fff;
      uVar12 = 0xffffffff;
    }
    uVar9 = uVar9 & 0xffff;
  }
  else {
    uVar12 = uVar13 + uVar12;
    uVar9 = uVar4 + (uVar12 < uVar13) + uVar9;
  }
  *(uint *)(param_2 + 0x18) = uVar8 << 0x10 | uVar11 >> 0x10;
  *(uint *)(param_2 + 0x14) = uVar9 << 0x10 | uVar12 >> 0x10;
  uVar8 = *(uint *)(param_2 + 0x24);
  uVar9 = uVar8 ^ uVar10;
  if ((int)uVar8 < 0) {
    uVar8 = -uVar8;
  }
  if (0 < (int)uVar6) {
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
  if ((int)uVar9 < 0) {
    uVar10 = ~uVar10;
    if (uVar14 == 0) {
      uVar10 = uVar10 + 1;
    }
    else {
      uVar14 = ~uVar14 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((int)uVar10 < -0x8000) {
      uVar10 = 0xffff8000;
      uVar14 = 0;
    }
    if (0x7fff < (int)uVar10) {
      uVar10 = 0x7fff;
      uVar14 = 0xffffffff;
    }
    uVar10 = uVar10 & 0xffff;
  }
  uVar8 = *(uint *)(param_2 + 0x28);
  uVar9 = uVar8 ^ uVar7;
  if ((int)uVar8 < 0) {
    uVar8 = -uVar8;
  }
  uVar4 = uVar7;
  if ((int)uVar7 < 0) {
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
  if ((int)uVar9 < 0) {
    uVar8 = ~uVar8;
    if (uVar13 == 0) {
      uVar8 = uVar8 + 1;
    }
    else {
      uVar13 = ~uVar13 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar13 = uVar14 + uVar13;
    uVar10 = uVar8 + (uVar13 < uVar14) + (uVar10 & 0xffff);
    if ((int)uVar10 < -0x8000) {
      uVar10 = 0xffff8000;
      uVar13 = 0;
    }
    if (0x7fff < (int)uVar10) {
      uVar10 = 0x7fff;
      uVar13 = 0xffffffff;
    }
    uVar10 = uVar10 & 0xffff;
  }
  else {
    uVar13 = uVar14 + uVar13;
    uVar10 = uVar8 + (uVar13 < uVar14) + uVar10;
  }
  uVar8 = *(uint *)(param_2 + 0x24);
  uVar9 = uVar8 ^ uVar7;
  if ((int)uVar8 < 0) {
    uVar8 = -uVar8;
  }
  if ((int)uVar7 < 0) {
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
  if ((int)uVar9 < 0) {
    uVar7 = ~uVar7;
    if (uVar14 == 0) {
      uVar7 = uVar7 + 1;
    }
    else {
      uVar14 = ~uVar14 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((int)uVar7 < -0x8000) {
      uVar7 = 0xffff8000;
      uVar14 = 0;
    }
    if (0x7fff < (int)uVar7) {
      uVar7 = 0x7fff;
      uVar14 = 0xffffffff;
    }
    uVar7 = uVar7 & 0xffff;
  }
  uVar8 = *(uint *)(param_2 + 0x28);
  uVar9 = uVar8 ^ uVar6;
  if ((int)uVar8 < 0) {
    uVar8 = -uVar8;
  }
  if ((int)uVar6 < 0) {
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
  if ((int)uVar9 < 0) {
    uVar6 = ~uVar6;
    if (uVar15 == 0) {
      uVar6 = uVar6 + 1;
    }
    else {
      uVar15 = ~uVar15 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar15 = uVar14 + uVar15;
    uVar7 = uVar6 + (uVar15 < uVar14) + (uVar7 & 0xffff);
    if ((int)uVar7 < -0x8000) {
      uVar7 = 0xffff8000;
      uVar15 = 0;
    }
    if (0x7fff < (int)uVar7) {
      uVar7 = 0x7fff;
      uVar15 = 0xffffffff;
    }
    uVar7 = uVar7 & 0xffff;
  }
  else {
    uVar15 = uVar14 + uVar15;
    uVar7 = uVar6 + (uVar15 < uVar14) + uVar7;
  }
  *(uint *)(param_2 + 0x28) = uVar10 << 0x10 | uVar13 >> 0x10;
  *(uint *)(param_2 + 0x24) = uVar7 << 0x10 | uVar15 >> 0x10;
  return;
}



void FUN_0002fe6a(uint param_1,uint *param_2)

{
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
  
  iVar6 = ((int)DAT_0002fef8 & param_1) * 4;
  uVar7 = *(uint *)(DAT_0002ff00 + iVar6);
  uVar8 = *(uint *)(DAT_0002ff04 + iVar6);
  uVar2 = -uVar7;
  uVar10 = *param_2;
  uVar9 = uVar10 ^ uVar7;
  if ((int)uVar10 < 0) {
    uVar10 = -uVar10;
  }
  uVar5 = uVar7;
  if ((int)uVar7 < 0) {
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
  if ((int)uVar9 < 0) {
    uVar10 = ~uVar10;
    if (uVar14 == 0) {
      uVar10 = uVar10 + 1;
    }
    else {
      uVar14 = ~uVar14 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((int)uVar10 < -0x8000) {
      uVar10 = 0xffff8000;
      uVar14 = 0;
    }
    if (0x7fff < (int)uVar10) {
      uVar10 = 0x7fff;
      uVar14 = 0xffffffff;
    }
    uVar10 = uVar10 & 0xffff;
  }
  uVar9 = param_2[2];
  uVar5 = uVar9 ^ uVar8;
  if ((int)uVar9 < 0) {
    uVar9 = -uVar9;
  }
  uVar1 = uVar8;
  if ((int)uVar8 < 0) {
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
  if ((int)uVar5 < 0) {
    uVar9 = ~uVar9;
    if (uVar13 == 0) {
      uVar9 = uVar9 + 1;
    }
    else {
      uVar13 = ~uVar13 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar13 = uVar14 + uVar13;
    uVar10 = uVar9 + (uVar13 < uVar14) + (uVar10 & 0xffff);
    if ((int)uVar10 < -0x8000) {
      uVar10 = 0xffff8000;
      uVar13 = 0;
    }
    if (0x7fff < (int)uVar10) {
      uVar10 = 0x7fff;
      uVar13 = 0xffffffff;
    }
    uVar10 = uVar10 & 0xffff;
  }
  else {
    uVar13 = uVar14 + uVar13;
    uVar10 = uVar9 + (uVar13 < uVar14) + uVar10;
  }
  uVar9 = *param_2;
  uVar5 = uVar9 ^ uVar8;
  if ((int)uVar9 < 0) {
    uVar9 = -uVar9;
  }
  uVar1 = uVar8;
  if ((int)uVar8 < 0) {
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
  if ((int)uVar5 < 0) {
    uVar9 = ~uVar9;
    if (uVar11 == 0) {
      uVar9 = uVar9 + 1;
    }
    else {
      uVar11 = ~uVar11 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((int)uVar9 < -0x8000) {
      uVar9 = 0xffff8000;
      uVar11 = 0;
    }
    if (0x7fff < (int)uVar9) {
      uVar9 = 0x7fff;
      uVar11 = 0xffffffff;
    }
    uVar9 = uVar9 & 0xffff;
  }
  uVar5 = param_2[2];
  uVar1 = uVar5 ^ uVar2;
  if ((int)uVar5 < 0) {
    uVar5 = -uVar5;
  }
  uVar15 = uVar2;
  if (0 < (int)uVar7) {
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
  if ((int)uVar1 < 0) {
    uVar5 = ~uVar5;
    if (uVar12 == 0) {
      uVar5 = uVar5 + 1;
    }
    else {
      uVar12 = ~uVar12 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar12 = uVar11 + uVar12;
    uVar9 = uVar5 + (uVar12 < uVar11) + (uVar9 & 0xffff);
    if ((int)uVar9 < -0x8000) {
      uVar9 = 0xffff8000;
      uVar12 = 0;
    }
    if (0x7fff < (int)uVar9) {
      uVar9 = 0x7fff;
      uVar12 = 0xffffffff;
    }
    uVar9 = uVar9 & 0xffff;
  }
  else {
    uVar12 = uVar11 + uVar12;
    uVar9 = uVar5 + (uVar12 < uVar11) + uVar9;
  }
  param_2[2] = uVar10 << 0x10 | uVar13 >> 0x10;
  *param_2 = uVar9 << 0x10 | uVar12 >> 0x10;
  uVar10 = param_2[4];
  uVar9 = uVar10 ^ uVar7;
  if ((int)uVar10 < 0) {
    uVar10 = -uVar10;
  }
  uVar5 = uVar7;
  if ((int)uVar7 < 0) {
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
  if ((int)uVar9 < 0) {
    uVar10 = ~uVar10;
    if (uVar14 == 0) {
      uVar10 = uVar10 + 1;
    }
    else {
      uVar14 = ~uVar14 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((int)uVar10 < -0x8000) {
      uVar10 = 0xffff8000;
      uVar14 = 0;
    }
    if (0x7fff < (int)uVar10) {
      uVar10 = 0x7fff;
      uVar14 = 0xffffffff;
    }
    uVar10 = uVar10 & 0xffff;
  }
  uVar9 = param_2[6];
  uVar5 = uVar9 ^ uVar8;
  if ((int)uVar9 < 0) {
    uVar9 = -uVar9;
  }
  uVar1 = uVar8;
  if ((int)uVar8 < 0) {
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
  if ((int)uVar5 < 0) {
    uVar9 = ~uVar9;
    if (uVar13 == 0) {
      uVar9 = uVar9 + 1;
    }
    else {
      uVar13 = ~uVar13 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar13 = uVar14 + uVar13;
    uVar10 = uVar9 + (uVar13 < uVar14) + (uVar10 & 0xffff);
    if ((int)uVar10 < -0x8000) {
      uVar10 = 0xffff8000;
      uVar13 = 0;
    }
    if (0x7fff < (int)uVar10) {
      uVar10 = 0x7fff;
      uVar13 = 0xffffffff;
    }
    uVar10 = uVar10 & 0xffff;
  }
  else {
    uVar13 = uVar14 + uVar13;
    uVar10 = uVar9 + (uVar13 < uVar14) + uVar10;
  }
  uVar9 = param_2[4];
  uVar5 = uVar9 ^ uVar8;
  if ((int)uVar9 < 0) {
    uVar9 = -uVar9;
  }
  uVar1 = uVar8;
  if ((int)uVar8 < 0) {
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
  if ((int)uVar5 < 0) {
    uVar9 = ~uVar9;
    if (uVar11 == 0) {
      uVar9 = uVar9 + 1;
    }
    else {
      uVar11 = ~uVar11 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((int)uVar9 < -0x8000) {
      uVar9 = 0xffff8000;
      uVar11 = 0;
    }
    if (0x7fff < (int)uVar9) {
      uVar9 = 0x7fff;
      uVar11 = 0xffffffff;
    }
    uVar9 = uVar9 & 0xffff;
  }
  uVar5 = param_2[6];
  uVar1 = uVar5 ^ uVar2;
  if ((int)uVar5 < 0) {
    uVar5 = -uVar5;
  }
  uVar15 = uVar2;
  if (0 < (int)uVar7) {
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
  if ((int)uVar1 < 0) {
    uVar5 = ~uVar5;
    if (uVar12 == 0) {
      uVar5 = uVar5 + 1;
    }
    else {
      uVar12 = ~uVar12 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar12 = uVar11 + uVar12;
    uVar9 = uVar5 + (uVar12 < uVar11) + (uVar9 & 0xffff);
    if ((int)uVar9 < -0x8000) {
      uVar9 = 0xffff8000;
      uVar12 = 0;
    }
    if (0x7fff < (int)uVar9) {
      uVar9 = 0x7fff;
      uVar12 = 0xffffffff;
    }
    uVar9 = uVar9 & 0xffff;
  }
  else {
    uVar12 = uVar11 + uVar12;
    uVar9 = uVar5 + (uVar12 < uVar11) + uVar9;
  }
  param_2[6] = uVar10 << 0x10 | uVar13 >> 0x10;
  param_2[4] = uVar9 << 0x10 | uVar12 >> 0x10;
  uVar10 = param_2[8];
  uVar9 = uVar10 ^ uVar7;
  if ((int)uVar10 < 0) {
    uVar10 = -uVar10;
  }
  uVar5 = uVar7;
  if ((int)uVar7 < 0) {
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
  if ((int)uVar9 < 0) {
    uVar10 = ~uVar10;
    if (uVar14 == 0) {
      uVar10 = uVar10 + 1;
    }
    else {
      uVar14 = ~uVar14 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((int)uVar10 < -0x8000) {
      uVar10 = 0xffff8000;
      uVar14 = 0;
    }
    if (0x7fff < (int)uVar10) {
      uVar10 = 0x7fff;
      uVar14 = 0xffffffff;
    }
    uVar10 = uVar10 & 0xffff;
  }
  uVar9 = param_2[10];
  uVar5 = uVar9 ^ uVar8;
  if ((int)uVar9 < 0) {
    uVar9 = -uVar9;
  }
  uVar1 = uVar8;
  if ((int)uVar8 < 0) {
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
  if ((int)uVar5 < 0) {
    uVar9 = ~uVar9;
    if (uVar13 == 0) {
      uVar9 = uVar9 + 1;
    }
    else {
      uVar13 = ~uVar13 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar13 = uVar14 + uVar13;
    uVar10 = uVar9 + (uVar13 < uVar14) + (uVar10 & 0xffff);
    if ((int)uVar10 < -0x8000) {
      uVar10 = 0xffff8000;
      uVar13 = 0;
    }
    if (0x7fff < (int)uVar10) {
      uVar10 = 0x7fff;
      uVar13 = 0xffffffff;
    }
    uVar10 = uVar10 & 0xffff;
  }
  else {
    uVar13 = uVar14 + uVar13;
    uVar10 = uVar9 + (uVar13 < uVar14) + uVar10;
  }
  uVar9 = param_2[8];
  uVar5 = uVar9 ^ uVar8;
  if ((int)uVar9 < 0) {
    uVar9 = -uVar9;
  }
  if ((int)uVar8 < 0) {
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
  if ((int)uVar5 < 0) {
    uVar8 = ~uVar8;
    if (uVar14 == 0) {
      uVar8 = uVar8 + 1;
    }
    else {
      uVar14 = ~uVar14 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((int)uVar8 < -0x8000) {
      uVar8 = 0xffff8000;
      uVar14 = 0;
    }
    if (0x7fff < (int)uVar8) {
      uVar8 = 0x7fff;
      uVar14 = 0xffffffff;
    }
    uVar8 = uVar8 & 0xffff;
  }
  uVar9 = param_2[10];
  uVar5 = uVar9 ^ uVar2;
  if ((int)uVar9 < 0) {
    uVar9 = -uVar9;
  }
  if (0 < (int)uVar7) {
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
  if ((int)uVar5 < 0) {
    uVar2 = ~uVar2;
    if (uVar15 == 0) {
      uVar2 = uVar2 + 1;
    }
    else {
      uVar15 = ~uVar15 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar15 = uVar14 + uVar15;
    uVar8 = uVar2 + (uVar15 < uVar14) + (uVar8 & 0xffff);
    if ((int)uVar8 < -0x8000) {
      uVar8 = 0xffff8000;
      uVar15 = 0;
    }
    if (0x7fff < (int)uVar8) {
      uVar8 = 0x7fff;
      uVar15 = 0xffffffff;
    }
    uVar8 = uVar8 & 0xffff;
  }
  else {
    uVar15 = uVar14 + uVar15;
    uVar8 = uVar2 + (uVar15 < uVar14) + uVar8;
  }
  param_2[10] = uVar10 << 0x10 | uVar13 >> 0x10;
  param_2[8] = uVar8 << 0x10 | uVar15 >> 0x10;
  return;
}



void FUN_0002ff1a(uint param_1,uint *param_2)

{
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
  
  iVar5 = ((int)DAT_0002ff96 & param_1) * 4;
  uVar6 = *(uint *)(DAT_0002ff9c + iVar5);
  uVar7 = *(uint *)(DAT_0002ffa0 + iVar5);
  uVar10 = -uVar6;
  uVar8 = *param_2;
  uVar9 = uVar8 ^ uVar10;
  if ((int)uVar8 < 0) {
    uVar8 = -uVar8;
  }
  uVar4 = uVar10;
  if (0 < (int)uVar6) {
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
  if ((int)uVar9 < 0) {
    uVar8 = ~uVar8;
    if (uVar15 == 0) {
      uVar8 = uVar8 + 1;
    }
    else {
      uVar15 = ~uVar15 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((int)uVar8 < -0x8000) {
      uVar8 = 0xffff8000;
      uVar15 = 0;
    }
    if (0x7fff < (int)uVar8) {
      uVar8 = 0x7fff;
      uVar15 = 0xffffffff;
    }
    uVar8 = uVar8 & 0xffff;
  }
  uVar9 = param_2[1];
  uVar4 = uVar9 ^ uVar7;
  if ((int)uVar9 < 0) {
    uVar9 = -uVar9;
  }
  uVar1 = uVar7;
  if ((int)uVar7 < 0) {
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
  if ((int)uVar4 < 0) {
    uVar9 = ~uVar9;
    if (uVar11 == 0) {
      uVar9 = uVar9 + 1;
    }
    else {
      uVar11 = ~uVar11 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar11 = uVar15 + uVar11;
    uVar8 = uVar9 + (uVar11 < uVar15) + (uVar8 & 0xffff);
    if ((int)uVar8 < -0x8000) {
      uVar8 = 0xffff8000;
      uVar11 = 0;
    }
    if (0x7fff < (int)uVar8) {
      uVar8 = 0x7fff;
      uVar11 = 0xffffffff;
    }
    uVar8 = uVar8 & 0xffff;
  }
  else {
    uVar11 = uVar15 + uVar11;
    uVar8 = uVar9 + (uVar11 < uVar15) + uVar8;
  }
  uVar9 = *param_2;
  uVar4 = uVar9 ^ uVar7;
  if ((int)uVar9 < 0) {
    uVar9 = -uVar9;
  }
  uVar1 = uVar7;
  if ((int)uVar7 < 0) {
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
  if ((int)uVar4 < 0) {
    uVar9 = ~uVar9;
    if (uVar13 == 0) {
      uVar9 = uVar9 + 1;
    }
    else {
      uVar13 = ~uVar13 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((int)uVar9 < -0x8000) {
      uVar9 = 0xffff8000;
      uVar13 = 0;
    }
    if (0x7fff < (int)uVar9) {
      uVar9 = 0x7fff;
      uVar13 = 0xffffffff;
    }
    uVar9 = uVar9 & 0xffff;
  }
  uVar4 = param_2[1];
  uVar1 = uVar4 ^ uVar6;
  if ((int)uVar4 < 0) {
    uVar4 = -uVar4;
  }
  uVar14 = uVar6;
  if ((int)uVar6 < 0) {
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
  if ((int)uVar1 < 0) {
    uVar4 = ~uVar4;
    if (uVar12 == 0) {
      uVar4 = uVar4 + 1;
    }
    else {
      uVar12 = ~uVar12 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar12 = uVar13 + uVar12;
    uVar9 = uVar4 + (uVar12 < uVar13) + (uVar9 & 0xffff);
    if ((int)uVar9 < -0x8000) {
      uVar9 = 0xffff8000;
      uVar12 = 0;
    }
    if (0x7fff < (int)uVar9) {
      uVar9 = 0x7fff;
      uVar12 = 0xffffffff;
    }
    uVar9 = uVar9 & 0xffff;
  }
  else {
    uVar12 = uVar13 + uVar12;
    uVar9 = uVar4 + (uVar12 < uVar13) + uVar9;
  }
  param_2[1] = uVar8 << 0x10 | uVar11 >> 0x10;
  *param_2 = uVar9 << 0x10 | uVar12 >> 0x10;
  uVar8 = param_2[4];
  uVar9 = uVar8 ^ uVar10;
  if ((int)uVar8 < 0) {
    uVar8 = -uVar8;
  }
  uVar4 = uVar10;
  if (0 < (int)uVar6) {
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
  if ((int)uVar9 < 0) {
    uVar8 = ~uVar8;
    if (uVar15 == 0) {
      uVar8 = uVar8 + 1;
    }
    else {
      uVar15 = ~uVar15 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((int)uVar8 < -0x8000) {
      uVar8 = 0xffff8000;
      uVar15 = 0;
    }
    if (0x7fff < (int)uVar8) {
      uVar8 = 0x7fff;
      uVar15 = 0xffffffff;
    }
    uVar8 = uVar8 & 0xffff;
  }
  uVar9 = param_2[5];
  uVar4 = uVar9 ^ uVar7;
  if ((int)uVar9 < 0) {
    uVar9 = -uVar9;
  }
  uVar1 = uVar7;
  if ((int)uVar7 < 0) {
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
  if ((int)uVar4 < 0) {
    uVar9 = ~uVar9;
    if (uVar11 == 0) {
      uVar9 = uVar9 + 1;
    }
    else {
      uVar11 = ~uVar11 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar11 = uVar15 + uVar11;
    uVar8 = uVar9 + (uVar11 < uVar15) + (uVar8 & 0xffff);
    if ((int)uVar8 < -0x8000) {
      uVar8 = 0xffff8000;
      uVar11 = 0;
    }
    if (0x7fff < (int)uVar8) {
      uVar8 = 0x7fff;
      uVar11 = 0xffffffff;
    }
    uVar8 = uVar8 & 0xffff;
  }
  else {
    uVar11 = uVar15 + uVar11;
    uVar8 = uVar9 + (uVar11 < uVar15) + uVar8;
  }
  uVar9 = param_2[4];
  uVar4 = uVar9 ^ uVar7;
  if ((int)uVar9 < 0) {
    uVar9 = -uVar9;
  }
  uVar1 = uVar7;
  if ((int)uVar7 < 0) {
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
  if ((int)uVar4 < 0) {
    uVar9 = ~uVar9;
    if (uVar13 == 0) {
      uVar9 = uVar9 + 1;
    }
    else {
      uVar13 = ~uVar13 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((int)uVar9 < -0x8000) {
      uVar9 = 0xffff8000;
      uVar13 = 0;
    }
    if (0x7fff < (int)uVar9) {
      uVar9 = 0x7fff;
      uVar13 = 0xffffffff;
    }
    uVar9 = uVar9 & 0xffff;
  }
  uVar4 = param_2[5];
  uVar1 = uVar4 ^ uVar6;
  if ((int)uVar4 < 0) {
    uVar4 = -uVar4;
  }
  uVar14 = uVar6;
  if ((int)uVar6 < 0) {
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
  if ((int)uVar1 < 0) {
    uVar4 = ~uVar4;
    if (uVar12 == 0) {
      uVar4 = uVar4 + 1;
    }
    else {
      uVar12 = ~uVar12 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar12 = uVar13 + uVar12;
    uVar9 = uVar4 + (uVar12 < uVar13) + (uVar9 & 0xffff);
    if ((int)uVar9 < -0x8000) {
      uVar9 = 0xffff8000;
      uVar12 = 0;
    }
    if (0x7fff < (int)uVar9) {
      uVar9 = 0x7fff;
      uVar12 = 0xffffffff;
    }
    uVar9 = uVar9 & 0xffff;
  }
  else {
    uVar12 = uVar13 + uVar12;
    uVar9 = uVar4 + (uVar12 < uVar13) + uVar9;
  }
  param_2[5] = uVar8 << 0x10 | uVar11 >> 0x10;
  param_2[4] = uVar9 << 0x10 | uVar12 >> 0x10;
  uVar8 = param_2[8];
  uVar9 = uVar8 ^ uVar10;
  if ((int)uVar8 < 0) {
    uVar8 = -uVar8;
  }
  if (0 < (int)uVar6) {
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
  if ((int)uVar9 < 0) {
    uVar10 = ~uVar10;
    if (uVar14 == 0) {
      uVar10 = uVar10 + 1;
    }
    else {
      uVar14 = ~uVar14 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((int)uVar10 < -0x8000) {
      uVar10 = 0xffff8000;
      uVar14 = 0;
    }
    if (0x7fff < (int)uVar10) {
      uVar10 = 0x7fff;
      uVar14 = 0xffffffff;
    }
    uVar10 = uVar10 & 0xffff;
  }
  uVar8 = param_2[9];
  uVar9 = uVar8 ^ uVar7;
  if ((int)uVar8 < 0) {
    uVar8 = -uVar8;
  }
  uVar4 = uVar7;
  if ((int)uVar7 < 0) {
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
  if ((int)uVar9 < 0) {
    uVar8 = ~uVar8;
    if (uVar13 == 0) {
      uVar8 = uVar8 + 1;
    }
    else {
      uVar13 = ~uVar13 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar13 = uVar14 + uVar13;
    uVar10 = uVar8 + (uVar13 < uVar14) + (uVar10 & 0xffff);
    if ((int)uVar10 < -0x8000) {
      uVar10 = 0xffff8000;
      uVar13 = 0;
    }
    if (0x7fff < (int)uVar10) {
      uVar10 = 0x7fff;
      uVar13 = 0xffffffff;
    }
    uVar10 = uVar10 & 0xffff;
  }
  else {
    uVar13 = uVar14 + uVar13;
    uVar10 = uVar8 + (uVar13 < uVar14) + uVar10;
  }
  uVar8 = param_2[8];
  uVar9 = uVar8 ^ uVar7;
  if ((int)uVar8 < 0) {
    uVar8 = -uVar8;
  }
  if ((int)uVar7 < 0) {
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
  if ((int)uVar9 < 0) {
    uVar7 = ~uVar7;
    if (uVar14 == 0) {
      uVar7 = uVar7 + 1;
    }
    else {
      uVar14 = ~uVar14 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((int)uVar7 < -0x8000) {
      uVar7 = 0xffff8000;
      uVar14 = 0;
    }
    if (0x7fff < (int)uVar7) {
      uVar7 = 0x7fff;
      uVar14 = 0xffffffff;
    }
    uVar7 = uVar7 & 0xffff;
  }
  uVar8 = param_2[9];
  uVar9 = uVar8 ^ uVar6;
  if ((int)uVar8 < 0) {
    uVar8 = -uVar8;
  }
  if ((int)uVar6 < 0) {
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
  if ((int)uVar9 < 0) {
    uVar6 = ~uVar6;
    if (uVar15 == 0) {
      uVar6 = uVar6 + 1;
    }
    else {
      uVar15 = ~uVar15 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar15 = uVar14 + uVar15;
    uVar7 = uVar6 + (uVar15 < uVar14) + (uVar7 & 0xffff);
    if ((int)uVar7 < -0x8000) {
      uVar7 = 0xffff8000;
      uVar15 = 0;
    }
    if (0x7fff < (int)uVar7) {
      uVar7 = 0x7fff;
      uVar15 = 0xffffffff;
    }
    uVar7 = uVar7 & 0xffff;
  }
  else {
    uVar15 = uVar14 + uVar15;
    uVar7 = uVar6 + (uVar15 < uVar14) + uVar7;
  }
  param_2[9] = uVar10 << 0x10 | uVar13 >> 0x10;
  param_2[8] = uVar7 << 0x10 | uVar15 >> 0x10;
  return;
}



void FUN_0003098a(void)

{
  return;
}



uint FUN_00030990(void)

{
  byte *pbVar1;
  undefined *puVar2;
  int iVar3;
  uint in_sr;
  
  iVar3 = *DAT_00030a60;
  *DAT_00030a60 = iVar3 + 1;
  if (iVar3 + 1 == 1) {
    FUN_00030a2e();
    puVar2 = DAT_00030a6c;
    pbVar1 = DAT_00030a68;
    do {
    } while ((*DAT_00030a68 & 1) == 1);
    *DAT_00030a68 = 1;
    *puVar2 = 0x1a;
    do {
    } while ((*pbVar1 & 1) != 0);
  }
  return in_sr >> 4 & 0xf;
}



uint FUN_000309e0(uint param_1)

{
  uint uVar1;
  byte *pbVar2;
  uint in_sr;
  uint uVar3;
  
  uVar1 = (uint)(*DAT_00030a60 + -1 == 0);
  uVar3 = in_sr & 0xfffffffe | uVar1;
  *DAT_00030a60 = *DAT_00030a60 + -1;
  pbVar2 = DAT_00030a68;
  if (uVar1 != 0) {
    do {
      uVar3 = uVar3 & 0xfffffffe | (uint)((*DAT_00030a68 & 1) == 1);
    } while (((byte)uVar3 & 1) == 1);
    *DAT_00030a68 = 1;
    *DAT_00030a6c = 0x19;
    do {
      uVar1 = (uint)((*pbVar2 & 1) == 0);
      uVar3 = uVar3 & 0xfffffffe | uVar1;
    } while (uVar1 == 0);
    FUN_00030a46();
  }
  return (param_1 & 0xf) << 4 | uVar3 & (int)DAT_00030a5c;
}



void FUN_00030a2e(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = DAT_00030a78;
  puVar2 = DAT_00030a70;
  *DAT_00030a74 = *DAT_00030a70;
  *puVar2 = uVar1;
  puVar2 = puVar2 + 1;
  *DAT_00030a7c = *puVar2;
  *puVar2 = uVar1;
  return;
}



void FUN_00030a46(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00030a80;
  *DAT_00030a70 = *DAT_00030a74;
  *puVar1 = *DAT_00030a7c;
  return;
}



undefined4 FUN_00030a84(void)

{
  int iVar1;
  undefined auStack28 [28];
  
  iVar1 = FUN_00030b00(2,0,auStack28);
  if (iVar1 == 1) {
    return 0;
  }
  return 1;
}



undefined4 FUN_00030b00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00030990();
  uVar2 = (**(code **)(*DAT_00030c84 + 0xc))(param_1,param_2,param_3);
  FUN_000309e0(uVar1);
  return uVar2;
}



undefined4 FUN_00030d0c(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int local_28;
  int iStack36;
  
  pcVar1 = DAT_00030de8;
  iVar2 = 0;
  while( true ) {
    (*pcVar1)(param_1);
    (*pcVar1)(&local_28);
    if ((*param_1 == local_28) && (param_1[1] == iStack36)) break;
    iVar2 = iVar2 + 1;
    if (99 < iVar2) {
      return 0xfffffffd;
    }
  }
  return 0;
}



undefined4 FUN_00030f6a(uint *param_1)

{
  undefined4 uVar1;
  uint local_1c [2];
  undefined4 local_14;
  undefined4 uStack16;
  
  uStack16 = 0;
  local_14 = 0x6000000;
  uVar1 = (*DAT_00030fb8)(0,&local_14,local_1c);
  *param_1 = local_1c[0] & DAT_00030fbc;
  (*DAT_00030fb4)(0xfffffffd);
  return uVar1;
}



int FUN_00031004(int *param_1,byte *param_2)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  iVar1 = *param_1;
  pbVar3 = param_2 + 1;
  pbVar4 = param_2 + 2;
  if (iVar1 == 0) {
LAB_00031054:
    *param_2 = 0;
    *pbVar3 = 0;
    *pbVar4 = 0;
    return iVar1;
  }
  if (iVar1 == 1) {
    *param_2 = *(byte *)((int)param_1 + 5) | 0x80;
    *pbVar3 = *(byte *)((int)param_1 + 6);
    bVar2 = *(byte *)((int)param_1 + 7);
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        bVar2 = (byte)DAT_000310b4;
        *param_2 = bVar2;
        *pbVar3 = bVar2;
        *pbVar4 = bVar2;
        return 3;
      }
      goto LAB_00031054;
    }
    *param_2 = 0;
    *pbVar3 = *(byte *)(param_1 + 1);
    bVar2 = *(byte *)((int)param_1 + 5);
  }
  *pbVar4 = bVar2;
  return (int)(char)bVar2;
}



void FUN_000310dc(undefined2 param_1)

{
  *DAT_000311e0 = param_1;
  return;
}



int FUN_000311a2(uint param_1,undefined4 param_2,char *param_3)

{
  ushort *puVar1;
  int iVar2;
  undefined auStack24 [4];
  undefined4 uStack20;
  
  puVar1 = DAT_000311e4;
  *DAT_000311e4 = *DAT_000311e4 | *DAT_000311e0;
  if (((int)(short)*puVar1 & 0xffffU & param_1) == param_1) {
    if (((int)(short)*puVar1 & 1U) == 0) {
      iVar2 = -2;
    }
    else {
      uStack20 = param_2;
      FUN_000310dc(~(param_1 | 1));
      *puVar1 = *puVar1 & (ushort)DAT_000312c4;
      FUN_0003128c(uStack20);
      iVar2 = FUN_0003125c(1,auStack24);
      if (iVar2 == 0) {
        FUN_000312a6(param_3);
        if (((int)*param_3 & 0xffU) == (int)DAT_000312be) {
          iVar2 = -5;
        }
        else if (((int)DAT_000312c0 & (int)*param_3 & 0xffU) != 0) {
          iVar2 = -6;
        }
        if (iVar2 == 0) {
          *puVar1 = *puVar1 & ~(ushort)param_1;
        }
      }
    }
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}



undefined4 FUN_0003125c(uint param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (((int)*DAT_000312c8 & 0xffffU & param_1) != 0) {
      *param_2 = (int)*DAT_000312c8 & 0xffffU;
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < DAT_000312cc);
  return 0xfffffffd;
}



void FUN_0003128c(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  puVar2 = DAT_000312d4;
  puVar1 = DAT_000312d0;
  *DAT_000312d0 = *param_1;
  puVar3 = DAT_000312d8;
  *puVar2 = param_1[1];
  *puVar3 = param_1[2];
  puVar1[6] = param_1[3];
  return;
}



void FUN_000312a6(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  puVar2 = DAT_000312d4;
  puVar1 = DAT_000312d0;
  *param_1 = *DAT_000312d0;
  puVar3 = DAT_000312d8;
  param_1[1] = *puVar2;
  param_1[2] = *puVar3;
  param_1[3] = puVar1[6];
  return;
}



undefined4 FUN_000317f4(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    (*DAT_00031874)((int)DAT_00031868);
    return 0xffffffff;
  }
  iVar1 = (*DAT_00031878)();
  return *(undefined4 *)(iVar1 + 4);
}



undefined4
FUN_00031d6a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uStack56;
  undefined4 uStack52;
  undefined4 uStack48;
  undefined4 uStack44;
  undefined4 uStack40;
  undefined4 uStack36;
  undefined4 uStack32;
  undefined4 uStack28;
  undefined4 uStack24;
  undefined4 uStack20;
  undefined4 uStack16;
  undefined4 uStack12;
  
  uStack52 = param_5;
  uStack48 = 0;
  uStack44 = 0;
  uStack40 = 0;
  uStack36 = 1;
  uStack32 = 0;
  uStack28 = 0;
  uStack24 = param_6;
  uStack20 = param_7;
  uStack16 = 0;
  uStack12 = 7;
  uStack56 = param_4;
  uVar1 = (*DAT_00031df4)(param_2,param_3,&uStack56);
  return uVar1;
}



int FUN_00031e1a(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00031ee0 + 4;
  if ((0 < *(int *)(*param_1 + iVar1) - *(int *)(*param_1 + (int)DAT_00031ee0)) &&
     (iVar1 = (*DAT_00031ef0)(*(undefined4 *)(*param_1 + (int)DAT_00031ede)), iVar1 < 0)) {
                    // WARNING: Could not recover jumptable at 0x00031e48. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar1 = (*DAT_00031ef4)((int)DAT_00031ee2);
    return iVar1;
  }
  return iVar1;
}



int FUN_00031e84(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_20;
  int iStack28;
  undefined4 uStack24;
  undefined auStack20 [8];
  
  iVar1 = DAT_00031ee6 + -4;
  if (*(int *)(*param_1 + (int)DAT_00031ee6) <= *(int *)(*param_1 + iVar1)) {
    return iVar1;
  }
  if ((*(int *)(*param_1 + (int)DAT_00031ee8) == 0) &&
     ((*DAT_00031f00)(param_1,&uStack24,&iStack28), DAT_00031eea <= iStack28)) {
    if (iStack28 < *(int *)(*param_1 + (int)DAT_00031edc) << 0xb) {
      iVar1 = (*DAT_00031ffc)();
    }
    else {
      iVar1 = *(int *)(*param_1 + (int)DAT_00031edc);
    }
    iVar2 = (*DAT_00032000)(*(undefined4 *)(*param_1 + (int)DAT_00031fee),iVar1,uStack24,
                            iVar1 << 0xb);
    if (iVar2 < 0) goto LAB_00031f5a;
    iVar2 = (int)DAT_00031ff0;
    *(int *)(*param_1 + iVar2) = iVar1 << 0xb;
    *(undefined4 *)(*param_1 + iVar2 + -4) = 1;
    *(undefined4 *)(*param_1 + iVar2 + 4) = 0;
  }
  if (*(int *)((int)DAT_00031ff2 + *param_1) != 1) {
    return *(int *)((int)DAT_00031ff2 + *param_1);
  }
  iVar1 = (*DAT_00032004)(*(undefined4 *)(*param_1 + (int)DAT_00031fee));
  if (-1 < iVar1) {
    (*DAT_0003200c)(*(undefined4 *)(*param_1 + (int)DAT_00031fee),auStack20,&local_20);
    if (0 < local_20) {
      iVar2 = local_20 - *(int *)(*param_1 + (int)DAT_00031ff6);
      *(int *)(*param_1 + (int)DAT_00031ff6) = local_20;
      if (0 < iVar2) {
        (*DAT_00032010)(param_1,iVar2);
      }
    }
    if ((local_20 < *(int *)(*param_1 + (int)DAT_00031ff0)) && (iVar1 != 0)) {
      return (int)DAT_00031ff0;
    }
    iVar1 = (int)DAT_00031ff2;
    *(undefined4 *)(*param_1 + iVar1) = 0;
    return iVar1;
  }
LAB_00031f5a:
  iVar1 = (*DAT_00032008)((int)DAT_00031ff4);
  return iVar1;
}



int FUN_000324bc(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_c [2];
  
  if (param_2 != 0) {
    iVar1 = FUN_0003272a();
    if (iVar1 == 0) {
      return *(int *)((int)DAT_000325ae + *DAT_000325b4);
    }
    FUN_00032976(iVar1,0,local_c);
    iVar2 = (*DAT_000325c0)(iVar1,param_2,local_c[0]);
    FUN_000327d4(iVar1);
    return iVar2;
  }
  if (*(int *)(*DAT_000325b4 + (int)DAT_000325ac) != 0) {
    iVar1 = (*DAT_000325b8)(0xfffffff9);
    return iVar1;
  }
  iVar1 = (*DAT_000325bc)();
  if (iVar1 < 0) {
    iVar1 = (*DAT_000325b8)();
    return iVar1;
  }
  return iVar1;
}



void FUN_00032548(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *DAT_000325b4 + (int)DAT_000325b0;
  if (param_1 == 0) {
    if (*(int *)(iVar2 + 8) != 0) {
                    // WARNING: Could not recover jumptable at 0x00032564. Too many branches
                    // WARNING: Treating indirect jump as call
      (*DAT_000325b8)(0xfffffff9);
      return;
    }
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  else {
    (*DAT_000325c4)();
    uVar1 = FUN_0003340c();
    *(undefined4 *)(iVar2 + 0xc) = uVar1;
  }
                    // WARNING: Could not recover jumptable at 0x00032588. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_000325b8)(0);
  return;
}



int FUN_0003272a(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  piVar4 = (int *)(*DAT_000327c0 + (int)DAT_000327be);
  if ((piVar4[2] == 0) || ((-1 < param_1 && (param_1 < piVar4[3])))) {
    iVar1 = FUN_0003346c();
    if (iVar1 == 0) {
      FUN_00033530(0xffffffed);
      iVar1 = 0;
    }
    else {
      if (piVar4[2] == 0) {
        uVar3 = 0;
      }
      else if (*piVar4 == 0) {
        uVar3 = (*DAT_000327cc)(param_1,piVar4[2]);
      }
      else {
        uVar3 = (*DAT_000327d0)(param_1,piVar4[2]);
      }
      iVar1 = FUN_00033644(iVar1,uVar3,param_1);
      if (iVar1 == 0) {
        FUN_00033530(0xfffffff6);
      }
      else {
        iVar2 = FUN_00033530(0);
        if (iVar2 < 0) {
          iVar1 = 0;
        }
      }
    }
  }
  else {
    FUN_00033530(0xfffffff6);
    iVar1 = 0;
  }
  return iVar1;
}



void FUN_000327d4(int param_1)

{
  if (param_1 != 0) {
    FUN_000334bc(param_1,1);
    (*DAT_000329e8)(param_1);
  }
  FUN_00033530(0);
  return;
}



int FUN_000327f2(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_1c;
  int iStack24;
  
  if (param_1 == 0) {
    uVar3 = 0xfffffff5;
  }
  else {
    iVar2 = *DAT_000329ec + 4 + *(int *)(param_1 + 0x28) * 0x10;
    FUN_00032976(param_1,0,&local_1c);
    if (param_3 == 1) {
      iVar1 = (**(code **)(iVar2 + 0xc))(param_1 + 0xc);
      param_2 = param_2 + iVar1;
    }
    else if (param_3 == 2) {
      param_2 = param_2 + local_1c;
    }
    else if (param_3 != 0) {
      uVar3 = 0xfffffff3;
      goto LAB_00032850;
    }
    if (-1 < param_2) {
      if (local_1c < param_2) {
        iVar2 = FUN_00033530(0xfffffff4);
        return iVar2;
      }
      iStack24 = (**(code **)(iVar2 + 8))(param_1 + 0xc,param_2);
      iVar2 = FUN_00033530(0);
      if (-1 < iVar2) {
        return iStack24;
      }
      return iVar2;
    }
    uVar3 = 0xfffffff4;
  }
LAB_00032850:
  iVar2 = FUN_00033530(uVar3);
  return iVar2;
}



int FUN_0003288e(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    iVar1 = FUN_00033530(0xfffffff5);
    return iVar1;
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0x28) * 0x10 + *DAT_000329ec + 0x10))();
  iVar2 = FUN_00033530(0);
  if (iVar2 < 0) {
    return iVar2;
  }
  return iVar1;
}



void FUN_00032976(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint local_1c;
  undefined4 *puStack24;
  undefined4 uStack20;
  undefined4 uStack16;
  int iStack12;
  
  puStack24 = param_2;
  uStack20 = param_4;
  uStack16 = param_3;
  if (param_1 == 0) {
    FUN_00033530(0xfffffff5);
  }
  else {
    iStack12 = param_1 + 0xc;
    (*DAT_000329f4)(iStack12,0,0,param_2,param_3,param_4,0,&local_1c);
    if (((local_1c & 8) != 0) && ((local_1c & 0x10) != 0)) {
      *puStack24 = 0;
    }
  }
  FUN_00033530(0);
  return;
}



void FUN_000329ce(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,uint *param_5)

{
  int local_1c;
  int iStack24;
  int *piStack20;
  undefined4 uStack16;
  int iStack12;
  
  piStack20 = param_4;
  uStack16 = param_3;
  if (param_1 == 0) {
    FUN_00033530(0xfffffff5);
  }
  else {
    iStack12 = param_1 + 0xc;
    (*DAT_00032af4)(iStack12,param_2,0,0,&local_1c,&iStack24,param_3,param_5);
    if (param_5 != (uint *)0x0) {
      *param_5 = *param_5 & 0xfffffff9;
    }
    if (piStack20 != (int *)0x0) {
      *piStack20 = (local_1c + -1) * 0x800 + iStack24;
    }
  }
  FUN_00033530(0);
  return;
}



int FUN_00032b04(int param_1)

{
  int iVar1;
  int iVar2;
  int local_14;
  undefined auStack16 [8];
  
  if (param_1 == 0) {
    iVar1 = FUN_00033530(0xfffffff5);
  }
  else {
    iVar1 = FUN_00032bfa(param_1);
    if (iVar1 == 0) {
      iVar2 = FUN_00033096(param_1,DAT_00032cf0);
      iVar1 = FUN_00032b72(param_1);
      if (iVar1 < 0) {
        local_14 = FUN_00033530();
      }
      else {
        FUN_00032e04(param_1,auStack16,&local_14);
        iVar1 = FUN_00033530(0);
        if (iVar1 < 0) {
          return iVar1;
        }
      }
      iVar1 = local_14;
      if (-1 < iVar2) {
        FUN_00033096(param_1,iVar2);
        iVar1 = local_14;
      }
    }
  }
  return iVar1;
}



int FUN_00032b72(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_1c [2];
  
  FUN_000329ce(param_1,0,0,0,local_1c);
  iVar1 = DAT_00032cf4;
  if ((local_1c[0] & 0x40) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = -1;
  }
  do {
    iVar2 = FUN_00032e90(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    if (iVar2 < 0) {
      return iVar2;
    }
    if (*(int *)(param_1 + 0xa0) == 6) {
      if (*(int *)(param_1 + 0x28) != 0) {
        return iVar2;
      }
      if (*DAT_00032cf8 < *(int *)(param_1 + 0x54)) {
        return iVar2;
      }
      if (*DAT_00032cfc != 2) {
        return iVar2;
      }
    }
    if (((*(int *)(param_1 + 0x74) == 0) && (-1 < iVar3)) && (iVar3 = iVar3 + 1, iVar1 < iVar3)) {
      return -0x16;
    }
  } while( true );
}



void FUN_00032bfa(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint local_34;
  int iStack48;
  undefined4 uStack44;
  undefined4 uStack40;
  int iStack36;
  
  iStack48 = param_2;
  uStack44 = param_3;
  uStack40 = param_4;
  if (param_1 == 0) {
    uVar3 = 0xfffffff5;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x20);
    iVar5 = param_1 + 0x6c;
    iStack36 = param_1 + 0xc;
    iVar2 = FUN_0003288e(param_1);
    iVar4 = iVar4 - iVar2;
    iVar2 = iStack48;
    if (iVar4 < iStack48) {
      iVar2 = iVar4;
    }
    if (iVar2 < 0) {
      uVar3 = 0xffffffef;
    }
    else {
      bVar1 = *(int *)(param_1 + 4) == 0;
      if (bVar1) {
        FUN_00033a0c(param_1 + 0xc,iVar2);
      }
      *(undefined4 *)(param_1 + 4) = 1;
      FUN_000329ce(param_1,0,0,0,&local_34);
      if ((local_34 & 0x40) == 0) {
        if ((*(int *)(param_1 + 0xa0) == 0) || (*(int *)(param_1 + 0xa0) == 6)) {
          (*DAT_00032d00)(iVar5,iVar2);
          (*DAT_00032d04)(iVar5,uStack44,uStack40,1);
          (*DAT_00032d08)(iVar5);
          bVar1 = true;
        }
      }
      else {
        (*DAT_00032d00)(iVar5,0);
        (*DAT_00032d04)(iVar5,0,0,1);
      }
      if (bVar1) {
        FUN_000335c4(param_1);
        *(undefined4 *)(param_1 + 8) = 1;
        uVar3 = 0;
      }
      else {
        uVar3 = 0xfffffff0;
      }
    }
  }
  FUN_00033530(uVar3);
  return;
}



void FUN_00032e04(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint local_14;
  int iStack16;
  
  if (param_1 == 0) {
    FUN_00033530(0xfffffff5);
  }
  else {
    iStack16 = param_1 + 0x6c;
    *param_2 = *(undefined4 *)(param_1 + 4);
    FUN_000329ce(param_1,0,0,0,&local_14);
    if ((local_14 & 0x40) == 0) {
      if (*(int *)(param_1 + 4) == 2) {
        uVar1 = (*DAT_00032f1c)(param_1);
        *param_3 = uVar1;
      }
      else {
        *param_3 = *(undefined4 *)(iStack16 + 8);
      }
    }
    else {
      *param_3 = 0;
    }
  }
  FUN_00033530(0);
  return;
}



undefined4 FUN_00032e66(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x28) == 0) && (iVar1 = (*DAT_00032f20)(), iVar1 == 2)) {
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return *(undefined4 *)(param_1 + 8);
}



int FUN_00032e90(int param_1)

{
  int iVar1;
  undefined auStack12 [8];
  
  if (param_1 == 0) {
    iVar1 = FUN_00033530(0xfffffff5);
    return iVar1;
  }
  if (*(int *)(param_1 + 8) != 0) {
    if ((*DAT_00032f24 == 1) && ((*DAT_00032f28)(param_1,auStack12), *DAT_00032f24 == 1)) {
      return *(int *)(param_1 + 8);
    }
    if (*(int *)(param_1 + 8) == -1) {
      iVar1 = FUN_00032e66(param_1);
      return iVar1;
    }
    iVar1 = FUN_0003386e(param_1);
    if (iVar1 < 0) {
      return iVar1;
    }
    if ((*(int *)(param_1 + 0x5c) != 0) && (iVar1 = FUN_00033906(param_1), iVar1 == 6)) {
      iVar1 = FUN_0003386e(param_1);
      if (iVar1 < 0) {
        return iVar1;
      }
      iVar1 = FUN_00033ae2(param_1);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        FUN_000335f8(param_1);
      }
    }
  }
  iVar1 = FUN_00033530(0);
  if (iVar1 < 0) {
    return iVar1;
  }
  return *(int *)(param_1 + 8);
}



int FUN_00033096(int param_1,undefined4 param_2)

{
  int iVar1;
  uint local_14;
  undefined4 uStack16;
  int iStack12;
  
  uStack16 = param_2;
  if (param_1 == 0) {
    iVar1 = FUN_00033530(0xfffffff5);
    return iVar1;
  }
  FUN_000329ce(param_1,0,0,0,&local_14);
  if ((local_14 & 0x40) != 0) {
    return -0x11;
  }
  iStack12 = *(int *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x68) = uStack16;
  iVar1 = FUN_00033530(0);
  if (iVar1 < 0) {
    return iVar1;
  }
  return iStack12;
}



undefined4 FUN_0003324e(void)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_000332a4)();
  return uVar1;
}



int FUN_000332b0(int param_1)

{
  int iVar1;
  
  if (*DAT_0003336c == '\x01') {
    if (param_1 != 0) {
      (*DAT_00033370)(1);
    }
    iVar1 = (*DAT_00033374)();
    if (iVar1 < 0) {
      iVar1 = FUN_00033530(0xfffffff9);
      return iVar1;
    }
    iVar1 = *DAT_00033378 + (int)DAT_00033368;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 4) = 0;
    FUN_00032548(0);
    if (param_1 != 0) {
      (*DAT_00033370)(0);
    }
    iVar1 = FUN_000324bc(*DAT_0003337c,param_1);
  }
  else if (param_1 == 0) {
    iVar1 = (*DAT_00033374)();
    if (iVar1 < 0) {
      iVar1 = -7;
LAB_00033332:
      iVar1 = FUN_00033530(iVar1);
      return iVar1;
    }
  }
  else {
    iVar1 = FUN_000337e4(param_1);
    if (iVar1 < 1) goto LAB_00033332;
  }
  FUN_00032548(param_1);
  FUN_00033530(0);
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00033350(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = _LAB_00033384;
  iVar2 = *DAT_00033378;
  *(undefined4 *)(iVar2 + 4) = _LAB_00033380;
  *(undefined4 *)(iVar2 + 8) = uVar1;
  uVar1 = _LAB_0003338c;
  *(undefined4 *)(iVar2 + 0xc) = _LAB_00033388;
  *(undefined4 *)(iVar2 + 0x10) = uVar1;
  return;
}



int FUN_0003340c(int *param_1)

{
  code *pcVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  
  pcVar2 = DAT_000334b8;
  pcVar1 = DAT_000334b4;
  for (iVar4 = 0; iVar4 < param_1[1]; iVar4 = iVar4 + 1) {
    if (*param_1 == 0) {
      uVar3 = (*pcVar2)(iVar4,param_1[2]);
    }
    else {
      uVar3 = (*pcVar1)(iVar4,param_1[2]);
    }
    if ((uVar3 & 1) != 0) break;
  }
  if (param_1[1] < iVar4) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}



int * FUN_0003346c(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *DAT_000334b0;
  iVar2 = 0;
  for (piVar1 = (int *)((int)DAT_000334a6 + (int)piVar3); (iVar2 < *piVar3 && (*piVar1 != 0));
      piVar1 = (int *)((int)piVar1 + (int)DAT_000334a8)) {
    iVar2 = iVar2 + 1;
  }
  if (iVar2 == *piVar3) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = 1;
  }
  return piVar1;
}



void FUN_0003349e(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



void FUN_000334bc(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  pcVar2 = DAT_000335bc;
  piVar1 = DAT_000335b8;
  if (*(int *)(*DAT_000335b8 + (int)DAT_000335b0) == param_1) {
    *(undefined4 *)(*DAT_000335b8 + (int)DAT_000335b0) = 0;
    (*pcVar2)(param_1,0xffffffff);
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if ((*(int *)(*piVar1 + (int)DAT_000335b2) == param_1) ||
     ((iVar3 != 0 && (*(int *)(*piVar1 + (int)DAT_000335b2) == 0)))) {
    *(undefined4 *)(*piVar1 + (int)DAT_000335b2) = 0;
    (**(code **)(iVar3 * 0x10 + *piVar1 + 8))(param_1 + 0xc,param_2);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return;
}



code * FUN_00033530(code *param_1)

{
  int iVar1;
  code **ppcVar2;
  
  iVar1 = *DAT_000335c0;
  if (iVar1 == -0x10) {
    param_1 = (code *)0xffffffe7;
  }
  else if (iVar1 == -0xe) {
    param_1 = (code *)0xfffffffe;
  }
  else if (iVar1 == -0xd) {
    param_1 = (code *)0xffffffe9;
  }
  ppcVar2 = (code **)(*DAT_000335b8 + (int)DAT_000335b4);
  ppcVar2[2] = param_1;
  if ((param_1 != (code *)0x0) && (*ppcVar2 != (code *)0x0)) {
    (**ppcVar2)(ppcVar2[1],param_1);
  }
  return param_1;
}



int FUN_00033580(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_000335b8;
  for (iVar1 = 0;
      (iVar1 < *(int *)(iVar2 + 0x94) && (param_1 != *(int *)(iVar1 * 4 + iVar2 + 0x34)));
      iVar1 = iVar1 + 1) {
  }
  if (iVar1 == *(int *)(iVar2 + 0x94)) {
    iVar1 = -1;
  }
  return iVar1;
}



int FUN_000335c4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00033580();
  if (iVar1 == -1) {
    iVar2 = *DAT_000336f0;
    iVar1 = 0x60;
    *(undefined4 *)(*(int *)(iVar2 + 0x94) * 4 + iVar2 + 0x34) = param_1;
    *(int *)(iVar2 + 0x94) = *(int *)(iVar2 + 0x94) + 1;
  }
  return iVar1;
}



void FUN_000335f8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != 0) && (iVar1 = FUN_00033580(), iVar1 != -1)) {
    iVar3 = *DAT_000336f0;
    iVar4 = iVar3 + 0x34;
    iVar2 = *(int *)(iVar3 + 0x94) + -1;
    *(int *)(iVar3 + 0x94) = iVar2;
    for (; iVar1 < iVar2; iVar1 = iVar1 + 1) {
      *(undefined4 *)(iVar1 * 4 + iVar4) = *(undefined4 *)(iVar4 + (iVar1 + 1) * 4);
    }
    *(undefined4 *)(iVar1 * 4 + iVar4) = 0;
  }
  return;
}



int FUN_00033644(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  (*DAT_000336f4)(param_1 + 0x6c);
  iVar1 = (*DAT_000336f8)(param_1 + 0xc,param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



int FUN_00033692(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined auStack40 [8];
  int iStack32;
  int local_1c;
  int iStack24;
  undefined uStack20;
  undefined uStack19;
  undefined uStack18;
  undefined uStack17;
  
  local_1c = (*DAT_000336fc)();
  iVar4 = (int)DAT_000336ec;
  local_1c = local_1c + DAT_000336ea;
  uStack18 = 0;
  uStack17 = 0;
  uStack20 = 0;
  uStack19 = 0;
  iStack24 = iVar4;
  uVar1 = FUN_0003346c();
  iVar2 = FUN_00033644(uVar1,&local_1c,0);
  if (iVar2 == 0) {
    iStack32 = -1;
  }
  else {
    iVar3 = FUN_00032b04(iVar2,1,param_1,iVar4);
    if (iVar3 == iVar4) {
      FUN_0003324e(auStack40);
      if ((iStack32 == 0) && (iVar4 = (*DAT_00033814)(param_1,DAT_00033810,6), iVar4 != 0)) {
        iStack32 = -3;
      }
      FUN_000327d4(iVar2);
    }
    else {
      iStack32 = -1;
    }
  }
  return iStack32;
}



int FUN_00033748(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_10 [2];
  
  if ((*(uint *)(*DAT_00033818 + (int)DAT_00033800) & 1) == 0) {
    iVar1 = -2;
  }
  else {
    iVar1 = FUN_00033692((int)DAT_00033802 + *DAT_00033818);
    if (iVar1 == 0) {
      iVar3 = *DAT_00033818 + (int)DAT_00033802 + (int)DAT_00033804;
      (*DAT_0003381c)(param_1,iVar3 + 6,4);
      iVar2 = (int)DAT_00033806;
      iVar1 = *param_1;
      *param_1 = iVar1 + iVar2;
      if (iVar1 + iVar2 < (int)DAT_00033808) {
        iVar1 = -3;
      }
      else {
        (*DAT_0003381c)(local_10,iVar3 + 0xe,4);
        if (local_10[0] < 1) {
          iVar1 = -3;
        }
        else {
          iVar2 = (int)DAT_0003380a;
          iVar1 = (*DAT_00033820)();
          param_1[1] = iVar1 * iVar2;
          *(undefined *)((int)param_1 + 10) = 0;
          *(char *)((int)param_1 + 0xb) = (char)DAT_0003380c;
          iVar1 = 0;
          *(undefined *)(param_1 + 2) = 0;
          *(undefined *)((int)param_1 + 9) = 0;
        }
      }
    }
  }
  return iVar1;
}



int FUN_000337e4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined auStack24 [4];
  undefined4 uStack20;
  
  iVar1 = FUN_00033748(auStack24);
  if (iVar1 == 0) {
    uVar2 = FUN_0003346c();
    iVar3 = FUN_00033644(uVar2,auStack24,0);
  }
  else {
    iVar3 = 0;
  }
  if ((((*(uint *)((int)DAT_00033924 + *DAT_0003392c) & 1) == 0) || (iVar3 != 0)) &&
     (iVar1 = (*DAT_00033930)(iVar3,param_1,uStack20), iVar3 != 0)) {
    (*DAT_00033934)(iVar3);
  }
  return iVar1;
}



undefined4 FUN_0003386e(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = DAT_0003392c;
  if (*(int *)(param_1 + 0x5c) == 4) {
    uVar2 = *(undefined4 *)(param_1 + 0x5c);
  }
  else {
    iVar5 = *(int *)(*DAT_0003392c + (int)DAT_00033926);
    if ((iVar5 == 0) || (iVar5 == param_1)) {
      iVar5 = (**(code **)(*(int *)(param_1 + 0x28) * 0x10 + *DAT_0003392c + 4))(param_1 + 0xc);
      if (iVar5 == 1) {
        *(int *)(*piVar1 + (int)DAT_00033926) = param_1;
      }
      else if ((iVar5 == 4) && (*(int *)(*piVar1 + (int)DAT_00033926) == param_1)) {
        iVar3 = (int)DAT_00033926;
        *(undefined4 *)(*piVar1 + iVar3) = 0;
        iVar4 = *piVar1;
        *(undefined4 *)(iVar4 + iVar3 + 8) = 0;
        *(undefined4 *)(iVar4 + iVar3 + 4) = 0;
      }
      *(int *)(param_1 + 0x5c) = iVar5;
      if (iVar5 == 3) {
        iVar5 = FUN_00033ada(param_1);
        if (iVar5 != 1) {
          return 0;
        }
        uVar2 = 0xffffffe8;
        *(undefined4 *)(param_1 + 8) = 0xffffffe8;
      }
      else if (iVar5 == 5) {
        *(undefined4 *)(param_1 + 8) = 0xffffffe9;
        uVar2 = 0xffffffe9;
      }
      else if (iVar5 == 6) {
        *(undefined4 *)(param_1 + 8) = 0xfffffffe;
        uVar2 = 0xfffffffe;
      }
      else if (iVar5 == 7) {
        *(undefined4 *)(param_1 + 8) = 0xffffffec;
        uVar2 = 0xffffffec;
      }
      else if (iVar5 == 8) {
        *(undefined4 *)(param_1 + 8) = 0xffffffff;
        uVar2 = 0xffffffff;
      }
      else {
        if (iVar5 != 9) {
          *(undefined4 *)(param_1 + 8) = 1;
          return 0;
        }
        *(undefined4 *)(param_1 + 8) = 0xffffffe7;
        uVar2 = 0xffffffe7;
      }
      uVar2 = FUN_00033530(uVar2);
      return uVar2;
    }
    uVar2 = 7;
  }
  return uVar2;
}



int FUN_00033906(int param_1)

{
  int *piVar1;
  int iVar2;
  uint local_14;
  undefined auStack16 [8];
  
  piVar1 = DAT_0003392c;
  if ((*(int *)(*DAT_0003392c + (int)DAT_00033928) == param_1) ||
     (*(int *)(*DAT_0003392c + (int)DAT_00033928) == 0)) {
    FUN_000329ce(param_1,0,0,0,&local_14);
    if ((local_14 & 0x40) == 0) {
      iVar2 = (*DAT_00033a3c)(param_1 + 0x6c);
      if (iVar2 == 0) {
        iVar2 = (*DAT_00033a40)(param_1);
      }
      else {
        iVar2 = (*DAT_00033a44)(param_1,auStack16);
      }
      if (iVar2 == 6) {
        if (*(int *)(*piVar1 + (int)DAT_00033a3a) == param_1) {
          *(undefined4 *)(*piVar1 + (int)DAT_00033a3a) = 0;
        }
      }
      else if (*(int *)(*piVar1 + (int)DAT_00033a3a) == 0) {
        *(int *)(*piVar1 + (int)DAT_00033a3a) = param_1;
      }
    }
    else {
      iVar2 = 6;
    }
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}



void FUN_00033a0c(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x1c) == 0) {
    (*DAT_00033a50)(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = param_2;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



undefined4 FUN_00033ada(int param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



undefined4 FUN_00033ae2(int param_1)

{
  int iVar1;
  uint local_10;
  int iStack12;
  
  iStack12 = param_1 + 0xc;
  (*DAT_00033ba0)(param_1,0,0,0,&local_10);
  if ((*(int *)(iStack12 + 0x50) == 4) &&
     ((iVar1 = (*DAT_00033ba4)(param_1), iVar1 == 0 || ((local_10 & 0x40) != 0)))) {
    return 1;
  }
  return 0;
}



int FUN_00033bc0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined local_8 [4];
  
  iVar1 = (int)DAT_00033ca4;
  if (param_1 == 1) {
    param_1 = 2;
  }
  if ((0 < param_1) && (param_1 < 100)) {
    iVar2 = FUN_00033c12(local_8 + iVar1);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar1 = FUN_00033d06(param_1,local_8 + iVar1);
    return iVar1;
  }
  return -1;
}



int FUN_00033c12(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00033c5a();
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_00033cca();
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = (*DAT_00033cb0)(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  return 0;
}



undefined4 FUN_00033c5a(void)

{
  int iVar1;
  undefined auStack8 [8];
  
  iVar1 = (*DAT_00033cb4)();
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_00033ec2((int)DAT_00033ca8);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  (*DAT_00033cb8)(0xfffffffd);
  FUN_00033ec8(2,(int)DAT_00033caa);
  iVar1 = (*DAT_00033cbc)(auStack8);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  return 0;
}



int FUN_00033cca(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_14;
  undefined auStack16 [8];
  
  iVar2 = DAT_00033dc0;
  iVar4 = 0;
  while( true ) {
    iVar3 = FUN_00033efc(&local_14,auStack16);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (local_14 != 0) break;
    bVar1 = iVar2 < iVar4;
    iVar4 = iVar4 + 1;
    if (bVar1) {
      return -1;
    }
  }
  return 0;
}



int FUN_00033d06(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int local_10;
  int iStack12;
  undefined4 uStack8;
  
  uStack8 = param_1;
  iVar1 = FUN_00033d5a(param_1,param_2,&iStack12);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_00033dc8(uStack8,&local_10);
  if (iVar1 == 0) {
    local_10 = local_10 - iStack12;
    if (local_10 < 0) {
      local_10 = -local_10;
    }
    if (DAT_00033dba < local_10) {
      iVar1 = -1;
    }
    return iVar1;
  }
  return iVar1;
}



undefined4 FUN_00033d5a(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = DAT_00033dc4;
  uVar3 = (int)*(char *)(param_2 + DAT_00033dbc) & 0xff;
  uVar2 = (int)*(char *)(param_2 + DAT_00033dbc + 4) & 0xff;
  if ((uVar3 == 0) || (99 < uVar3)) {
    return 0xffffffff;
  }
  if ((uVar2 != 0) && (uVar2 < 100)) {
    if (((int)uVar3 <= param_1) && (param_1 <= (int)uVar2)) {
      uVar2 = *(uint *)(param_2 + (param_1 + -1) * 4) & DAT_00033dc4;
      *param_3 = uVar2;
      if (uVar2 == uVar1) {
        return 0xffffffff;
      }
      return 0;
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}



int FUN_00033dc8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00033dee();
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_00033e3a(param_2);
  return iVar1;
}



int FUN_00033dee(undefined param_1)

{
  int iVar1;
  undefined auStack24 [4];
  undefined auStack20 [4];
  undefined4 local_10;
  undefined uStack12;
  undefined uStack11;
  
  local_10 = 2;
  uStack11 = 0;
  uStack12 = param_1;
  iVar1 = FUN_00033efc(auStack24,auStack20);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = (*DAT_00033fdc)(&local_10);
  if (iVar1 != 0) {
    return -1;
  }
  return 0;
}



int FUN_00033e3a(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_18;
  int iStack20;
  int *piStack16;
  
  iVar2 = DAT_00033fe0;
  iVar4 = 0;
  piStack16 = param_1;
  while( true ) {
    iVar3 = FUN_00033efc(&local_18,&iStack20);
    if (iVar3 != 0) {
      return iVar3;
    }
    iVar3 = FUN_00033e8e(local_18);
    if (iVar3 != 0) break;
    bVar1 = iVar2 < iVar4;
    iVar4 = iVar4 + 1;
    if (bVar1) {
      return -1;
    }
  }
  if (iStack20 == DAT_00033fe4) {
    return -1;
  }
  *piStack16 = iStack20;
  return 0;
}



undefined4 FUN_00033e8e(int param_1)

{
  if ((param_1 != 1) && (param_1 != 2)) {
    return 0;
  }
  return 1;
}



bool FUN_00033ea6(uint param_1)

{
  uint uVar1;
  
  uVar1 = (*DAT_00033fe8)();
  return (uVar1 & param_1) != 0;
}



void FUN_00033ec2(undefined4 param_1)

{
  FUN_00033ec8(param_1,DAT_00033fec);
  return;
}



undefined4 FUN_00033ec8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      iVar1 = FUN_00033ea6(param_1);
      if (iVar1 != 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return 0xffffffff;
}



int FUN_00033efc(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  char local_18 [8];
  undefined4 uStack16;
  
  *param_1 = 0xffffffff;
  *param_2 = 0xffffffff;
  iVar1 = FUN_00033f46(0,local_18);
  if (iVar1 == 0) {
    *param_2 = uStack16;
    *param_1 = (int)local_18[0] & 0xfU;
    iVar1 = FUN_00033f98((int)local_18[0] & 0xfU);
  }
  return iVar1;
}



undefined4 FUN_00033f46(int param_1,undefined4 param_2)

{
  bool bVar1;
  code *pcVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  puVar3 = PTR_LAB_00033ff8;
  pcVar2 = DAT_00033ff4;
  if (param_1 == 0) {
    iVar4 = 0;
    do {
      iVar6 = (*pcVar2)(param_2);
      if (iVar6 == 0) goto LAB_00033f8a;
      if (iVar6 != -8) {
        return 0xffffffff;
      }
      bVar1 = iVar4 <= (int)puVar3;
      iVar4 = iVar4 + 1;
    } while (bVar1);
    uVar5 = 0xffffffff;
  }
  else {
    iVar4 = (*DAT_00033ff0)(param_2);
    if (iVar4 == 0) {
LAB_00033f8a:
      uVar5 = 0;
    }
    else {
      uVar5 = 0xffffffff;
    }
  }
  return uVar5;
}



undefined4 FUN_00033f98(int param_1)

{
  int iVar1;
  undefined4 local_c [3];
  
  if ((param_1 != 6) && (param_1 != 7)) {
    if (param_1 != 10) {
      iVar1 = FUN_00033ea6(0x20);
      if (iVar1 != 0) {
        return 0xfffffffe;
      }
      return 0;
    }
    local_c[0] = 0;
    iVar1 = FUN_00033ea6(0x20);
    if (iVar1 == 0) {
      (*DAT_00033fdc)(local_c);
    }
  }
  return 0xfffffffe;
}



int FUN_0003405a(void)

{
  bool bVar1;
  code **ppcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  FUN_00034080();
  iVar3 = FUN_00034088();
  if ((iVar3 != 0) || (iVar3 = (**DAT_000340f8)(0), iVar3 != 0)) {
    return iVar3;
  }
  uVar4 = (*DAT_000341f4)(DAT_000341f0);
  ppcVar2 = DAT_00034200;
  iVar3 = DAT_000341fc;
  iVar6 = 0;
  *DAT_000341f8 = uVar4;
  do {
    iVar5 = (**ppcVar2)(0);
    if (iVar5 < 0) break;
    bVar1 = iVar6 <= iVar3;
    iVar6 = iVar6 + 1;
  } while (bVar1);
  (*DAT_000341f4)(*DAT_000341f8);
                    // WARNING: Could not recover jumptable at 0x000341dc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar3 = (**DAT_00034204)();
  return iVar3;
}



void FUN_00034080(void)

{
                    // WARNING: Could not recover jumptable at 0x00034084. Too many branches
                    // WARNING: Treating indirect jump as call
  (**DAT_000340fc)(0);
  return;
}



undefined4 FUN_00034088(void)

{
  int iVar1;
  
  iVar1 = (*DAT_00034100)(1,0,0);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_00034108(0x40);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_00034136();
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  FUN_0003418e();
  return 0;
}



bool FUN_000340c8(uint param_1)

{
  uint uVar1;
  
  uVar1 = (*DAT_00034104)();
  return (uVar1 & param_1) != 0;
}



undefined4 FUN_00034108(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_000341e0;
  iVar3 = 0;
  do {
    iVar2 = FUN_000340c8(param_1);
    if (iVar2 != 0) {
      return 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < iVar1);
  return 0xffffffff;
}



undefined4 FUN_00034136(void)

{
  int iVar1;
  byte local_10 [16];
  
  iVar1 = (*DAT_000341e4)(local_10);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  local_10[0] = local_10[0] & 0xf;
  if (((local_10[0] != 6) && (local_10[0] != 7)) && (local_10[0] != 10)) {
    iVar1 = FUN_000340c8(0x20);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    return 0;
  }
  return 0xffffffff;
}



void FUN_0003418e(void)

{
  (*DAT_000341e8)(0x17,0xffffffff);
                    // WARNING: Could not recover jumptable at 0x0003419a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_000341ec)();
  return;
}



int FUN_00034376(undefined4 param_1,undefined4 param_2,undefined *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = (*DAT_00034448)(param_1,param_2,param_3);
  if (iVar1 == 0) {
    if (param_4 == 0) {
      *DAT_0003444c = *param_3;
    }
    else {
      FUN_00034410(param_3);
    }
  }
  return iVar1;
}



void FUN_00034410(undefined *param_1,undefined *param_2)

{
  *param_2 = *param_1;
  param_2[4] = param_1[1];
  param_2[5] = param_1[2];
  param_2[6] = param_1[3];
  param_2[7] = param_1[4];
  *(uint *)(param_2 + 8) = *(uint *)(param_1 + 4) & DAT_00034454;
  return;
}



void FUN_00034468(undefined4 param_1)

{
  code **ppcVar1;
  code *pcVar2;
  
  pcVar2 = DAT_000344f4;
  if (*DAT_000344f0 != 0) {
    (*DAT_000344f4)(DAT_000344f8);
    (*pcVar2)(*DAT_00034500 & DAT_000344fc);
    (*pcVar2)(0);
    (*pcVar2)(param_1);
  }
  ppcVar1 = DAT_000344e8;
  *DAT_000344e4 = param_1;
  if (*ppcVar1 != (code *)0x0) {
    (**ppcVar1)(*DAT_000344ec,param_1);
  }
  return;
}



void FUN_00034674(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = (int)DAT_000346e0;
  for (uVar5 = 0; uVar5 < 0x20; uVar5 = uVar5 + 1) {
    piVar1 = (int *)(*DAT_000346f8)(uVar5);
    if (piVar1 != (int *)0x0) {
      iVar4 = *piVar1 + 0x38;
      if (*(int *)(iVar4 + DAT_000346e2) == 0) {
        *(int *)(iVar4 + DAT_000346e4) = *(int *)(iVar4 + DAT_000346e4) + 1;
      }
      else {
        iVar2 = (int)DAT_000346e6;
        iVar3 = *(int *)(iVar4 + iVar2) + *(int *)(iVar2 + 0x14 + iVar4);
        while (*(int *)(iVar4 + iVar2) = iVar3, iVar6 < *(int *)(iVar4 + DAT_000346e6)) {
          iVar2 = (int)DAT_000346e4;
          *(int *)(iVar4 + iVar2) = *(int *)(iVar4 + iVar2) + 1;
          iVar2 = iVar2 + 4;
          iVar3 = *(int *)(iVar4 + iVar2) - iVar6;
        }
      }
    }
  }
  return;
}



undefined4 * FUN_0003489e(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int in_r0;
  int iVar1;
  undefined4 *puVar2;
  int unaff_r13;
  undefined4 unaff_r14;
  
  *(int *)(param_1 + in_r0 + -4) = param_3[1] - *(int *)(param_1 + in_r0);
  *(undefined4 *)(param_1 + in_r0 + -0x10) = *param_3;
  *(int *)(param_1 + in_r0 + -0xc) =
       *(int *)(param_1 + in_r0 + -0x10) + *(int *)(param_1 + in_r0 + -4);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + in_r0 + -0xc);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  iVar1 = (int)DAT_000349d4;
  *(undefined4 *)(param_1 + iVar1) = param_2;
  *(undefined4 *)(param_1 + iVar1 + 4) = param_2;
  *(undefined4 *)(param_1 + iVar1 + 8) = param_2;
  *(undefined4 *)(param_1 + iVar1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + iVar1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + iVar1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + iVar1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  *(undefined4 *)(param_1 + iVar1 + -0x10) = param_2;
  *(undefined4 *)(param_1 + iVar1 + -0x6c) = 1;
  *(undefined4 *)(param_1 + iVar1 + -0x68) = param_2;
  *(undefined4 *)(param_1 + 0x44) = 0x15;
  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x4c) = 8;
  *(undefined4 *)(param_1 + 0xa4) = param_3[8];
  *(undefined4 *)(param_1 + 0xac) = param_2;
  *(undefined4 *)(param_1 + 0xb0) = param_2;
  *(undefined4 *)(param_1 + 0xb4) = param_2;
  *(undefined4 *)(param_1 + 0xb8) = param_2;
  *(undefined4 *)(param_1 + 0xbc) = param_2;
  *(undefined4 *)(param_1 + 200) = param_2;
  *(undefined4 *)(param_1 + 0xd4) = param_2;
  *(undefined4 *)(param_1 + 0x40) = param_2;
  iVar1 = (int)DAT_000349d6;
  *(undefined4 *)(param_1 + iVar1) = param_2;
  *(undefined4 *)(param_1 + iVar1 + 0x54) = param_2;
  *(undefined4 *)(param_1 + iVar1 + 0x58) = param_2;
  *(undefined4 *)(param_1 + iVar1 + 0x6c) = param_2;
  *(undefined4 *)(param_1 + iVar1 + 0x70) = 1;
  *DAT_000349dc = *DAT_000349dc | *(uint *)(unaff_r13 + param_4 * 4);
  puVar2 = (undefined4 *)(param_4 * 4 + DAT_000349e0);
  *puVar2 = unaff_r14;
  return puVar2;
}



void FUN_00034974(int param_1)

{
  uint *puVar1;
  int iVar2;
  
  if (*DAT_000349e8 != DAT_000349e4) {
    FUN_00034468((int)DAT_000349d8);
    return;
  }
  iVar2 = (param_1 - DAT_000349e0 >> 2) * 4;
  if ((*DAT_000349dc & *(uint *)(iVar2 + DAT_000349ec)) == 0) {
    FUN_00034468((int)DAT_000349da);
    return;
  }
  FUN_00034efc();
  puVar1 = DAT_000349dc;
  *DAT_000349dc = *DAT_000349dc & ~*(uint *)(iVar2 + DAT_000349ec);
  if (*puVar1 == 0) {
    *DAT_000349f0 = 0;
  }
  return;
}



void FUN_000349f4(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *param_1;
  uVar1 = *(int *)(iVar2 + 0xa4) - *(int *)(iVar2 + 0xb8);
  for (uVar3 = *(uint *)(iVar2 + 0x90);
      (uVar3 < (uint)(*(int *)(*(int *)(iVar2 + DAT_00034afe) + 0x3c) * 0x10 +
                     *(int *)(iVar2 + DAT_00034afe) + 0x40) &&
      (uVar4 = *(int *)(uVar3 + 4) + uVar1, uVar4 <= *(uint *)(iVar2 + 0x38 + (int)DAT_00034b00)));
      uVar3 = uVar3 + 0x10) {
    uVar1 = uVar4;
  }
  *(uint *)(iVar2 + 0xa8) = uVar1 + *(int *)(iVar2 + 0x38 + (int)DAT_00034b02);
  *(uint *)(iVar2 + 0x90) = uVar3;
  return;
}



void FUN_00034a44(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *param_1;
  uVar1 = *(int *)(iVar2 + 0xb0) - *(int *)(iVar2 + 0xb8);
  for (uVar3 = *(uint *)(iVar2 + 0x8c);
      (uVar3 < (uint)(*(int *)(*(int *)(iVar2 + DAT_00034afe) + 0x3c) * 0x10 +
                     *(int *)(iVar2 + DAT_00034afe) + 0x40) &&
      (uVar4 = *(int *)(uVar3 + 4) + uVar1, uVar4 <= *(uint *)(iVar2 + 0x38 + (int)DAT_00034b00)));
      uVar3 = uVar3 + 0x10) {
    uVar1 = uVar4;
  }
  *(uint *)(iVar2 + 0xb4) = uVar1 + *(int *)(iVar2 + 0x38 + (int)DAT_00034b02);
  *(uint *)(iVar2 + 0x8c) = uVar3;
  return;
}



void FUN_00034bc4(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *param_1;
  *(int *)(iVar4 + 0x98) = *(int *)(iVar4 + 0x98) + param_2;
  *(int *)(iVar4 + 0xac) = *(int *)(iVar4 + 0xac) + param_2;
  pcVar1 = DAT_00034cf4;
  if (*(uint *)(iVar4 + 0xb4) <= *(uint *)(iVar4 + 0xac)) {
    uVar5 = *(int *)(iVar4 + 0xb8) - (-*(int *)(iVar4 + 0x98) & (int)DAT_00034cea);
    uVar2 = *(uint *)(iVar4 + 0xac);
    *(int *)(iVar4 + 0x9c) = *(int *)(iVar4 + 0x98);
    *(uint *)(iVar4 + 0xac) = uVar5;
    *(uint *)(iVar4 + 0xb0) = uVar5;
    uVar3 = *(int *)(iVar4 + 0xb8) - (uVar5 & 0xfffffffc) >> 2;
    (*pcVar1)(uVar5 & 0xfffffffc,uVar2 & 0xfffffffc,uVar3,param_4,uVar3);
    FUN_00034a44(param_1);
  }
  pcVar1 = DAT_00034cfc;
  if (*DAT_00034cf8 != 0) {
    (*DAT_00034cfc)(DAT_00034d00);
    (*pcVar1)(*DAT_00034d08 & DAT_00034d04 | param_2 << 0x10);
    (*pcVar1)(param_1);
    (*pcVar1)(*(int *)(iVar4 + 0x94) - *(int *)(iVar4 + 0x98));
  }
  return;
}



void FUN_00034ce0(int *param_1)

{
  *(undefined4 *)(*param_1 + 0x3c) = 2;
  return;
}



uint FUN_00034d14(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined2 *puVar2;
  
  puVar2 = *(undefined2 **)
            ((int)(char)(*(char *)(param_1 + DAT_00034df0) * '\f') + DAT_00034df2 + param_1);
  if ((puVar2 == *(undefined2 **)(param_2 + 0x20)) ||
     (uVar1 = (uint)DAT_00034df4, puVar2 == *(undefined2 **)(param_1 + uVar1))) {
    uVar1 = (int)*(char *)(param_3 + 0x26) & 0xff;
    if (uVar1 == 0x10) {
      *(undefined2 *)((int)puVar2 + *(int *)(param_1 + DAT_00034df6) + -2) = *puVar2;
    }
    else {
      *(undefined *)((int)puVar2 + *(int *)(param_1 + DAT_00034df6) + -1) = *(undefined *)puVar2;
    }
  }
  return uVar1;
}



int FUN_00034d92(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar3 = *param_1;
  uVar2 = *(undefined4 *)(iVar3 + DAT_00034df8);
  iVar5 = iVar3 + 0x38;
  iVar1 = (int)DAT_00034dfa;
  if ((*(int *)(iVar5 + iVar1) != 0) && (iVar1 = (int)DAT_00034dfc, *(int *)(iVar5 + iVar1) != 0)) {
    if (*(int *)(iVar5 + DAT_00034dfa) == 1) {
      iVar1 = (*DAT_00034e0c)();
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          FUN_00034468((int)DAT_00034dfe);
        }
        else if (iVar1 == 2) {
          return 2;
        }
      }
    }
    else {
      iVar1 = (*DAT_00034f30)();
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_00034d14(iVar5,iVar3 + 4,uVar2);
    if (*(int *)(iVar5 + DAT_00034f22) != 0) {
      iVar1 = (int)DAT_00034f22;
      *(int *)(iVar5 + iVar1) = *(int *)(iVar5 + iVar1) + -1;
      if (*(int *)(iVar5 + iVar1 + -0x10) == 1) {
        puVar4 = (undefined4 *)
                 ((int)(char)(*(char *)(iVar5 + DAT_00034f28) * '\f') + DAT_00034f2a + iVar5);
                    // WARNING: Could not recover jumptable at 0x00034e90. Too many branches
                    // WARNING: Treating indirect jump as call
        iVar1 = (*DAT_00034f40)(*puVar4,puVar4[1],puVar4[2]);
        return iVar1;
      }
      if (*DAT_00034f44 == 0) {
        *DAT_00034f44 = 1;
        (*DAT_00034f48)();
      }
      puVar4 = (undefined4 *)
               ((int)(char)(*(char *)(iVar5 + DAT_00034f28) * '\f') + DAT_00034f2a + iVar5);
                    // WARNING: Could not recover jumptable at 0x00034eca. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar1 = (*DAT_00034f4c)(*puVar4,puVar4[1],puVar4[2]);
      return iVar1;
    }
    (*DAT_00034f34)(param_1,*(undefined4 *)(iVar5 + DAT_00034f24));
    FUN_00034bc4(param_1,*(undefined4 *)(iVar5 + DAT_00034f26));
    iVar1 = (int)DAT_00034f24;
    *(undefined4 *)(iVar5 + iVar1) = 0;
    *(undefined4 *)(iVar5 + iVar1 + 4) = 0;
    *(undefined4 *)(iVar5 + iVar1 + -4) = 0;
    iVar1 = *(int *)(iVar5 + iVar1 + -8);
    if (iVar1 == 1) {
      *DAT_00034f38 = 0;
    }
    else {
      *DAT_00034f3c = 0;
    }
  }
  return iVar1;
}



void FUN_00034ed8(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (*(int *)(iVar1 + 0x38 + (int)DAT_00034f2c) != 0) {
    FUN_00034d92(param_1);
  }
  return;
}



void FUN_00034efc(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_00034ed8();
  if (*(int *)(iVar1 + 0x3c) == 4) {
    (*DAT_00034f50)(param_1);
  }
  *(undefined4 *)(iVar1 + 0x3c) = 5;
  return;
}



void FUN_00034f54(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = *param_1;
  iVar5 = *(int *)(iVar3 + DAT_0003505c);
  iVar6 = iVar3 + 0x38;
  FUN_00034ed8(param_1);
  *(undefined4 *)(iVar6 + DAT_0003505e + 0xc) = *(undefined4 *)(iVar6 + DAT_0003505e);
  if (*(int *)(iVar6 + DAT_00035060) != 0) {
    (*DAT_00035068)(param_1);
    iVar4 = (int)DAT_00035062;
    iVar2 = (*DAT_0003506c)(param_1);
    *(int *)(iVar4 + iVar6) = *(int *)(iVar4 + iVar6) + iVar2;
    iVar2 = (*DAT_00035070)(*(undefined4 *)(iVar6 + DAT_00035064 + -8));
    pcVar1 = DAT_00035074;
    if (*(char *)(iVar5 + 0x25) == '\x01') {
      iVar5 = (int)DAT_00035066;
      (*DAT_00035074)(*(undefined4 *)(iVar6 + iVar5 + -0x18),*(undefined4 *)(iVar6 + iVar5 + -0xc),
                      *(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(iVar6 + iVar5),iVar2);
    }
    else {
      iVar5 = (int)DAT_00035066;
      (*DAT_00035074)(*(undefined4 *)(iVar6 + iVar5 + -0x18),*(undefined4 *)(iVar6 + iVar5 + -0xc),
                      *(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(iVar6 + iVar5),iVar2);
      iVar5 = (int)DAT_00035066;
      (*pcVar1)(*(undefined4 *)(iVar6 + iVar5 + -0x18),*(undefined4 *)(iVar6 + iVar5 + -0xc),
                *(undefined4 *)(iVar6 + iVar5 + 4),*(undefined4 *)(iVar6 + iVar5),iVar2);
    }
    iVar5 = (int)DAT_00035064;
    *(int *)(iVar6 + iVar5) = *(int *)(iVar6 + iVar5) + (iVar2 >> 1) * -2;
    if (*(uint *)(iVar6 + iVar5) < *(uint *)(iVar3 + 0x24)) {
      iVar5 = (int)DAT_00035064;
      *(uint *)(iVar6 + iVar5) =
           *(int *)(iVar6 + iVar5) + (*(uint *)(iVar5 + -8 + iVar6) & 0xfffffffe);
    }
  }
  *(undefined4 *)(iVar3 + 0x3c) = 1;
  return;
}



uint FUN_00035078(int *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint in_sr;
  uint uVar6;
  
  pcVar1 = DAT_000351a4;
  iVar4 = *param_1;
  iVar5 = iVar4 + 0x38;
  if ((*DAT_0003518c & 1) == 0) {
    iVar2 = DAT_000351a0;
    if (*DAT_00035190 == 0) {
      iVar2 = DAT_0003519c;
    }
  }
  else {
    iVar2 = DAT_00035198;
    if (*DAT_00035190 == 0) {
      iVar2 = DAT_00035194;
    }
  }
  uVar3 = (iVar2 >> 0xe) + 1;
  uVar6 = in_sr & (int)DAT_0003517e & 0xfff0ffe | 0xf0 | (uint)((uVar3 & 1) == 1);
  *(int *)(iVar5 + DAT_00035180) = (int)uVar3 >> 1;
  (*pcVar1)(param_1);
  (*DAT_000351a8)(param_1);
  iVar2 = (int)DAT_00035182;
  *(undefined4 *)(iVar4 + 0x3c) = 4;
  *(undefined4 *)(iVar5 + iVar2) = 0;
  iVar4 = (int)DAT_00035186;
  *(undefined4 *)(iVar5 + iVar2 + 0x88) = *(undefined4 *)(iVar5 + iVar2 + 0x78);
  *(int *)(iVar5 + iVar2 + 0x80) =
       *(int *)(iVar5 + iVar2 + 0x80) + (*(int *)(iVar4 + iVar5) - *(int *)(DAT_00035184 + iVar5));
  return (in_sr >> 4 & 0xf) << 4 | uVar6 & (int)DAT_0003517e;
}



undefined4 FUN_000351e0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int **ppiVar8;
  int iVar9;
  int iVar10;
  
  iVar5 = *param_1;
  iVar9 = *(int *)(iVar5 + DAT_00035286);
  iVar10 = iVar5 + 0x38;
  ppiVar8 = (int **)(iVar5 + 4);
  if (*(uint *)(iVar5 + 0x94) < 8) {
    uVar1 = 0xffffffff;
  }
  else if (**ppiVar8 == DAT_00035294) {
    uVar4 = *(uint *)(iVar9 + 4);
    iVar2 = (int)DAT_0003528a;
    *(uint *)(iVar5 + 0x4c) = uVar4;
    if (*(uint *)(iVar10 + iVar2) < uVar4) {
      FUN_00034468((int)DAT_0003528c);
      uVar1 = 0xffffffff;
    }
    else if (*(uint *)(iVar5 + 0x94) < *(uint *)(iVar5 + 0x4c)) {
      uVar1 = 0xffffffff;
    }
    else {
      *(undefined4 *)(iVar10 + DAT_0003528e) = *(undefined4 *)(iVar5 + 0x4c);
      if (*(int *)(iVar9 + 0x28) == 0) {
        *(undefined4 *)(iVar10 + DAT_00035290) = 0;
      }
      else {
        *(undefined4 *)(iVar10 + DAT_00035290) = *(undefined4 *)(iVar5 + 0x18);
      }
      *(uint *)(iVar5 + 100) = (uint)(*(int *)(iVar9 + 0x18) == 0);
      *(uint *)(iVar5 + 0x68) = (uint)(*(int *)(iVar10 + DAT_00035290) == 0);
      *(undefined4 *)(iVar5 + 0x80) = 0;
      uVar6 = 1;
      uVar4 = 0;
      while (uVar6 < *(uint *)(iVar9 + 0x3c)) {
        if (*(int *)(iVar9 + uVar6 * 0x10 + 0x48) == -1) {
          *(uint *)(iVar5 + 0x80) = uVar6;
        }
        uVar7 = *(uint *)(uVar6 * 0x10 + iVar9 + 0x44);
        uVar6 = uVar6 + 1;
        if ((int)uVar4 < (int)uVar7) {
          uVar4 = uVar7;
        }
      }
      if (*(int *)(iVar5 + 0x68) != 0) {
        *(undefined4 *)(iVar5 + 0x80) = DAT_00035320;
      }
      if (*(uint *)(iVar10 + DAT_00035314) < uVar4) {
        FUN_00034468((int)DAT_00035316);
        uVar1 = 0xffffffff;
      }
      else {
        iVar2 = (int)DAT_00035318;
        *(int *)(iVar10 + DAT_00035314) = iVar2;
        if ((int)uVar4 < (int)*(uint *)(iVar9 + 0x44)) {
          uVar4 = *(uint *)(iVar9 + 0x44);
        }
        if (*(uint *)(iVar5 + 8) <
            uVar4 + *(int *)(iVar10 + DAT_0003531a) + iVar2 + *(int *)(iVar10 + DAT_0003531a + 8)) {
          FUN_00034468((int)DAT_0003531c);
          uVar1 = 0xffffffff;
        }
        else {
          iVar3 = (int)DAT_00035448;
          *(int *)(iVar10 + iVar3 + 4) =
               (*(int *)(iVar5 + 8) - (*(int *)(iVar10 + iVar3) + iVar2)) -
               *(int *)(iVar10 + iVar3 + 8) & (int)DAT_0003544a;
          *(int *)(iVar10 + iVar3 + -8) = (int)*ppiVar8 + iVar2 + *(int *)(iVar10 + iVar3);
          *(int *)(iVar10 + iVar3 + -4) =
               *(int *)(iVar10 + iVar3 + -8) + *(int *)(iVar10 + iVar3 + 4);
          iVar2 = (int)*ppiVar8 + *(int *)(iVar10 + iVar3);
          *(int *)(iVar5 + 0xa4) = iVar2;
          *(int *)(iVar5 + 0xb0) = iVar2;
          *(int *)(iVar5 + 0x8c) = iVar9 + 0x40;
          *(int *)(iVar5 + 0x90) = iVar9 + 0x40;
          FUN_00034a44(param_1);
          FUN_000349f4(param_1);
          if (*(int *)(iVar5 + 0x6c) == 0) {
            *(uint *)(iVar5 + 0x6c) = (int)*(char *)(iVar9 + 0x24) & 0xff;
          }
          iVar2 = (int)DAT_0003544c;
          *(uint *)(iVar10 + iVar2) = *(uint *)(iVar9 + 0x28) >> 0x10 & DAT_0003545c;
          if (*(int *)(iVar10 + iVar2 + -0x10) != 0) {
            uVar4 = (*DAT_00035460)();
            if (*(uint *)(iVar5 + 0x28) < uVar4) {
              FUN_00034468((int)DAT_00035452);
              return 0xffffffff;
            }
            if (((int)DAT_00035454 & *(uint *)(iVar5 + 0x28)) != 0) {
              FUN_00034468((int)DAT_00035456);
              return 0xffffffff;
            }
            uVar4 = *(uint *)(iVar5 + 0x28) >> 0xc;
            if ((uVar4 < 2) || (0x10 < uVar4)) {
              FUN_00034468((int)DAT_00035456);
              return 0xffffffff;
            }
          }
          if (*(char *)(iVar9 + 0x26) == '\b') {
            iVar9 = *(int *)(iVar5 + 0x28);
          }
          else {
            iVar9 = *(int *)(iVar5 + 0x28) << 1;
          }
          iVar2 = (int)DAT_00035458;
          *(int *)(iVar10 + iVar2) = iVar9;
          *(uint *)(iVar10 + iVar2 + 4) =
               (*(uint *)(iVar10 + iVar2) & 0xfffffffe) + *(int *)(iVar5 + 0x24);
          *(int *)(iVar5 + 0x98) = *(int *)(iVar5 + 0x98) + *(int *)(iVar5 + 0x4c);
          *(int *)(iVar5 + 0xac) = *(int *)(iVar5 + 0xac) + *(int *)(iVar5 + 0x4c);
          *(int *)(iVar5 + 0x9c) = *(int *)(iVar5 + 0x9c) + *(int *)(iVar5 + 0x4c);
          uVar1 = 0;
          *(undefined4 *)(iVar5 + 0x3c) = 3;
        }
      }
    }
  }
  else {
    FUN_00034468((int)DAT_00035288);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



uint FUN_00035464(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint in_sr;
  
  pcVar1 = DAT_000355ac;
  iVar6 = *param_1;
  iVar7 = *(int *)(iVar6 + DAT_0003558c);
  piVar8 = (int *)((*(int *)(iVar7 + 0x3c) + -1) * 0x10 + iVar7 + 0x40);
  uVar4 = *(int *)(iVar7 + 4) + *piVar8 + piVar8[1];
  iVar7 = iVar6 + 0x38;
  if (*(uint *)(iVar6 + 0xc) < uVar4) {
    uVar4 = *(uint *)(iVar6 + 0xc);
  }
  uVar2 = *(uint *)(iVar6 + 0x94);
  if (uVar4 <= uVar2) {
    if ((*DAT_00035594 & 1) == 0) {
      iVar3 = DAT_000355a8;
      if (*DAT_00035598 == 0) {
        iVar3 = DAT_000355a4;
      }
    }
    else {
      iVar3 = DAT_000355a0;
      if (*DAT_00035598 == 0) {
        iVar3 = DAT_0003559c;
      }
    }
    uVar4 = (iVar3 >> 0xe) + 1;
    uVar2 = in_sr & 0xfffffffe & (int)DAT_0003558e & 0xfff0ffe | 0xf0 | (uint)((uVar4 & 1) == 1);
    *(int *)(iVar7 + DAT_00035590) = (int)uVar4 >> 1;
    (*pcVar1)(param_1);
    (*DAT_000355b0)(param_1);
    iVar3 = (int)DAT_00035592;
    uVar4 = (uint)DAT_0003558e;
    *(undefined4 *)(iVar6 + 0x3c) = 4;
    *(undefined4 *)(iVar7 + iVar3) = 0;
    uVar5 = *(undefined4 *)(iVar7 + iVar3 + 0x78);
    *(undefined4 *)(iVar7 + iVar3 + 0x88) = uVar5;
    *(undefined4 *)(iVar7 + iVar3 + 0x80) = uVar5;
    uVar2 = in_sr & 0xf0 | uVar2 & uVar4;
  }
  return uVar2;
}



undefined4 FUN_00035618(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  iVar5 = *(int *)(iVar2 + DAT_000356b6);
  iVar3 = *param_2;
  iVar4 = *(int *)(iVar3 + DAT_000356b6);
  if (*(int *)(iVar2 + 0x38 + (int)DAT_000356b8) == 0) {
    uVar1 = 0;
  }
  else if (*(int *)(iVar3 + 0x38 + (int)DAT_000356b8) == 0) {
    uVar1 = 0;
  }
  else if ((((*(int *)(iVar2 + 0x20) == *(int *)(iVar3 + 0x20)) &&
            (*(int *)(iVar2 + 0x24) == *(int *)(iVar3 + 0x24))) &&
           (*(int *)(iVar2 + 0x28) == *(int *)(iVar3 + 0x28))) &&
          (((*(char *)(iVar5 + 0x25) == *(char *)(iVar4 + 0x25) &&
            (*(char *)(iVar5 + 0x26) == *(char *)(iVar4 + 0x26))) &&
           (*(int *)(iVar2 + 0x38 + (int)DAT_000356ba) == *(int *)(iVar3 + 0x38 + (int)DAT_000356ba)
           )))) {
    if (*(int *)(iVar5 + 0x38) == *(int *)(iVar4 + 0x38)) {
      uVar1 = 1;
    }
    else {
      (*DAT_000356c4)((int)DAT_000356be);
      uVar1 = 0;
    }
  }
  else {
    (*DAT_000356c4)((int)DAT_000356bc);
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_000356c8(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = *param_1;
  iVar5 = iVar3 + 0x38;
  iVar4 = *param_2;
  iVar6 = iVar4 + 0x38;
  iVar1 = FUN_000351e0(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00035618(param_1,param_2);
    if (iVar1 == 0) {
      uVar2 = 0xfffffffe;
    }
    else {
      *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(iVar3 + 0x2c);
      *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(iVar3 + 0x30);
      iVar1 = (int)DAT_000357d6;
      *(undefined4 *)(iVar6 + iVar1) = *(undefined4 *)(iVar5 + iVar1);
      *(undefined4 *)(iVar6 + iVar1 + 0x10) = *(undefined4 *)(iVar5 + iVar1 + 0x10);
      *(undefined4 *)(iVar6 + iVar1 + 0x18) = *(undefined4 *)(iVar5 + iVar1 + 0x18);
      *(undefined4 *)(iVar6 + iVar1 + 0x14) = *(undefined4 *)(iVar6 + iVar1 + 0x10);
      *(undefined4 *)(iVar6 + iVar1 + 0x80) = *(undefined4 *)(iVar5 + iVar1 + 0x80);
      *(undefined4 *)(iVar6 + iVar1 + 0x84) = *(undefined4 *)(iVar5 + iVar1 + 0x84);
      *(undefined4 *)(iVar6 + iVar1 + 0x88) = *(undefined4 *)(iVar5 + iVar1 + 0x80);
      *(undefined4 *)(iVar6 + iVar1 + 0x90) = *(undefined4 *)(iVar5 + iVar1 + 0x90);
      iVar1 = (int)DAT_000357d8;
      *(undefined4 *)(iVar6 + iVar1) = *(undefined4 *)(iVar5 + iVar1);
      *(undefined4 *)(iVar6 + iVar1 + 0x14) = *(undefined4 *)(iVar5 + iVar1 + 0x14);
      *(undefined4 *)(iVar6 + iVar1 + 0x18) = *(undefined4 *)(iVar5 + iVar1 + 0x18);
      *(undefined4 *)(iVar6 + iVar1 + 0x90) = *(undefined4 *)(iVar5 + iVar1 + 0x90);
      *(undefined4 *)(iVar6 + iVar1 + 0x94) = *(undefined4 *)(iVar5 + iVar1 + 0x94);
      *(undefined4 *)(iVar4 + 0x3c) = 4;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



void FUN_000358d0(int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  if (*(uint *)(param_1 + DAT_00035a02) < (uint)(param_2 - *(int *)(param_1 + 0x24))) {
    iVar3 = (int)DAT_00035a02;
    *(int *)(param_1 + iVar3) = param_2 - *(int *)(param_1 + 0x24);
    *(int *)(param_1 + iVar3 + 4) = *(int *)(param_1 + 0x10) + -1;
  }
  *(int *)(param_1 + DAT_00035a04) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 1;
  piVar1 = DAT_00035a0c;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar2 = DAT_00035a10;
  if (*piVar1 != 0) {
    (*DAT_00035a10)(DAT_00035a14);
    (*pcVar2)((*(int *)(param_1 + 0x10) + -1) * 0x10000 | *DAT_00035a1c & DAT_00035a18);
    (*pcVar2)(param_2 - *(int *)(param_1 + 0x24));
    (*pcVar2)(*(undefined4 *)(param_1 + DAT_00035a04));
  }
  return;
}



undefined4 FUN_00035998(int *param_1)

{
  short sVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint unaff_r13;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  int local_30;
  uint uStack44;
  int iStack40;
  uint local_24 [2];
  
  iVar5 = *param_1;
  iVar8 = *(int *)(iVar5 + DAT_00035a06);
  iVar13 = iVar5 + 0x38;
  piVar7 = (int *)(*(int *)(iVar5 + 0x44) * 0x10 + iVar8 + 0x40);
  iVar6 = *(int *)(iVar5 + 0x4c) + *piVar7;
  iVar10 = (*(int *)(iVar5 + 0xb0) + iVar6) - *(int *)(iVar5 + 0x9c);
  uVar9 = piVar7[1];
  if (*(uint *)(iVar5 + 0x94) < iVar6 + uVar9) {
    *(int *)(iVar13 + DAT_00035a08) = *(int *)(iVar13 + DAT_00035a08) + 1;
    uVar3 = 0xffffffff;
  }
  else if (*(int *)(iVar13 + DAT_00035a0a) == 0) {
    FUN_00034bc4(param_1,uVar9);
    uVar3 = 0;
  }
  else if (((*(int *)(iVar13 + DAT_00035b16) == 1) && (*DAT_00035b24 != 0)) ||
          ((*(int *)(iVar13 + DAT_00035b16) == 3 && (*DAT_00035b28 != 0)))) {
    *(int *)(iVar13 + DAT_00035b18) = *(int *)(iVar13 + DAT_00035b18) + 1;
    uVar3 = 0xffffffff;
  }
  else {
    uVar11 = uVar9;
    if ((*(char *)(iVar8 + 0x25) != '\x01') &&
       (uVar11 = unaff_r13, *(char *)(iVar8 + 0x25) == '\x02')) {
      uVar11 = (int)uVar9 >> 1;
    }
    (*DAT_00035b2c)(param_1,&local_30,&iStack40,&uStack44,local_24);
    if (local_24[0] < uVar11) {
      *(int *)(iVar13 + DAT_00035b18) = *(int *)(iVar13 + DAT_00035b18) + 1;
      uVar3 = 0xffffffff;
    }
    else {
      if (*(uint *)(iVar13 + DAT_00035b1a) < local_24[0]) {
        *(int *)(iVar13 + DAT_00035b1c) = *(int *)(iVar13 + DAT_00035b1c) + 1;
      }
      if (uStack44 < uVar11) {
        if (*(char *)(iVar8 + 0x25) == '\x01') {
          *(undefined4 *)(iVar13 + DAT_00035c50) = 1;
          iVar6 = (int)DAT_00035c52;
          *(int *)(iVar13 + iVar6) = local_30;
          *(int *)(iVar13 + iVar6 + 4) = iVar10;
          sVar1 = DAT_00035c54;
        }
        else {
          *(undefined4 *)(iVar13 + DAT_00035c50) = 3;
          iVar6 = (int)DAT_00035c56;
          *(int *)(iVar13 + iVar6) = iStack40;
          *(int *)(iVar13 + iVar6 + 4) = iVar10;
          *(uint *)(iVar13 + DAT_00035c58) = uStack44 >> 2;
          iVar6 = (int)DAT_00035c5a;
          *(int *)(iVar13 + iVar6) = local_30;
          *(uint *)(iVar13 + iVar6 + 4) = uVar11 + iVar10;
          sVar1 = DAT_00035c5c;
        }
        *(uint *)(iVar13 + sVar1) = uStack44 >> 2;
        iVar10 = iVar10 + uStack44;
        local_30 = *(int *)(iVar5 + 0x24);
        iStack40 = (*(uint *)(iVar13 + DAT_00035c5e) & 0xfffffffe) + local_30;
        iVar6 = (int)(uVar11 - uStack44) >> 2;
        if (*(char *)(iVar8 + 0x25) == '\x01') {
          iVar4 = (int)DAT_00035c60;
          *(int *)(iVar13 + iVar4) = local_30;
        }
        else {
          iVar4 = (int)DAT_00035c52;
          *(int *)(iVar13 + iVar4) = iStack40;
          *(int *)(iVar13 + iVar4 + 4) = iVar10;
          iVar10 = iVar10 + uVar11;
          *(int *)(iVar13 + iVar4 + 8) = iVar6;
          iVar4 = (int)DAT_00035c60;
          *(int *)(iVar13 + iVar4) = local_30;
        }
        *(int *)(iVar13 + iVar4 + 4) = iVar10;
        *(int *)(iVar13 + iVar4 + 8) = iVar6;
      }
      else {
        iVar6 = (int)uVar11 >> 2;
        if (*(char *)(iVar8 + 0x25) == '\x01') {
          *(undefined4 *)(iVar13 + DAT_00035b1e) = 0;
          *(int *)(DAT_00035b20 + iVar13) = local_30;
          iVar4 = (int)DAT_00035b20;
          *(int *)(DAT_00035b20 + iVar13 + 4) = iVar10;
          *(int *)(iVar4 + iVar13 + 8) = iVar6;
        }
        else {
          *(undefined4 *)(iVar13 + DAT_00035b1e) = 1;
          iVar4 = (int)DAT_00035b22;
          *(int *)(iVar13 + iVar4) = iStack40;
          *(int *)(iVar13 + iVar4 + 4) = iVar10;
          *(int *)(iVar13 + iVar4 + 8) = iVar6;
          iVar4 = (int)DAT_00035b20;
          *(int *)(iVar13 + iVar4) = local_30;
          *(uint *)(iVar13 + iVar4 + 4) = uVar11 + iVar10;
          *(int *)(iVar13 + iVar4 + 8) = iVar6;
        }
      }
      puVar12 = DAT_00035c70;
      if (*(int *)(iVar13 + DAT_00035c62) == 1) {
        iVar5 = (int)DAT_00035c64;
        *(uint *)(iVar13 + iVar5) = uVar11;
        pcVar2 = DAT_00035c6c;
        puVar12 = DAT_00035c68;
        *(uint *)(iVar13 + iVar5 + 4) = uVar9;
        *(undefined4 *)(iVar13 + iVar5 + -4) = 1;
        *puVar12 = 1;
        puVar12 = (undefined4 *)
                  ((int)(char)(*(char *)(iVar13 + iVar5 + 0xb) * '\f') + DAT_00035c60 + iVar13);
        (*pcVar2)(*puVar12,puVar12[1],puVar12[2]);
      }
      else if (*(int *)(iVar13 + DAT_00035c62) == 3) {
        iVar5 = (int)DAT_00035c64;
        *(uint *)(iVar13 + iVar5) = uVar11;
        piVar7 = DAT_00035c74;
        *(uint *)(iVar13 + iVar5 + 4) = uVar9;
        *(undefined4 *)(iVar13 + iVar5 + -4) = 1;
        *puVar12 = 1;
        pcVar2 = DAT_00035c78;
        if (*piVar7 == 0) {
          *DAT_00035c74 = 1;
          (*pcVar2)();
        }
        puVar12 = (undefined4 *)
                  ((int)(char)(*(char *)(iVar13 + DAT_00035c66) * '\f') + DAT_00035c60 + iVar13);
        (*DAT_00035c7c)(*puVar12,puVar12[1],puVar12[2]);
      }
      else {
        do {
          puVar12 = (undefined4 *)
                    ((int)(char)(*(char *)(iVar13 + DAT_00035d86) * '\f') + DAT_00035d88 + iVar13);
          (*DAT_00035d94)(*puVar12,puVar12[1],puVar12[2]);
          FUN_00034d14(iVar13,iVar5 + 4,iVar8);
          iVar6 = *(int *)(iVar13 + DAT_00035d8a);
          *(int *)(iVar13 + DAT_00035d8a) = iVar6 + -1;
        } while (iVar6 != 0);
        (*DAT_00035d98)(param_1,uVar11);
        (*DAT_00035d9c)(param_1,uVar9);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00035cda(int *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_28;
  uint uStack36;
  undefined4 uStack32;
  uint local_1c;
  
  iVar5 = *param_1;
  iVar6 = *(int *)(iVar5 + _LAB_00035d8c);
  iVar7 = iVar5 + 0x38;
  iVar2 = (int)DAT_00035d8e;
  if ((*(int *)(iVar7 + iVar2) != 0) && (iVar2 = (int)DAT_00035d90, *(int *)(iVar7 + iVar2) == 0)) {
    if (*(char *)(iVar6 + 0x26) == '\b') {
      uVar3 = (*DAT_00035da0)();
    }
    else {
      iVar2 = (*DAT_00035da0)();
      uVar3 = iVar2 << 1;
    }
    uVar3 = uVar3 & 0xfffffffc;
    iVar2 = (*DAT_00035da4)();
    if (uVar3 <= local_1c) {
      *(undefined4 *)(iVar7 + DAT_00035d90) = 1;
      pcVar1 = DAT_00035da8;
      if (uStack36 < uVar3) {
        if (*(char *)(iVar6 + 0x25) != '\x01') {
          (*DAT_00035da8)(uStack32,0,uStack36 >> 1);
        }
        (*pcVar1)(local_28,0,uStack36 >> 1);
        uVar4 = *(undefined4 *)(iVar5 + 0x24);
        iVar2 = (int)(uVar3 - uStack36) >> 1;
        if (*(char *)(iVar6 + 0x25) != '\x01') {
          (*pcVar1)((*(uint *)(iVar7 + DAT_00035eca) & 0xfffffffe) + *(int *)(iVar5 + 0x24),0,iVar2)
          ;
        }
        iVar2 = (*pcVar1)(uVar4,0,iVar2);
      }
      else {
        if (*(char *)(iVar6 + 0x25) != '\x01') {
          (*DAT_00035da8)(uStack32,0,(int)uVar3 >> 1);
        }
        iVar2 = (*pcVar1)(local_28,0,(int)uVar3 >> 1);
      }
    }
  }
  return iVar2;
}



undefined4 FUN_00035e10(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0x78) != 0) {
    return 0;
  }
  uVar3 = *(int *)(iVar1 + 0x44) + 1;
  if (*(uint *)(*(int *)(iVar1 + DAT_00035ecc) + 0x3c) <= uVar3) {
    return 0;
  }
  piVar2 = (int *)(uVar3 * 0x10 + *(int *)(iVar1 + DAT_00035ecc) + 0x40);
  if (piVar2[2] == 0xffffffff) {
    return 0;
  }
  if ((piVar2[2] & DAT_00035ed4) == 0) {
    if (*(uint *)(iVar1 + 0x94) < (uint)(*(int *)(iVar1 + 0x4c) + *piVar2 + piVar2[1])) {
      return 0;
    }
    return 1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00035e8a(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_34;
  int iStack48;
  int iStack44;
  undefined auStack40 [4];
  uint uStack36;
  
  iVar5 = *param_1;
  iVar8 = *(int *)(iVar5 + DAT_00035ecc);
  iVar9 = iVar5 + 0x38;
  if (*(int *)(iVar5 + _LAB_00035ece) == 0) {
    if (*(int *)(iVar5 + 0x40) == 1) {
      *(int *)(iVar9 + _LAB_00035ed0) = *(int *)(iVar9 + _LAB_00035ed0) + 1;
      uVar1 = 0xffffffff;
    }
    else if (*(int *)(iVar5 + 0x58) == 0) {
      piVar4 = (int *)(*(int *)(iVar5 + 0x44) * 0x10 + iVar8 + 0x40);
      iVar2 = *(int *)(iVar5 + 0x4c) + *piVar4;
      iStack48 = (*(int *)(iVar5 + 0xb0) + iVar2) - *(int *)(iVar5 + 0x9c);
      iVar6 = piVar4[1];
      iStack44 = piVar4[3];
      uStack36 = (uint)((piVar4[2] & DAT_00035fa4) == 0);
      uVar7 = piVar4[2] & DAT_00035fa8;
      if (*(uint *)(iVar5 + 0x94) < (uint)(iVar2 + iVar6)) {
        if (*(int *)(iVar5 + 0x3c) == 4) {
          *(int *)(iVar9 + DAT_00035fa0) = *(int *)(iVar9 + DAT_00035fa0) + 1;
        }
        uVar1 = 0xffffffff;
      }
      else {
        (*DAT_00035fac)(param_1,&local_34,auStack40);
        if (*(int *)(iVar5 + 0x74) != 0) {
          if (local_34 < (int)uVar7) {
            *(int *)(iVar9 + DAT_00035f9e) = *(int *)(iVar9 + DAT_00035f9e) + 1;
            return 0xffffffff;
          }
          if (uVar7 == 0) {
            piVar4 = (int *)((*(int *)(iVar8 + 0x3c) + -1) * 0x10 + iVar8 + 0x40);
            uVar3 = *(int *)(iVar8 + 4) + *piVar4 + piVar4[1];
            if (*(uint *)(iVar5 + 0xc) < uVar3) {
              uVar3 = *(uint *)(iVar5 + 0xc);
            }
            if (*(uint *)(iVar5 + 0x94) < uVar3) {
              return 0xffffffff;
            }
          }
        }
        if (((int)(iStack44 + uVar7) < local_34) && (iVar2 = FUN_00035e10(param_1), iVar2 != 0)) {
          (*DAT_000360e4)(param_1,iVar6);
          uVar7 = DAT_000360e8;
          *(int *)(iVar9 + DAT_000360e0) = *(int *)(iVar9 + DAT_000360e0) + 1;
          *(int *)(iVar5 + 0x48) = *(int *)(iVar5 + 0x48) + 1;
          iVar2 = *(int *)(iVar5 + 0x44) + 1;
          *(int *)(iVar5 + 0x44) = iVar2;
          piVar4 = (int *)(iVar2 * 0x10 + iVar8 + 0x40);
          iStack48 = (*(int *)(iVar5 + 0x4c) + *piVar4 + *(int *)(iVar5 + 0xb0)) -
                     *(int *)(iVar5 + 0x9c);
          iVar6 = piVar4[1];
          iStack44 = piVar4[3];
          uStack36 = (uint)((piVar4[2] & uVar7) == 0);
          uVar7 = piVar4[2] & DAT_000360ec;
          if (*DAT_000360f0 != 0) {
            (*DAT_000360f8)(DAT_000360f4);
            (*DAT_000360f8)((*(int *)(iVar5 + 0x48) + -1) * 0x10000 | *DAT_00036100 & DAT_000360fc);
            (*DAT_000360f8)(*(undefined4 *)(iVar9 + DAT_000360e0));
            (*DAT_000360f8)(*(int *)(iVar5 + 0x44) + -1);
          }
        }
        if (*(int *)(iVar8 + 0x18) == DAT_00036104) {
          iVar8 = (*DAT_00036108)(iStack48,*(undefined4 *)(iVar5 + 0x10),
                                  *(undefined4 *)(iVar5 + 0x14),(int)*(char *)(iVar8 + 0x24),
                                  *(undefined4 *)(iVar5 + 0x6c),*(undefined4 *)(iVar8 + 0x1c),
                                  *(undefined4 *)(iVar8 + 0x20));
        }
        else {
          iVar8 = (*DAT_0003610c)(iStack48,*(undefined4 *)(iVar5 + 0x10),
                                  *(undefined4 *)(iVar5 + 0x14),(int)*(char *)(iVar8 + 0x24),
                                  *(undefined4 *)(iVar5 + 0x6c),DAT_000360e2 + iVar5,0,
                                  *(undefined4 *)(iVar8 + 0x2c),*(undefined4 *)(iVar5 + 0x7c));
        }
        if (iVar8 != 0) {
          (*DAT_00036110)();
        }
        *(undefined4 *)(iVar5 + 0x58) = 1;
        *(uint *)(iVar5 + 0x54) = uStack36;
        *(uint *)(iVar5 + 0x5c) = uVar7;
        *(int *)(iVar5 + 0x60) = iStack44;
        (*DAT_00036114)(param_1);
        (*DAT_000360e4)(param_1,iVar6);
        uVar1 = 0;
        *(int *)(iVar5 + 0x48) = *(int *)(iVar5 + 0x48) + 1;
      }
    }
    else {
      if (*(int *)(iVar5 + 0x3c) == 4) {
        *(int *)(iVar9 + DAT_00035f9e) = *(int *)(iVar9 + DAT_00035f9e) + 1;
      }
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



int FUN_00036412(void)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = ((int)*(char *)(int)DAT_00036514 & 0xffU) << 8 | (int)*(char *)(int)DAT_00036516 & 0xffU;
  if (uVar2 < ((int)*DAT_00036524 & 0xffffU)) {
    *DAT_00036520 = *DAT_00036520 + (int)DAT_00036518;
  }
  piVar1 = DAT_00036520;
  *DAT_00036524 = (short)uVar2;
  return ((int)DAT_0003651a & (int)uVar2 >> 8) + *piVar1;
}



undefined8 FUN_000364c6(int *param_1)

{
  int iVar1;
  int iVar2;
  uint in_sr;
  uint uVar3;
  
  iVar2 = *param_1;
  uVar3 = in_sr & (int)DAT_00036512 & 0xfff0fff | 0xf0;
  iVar1 = FUN_00036412();
  return CONCAT44(uVar3 & (int)DAT_00036512,iVar1 - *(int *)((int)DAT_0003651c + iVar2 + 0x38));
}



uint FUN_00036528(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r2;
  uint uVar4;
  int iVar5;
  int local_24;
  undefined auStack32 [12];
  
  iVar5 = *param_1;
  iVar1 = *(int *)(iVar5 + 0x3c);
  if ((iVar1 == -1) || (iVar1 == 0)) {
    uVar4 = 0xffffffff;
  }
  else {
    if ((iVar1 != 1) && ((((iVar1 == 2 || (iVar1 == 3)) || (iVar1 == 4)) || (iVar1 == 5)))) {
      FUN_000364c6(param_1);
    }
    (*DAT_00036630)(param_1,&local_24,auStack32);
    iVar1 = (*DAT_00036634)(*(undefined4 *)(iVar5 + DAT_0003662a + 0x50));
    iVar5 = (*DAT_00036634)();
    iVar2 = (*DAT_00036638)();
    (*DAT_00036638)();
    iVar3 = (*DAT_00036634)();
    uVar4 = extraout_r2 + iVar1 * local_24 + iVar5 * iVar2 + iVar3 & 0xfffffffc;
  }
  return uVar4;
}



int FUN_00036c1c(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*param_1 + (int)DAT_00036c34);
  cVar1 = *(char *)(iVar3 + 0x25);
  iVar2 = param_2;
  if ((cVar1 != '\x01') && (iVar2 = *param_1, cVar1 == '\x02')) {
    iVar2 = param_2 >> 1;
  }
  if (*(char *)(iVar3 + 0x26) != '\b') {
    return iVar2 >> 1;
  }
  return iVar2;
}



int FUN_00037126(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined auStack64 [8];
  char cStack56;
  undefined auStack36 [24];
  
  FUN_00037248(auStack36,param_1,param_3,param_4,param_1);
  iVar2 = 0;
  if (0 < param_3) {
    do {
      iVar1 = FUN_000374a2(auStack36,auStack64);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (cStack56 == '\0') break;
      FUN_000377d2(param_2,auStack64);
      param_2 = param_2 + 0xc;
      param_3 = param_3 + -1;
      iVar2 = iVar2 + 1;
    } while (0 < param_3);
  }
  *(byte *)(param_2 + -1) = *(byte *)(param_2 + -1) | 1;
  return iVar2;
}



int FUN_0003718e(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined auStack72 [8];
  char cStack64;
  undefined auStack60 [16];
  undefined auStack44 [24];
  
  FUN_00037248(auStack44,param_1,param_3,param_4,param_1);
  pcVar1 = DAT_000371e8;
  iVar3 = 0;
  for (; 0 < param_3; param_3 = param_3 + -1) {
    iVar2 = FUN_000374a2(auStack44,auStack72);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (cStack64 == '\0') break;
    if ((iVar3 < 3) || (iVar2 = (*DAT_000372d4)(param_2 + -0xc,auStack60,0xc), iVar2 != 0)) {
      FUN_000377d2(param_2,auStack72);
      (*pcVar1)(param_2 + 0xc,auStack60,0xc);
    }
    param_2 = param_2 + 0x18;
    iVar3 = iVar3 + 1;
  }
  *(byte *)(param_2 + -0xd) = *(byte *)(param_2 + -0xd) | 1;
  return iVar3;
}



void FUN_00037248(int *param_1,int param_2)

{
  *param_1 = param_2;
  param_1[1] = (int)DAT_000372d0 + *DAT_000372d8;
  param_1[2] = -1;
  param_1[4] = *(int *)(param_2 + 0x20);
  param_1[3] = 0;
  return;
}



int FUN_00037266(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*param_1 == 0) {
    (*DAT_000372dc)(param_2,0,param_3);
  }
  else {
    iVar3 = (int)DAT_000372d2;
    if ((param_1[2] == -1) || ((int)DAT_000372d2 <= param_1[2])) {
      iVar1 = (*DAT_000372e0)(*param_1,1,param_1[1],iVar3);
      if (iVar1 != iVar3) {
        if (-1 < iVar1) {
          return -1;
        }
        return iVar1;
      }
      param_1[2] = 0;
    }
    uVar2 = iVar3 - param_1[2];
    uVar4 = param_3;
    if (uVar2 < param_3) {
      uVar4 = uVar2;
    }
    (*DAT_00037454)(param_2,param_1[1] + param_1[2],uVar4);
    param_1[2] = param_1[2] + uVar4;
    if (uVar4 < param_3) {
      iVar1 = (*DAT_00037458)(*param_1,1,param_1[1],iVar3);
      if (iVar1 != iVar3) {
        if (-1 < iVar1) {
          return -1;
        }
        return iVar1;
      }
      (*DAT_00037454)(uVar4 + param_2,param_1[1],param_3 - uVar4);
      param_1[2] = param_3 - uVar4;
    }
  }
  return 0;
}



int FUN_0003733e(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char local_10 [4];
  undefined4 *puStack12;
  
  puStack12 = param_2;
  uVar1 = FUN_00037266(param_1,local_10,1);
  *param_2 = uVar1;
  return (int)local_10[0];
}



int FUN_0003735a(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  short local_10 [2];
  undefined4 *puStack12;
  
  puStack12 = param_2;
  uVar1 = FUN_00037266(param_1,local_10,2);
  *param_2 = uVar1;
  return (int)local_10[0];
}



int FUN_00037376(undefined4 param_1,int *param_2)

{
  int iVar1;
  short local_14 [2];
  undefined4 uStack16;
  undefined auStack12 [8];
  
  uStack16 = param_1;
  iVar1 = FUN_00037266(param_1,auStack12,2);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = FUN_00037266(uStack16,local_14,2);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    return 0;
  }
  return (int)local_14[0];
}



undefined4 FUN_000373be(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 local_14;
  undefined4 uStack16;
  undefined auStack12 [8];
  
  uStack16 = param_1;
  iVar1 = FUN_00037266(param_1,auStack12,4);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = FUN_00037266(uStack16,&local_14,4);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    return 0;
  }
  return local_14;
}



undefined4 FUN_00037406(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 *puStack12;
  
  puStack12 = param_2;
  uVar1 = FUN_00037266(param_1,&local_10,4);
  *param_2 = uVar1;
  return local_10;
}



char FUN_00037422(undefined4 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_0003733e();
  if (*param_2 == 0) {
    if ((cVar1 == '\0') && (iVar2 = param_1[3], param_1[3] = iVar2 + 1, iVar2 + 1 < (int)param_1[4])
       ) {
      iVar2 = (*DAT_00037540)(*param_1,1,param_1[1],(int)DAT_0003753a);
      if (iVar2 == DAT_0003753a) {
        param_1[2] = 0;
        cVar1 = FUN_0003733e(param_1,param_2);
        if (*param_2 != 0) {
          cVar1 = '\0';
        }
      }
      else {
        if (iVar2 < 1) {
          *param_2 = iVar2;
        }
        else {
          *param_2 = -1;
        }
        cVar1 = '\0';
      }
    }
  }
  else {
    cVar1 = '\0';
  }
  return cVar1;
}



int FUN_000374a2(int *param_1,int *param_2)

{
  undefined uVar2;
  int iVar1;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int local_2c;
  int iStack40;
  byte bStack36;
  
  if (*param_1 == 0) {
    *(undefined *)(param_2 + 2) = 0;
    return 0;
  }
  uVar2 = FUN_00037422(param_1,&local_2c);
  *(undefined *)(param_2 + 2) = uVar2;
  if (local_2c != 0) {
    return local_2c;
  }
  if (*(char *)(param_2 + 2) == '\0') {
    return 0;
  }
  FUN_0003733e(param_1,&local_2c);
  if (local_2c != 0) {
    return local_2c;
  }
  iVar1 = FUN_000373be(param_1,&local_2c);
  *param_2 = iVar1 + DAT_0003753c;
  if (local_2c != 0) {
    return local_2c;
  }
  iVar1 = FUN_000373be(param_1,&local_2c);
  param_2[1] = iVar1;
  if (local_2c != 0) {
    return local_2c;
  }
  iVar1 = 0;
  do {
    FUN_0003733e(param_1,&local_2c);
    if (local_2c != 0) {
      return local_2c;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 7);
  bStack36 = FUN_0003733e(param_1,&local_2c);
  if (local_2c != 0) {
    return local_2c;
  }
  uVar2 = FUN_0003733e(param_1,&local_2c);
  *(undefined *)((int)param_2 + 10) = uVar2;
  if (local_2c != 0) {
    return local_2c;
  }
  uVar2 = FUN_0003733e(param_1,&local_2c);
  *(undefined *)((int)param_2 + 0xb) = uVar2;
  if (local_2c != 0) {
    return local_2c;
  }
  FUN_00037376(param_1,&local_2c);
  if (local_2c != 0) {
    return local_2c;
  }
  bVar3 = FUN_0003733e(param_1,&local_2c);
  if (local_2c != 0) {
    return local_2c;
  }
  uVar8 = (uint)bVar3;
  iStack40 = uVar8 + 0x21;
  iVar1 = 0;
  piVar7 = param_2 + 3;
  do {
    uVar5 = uVar8;
    if (8 < uVar8) {
      uVar5 = 8;
    }
    piVar6 = (int *)0x8;
    if ((int)uVar5 <= iVar1) break;
    bVar3 = FUN_0003733e(param_1,&local_2c);
    iVar1 = iVar1 + 1;
    if (local_2c != 0) {
      return local_2c;
    }
    if (bVar3 == 0x3b) break;
    *(byte *)piVar7 = bVar3;
    piVar6 = (int *)((int)piVar7 + 1);
    piVar7 = piVar6;
  } while (bVar3 != 0x2e);
  if (bVar3 == 0x3b) {
    while (iVar1 < (int)uVar8) {
      FUN_0003733e(param_1,&local_2c);
      iVar1 = iVar1 + 1;
      if (local_2c != 0) {
        return local_2c;
      }
    }
  }
  else if (bVar3 != 0x2e) {
    do {
      if ((int)uVar8 <= iVar1) goto LAB_000376aa;
      cVar4 = FUN_0003733e(param_1,&local_2c);
      iVar1 = iVar1 + 1;
      if (local_2c != 0) {
        return local_2c;
      }
    } while (cVar4 != '.');
    *(undefined *)piVar7 = 0x2e;
    piVar6 = (int *)((int)piVar7 + 1);
    piVar7 = piVar6;
  }
LAB_000376aa:
  if (iVar1 < (int)uVar8) {
    cVar4 = FUN_0003733e(param_1,&local_2c);
    iVar1 = iVar1 + 1;
    if (local_2c != 0) {
      return local_2c;
    }
    if (cVar4 == ';') goto joined_r0x00037670;
    if (((int)piVar7 - (int)piVar6 < 4) && ((int)piVar7 - (int)(param_2 + 3) < 0xc)) {
      *(char *)piVar7 = cVar4;
      piVar7 = (int *)((int)piVar7 + 1);
    }
    goto LAB_000376aa;
  }
LAB_000376ae:
  if ((int)piVar7 - (int)(param_2 + 3) < 0xc) {
    *(undefined *)piVar7 = 0;
  }
  if ((uVar8 + 1 & 1) != 0) {
    FUN_0003733e(param_1,&local_2c);
    if (local_2c != 0) {
      return local_2c;
    }
    iStack40 = iStack40 + 1;
  }
  if (*(char *)(param_2 + 3) == '\0') {
    (*DAT_000377ac)();
  }
  else if (*(char *)(param_2 + 3) == '\x01') {
    (*DAT_000377ac)();
  }
  if (iStack40 < (int)((int)*(char *)(param_2 + 2) & 0xffU)) {
    FUN_00037406(param_1,&local_2c);
    if (local_2c != 0) {
      return local_2c;
    }
    bVar3 = FUN_0003733e(param_1,&local_2c);
    *(byte *)((int)param_2 + 9) = bVar3 & 0xf8;
    if (local_2c != 0) {
      return local_2c;
    }
    FUN_0003733e(param_1,&local_2c);
    if (local_2c != 0) {
      return local_2c;
    }
    FUN_0003735a(param_1,&local_2c);
    if (local_2c != 0) {
      return local_2c;
    }
    uVar2 = FUN_0003733e(param_1,&local_2c);
    *(undefined *)((int)param_2 + 0x19) = uVar2;
    if (local_2c != 0) {
      return local_2c;
    }
    for (iVar1 = iStack40 + 9; iVar1 < (int)((int)*(char *)(param_2 + 2) & 0xffU); iVar1 = iVar1 + 1
        ) {
      FUN_0003733e(param_1,&local_2c);
      if (local_2c != 0) {
        return local_2c;
      }
    }
  }
  else {
    if ((bStack36 & 2) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (undefined)DAT_000377a4;
    }
    *(undefined *)((int)param_2 + 9) = uVar2;
    *(undefined *)((int)param_2 + 0x19) = 0;
  }
  return 0;
joined_r0x00037670:
  while (iVar1 < (int)uVar8) {
    FUN_0003733e(param_1,&local_2c);
    iVar1 = iVar1 + 1;
    if (local_2c != 0) {
      return local_2c;
    }
  }
  goto LAB_000376ae;
}



void FUN_000377d2(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined *)((int)param_1 + 10) = *(undefined *)((int)param_2 + 0x19);
  *(undefined *)((int)param_1 + 0xb) = *(undefined *)((int)param_2 + 9);
  *(undefined *)(param_1 + 2) = *(undefined *)((int)param_2 + 10);
  *(undefined *)((int)param_1 + 9) = *(undefined *)((int)param_2 + 0xb);
  return;
}



undefined4 FUN_000378ce(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return uVar1;
}



void FUN_000378da(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



undefined4 FUN_00037ab4(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x6c;
  uVar2 = 0;
  if (*(int *)(param_1 + 0x84) < 1) {
    *param_2 = 0;
    return 6;
  }
  if (*(int *)(param_1 + 0x9c) == 0) {
    *param_2 = 0;
    return *(undefined4 *)(param_1 + 0xa0);
  }
  iVar1 = *(int *)(param_1 + 0xa0);
  if (iVar1 == 0) {
    FUN_00037b8e(param_1);
    if (*(int *)(param_1 + 0x78) == 0) goto LAB_00037b7c;
    *(undefined4 *)(param_1 + 0xa0) = 1;
LAB_00037b10:
    FUN_00037c0a(iVar3);
    if (*(int *)(param_1 + 0x7c) == 0) goto LAB_00037b7c;
    *(undefined4 *)(param_1 + 0xa0) = 2;
LAB_00037b1e:
    iVar1 = FUN_00037f00(iVar3);
    if (iVar1 == 0) goto LAB_00037b7c;
    *(undefined4 *)(param_1 + 0xa0) = 3;
LAB_00037b2a:
    iVar1 = FUN_00037f52(param_1);
    if (iVar1 == 0) goto LAB_00037b7c;
    *(undefined4 *)(param_1 + 0xa0) = 4;
LAB_00037b36:
    iVar1 = FUN_00038014(iVar3);
    if (0 < iVar1) goto LAB_00037b7c;
    uVar2 = 1;
    *(undefined4 *)(param_1 + 0xa0) = 5;
  }
  else {
    if (iVar1 == 1) goto LAB_00037b10;
    if (iVar1 == 2) goto LAB_00037b1e;
    if (iVar1 == 3) goto LAB_00037b2a;
    if (iVar1 == 4) goto LAB_00037b36;
    if (iVar1 != 5) goto LAB_00037b7c;
  }
  if (*(int *)(param_1 + 0x8c) == *(int *)(*(int *)(param_1 + 0x78) + 8)) {
    (*DAT_00037bb0)(param_1,*(undefined4 *)(param_1 + 0x78),0xffffffff);
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + *(int *)(*(int *)(param_1 + 0x78) + 0xc);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  FUN_000380f8(iVar3,*(undefined4 *)(param_1 + 0x7c));
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (*(int *)(param_1 + 0x88) < *(int *)(param_1 + 0x84)) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xa0) = 6;
  }
LAB_00037b7c:
  *param_2 = uVar2;
  return *(undefined4 *)(param_1 + 0xa0);
}



void FUN_00037b8e(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x80);
  iVar1 = *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x88);
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  if (1 < *(int *)(param_1 + 0x98)) {
    if (*(int *)(param_1 + 0x78) != 0) {
      iVar2 = (*DAT_00037c98)();
    }
    FUN_0003809e(param_1 + 0x6c);
    iVar1 = (*DAT_00037c98)();
    if (iVar1 <= iVar2) {
      iVar2 = iVar1;
    }
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    iVar2 = (*DAT_00037c9c)(param_1,iVar2);
    *(int *)(param_1 + 0x78) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
    }
  }
  return;
}



void FUN_00037c0a(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x2c) < 2) {
    iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 8) - *(int *)(param_1 + 0x20);
    iVar1 = FUN_0003809e(param_1);
    if (iVar1 <= iVar3) {
      iVar3 = FUN_0003809e(param_1);
    }
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 8);
  }
  uVar2 = FUN_000380d0(param_1,iVar3);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  return;
}



void FUN_00037d10(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  uint *puVar1;
  uint uVar2;
  int iStack84;
  int iStack80;
  uint uStack76;
  undefined4 uStack72;
  undefined4 uStack68;
  int iStack64;
  int iStack60;
  undefined4 uStack56;
  int iStack48;
  undefined4 uStack44;
  undefined4 uStack40;
  undefined4 uStack36;
  
  uVar2 = param_6 >> 2;
  if (uVar2 != 0) {
    (*DAT_00037da8)(param_1);
    uStack44 = 0;
    uStack40 = 1;
    uStack36 = 0xf;
    (*DAT_00037dac)(&uStack44);
    if (param_3 < 1) {
      if (param_3 < 0) {
        uStack72 = 2;
      }
      else {
        uStack72 = 0;
      }
    }
    else {
      uStack72 = 1;
    }
    if (param_5 < 1) {
      if (param_5 < 0) {
        uStack68 = 2;
      }
      else {
        uStack68 = 0;
      }
    }
    else {
      uStack68 = 1;
    }
    iStack64 = (int)DAT_00037ee4;
    iStack60 = (int)DAT_00037ee6;
    uStack56 = 0;
    iStack48 = (int)DAT_00037ee8;
    iStack84 = param_4;
    iStack80 = param_2;
    uStack76 = uVar2;
    (*DAT_00037eec)(&iStack84,param_1);
    (*DAT_00037ef0)(param_1);
    (*DAT_00037ef4)(param_2,param_6);
  }
  puVar1 = DAT_00037ef8;
  *DAT_00037ef8 = param_6 & 3;
  puVar1[2] = param_3 * uVar2 * 4 + param_2;
  puVar1[1] = param_5 * uVar2 * 4 + param_4;
  return;
}



undefined4 FUN_00037f00(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 == 0) {
    uVar2 = DAT_000380ac & **(uint **)(param_1 + 0x10);
    if (((DAT_000380b0 <= uVar2) && (uVar2 < DAT_000380b4)) ||
       ((DAT_000380b8 <= uVar2 && (uVar2 < DAT_000380bc)))) {
      iVar3 = 3;
    }
  }
  else if (iVar3 == 4) {
    return 1;
  }
                    // WARNING: Could not recover jumptable at 0x00037f4a. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (**(code **)(DAT_000380c0 + (char)((char)iVar3 * '\f')))();
  return uVar1;
}



undefined4 FUN_00037f52(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0x78);
  puVar3 = *(uint **)(param_1 + 0x7c);
  if (*(int *)(param_1 + 0xa4) == 4) {
    uVar1 = (**(code **)(param_1 + 0x94))(*(undefined4 *)(param_1 + 0x90),piVar5[3]);
    if ((int)uVar1 < 0) {
      piVar5[2] = uVar1;
      return 0;
    }
    piVar5[3] = uVar1;
    puVar3[3] = uVar1;
    uVar1 = uVar1 * *(int *)(param_1 + 0x98);
    piVar5[2] = uVar1;
    puVar3[2] = uVar1;
    *(uint *)(param_1 + 0x8c) = uVar1;
  }
  else {
    if ((*(int *)(param_1 + 0x8c) == 0) &&
       (iVar2 = (*DAT_000380c4)(piVar5,param_1 + 0xc), iVar2 == 0)) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0xa4);
    uVar1 = puVar3[2];
    if ((iVar2 == 0) &&
       (((uVar4 = DAT_000380ac & *puVar3, DAT_000380b0 <= uVar4 && (uVar4 < DAT_000380b4)) ||
        ((DAT_000380b8 <= uVar4 && (uVar4 < DAT_000380bc)))))) {
      iVar2 = 3;
    }
    (**(code **)((char)((char)iVar2 * '\f') + DAT_000380c8))
              (*puVar3,puVar3[1],piVar5[1] * *(int *)(param_1 + 0x8c) + *piVar5,piVar5[1],uVar1);
    *(uint *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + uVar1;
  }
  return 1;
}



undefined4 FUN_00038014(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 == 0) {
    uVar2 = DAT_000380ac & **(uint **)(param_1 + 0x10);
    if (((DAT_000380b0 <= uVar2) && (uVar2 < DAT_000380b4)) ||
       ((DAT_000380b8 <= uVar2 && (uVar2 < DAT_000380bc)))) {
      iVar3 = 3;
    }
  }
  else if (iVar3 == 4) {
    if (*(int *)(*(int *)(param_1 + 0x10) + 0xc) < 0) {
      return 1;
    }
    return 0;
  }
                    // WARNING: Could not recover jumptable at 0x0003806c. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (**(code **)(DAT_000380cc + (char)((char)iVar3 * '\f')))();
  return uVar1;
}



void FUN_00038074(int param_1,undefined *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_4;
  
  if (0 < param_1) {
    local_4 = *param_3;
    iVar1 = 0;
    if (0 < param_1) {
      do {
        *param_2 = *(undefined *)((int)&local_4 + iVar1);
        iVar1 = iVar1 + 1;
        param_2 = param_2 + 1;
      } while (iVar1 < param_1);
    }
  }
  return;
}



int FUN_0003809e(int param_1)

{
  return *(int *)(param_1 + 4) * *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 8);
}



int * FUN_000380d0(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*DAT_00038138 + (int)DAT_00038134);
  if (piVar1[4] != 0) {
    return (int *)0x0;
  }
  *piVar1 = *param_1 + param_1[2];
  piVar1[1] = 1;
  piVar1[2] = param_2;
  piVar1[4] = 1;
  return piVar1;
}



void FUN_000380f8(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x38) != 4) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_2 + 8);
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  return;
}



int FUN_0003863a(int param_1,int param_2)

{
  int iVar1;
  int extraout_r3;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    return param_2;
  }
  (*DAT_00038760)(param_1,param_2,*(undefined *)(param_1 + 0xc));
  iVar1 = (*DAT_00038764)();
  return iVar1 + extraout_r3;
}



undefined4 FUN_00038692(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  byte local_10 [8];
  undefined4 uStack8;
  
  uVar1 = (*DAT_00038768)(local_10);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar1;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = uStack8;
  }
  iVar2 = *DAT_0003876c;
  if (iVar2 == 0) {
    local_10[0] = local_10[0] & 0xf;
    if (local_10[0] == 0) {
      return 2;
    }
    if ((local_10[0] == 1) || (local_10[0] == 2)) {
      return 0;
    }
    if (local_10[0] != 3) {
      if (local_10[0] == 4) {
        return 2;
      }
      if (local_10[0] == 5) {
        return 1;
      }
      if (local_10[0] != 8) {
        return 5;
      }
    }
    return 1;
  }
  if (iVar2 == -0xd) {
    return 3;
  }
  if (iVar2 != -0xe) {
    if (iVar2 != -0x10) {
      return 5;
    }
    return 6;
  }
  return 4;
}



int FUN_00038752(uint param_1)

{
  int iVar1;
  
  if ((param_1 & 0x40) == 0) {
    if ((param_1 & 0x10) == 0) {
      iVar1 = (int)DAT_0003883c;
    }
    else if ((param_1 & 8) == 0) {
      iVar1 = (int)DAT_0003883a;
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = (int)DAT_0003875e;
  }
  return iVar1;
}



undefined4 FUN_00038792(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = (*DAT_00038840)();
    if (iVar2 == 0) {
      *param_3 = 3;
      return 0;
    }
  }
  else if (param_2 != 1) {
    if (param_2 == 2) {
      *param_3 = *(undefined4 *)(param_1 + 0x50);
      return 0;
    }
    if (param_2 == 3) {
      *param_3 = 5;
      return 0;
    }
    if (param_2 == 4) {
      *param_3 = 6;
      return 0;
    }
    if (param_2 != 6) {
      *param_3 = 8;
      return 0;
    }
    *param_3 = 9;
    return 0;
  }
  if ((*(int *)(param_1 + 0x4c) != 1) && (*(int *)(param_1 + 0x50) == 0)) {
    (*DAT_00038844)(param_1 + 0x1c);
    piVar1 = DAT_00038848;
    *(undefined4 *)(param_1 + 0x58) = 0;
    iVar2 = *piVar1;
    *(undefined4 *)(iVar2 + 0xb0) = 0;
    *(undefined4 *)(iVar2 + 0xac) = 0;
  }
  *param_3 = 1;
  return 1;
}



undefined4 FUN_0003884c(int param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x58);
  *param_2 = iVar4;
  iVar5 = *(int *)(param_1 + 0x5c);
  if (iVar4 < iVar5) {
    iVar5 = iVar4;
  }
  *param_2 = iVar5;
  uVar3 = (*DAT_00038968)(param_1 + 0x1c);
  iVar5 = FUN_0003863a(param_1,uVar3);
  piVar2 = DAT_0003896c;
  iVar5 = *(int *)(param_1 + 4) + iVar5;
  if (*(int *)(param_1 + 0x4c) == 1) {
    iVar4 = (*DAT_00038974)(param_1,DAT_00038970,0);
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    if ((0 < iVar4) && (iVar5 < *(int *)(*DAT_0003896c + (int)DAT_00038962))) {
      iVar4 = iVar4 - (*(int *)(*piVar2 + (int)DAT_00038962) - iVar5);
    }
  }
  else {
    iVar4 = 0;
  }
  pcVar1 = DAT_00038968;
  if (iVar4 < *param_2) {
    *param_2 = *param_2 - iVar4;
    *(int *)(param_1 + 0x44) = iVar5;
    iVar5 = (*pcVar1)(param_1 + 0x1c);
    iVar5 = FUN_0003863a(param_1,*param_2 + iVar5);
    *(int *)(param_1 + 0x48) = iVar5 + *(int *)(param_1 + 4);
    if ((((*(int *)(param_1 + 0x44) < *(int *)(*piVar2 + (int)DAT_00038962)) ||
         (*(int *)(*piVar2 + (int)DAT_00038964) <= *(int *)(param_1 + 0x44))) ||
        (*(int *)(param_1 + 0x48) <= *(int *)(*piVar2 + (int)DAT_00038962))) ||
       (*(int *)(*piVar2 + (int)DAT_00038964) < *(int *)(param_1 + 0x48))) {
      uVar3 = 1;
    }
    else {
      *(undefined4 *)(*piVar2 + (int)DAT_00038962) = *(undefined4 *)(param_1 + 0x44);
      *param_3 = 1;
      uVar3 = 0;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x58) + *param_2;
    *(int *)(param_1 + 0x58) = iVar4;
    if (*(int *)(param_1 + 0x54) == iVar4) {
      iVar5 = (int)DAT_00038964;
      *param_3 = 4;
      *(undefined4 *)(*piVar2 + iVar5 + -4) = *(undefined4 *)(*piVar2 + iVar5);
    }
    else {
      iVar4 = (int)DAT_00038962;
      *param_3 = 2;
      *(int *)(*piVar2 + iVar4) = iVar5;
    }
    uVar3 = 0;
  }
  return uVar3;
}



void FUN_00038b78(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (*DAT_00038cdc)(*(undefined4 *)(param_1 + 4),0,0xffffffff,param_4,param_1);
                    // WARNING: Could not recover jumptable at 0x00038b8c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00038ccc)();
  return;
}



int FUN_00038b90(int param_1)

{
  return *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x24);
}



int FUN_00038b98(int param_1)

{
  int iVar1;
  int local_c;
  int iStack8;
  
  iStack8 = param_1;
  iVar1 = (*DAT_00038ce4)(*(undefined4 *)(param_1 + 4),0,DAT_00038ce0,&local_c,0);
  if (iVar1 != 0) {
    return -1;
  }
  iVar1 = (*DAT_00038ccc)();
  if (iVar1 != 0) {
    return -1;
  }
  if (local_c < 0) {
    local_c = 0;
  }
  return local_c;
}



int FUN_00038be8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x1c;
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (param_3 == 1) {
    iVar1 = FUN_00038b90(iVar3);
    iVar2 = param_2;
    param_2 = iVar1 + param_2;
  }
  else {
    iVar2 = FUN_00038b90(iVar3);
    if (iVar2 == param_2) {
      return param_2;
    }
    iVar2 = FUN_00038b98(iVar3);
    if (iVar2 < 0) {
      return -1;
    }
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
    if ((*(int *)(param_1 + 0x3c) <= param_2) && (iVar1 = FUN_00038b90(iVar3), param_2 < iVar1)) {
      iVar2 = param_2 - *(int *)(param_1 + 0x3c);
    }
    if (0 < iVar2) {
      (*DAT_00038cdc)(*(undefined4 *)(param_1 + 0x20),0,iVar2);
      iVar2 = (*DAT_00038ccc)();
      if (iVar2 != 0) {
        return -1;
      }
    }
    *(int *)(param_1 + 0x3c) = param_2;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  else if (*(int *)(param_1 + 0x4c) == 1) {
    if ((param_3 == 1) && (iVar2 = FUN_00038b98(iVar3), iVar2 < 0)) {
      return -1;
    }
    if ((param_2 < *(int *)(param_1 + 0x3c)) || (iVar2 + *(int *)(param_1 + 0x3c) + 1 < param_2)) {
      iVar2 = FUN_00038b78(iVar3);
      if (iVar2 != 0) {
        return -1;
      }
      *(int *)(param_1 + 0x3c) = param_2;
    }
    *(int *)(param_1 + 0x40) = param_2 - *(int *)(param_1 + 0x3c);
  }
  iVar3 = FUN_00038b90(iVar3);
  return iVar3;
}



void FUN_00038eec(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_00038fe0;
  if (param_1 == 0) {
    *(undefined *)(*DAT_00038fe0 + 0x17) = 0;
    iVar2 = *piVar1;
  }
  else {
    *(undefined *)(*DAT_00038fe0 + 0x17) = 1;
    iVar2 = *piVar1;
  }
  *(bool *)(iVar2 + 0x2f) = param_1 != 0;
  return;
}



undefined4 FUN_0003955c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined auStack8 [8];
  
  piVar1 = DAT_00039598;
  iVar3 = *DAT_00039598;
  if (*(int *)(iVar3 + DAT_00039588) != 0) {
    return 0xffffffff;
  }
  if (*(int *)(iVar3 + 0x34) == param_1) {
    return 0xfffffffb;
  }
  iVar2 = (int)DAT_000396a2;
  *(undefined4 *)(iVar3 + iVar2) = 1;
  *(int *)(*piVar1 + iVar2 + 4) = param_1;
  *(undefined4 *)(*piVar1 + iVar2 + 8) = param_2;
  *(undefined4 *)(*piVar1 + iVar2 + 0xc) = param_3;
  FUN_00039f90(auStack8);
  return 0;
}



undefined4 FUN_000395cc(int param_1)

{
  if ((*(int *)(*DAT_000396a8 + (int)DAT_000396a2) != 0) &&
     (*(int *)(*DAT_000396a8 + (int)DAT_000396a4) == param_1)) {
    return 0;
  }
  return 1;
}



uint FUN_000395ea(byte *param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined4 local_14 [3];
  
  if (*DAT_000396ac == 1) {
    iVar3 = -8;
    *DAT_000396ac = 0;
  }
  else {
    iVar3 = (*DAT_000396b0)(param_1);
  }
  if (iVar3 != 0) {
    (*DAT_000396b4)(param_1);
  }
  uVar1 = (*DAT_000396b8)();
  if (((uVar1 & 0x20) == 0) && (bVar2 = *param_1 & 0xf, bVar2 != 6)) {
    if (bVar2 == 7) {
      *DAT_000396bc = 0xfffffff2;
    }
    else if (bVar2 == 10) {
      *DAT_000396bc = 0xfffffff0;
      local_14[0] = 0;
      (*DAT_000396c0)(local_14);
      (*DAT_000396c4)();
      (*DAT_000396c4)();
    }
  }
  else {
    *DAT_000396bc = 0xfffffff3;
  }
  return uVar1;
}



int FUN_00039a08(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c [2];
  
  piVar1 = DAT_00039a9c;
  local_1c[0] = 0;
  iVar3 = *DAT_00039a9c;
  iVar4 = 0;
  if ((*(int *)(iVar3 + 0x3c) == 0) ||
     (iVar2 = *(int *)(iVar3 + 0x3c) + -1, *(int *)(iVar3 + 0x3c) = iVar2, 0 < iVar2)) {
    FUN_000395ea(*piVar1 + 0x40);
    if (*DAT_00039aa0 == 0) {
      iVar3 = FUN_0003a51e((int)DAT_00039a94);
      if ((iVar3 == 1) && ((*DAT_00039aa4)((int)DAT_00039a96), *(int *)(*piVar1 + 0x4c) != 0)) {
        (**(code **)(*piVar1 + 0x4c))(*(undefined4 *)(*piVar1 + 0x50));
      }
      for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
        iVar2 = FUN_00039ad4(iVar3);
        if (iVar2 == 0) {
          iVar2 = FUN_00039b4c(iVar3,local_1c);
          if (iVar2 < 0) {
            return iVar2;
          }
          iVar4 = iVar4 + iVar2;
          if (0x1e < local_1c[0]) {
            return 1;
          }
        }
      }
      if (iVar4 < 1) {
        iVar3 = 0;
      }
      else {
        iVar3 = 1;
      }
    }
    else {
      iVar3 = 2;
    }
  }
  else {
    FUN_0003a544();
    iVar3 = 3;
  }
  return iVar3;
}



undefined4 FUN_00039ad4(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0x58;
  }
  else if (param_1 == 1) {
    iVar1 = (int)DAT_00039b38;
  }
  else if (param_1 == 2) {
    iVar1 = (int)DAT_00039b3a;
  }
  else if (param_1 == 3) {
    iVar1 = (int)DAT_00039b3c;
  }
  else if (param_1 == 4) {
    iVar1 = (int)DAT_00039b3e;
  }
  else if (param_1 == 5) {
    iVar1 = (int)DAT_00039b40;
  }
  else if (param_1 == 6) {
    iVar1 = (int)DAT_00039b42;
  }
  else {
    if (param_1 != 7) goto LAB_00039b2a;
    iVar1 = (int)DAT_00039b44;
  }
  param_1 = *(int *)(*DAT_00039b48 + iVar1);
LAB_00039b2a:
  if (param_1 != 0) {
    return 0;
  }
  return 1;
}



int FUN_00039b4c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = FUN_00039bd2(param_2);
    return iVar1;
  }
  if (param_1 == 1) {
    iVar1 = FUN_00039d4c(param_2);
    return iVar1;
  }
  if (param_1 == 2) {
    iVar1 = FUN_00039dae(param_2);
    return iVar1;
  }
  if (param_1 == 3) {
    iVar1 = FUN_00039f02(param_2);
    return iVar1;
  }
  if (param_1 == 4) {
    iVar1 = FUN_00039f90(param_2);
    return iVar1;
  }
  if (param_1 == 5) {
    iVar1 = FUN_0003a0a4(param_2);
    return iVar1;
  }
  if (param_1 == 6) {
    iVar1 = FUN_0003a3a0(param_2);
    return iVar1;
  }
  if (param_1 != 7) {
    return param_1;
  }
  iVar1 = FUN_0003a1c8(param_2);
  return iVar1;
}



void FUN_00039baa(undefined4 param_1)

{
  *(undefined4 *)(*DAT_00039d34 + 0x3c) = param_1;
  return;
}



undefined4 FUN_00039bd2(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  piVar1 = DAT_00039d34;
  for (iVar4 = 0; iVar4 < *(int *)(*piVar1 + 0x54); iVar4 = iVar4 + 1) {
    if (*(int *)(*piVar1 + 0x58) == 1) {
      puVar3 = (undefined *)(*piVar1 + 0x5c + iVar4 * 0x10);
      iVar2 = (*DAT_00039d3c)(*puVar3,puVar3[1]);
      if (iVar2 != 0) break;
      FUN_0003a5bc();
      *param_1 = *param_1 + 1;
      *(undefined4 *)(*piVar1 + 0x58) = 2;
    }
    if (*(int *)(*piVar1 + 0x58) == 2) {
      puVar3 = (undefined *)(*piVar1 + 0x5c + iVar4 * 0x10);
      iVar2 = (*DAT_00039d40)(*puVar3,puVar3 + 2);
      if (iVar2 != 0) break;
      FUN_0003a5bc();
      *param_1 = *param_1 + 1;
      if (*(int *)(iVar4 * 0x10 + *piVar1 + 0x68) == 0) {
        *(undefined4 *)(*piVar1 + 0x58) = 1;
      }
      else {
        *(undefined4 *)(*piVar1 + 0x58) = 3;
      }
    }
    if (*(int *)(*piVar1 + 0x58) == 3) {
      puVar3 = (undefined *)(*piVar1 + 0x5c + iVar4 * 0x10);
      iVar2 = (*DAT_00039d44)(*puVar3,*(undefined4 *)(puVar3 + 8),*(undefined4 *)(puVar3 + 0xc));
      if (iVar2 != 0) break;
      FUN_0003a5bc();
      *param_1 = *param_1 + 1;
      *(undefined4 *)(*piVar1 + 0x58) = 1;
    }
  }
  if (iVar4 < *(int *)(*piVar1 + 0x54)) {
    iVar2 = 0;
    for (; iVar4 < *(int *)(*piVar1 + 0x54); iVar4 = iVar4 + 1) {
      (*DAT_00039d48)(iVar2,*piVar1 + 0x5c);
      iVar2 = iVar2 + 1;
    }
    *(int *)(*piVar1 + 0x54) = iVar2;
  }
  else {
    *(undefined4 *)(*piVar1 + 0x54) = 0;
  }
  iVar4 = FUN_0003a51e(0x40);
  if ((iVar4 != 0) && (*(int *)(*piVar1 + 0x54) == 0)) {
    *(undefined4 *)(*piVar1 + 0x58) = 0;
  }
  return *(undefined4 *)(*piVar1 + 0x54);
}



undefined4 FUN_00039d4c(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_00039e64;
  if (*(int *)(*DAT_00039e64 + (int)DAT_00039e52) == 1) {
    iVar2 = (*DAT_00039e68)(*(undefined4 *)(*DAT_00039e64 + (int)DAT_00039e54));
    *param_1 = *param_1 + 1;
    if (iVar2 == 0) {
      *(undefined4 *)(*piVar1 + (int)DAT_00039e52) = 2;
    }
    FUN_0003a5bc();
  }
  if ((*(int *)((int)DAT_00039e52 + *piVar1) == 2) && (iVar2 = FUN_0003a51e(0x40), iVar2 != 0)) {
    *(undefined4 *)(*piVar1 + (int)DAT_00039e52) = 0;
  }
  return *(undefined4 *)((int)DAT_00039e52 + *piVar1);
}



undefined4 FUN_00039dae(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int local_1c;
  int aiStack24 [2];
  
  piVar1 = DAT_00039e64;
  if (*(int *)(*DAT_00039e64 + (int)DAT_00039e56) == 1) {
    (*DAT_00039e6c)(*(undefined4 *)(*DAT_00039e64 + (int)DAT_00039e58),&local_1c);
    FUN_0003a5bc();
    *param_1 = *param_1 + 1;
    iVar4 = local_1c - *(int *)(*piVar1 + (int)DAT_00039e5a);
    local_1c = *(int *)(*piVar1 + (int)DAT_00039e5c);
    if (iVar4 < local_1c) {
      local_1c = iVar4;
    }
    **(int **)(*piVar1 + (int)DAT_00039e5e) = local_1c;
    if (*(int *)(*piVar1 + (int)DAT_00039e60) == 0) {
      *(undefined4 *)(*piVar1 + (int)DAT_00039e56) = 0;
      return 0;
    }
    if (local_1c < 1) {
      iVar4 = (int)DAT_00039e56;
      *(undefined4 *)(*piVar1 + iVar4) = 0;
      **(undefined4 **)(*piVar1 + iVar4 + 0x18) = 0;
      return 0;
    }
    *(undefined4 *)(*piVar1 + (int)DAT_00039e56) = 2;
  }
  pcVar2 = DAT_00039f7c;
  if (*(int *)((int)DAT_00039e56 + *piVar1) == 2) {
    if (*(int *)(*piVar1 + 0x34) != -1) {
      return 2;
    }
    iVar4 = (int)DAT_00039f74;
    *(undefined4 *)(*piVar1 + 0x34) = *(undefined4 *)(*piVar1 + iVar4);
    iVar4 = (*pcVar2)(*(undefined4 *)(*piVar1 + iVar4),*(undefined4 *)(*piVar1 + iVar4 + 4),
                      **(undefined4 **)(*piVar1 + iVar4 + 0x10));
    if (iVar4 != 0) {
      return 2;
    }
    FUN_0003a5bc();
    *param_1 = *param_1 + 1;
    *(undefined4 *)(*piVar1 + (int)DAT_00039f76) = 3;
  }
  if (*(int *)((int)DAT_00039f76 + *piVar1) == 3) {
    iVar4 = (*DAT_00039f80)(aiStack24);
    if (iVar4 == 0) {
      FUN_0003a5bc();
      *param_1 = *param_1 + 1;
      iVar4 = (int)DAT_00039f76;
      *(undefined4 *)(*piVar1 + iVar4) = 0;
      **(int **)(*piVar1 + iVar4 + 0x18) = aiStack24[0] << 1;
      *(undefined4 *)(*piVar1 + 0x34) = 0xffffffff;
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



undefined4 FUN_00039f02(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = DAT_00039f84;
  iVar4 = *DAT_00039f84;
  if (*(int *)(iVar4 + DAT_00039f78) == 1) {
    iVar2 = (int)DAT_00039f7a;
    iVar4 = (*DAT_00039f88)(*(undefined4 *)(iVar4 + iVar2 + -8),*(undefined4 *)(iVar4 + iVar2 + -4),
                            *(undefined4 *)(iVar4 + iVar2));
    if (iVar4 != 0) {
      return 1;
    }
    FUN_0003a5bc();
    iVar4 = (int)DAT_00039f78;
    *param_1 = *param_1 + 1;
    *(undefined4 *)(*piVar1 + iVar4) = 2;
  }
  if ((*(int *)((int)DAT_00039f78 + *piVar1) == 2) && (iVar4 = (*DAT_00039f8c)(0), iVar4 == 0)) {
    *(undefined4 *)(*piVar1 + (int)DAT_00039f78) = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



bool FUN_00039f90(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = DAT_0003a094;
  iVar3 = *DAT_0003a094;
  bVar1 = true;
  if (*(int *)(iVar3 + DAT_0003a088) == 1) {
    if ((*(int *)(iVar3 + DAT_0003a08a) == 0) && (*(int *)(iVar3 + DAT_0003a08c) == -1)) {
      iVar3 = (*DAT_0003a098)(0,*(undefined4 *)(iVar3 + DAT_0003a08e));
      if (iVar3 != 0) {
        return true;
      }
      FUN_0003a5bc();
      iVar3 = (int)DAT_0003a088;
      *param_1 = *param_1 + 1;
      *(undefined4 *)(*piVar2 + iVar3) = 4;
    }
    else if (*(int *)(iVar3 + DAT_0003a08c) == 0) {
      bVar1 = false;
    }
    else {
      *(undefined4 *)(iVar3 + DAT_0003a088) = 2;
    }
  }
  if (*(int *)((int)DAT_0003a088 + *piVar2) == 2) {
    iVar3 = (int)DAT_0003a08c;
    iVar3 = (*DAT_0003a09c)(*(undefined4 *)(*piVar2 + iVar3 + -8),
                            *(undefined4 *)(*piVar2 + iVar3 + -4),*(undefined4 *)(*piVar2 + iVar3));
    *param_1 = *param_1 + 1;
    if (iVar3 == 0) {
      *(undefined4 *)(*piVar2 + (int)DAT_0003a088) = 3;
      FUN_0003a5bc();
    }
  }
  if ((*(int *)((int)DAT_0003a088 + *piVar2) == 3) &&
     (iVar3 = FUN_0003a51e((int)DAT_0003a090), iVar3 != 0)) {
    bVar1 = false;
  }
  if ((*(int *)((int)DAT_0003a088 + *piVar2) == 4) && (iVar3 = FUN_0003a51e(0x40), iVar3 != 0)) {
    bVar1 = false;
  }
  if (!bVar1) {
    (*DAT_0003a0a0)(0xfffffff7);
    *(undefined4 *)(*piVar2 + (int)DAT_0003a088) = 0;
  }
  return bVar1;
}



undefined4 FUN_0003a0a4(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_0003a180;
  iVar2 = *DAT_0003a180;
  if (*(int *)(iVar2 + DAT_0003a178) == 1) {
    (*DAT_0003a184)(*(undefined4 *)(iVar2 + DAT_0003a17c),DAT_0003a17a + iVar2);
    *param_1 = *param_1 + 1;
    FUN_0003a5bc();
    iVar2 = (*DAT_0003a188)(*(undefined4 *)(*piVar1 + (int)DAT_0003a17c),0);
    if (iVar2 != 0) {
      return 1;
    }
    FUN_0003a5bc();
    *param_1 = *param_1 + 1;
    *(undefined4 *)(*piVar1 + (int)DAT_0003a178) = 2;
  }
  if (*(int *)((int)DAT_0003a178 + *piVar1) == 2) {
    iVar2 = (int)DAT_0003a17c;
    iVar2 = (*DAT_0003a18c)(*(undefined4 *)(*piVar1 + iVar2 + 4),
                            *(undefined4 *)(*piVar1 + iVar2 + 8),
                            *(undefined4 *)(*piVar1 + iVar2 + 0xc),*(undefined4 *)(*piVar1 + iVar2))
    ;
    if (iVar2 != 0) {
      return 1;
    }
    FUN_0003a5bc();
    iVar2 = (int)DAT_0003a178;
    *param_1 = *param_1 + 1;
    *(undefined4 *)(*piVar1 + iVar2) = 3;
  }
  if ((*(int *)((int)DAT_0003a178 + *piVar1) == 3) &&
     (iVar2 = FUN_0003a51e((int)DAT_0003a17e), iVar2 != 0)) {
    *(undefined4 *)(*piVar1 + (int)DAT_0003a178) = 4;
  }
  if (*(int *)((int)DAT_0003a178 + *piVar1) == 4) {
    iVar2 = (*DAT_0003a188)(*(undefined4 *)(*piVar1 + DAT_0003a17a + -0x10),
                            *(undefined4 *)(*piVar1 + (int)DAT_0003a17a));
    if (iVar2 != 0) {
      return 1;
    }
    *param_1 = *param_1 + 1;
    *(undefined4 *)(*piVar1 + (int)DAT_0003a266) = 5;
  }
  if ((*(int *)((int)DAT_0003a266 + *piVar1) == 5) && (iVar2 = FUN_0003a51e(0x40), iVar2 == 1)) {
    *(undefined4 *)(*piVar1 + (int)DAT_0003a266) = 0;
  }
  return *(undefined4 *)((int)DAT_0003a266 + *piVar1);
}



int FUN_0003a1c8(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int local_30;
  int iStack44;
  undefined auStack40 [4];
  undefined auStack36 [16];
  
  piVar2 = DAT_0003a270;
  pcVar1 = DAT_0003a26c;
  if (*(int *)((int)DAT_0003a268 + *DAT_0003a270) == 1) {
    iVar3 = (*DAT_0003a26c)(&local_30,&iStack44,auStack40);
    if (iVar3 != 0) {
      iVar3 = (int)DAT_0003a268;
      *(undefined4 *)(*piVar2 + iVar3) = 0;
      **(undefined4 **)(*piVar2 + iVar3 + 8) = 0xffffffff;
      return -0xb;
    }
    *param_1 = *param_1 + 1;
    iVar3 = (int)*(short *)(*piVar2 + (int)DAT_0003a26a);
    if (((iVar3 == 0) || (iVar3 == 1)) || ((local_30 <= iVar3 && (iVar3 < local_30 + iStack44)))) {
      *(undefined4 *)(*piVar2 + (int)DAT_0003a268) = 3;
    }
    else {
      iVar3 = (*DAT_0003a274)(0x17,(int)*(short *)(*piVar2 + (int)DAT_0003a26a));
      if (iVar3 != 0) {
        iVar3 = (int)DAT_0003a268;
        *(undefined4 *)(*piVar2 + iVar3) = 0;
        **(undefined4 **)(*piVar2 + iVar3 + 8) = 0xffffffff;
        return -0xb;
      }
      *param_1 = *param_1 + 1;
      *(undefined4 *)(*piVar2 + (int)DAT_0003a36e) = 2;
    }
  }
  if ((*(int *)((int)DAT_0003a36e + *piVar2) == 2) &&
     (iVar3 = FUN_0003a51e((int)DAT_0003a370), iVar3 != 0)) {
    iVar3 = (*pcVar1)(&local_30,&iStack44,auStack40);
    if ((iVar3 != 0) ||
       ((*(short *)(*DAT_0003a374 + (int)DAT_0003a372) < local_30 &&
        (local_30 + iStack44 <= (int)*(short *)((int)DAT_0003a372 + *DAT_0003a374))))) {
      iVar3 = (int)DAT_0003a36e;
      *(undefined4 *)(*piVar2 + iVar3) = 0;
      **(undefined4 **)(*piVar2 + iVar3 + 8) = 0xffffffff;
      return -0xb;
    }
    *(undefined4 *)(*piVar2 + (int)DAT_0003a36e) = 3;
  }
  if (*(int *)((int)DAT_0003a36e + *piVar2) == 3) {
    FUN_000395ea(auStack36);
    if (*DAT_0003a378 != 0) {
      return *DAT_0003a378;
    }
    iVar3 = (*DAT_0003a37c)((int)*(short *)(*piVar2 + DAT_0003a372 + 2),
                            (int)*(short *)(*piVar2 + (int)DAT_0003a372));
    if (iVar3 != 0) {
      return 1;
    }
    FUN_0003a5bc();
    iVar3 = (int)DAT_0003a36e;
    *param_1 = *param_1 + 1;
    *(undefined4 *)(*piVar2 + iVar3) = 4;
  }
  if ((*(int *)((int)DAT_0003a36e + *piVar2) == 4) &&
     (iVar3 = FUN_0003a51e((int)DAT_0003a370), iVar3 != 0)) {
    *(undefined4 *)(*piVar2 + (int)DAT_0003a36e) = 0;
    iVar3 = (*pcVar1)(&local_30,&iStack44,auStack40);
    if (iVar3 != 0) {
      iVar3 = (int)DAT_0003a36e;
      *(undefined4 *)(*piVar2 + iVar3) = 0;
      **(undefined4 **)(*piVar2 + iVar3 + 8) = 0xffffffff;
      return -0xb;
    }
    **(int **)(*piVar2 + (int)DAT_0003a47e) = iStack44;
  }
  return *(int *)((int)DAT_0003a480 + *piVar2);
}



undefined4 FUN_0003a3a0(int *param_1)

{
  short sVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  byte bVar6;
  int iVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  
  piVar3 = DAT_0003a48c;
  pcVar2 = DAT_0003a488;
  iVar8 = (int)DAT_0003a482;
  for (iVar9 = 0; iVar9 < *(int *)(*piVar3 + (int)DAT_0003a486); iVar9 = iVar9 + 1) {
    sVar1 = (short)iVar9;
    bVar6 = *(int *)(*piVar3 + (int)DAT_0003a484 + (int)(short)(sVar1 * 0xc) + 4) != -2;
    iVar4 = iVar8;
    if ((bool)bVar6) {
      iVar4 = *(int *)(*piVar3 + (int)DAT_0003a484 + (int)(short)(sVar1 * 0xc) + 4);
    }
    iVar5 = iVar8;
    if (*(int *)(*piVar3 + (int)DAT_0003a484 + (int)(short)(sVar1 * 0xc) + 8) != -2) {
      bVar6 = bVar6 | 2;
      iVar5 = *(int *)(*piVar3 + (int)DAT_0003a484 + (int)(short)(sVar1 * 0xc) + 8);
    }
    iVar4 = (*pcVar2)(*(undefined4 *)(*piVar3 + (int)DAT_0003a484 + (int)(short)(sVar1 * 0xc)),bVar6
                      ,iVar4,iVar5);
    if (iVar4 != 0) break;
    FUN_0003a5bc();
    *param_1 = *param_1 + 1;
  }
  if (iVar9 < *(int *)(*piVar3 + (int)DAT_0003a486)) {
    iVar8 = 0;
    for (; iVar9 < *(int *)(*piVar3 + (int)DAT_0003a5f0); iVar9 = iVar9 + 1) {
      iVar4 = (int)DAT_0003a5ee;
      iVar5 = (int)(short)((short)iVar8 * 0xc);
      iVar7 = (int)(short)((short)iVar9 * 0xc);
      *(undefined4 *)(*piVar3 + iVar4 + iVar5) = *(undefined4 *)(iVar7 + *piVar3 + iVar4);
      *(undefined4 *)(*piVar3 + iVar4 + iVar5 + 4) = *(undefined4 *)(*piVar3 + iVar4 + iVar7 + 4);
      *(undefined4 *)(iVar5 + *piVar3 + iVar4 + 8) = *(undefined4 *)(iVar7 + *piVar3 + iVar4 + 8);
      iVar8 = iVar8 + 1;
    }
    *(int *)(*piVar3 + (int)DAT_0003a5f0) = iVar8;
  }
  else {
    *(undefined4 *)(*piVar3 + (int)DAT_0003a486) = 0;
  }
  iVar8 = FUN_0003a51e(0x40);
  if ((iVar8 != 0) && (*(int *)(*piVar3 + (int)DAT_0003a5f0) == 0)) {
    *(undefined4 *)(*piVar3 + (int)DAT_0003a5f2) = 0;
  }
  return *(undefined4 *)((int)DAT_0003a5f0 + *piVar3);
}



undefined4 FUN_0003a51e(uint param_1)

{
  uint uVar1;
  
  uVar1 = (*DAT_0003a5f8)();
  if ((uVar1 & param_1) != 0) {
    return 1;
  }
  return 0;
}



void FUN_0003a544(void)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  
  piVar1 = DAT_0003a5fc;
  iVar3 = 0;
  do {
    *(undefined *)(iVar3 + *piVar1) = 0;
    puVar2 = (undefined *)(*piVar1 + 0x18 + iVar3);
    iVar3 = iVar3 + 1;
    *puVar2 = 0;
  } while (iVar3 < 0x17);
  *(undefined4 *)(*piVar1 + 0x30) = 0;
  *(undefined4 *)(*piVar1 + 0x34) = 0xffffffff;
  *(undefined4 *)(*piVar1 + 0x38) = 0xffffffff;
  *(undefined4 *)(*piVar1 + 0x3c) = 0;
  *(undefined4 *)(*piVar1 + 0x4c) = 0;
  *(undefined4 *)(*piVar1 + 0x50) = 0;
  *(undefined4 *)(*piVar1 + 0x54) = 0;
  *(undefined4 *)(*piVar1 + 0x58) = 0;
  iVar3 = (int)DAT_0003a5f4;
  *(undefined4 *)(*piVar1 + iVar3) = 0;
  *(undefined4 *)(*piVar1 + iVar3 + 8) = 0;
  *(undefined4 *)(*piVar1 + iVar3 + 0x24) = 0;
  *(undefined4 *)(*piVar1 + iVar3 + 0x34) = 0;
  *(undefined4 *)(*piVar1 + iVar3 + 0x44) = 0;
  *(undefined4 *)(*piVar1 + iVar3 + 0x5c) = 0;
  iVar3 = (int)DAT_0003a5f0;
  *(undefined4 *)(*piVar1 + iVar3) = 0;
  *(undefined4 *)(*piVar1 + iVar3 + 4) = 0;
  return;
}



int FUN_0003a5bc(void)

{
  char local_10 [16];
  
  (*DAT_0003a600)(local_10);
  *(char *)(*DAT_0003a5fc + 0x40) = local_10[0];
  return (int)local_10[0];
}



undefined4 FUN_0003a604(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_0003a6a4)();
  if (((int)DAT_0003a69c & uVar1) != 0) {
    return 1;
  }
  return 0;
}



void FUN_0003a620(void)

{
                    // WARNING: Could not recover jumptable at 0x0003a624. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0003a6a8)((int)DAT_0003a69e);
  return;
}



undefined4 FUN_0003aa8c(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (*DAT_0003ab98)();
  if ((uVar1 & 0x40) == 0) {
    return 0xffffffff;
  }
  uVar2 = (*DAT_0003ab8c)(0,param_1,param_2);
  return uVar2;
}



undefined4 FUN_0003af7a(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = DAT_0003afd4;
  iVar4 = 3;
  puVar2 = DAT_0003afd0;
  do {
    iVar1 = (int)DAT_0003afca;
    iVar4 = iVar4 + -1;
    *puVar2 = 0;
    puVar2[5] = 0;
    puVar2[10] = 0;
    puVar2[0x10] = 0;
    puVar2[0x16] = 0;
    puVar2 = (undefined4 *)((int)puVar2 + iVar1);
  } while (iVar4 != 0);
  iVar4 = 2;
  do {
    iVar4 = iVar4 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 4;
  } while (iVar4 != 0);
  return 0x58;
}



void FUN_0003afa6(int *param_1)

{
  if (*param_1 != 0) {
    (*DAT_0003afd8)(param_1[1],param_1[2],param_1[3] >> 2);
    *param_1 = 0;
  }
  return;
}



void FUN_0003afdc(int *param_1)

{
  if (*param_1 != 0) {
    (*(code *)param_1[1])(param_1[2],param_1[3],param_1[4]);
    *param_1 = 0;
  }
  if (param_1[5] != 0) {
    (*(code *)param_1[6])(param_1[7],param_1[8],param_1[9]);
    param_1[5] = 0;
  }
  return;
}



void FUN_0003b010(int param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    (**(code **)(param_1 + 0x2c))
              (*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
               *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    (**(code **)(param_1 + 0x44))
              (*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
               *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}



void FUN_0003b056(int param_1)

{
  if (*(int *)(param_1 + 0x58) != 0) {
    (**(code **)(param_1 + 0x5c))
              (*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
               *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),
               *(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),
               *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}



void FUN_0003b0a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_0003b110;
  iVar1 = DAT_0003b10c;
  iVar3 = 0;
  while( true ) {
    iVar2 = iVar3 * 0x80 + iVar4;
    FUN_0003afdc(iVar2);
    FUN_0003b010(iVar2);
    if (iVar3 == param_1 + -1) break;
    FUN_0003afa6(iVar3 * 0x10 + iVar1);
    iVar3 = iVar3 + 1;
  }
  iVar1 = (int)DAT_0003b108;
  iVar3 = 0;
  if (0 < param_1) {
    do {
      FUN_0003b056(iVar4);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + iVar1;
    } while (iVar3 < param_1);
  }
  return;
}



int FUN_0003b27e(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_0003b2f4;
  uVar1 = DAT_0003b1d8;
  if (param_1 == 1) {
    FUN_0003afdc(DAT_0003b2f4);
    FUN_0003b010(iVar4);
    iVar4 = FUN_0003b056(iVar4);
    return iVar4;
  }
  if (param_1 != 2) {
    if (param_1 != 3) {
      return param_1;
    }
    FUN_0003afdc(DAT_0003b2f4);
    FUN_0003b010(iVar4);
    uVar1 = DAT_0003b2f8;
    *DAT_0003b2fc = 1;
    uVar2 = DAT_0003b304;
    *DAT_0003b300 = uVar1;
    *DAT_0003b308 = uVar2;
    *DAT_0003b310 = (short)DAT_0003b30c;
    FUN_0003b056(iVar4);
    FUN_0003b056(DAT_0003b2e2 + iVar4);
    do {
    } while (*(int *)((uint)DAT_0003b2fc | DAT_0003b314) != 0);
    return 0;
  }
  FUN_0003afdc(DAT_0003b1d8);
  FUN_0003b010(uVar1);
  uVar3 = DAT_0003b204;
  *DAT_0003b1ec = 1;
  uVar2 = DAT_0003b1f0;
  *DAT_0003b1e8 = uVar3;
  *DAT_0003b1f4 = uVar2;
  *DAT_0003b1fc = (short)DAT_0003b1f8;
  FUN_0003b056(uVar1);
  do {
  } while (*(int *)((uint)DAT_0003b1ec | DAT_0003b1e4) != 0);
  return 0;
}



void FUN_0003b8ba(int param_1)

{
  *(undefined *)(param_1 + DAT_0003b8e0) =
       *(undefined *)(DAT_0003b8e8 + param_1 * 2 + *DAT_0003b8e4);
  return;
}



int FUN_0003b9e6(int *param_1,uint *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  iVar3 = iVar2 + 0x38;
  if (*(int *)(iVar3 + DAT_0003ba2a) == 0) {
    iVar1 = (int)DAT_0003ba2c;
    *param_2 = *(uint *)(iVar3 + iVar1);
  }
  else {
    iVar1 = (int)DAT_0003ba2e;
    *param_2 = (uint)(*(int *)(iVar3 + DAT_0003ba2c) * *(int *)(iVar3 + DAT_0003ba2a)) >> 10;
    iVar1 = *(int *)(iVar3 + iVar1);
    if (iVar1 != 1) {
      *param_3 = 0;
      return iVar1;
    }
  }
  *param_3 = *(undefined4 *)(iVar2 + 0x30);
  return iVar1;
}



void FUN_0003bfa2(undefined *param_1,undefined *param_2,int param_3)

{
  undefined uVar1;
  int *piVar2;
  char *pcVar3;
  
  if (0 < param_3) {
    if (param_1 < param_2) {
      do {
        param_3 = param_3 + -1;
        uVar1 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar1;
        param_1 = param_1 + 1;
      } while (param_3 != 0);
    }
    else if (param_2 < param_1) {
      piVar2 = (int *)(param_1 + param_3);
      pcVar3 = param_2 + param_3;
      do {
        pcVar3 = pcVar3 + -1;
        param_3 = param_3 + -1;
        piVar2 = (int *)((int)piVar2 + -1);
        *piVar2 = (int)*pcVar3;
      } while (param_3 != 0);
    }
  }
  return;
}



void FUN_0003bfce(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (0 < param_3) {
    if (param_1 < param_2) {
      do {
        param_3 = param_3 + -1;
        uVar1 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar1;
        param_1 = param_1 + 1;
      } while (param_3 != 0);
    }
    else if (param_2 < param_1) {
      param_1 = param_1 + param_3;
      param_2 = param_2 + param_3;
      do {
        param_2 = param_2 + -1;
        param_3 = param_3 + -1;
        param_1 = param_1 + -1;
        *param_1 = *param_2;
      } while (param_3 != 0);
    }
  }
  return;
}



int FUN_0003c0e4(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  iVar1 = DAT_0003c134;
  iVar3 = *(int *)(DAT_0003c134 + 0x10);
  if (iVar3 == 0) {
    return 0;
  }
  **(undefined4 **)(DAT_0003c134 + 0x14) = *(undefined4 *)(DAT_0003c134 + 0x1c);
  pcVar6 = *(char **)(iVar1 + 0x1c);
  for (; *param_1 != '\0'; param_1 = param_1 + 1) {
    *pcVar6 = *param_1;
    pcVar6 = pcVar6 + 1;
  }
  *(uint *)(iVar1 + 0x1c) = (uint)(pcVar6 + 3) & 0xfffffffc;
  while( true ) {
    uVar5 = DAT_0003c148;
    iVar1 = DAT_0003c134;
    if (*(uint *)(DAT_0003c134 + 0x1c) < *(uint *)(DAT_0003c134 + 0x18)) {
      return iVar3;
    }
    *(int *)(DAT_0003c134 + 0x1c) = *(int *)(DAT_0003c134 + 0x14) + 0x10;
    *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
    FUN_0003c0e4(uVar5);
    iVar2 = DAT_0003c134;
    uVar5 = *(undefined4 *)(iVar1 + 0x20);
    iVar3 = *(int *)(DAT_0003c134 + 0x10);
    if (iVar3 == 0) break;
    **(undefined4 **)(DAT_0003c134 + 0x14) = *(undefined4 *)(DAT_0003c134 + 0x1c);
    puVar4 = *(undefined4 **)(iVar2 + 0x1c);
    *(undefined4 **)(iVar2 + 0x1c) = puVar4 + 1;
    *puVar4 = uVar5;
  }
  return 0;
}



void FUN_0003c94a(uint *param_1,int param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint in_r2;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *unaff_r11;
  uint *unaff_r12;
  uint *unaff_r13;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  
  param_2 = param_2 - param_3;
  param_4 = param_4 >> 2;
  param_3 = param_3 >> 1;
  if ((param_4 != 0) && (param_3 != 0)) {
    iVar4 = 1;
    uVar5 = param_3;
    do {
      do {
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) {
          cVar1 = *in_stack_0000001c;
          pcVar7 = in_stack_0000001c + 1;
          pcVar8 = in_stack_0000001c + 2;
          pcVar9 = in_stack_0000001c + 3;
          in_stack_0000001c = in_stack_0000001c + 4;
          in_r2 = ((int)*pcVar7 & 0xffU | (int)cVar1 << 8) << 0x10 |
                  (int)*pcVar9 & 0xffU | ((int)*pcVar8 & 0xffU) << 8;
          iVar4 = 0x20;
        }
        uVar2 = in_r2 & 0x80000000;
        in_r2 = in_r2 << 1;
        if (uVar2 != 0) {
          iVar4 = iVar4 + -1;
          pcVar7 = in_stack_0000001c;
          if (iVar4 == 0) {
            pcVar7 = in_stack_0000001c + 4;
            in_r2 = ((int)in_stack_0000001c[1] & 0xffU | (int)*in_stack_0000001c << 8) << 0x10 |
                    (int)in_stack_0000001c[3] & 0xffU | ((int)in_stack_0000001c[2] & 0xffU) << 8;
            iVar4 = 0x20;
          }
          uVar2 = in_r2 & 0x80000000;
          in_r2 = in_r2 << 1;
          in_stack_0000001c = pcVar7 + 1;
          if (uVar2 == 0) {
            puVar6 = (uint *)(((int)*pcVar7 & 0xffU) * 8 + in_stack_00000024);
            uVar2 = *puVar6;
            uVar3 = uVar2 & 0xffff0000 | uVar2 >> 0x10;
            *param_1 = uVar3;
            *unaff_r12 = uVar3;
            uVar2 = uVar2 << 0x10 | uVar2 & 0xffff;
            param_1[1] = uVar2;
            unaff_r12[1] = uVar2;
            uVar2 = puVar6[1];
            uVar3 = uVar2 & 0xffff0000 | uVar2 >> 0x10;
            *unaff_r13 = uVar3;
            *unaff_r11 = uVar3;
            uVar2 = uVar2 << 0x10 | uVar2 & 0xffff;
            unaff_r13[1] = uVar2;
            unaff_r11[1] = uVar2;
          }
          else {
            puVar6 = (uint *)(((int)*pcVar7 & 0xffU) * 8 + in_stack_00000020);
            uVar2 = puVar6[1];
            *param_1 = *puVar6;
            *unaff_r12 = uVar2;
            puVar6 = (uint *)(((int)*in_stack_0000001c & 0xffU) * 8 + in_stack_00000020);
            uVar2 = puVar6[1];
            param_1[1] = *puVar6;
            unaff_r12[1] = uVar2;
            puVar6 = (uint *)(((int)pcVar7[2] & 0xffU) * 8 + in_stack_00000020);
            uVar2 = puVar6[1];
            *unaff_r13 = *puVar6;
            *unaff_r11 = uVar2;
            in_stack_0000001c = pcVar7 + 4;
            puVar6 = (uint *)(((int)pcVar7[3] & 0xffU) * 8 + in_stack_00000020);
            uVar2 = puVar6[1];
            unaff_r13[1] = *puVar6;
            unaff_r11[1] = uVar2;
          }
        }
        param_1 = param_1 + 2;
        unaff_r12 = unaff_r12 + 2;
        unaff_r13 = unaff_r13 + 2;
        uVar5 = uVar5 - 1;
        unaff_r11 = unaff_r11 + 2;
      } while (uVar5 != 0);
      param_1 = param_1 + param_2;
      unaff_r12 = unaff_r12 + param_2;
      unaff_r13 = unaff_r13 + param_2;
      param_4 = param_4 - 1;
      unaff_r11 = unaff_r11 + param_2;
      uVar5 = param_3;
    } while (param_4 != 0);
  }
  return;
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_0003cedf(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Type propagation algorithm not settling

void FUN_0003db1b(void)

{
  undefined4 in_r0;
  int unaff_r12;
  
  *(undefined4 *)(unaff_r12 + -4) = in_r0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


