# Disc One

Many releases of Panzer Dragoon Saga have come to light over the years. One demo, four Prototypes, and three Golden releases. By 'prototype' I do not mean the spoiler [プロトタイプ・ドラゴン](https://panzerdragoon.fandom.com/wiki/Prototype_Dragon) 🤭

Demo:
- Panzer Dragoon Saga (Aug 26, 1997 demo)

Prototype:
- Panzer Dragoon Saga (Sep 16, 1997 prototype)
- Panzer Dragoon Saga (Nov 30, 1997 prototype)
- Panzer Dragoon Saga (Dec 22, 1997 prototype)
- Panzer Dragoon Saga (Dec 30, 1997 prototype)
    > Note: Discs 1&2 were missing in this fourth prototype, only Discs 3&4 were found.

Gold:
- Panzer Dragoon Saga (Jan 29, 1998 Japanese final release)
- Panzer Dragoon Saga (Apr 30, 1998 USA final release)
- Panzer Dragoon Saga (June 5, 1998 European final release)

So far, from our knowledge there has been 7 general revisions. Although there could be 8, we can only refer to essentially 7 versions of the conceptual starting disk. Disk 1 in all it's forms, excluding missing disks of December 30th.


## Disc Analysis


### CD Header Info

```
Hardware Identifier (@00H): SEGA SEGASATURN
Maker ID (@10H): SEGA ENTERPRISES
Product Number (@20H): MK-81307
Version (@2AH): V1.000
Release Date (@30H): 19980318
Device Information (@38H): CD-1/4
Compatible Area Symbol (@40H): U
Compatible Peripheral (@50H): JAEKF
Game Title (@60H): J:AZEL PANZER DRAGOON
IP SIZE (@E0H): 00002EE0
STACK-M (@E8H): 06006000
STACK-S (@ECH): 06003700
1st READ ADDRESS (@F0H): 06006000
1st READ SIZE (@F4H): 00000000
```
PRODUCED BY or UNDER LICENSE FROM.SEGA ENTERPRISES,LTD

> Additional info at "Disc Format Standards Specification Sheet".

---

## File-Format & Quantity

>Note: I should have confirmed which region this disk was, I can only confirm it was one of the english language (EU/US) disks.

Files found so far:
e.g. Type (File amount)
- BDB (4)
- BIN (89)
- CGB (370)
- CGZ (1)
- CPK (14)
- DAT (2)
- EPK (6)
- EXB (39)
- FNT (65)
- MCB (360)
- PCM (270)
- PNB (162)
- PRG (59)
- SCB (163)
- SEQ (86)
- SND (1)
- TSK (1)
- TXT (3)

---


## Disk Analysis (Checksum Diffs)

As a form of fingerprinting, checksum comparisons in eight-character truncated SHA256 format were conducted per file on multiple forms of the first disk (e.g. AZEL_1).

Fun fact: Multiple PNB files seem to have the same checksum/fingerprint i.e. `e0c09b63`

I wonder if they are the same actual file...

### Gold Releases

Checksum on the final releases in the three regional (JP/US/EU) Gold Releases.

Findings:
- 30 files were different with Varied changes between each region the game was released.
- 64 files were different only on Japan yet identically the same in both English (US/EU) regional releases.
- 8 files were absent on region or another, they are mostly minor files, more to do with copyright than game code.

Legend:
- File names appended with asterisks '*' have changes described
    - '*' Single asterisk appended means it was not an absent file in some region(s).
    - '**' or 'Jap!=Eng' indicates that exclusive changes for English regions (EU/US) were added. We can generally assume lingual changes in most (but not all) cases.
    - '***' or 'Varied' indicates that the file was iterated upon for each region.
- ✔️ Changes mean nothing to declare i.e. no changes were made to that file.


|   Filename    |  PDS(JP)  |  PDS(US)  |  PDS(EU) |  Changes   |
|---------------|-----------|-----------|----------|------------|
|Release Date   |29/Jan/1998|30/Apr/1998|5/Jun/1998|     ✔️      |
|B6BOSS.BDB     |b7322e4c   |b7322e4c   |b7322e4c  |     ✔️      |
|ENCAM.BDB      |b0192f0c   |b0192f0c   |b0192f0c  |     ✔️      |
|RAHAB.BDB      |a79d99d6   |a79d99d6   |a79d99d6  |     ✔️      |
|ZUSU.BDB       |c7f12acb   |c7f12acb   |c7f12acb  |     ✔️      |
|A3BGM.BIN      |cb5aa8bc   |cb5aa8bc   |cb5aa8bc  |     ✔️      |
|A3BGM2.BIN     |ec9f4b27   |ec9f4b27   |ec9f4b27  |     ✔️      |
|A3BOSS.BIN     |864f532d   |864f532d   |864f532d  |     ✔️      |
|A3SE.BIN       |6a48e06d   |6a48e06d   |6a48e06d  |     ✔️      |
|A3ZAKOSE.BIN   |11dbc556   |11dbc556   |11dbc556  |     ✔️      |
|A5BGM.BIN      |53b75d20   |53b75d20   |53b75d20  |     ✔️      |
|A5BOSBGM.BIN   |91d4f7a6   |91d4f7a6   |91d4f7a6  |     ✔️      |
|A5BOSS.BIN     |1ddb9804   |1ddb9804   |1ddb9804  |     ✔️      |
|A5SE.BIN       |1d7142de   |1d7142de   |1d7142de  |     ✔️      |
|A5ZAKO.BIN     |2c75ad6c   |2c75ad6c   |2c75ad6c  |     ✔️      |
|A7BGM.BIN      |1bb6ae75   |1bb6ae75   |1bb6ae75  |     ✔️      |
|A7MB.BIN       |b1b61b74   |b1b61b74   |b1b61b74  |     ✔️      |
|A7SE.BIN       |0602a34b   |0602a34b   |0602a34b  |     ✔️      |
|A7ZAKO.BIN     |52c2ba87   |52c2ba87   |52c2ba87  |     ✔️      |
|AD_SE.BIN      |d16ac640   |d16ac640   |d16ac640  |     ✔️      |
|ANTIBGM.BIN    |433475b2   |433475b2   |433475b2  |     ✔️      |
|ANTI_SE.BIN    |cae2c62c   |cae2c62c   |cae2c62c  |     ✔️      |
|B2BGM1.BIN     |8c10db91   |8c10db91   |8c10db91  |     ✔️      |
|B2BGM2.BIN     |b1840cdf   |b1840cdf   |b1840cdf  |     ✔️      |
|B2BOS_SE.BIN   |c710841f   |c710841f   |c710841f  |     ✔️      |
|B2SE.BIN       |c046e48f   |c046e48f   |c046e48f  |     ✔️      |
|B5BGM.BIN      |a81c10bd   |a81c10bd   |a81c10bd  |     ✔️      |
|B5MB.BIN       |3a867001   |3a867001   |3a867001  |     ✔️      |
|B5SE.BIN       |96cf563c   |96cf563c   |96cf563c  |     ✔️      |
|B6BGM.BIN      |47ac992d   |47ac992d   |47ac992d  |     ✔️      |
|B6BOSSE.BIN    |4f78b553   |4f78b553   |4f78b553  |     ✔️      |
|B6SE.BIN       |351d2a36   |351d2a36   |351d2a36  |     ✔️      |
|B6ZAKOSE.BIN   |dcfaa086   |dcfaa086   |dcfaa086  |     ✔️      |
|BOS2BGM.BIN    |ad8b95df   |ad8b95df   |ad8b95df  |     ✔️      |
|BOS3BGM.BIN    |30132a37   |30132a37   |30132a37  |     ✔️      |
|BOS4BGM.BIN    |1b12ef62   |1b12ef62   |1b12ef62  |     ✔️      |
|BOS5BGM.BIN    |d504aae2   |d504aae2   |d504aae2  |     ✔️      |
|BTL1BGM.BIN    |30ec3509   |30ec3509   |30ec3509  |     ✔️      |
|BTL2BGM.BIN    |dae4bf71   |dae4bf71   |dae4bf71  |     ✔️      |
|C2BGM.BIN      |62748959   |62748959   |62748959  |     ✔️      |
|C2BOS_SE.BIN   |c5542069   |c5542069   |c5542069  |     ✔️      |
|C2MBSE.BIN     |1ee7ddb1   |1ee7ddb1   |1ee7ddb1  |     ✔️      |
|C2SE.BIN       |e7311796   |e7311796   |e7311796  |     ✔️      |
|C2ZAKOSE.BIN   |cae98fd6   |cae98fd6   |cae98fd6  |     ✔️      |
|C4BGM.BIN      |9235b549   |9235b549   |9235b549  |     ✔️      |
|C4MB_SE.BIN    |f06e9641   |f06e9641   |f06e9641  |     ✔️      |
|C4SE.BIN       |b759c78a   |b759c78a   |b759c78a  |     ✔️      |
|C7SE.BIN       |113d699a   |113d699a   |113d699a  |     ✔️      |
|C8BGM.BIN      |c911d2d9   |c911d2d9   |c911d2d9  |     ✔️      |
|C8BOS_SE.BIN   |97c17e61   |97c17e61   |97c17e61  |     ✔️      |
|CAMPBGM.BIN    |3d93bc5a   |3d93bc5a   |3d93bc5a  |     ✔️      |
|CAMP_SE.BIN    |2b88c262   |2b88c262   |2b88c262  |     ✔️      |
|CARABGM.BIN    |2d8b0161   |2d8b0161   |2d8b0161  |     ✔️      |
|CARA_SE.BIN    |462e3d9e   |462e3d9e   |462e3d9e  |     ✔️      |
|COPY1BGM.BIN   |24ebd747   |24ebd747   |24ebd747  |     ✔️      |
|COPY2BGM.BIN   |eea4c5d7   |eea4c5d7   |eea4c5d7  |     ✔️      |
|D2BGM.BIN      |f3c7b709   |f3c7b709   |f3c7b709  |     ✔️      |
|D2BOS_SE.BIN   |49b541ba   |49b541ba   |49b541ba  |     ✔️      |
|D2MBSE.BIN     |3791b4df   |3791b4df   |3791b4df  |     ✔️      |
|D2SE.BIN       |0ea3139e   |0ea3139e   |0ea3139e  |     ✔️      |
|D3BGM.BIN      |9e0644b5   |9e0644b5   |9e0644b5  |     ✔️      |
|D4BGM.BIN      |7424fa45   |7424fa45   |7424fa45  |     ✔️      |
|D4MB_SE.BIN    |8475e0dd   |8475e0dd   |8475e0dd  |     ✔️      |
|D5BGM.BIN      |cc8c6930   |cc8c6930   |cc8c6930  |     ✔️      |
|D5COEF.BIN     |6d948c61   |6d948c61   |6d948c61  |     ✔️      |
|DRG1SE.BIN     |dbada0a9   |dbada0a9   |dbada0a9  |     ✔️      |
|E128SE.BIN     |42b56fb8   |42b56fb8   |42b56fb8  |     ✔️      |
|E14SE.BIN      |2b8ea2aa   |2b8ea2aa   |2b8ea2aa  |     ✔️      |
|E22SE.BIN      |e0109e58   |e0109e58   |e0109e58  |     ✔️      |
|E74SE.BIN      |4c74d731   |4c74d731   |4c74d731  |     ✔️      |
|E78BGM.BIN     |25c763d0   |25c763d0   |25c763d0  |     ✔️      |
|E78SE.BIN      |cff8cf2e   |cff8cf2e   |cff8cf2e  |     ✔️      |
|EDGE_SE.BIN    |e7c0bd40   |e7c0bd40   |e7c0bd40  |     ✔️      |
|EDGE_SE2.BIN   |31606d2a   |31606d2a   |31606d2a  |     ✔️      |
|EXCA_SE.BIN    |ec0b05f0   |ec0b05f0   |ec0b05f0  |     ✔️      |
|HANU_SE.BIN    |07220e3c   |07220e3c   |07220e3c  |     ✔️      |
|KOGATA.BIN     |dd07e28d   |dd07e28d   |dd07e28d  |     ✔️      |
|MB01.BIN       |f492749d   |f492749d   |f492749d  |     ✔️      |
|MB04BGM.BIN    |9c069fa1   |9c069fa1   |9c069fa1  |     ✔️      |
|MB2BGM.BIN     |102d445e   |102d445e   |102d445e  |     ✔️      |
|MB3BGM.BIN     |00baca90   |00baca90   |00baca90  |     ✔️      |
|MENUBK.BIN***  |80971be7   |9707bc63   |70a36e39  |   Varied   |
|MENUBK2.BIN    |5512cdc3   |5512cdc3   |5512cdc3  |     ✔️      |
|MENUEN.BIN     |fc6fe34b   |fc6fe34b   |fc6fe34b  |     ✔️      |
|PAETBGM.BIN    |0481b88c   |0481b88c   |0481b88c  |     ✔️      |
|PAET_SE.BIN    |53935411   |53935411   |53935411  |     ✔️      |
|RUINSE.BIN     |55d7e519   |55d7e519   |55d7e519  |     ✔️      |
|SEEBGM.BIN     |8dc75148   |8dc75148   |8dc75148  |     ✔️      |
|SEESE.BIN      |1bd62042   |1bd62042   |1bd62042  |     ✔️      |
|SYS_SE.BIN     |c3474472   |c3474472   |c3474472  |     ✔️      |
|TITLEBGM.BIN   |cb5aa8bc   |cb5aa8bc   |cb5aa8bc  |     ✔️      |
|TOSE.BIN       |15a66ae8   |15a66ae8   |15a66ae8  |     ✔️      |
|TOWNBGM.BIN    |9ffcc190   |9ffcc190   |9ffcc190  |     ✔️      |
|TOWNSE.BIN     |3891a0e8   |3891a0e8   |3891a0e8  |     ✔️      |
|A3CMN.CGB      |e9886261   |e9886261   |e9886261  |     ✔️      |
|A5CMN.CGB      |9b84643a   |9b84643a   |9b84643a  |     ✔️      |
|A7CMN.CGB      |da381ae8   |da381ae8   |da381ae8  |     ✔️      |
|ABOMB2.CGB     |9ae37791   |9ae37791   |9ae37791  |     ✔️      |
|AD.CGB         |c4b99001   |c4b99001   |c4b99001  |     ✔️      |
|AD3.CGB        |83eb035a   |83eb035a   |83eb035a  |     ✔️      |
|AD_EFF.CGB     |948dbfb1   |948dbfb1   |948dbfb1  |     ✔️      |
|AIRBOMB.CGB    |f65237dc   |f65237dc   |f65237dc  |     ✔️      |
|AJITOBJ.CGB    |214d2731   |214d2731   |214d2731  |     ✔️      |
|AJITOMP0.CGB   |6484efa6   |6484efa6   |6484efa6  |     ✔️      |
|AJITOMP1.CGB   |62a6f217   |62a6f217   |62a6f217  |     ✔️      |
|ANAKAZU.CGB    |a23e6ba5   |a23e6ba5   |a23e6ba5  |     ✔️      |
|ANTIDRA.CGB    |84612ade   |84612ade   |84612ade  |     ✔️      |
|ANTIDRAG.CGB   |bb4f59f1   |bb4f59f1   |bb4f59f1  |     ✔️      |
|ARSRO.CGB      |ad8c3a5a   |ad8c3a5a   |ad8c3a5a  |     ✔️      |
|ASLTHANU.CGB   |5f23fd20   |5f23fd20   |5f23fd20  |     ✔️      |
|AWEN.CGB       |47e37b7a   |47e37b7a   |47e37b7a  |     ✔️      |
|AZCT.CGB       |b599afc5   |b599afc5   |b599afc5  |     ✔️      |
|AZEL.CGB       |7d4e3fcb   |7d4e3fcb   |7d4e3fcb  |     ✔️      |
|AZELMP.CGB     |019bcbd2   |019bcbd2   |019bcbd2  |     ✔️      |
|B2CMN.CGB      |ed75d480   |ed75d480   |ed75d480  |     ✔️      |
|B5CMN.CGB      |2c9adee8   |2c9adee8   |2c9adee8  |     ✔️      |
|B6BOSS.CGB     |6ad03273   |6ad03273   |6ad03273  |     ✔️      |
|B6CMN.CGB      |44a26bf0   |44a26bf0   |44a26bf0  |     ✔️      |
|B6EGG.CGB      |116709ee   |116709ee   |116709ee  |     ✔️      |
|B6LARVA.CGB    |a3c9ec5f   |a3c9ec5f   |a3c9ec5f  |     ✔️      |
|B6MERN.CGB     |d5de2f33   |d5de2f33   |d5de2f33  |     ✔️      |
|B6MID.CGB      |e702d3a8   |e702d3a8   |e702d3a8  |     ✔️      |
|B6RIO.CGB      |fdcbfa9f   |fdcbfa9f   |fdcbfa9f  |     ✔️      |
|BARIOH.CGB     |c92d3522   |c92d3522   |c92d3522  |     ✔️      |
|BARISTA.CGB    |9334cf42   |9334cf42   |9334cf42  |     ✔️      |
|BARMP.CGB      |6adfa67b   |6adfa67b   |6adfa67b  |     ✔️      |
|BATTLE.CGB     |6a70b348   |6a70b348   |6a70b348  |     ✔️      |
|BEMOS.CGB      |b5be0dc3   |b5be0dc3   |b5be0dc3  |     ✔️      |
|BENITATE.CGB   |22387e87   |22387e87   |22387e87  |     ✔️      |
|BLDAMP.CGB     |3c8ac3e7   |3c8ac3e7   |3c8ac3e7  |     ✔️      |
|BM.CGB         |8ca31f40   |8ca31f40   |8ca31f40  |     ✔️      |
|BMP_A7_0.CGB   |655ccac7   |655ccac7   |655ccac7  |     ✔️      |
|BMP_B5_0.CGB   |98f73bf0   |98f73bf0   |98f73bf0  |     ✔️      |
|BMP_B5_1.CGB   |98f73bf0   |98f73bf0   |98f73bf0  |     ✔️      |
|BMP_C8_B.CGB   |c33a8087   |c33a8087   |c33a8087  |     ✔️      |
|BOMBLV3.CGB    |ec5129a9   |ec5129a9   |ec5129a9  |     ✔️      |
|BTFALLA3.CGB   |51bbfcbd   |51bbfcbd   |51bbfcbd  |     ✔️      |
|BUM.CGB        |9c80d62b   |9c80d62b   |9c80d62b  |     ✔️      |
|C22CMN.CGB     |ff0c805b   |ff0c805b   |ff0c805b  |     ✔️      |
|C2CMN.CGB      |da20d538   |da20d538   |da20d538  |     ✔️      |
|C4CMN.CGB      |3caf7d8d   |3caf7d8d   |3caf7d8d  |     ✔️      |
|C4PASS.CGB     |f19d8f0d   |f19d8f0d   |f19d8f0d  |     ✔️      |
|C5CMN.CGB      |0ff771f5   |0ff771f5   |0ff771f5  |     ✔️      |
|C8CMN.CGB      |475fd9fd   |475fd9fd   |475fd9fd  |     ✔️      |
|CADRO.CGB      |cc22d338   |cc22d338   |cc22d338  |     ✔️      |
|CAMPMP1.CGB    |44b10d73   |44b10d73   |44b10d73  |     ✔️      |
|CAMPMP2.CGB    |ce22c060   |ce22c060   |ce22c060  |     ✔️      |
|CAMPMP3.CGB    |6149655    |6149655    |6149655   |     ✔️      |
|CAMPMP4.CGB    |31b7c261   |31b7c261   |31b7c261  |     ✔️      |
|CAMPMP5.CGB    |824328cd   |824328cd   |824328cd  |     ✔️      |
|CAMPMP6.CGB    |6e482d97   |6e482d97   |6e482d97  |     ✔️      |
|CAMPMP7.CGB    |7f4cdb7a   |7f4cdb7a   |7f4cdb7a  |     ✔️      |
|CAMPMP8.CGB    |748dec9f   |748dec9f   |748dec9f  |     ✔️      |
|CAMPOBJ.CGB    |f7e9e54e   |f7e9e54e   |f7e9e54e  |     ✔️      |
|CARAVMP.CGB    |5ced767c   |5ced767c   |5ced767c  |     ✔️      |
|CHARCMP0.CGB   |c664cafc   |c664cafc   |c664cafc  |     ✔️      |
|CHARCMP1.CGB   |c664cafc   |c664cafc   |c664cafc  |     ✔️      |
|CHILDMP.CGB    |a6f919c7   |a6f919c7   |a6f919c7  |     ✔️      |
|COMMON3.CGB    |189b0d23   |189b0d23   |189b0d23  |     ✔️      |
|CORE.CGB       |20aa4f56   |20aa4f56   |20aa4f56  |     ✔️      |
|CYCLONE.CGB    |f39c5182   |f39c5182   |f39c5182  |     ✔️      |
|C_DRA0.CGB     |7305990a   |7305990a   |7305990a  |     ✔️      |
|D2CMN.CGB      |3a1a356d   |3a1a356d   |3a1a356d  |     ✔️      |
|D4CMN.CGB      |d8510f2d   |d8510f2d   |d8510f2d  |     ✔️      |
|D5HANU.CGB     |d7ed4006   |d7ed4006   |d7ed4006  |     ✔️      |
|D5LAND.CGB     |bf1813fb   |bf1813fb   |bf1813fb  |     ✔️      |
|D5LDRA.CGB     |2afff031   |2afff031   |2afff031  |     ✔️      |
|D5MERU.CGB     |295d4e82   |295d4e82   |295d4e82  |     ✔️      |
|D5NOOS.CGB     |7c034a90   |7c034a90   |7c034a90  |     ✔️      |
|D5NURU.CGB     |aaa50b73   |aaa50b73   |aaa50b73  |     ✔️      |
|D5SHELL.CGB    |20fa9d97   |20fa9d97   |20fa9d97  |     ✔️      |
|D5TGD.CGB      |ab289493   |ab289493   |ab289493  |     ✔️      |
|DRAGON0.CGB    |5029651    |5029651    |5029651   |     ✔️      |
|DRAGON1.CGB    |a53a13c7   |a53a13c7   |a53a13c7  |     ✔️      |
|DRAGON2.CGB    |6ca6dcef   |6ca6dcef   |6ca6dcef  |     ✔️      |
|DRAGON3.CGB    |f1aa4d61   |f1aa4d61   |f1aa4d61  |     ✔️      |
|DRAGON4.CGB    |78c31e94   |78c31e94   |78c31e94  |     ✔️      |
|DRAGON5.CGB    |d3ca73fb   |d3ca73fb   |d3ca73fb  |     ✔️      |
|DRAGON6.CGB    |2258702d   |2258702d   |2258702d  |     ✔️      |
|DRAGON7.CGB    |8221ce59   |8221ce59   |8221ce59  |     ✔️      |
|DRAGONC0.CGB   |feaa228c   |feaa228c   |feaa228c  |     ✔️      |
|DRAGONC1.CGB   |a53a13c7   |a53a13c7   |a53a13c7  |     ✔️      |
|DRAGONC2.CGB   |6ca6dcef   |6ca6dcef   |6ca6dcef  |     ✔️      |
|DRAGONC3.CGB   |f1aa4d61   |f1aa4d61   |f1aa4d61  |     ✔️      |
|DRAGONC4.CGB   |78c31e94   |78c31e94   |78c31e94  |     ✔️      |
|DRAGONM1.CGB   |9ad0cf29   |9ad0cf29   |9ad0cf29  |     ✔️      |
|DRAGONM2.CGB   |3e6f202f   |3e6f202f   |3e6f202f  |     ✔️      |
|DRAGONM3.CGB   |fa2f5320   |fa2f5320   |fa2f5320  |     ✔️      |
|DRAGONM4.CGB   |e4b8b49a   |e4b8b49a   |e4b8b49a  |     ✔️      |
|DRAGONM5.CGB   |85cf6a3e   |85cf6a3e   |85cf6a3e  |     ✔️      |
|DRAGONM7.CGB   |fa38fa67   |fa38fa67   |fa38fa67  |     ✔️      |
|DRVA.CGB       |e77deab3   |e77deab3   |e77deab3  |     ✔️      |
|DYURA00.CGB    |74016eb8   |74016eb8   |74016eb8  |     ✔️      |
|DYURA01.CGB    |e8160c29   |e8160c29   |e8160c29  |     ✔️      |
|DYURA02.CGB    |7cb88229   |7cb88229   |7cb88229  |     ✔️      |
|DYURA03.CGB    |6d8386e5   |6d8386e5   |6d8386e5  |     ✔️      |
|DYURA04.CGB    |ae3cf684   |ae3cf684   |ae3cf684  |     ✔️      |
|EDGE.CGB       |f7ee1920   |f7ee1920   |f7ee1920  |     ✔️      |
|EVT011MP.CGB   |eefa7a45   |eefa7a45   |eefa7a45  |     ✔️      |
|EVT014MP.CGB   |1b12895b   |1b12895b   |1b12895b  |     ✔️      |
|EVT021MP.CGB   |3af7112f   |3af7112f   |3af7112f  |     ✔️      |
|EXCAVAMP.CGB   |c669402e   |c669402e   |c669402e  |     ✔️      |
|FINAL.CGB      |29249e40   |29249e40   |29249e40  |     ✔️      |
|FIRE.CGB       |bab3dd78   |bab3dd78   |bab3dd78  |     ✔️      |
|FLDCMN.CGB     |d73f1a99   |d73f1a99   |d73f1a99  |     ✔️      |
|FLD_A3.CGB     |4052b568   |4052b568   |4052b568  |     ✔️      |
|FLD_A3_0.CGB   |50c821fd   |50c821fd   |50c821fd  |     ✔️      |
|FLD_A3_1.CGB   |0532f457   |0532f457   |0532f457  |     ✔️      |
|FLD_A3_2.CGB   |9c873414   |9c873414   |9c873414  |     ✔️      |
|FLD_A3_3.CGB   |28da960e   |28da960e   |28da960e  |     ✔️      |
|FLD_A5.CGB     |296ceca3   |296ceca3   |296ceca3  |     ✔️      |
|FLD_A5_0.CGB   |fec93fa9   |fec93fa9   |fec93fa9  |     ✔️      |
|FLD_A5_2.CGB   |4af96b2c   |4af96b2c   |4af96b2c  |     ✔️      |
|FLD_A5_4.CGB   |fc1459dc   |fc1459dc   |fc1459dc  |     ✔️      |
|FLD_A5_7.CGB   |0e016183   |0e016183   |0e016183  |     ✔️      |
|FLD_A5_8.CGB   |52468867   |52468867   |52468867  |     ✔️      |
|FLD_A5_9.CGB   |640d5ff0   |640d5ff0   |640d5ff0  |     ✔️      |
|FLD_A5_B.CGB   |36af8074   |36af8074   |36af8074  |     ✔️      |
|FLD_A7_0.CGB   |9adf48eb   |9adf48eb   |9adf48eb  |     ✔️      |
|FLD_A7_1.CGB   |d7fa79a0   |d7fa79a0   |d7fa79a0  |     ✔️      |
|FLD_A7_2.CGB   |0cca967d   |0cca967d   |0cca967d  |     ✔️      |
|FLD_B2.CGB     |7318c638   |7318c638   |7318c638  |     ✔️      |
|FLD_B2_1.CGB   |a43a1b2d   |a43a1b2d   |a43a1b2d  |     ✔️      |
|FLD_B2_3.CGB   |a994a4d6   |a994a4d6   |a994a4d6  |     ✔️      |
|FLD_B2_4.CGB   |60b1730d   |60b1730d   |60b1730d  |     ✔️      |
|FLD_B5_0.CGB   |050b140d   |050b140d   |050b140d  |     ✔️      |
|FLD_B5_1.CGB   |db452180   |db452180   |db452180  |     ✔️      |
|FLD_B5_2.CGB   |0f4f3bea   |0f4f3bea   |0f4f3bea  |     ✔️      |
|FLD_B5_3.CGB   |bc298347   |bc298347   |bc298347  |     ✔️      |
|FLD_B5_4.CGB   |358b709f   |358b709f   |358b709f  |     ✔️      |
|FLD_B6.CGB     |8361d45c   |8361d45c   |8361d45c  |     ✔️      |
|FLD_B6_0.CGB   |9990d31b   |9990d31b   |9990d31b  |     ✔️      |
|FLD_B6_1.CGB   |230ce932   |230ce932   |230ce932  |     ✔️      |
|FLD_B6_2.CGB   |bcc11888   |bcc11888   |bcc11888  |     ✔️      |
|FLD_B6_3.CGB   |ddd93406   |ddd93406   |ddd93406  |     ✔️      |
|FLD_B6_4.CGB   |195b5dda   |195b5dda   |195b5dda  |     ✔️      |
|FLD_B6_5.CGB   |0692f912   |0692f912   |0692f912  |     ✔️      |
|FLD_B6_6.CGB   |5c053584   |5c053584   |5c053584  |     ✔️      |
|FLD_B6_8.CGB   |53278eaa   |53278eaa   |53278eaa  |     ✔️      |
|FLD_B6_9.CGB   |a3228607   |a3228607   |a3228607  |     ✔️      |
|FLD_C2_0.CGB   |45daafec   |45daafec   |45daafec  |     ✔️      |
|FLD_C4.CGB     |ccd5213d   |ccd5213d   |ccd5213d  |     ✔️      |
|FLD_C4_0.CGB   |47ff7067   |47ff7067   |47ff7067  |     ✔️      |
|FLD_C4_1.CGB   |b3f24b18   |b3f24b18   |b3f24b18  |     ✔️      |
|FLD_C4_2.CGB   |e68b46d9   |e68b46d9   |e68b46d9  |     ✔️      |
|FLD_C4_3.CGB   |b2ab4053   |b2ab4053   |b2ab4053  |     ✔️      |
|FLD_C4_4.CGB   |aaf28fdd   |aaf28fdd   |aaf28fdd  |     ✔️      |
|FLD_C4_5.CGB   |e4149490   |e4149490   |e4149490  |     ✔️      |
|FLD_C4_6.CGB   |32f6fb53   |32f6fb53   |32f6fb53  |     ✔️      |
|FLD_D2_0.CGB   |a891fb03   |a891fb03   |a891fb03  |     ✔️      |
|FLD_D2_1.CGB   |4327f35d   |4327f35d   |4327f35d  |     ✔️      |
|FLD_D3_0.CGB   |4f5534d8   |4f5534d8   |4f5534d8  |     ✔️      |
|FLD_D5_0.CGB   |1586f82d   |1586f82d   |1586f82d  |     ✔️      |
|FLD_T0.CGB     |41bec2b9   |41bec2b9   |41bec2b9  |     ✔️      |
|FLD_T0_0.CGB   |f60cc1d7   |f60cc1d7   |f60cc1d7  |     ✔️      |
|FLD_T0_1.CGB   |dd49285e   |dd49285e   |dd49285e  |     ✔️      |
|FLD_T0_3.CGB   |7bb04d0d   |7bb04d0d   |7bb04d0d  |     ✔️      |
|FLD_T0_4.CGB   |26c70d19   |26c70d19   |26c70d19  |     ✔️      |
|FLD_T0_5.CGB   |75ee7df5   |75ee7df5   |75ee7df5  |     ✔️      |
|FLD_T1_0.CGB   |13c784ce   |13c784ce   |13c784ce  |     ✔️      |
|FLD_T1_1.CGB   |d5ec1a94   |d5ec1a94   |d5ec1a94  |     ✔️      |
|FLD_T2_0.CGB   |57ae9a7d   |57ae9a7d   |57ae9a7d  |     ✔️      |
|FLD_T2_1.CGB   |a98c8130   |a98c8130   |a98c8130  |     ✔️      |
|FLD_T2_4.CGB   |25c89958   |25c89958   |25c89958  |     ✔️      |
|FLD_T2_A.CGB   |80e57c3a   |80e57c3a   |80e57c3a  |     ✔️      |
|FLD_T2_D.CGB   |d1ad4e28   |d1ad4e28   |d1ad4e28  |     ✔️      |
|FLD_T3_0.CGB   |395a14e8   |395a14e8   |395a14e8  |     ✔️      |
|FLD_T3_1.CGB   |e392f790   |e392f790   |e392f790  |     ✔️      |
|FLD_T4_0.CGB   |12fa8918   |12fa8918   |12fa8918  |     ✔️      |
|FLD_T4_1.CGB   |78a1ea20   |78a1ea20   |78a1ea20  |     ✔️      |
|FLD_T4_2.CGB   |eed65ba7   |eed65ba7   |eed65ba7  |     ✔️      |
|GBOMB2.CGB     |646988c0   |646988c0   |646988c0  |     ✔️      |
|GERAKI.CGB     |027a358d   |027a358d   |027a358d  |     ✔️      |
|GRDBOMB.CGB    |0a691194   |0a691194   |0a691194  |     ✔️      |
|GRIGORIG.CGB   |a47a9553   |a47a9553   |a47a9553  |     ✔️      |
|GUSH.CGB       |3ea5511e   |3ea5511e   |3ea5511e  |     ✔️      |
|HANSA.CGB      |a959ee64   |a959ee64   |a959ee64  |     ✔️      |
|HEBIMUSI.CGB   |b58f7bc6   |b58f7bc6   |b58f7bc6  |     ✔️      |
|HEBISU.CGB     |b09b4d7d   |b09b4d7d   |b09b4d7d  |     ✔️      |
|HEBI_TUR.CGB   |1cd0fe5b   |1cd0fe5b   |1cd0fe5b  |     ✔️      |
|HIDINGMP.CGB   |8c75de31   |8c75de31   |8c75de31  |     ✔️      |
|HUNTAMP0.CGB   |8de06da9   |8de06da9   |8de06da9  |     ✔️      |
|HUNTAMP1.CGB   |8de06da9   |8de06da9   |8de06da9  |     ✔️      |
|HUNTDMP0.CGB   |ac73c7a5   |ac73c7a5   |ac73c7a5  |     ✔️      |
|HUNTDMP1.CGB   |ff57228e   |ff57228e   |ff57228e  |     ✔️      |
|IVASIVIA.CGB   |a7845d90   |a7845d90   |a7845d90  |     ✔️      |
|JINKOU.CGB     |8478236e   |8478236e   |8478236e  |     ✔️      |
|JINKOUB5.CGB   |eb02aef6   |eb02aef6   |eb02aef6  |     ✔️      |
|JIRO.CGB       |2f9486b8   |2f9486b8   |2f9486b8  |     ✔️      |
|JUNKMP.CGB     |4f566b7d   |4f566b7d   |4f566b7d  |     ✔️      |
|KARA.CGB       |c7c90a26   |c7c90a26   |c7c90a26  |     ✔️      |
|KARAA72.CGB    |dfee07ff   |dfee07ff   |dfee07ff  |     ✔️      |
|KARLA.CGB      |4f8cf3ed   |4f8cf3ed   |4f8cf3ed  |     ✔️      |
|KEIKOKU.CGB    |19007ea4   |19007ea4   |19007ea4  |     ✔️      |
|KEI_BOSS.CGB   |8dcd7bc0   |8dcd7bc0   |8dcd7bc0  |     ✔️      |
|KEYAEFF.CGB    |3eb9a704   |3eb9a704   |3eb9a704  |     ✔️      |
|KHDRAGON.CGB   |53db3f45   |53db3f45   |53db3f45  |     ✔️      |
|KOJO.CGB       |1e390fc5   |1e390fc5   |1e390fc5  |     ✔️      |
|KTEI.CGB       |8878ee20   |8878ee20   |8878ee20  |     ✔️      |
|KURAGE.CGB     |e2b7d416   |e2b7d416   |e2b7d416  |     ✔️      |
|LANQUER.CGB    |7dce2e6d   |7dce2e6d   |7dce2e6d  |     ✔️      |
|LIBRAMP.CGB    |b6ee2d35   |b6ee2d35   |b6ee2d35  |     ✔️      |
|LODGEMP0.CGB   |3f692ed2   |3f692ed2   |3f692ed2  |     ✔️      |
|LODGEMP1.CGB   |196c1fce   |196c1fce   |196c1fce  |     ✔️      |
|LOLOS.CGB      |7a031f7a   |7a031f7a   |7a031f7a  |     ✔️      |
|LSHIP.CGB      |53a614f0   |53a614f0   |53a614f0  |     ✔️      |
|MASAN.CGB      |169d2a40   |169d2a40   |169d2a40  |     ✔️      |
|MENU.CGB       |be374a9a   |be374a9a   |be374a9a  |     ✔️      |
|MENUBK.CGB     |7ff92ba2   |7ff92ba2   |7ff92ba2  |     ✔️      |
|MENUEN.CGB     |efec54d7   |efec54d7   |efec54d7  |     ✔️      |
|MERN.CGB       |f12f16cd   |f12f16cd   |f12f16cd  |     ✔️      |
|MERUKABA.CGB   |662fb260   |662fb260   |662fb260  |     ✔️      |
|MPDRAGON.CGB   |bc7710f7   |bc7710f7   |bc7710f7  |     ✔️      |
|MSHIP.CGB      |308648a8   |308648a8   |308648a8  |     ✔️      |
|MULT.CGB       |7c4522f1   |7c4522f1   |7c4522f1  |     ✔️      |
|MUR.CGB        |97df7e62   |97df7e62   |97df7e62  |     ✔️      |
|MZUB.CGB       |e8a37f2f   |e8a37f2f   |e8a37f2f  |     ✔️      |
|NAME_ENT.CGB   |a8cb2adf   |a8cb2adf   |a8cb2adf  |     ✔️      |
|NEW_BUM.CGB    |f7fd84a6   |f7fd84a6   |f7fd84a6  |     ✔️      |
|NULLY.CGB      |92fd16b6   |92fd16b6   |92fd16b6  |     ✔️      |
|OKAFUGU.CGB    |fc93adfd   |fc93adfd   |fc93adfd  |     ✔️      |
|OZL.CGB        |fd49e394   |fd49e394   |fd49e394  |     ✔️      |
|PAET.CGB       |c7f02f6d   |c7f02f6d   |c7f02f6d  |     ✔️      |
|PAETMP0.CGB    |c74a014d   |c74a014d   |c74a014d  |     ✔️      |
|PAETMP1.CGB    |aac19a3e   |aac19a3e   |aac19a3e  |     ✔️      |
|PARAORIG.CGB   |140165e2   |140165e2   |140165e2  |     ✔️      |
|PGORAIAS.CGB   |c6e1b31d   |c6e1b31d   |c6e1b31d  |     ✔️      |
|POISON.CGB     |ce183e17   |ce183e17   |ce183e17  |     ✔️      |
|PROBOMB.CGB    |522ccd0f   |522ccd0f   |522ccd0f  |     ✔️      |
|PUP.CGB        |4a7488ac   |4a7488ac   |4a7488ac  |     ✔️      |
|RAHAB.CGB      |2165a11b   |2165a11b   |2165a11b  |     ✔️      |
|RANDORA.CGB    |bf1813fb   |bf1813fb   |bf1813fb  |     ✔️      |
|REUNA.CGB      |ed8f085f   |ed8f085f   |ed8f085f  |     ✔️      |
|RIO.CGB        |1bb4f4c9   |1bb4f4c9   |1bb4f4c9  |     ✔️      |
|ROOMTEST.CGB   |f0b7a23d   |f0b7a23d   |f0b7a23d  |     ✔️      |
|RUINMP.CGB     |893c5f02   |893c5f02   |893c5f02  |     ✔️      |
|SABAKU02.CGB   |5f47e12f   |5f47e12f   |5f47e12f  |     ✔️      |
|SABAKU04.CGB   |5f47e12f   |5f47e12f   |5f47e12f  |     ✔️      |
|SABAKU_B.CGB   |19ec3f97   |19ec3f97   |19ec3f97  |     ✔️      |
|SAVE.CGB       |6590f93c   |6590f93c   |6590f93c  |     ✔️      |
|SCRBTLA5.CGB   |c829bc1a   |c829bc1a   |c829bc1a  |     ✔️      |
|SDON.CGB       |17b0274b   |17b0274b   |17b0274b  |     ✔️      |
|SEEKMP.CGB     |41774e3f   |41774e3f   |41774e3f  |     ✔️      |
|SEEKMP1.CGB    |85f92d83   |85f92d83   |85f92d83  |     ✔️      |
|SHOKU.CGB      |7d11267b   |7d11267b   |7d11267b  |     ✔️      |
|SHRINE.CGB     |a3175e90   |a3175e90   |a3175e90  |     ✔️      |
|SICKMP.CGB     |57f18aa5   |57f18aa5   |57f18aa5  |     ✔️      |
|SKJKMP.CGB     |927279b4   |927279b4   |927279b4  |     ✔️      |
|SLIGHT.CGB     |9d8a74a2   |9d8a74a2   |9d8a74a2  |     ✔️      |
|SNB.CGB        |d3ca3704   |d3ca3704   |d3ca3704  |     ✔️      |
|SOMA.CGB       |b9374774   |b9374774   |b9374774  |     ✔️      |
|SOUKOMP.CGB    |4884d9ba   |4884d9ba   |4884d9ba  |     ✔️      |
|SOUKOMP1.CGB   |834ea655   |834ea655   |834ea655  |     ✔️      |
|SOUKOMP2.CGB   |64626214   |64626214   |64626214  |     ✔️      |
|SRA.CGB        |35672533   |35672533   |35672533  |     ✔️      |
|STK01.CGB      |f14b614c   |f14b614c   |f14b614c  |     ✔️      |
|STK02.CGB      |34ba9427   |34ba9427   |34ba9427  |     ✔️      |
|STK03.CGB      |c70786c6   |c70786c6   |c70786c6  |     ✔️      |
|STK12.CGB      |17207f86   |17207f86   |17207f86  |     ✔️      |
|STOREMP.CGB    |2cf8dfbc   |2cf8dfbc   |2cf8dfbc  |     ✔️      |
|STUN.CGB       |b4e2d9de   |b4e2d9de   |b4e2d9de  |     ✔️      |
|SURFHANU.CGB   |18dfc717   |18dfc717   |18dfc717  |     ✔️      |
|TAM.CGB        |d787078e   |d787078e   |d787078e  |     ✔️      |
|TAMAMP.CGB     |306509af   |306509af   |306509af  |     ✔️      |
|TAMPRO.CGB     |f2148442   |f2148442   |f2148442  |     ✔️      |
|TAPAS.CGB      |f9ffd271   |f9ffd271   |f9ffd271  |     ✔️      |
|TARO.CGB       |fe9db634   |fe9db634   |fe9db634  |     ✔️      |
|TAROJIRO.CGB   |35f0597f   |35f0597f   |35f0597f  |     ✔️      |
|TENTSMMP.CGB   |2b8d8734   |2b8d8734   |2b8d8734  |     ✔️      |
|TGD.CGB        |eda238b3   |eda238b3   |eda238b3  |     ✔️      |
|TUP.CGB        |e809829b   |e809829b   |e809829b  |     ✔️      |
|TUTORIAL.CGB   |ba14f45b   |ba14f45b   |ba14f45b  |     ✔️      |
|URUFIRE.CGB    |9622cce5   |9622cce5   |9622cce5  |     ✔️      |
|URUGND.CGB     |86904b79   |86904b79   |86904b79  |     ✔️      |
|URUGND_B.CGB   |b95dcbd8   |b95dcbd8   |b95dcbd8  |     ✔️      |
|URUGND_M.CGB   |5944d0ef   |5944d0ef   |5944d0ef  |     ✔️      |
|URUNURI.CGB    |aff95167   |aff95167   |aff95167  |     ✔️      |
|URUTUP.CGB     |0d507b34   |0d507b34   |0d507b34  |     ✔️      |
|URU_DAY.CGB    |aff95167   |aff95167   |aff95167  |     ✔️      |
|URU_NGT.CGB    |aff95167   |aff95167   |aff95167  |     ✔️      |
|URU_ROCK.CGB   |036ab537   |036ab537   |036ab537  |     ✔️      |
|URU_YUU.CGB    |aff95167   |aff95167   |aff95167  |     ✔️      |
|UZU.CGB        |7b6e3b7d   |7b6e3b7d   |7b6e3b7d  |     ✔️      |
|VAJURA.CGB     |d8dc5a64   |d8dc5a64   |d8dc5a64  |     ✔️      |
|VALNA.CGB      |0ecb4b16   |0ecb4b16   |0ecb4b16  |     ✔️      |
|VARAHA.CGB     |e2d69fb5   |e2d69fb5   |e2d69fb5  |     ✔️      |
|VRITRA.CGB     |0517b9f1   |0517b9f1   |0517b9f1  |     ✔️      |
|VRITRA1.CGB    |08fee6b5   |08fee6b5   |08fee6b5  |     ✔️      |
|VRITRA2.CGB    |91f836cc   |91f836cc   |91f836cc  |     ✔️      |
|VW_DAIOU.CGB   |02fd54c3   |02fd54c3   |02fd54c3  |     ✔️      |
|VW_GRIG.CGB    |cc2f7b97   |cc2f7b97   |cc2f7b97  |     ✔️      |
|VW_KISEI.CGB   |4d1b9f49   |4d1b9f49   |4d1b9f49  |     ✔️      |
|VW_LAS.CGB     |6729325a   |6729325a   |6729325a  |     ✔️      |
|VW_MIYAB.CGB   |aa6ecd84   |aa6ecd84   |aa6ecd84  |     ✔️      |
|VW_SU.CGB      |4f07a391   |4f07a391   |4f07a391  |     ✔️      |
|VW_VARAH.CGB   |3b800efa   |3b800efa   |3b800efa  |     ✔️      |
|VW_VET.CGB     |6722670f   |6722670f   |6722670f  |     ✔️      |
|VW_ZUSU.CGB    |02d9aed9   |02d9aed9   |02d9aed9  |     ✔️      |
|WAVE.CGB       |0781de8f   |0781de8f   |0781de8f  |     ✔️      |
|WEAK.CGB       |dea92dee   |dea92dee   |dea92dee  |     ✔️      |
|WORLDMAP.CGB   |6bb4252e   |6bb4252e   |6bb4252e  |     ✔️      |
|X_A_AB.CGB     |72bee4e9   |72bee4e9   |72bee4e9  |     ✔️      |
|X_A_AZ.CGB     |8934f93d   |8934f93d   |8934f93d  |     ✔️      |
|X_A_BK.CGB     |d277a357   |d277a357   |d277a357  |     ✔️      |
|X_A_BZ.CGB     |e20ec471   |e20ec471   |e20ec471  |     ✔️      |
|X_A_CR.CGB     |bcc0baf0   |bcc0baf0   |bcc0baf0  |     ✔️      |
|X_A_CS.CGB     |38fe57e5   |38fe57e5   |38fe57e5  |     ✔️      |
|X_A_EN.CGB     |768bf056   |768bf056   |768bf056  |     ✔️      |
|X_A_JB.CGB     |a5fe0fa6   |a5fe0fa6   |a5fe0fa6  |     ✔️      |
|X_A_LG.CGB     |301eb7a4   |301eb7a4   |301eb7a4  |     ✔️      |
|X_A_LR.CGB     |a85bddb1   |a85bddb1   |a85bddb1  |     ✔️      |
|X_A_MA.CGB     |fdcff0cb   |fdcff0cb   |fdcff0cb  |     ✔️      |
|X_A_PR.CGB     |c0017547   |c0017547   |c0017547  |     ✔️      |
|X_A_PT.CGB     |562d34d4   |562d34d4   |562d34d4  |     ✔️      |
|X_A_QT.CGB     |d6e004db   |d6e004db   |d6e004db  |     ✔️      |
|X_A_RB.CGB     |9ac98845   |9ac98845   |9ac98845  |     ✔️      |
|X_A_RG.CGB     |9e01fa4d   |9e01fa4d   |9e01fa4d  |     ✔️      |
|X_A_SM.CGB     |e1d02c48   |e1d02c48   |e1d02c48  |     ✔️      |
|X_A_TA.CGB     |c92b58de   |c92b58de   |c92b58de  |     ✔️      |
|X_A_TB.CGB     |0483a59e   |0483a59e   |0483a59e  |     ✔️      |
|X_A_YD.CGB     |c72d0e08   |c72d0e08   |c72d0e08  |     ✔️      |
|X_A_YR.CGB     |78762772   |78762772   |78762772  |     ✔️      |
|X_A_ZD.CGB     |813f9c7d   |813f9c7d   |813f9c7d  |     ✔️      |
|X_E_BM.CGB     |04441d1e   |04441d1e   |04441d1e  |     ✔️      |
|X_E_DM.CGB     |23bd649f   |23bd649f   |23bd649f  |     ✔️      |
|X_F_AB.CGB     |072a3030   |072a3030   |072a3030  |     ✔️      |
|X_F_LG.CGB     |418219a1   |418219a1   |418219a1  |     ✔️      |
|X_F_LR.CGB     |66980a06   |66980a06   |66980a06  |     ✔️      |
|X_F_PR.CGB     |08e15fa9   |08e15fa9   |08e15fa9  |     ✔️      |
|X_F_QT.CGB     |d7d0c0a2   |d7d0c0a2   |d7d0c0a2  |     ✔️      |
|X_F_RB.CGB     |9a389dab   |9a389dab   |9a389dab  |     ✔️      |
|X_F_SM.CGB     |8e42be53   |8e42be53   |8e42be53  |     ✔️      |
|X_G_AZ.CGB     |2487d517   |2487d517   |2487d517  |     ✔️      |
|X_G_LG.CGB     |d3e7690b   |d3e7690b   |d3e7690b  |     ✔️      |
|X_X_EN.CGB     |4403dcef   |4403dcef   |4403dcef  |     ✔️      |
|X_X_LG.CGB     |301eb7a4   |301eb7a4   |301eb7a4  |     ✔️      |
|X_X_YD.CGB     |c72d0e08   |c72d0e08   |c72d0e08  |     ✔️      |
|ZOAHMP0D.CGB   |e228b51c   |e228b51c   |e228b51c  |     ✔️      |
|ZOAHMP0N.CGB   |380be3e0   |380be3e0   |380be3e0  |     ✔️      |
|ZOAHMP1D.CGB   |ed383843   |ed383843   |ed383843  |     ✔️      |
|ZOAHMP1N.CGB   |ed383843   |ed383843   |ed383843  |     ✔️      |
|ZOAHOBJ0.CGB   |14ec7515   |14ec7515   |14ec7515  |     ✔️      |
|ZOAHOBJ1.CGB   |5977353b   |5977353b   |5977353b  |     ✔️      |
|ZOAH_OW.CGB    |94cb41a3   |94cb41a3   |94cb41a3  |     ✔️      |
|ZUSU.CGB       |301a709d   |301a709d   |301a709d  |     ✔️      |
|Z_A_AR.CGB     |a0665716   |a0665716   |a0665716  |     ✔️      |
|Z_A_AY.CGB     |d4ab4c7a   |d4ab4c7a   |d4ab4c7a  |     ✔️      |
|Z_A_DM.CGB     |c3d7cace   |c3d7cace   |c3d7cace  |     ✔️      |
|Z_A_EG.CGB     |5d11d366   |5d11d366   |5d11d366  |     ✔️      |
|Z_A_EK.CGB     |3069542c   |3069542c   |3069542c  |     ✔️      |
|Z_A_FE.CGB     |dd329802   |dd329802   |dd329802  |     ✔️      |
|Z_A_GS.CGB     |ecd5c223   |ecd5c223   |ecd5c223  |     ✔️      |
|Z_A_JR.CGB     |b7479c4d   |b7479c4d   |b7479c4d  |     ✔️      |
|Z_A_KH.CGB     |11fa320f   |11fa320f   |11fa320f  |     ✔️      |
|Z_A_LD.CGB     |6f9b8898   |6f9b8898   |6f9b8898  |     ✔️      |
|Z_A_RD.CGB     |c80a199f   |c80a199f   |c80a199f  |     ✔️      |
|Z_A_SF.CGB     |85eec9f9   |85eec9f9   |85eec9f9  |     ✔️      |
|Z_A_SR.CGB     |1f954f9e   |1f954f9e   |1f954f9e  |     ✔️      |
|Z_A_VZ.CGB     |f3c16143   |f3c16143   |f3c16143  |     ✔️      |
|Z_B_RD.CGB     |5663a95f   |5663a95f   |5663a95f  |     ✔️      |
|Z_E_AY.CGB     |bdfb45b1   |bdfb45b1   |bdfb45b1  |     ✔️      |
|Z_E_GS.CGB     |06ddc3f2   |06ddc3f2   |06ddc3f2  |     ✔️      |
|Z_F_AY.CGB     |b0098284   |b0098284   |b0098284  |     ✔️      |
|Z_F_FE.CGB     |9d5304fe   |9d5304fe   |9d5304fe  |     ✔️      |
|ASCII.CGZ**    |1dfaa82d   |defdba99   |defdba99  |  Jap!=Eng  |
|EVT000_1.CPK   |04c5a063   |04c5a063   |04c5a063  |     ✔️      |
|EVT000_2.CPK   |f400677a   |f400677a   |f400677a  |     ✔️      |
|EVT000_3.CPK   |b3fd4b6d   |b3fd4b6d   |b3fd4b6d  |     ✔️      |
|EVT000_4.CPK   |22aed057   |22aed057   |22aed057  |     ✔️      |
|EVT000_5.CPK   |81842b1b   |81842b1b   |81842b1b  |     ✔️      |
|EVT002.CPK     |c4c5f6fd   |c4c5f6fd   |c4c5f6fd  |     ✔️      |
|EVT004_1.CPK   |2d35b78f   |2d35b78f   |2d35b78f  |     ✔️      |
|EVT004_2.CPK   |dcc9abe3   |dcc9abe3   |dcc9abe3  |     ✔️      |
|EVT008.CPK     |cdac723d   |cdac723d   |cdac723d  |     ✔️      |
|EVT016_1.CPK   |a026e8f3   |a026e8f3   |a026e8f3  |     ✔️      |
|EVT016_2.CPK   |bf4386e4   |bf4386e4   |bf4386e4  |     ✔️      |
|EVT016_3.CPK   |4c5f2fff   |4c5f2fff   |4c5f2fff  |     ✔️      |
|EVT029.CPK     |799c0d98   |799c0d98   |799c0d98  |     ✔️      |
|MOVIE1.CPK     |3ad3381a   |3ad3381a   |3ad3381a  |     ✔️      |
|COMMON.DAT***  |d93819bb   |c709b5cf   |a10313ae  |   Varied   |
|MOVIE.DAT***   |85ec1686   |557ecd3e   |5cdf5e6e  |   Varied   |
|E006.EPK       |1ce5e2cf   |1ce5e2cf   |1ce5e2cf  |     ✔️      |
|E011.EPK**     |b0ad6a31   |b455d42c   |b455d42c  |  Jap!=Eng  |
|E014.EPK***    |31e311f4   |e6e88a2d   |77beaa2b  |   Varied   |
|E021.EPK**     |e13e2a00   |9dab57f2   |9dab57f2  |  Jap!=Eng  |
|E022.EPK***    |fc6cedc9   |3ca95a6b   |1e7ea9d0  |   Varied   |
|E024.EPK***    |72a6514c   |4effd6ff   |27967400  |   Varied   |
|A3DSP1.EXB     |fd9e4d52   |fd9e4d52   |fd9e4d52  |     ✔️      |
|A3DSP2.EXB     |250c3467   |250c3467   |250c3467  |     ✔️      |
|A5BOSS.EXB     |250c3467   |250c3467   |250c3467  |     ✔️      |
|A5DSP.EXB      |cb855ff9   |cb855ff9   |cb855ff9  |     ✔️      |
|A7BOSS.EXB     |b1ac1de3   |b1ac1de3   |b1ac1de3  |     ✔️      |
|A7DSP.EXB      |588d969a   |588d969a   |588d969a  |     ✔️      |
|ANTI.EXB       |fd9e4d52   |fd9e4d52   |fd9e4d52  |     ✔️      |
|B2BOSS.EXB     |ece0b2f1   |ece0b2f1   |ece0b2f1  |     ✔️      |
|B2DSP1.EXB     |fd9e4d52   |fd9e4d52   |fd9e4d52  |     ✔️      |
|B2DSP2.EXB     |3ff47ca5   |3ff47ca5   |3ff47ca5  |     ✔️      |
|B5DSP.EXB      |bb336875   |bb336875   |bb336875  |     ✔️      |
|B5DSP2.EXB     |fd9e4d52   |fd9e4d52   |fd9e4d52  |     ✔️      |
|B5MBDSP.EXB    |bb336875   |bb336875   |bb336875  |     ✔️      |
|B6DSP.EXB      |e64506fa   |e64506fa   |e64506fa  |     ✔️      |
|BOSS3.EXB      |250c3467   |250c3467   |250c3467  |     ✔️      |
|BOSS4.EXB      |fd9e4d52   |fd9e4d52   |fd9e4d52  |     ✔️      |
|BTL1DSP.EXB    |b1ac1de3   |b1ac1de3   |b1ac1de3  |     ✔️      |
|BTL2DSP.EXB    |bb336875   |bb336875   |bb336875  |     ✔️      |
|C2DSP.EXB      |bb336875   |bb336875   |bb336875  |     ✔️      |
|C4DSP.EXB      |250c3467   |250c3467   |250c3467  |     ✔️      |
|C8DSP.EXB      |bb336875   |bb336875   |bb336875  |     ✔️      |
|CAMPDSP.EXB    |bb336875   |bb336875   |bb336875  |     ✔️      |
|CARAVAN.EXB    |13b95cbb   |13b95cbb   |13b95cbb  |     ✔️      |
|COPY1.EXB      |250c3467   |250c3467   |250c3467  |     ✔️      |
|COPY2.EXB      |bb336875   |bb336875   |bb336875  |     ✔️      |
|D2DSP.EXB      |b1ac1de3   |b1ac1de3   |b1ac1de3  |     ✔️      |
|D3DSP.EXB      |eb49f3bb   |eb49f3bb   |eb49f3bb  |     ✔️      |
|D4DSP.EXB      |bb336875   |bb336875   |bb336875  |     ✔️      |
|D5DSP.EXB      |588d969a   |588d969a   |588d969a  |     ✔️      |
|E14DSP.EXB     |ae85e7aa   |ae85e7aa   |ae85e7aa  |     ✔️      |
|E78DSP.EXB     |030ed2f7   |030ed2f7   |030ed2f7  |     ✔️      |
|MB01.EXB       |fd9e4d52   |fd9e4d52   |fd9e4d52  |     ✔️      |
|MB04.EXB       |bb336875   |bb336875   |bb336875  |     ✔️      |
|MB3.EXB        |fd9e4d52   |fd9e4d52   |fd9e4d52  |     ✔️      |
|PAETDSP.EXB    |bb336875   |bb336875   |bb336875  |     ✔️      |
|RUINDSP.EXB    |e86a6926   |e86a6926   |e86a6926  |     ✔️      |
|SEEDSP.EXB     |080a9293   |080a9293   |080a9293  |     ✔️      |
|TITLE.EXB      |fd9e4d52   |fd9e4d52   |fd9e4d52  |     ✔️      |
|TOWNDSP.EXB    |13b95cbb   |13b95cbb   |13b95cbb  |     ✔️      |
|BTL_A3.FNT     |5007723b   |5007723b   |5007723b  |     ✔️      |
|BTL_A32.FNT    |33da8e22   |33da8e22   |33da8e22  |     ✔️      |
|BTL_A5.FNT**   |f4938bbb   |00b47e2c   |00b47e2c  |  Jap!=Eng  |
|BTL_A52.FNT**  |c6acf2b9   |75bece3d   |75bece3d  |  Jap!=Eng  |
|BTL_A53.FNT    |181dc0e5   |181dc0e5   |181dc0e5  |     ✔️      |
|BTL_A7.FNT     |4b08d8d4   |4b08d8d4   |4b08d8d4  |     ✔️      |
|BTL_A72.FNT**  |84c80328   |7ea59194   |7ea59194  |  Jap!=Eng  |
|BTL_B2.FNT**   |ba0c0dfc   |61dd797a   |61dd797a  |  Jap!=Eng  |
|BTL_B5.FNT**   |9e53b93f   |5414b0c8   |5414b0c8  |  Jap!=Eng  |
|BTL_B52.FNT    |b002e9c5   |b002e9c5   |b002e9c5  |     ✔️      |
|BTL_B53.FNT    |ec8fb2fe   |ec8fb2fe   |ec8fb2fe  |     ✔️      |
|BTL_B6.FNT**   |8de66b95   |d8d8a003   |d8d8a003  |  Jap!=Eng  |
|BTL_B62.FNT**  |300d9466   |dca166f9   |dca166f9  |  Jap!=Eng  |
|BTL_C2.FNT**   |5f2744de   |e12961a6   |e12961a6  |  Jap!=Eng  |
|BTL_C22.FNT**  |b800a29a   |6b1b9978   |6b1b9978  |  Jap!=Eng  |
|BTL_C4.FNT**   |6ce3a3ee   |dd0b4285   |dd0b4285  |  Jap!=Eng  |
|BTL_C5.FNT**   |cea5fd28   |f9aa6ebe   |f9aa6ebe  |  Jap!=Eng  |
|BTL_C52.FNT**  |4a648b19   |7e85309c   |7e85309c  |  Jap!=Eng  |
|BTL_C8.FNT**   |61c22187   |ff165f75   |ff165f75  |  Jap!=Eng  |
|BTL_C82.FNT**  |60044127   |2388704f   |2388704f  |  Jap!=Eng  |
|BTL_D2.FNT     |f7b5176c   |f7b5176c   |f7b5176c  |     ✔️      |
|BTL_D22.FNT**  |ee9866f1   |f8d071bf   |f8d071bf  |  Jap!=Eng  |
|BTL_D4.FNT     |68fe52ae   |68fe52ae   |68fe52ae  |     ✔️      |
|BTL_D5.FNT     |ad412877   |ad412877   |ad412877  |     ✔️      |
|BTL_T0.FNT     |e5221f29   |e5221f29   |e5221f29  |     ✔️      |
|BTL_X0.FNT**   |0f70e9ab   |4856bc29   |4856bc29  |  Jap!=Eng  |
|EVEEXPL.FNT    |76a1d2d8   |76a1d2d8   |76a1d2d8  |     ✔️      |
|EVT000_1.FNT   |e5a8b903   |e5a8b903   |e5a8b903  |     ✔️      |
|EVT000_2.FNT   |57c56eab   |57c56eab   |57c56eab  |     ✔️      |
|EVT000_3.FNT   |cbd08f06   |cbd08f06   |cbd08f06  |     ✔️      |
|EVT000_4.FNT   |ba9dcdd0   |ba9dcdd0   |ba9dcdd0  |     ✔️      |
|EVT000_5.FNT   |be7febcb   |be7febcb   |be7febcb  |     ✔️      |
|EVT002.FNT     |45d3ed28   |45d3ed28   |45d3ed28  |     ✔️      |
|EVT004_2.FNT   |e359f276   |e359f276   |e359f276  |     ✔️      |
|EVT008.FNT     |b68cba81   |b68cba81   |b68cba81  |     ✔️      |
|EVT016_1.FNT   |f37e914f   |f37e914f   |f37e914f  |     ✔️      |
|EVT016_2.FNT   |c14253c0   |c14253c0   |c14253c0  |     ✔️      |
|EVT016_3.FNT   |9bc5f186   |9bc5f186   |9bc5f186  |     ✔️      |
|EVT029.FNT     |5e606fe4   |5e606fe4   |5e606fe4  |     ✔️      |
|EVTCAMP.FNT    |8bc7cd76   |8bc7cd76   |8bc7cd76  |     ✔️      |
|EVTCARA.FNT    |b7738de7   |b7738de7   |b7738de7  |     ✔️      |
|EVTEXCA.FNT    |21057d0e   |21057d0e   |21057d0e  |     ✔️      |
|EVTRUIN.FNT    |bc5c4ee7   |bc5c4ee7   |bc5c4ee7  |     ✔️      |
|EVTSEEK.FNT    |5fe3b60a   |5fe3b60a   |5fe3b60a  |     ✔️      |
|EVTZOAH.FNT    |327158cc   |327158cc   |327158cc  |     ✔️      |
|FLAGEDIT.FNT   |81cc8397   |81cc8397   |81cc8397  |     ✔️      |
|FLD_A3.FNT**   |28080ece   |262164d2   |262164d2  |  Jap!=Eng  |
|FLD_A5.FNT     |35327431   |35327431   |35327431  |     ✔️      |
|FLD_A7.FNT     |f3b72ca4   |f3b72ca4   |f3b72ca4  |     ✔️      |
|FLD_B2.FNT     |e5de6a8e   |e5de6a8e   |e5de6a8e  |     ✔️      |
|FLD_B5.FNT**   |d433bb91   |4e24c87a   |4e24c87a  |  Jap!=Eng  |
|FLD_B6.FNT     |86aa1622   |86aa1622   |86aa1622  |     ✔️      |
|FLD_C2.FNT     |a29376f3   |a29376f3   |a29376f3  |     ✔️      |
|FLD_C4.FNT     |0bd79a5c   |0bd79a5c   |0bd79a5c  |     ✔️      |
|FLD_D2.FNT**   |74887b0d   |9ddebb97   |9ddebb97  |  Jap!=Eng  |
|FLD_D3.FNT**   |b9b49d35   |065d237b   |065d237b  |  Jap!=Eng  |
|FLD_D5.FNT     |f79d4525   |f79d4525   |f79d4525  |     ✔️      |
|FLD_T0.FNT     |16b12c4c   |16b12c4c   |16b12c4c  |     ✔️      |
|ITEM.FNT       |6970a8c9   |6970a8c9   |6970a8c9  |     ✔️      |
|MENU.FNT       |3a014d13   |3a014d13   |3a014d13  |     ✔️      |
|MENUBK.FNT     |2ee1ae47   |2ee1ae47   |2ee1ae47  |     ✔️      |
|MENUEN.FNT     |c68c2aa2   |c68c2aa2   |c68c2aa2  |     ✔️      |
|SAVE.FNT       |49fbe389   |49fbe389   |49fbe389  |     ✔️      |
|SHOP.FNT       |eceef1ed   |eceef1ed   |eceef1ed  |     ✔️      |
|WORLDMAP.FNT   |d0e536a7   |d0e536a7   |d0e536a7  |     ✔️      |
|A3CMN.MCB      |d28b9885   |d28b9885   |d28b9885  |     ✔️      |
|A5CMN.MCB      |ac31f7e6   |ac31f7e6   |ac31f7e6  |     ✔️      |
|ABOMB2.MCB     |a3043c18   |a3043c18   |a3043c18  |     ✔️      |
|AD.MCB         |a035c581   |a035c581   |a035c581  |     ✔️      |
|AD3.MCB        |8fa19878   |8fa19878   |8fa19878  |     ✔️      |
|AIRBOMB.MCB    |a2250dda   |a2250dda   |a2250dda  |     ✔️      |
|AJITOMP0.MCB   |0012570d   |0012570d   |0012570d  |     ✔️      |
|AJITOMP1.MCB   |dbec3191   |dbec3191   |dbec3191  |     ✔️      |
|ANAKAZU.MCB    |8de948df   |8de948df   |8de948df  |     ✔️      |
|ANTIDRA.MCB    |4c33dd46   |4c33dd46   |4c33dd46  |     ✔️      |
|ANTIDRAG.MCB   |261030e8   |261030e8   |261030e8  |     ✔️      |
|ARSRO.MCB      |8baf229a   |8baf229a   |8baf229a  |     ✔️      |
|ASLTHANU.MCB   |f80bd09f   |f80bd09f   |f80bd09f  |     ✔️      |
|AWEN.MCB       |d8514351   |d8514351   |d8514351  |     ✔️      |
|AZCT.MCB       |c3592cf1   |c3592cf1   |c3592cf1  |     ✔️      |
|AZEL.MCB       |3557ef92   |3557ef92   |3557ef92  |     ✔️      |
|AZELMP.MCB     |36f8c2c3   |36f8c2c3   |36f8c2c3  |     ✔️      |
|B6BOSS.MCB     |53d57760   |53d57760   |53d57760  |     ✔️      |
|B6CMN.MCB      |2a7543d0   |2a7543d0   |2a7543d0  |     ✔️      |
|B6EGG.MCB      |06bc3e54   |06bc3e54   |06bc3e54  |     ✔️      |
|B6LARVA.MCB    |5b105afe   |5b105afe   |5b105afe  |     ✔️      |
|B6MERN.MCB     |1dcc5352   |1dcc5352   |1dcc5352  |     ✔️      |
|B6MID.MCB      |2c068c68   |2c068c68   |2c068c68  |     ✔️      |
|B6RIO.MCB      |1a069f7e   |1a069f7e   |1a069f7e  |     ✔️      |
|BARIOH.MCB     |d0fc8e56   |d0fc8e56   |d0fc8e56  |     ✔️      |
|BARISTA.MCB    |7c1714ae   |7c1714ae   |7c1714ae  |     ✔️      |
|BARMP.MCB      |3ed750e8   |3ed750e8   |3ed750e8  |     ✔️      |
|BATTLE.MCB     |feac8346   |feac8346   |feac8346  |     ✔️      |
|BEMOS.MCB      |03ec4c4d   |03ec4c4d   |03ec4c4d  |     ✔️      |
|BENITATE.MCB   |04861d65   |04861d65   |04861d65  |     ✔️      |
|BLDAMP.MCB     |11b39f46   |11b39f46   |11b39f46  |     ✔️      |
|BMP_A7_0.MCB   |9e0bf455   |9e0bf455   |9e0bf455  |     ✔️      |
|BMP_B5_0.MCB   |ae10f910   |ae10f910   |ae10f910  |     ✔️      |
|BMP_B5_1.MCB   |ae10f910   |ae10f910   |ae10f910  |     ✔️      |
|BMP_C8_B.MCB   |dd119b86   |dd119b86   |dd119b86  |     ✔️      |
|BOMBLV3.MCB    |dc2db74c   |dc2db74c   |dc2db74c  |     ✔️      |
|BTFALLA3.MCB   |47cabba2   |47cabba2   |47cabba2  |     ✔️      |
|BUM.MCB        |c3b564af   |c3b564af   |c3b564af  |     ✔️      |
|C22CMN.MCB     |1231afb3   |1231afb3   |1231afb3  |     ✔️      |
|C2CMN.MCB      |54c3f1c1   |54c3f1c1   |54c3f1c1  |     ✔️      |
|C4CMN.MCB      |2640bf38   |2640bf38   |2640bf38  |     ✔️      |
|C4PASS.MCB     |78ad5070   |78ad5070   |78ad5070  |     ✔️      |
|C5CMN.MCB      |13cff868   |13cff868   |13cff868  |     ✔️      |
|C8CMN.MCB      |cc84d4fc   |cc84d4fc   |cc84d4fc  |     ✔️      |
|CADRO.MCB      |cdffd989   |cdffd989   |cdffd989  |     ✔️      |
|CAMPMP1.MCB    |e820dadb   |e820dadb   |e820dadb  |     ✔️      |
|CAMPMP2.MCB    |6ecf9a59   |6ecf9a59   |6ecf9a59  |     ✔️      |
|CAMPMP3.MCB    |58d56958   |58d56958   |58d56958  |     ✔️      |
|CAMPMP4.MCB    |f640aefa   |f640aefa   |f640aefa  |     ✔️      |
|CAMPMP5.MCB    |6c39afd4   |6c39afd4   |6c39afd4  |     ✔️      |
|CAMPMP6.MCB    |5119659f   |5119659f   |5119659f  |     ✔️      |
|CAMPMP7.MCB    |2fdfa3fa   |2fdfa3fa   |2fdfa3fa  |     ✔️      |
|CAMPMP8.MCB    |6cea02dc   |6cea02dc   |6cea02dc  |     ✔️      |
|CAMPOBJ.MCB    |f359dcba   |f359dcba   |f359dcba  |     ✔️      |
|CARAVMP.MCB    |a657a9ae   |a657a9ae   |a657a9ae  |     ✔️      |
|CHARCMP0.MCB   |daf5ec8e   |daf5ec8e   |daf5ec8e  |     ✔️      |
|CHARCMP1.MCB   |3d58fe52   |3d58fe52   |3d58fe52  |     ✔️      |
|CHILDMP.MCB    |dceda91e   |dceda91e   |dceda91e  |     ✔️      |
|COMMON3.MCB    |6737ec69   |6737ec69   |6737ec69  |     ✔️      |
|CORE.MCB       |af5ae482   |af5ae482   |af5ae482  |     ✔️      |
|CYCLONE.MCB    |655359fb   |655359fb   |655359fb  |     ✔️      |
|C_DRA0.MCB     |31954a56   |31954a56   |31954a56  |     ✔️      |
|C_DRA1.MCB     |3ff50a4b   |3ff50a4b   |3ff50a4b  |     ✔️      |
|C_DRA2.MCB     |05b89007   |05b89007   |05b89007  |     ✔️      |
|C_DRA3.MCB     |b3cddf38   |b3cddf38   |b3cddf38  |     ✔️      |
|C_DRA4.MCB     |e3afbbde   |e3afbbde   |e3afbbde  |     ✔️      |
|C_DRA5.MCB     |aab6dd72   |aab6dd72   |aab6dd72  |     ✔️      |
|C_DRA6.MCB     |8c31ab6b   |8c31ab6b   |8c31ab6b  |     ✔️      |
|C_DRA7.MCB     |a41b8fcc   |a41b8fcc   |a41b8fcc  |     ✔️      |
|D2CMN.MCB      |09eee475   |09eee475   |09eee475  |     ✔️      |
|D4CMN.MCB      |199ffcad   |199ffcad   |199ffcad  |     ✔️      |
|D5HANU.MCB     |7a9a0c6a   |7a9a0c6a   |7a9a0c6a  |     ✔️      |
|D5LAND.MCB     |7faa5205   |7faa5205   |7faa5205  |     ✔️      |
|D5LDRA.MCB     |464a3efb   |464a3efb   |464a3efb  |     ✔️      |
|D5MERU.MCB     |26d15d9e   |26d15d9e   |26d15d9e  |     ✔️      |
|D5NOOS.MCB     |27a0f1d8   |27a0f1d8   |27a0f1d8  |     ✔️      |
|D5NURU.MCB     |918f441d   |918f441d   |918f441d  |     ✔️      |
|D5SHELL.MCB    |9403e6c2   |9403e6c2   |9403e6c2  |     ✔️      |
|D5TGD.MCB      |06538b96   |06538b96   |06538b96  |     ✔️      |
|DRAGON0.MCB    |5b3ec75c   |5b3ec75c   |5b3ec75c  |     ✔️      |
|DRAGON1.MCB    |2a38cce1   |2a38cce1   |2a38cce1  |     ✔️      |
|DRAGON2.MCB    |b6689b0a   |b6689b0a   |b6689b0a  |     ✔️      |
|DRAGON3.MCB    |8b036497   |8b036497   |8b036497  |     ✔️      |
|DRAGON4.MCB    |f7cf9b37   |f7cf9b37   |f7cf9b37  |     ✔️      |
|DRAGON5.MCB    |1fc6dffd   |1fc6dffd   |1fc6dffd  |     ✔️      |
|DRAGON6.MCB    |8adce155   |8adce155   |8adce155  |     ✔️      |
|DRAGON7.MCB    |b9a04667   |b9a04667   |b9a04667  |     ✔️      |
|DRAGONC0.MCB   |2c184aca   |2c184aca   |2c184aca  |     ✔️      |
|DRAGONC1.MCB   |ab8aad6b   |ab8aad6b   |ab8aad6b  |     ✔️      |
|DRAGONC2.MCB   |317cc5a5   |317cc5a5   |317cc5a5  |     ✔️      |
|DRAGONC3.MCB   |3e4f84c7   |3e4f84c7   |3e4f84c7  |     ✔️      |
|DRAGONC4.MCB   |eafa94d4   |eafa94d4   |eafa94d4  |     ✔️      |
|DRAGONM1.MCB   |c1c1857b   |c1c1857b   |c1c1857b  |     ✔️      |
|DRAGONM2.MCB   |cea1ae4b   |cea1ae4b   |cea1ae4b  |     ✔️      |
|DRAGONM3.MCB   |603c84b4   |603c84b4   |603c84b4  |     ✔️      |
|DRAGONM4.MCB   |2c4264d3   |2c4264d3   |2c4264d3  |     ✔️      |
|DRAGONM5.MCB   |d985562b   |d985562b   |d985562b  |     ✔️      |
|DRAGONM7.MCB   |dad5ca31   |dad5ca31   |dad5ca31  |     ✔️      |
|DRVA.MCB       |d1eaa5a6   |d1eaa5a6   |d1eaa5a6  |     ✔️      |
|DYURA00.MCB    |8de80b58   |8de80b58   |8de80b58  |     ✔️      |
|DYURA01.MCB    |47c6a411   |47c6a411   |47c6a411  |     ✔️      |
|DYURA02.MCB    |ab567e0a   |ab567e0a   |ab567e0a  |     ✔️      |
|DYURA03.MCB    |a360b8aa   |a360b8aa   |a360b8aa  |     ✔️      |
|DYURA04.MCB    |9c74a3b3   |9c74a3b3   |9c74a3b3  |     ✔️      |
|EDGE.MCB       |0b4a1978   |0b4a1978   |0b4a1978  |     ✔️      |
|EVT011MP.MCB   |a7b4ec0a   |a7b4ec0a   |a7b4ec0a  |     ✔️      |
|EVT014MP.MCB   |afa48869   |afa48869   |afa48869  |     ✔️      |
|EVT021MP.MCB   |01bb54d5   |01bb54d5   |01bb54d5  |     ✔️      |
|EXCAVAMP.MCB   |8616516c   |8616516c   |8616516c  |     ✔️      |
|FINAL.MCB      |2c11ac85   |2c11ac85   |2c11ac85  |     ✔️      |
|FIRE.MCB       |c5e0366d   |c5e0366d   |c5e0366d  |     ✔️      |
|FLDCMN.MCB     |2ef533e6   |2ef533e6   |2ef533e6  |     ✔️      |
|FLD_A3.MCB     |2c25aa28   |2c25aa28   |2c25aa28  |     ✔️      |
|FLD_A3_0.MCB   |b749bdac   |b749bdac   |b749bdac  |     ✔️      |
|FLD_A3_1.MCB   |d99d0935   |d99d0935   |d99d0935  |     ✔️      |
|FLD_A3_2.MCB   |19f3c3eb   |19f3c3eb   |19f3c3eb  |     ✔️      |
|FLD_A3_3.MCB   |32141ea6   |32141ea6   |32141ea6  |     ✔️      |
|FLD_A5.MCB     |321fa503   |321fa503   |321fa503  |     ✔️      |
|FLD_A5_0.MCB   |7d7ffea2   |7d7ffea2   |7d7ffea2  |     ✔️      |
|FLD_A5_2.MCB   |2177Dec7   |2177Dec7   |2177Dec7  |     ✔️      |
|FLD_A5_4.MCB   |4b10b59e   |4b10b59e   |4b10b59e  |     ✔️      |
|FLD_A5_7.MCB   |2bb87d04   |2bb87d04   |2bb87d04  |     ✔️      |
|FLD_A5_8.MCB   |3bc8eedb   |3bc8eedb   |3bc8eedb  |     ✔️      |
|FLD_A5_9.MCB   |38ddb42b   |38ddb42b   |38ddb42b  |     ✔️      |
|FLD_A5_B.MCB   |1e3e37c5   |1e3e37c5   |1e3e37c5  |     ✔️      |
|FLD_A7_0.MCB   |a11d6dfb   |a11d6dfb   |a11d6dfb  |     ✔️      |
|FLD_A7_1.MCB   |b6c0a1f0   |b6c0a1f0   |b6c0a1f0  |     ✔️      |
|FLD_A7_2.MCB   |b9ca4343   |b9ca4343   |b9ca4343  |     ✔️      |
|FLD_B2_1.MCB   |a6e4c391   |a6e4c391   |a6e4c391  |     ✔️      |
|FLD_B2_3.MCB   |0e1bf860   |0e1bf860   |0e1bf860  |     ✔️      |
|FLD_B2_4.MCB   |f5cd6387   |f5cd6387   |f5cd6387  |     ✔️      |
|FLD_B5_0.MCB   |683ad655   |683ad655   |683ad655  |     ✔️      |
|FLD_B5_1.MCB   |f764a0a5   |f764a0a5   |f764a0a5  |     ✔️      |
|FLD_B5_2.MCB   |7921e915   |7921e915   |7921e915  |     ✔️      |
|FLD_B5_3.MCB   |27b4e4e7   |27b4e4e7   |27b4e4e7  |     ✔️      |
|FLD_B5_4.MCB   |b2e2d4b2   |b2e2d4b2   |b2e2d4b2  |     ✔️      |
|FLD_B6.MCB     |7b5120be   |7b5120be   |7b5120be  |     ✔️      |
|FLD_B6_0.MCB   |b9c8add4   |b9c8add4   |b9c8add4  |     ✔️      |
|FLD_B6_1.MCB   |0c5aaadc   |0c5aaadc   |0c5aaadc  |     ✔️      |
|FLD_B6_2.MCB   |a16d8056   |a16d8056   |a16d8056  |     ✔️      |
|FLD_B6_3.MCB   |4b1165a7   |4b1165a7   |4b1165a7  |     ✔️      |
|FLD_B6_4.MCB   |7c7b19bc   |7c7b19bc   |7c7b19bc  |     ✔️      |
|FLD_B6_5.MCB   |8f40cf5d   |8f40cf5d   |8f40cf5d  |     ✔️      |
|FLD_B6_6.MCB   |58c418d1   |58c418d1   |58c418d1  |     ✔️      |
|FLD_B6_8.MCB   |a79c2521   |a79c2521   |a79c2521  |     ✔️      |
|FLD_B6_9.MCB   |6f3b8c45   |6f3b8c45   |6f3b8c45  |     ✔️      |
|FLD_C2_0.MCB   |ec8e6b36   |ec8e6b36   |ec8e6b36  |     ✔️      |
|FLD_C4_0.MCB   |f8c8b256   |f8c8b256   |f8c8b256  |     ✔️      |
|FLD_C4_1.MCB   |2686f7f1   |2686f7f1   |2686f7f1  |     ✔️      |
|FLD_C4_2.MCB   |fbbf2874   |fbbf2874   |fbbf2874  |     ✔️      |
|FLD_C4_3.MCB   |8e4852e9   |8e4852e9   |8e4852e9  |     ✔️      |
|FLD_C4_4.MCB   |263b27ad   |263b27ad   |263b27ad  |     ✔️      |
|FLD_C4_5.MCB   |fde8bf28   |fde8bf28   |fde8bf28  |     ✔️      |
|FLD_C4_6.MCB   |a1921bc7   |a1921bc7   |a1921bc7  |     ✔️      |
|FLD_D2_0.MCB   |fba85d17   |fba85d17   |fba85d17  |     ✔️      |
|FLD_D2_1.MCB   |75176f48   |75176f48   |75176f48  |     ✔️      |
|FLD_D3_0.MCB   |66da26a0   |66da26a0   |66da26a0  |     ✔️      |
|FLD_D5_0.MCB   |2674a0ab   |2674a0ab   |2674a0ab  |     ✔️      |
|FLD_T0.MCB     |940e1991   |940e1991   |940e1991  |     ✔️      |
|FLD_T0_0.MCB   |1ce0889f   |1ce0889f   |1ce0889f  |     ✔️      |
|FLD_T0_1.MCB   |23df0943   |23df0943   |23df0943  |     ✔️      |
|FLD_T0_3.MCB   |56da58fd   |56da58fd   |56da58fd  |     ✔️      |
|FLD_T0_4.MCB   |ca6f7e7f   |ca6f7e7f   |ca6f7e7f  |     ✔️      |
|FLD_T0_5.MCB   |3d20d575   |3d20d575   |3d20d575  |     ✔️      |
|FLD_T1_0.MCB   |50466d83   |50466d83   |50466d83  |     ✔️      |
|FLD_T1_1.MCB   |abe7cfa7   |abe7cfa7   |abe7cfa7  |     ✔️      |
|FLD_T2_0.MCB   |7d18542f   |7d18542f   |7d18542f  |     ✔️      |
|FLD_T2_1.MCB   |f3435cf3   |f3435cf3   |f3435cf3  |     ✔️      |
|FLD_T2_4.MCB   |828d327c   |828d327c   |828d327c  |     ✔️      |
|FLD_T2_A.MCB   |f20175a1   |f20175a1   |f20175a1  |     ✔️      |
|FLD_T2_D.MCB   |166f5479   |166f5479   |166f5479  |     ✔️      |
|FLD_T3_0.MCB   |42ab468b   |42ab468b   |42ab468b  |     ✔️      |
|FLD_T3_1.MCB   |ad37cb26   |ad37cb26   |ad37cb26  |     ✔️      |
|FLD_T4_0.MCB   |759a8184   |759a8184   |759a8184  |     ✔️      |
|FLD_T4_1.MCB   |5c2e1235   |5c2e1235   |5c2e1235  |     ✔️      |
|FLD_T4_2.MCB   |1ed24804   |1ed24804   |1ed24804  |     ✔️      |
|GBOMB2.MCB     |c0f370da   |c0f370da   |c0f370da  |     ✔️      |
|GERAKI.MCB     |ba3219ed   |ba3219ed   |ba3219ed  |     ✔️      |
|GRDBOMB.MCB    |a34b76b0   |a34b76b0   |a34b76b0  |     ✔️      |
|GRIGORIG.MCB   |4c4a5c95   |4c4a5c95   |4c4a5c95  |     ✔️      |
|GUSH.MCB       |1e559545   |1e559545   |1e559545  |     ✔️      |
|HANSA.MCB      |273f61e0   |273f61e0   |273f61e0  |     ✔️      |
|HEBIMUSI.MCB   |a22aa09a   |a22aa09a   |a22aa09a  |     ✔️      |
|HEBISU.MCB     |c6223a9a   |c6223a9a   |c6223a9a  |     ✔️      |
|HEBI_TUR.MCB   |e54160ed   |e54160ed   |e54160ed  |     ✔️      |
|HIDINGMP.MCB   |561183ce   |561183ce   |561183ce  |     ✔️      |
|HUNTAMP0.MCB   |3cb05feb   |3cb05feb   |3cb05feb  |     ✔️      |
|HUNTAMP1.MCB   |c1edadcd   |c1edadcd   |c1edadcd  |     ✔️      |
|HUNTDMP0.MCB   |127739fa   |127739fa   |127739fa  |     ✔️      |
|HUNTDMP1.MCB   |8d382585   |8d382585   |8d382585  |     ✔️      |
|IVASIVIA.MCB   |671e2331   |671e2331   |671e2331  |     ✔️      |
|JINKOU.MCB     |e7d9c813   |e7d9c813   |e7d9c813  |     ✔️      |
|JINKOUB5.MCB   |77985a3c   |77985a3c   |77985a3c  |     ✔️      |
|JIRO.MCB       |e3b74b22   |e3b74b22   |e3b74b22  |     ✔️      |
|JUNKMP.MCB     |888f0cce   |888f0cce   |888f0cce  |     ✔️      |
|KARA.MCB       |1e04fe6f   |1e04fe6f   |1e04fe6f  |     ✔️      |
|KARAA72.MCB    |1adb1270   |1adb1270   |1adb1270  |     ✔️      |
|KARLA.MCB      |735fa336   |735fa336   |735fa336  |     ✔️      |
|KEIKOKU.MCB    |c672d7da   |c672d7da   |c672d7da  |     ✔️      |
|KEI_BOSS.MCB   |2ef061e1   |2ef061e1   |2ef061e1  |     ✔️      |
|KHDRAGON.MCB   |3a4adc3e   |3a4adc3e   |3a4adc3e  |     ✔️      |
|KOJO.MCB       |e793edfd   |e793edfd   |e793edfd  |     ✔️      |
|KTEI.MCB       |e780532e   |e780532e   |e780532e  |     ✔️      |
|KURAGE.MCB     |8fff8d77   |8fff8d77   |8fff8d77  |     ✔️      |
|LANQUER.MCB    |97d6f8e5   |97d6f8e5   |97d6f8e5  |     ✔️      |
|LIBRAMP.MCB    |8e8d77ee   |8e8d77ee   |8e8d77ee  |     ✔️      |
|LODGEMP0.MCB   |098dca9a   |098dca9a   |098dca9a  |     ✔️      |
|LODGEMP1.MCB   |16e9a635   |16e9a635   |16e9a635  |     ✔️      |
|LOLOS.MCB      |7fd7104b   |7fd7104b   |7fd7104b  |     ✔️      |
|LSHIP.MCB      |b8bd382d   |b8bd382d   |b8bd382d  |     ✔️      |
|MASAN.MCB      |421e8148   |421e8148   |421e8148  |     ✔️      |
|MDLCHG.MCB     |b22dffea   |b22dffea   |b22dffea  |     ✔️      |
|MERN.MCB       |68a596f5   |68a596f5   |68a596f5  |     ✔️      |
|MERUKABA.MCB   |420f0090   |420f0090   |420f0090  |     ✔️      |
|MPDRAGON.MCB   |3a686c98   |3a686c98   |3a686c98  |     ✔️      |
|MSHIP.MCB      |84e32c55   |84e32c55   |84e32c55  |     ✔️      |
|MULT.MCB       |f40fa439   |f40fa439   |f40fa439  |     ✔️      |
|MUR.MCB        |a6d0f8cb   |a6d0f8cb   |a6d0f8cb  |     ✔️      |
|MZUB.MCB       |3dfbed66   |3dfbed66   |3dfbed66  |     ✔️      |
|NEW_BUM.MCB    |00e13a3d   |00e13a3d   |00e13a3d  |     ✔️      |
|NULLY.MCB      |80ce1fa0   |80ce1fa0   |80ce1fa0  |     ✔️      |
|OKAFUGU.MCB    |b2424728   |b2424728   |b2424728  |     ✔️      |
|OZL.MCB        |bb732006   |bb732006   |bb732006  |     ✔️      |
|PAET.MCB       |2612ffd7   |2612ffd7   |2612ffd7  |     ✔️      |
|PAETMP0.MCB    |12c05f3a   |12c05f3a   |12c05f3a  |     ✔️      |
|PAETMP1.MCB    |df853621   |df853621   |df853621  |     ✔️      |
|PARAORIG.MCB   |65be07b7   |65be07b7   |65be07b7  |     ✔️      |
|PGORAIAS.MCB   |60a745ce   |60a745ce   |60a745ce  |     ✔️      |
|PROBOMB.MCB    |4a54c9f1   |4a54c9f1   |4a54c9f1  |     ✔️      |
|PUP.MCB        |88d531e7   |88d531e7   |88d531e7  |     ✔️      |
|RAHAB.MCB      |57215fbf   |57215fbf   |57215fbf  |     ✔️      |
|RANDORA.MCB    |7faa5205   |7faa5205   |7faa5205  |     ✔️      |
|REUNA.MCB      |438b8a91   |438b8a91   |438b8a91  |     ✔️      |
|RIDER0.MCB     |a2571796   |a2571796   |a2571796  |     ✔️      |
|RIO.MCB        |b00fd807   |b00fd807   |b00fd807  |     ✔️      |
|ROOMTEST.MCB   |254746ea   |254746ea   |254746ea  |     ✔️      |
|RUINMP.MCB     |d55b1f7f   |d55b1f7f   |d55b1f7f  |     ✔️      |
|SABAKU02.MCB   |de876385   |de876385   |de876385  |     ✔️      |
|SABAKU04.MCB   |de876385   |de876385   |de876385  |     ✔️      |
|SABAKU_B.MCB   |3ab34361   |3ab34361   |3ab34361  |     ✔️      |
|SDON.MCB       |3deb81d9   |3deb81d9   |3deb81d9  |     ✔️      |
|SEEKMP.MCB     |fdb1d5ee   |fdb1d5ee   |fdb1d5ee  |     ✔️      |
|SEEKMP1.MCB    |1c729716   |1c729716   |1c729716  |     ✔️      |
|SHOKU.MCB      |e0f940a8   |e0f940a8   |e0f940a8  |     ✔️      |
|SHRINE.MCB     |3a5d5cea   |3a5d5cea   |3a5d5cea  |     ✔️      |
|SICKMP.MCB     |0ee0665e   |0ee0665e   |0ee0665e  |     ✔️      |
|SKJKMP.MCB     |575cbbf6   |575cbbf6   |575cbbf6  |     ✔️      |
|SLIGHT.MCB     |a1895479   |a1895479   |a1895479  |     ✔️      |
|SNB.MCB        |b4f316b3   |b4f316b3   |b4f316b3  |     ✔️      |
|SOMA.MCB       |c0b376ef   |c0b376ef   |c0b376ef  |     ✔️      |
|SOUKOMP.MCB    |cdd5c1c7   |cdd5c1c7   |cdd5c1c7  |     ✔️      |
|SOUKOMP1.MCB   |47767b76   |47767b76   |47767b76  |     ✔️      |
|SOUKOMP2.MCB   |a3de9e5f   |a3de9e5f   |a3de9e5f  |     ✔️      |
|SRA.MCB        |c031cd5e   |c031cd5e   |c031cd5e  |     ✔️      |
|STK01.MCB      |fe5dcd90   |fe5dcd90   |fe5dcd90  |     ✔️      |
|STK02.MCB      |5839a3c0   |5839a3c0   |5839a3c0  |     ✔️      |
|STK03.MCB      |65a4d0b7   |65a4d0b7   |65a4d0b7  |     ✔️      |
|STK12.MCB      |2b48ff1c   |2b48ff1c   |2b48ff1c  |     ✔️      |
|STOREMP.MCB    |5c400acb   |5c400acb   |5c400acb  |     ✔️      |
|SURFHANU.MCB   |e5c15688   |e5c15688   |e5c15688  |     ✔️      |
|TAM.MCB        |cf0b8592   |cf0b8592   |cf0b8592  |     ✔️      |
|TAMAMP.MCB     |fcf28a8b   |fcf28a8b   |fcf28a8b  |     ✔️      |
|TAMPRO.MCB     |9c256e0a   |9c256e0a   |9c256e0a  |     ✔️      |
|TAPAS.MCB      |816f56ca   |816f56ca   |816f56ca  |     ✔️      |
|TARO.MCB       |68958d68   |68958d68   |68958d68  |     ✔️      |
|TAROJIRO.MCB   |855fc869   |855fc869   |855fc869  |     ✔️      |
|TENTSMMP.MCB   |d5b096be   |d5b096be   |d5b096be  |     ✔️      |
|TGD.MCB        |3c50e66e   |3c50e66e   |3c50e66e  |     ✔️      |
|TUP.MCB        |8685f54e   |8685f54e   |8685f54e  |     ✔️      |
|URUFIRE.MCB    |78259dd5   |78259dd5   |78259dd5  |     ✔️      |
|URUGND.MCB     |014b832b   |014b832b   |014b832b  |     ✔️      |
|URUGND_B.MCB   |5f5b4caa   |5f5b4caa   |5f5b4caa  |     ✔️      |
|URUGND_M.MCB   |b18dad3f   |b18dad3f   |b18dad3f  |     ✔️      |
|URUNURI.MCB    |488bc7bc   |488bc7bc   |488bc7bc  |     ✔️      |
|URUTUP.MCB     |59138e75   |59138e75   |59138e75  |     ✔️      |
|URU_DAY.MCB    |c9b4cc75   |c9b4cc75   |c9b4cc75  |     ✔️      |
|URU_NGT.MCB    |a08d4fbe   |a08d4fbe   |a08d4fbe  |     ✔️      |
|URU_ROCK.MCB   |fb998cb8   |fb998cb8   |fb998cb8  |     ✔️      |
|URU_YUU.MCB    |488bc7bc   |488bc7bc   |488bc7bc  |     ✔️      |
|UZU.MCB        |d8f9a12e   |d8f9a12e   |d8f9a12e  |     ✔️      |
|VAJURA.MCB     |39a0459f   |39a0459f   |39a0459f  |     ✔️      |
|VALNA.MCB      |ebfb7edd   |ebfb7edd   |ebfb7edd  |     ✔️      |
|VARAHA.MCB     |f0aa516c   |f0aa516c   |f0aa516c  |     ✔️      |
|VRITRA.MCB     |f267f6b4   |f267f6b4   |f267f6b4  |     ✔️      |
|VRITRA1.MCB    |0a8375d6   |0a8375d6   |0a8375d6  |     ✔️      |
|VRITRA2.MCB    |57ec0a50   |57ec0a50   |57ec0a50  |     ✔️      |
|VW_DAIOU.MCB   |1a06bf35   |1a06bf35   |1a06bf35  |     ✔️      |
|VW_GRIG.MCB    |64a43955   |64a43955   |64a43955  |     ✔️      |
|VW_KISEI.MCB   |e0a8188f   |e0a8188f   |e0a8188f  |     ✔️      |
|VW_LAS.MCB     |d2020ec0   |d2020ec0   |d2020ec0  |     ✔️      |
|VW_MIYAB.MCB   |e4ab7093   |e4ab7093   |e4ab7093  |     ✔️      |
|VW_SU.MCB      |a500f832   |a500f832   |a500f832  |     ✔️      |
|VW_VARAH.MCB   |06f696ab   |06f696ab   |06f696ab  |     ✔️      |
|VW_VET.MCB     |d20b3fdd   |d20b3fdd   |d20b3fdd  |     ✔️      |
|VW_ZUSU.MCB    |c56b132f   |c56b132f   |c56b132f  |     ✔️      |
|WAVE.MCB       |bcdafd97   |bcdafd97   |bcdafd97  |     ✔️      |
|WORLDMAP.MCB   |481e9479   |481e9479   |481e9479  |     ✔️      |
|X_A_AB.MCB     |b9c7632a   |b9c7632a   |b9c7632a  |     ✔️      |
|X_A_AZ.MCB     |8645538c   |8645538c   |8645538c  |     ✔️      |
|X_A_BK.MCB     |67ab620b   |67ab620b   |67ab620b  |     ✔️      |
|X_A_BZ.MCB     |1a734445   |1a734445   |1a734445  |     ✔️      |
|X_A_CR.MCB     |1a0fe5e6   |1a0fe5e6   |1a0fe5e6  |     ✔️      |
|X_A_CS.MCB     |e49c0e52   |e49c0e52   |e49c0e52  |     ✔️      |
|X_A_EN.MCB     |13a0acdf   |13a0acdf   |13a0acdf  |     ✔️      |
|X_A_JB.MCB     |e55127a6   |e55127a6   |e55127a6  |     ✔️      |
|X_A_LG.MCB     |c7b52a83   |c7b52a83   |c7b52a83  |     ✔️      |
|X_A_LR.MCB     |23f0378d   |23f0378d   |23f0378d  |     ✔️      |
|X_A_MA.MCB     |452a2279   |452a2279   |452a2279  |     ✔️      |
|X_A_PR.MCB     |d7b9cf05   |d7b9cf05   |d7b9cf05  |     ✔️      |
|X_A_PT.MCB     |a3bd5409   |a3bd5409   |a3bd5409  |     ✔️      |
|X_A_QT.MCB     |532cf872   |532cf872   |532cf872  |     ✔️      |
|X_A_RB.MCB     |950845a2   |950845a2   |950845a2  |     ✔️      |
|X_A_RG.MCB     |ce8b8b8f   |ce8b8b8f   |ce8b8b8f  |     ✔️      |
|X_A_SM.MCB     |70f732ca   |70f732ca   |70f732ca  |     ✔️      |
|X_A_TA.MCB     |b3ca2a6b   |b3ca2a6b   |b3ca2a6b  |     ✔️      |
|X_A_TB.MCB     |11c72877   |11c72877   |11c72877  |     ✔️      |
|X_A_YD.MCB     |a0eba79c   |a0eba79c   |a0eba79c  |     ✔️      |
|X_A_YR.MCB     |e2bfd024   |e2bfd024   |e2bfd024  |     ✔️      |
|X_A_ZD.MCB     |b5ee4f35   |b5ee4f35   |b5ee4f35  |     ✔️      |
|X_E_BM.MCB     |2b8ccbbb   |2b8ccbbb   |2b8ccbbb  |     ✔️      |
|X_E_DM.MCB     |6a07e09c   |6a07e09c   |6a07e09c  |     ✔️      |
|X_F_AB.MCB     |44a91171   |44a91171   |44a91171  |     ✔️      |
|X_F_LG.MCB     |afc04cc1   |afc04cc1   |afc04cc1  |     ✔️      |
|X_F_LR.MCB     |4c5c9d6f   |4c5c9d6f   |4c5c9d6f  |     ✔️      |
|X_F_PR.MCB     |b5c36eec   |b5c36eec   |b5c36eec  |     ✔️      |
|X_F_QT.MCB     |0958c4ca   |0958c4ca   |0958c4ca  |     ✔️      |
|X_F_RB.MCB     |451c5c9b   |451c5c9b   |451c5c9b  |     ✔️      |
|X_F_SM.MCB     |323ad9fc   |323ad9fc   |323ad9fc  |     ✔️      |
|X_G_AZ.MCB     |b8e00265   |b8e00265   |b8e00265  |     ✔️      |
|X_G_LG.MCB     |be92fe14   |be92fe14   |be92fe14  |     ✔️      |
|X_X_EN.MCB     |0528d86f   |0528d86f   |0528d86f  |     ✔️      |
|X_X_LG.MCB     |1fe919b6   |1fe919b6   |1fe919b6  |     ✔️      |
|X_X_YD.MCB     |43219f75   |43219f75   |43219f75  |     ✔️      |
|ZOAHMP0D.MCB   |e1a4e1dd   |e1a4e1dd   |e1a4e1dd  |     ✔️      |
|ZOAHMP0N.MCB   |c13695e1   |c13695e1   |c13695e1  |     ✔️      |
|ZOAHMP1D.MCB   |e287d915   |e287d915   |e287d915  |     ✔️      |
|ZOAHMP1N.MCB   |85f55517   |85f55517   |85f55517  |     ✔️      |
|ZOAHOBJ0.MCB   |2a698064   |2a698064   |2a698064  |     ✔️      |
|ZOAHOBJ1.MCB   |1d35569d   |1d35569d   |1d35569d  |     ✔️      |
|ZOAH_OW.MCB    |fe5484e9   |fe5484e9   |fe5484e9  |     ✔️      |
|ZUSU.MCB       |086e788c   |086e788c   |086e788c  |     ✔️      |
|Z_A_AR.MCB     |83584dfe   |83584dfe   |83584dfe  |     ✔️      |
|Z_A_AY.MCB     |f19dc02b   |f19dc02b   |f19dc02b  |     ✔️      |
|Z_A_DM.MCB     |3737cc0d   |3737cc0d   |3737cc0d  |     ✔️      |
|Z_A_EG.MCB     |b7a510b4   |b7a510b4   |b7a510b4  |     ✔️      |
|Z_A_EK.MCB     |bbf8e3d2   |bbf8e3d2   |bbf8e3d2  |     ✔️      |
|Z_A_FE.MCB     |d6fca83e   |d6fca83e   |d6fca83e  |     ✔️      |
|Z_A_GS.MCB     |3bf53e16   |3bf53e16   |3bf53e16  |     ✔️      |
|Z_A_JR.MCB     |2efebe94   |2efebe94   |2efebe94  |     ✔️      |
|Z_A_KH.MCB     |47e2438c   |47e2438c   |47e2438c  |     ✔️      |
|Z_A_LD.MCB     |4582dc17   |4582dc17   |4582dc17  |     ✔️      |
|Z_A_RD.MCB     |b26d3e9c   |b26d3e9c   |b26d3e9c  |     ✔️      |
|Z_A_SF.MCB     |9c4fa700   |9c4fa700   |9c4fa700  |     ✔️      |
|Z_A_SR.MCB     |5a1717fc   |5a1717fc   |5a1717fc  |     ✔️      |
|Z_A_VZ.MCB     |87649c34   |87649c34   |87649c34  |     ✔️      |
|Z_B_RD.MCB     |44a5544a   |44a5544a   |44a5544a  |     ✔️      |
|Z_E_AY.MCB     |49bfad1a   |49bfad1a   |49bfad1a  |     ✔️      |
|Z_E_GS.MCB     |62ae31fc   |62ae31fc   |62ae31fc  |     ✔️      |
|Z_F_AY.MCB     |8483f1f2   |8483f1f2   |8483f1f2  |     ✔️      |
|Z_F_FE.MCB     |3699bc90   |3699bc90   |3699bc90  |     ✔️      |
|B_A3_02.PCM    |0c3fbc96   |0c3fbc96   |0c3fbc96  |     ✔️      |
|B_A5_00.PCM    |d896f7aa   |d896f7aa   |d896f7aa  |     ✔️      |
|B_A5_01.PCM    |83b2f611   |83b2f611   |83b2f611  |     ✔️      |
|B_A5_03.PCM    |0def2256   |0def2256   |0def2256  |     ✔️      |
|B_A5_06.PCM    |306935e9   |306935e9   |306935e9  |     ✔️      |
|B_A5_07.PCM    |7f35e978   |7f35e978   |7f35e978  |     ✔️      |
|B_A5_08.PCM    |b0922e91   |b0922e91   |b0922e91  |     ✔️      |
|B_A5_09.PCM    |bc379c09   |bc379c09   |bc379c09  |     ✔️      |
|B_A5_18.PCM    |0e4136cd   |0e4136cd   |0e4136cd  |     ✔️      |
|B_A5_20.PCM    |2233bea8   |2233bea8   |2233bea8  |     ✔️      |
|B_A5_21.PCM    |7ef43fd5   |7ef43fd5   |7ef43fd5  |     ✔️      |
|B_A5_22.PCM    |7bae9bb3   |7bae9bb3   |7bae9bb3  |     ✔️      |
|B_A5_28.PCM    |4aed1d22   |4aed1d22   |4aed1d22  |     ✔️      |
|B_A5_29.PCM    |7b7a8a02   |7b7a8a02   |7b7a8a02  |     ✔️      |
|B_A5_33.PCM    |85252112   |85252112   |85252112  |     ✔️      |
|B_A5_34.PCM    |35c7bbcb   |35c7bbcb   |35c7bbcb  |     ✔️      |
|B_A5_35.PCM    |0deec8e7   |0deec8e7   |0deec8e7  |     ✔️      |
|B_A5_38.PCM    |57cdbb14   |57cdbb14   |57cdbb14  |     ✔️      |
|B_A5_39.PCM    |9fca2eef   |9fca2eef   |9fca2eef  |     ✔️      |
|B_A5_40.PCM    |21208c04   |21208c04   |21208c04  |     ✔️      |
|B_A5_41.PCM    |51552ec3   |51552ec3   |51552ec3  |     ✔️      |
|B_A5_42.PCM    |7657473e   |7657473e   |7657473e  |     ✔️      |
|B_A5_43.PCM    |d1eab09c   |d1eab09c   |d1eab09c  |     ✔️      |
|B_A5_44.PCM    |840d6230   |840d6230   |840d6230  |     ✔️      |
|B_A5_45.PCM    |526f884a   |526f884a   |526f884a  |     ✔️      |
|B_A5_46.PCM    |a12a5952   |a12a5952   |a12a5952  |     ✔️      |
|B_A5_47.PCM    |4267a641   |4267a641   |4267a641  |     ✔️      |
|B_A5_48.PCM    |e8b07660   |e8b07660   |e8b07660  |     ✔️      |
|B_A5_49.PCM    |31f7c8d3   |31f7c8d3   |31f7c8d3  |     ✔️      |
|B_A7_08.PCM    |e4f43070   |e4f43070   |e4f43070  |     ✔️      |
|B_A7_11.PCM    |bb700c75   |bb700c75   |bb700c75  |     ✔️      |
|B_A7_13.PCM    |7817a0d8   |7817a0d8   |7817a0d8  |     ✔️      |
|B_A7_16.PCM    |de84200b   |de84200b   |de84200b  |     ✔️      |
|B_A7_22.PCM    |f088d086   |f088d086   |f088d086  |     ✔️      |
|B_A7_23.PCM    |957240ba   |957240ba   |957240ba  |     ✔️      |
|B_A7_24.PCM    |61431ead   |61431ead   |61431ead  |     ✔️      |
|B_A7_25.PCM    |6d878ef4   |6d878ef4   |6d878ef4  |     ✔️      |
|B_A7_26.PCM    |7d3a0fb4   |7d3a0fb4   |7d3a0fb4  |     ✔️      |
|B_A7_27.PCM    |b2622f94   |b2622f94   |b2622f94  |     ✔️      |
|B_A7_28.PCM    |c8605402   |c8605402   |c8605402  |     ✔️      |
|B_A7_29.PCM    |af25eb71   |af25eb71   |af25eb71  |     ✔️      |
|B_A7_30.PCM    |61820133   |61820133   |61820133  |     ✔️      |
|B_A7_31.PCM    |fb2c1a96   |fb2c1a96   |fb2c1a96  |     ✔️      |
|B_A7_32.PCM    |55af050a   |55af050a   |55af050a  |     ✔️      |
|B_A7_33.PCM    |7518ba55   |7518ba55   |7518ba55  |     ✔️      |
|B_A7_34.PCM    |267126d8   |267126d8   |267126d8  |     ✔️      |
|B_A7_35.PCM    |d68dfa74   |d68dfa74   |d68dfa74  |     ✔️      |
|B_A7_36.PCM    |9b8b3c05   |9b8b3c05   |9b8b3c05  |     ✔️      |
|B_A7_37.PCM    |7b8f99ec   |7b8f99ec   |7b8f99ec  |     ✔️      |
|B_A7_38.PCM    |e9580176   |e9580176   |e9580176  |     ✔️      |
|B_A7_39.PCM    |dfd11676   |dfd11676   |dfd11676  |     ✔️      |
|B_A7_40.PCM    |93ba166c   |93ba166c   |93ba166c  |     ✔️      |
|B_A7_41.PCM    |119bf668   |119bf668   |119bf668  |     ✔️      |
|B_A7_42.PCM    |2793ca25   |2793ca25   |2793ca25  |     ✔️      |
|B_A7_43.PCM    |f64818e2   |f64818e2   |f64818e2  |     ✔️      |
|B_A7_44.PCM    |96ea7d3e   |96ea7d3e   |96ea7d3e  |     ✔️      |
|B_A7_45.PCM    |a1c0b251   |a1c0b251   |a1c0b251  |     ✔️      |
|B_A7_46.PCM    |099b3752   |099b3752   |099b3752  |     ✔️      |
|B_A7_47.PCM    |961f7c36   |961f7c36   |961f7c36  |     ✔️      |
|B_A7_48.PCM    |a25e5690   |a25e5690   |a25e5690  |     ✔️      |
|EV01_1.PCM     |e5afa596   |e5afa596   |e5afa596  |     ✔️      |
|EV01_2.PCM     |50c7a83c   |50c7a83c   |50c7a83c  |     ✔️      |
|EV01_3.PCM     |c7d6eb5f   |c7d6eb5f   |c7d6eb5f  |     ✔️      |
|EV01_4.PCM     |e53e53eb   |e53e53eb   |e53e53eb  |     ✔️      |
|EV01_5.PCM     |9a688e74   |9a688e74   |9a688e74  |     ✔️      |
|EV01_6.PCM     |017c7e39   |017c7e39   |017c7e39  |     ✔️      |
|EV02_1.PCM     |3f8feee9   |3f8feee9   |3f8feee9  |     ✔️      |
|EV02_2.PCM     |bafdfd24   |bafdfd24   |bafdfd24  |     ✔️      |
|EV02_3.PCM     |c5a70ce6   |c5a70ce6   |c5a70ce6  |     ✔️      |
|EV03_1.PCM     |55286790   |55286790   |55286790  |     ✔️      |
|EV04_1.PCM     |7d124624   |7d124624   |7d124624  |     ✔️      |
|EV04_2.PCM     |4791b81b   |4791b81b   |4791b81b  |     ✔️      |
|EV04_3.PCM     |42a5408c   |42a5408c   |42a5408c  |     ✔️      |
|EV04_4.PCM     |bcfab9d8   |bcfab9d8   |bcfab9d8  |     ✔️      |
|EV04_5.PCM     |0f528934   |0f528934   |0f528934  |     ✔️      |
|EV18_1.PCM     |b3d99ae3   |b3d99ae3   |b3d99ae3  |     ✔️      |
|EV18_2.PCM     |6d76a521   |6d76a521   |6d76a521  |     ✔️      |
|EV18_3.PCM     |8241f7d4   |8241f7d4   |8241f7d4  |     ✔️      |
|EV30_1.PCM     |44341d5d   |44341d5d   |44341d5d  |     ✔️      |
|EV30_2.PCM     |61012e51   |61012e51   |61012e51  |     ✔️      |
|EV30_3.PCM     |b95fb148   |b95fb148   |b95fb148  |     ✔️      |
|EV30_4.PCM     |a6e84031   |a6e84031   |a6e84031  |     ✔️      |
|EV30_5.PCM     |d174919f   |d174919f   |d174919f  |     ✔️      |
|F_A5_00.PCM    |2ac330b1   |2ac330b1   |2ac330b1  |     ✔️      |
|F_A5_01.PCM    |11d18202   |11d18202   |11d18202  |     ✔️      |
|F_A5_02.PCM    |a78b8483   |a78b8483   |a78b8483  |     ✔️      |
|F_A5_03.PCM    |e814d44f   |e814d44f   |e814d44f  |     ✔️      |
|F_A5_04.PCM    |adf90d61   |adf90d61   |adf90d61  |     ✔️      |
|F_A5_05.PCM    |fdaa1156   |fdaa1156   |fdaa1156  |     ✔️      |
|F_A5_06.PCM    |672d009b   |672d009b   |672d009b  |     ✔️      |
|F_A5_07.PCM    |6e94b593   |6e94b593   |6e94b593  |     ✔️      |
|F_A5_08.PCM    |f4b89b67   |f4b89b67   |f4b89b67  |     ✔️      |
|F_A5_09.PCM    |e926390e   |e926390e   |e926390e  |     ✔️      |
|F_A5_10.PCM    |e4d30e0a   |e4d30e0a   |e4d30e0a  |     ✔️      |
|F_A5_11.PCM    |b50be6a7   |b50be6a7   |b50be6a7  |     ✔️      |
|F_A5_12.PCM    |4c22798c   |4c22798c   |4c22798c  |     ✔️      |
|F_A5_13.PCM    |0f5b3f31   |0f5b3f31   |0f5b3f31  |     ✔️      |
|F_A5_14.PCM    |b20d0a43   |b20d0a43   |b20d0a43  |     ✔️      |
|F_A5_15.PCM    |c8ccd0c9   |c8ccd0c9   |c8ccd0c9  |     ✔️      |
|F_A5_16.PCM    |20aa269d   |20aa269d   |20aa269d  |     ✔️      |
|F_A5_17.PCM    |9f313c4b   |9f313c4b   |9f313c4b  |     ✔️      |
|F_A5_18.PCM    |129ecc23   |129ecc23   |129ecc23  |     ✔️      |
|F_A5_19.PCM    |ff11b6f7   |ff11b6f7   |ff11b6f7  |     ✔️      |
|F_A5_20.PCM    |9208e617   |9208e617   |9208e617  |     ✔️      |
|F_A5_21.PCM    |957623df   |957623df   |957623df  |     ✔️      |
|T_AY_001.PCM   |737d1c85   |737d1c85   |737d1c85  |     ✔️      |
|T_AY_002.PCM   |ba8b849e   |ba8b849e   |ba8b849e  |     ✔️      |
|T_AY_003.PCM   |c9aa7a31   |c9aa7a31   |c9aa7a31  |     ✔️      |
|T_AY_004.PCM   |fcf6a0a6   |fcf6a0a6   |fcf6a0a6  |     ✔️      |
|T_AY_005.PCM   |d56ef340   |d56ef340   |d56ef340  |     ✔️      |
|T_AY_006.PCM   |fc164a8a   |fc164a8a   |fc164a8a  |     ✔️      |
|T_AY_007.PCM   |6697a714   |6697a714   |6697a714  |     ✔️      |
|T_AY_008.PCM   |3c073f7b   |3c073f7b   |3c073f7b  |     ✔️      |
|T_AY_009.PCM   |374c54af   |374c54af   |374c54af  |     ✔️      |
|T_AY_010.PCM   |c642e115   |c642e115   |c642e115  |     ✔️      |
|T_BK_001.PCM   |87548dd8   |87548dd8   |87548dd8  |     ✔️      |
|T_BK_002.PCM   |5fa006dd   |5fa006dd   |5fa006dd  |     ✔️      |
|T_BK_003.PCM   |d83cca68   |d83cca68   |d83cca68  |     ✔️      |
|T_BK_020.PCM   |082ec82b   |082ec82b   |082ec82b  |     ✔️      |
|T_BK_021.PCM   |920e676e   |920e676e   |920e676e  |     ✔️      |
|T_BK_022.PCM   |2bba8396   |2bba8396   |2bba8396  |     ✔️      |
|T_BK_023.PCM   |5ac297bb   |5ac297bb   |5ac297bb  |     ✔️      |
|T_BK_024.PCM   |e77a78af   |e77a78af   |e77a78af  |     ✔️      |
|T_BK_025.PCM   |da0afd8d   |da0afd8d   |da0afd8d  |     ✔️      |
|T_BK_026.PCM   |361bfb9e   |361bfb9e   |361bfb9e  |     ✔️      |
|T_BK_027.PCM   |dcc16c12   |dcc16c12   |dcc16c12  |     ✔️      |
|T_BK_301.PCM   |6408b922   |6408b922   |6408b922  |     ✔️      |
|T_BK_302.PCM   |66fc99ab   |66fc99ab   |66fc99ab  |     ✔️      |
|T_BK_303.PCM   |796eb187   |796eb187   |796eb187  |     ✔️      |
|T_BK_304.PCM   |2e1749d8   |2e1749d8   |2e1749d8  |     ✔️      |
|T_BK_305.PCM   |c3efb5d4   |c3efb5d4   |c3efb5d4  |     ✔️      |
|T_BK_307.PCM   |457e1b5e   |457e1b5e   |457e1b5e  |     ✔️      |
|T_BK_308.PCM   |9ed3f7f6   |9ed3f7f6   |9ed3f7f6  |     ✔️      |
|T_BK_309.PCM   |93bfdc22   |93bfdc22   |93bfdc22  |     ✔️      |
|T_BK_310.PCM   |8213bc2a   |8213bc2a   |8213bc2a  |     ✔️      |
|T_EG_007.PCM   |ba5e2057   |ba5e2057   |ba5e2057  |     ✔️      |
|T_EG_008.PCM   |33333559   |33333559   |33333559  |     ✔️      |
|T_EG_009.PCM   |abbb2caf   |abbb2caf   |abbb2caf  |     ✔️      |
|T_EG_010.PCM   |d250b983   |d250b983   |d250b983  |     ✔️      |
|T_EG_011.PCM   |c21f6c02   |c21f6c02   |c21f6c02  |     ✔️      |
|T_EG_012.PCM   |2bf71f18   |2bf71f18   |2bf71f18  |     ✔️      |
|T_EG_013.PCM   |34f70105   |34f70105   |34f70105  |     ✔️      |
|T_EG_023.PCM   |2327406f   |2327406f   |2327406f  |     ✔️      |
|T_EG_024.PCM   |a44d5b1b   |a44d5b1b   |a44d5b1b  |     ✔️      |
|T_EG_025.PCM   |45ba7805   |45ba7805   |45ba7805  |     ✔️      |
|T_EG_029.PCM   |8b4d6fee   |8b4d6fee   |8b4d6fee  |     ✔️      |
|T_EG_060.PCM   |e6995c89   |e6995c89   |e6995c89  |     ✔️      |
|T_EG_061.PCM   |1d9471b5   |1d9471b5   |1d9471b5  |     ✔️      |
|T_EG_062.PCM   |89b4a4a6   |89b4a4a6   |89b4a4a6  |     ✔️      |
|T_EG_063.PCM   |13626032   |13626032   |13626032  |     ✔️      |
|T_EG_064.PCM   |0b5de1fe   |0b5de1fe   |0b5de1fe  |     ✔️      |
|T_EG_065.PCM   |b1a55574   |b1a55574   |b1a55574  |     ✔️      |
|T_EG_066.PCM   |a2b4e162   |a2b4e162   |a2b4e162  |     ✔️      |
|T_EG_070.PCM   |4ba945ab   |4ba945ab   |4ba945ab  |     ✔️      |
|T_EG_181.PCM   |0bda08c0   |0bda08c0   |0bda08c0  |     ✔️      |
|T_EG_182.PCM   |69b0eec3   |69b0eec3   |69b0eec3  |     ✔️      |
|T_EG_183.PCM   |285af43b   |285af43b   |285af43b  |     ✔️      |
|T_EG_310.PCM   |9fbf4fe7   |9fbf4fe7   |9fbf4fe7  |     ✔️      |
|T_EG_311.PCM   |4c986b90   |4c986b90   |4c986b90  |     ✔️      |
|T_EG_312.PCM   |c02eb6fb   |c02eb6fb   |c02eb6fb  |     ✔️      |
|T_EG_313.PCM   |83d01419   |83d01419   |83d01419  |     ✔️      |
|T_EG_314.PCM   |8608596e   |8608596e   |8608596e  |     ✔️      |
|T_EG_315.PCM   |6267c010   |6267c010   |6267c010  |     ✔️      |
|T_EG_316.PCM   |52c8e403   |52c8e403   |52c8e403  |     ✔️      |
|T_EG_317.PCM   |c1aa5520   |c1aa5520   |c1aa5520  |     ✔️      |
|T_EG_318.PCM   |4fdd7984   |4fdd7984   |4fdd7984  |     ✔️      |
|T_EG_340.PCM   |54e0b212   |54e0b212   |54e0b212  |     ✔️      |
|T_EG_341.PCM   |c245d77e   |c245d77e   |c245d77e  |     ✔️      |
|T_EK_001.PCM   |0c06d6ca   |0c06d6ca   |0c06d6ca  |     ✔️      |
|T_EK_002.PCM   |ca6a0304   |ca6a0304   |ca6a0304  |     ✔️      |
|T_EK_003.PCM   |b092d020   |b092d020   |b092d020  |     ✔️      |
|T_EK_004.PCM   |ab270ba6   |ab270ba6   |ab270ba6  |     ✔️      |
|T_EK_005.PCM   |cbd1578a   |cbd1578a   |cbd1578a  |     ✔️      |
|T_EK_006.PCM   |4ea8a054   |4ea8a054   |4ea8a054  |     ✔️      |
|T_FE_001.PCM   |f41c748c   |f41c748c   |f41c748c  |     ✔️      |
|T_FE_002.PCM   |5e896e44   |5e896e44   |5e896e44  |     ✔️      |
|T_FE_003.PCM   |a69e80f3   |a69e80f3   |a69e80f3  |     ✔️      |
|T_FE_004.PCM   |e5be6b71   |e5be6b71   |e5be6b71  |     ✔️      |
|T_FE_005.PCM   |46730009   |46730009   |46730009  |     ✔️      |
|T_FE_006.PCM   |7cf7ca34   |7cf7ca34   |7cf7ca34  |     ✔️      |
|T_FE_007.PCM   |3d2dec78   |3d2dec78   |3d2dec78  |     ✔️      |
|T_FE_008.PCM   |f717e942   |f717e942   |f717e942  |     ✔️      |
|T_FE_009.PCM   |6bf22218   |6bf22218   |6bf22218  |     ✔️      |
|T_FE_047.PCM   |3c1e8ecc   |3c1e8ecc   |3c1e8ecc  |     ✔️      |
|T_FE_048.PCM   |79b11a9a   |79b11a9a   |79b11a9a  |     ✔️      |
|T_FE_049.PCM   |d0059fed   |d0059fed   |d0059fed  |     ✔️      |
|T_FE_050.PCM   |97cbe4de   |97cbe4de   |97cbe4de  |     ✔️      |
|T_FE_051.PCM   |5a090dd1   |5a090dd1   |5a090dd1  |     ✔️      |
|T_FE_052.PCM   |7067f281   |7067f281   |7067f281  |     ✔️      |
|T_GS_033.PCM   |2721fcb2   |2721fcb2   |2721fcb2  |     ✔️      |
|T_GS_034.PCM   |cd1572d4   |cd1572d4   |cd1572d4  |     ✔️      |
|T_GS_035.PCM   |d9179c06   |d9179c06   |d9179c06  |     ✔️      |
|T_GS_036.PCM   |37fa26d0   |37fa26d0   |37fa26d0  |     ✔️      |
|T_GS_303.PCM   |aafb574f   |aafb574f   |aafb574f  |     ✔️      |
|T_GS_304.PCM   |f8cc689b   |f8cc689b   |f8cc689b  |     ✔️      |
|T_GS_305.PCM   |a18b4a20   |a18b4a20   |a18b4a20  |     ✔️      |
|T_GS_306.PCM   |0c53e70c   |0c53e70c   |0c53e70c  |     ✔️      |
|T_GS_307.PCM   |aad2ed3f   |aad2ed3f   |aad2ed3f  |     ✔️      |
|T_GS_308.PCM   |8a6321f5   |8a6321f5   |8a6321f5  |     ✔️      |
|T_GS_309.PCM   |c056c4f1   |c056c4f1   |c056c4f1  |     ✔️      |
|T_GS_310.PCM   |3d22c7b8   |3d22c7b8   |3d22c7b8  |     ✔️      |
|T_GS_311.PCM   |11a29aa1   |11a29aa1   |11a29aa1  |     ✔️      |
|T_GS_312.PCM   |e761256f   |e761256f   |e761256f  |     ✔️      |
|T_GS_313.PCM   |ed85b190   |ed85b190   |ed85b190  |     ✔️      |
|T_GS_314.PCM   |fc959c9b   |fc959c9b   |fc959c9b  |     ✔️      |
|T_GS_315.PCM   |d0e1b25b   |d0e1b25b   |d0e1b25b  |     ✔️      |
|T_GS_316.PCM   |58c59b6b   |58c59b6b   |58c59b6b  |     ✔️      |
|T_GS_317.PCM   |e176d161   |e176d161   |e176d161  |     ✔️      |
|T_GS_318.PCM   |edbe649b   |edbe649b   |edbe649b  |     ✔️      |
|T_GS_319.PCM   |2a3db039   |2a3db039   |2a3db039  |     ✔️      |
|T_GS_320.PCM   |ebff47c2   |ebff47c2   |ebff47c2  |     ✔️      |
|T_GS_321.PCM   |01a18f29   |01a18f29   |01a18f29  |     ✔️      |
|T_GS_322.PCM   |e6b12272   |e6b12272   |e6b12272  |     ✔️      |
|T_GS_323.PCM   |fc68ad9a   |fc68ad9a   |fc68ad9a  |     ✔️      |
|T_GS_324.PCM   |9088e2ad   |9088e2ad   |9088e2ad  |     ✔️      |
|T_GS_325.PCM   |67d872d7   |67d872d7   |67d872d7  |     ✔️      |
|T_GS_326.PCM   |587ead44   |587ead44   |587ead44  |     ✔️      |
|T_GS_327.PCM   |559a16c6   |559a16c6   |559a16c6  |     ✔️      |
|T_GS_328.PCM   |f8c287a2   |f8c287a2   |f8c287a2  |     ✔️      |
|T_GS_329.PCM   |d322a7dc   |d322a7dc   |d322a7dc  |     ✔️      |
|T_GS_330.PCM   |336c5b13   |336c5b13   |336c5b13  |     ✔️      |
|T_GS_331.PCM   |3edd3af8   |3edd3af8   |3edd3af8  |     ✔️      |
|T_GS_332.PCM   |02b628bd   |02b628bd   |02b628bd  |     ✔️      |
|T_GS_333.PCM   |9399be06   |9399be06   |9399be06  |     ✔️      |
|T_GS_334.PCM   |618a47fa   |618a47fa   |618a47fa  |     ✔️      |
|T_GS_335.PCM   |2e1f2ef0   |2e1f2ef0   |2e1f2ef0  |     ✔️      |
|T_GS_336.PCM   |f950dab1   |f950dab1   |f950dab1  |     ✔️      |
|T_GS_337.PCM   |c2dcca83   |c2dcca83   |c2dcca83  |     ✔️      |
|T_GS_349.PCM   |6d10e048   |6d10e048   |6d10e048  |     ✔️      |
|T_KH_001.PCM   |136103bf   |136103bf   |136103bf  |     ✔️      |
|T_KH_002.PCM   |ab4eee68   |ab4eee68   |ab4eee68  |     ✔️      |
|T_KH_003.PCM   |292ba6c7   |292ba6c7   |292ba6c7  |     ✔️      |
|T_KH_004.PCM   |ec3ba08a   |ec3ba08a   |ec3ba08a  |     ✔️      |
|T_KH_008.PCM   |b8007222   |b8007222   |b8007222  |     ✔️      |
|T_KH_009.PCM   |8388facd   |8388facd   |8388facd  |     ✔️      |
|T_KH_010.PCM   |839ab70d   |839ab70d   |839ab70d  |     ✔️      |
|T_KH_011.PCM   |3fd69624   |3fd69624   |3fd69624  |     ✔️      |
|T_KH_012.PCM   |585b61a2   |585b61a2   |585b61a2  |     ✔️      |
|T_KH_013.PCM   |01ae095f   |01ae095f   |01ae095f  |     ✔️      |
|T_KH_014.PCM   |0962fa36   |0962fa36   |0962fa36  |     ✔️      |
|T_KH_015.PCM   |076afb37   |076afb37   |076afb37  |     ✔️      |
|T_KH_016.PCM   |7fc46082   |7fc46082   |7fc46082  |     ✔️      |
|T_KH_017.PCM   |1321ff32   |1321ff32   |1321ff32  |     ✔️      |
|T_KH_018.PCM   |88379727   |88379727   |88379727  |     ✔️      |
|T_KH_019.PCM   |8b4ce797   |8b4ce797   |8b4ce797  |     ✔️      |
|T_KH_020.PCM   |e8a92d01   |e8a92d01   |e8a92d01  |     ✔️      |
|T_KH_021.PCM   |9eae758c   |9eae758c   |9eae758c  |     ✔️      |
|T_KH_022.PCM   |81acab72   |81acab72   |81acab72  |     ✔️      |
|T_KH_023.PCM   |e4894fa8   |e4894fa8   |e4894fa8  |     ✔️      |
|T_KH_301.PCM   |270eab51   |270eab51   |270eab51  |     ✔️      |
|T_KH_302.PCM   |5f6b9d63   |5f6b9d63   |5f6b9d63  |     ✔️      |
|T_KH_303.PCM   |9a9b749c   |9a9b749c   |9a9b749c  |     ✔️      |
|T_KH_304.PCM   |020473a8   |020473a8   |020473a8  |     ✔️      |
|T_LR_001.PCM   |24c73b2d   |24c73b2d   |24c73b2d  |     ✔️      |
|T_LR_002.PCM   |956300b9   |956300b9   |956300b9  |     ✔️      |
|T_LR_003.PCM   |1d92905e   |1d92905e   |1d92905e  |     ✔️      |
|T_LR_004.PCM   |1d3b6092   |1d3b6092   |1d3b6092  |     ✔️      |
|T_LR_005.PCM   |054dfdef   |054dfdef   |054dfdef  |     ✔️      |
|T_LR_006.PCM   |1ddf3f56   |1ddf3f56   |1ddf3f56  |     ✔️      |
|T_LR_007.PCM   |0c60e817   |0c60e817   |0c60e817  |     ✔️      |
|T_LR_008.PCM   |41c5edb8   |41c5edb8   |41c5edb8  |     ✔️      |
|T_LR_009.PCM   |89704bd4   |89704bd4   |89704bd4  |     ✔️      |
|T_LR_010.PCM   |2ae2b570   |2ae2b570   |2ae2b570  |     ✔️      |
|T_LR_011.PCM   |01b7a9de   |01b7a9de   |01b7a9de  |     ✔️      |
|T_LR_012.PCM   |1a9a2b13   |1a9a2b13   |1a9a2b13  |     ✔️      |
|T_LR_013.PCM   |0d9cb1f4   |0d9cb1f4   |0d9cb1f4  |     ✔️      |
|T_LR_014.PCM   |a3e83a4c   |a3e83a4c   |a3e83a4c  |     ✔️      |
|T_LR_015.PCM   |bca15361   |bca15361   |bca15361  |     ✔️      |
|T_LR_016.PCM   |cb224e93   |cb224e93   |cb224e93  |     ✔️      |
|T_LR_017.PCM   |875917b1   |875917b1   |875917b1  |     ✔️      |
|AJITOSCR.PNB   |b1adfe07   |b1adfe07   |b1adfe07  |     ✔️      |
|AJITSCN1.PNB   |0838f016   |0838f016   |0838f016  |     ✔️      |
|AJITSCN2.PNB   |0838f016   |0838f016   |0838f016  |     ✔️      |
|BNS_ANTI.PNB   |4111638b   |4111638b   |4111638b  |     ✔️      |
|BNS_D5.PNB     |10ab0e92   |10ab0e92   |10ab0e92  |     ✔️      |
|BNS_EF01.PNB   |28c81661   |28c81661   |28c81661  |     ✔️      |
|BNS_EF02.PNB   |dba583ae   |dba583ae   |dba583ae  |     ✔️      |
|BNS_EF03.PNB   |dba583ae   |dba583ae   |dba583ae  |     ✔️      |
|BNS_EF04.PNB   |9ac52608   |9ac52608   |9ac52608  |     ✔️      |
|BNS_EF05.PNB   |dba583ae   |dba583ae   |dba583ae  |     ✔️      |
|BNS_EF06.PNB   |28c81661   |28c81661   |28c81661  |     ✔️      |
|BNS_EF07.PNB   |dba583ae   |dba583ae   |dba583ae  |     ✔️      |
|BNS_EF08.PNB   |28c81661   |28c81661   |28c81661  |     ✔️      |
|BNS_EF09.PNB   |c9b88657   |c9b88657   |c9b88657  |     ✔️      |
|BRS_ANTI.PNB   |b1f114e2   |b1f114e2   |b1f114e2  |     ✔️      |
|CAMPSCR0.PNB   |15cf9383   |15cf9383   |15cf9383  |     ✔️      |
|CAMPSCR1.PNB   |47223d11   |47223d11   |47223d11  |     ✔️      |
|CAMPSCR2.PNB   |034cf1cc   |034cf1cc   |034cf1cc  |     ✔️      |
|CAMPSCR3.PNB   |5878e12b   |5878e12b   |5878e12b  |     ✔️      |
|CAMPSCR4.PNB   |aa0e35b8   |aa0e35b8   |aa0e35b8  |     ✔️      |
|CAMPSCR5.PNB   |83905aef   |83905aef   |83905aef  |     ✔️      |
|CAMPSCR6.PNB   |dfed89cf   |dfed89cf   |dfed89cf  |     ✔️      |
|CAMPSCR7.PNB   |dac5f4bf   |dac5f4bf   |dac5f4bf  |     ✔️      |
|CARASCR0.PNB   |c11e7f75   |c11e7f75   |c11e7f75  |     ✔️      |
|CARASCR1.PNB   |b0b06ac4   |b0b06ac4   |b0b06ac4  |     ✔️      |
|CARASCR2.PNB   |3499fc55   |3499fc55   |3499fc55  |     ✔️      |
|CARASCR3.PNB   |f458a941   |f458a941   |f458a941  |     ✔️      |
|CARASCR4.PNB   |c345dad4   |c345dad4   |c345dad4  |     ✔️      |
|CARASCR5.PNB   |78ed6a2b   |78ed6a2b   |78ed6a2b  |     ✔️      |
|CHANGE.PNB**   |8edcacad   |3fd8d82e   |3fd8d82e  |  Jap!=Eng  |
|CHANGE2.PNB    |e0c09b63   |e0c09b63   |e0c09b63  |     ✔️      |
|CHANGE3.PNB    |e0c09b63   |e0c09b63   |e0c09b63  |     ✔️      |
|CHANGE4.PNB    |e0c09b63   |e0c09b63   |e0c09b63  |     ✔️      |
|DYURA00.PNB    |217f6199   |217f6199   |217f6199  |     ✔️      |
|DYURA01.PNB    |7168296e   |7168296e   |7168296e  |     ✔️      |
|DYURA02.PNB    |d90b98a6   |d90b98a6   |d90b98a6  |     ✔️      |
|DYURA03.PNB    |15ad3fdb   |15ad3fdb   |15ad3fdb  |     ✔️      |
|DYURA04.PNB    |17d0acdf   |17d0acdf   |17d0acdf  |     ✔️      |
|EVT021.PNB     |d412c4b1   |d412c4b1   |d412c4b1  |     ✔️      |
|EVT024N.PNB    |c4a572d0   |c4a572d0   |c4a572d0  |     ✔️      |
|EVT078N.PNB    |80038d66   |80038d66   |80038d66  |     ✔️      |
|EXCA_SCR.PNB   |d42987a0   |d42987a0   |d42987a0  |     ✔️      |
|FNS_A3_0.PNB   |ee640b4a   |ee640b4a   |ee640b4a  |     ✔️      |
|FNS_A5_0.PNB   |ff9d6400   |ff9d6400   |ff9d6400  |     ✔️      |
|FNS_A5_7.PNB   |506ada59   |506ada59   |506ada59  |     ✔️      |
|FNS_A7_0.PNB   |a81a0d20   |a81a0d20   |a81a0d20  |     ✔️      |
|FNS_A7_1.PNB   |7aadd8da   |7aadd8da   |7aadd8da  |     ✔️      |
|FNS_A7_2.PNB   |44215d0e   |44215d0e   |44215d0e  |     ✔️      |
|FNS_B2_1.PNB   |05afd9ec   |05afd9ec   |05afd9ec  |     ✔️      |
|FNS_B5_0.PNB   |9c1bbaa7   |9c1bbaa7   |9c1bbaa7  |     ✔️      |
|FNS_B5_1.PNB   |d895527e   |d895527e   |d895527e  |     ✔️      |
|FNS_B5_2.PNB   |9c1bbaa7   |9c1bbaa7   |9c1bbaa7  |     ✔️      |
|FNS_C2_0.PNB   |5ecb8b5a   |5ecb8b5a   |5ecb8b5a  |     ✔️      |
|FNS_C4_0.PNB   |2a549e05   |2a549e05   |2a549e05  |     ✔️      |
|FNS_C4_4.PNB   |bfdd4207   |bfdd4207   |bfdd4207  |     ✔️      |
|FNS_C4_5.PNB   |f724dd78   |f724dd78   |f724dd78  |     ✔️      |
|FNS_D2_0.PNB   |88048737   |88048737   |88048737  |     ✔️      |
|FNS_D2_A.PNB   |6973d68f   |6973d68f   |6973d68f  |     ✔️      |
|FNS_D2_B.PNB   |0ec71a4b   |0ec71a4b   |0ec71a4b  |     ✔️      |
|FNS_D2_C.PNB   |ebedef6a   |ebedef6a   |ebedef6a  |     ✔️      |
|FNS_D5_0.PNB   |bbaaeec2   |bbaaeec2   |bbaaeec2  |     ✔️      |
|FNS_D5_1.PNB** |326532c5   |0d5e5777   |0d5e5777  |  Jap!=Eng  |
|FNS_D5_2.PNB   |286246dd   |286246dd   |286246dd  |     ✔️      |
|FNS_WLD.PNB    |927e1774   |927e1774   |927e1774  |     ✔️      |
|FRS_A3_0.PNB   |e86adc90   |e86adc90   |e86adc90  |     ✔️      |
|FRS_A5_0.PNB   |b8426709   |b8426709   |b8426709  |     ✔️      |
|FRS_A5_7.PNB   |7b8f5919   |7b8f5919   |7b8f5919  |     ✔️      |
|FRS_A7_0.PNB   |a51096c1   |a51096c1   |a51096c1  |     ✔️      |
|FRS_A7_1.PNB   |f5f43ee3   |f5f43ee3   |f5f43ee3  |     ✔️      |
|FRS_A7_2.PNB   |3ee5a095   |3ee5a095   |3ee5a095  |     ✔️      |
|FRS_B2_1.PNB   |f5f43ee3   |f5f43ee3   |f5f43ee3  |     ✔️      |
|FRS_B2_4.PNB   |1d3c3a9c   |1d3c3a9c   |1d3c3a9c  |     ✔️      |
|FRS_B5_1.PNB   |33b73d08   |33b73d08   |33b73d08  |     ✔️      |
|FRS_B5_5.PNB   |64b3ccc1   |64b3ccc1   |64b3ccc1  |     ✔️      |
|FRS_B5_6.PNB   |3bbf2e5e   |3bbf2e5e   |3bbf2e5e  |     ✔️      |
|FRS_B5_A.PNB   |1d065c62   |1d065c62   |1d065c62  |     ✔️      |
|FRS_B5_B.PNB   |0cda3b06   |0cda3b06   |0cda3b06  |     ✔️      |
|FRS_B5_C.PNB   |15e52dc7   |15e52dc7   |15e52dc7  |     ✔️      |
|FRS_B5_D.PNB   |1d065c62   |1d065c62   |1d065c62  |     ✔️      |
|FRS_B5_E.PNB   |0cda3b06   |0cda3b06   |0cda3b06  |     ✔️      |
|FRS_B5_F.PNB   |15e52dc7   |15e52dc7   |15e52dc7  |     ✔️      |
|FRS_B6_1.PNB   |94da18c6   |94da18c6   |94da18c6  |     ✔️      |
|FRS_B6_2.PNB   |4fb79c3e   |4fb79c3e   |4fb79c3e  |     ✔️      |
|FRS_C2_0.PNB   |11ca5861   |11ca5861   |11ca5861  |     ✔️      |
|FRS_C2_1.PNB   |3f298615   |3f298615   |3f298615  |     ✔️      |
|FRS_C2_2.PNB   |4b6af5f1   |4b6af5f1   |4b6af5f1  |     ✔️      |
|FRS_C4_0.PNB   |7601bce9   |7601bce9   |7601bce9  |     ✔️      |
|FRS_C4_4.PNB   |eb5464a1   |eb5464a1   |eb5464a1  |     ✔️      |
|FRS_C4_5.PNB   |4033787e   |4033787e   |4033787e  |     ✔️      |
|FRS_C4_6.PNB   |8df08d2b   |8df08d2b   |8df08d2b  |     ✔️      |
|FRS_C4_7.PNB   |3ee5a095   |3ee5a095   |3ee5a095  |     ✔️      |
|FRS_C4_T.PNB   |52a16621   |52a16621   |52a16621  |     ✔️      |
|FRS_D2_0.PNB   |b83ec0a5   |b83ec0a5   |b83ec0a5  |     ✔️      |
|FRS_D2_1.PNB   |5b9f731b   |5b9f731b   |5b9f731b  |     ✔️      |
|FRS_D5_0.PNB   |9da9bb97   |9da9bb97   |9da9bb97  |     ✔️      |
|FRS_D5_1.PNB   |e4f26974   |e4f26974   |e4f26974  |     ✔️      |
|FRS_T0_0.PNB   |35b6243e   |35b6243e   |35b6243e  |     ✔️      |
|FRS_T1_0.PNB   |5efef321   |5efef321   |5efef321  |     ✔️      |
|FRS_T4_0.PNB   |e7f8dd48   |e7f8dd48   |e7f8dd48  |     ✔️      |
|FRS_WLD.PNB    |f95d7ff6   |f95d7ff6   |f95d7ff6  |     ✔️      |
|GRIG_KSN.PNB   |44215d0e   |44215d0e   |44215d0e  |     ✔️      |
|GRIG_SCR.PNB   |2eff71c8   |2eff71c8   |2eff71c8  |     ✔️      |
|MAP_A20.PNB    |598cf635   |598cf635   |598cf635  |     ✔️      |
|MAP_A30.PNB    |12845f09   |12845f09   |12845f09  |     ✔️      |
|MAP_A32.PNB    |dc915192   |dc915192   |dc915192  |     ✔️      |
|MAP_A33.PNB    |b30b5f8d   |b30b5f8d   |b30b5f8d  |     ✔️      |
|MAP_A50.PNB    |7b7db963   |7b7db963   |7b7db963  |     ✔️      |
|MAP_A52.PNB    |7b5e808e   |7b5e808e   |7b5e808e  |     ✔️      |
|MAP_A54.PNB    |904e09e0   |904e09e0   |904e09e0  |     ✔️      |
|MAP_A70.PNB    |9d7c0a70   |9d7c0a70   |9d7c0a70  |     ✔️      |
|MAP_B11.PNB    |9b45e4e5   |9b45e4e5   |9b45e4e5  |     ✔️      |
|MAP_B21.PNB    |10e70207   |10e70207   |10e70207  |     ✔️      |
|MAP_B50.PNB    |799aea9e   |799aea9e   |799aea9e  |     ✔️      |
|MAP_B51.PNB    |5705f876   |5705f876   |5705f876  |     ✔️      |
|MAP_B52.PNB    |52a8620e   |52a8620e   |52a8620e  |     ✔️      |
|MAP_B53.PNB    |747a29b1   |747a29b1   |747a29b1  |     ✔️      |
|MAP_B54.PNB    |747a29b1   |747a29b1   |747a29b1  |     ✔️      |
|MAP_B60.PNB    |2ca47617   |2ca47617   |2ca47617  |     ✔️      |
|MAP_B61.PNB    |c40d59ac   |c40d59ac   |c40d59ac  |     ✔️      |
|MAP_B62.PNB    |d8745826   |d8745826   |d8745826  |     ✔️      |
|MAP_B63.PNB    |748b2589   |748b2589   |748b2589  |     ✔️      |
|MAP_B64.PNB    |b7f51859   |b7f51859   |b7f51859  |     ✔️      |
|MAP_B65.PNB    |b3837306   |b3837306   |b3837306  |     ✔️      |
|MAP_B66.PNB    |7bbdb2d4   |7bbdb2d4   |7bbdb2d4  |     ✔️      |
|MAP_B67.PNB    |fd474e4f   |fd474e4f   |fd474e4f  |     ✔️      |
|MAP_B68.PNB    |36206149   |36206149   |36206149  |     ✔️      |
|MAP_B69.PNB    |e314ea09   |e314ea09   |e314ea09  |     ✔️      |
|MAP_C20.PNB    |bfdb3cff   |bfdb3cff   |bfdb3cff  |     ✔️      |
|MAP_C21.PNB    |ea157d85   |ea157d85   |ea157d85  |     ✔️      |
|MAP_C22.PNB    |262b63b9   |262b63b9   |262b63b9  |     ✔️      |
|MAP_D20.PNB    |2d125a20   |2d125a20   |2d125a20  |     ✔️      |
|MAP_D30.PNB    |33b687bb   |33b687bb   |33b687bb  |     ✔️      |
|MAP_T01.PNB    |cab81f96   |cab81f96   |cab81f96  |     ✔️      |
|MAP_T03.PNB    |f86c3cef   |f86c3cef   |f86c3cef  |     ✔️      |
|MAP_T04.PNB    |1e4b68e7   |1e4b68e7   |1e4b68e7  |     ✔️      |
|MAP_T05.PNB    |92c3ecb4   |92c3ecb4   |92c3ecb4  |     ✔️      |
|MAP_T11.PNB    |f83cfe46   |f83cfe46   |f83cfe46  |     ✔️      |
|MAP_T12.PNB    |bde8145d   |bde8145d   |bde8145d  |     ✔️      |
|MAP_T21.PNB    |5b81a3a0   |5b81a3a0   |5b81a3a0  |     ✔️      |
|MAP_T24.PNB    |ff4aab2a   |ff4aab2a   |ff4aab2a  |     ✔️      |
|MAP_T2A.PNB    |a60d3a77   |a60d3a77   |a60d3a77  |     ✔️      |
|MAP_T2D.PNB    |c1498286   |c1498286   |c1498286  |     ✔️      |
|MAP_T31.PNB    |661ec3db   |661ec3db   |661ec3db  |     ✔️      |
|MAP_T32.PNB    |a68db6f1   |a68db6f1   |a68db6f1  |     ✔️      |
|MAP_T41.PNB    |a68db6f1   |a68db6f1   |a68db6f1  |     ✔️      |
|MAP_T42.PNB    |1c8e8074   |1c8e8074   |1c8e8074  |     ✔️      |
|MAP_T45.PNB    |445c776e   |445c776e   |445c776e  |     ✔️      |
|MAP_TOU.PNB    |abc1ce11   |abc1ce11   |abc1ce11  |     ✔️      |
|RUINSCR.PNB    |4f8dfb58   |4f8dfb58   |4f8dfb58  |     ✔️      |
|SCBTLA31.PNB   |36721e4c   |36721e4c   |36721e4c  |     ✔️      |
|SCBTLA32.PNB   |90f79051   |90f79051   |90f79051  |     ✔️      |
|SCBTL_A3.PNB   |e5523c1b   |e5523c1b   |e5523c1b  |     ✔️      |
|SCRBTLA5.PNB   |5bcabf74   |5bcabf74   |5bcabf74  |     ✔️      |
|SEEKSCR.PNB    |5d05fc73   |5d05fc73   |5d05fc73  |     ✔️      |
|SPACE.PNB      |3597f572   |3597f572   |3597f572  |     ✔️      |
|TGD_SKY.PNB    |b99ca842   |b99ca842   |b99ca842  |     ✔️      |
|TITLEE.PNB*    |________   |e0c09b63   |e0c09b63  |English Only|
|TITLEJ.PNB*    |e0c09b63   |________   |________  | Japan Only |
|TOWN2.PNB      |676c889e   |676c889e   |676c889e  |     ✔️      |
|URUGND_B.PNB   |b22133d2   |b22133d2   |b22133d2  |     ✔️      |
|VARAHA.PNB     |4b6af5f1   |4b6af5f1   |4b6af5f1  |     ✔️      |
|WARNING.PNB**  |e83ce692   |c9490377   |c9490377  |  Jap!=Eng  |
|ZOAH.PNB       |8af36264   |8af36264   |8af36264  |     ✔️      |
|1ST_READ.PRG** |e1e87493   |2bb6c2d6   |2bb6c2d6  |  Jap!=Eng  |
|BTL_A3.PRG**   |225b0224   |8812fb0e   |8812fb0e  |  Jap!=Eng  |
|BTL_A3_2.PRG** |bdb8fd01   |e4098e69   |e4098e69  |  Jap!=Eng  |
|BTL_A5.PRG**   |7387abfb   |639328c2   |639328c2  |  Jap!=Eng  |
|BTL_A5_2.PRG** |be6f6fea   |4b08807b   |4b08807b  |  Jap!=Eng  |
|BTL_A5_3.PRG** |2069ca8c   |cd4b77b2   |cd4b77b2  |  Jap!=Eng  |
|BTL_A7.PRG**   |86050fc8   |88eb624d   |88eb624d  |  Jap!=Eng  |
|BTL_A7_2.PRG** |c4f00b8f   |cb509cbb   |cb509cbb  |  Jap!=Eng  |
|BTL_B2.PRG**   |5c2eedc1   |3f245e92   |3f245e92  |  Jap!=Eng  |
|BTL_B5.PRG**   |1b63975f   |3b10c6b4   |3b10c6b4  |  Jap!=Eng  |
|BTL_B5_2.PRG** |9caa1de6   |2b900097   |2b900097  |  Jap!=Eng  |
|BTL_B5_3.PRG** |ed94dddb   |f3320036   |f3320036  |  Jap!=Eng  |
|BTL_B6.PRG**   |aab5567c   |1cb6365e   |1cb6365e  |  Jap!=Eng  |
|BTL_B6_2.PRG** |124b341e   |60ece740   |60ece740  |  Jap!=Eng  |
|BTL_C2.PRG***  |b4c3244b   |7c5b7f89   |8f66dae8  |   Varied   |
|BTL_C2_2.PRG***|c3e51831   |f8adb046   |8b7a068d  |   Varied   |
|BTL_C4.PRG***  |f73b35c0   |27af74f6   |83f7174a  |   Varied   |
|BTL_C5.PRG***  |59da1892   |8721b45c   |dcc7eddb  |   Varied   |
|BTL_C5_2.PRG** |a8a5eb59   |842a4cac   |842a4cac  |  Jap!=Eng  |
|BTL_C8.PRG***  |19a0dba4   |976737e0   |c90a8e0f  |   Varied   |
|BTL_C8_2.PRG***|34e6475f   |886b9bff   |886b9bff  |   Varied   |
|BTL_D2.PRG**   |d3399b1d   |b41a64e9   |b41a64e9  |  Jap!=Eng  |
|BTL_D2_2.PRG** |324c3131   |a5631bb6   |a5631bb6  |  Jap!=Eng  |
|BTL_D4.PRG**   |98130836   |bedb240b   |bedb240b  |  Jap!=Eng  |
|BTL_D5.PRG**   |2856e0b5   |dcd84a3b   |dcd84a3b  |  Jap!=Eng  |
|BTL_T0.PRG***  |78ea2706   |37d9f3d7   |c12f42d6  |   Varied   |
|BTL_X0.PRG**   |b9860658   |73b7b7d7   |73b7b7d7  |  Jap!=Eng  |
|CHANGE.PRG**   |796730fa   |dbb250a7   |dbb250a7  |  Jap!=Eng  |
|FLAGEDIT.PRG** |1ca69bea   |4f901c87   |4f901c87  |  Jap!=Eng  |
|FLD_A3.PRG***  |3fa77752   |e362d3be   |68a944b7  |   Varied   |
|FLD_A5.PRG***  |4a480474   |3743201c   |31977aa7  |   Varied   |
|FLD_A7.PRG***  |410be322   |b2c85de1   |9515262d  |   Varied   |
|FLD_B2.PRG***  |1e0efe12   |e057e3fe   |bc5e0b66  |   Varied   |
|FLD_B5.PRG***  |af396d31   |a6746944   |9e15fbc9  |   Varied   |
|FLD_B6.PRG***  |66819f7a   |f18b40a2   |0b417fb5  |   Varied   |
|FLD_C2.PRG***  |7836399e   |87e48180   |69955373  |   Varied   |
|FLD_C4.PRG***  |2953fa84   |e5edcae7   |21b24719  |   Varied   |
|FLD_C8.PRG***  |59932dad   |326a2289   |b85eedb0  |   Varied   |
|FLD_D2.PRG***  |a0837adb   |d7139173   |542f774b  |   Varied   |
|FLD_D3.PRG***  |72085dd4   |e0b31699   |59e1d0a8  |   Varied   |
|FLD_D5.PRG***  |0e59675c   |aafc7e3b   |33ecc54d  |   Varied   |
|MENUEN.PRG***  |194314fc   |acc1d0ac   |45651aa0  |   Varied   |
|MOVIE.PRG**    |20adfa73   |84295822   |84295822  |  Jap!=Eng  |
|SEGALOGO.PRG** |82fe591c   |beb682ee   |beb682ee  |  Jap!=Eng  |
|SNDTEST.PRG**  |b2da5bcf   |cd6f358a   |cd6f358a  |  Jap!=Eng  |
|TITLE.PRG**    |b910f0a3   |66c93c91   |66c93c91  |  Jap!=Eng  |
|TWN_CAMP.PRG** |9b580991   |ce2b46e4   |ce2b46e4  |  Jap!=Eng  |
|TWN_CARA.PRG***|00a0f740   |19fdb293   |bb18553a  |   Varied   |
|TWN_E006.PRG** |3cf4b602   |b98ba08b   |b98ba08b  |  Jap!=Eng  |
|TWN_E011.PRG** |6832e6e3   |89912a97   |89912a97  |  Jap!=Eng  |
|TWN_E014.PRG** |c32b3b0f   |57a40089   |57a40089  |  Jap!=Eng  |
|TWN_E021.PRG** |17faa218   |695ce26a   |695ce26a  |  Jap!=Eng  |
|TWN_E022.PRG** |d92d24c1   |b1ae5646   |b1ae5646  |  Jap!=Eng  |
|TWN_EXCA.PRG** |09f95ae8   |7c47b18d   |7c47b18d  |  Jap!=Eng  |
|TWN_JIRI.PRG** |28030f9c   |43f670d2   |43f670d2  |  Jap!=Eng  |
|TWN_RUIN.PRG** |60086bb7   |3c13d3b7   |3c13d3b7  |  Jap!=Eng  |
|TWN_SEEK.PRG***|9f1486e4   |5dc8bdc5   |e148a040  |   Varied   |
|TWN_ZOAH.PRG***|488b1915   |828ec296   |5493934   |   Varied   |
|WORLD.PRG**    |8ba62465   |249308e7   |249308e7  |  Jap!=Eng  |
|AJITOSCR.SCB   |aac6f9e1   |aac6f9e1   |aac6f9e1  |     ✔️      |
|AJITSCN1.SCB   |41eadeda   |41eadeda   |41eadeda  |     ✔️      |
|AJITSCN2.SCB   |dfeabc54   |dfeabc54   |dfeabc54  |     ✔️      |
|BNS_ANTI.SCB   |53f64754   |53f64754   |53f64754  |     ✔️      |
|BNS_D5.SCB     |2d65abdd   |2d65abdd   |2d65abdd  |     ✔️      |
|BNS_EF01.SCB   |23acfcb0   |23acfcb0   |23acfcb0  |     ✔️      |
|BNS_EF02.SCB   |9bea4874   |9bea4874   |9bea4874  |     ✔️      |
|BNS_EF03.SCB   |7da13c80   |7da13c80   |7da13c80  |     ✔️      |
|BNS_EF04.SCB   |4518760d   |4518760d   |4518760d  |     ✔️      |
|BNS_EF05.SCB   |a6dea61e   |a6dea61e   |a6dea61e  |     ✔️      |
|BNS_EF06.SCB   |960ebc95   |960ebc95   |960ebc95  |     ✔️      |
|BNS_EF07.SCB   |7d77a731   |7d77a731   |7d77a731  |     ✔️      |
|BNS_EF08.SCB   |6e4251f9   |6e4251f9   |6e4251f9  |     ✔️      |
|BNS_EF09.SCB   |35ce2e3e   |35ce2e3e   |35ce2e3e  |     ✔️      |
|BRS_ANTI.SCB   |b7be4ff3   |b7be4ff3   |b7be4ff3  |     ✔️      |
|CAMPSCR0.SCB   |f5c47beb   |f5c47beb   |f5c47beb  |     ✔️      |
|CAMPSCR1.SCB   |b387ffef   |b387ffef   |b387ffef  |     ✔️      |
|CAMPSCR2.SCB   |80431798   |80431798   |80431798  |     ✔️      |
|CAMPSCR3.SCB   |1d25419e   |1d25419e   |1d25419e  |     ✔️      |
|CAMPSCR4.SCB   |2f4e2dc0   |2f4e2dc0   |2f4e2dc0  |     ✔️      |
|CAMPSCR5.SCB   |0b73f414   |0b73f414   |0b73f414  |     ✔️      |
|CAMPSCR6.SCB   |7c07938f   |7c07938f   |7c07938f  |     ✔️      |
|CAMPSCR7.SCB   |2c4806bf   |2c4806bf   |2c4806bf  |     ✔️      |
|CARASCR0.SCB   |80431798   |80431798   |80431798  |     ✔️      |
|CARASCR1.SCB   |2d2b15f4   |2d2b15f4   |2d2b15f4  |     ✔️      |
|CARASCR2.SCB   |2f4e2dc0   |2f4e2dc0   |2f4e2dc0  |     ✔️      |
|CARASCR3.SCB   |7229795c   |7229795c   |7229795c  |     ✔️      |
|CARASCR4.SCB   |4681247e   |4681247e   |4681247e  |     ✔️      |
|CARASCR5.SCB   |60bd70ec   |60bd70ec   |60bd70ec  |     ✔️      |
|CHANGE.SCB**   |8d362e95   |955ac4c0   |955ac4c0  |  Jap!=Eng  |
|CHANGE2.SCB    |db7389cc   |db7389cc   |db7389cc  |     ✔️      |
|CHANGE3.SCB    |c079d6fb   |c079d6fb   |c079d6fb  |     ✔️      |
|CHANGE4.SCB    |67a94253   |67a94253   |67a94253  |     ✔️      |
|DYURA00.SCB    |7813d64b   |7813d64b   |7813d64b  |     ✔️      |
|DYURA01.SCB    |2e35acaa   |2e35acaa   |2e35acaa  |     ✔️      |
|DYURA02.SCB    |70cce364   |70cce364   |70cce364  |     ✔️      |
|DYURA03.SCB    |f9c1dbe6   |f9c1dbe6   |f9c1dbe6  |     ✔️      |
|DYURA04.SCB    |8f7e5152   |8f7e5152   |8f7e5152  |     ✔️      |
|EVT011N.SCB    |a74efa6a   |a74efa6a   |a74efa6a  |     ✔️      |
|EVT021.SCB     |7da45a1d   |7da45a1d   |7da45a1d  |     ✔️      |
|EVT024N.SCB    |260d3646   |260d3646   |260d3646  |     ✔️      |
|EVT078N.SCB    |b327bb4f   |b327bb4f   |b327bb4f  |     ✔️      |
|EXCA_SCR.SCB   |cfe1a2e9   |cfe1a2e9   |cfe1a2e9  |     ✔️      |
|FNS_A3_0.SCB   |007bc104   |007bc104   |007bc104  |     ✔️      |
|FNS_A5_0.SCB   |39205734   |39205734   |39205734  |     ✔️      |
|FNS_A5_7.SCB   |9abeb19f   |9abeb19f   |9abeb19f  |     ✔️      |
|FNS_A7_0.SCB   |225d8775   |225d8775   |225d8775  |     ✔️      |
|FNS_A7_1.SCB   |789a8e2c   |789a8e2c   |789a8e2c  |     ✔️      |
|FNS_A7_2.SCB   |60cb1413   |60cb1413   |60cb1413  |     ✔️      |
|FNS_B2_1.SCB   |5675e816   |5675e816   |5675e816  |     ✔️      |
|FNS_B5_0.SCB   |91d963bd   |91d963bd   |91d963bd  |     ✔️      |
|FNS_B5_1.SCB   |215c8881   |215c8881   |215c8881  |     ✔️      |
|FNS_B5_2.SCB   |91d963bd   |91d963bd   |91d963bd  |     ✔️      |
|FNS_C2_0.SCB   |3e6b4859   |3e6b4859   |3e6b4859  |     ✔️      |
|FNS_C4_0.SCB   |880176f3   |880176f3   |880176f3  |     ✔️      |
|FNS_C4_4.SCB   |fe2056e4   |fe2056e4   |fe2056e4  |     ✔️      |
|FNS_C4_5.SCB   |fe2056e4   |fe2056e4   |fe2056e4  |     ✔️      |
|FNS_D2_0.SCB   |8fc3fc85   |8fc3fc85   |8fc3fc85  |     ✔️      |
|FNS_D2_A.SCB   |5b7940ac   |5b7940ac   |5b7940ac  |     ✔️      |
|FNS_D2_B.SCB   |67ca4312   |67ca4312   |67ca4312  |     ✔️      |
|FNS_D2_C.SCB   |4253411c   |4253411c   |4253411c  |     ✔️      |
|FNS_D5_0.SCB   |12364e05   |12364e05   |12364e05  |     ✔️      |
|FNS_D5_1.SCB** |ddcf5733   |81da3c97   |81da3c97  |  Jap!=Eng  |
|FNS_D5_2.SCB   |53f64754   |53f64754   |53f64754  |     ✔️      |
|FNS_WLD.SCB    |c5e48e9c   |c5e48e9c   |c5e48e9c  |     ✔️      |
|FRS_A3_0.SCB   |1ef69573   |1ef69573   |1ef69573  |     ✔️      |
|FRS_A5_0.SCB   |785730fe   |785730fe   |785730fe  |     ✔️      |
|FRS_A5_7.SCB   |677aad12   |677aad12   |677aad12  |     ✔️      |
|FRS_A7_0.SCB   |471c2a78   |471c2a78   |471c2a78  |     ✔️      |
|FRS_A7_1.SCB   |74e049cd   |74e049cd   |74e049cd  |     ✔️      |
|FRS_A7_2.SCB   |67c4e94f   |67c4e94f   |67c4e94f  |     ✔️      |
|FRS_B2_1.SCB   |4da21854   |4da21854   |4da21854  |     ✔️      |
|FRS_B2_4.SCB   |23c2b8f1   |23c2b8f1   |23c2b8f1  |     ✔️      |
|FRS_B5_1.SCB   |647db4e6   |647db4e6   |647db4e6  |     ✔️      |
|FRS_B5_5.SCB   |47261ef4   |47261ef4   |47261ef4  |     ✔️      |
|FRS_B5_6.SCB   |173ab84a   |173ab84a   |173ab84a  |     ✔️      |
|FRS_B5_A.SCB   |f61f5682   |f61f5682   |f61f5682  |     ✔️      |
|FRS_B5_B.SCB   |eeecd535   |eeecd535   |eeecd535  |     ✔️      |
|FRS_B5_C.SCB   |5c1aabde   |5c1aabde   |5c1aabde  |     ✔️      |
|FRS_B5_D.SCB   |f61f5682   |f61f5682   |f61f5682  |     ✔️      |
|FRS_B5_E.SCB   |eeecd535   |eeecd535   |eeecd535  |     ✔️      |
|FRS_B5_F.SCB   |5c1aabde   |5c1aabde   |5c1aabde  |     ✔️      |
|FRS_B6_1.SCB   |1830557b   |1830557b   |1830557b  |     ✔️      |
|FRS_B6_2.SCB   |07bf6014   |07bf6014   |07bf6014  |     ✔️      |
|FRS_C2_0.SCB   |c10292e1   |c10292e1   |c10292e1  |     ✔️      |
|FRS_C2_1.SCB   |e176b251   |e176b251   |e176b251  |     ✔️      |
|FRS_C2_2.SCB   |a8f7aad7   |a8f7aad7   |a8f7aad7  |     ✔️      |
|FRS_C4_0.SCB   |e503519a   |e503519a   |e503519a  |     ✔️      |
|FRS_C4_4.SCB   |2c793bc9   |2c793bc9   |2c793bc9  |     ✔️      |
|FRS_C4_5.SCB   |5df0622d   |5df0622d   |5df0622d  |     ✔️      |
|FRS_C4_7.SCB   |14ff13ff   |14ff13ff   |14ff13ff  |     ✔️      |
|FRS_D2_0.SCB   |0566c342   |0566c342   |0566c342  |     ✔️      |
|FRS_D2_1.SCB   |9df31fbd   |9df31fbd   |9df31fbd  |     ✔️      |
|FRS_D5_0.SCB   |c01beaf1   |c01beaf1   |c01beaf1  |     ✔️      |
|FRS_D5_1.SCB   |b7be4ff3   |b7be4ff3   |b7be4ff3  |     ✔️      |
|FRS_T0_0.SCB   |73f9339d   |73f9339d   |73f9339d  |     ✔️      |
|FRS_T1_0.SCB   |87c6fc2c   |87c6fc2c   |87c6fc2c  |     ✔️      |
|FRS_T4_0.SCB   |9e79bcd7   |9e79bcd7   |9e79bcd7  |     ✔️      |
|FRS_WLD.SCB    |284d8c2f   |284d8c2f   |284d8c2f  |     ✔️      |
|GRIG_KSN.SCB   |60cb1413   |60cb1413   |60cb1413  |     ✔️      |
|GRIG_SCR.SCB   |a23131ad   |a23131ad   |a23131ad  |     ✔️      |
|MAP_A20.SCB    |f70adc33   |f70adc33   |f70adc33  |     ✔️      |
|MAP_A30.SCB    |0dc020c7   |0dc020c7   |0dc020c7  |     ✔️      |
|MAP_A32.SCB    |d216a892   |d216a892   |d216a892  |     ✔️      |
|MAP_A33.SCB    |145da0f9   |145da0f9   |145da0f9  |     ✔️      |
|MAP_A50.SCB    |847535e7   |847535e7   |847535e7  |     ✔️      |
|MAP_A52.SCB    |4373a053   |4373a053   |4373a053  |     ✔️      |
|MAP_A54.SCB    |1e14e873   |1e14e873   |1e14e873  |     ✔️      |
|MAP_A70.SCB    |179bf935   |179bf935   |179bf935  |     ✔️      |
|MAP_B11.SCB    |70012ff4   |70012ff4   |70012ff4  |     ✔️      |
|MAP_B21.SCB    |0b5651d5   |0b5651d5   |0b5651d5  |     ✔️      |
|MAP_B50.SCB    |29c77c14   |29c77c14   |29c77c14  |     ✔️      |
|MAP_B51.SCB    |ed6860db   |ed6860db   |ed6860db  |     ✔️      |
|MAP_B52.SCB    |3eec7869   |3eec7869   |3eec7869  |     ✔️      |
|MAP_B53.SCB    |452167ed   |452167ed   |452167ed  |     ✔️      |
|MAP_B54.SCB    |5792939b   |5792939b   |5792939b  |     ✔️      |
|MAP_B60.SCB    |ca1ef5f7   |ca1ef5f7   |ca1ef5f7  |     ✔️      |
|MAP_B61.SCB    |074ec4ab   |074ec4ab   |074ec4ab  |     ✔️      |
|MAP_B62.SCB    |7309ffe6   |7309ffe6   |7309ffe6  |     ✔️      |
|MAP_B63.SCB    |f3ab6796   |f3ab6796   |f3ab6796  |     ✔️      |
|MAP_B64.SCB    |212df4ad   |212df4ad   |212df4ad  |     ✔️      |
|MAP_B65.SCB    |4b9e9d18   |4b9e9d18   |4b9e9d18  |     ✔️      |
|MAP_B66.SCB    |0f8ff5e2   |0f8ff5e2   |0f8ff5e2  |     ✔️      |
|MAP_B67.SCB    |4ffbb657   |4ffbb657   |4ffbb657  |     ✔️      |
|MAP_B68.SCB    |f0e935fb   |f0e935fb   |f0e935fb  |     ✔️      |
|MAP_B69.SCB    |8a7f02a3   |8a7f02a3   |8a7f02a3  |     ✔️      |
|MAP_C20.SCB    |2922ab30   |2922ab30   |2922ab30  |     ✔️      |
|MAP_C21.SCB    |27781661   |27781661   |27781661  |     ✔️      |
|MAP_C22.SCB    |a4e53ec9   |a4e53ec9   |a4e53ec9  |     ✔️      |
|MAP_D20.SCB    |b907b2c8   |b907b2c8   |b907b2c8  |     ✔️      |
|MAP_D30.SCB    |52990022   |52990022   |52990022  |     ✔️      |
|MAP_T01.SCB    |c67e16ed   |c67e16ed   |c67e16ed  |     ✔️      |
|MAP_T03.SCB    |8a8dff6d   |8a8dff6d   |8a8dff6d  |     ✔️      |
|MAP_T04.SCB    |059ae110   |059ae110   |059ae110  |     ✔️      |
|MAP_T05.SCB    |c5730e5a   |c5730e5a   |c5730e5a  |     ✔️      |
|MAP_T11.SCB    |ef09b7bd   |ef09b7bd   |ef09b7bd  |     ✔️      |
|MAP_T12.SCB    |867bb675   |867bb675   |867bb675  |     ✔️      |
|MAP_T21.SCB    |f5d55643   |f5d55643   |f5d55643  |     ✔️      |
|MAP_T24.SCB    |d4a469eb   |d4a469eb   |d4a469eb  |     ✔️      |
|MAP_T2A.SCB    |29897248   |29897248   |29897248  |     ✔️      |
|MAP_T2D.SCB    |0e825d71   |0e825d71   |0e825d71  |     ✔️      |
|MAP_T31.SCB    |fbc68f3f   |fbc68f3f   |fbc68f3f  |     ✔️      |
|MAP_T32.SCB    |78c95451   |78c95451   |78c95451  |     ✔️      |
|MAP_T41.SCB    |daef3424   |daef3424   |daef3424  |     ✔️      |
|MAP_T42.SCB    |ecc7eda6   |ecc7eda6   |ecc7eda6  |     ✔️      |
|MAP_T45.SCB    |5e0e3ec3   |5e0e3ec3   |5e0e3ec3  |     ✔️      |
|MAP_TOU.SCB    |8b51a0c1   |8b51a0c1   |8b51a0c1  |     ✔️      |
|MENU.SCB       |f847da9e   |f847da9e   |f847da9e  |     ✔️      |
|NAME_ENT.SCB   |c868d9a3   |c868d9a3   |c868d9a3  |     ✔️      |
|RUINSCR.SCB    |774485d8   |774485d8   |774485d8  |     ✔️      |
|SAVE.SCB       |fae6ef06   |fae6ef06   |fae6ef06  |     ✔️      |
|SCBTLA31.SCB   |9330d567   |9330d567   |9330d567  |     ✔️      |
|SCBTLA32.SCB   |eaff7b12   |eaff7b12   |eaff7b12  |     ✔️      |
|SCRBTLA5.SCB   |89cd5add   |89cd5add   |89cd5add  |     ✔️      |
|SEEKSCR.SCB    |328bf742   |328bf742   |328bf742  |     ✔️      |
|SHOP.SCB       |96678a83   |96678a83   |96678a83  |     ✔️      |
|TGD_SKY.SCB    |cf264150   |cf264150   |cf264150  |     ✔️      |
|TITLEE.SCB*    |________   |a3637501   |a3637501  |English Only|
|TITLEJ.SCB*    |22a54139   |________   |________  | Japan Only |
|TOWN2.SCB      |22e47f6c   |22e47f6c   |22e47f6c  |     ✔️      |
|URUGND_B.SCB   |a4a8d60c   |a4a8d60c   |a4a8d60c  |     ✔️      |
|VARAHA.SCB     |a8f7aad7   |a8f7aad7   |a8f7aad7  |     ✔️      |
|WARNING.SCB*** |18dfd87b   |c9769a1e   |729dbc1f  |   Varied   |
|ZOAH.SCB       |d8e0afe0   |d8e0afe0   |d8e0afe0  |     ✔️      |
|A3BGM1_1.SEQ   |c91dd2dc   |c91dd2dc   |c91dd2dc  |     ✔️      |
|A3BGM1_2.SEQ   |5c36afea   |5c36afea   |5c36afea  |     ✔️      |
|A3BGM2.SEQ     |3ed31f3b   |3ed31f3b   |3ed31f3b  |     ✔️      |
|A3BOSS.SEQ     |c228df17   |c228df17   |c228df17  |     ✔️      |
|A3SE.SEQ       |73a31721   |73a31721   |73a31721  |     ✔️      |
|A3ZAKOSE.SEQ   |12dd71cd   |12dd71cd   |12dd71cd  |     ✔️      |
|A5BGM.SEQ      |2299a5be   |2299a5be   |2299a5be  |     ✔️      |
|A5BOSBGM.SEQ   |d845d392   |d845d392   |d845d392  |     ✔️      |
|A5BOSS.SEQ     |44dd8002   |44dd8002   |44dd8002  |     ✔️      |
|A5SE.SEQ       |d257a2cf   |d257a2cf   |d257a2cf  |     ✔️      |
|A5ZAKO.SEQ     |8201f03f   |8201f03f   |8201f03f  |     ✔️      |
|A7BGM.SEQ      |c0b0c7ba   |c0b0c7ba   |c0b0c7ba  |     ✔️      |
|A7MB.SEQ       |e0062cc7   |e0062cc7   |e0062cc7  |     ✔️      |
|A7SE.SEQ       |0c64d323   |0c64d323   |0c64d323  |     ✔️      |
|A7ZAKO.SEQ     |7bf49039   |7bf49039   |7bf49039  |     ✔️      |
|AD_SE.SEQ      |20efaf10   |20efaf10   |20efaf10  |     ✔️      |
|ANTIBGM.SEQ    |b1c30c12   |b1c30c12   |b1c30c12  |     ✔️      |
|ANTI_SE.SEQ    |a0c29067   |a0c29067   |a0c29067  |     ✔️      |
|B2BGM1.SEQ     |0fe4290f   |0fe4290f   |0fe4290f  |     ✔️      |
|B2BGM2.SEQ     |715b3d28   |715b3d28   |715b3d28  |     ✔️      |
|B2BOS_SE.SEQ   |c5871d62   |c5871d62   |c5871d62  |     ✔️      |
|B2SE.SEQ       |85243375   |85243375   |85243375  |     ✔️      |
|B5BGM.SEQ      |c9c38af0   |c9c38af0   |c9c38af0  |     ✔️      |
|B5MB.SEQ       |5ff432e8   |5ff432e8   |5ff432e8  |     ✔️      |
|B5SE.SEQ       |100b6817   |100b6817   |100b6817  |     ✔️      |
|B6BGM.SEQ      |59d7cd7d   |59d7cd7d   |59d7cd7d  |     ✔️      |
|B6BOSSE.SEQ    |472dbc12   |472dbc12   |472dbc12  |     ✔️      |
|B6SE.SEQ       |8ee9acf6   |8ee9acf6   |8ee9acf6  |     ✔️      |
|B6ZAKOSE.SEQ   |c761e9c1   |c761e9c1   |c761e9c1  |     ✔️      |
|BOS2BGM.SEQ    |722cabb1   |722cabb1   |722cabb1  |     ✔️      |
|BOS3BGM.SEQ    |159f9030   |159f9030   |159f9030  |     ✔️      |
|BOS4BGM.SEQ    |3dd6dcb7   |3dd6dcb7   |3dd6dcb7  |     ✔️      |
|BOS5BGM.SEQ    |849d3923   |849d3923   |849d3923  |     ✔️      |
|BOSS01_2.SEQ   |91bdaafa   |91bdaafa   |91bdaafa  |     ✔️      |
|BTL1BGM.SEQ    |ab69798c   |ab69798c   |ab69798c  |     ✔️      |
|BTL2BGM.SEQ    |246d7a22   |246d7a22   |246d7a22  |     ✔️      |
|C2BGM.SEQ      |e5085d41   |e5085d41   |e5085d41  |     ✔️      |
|C2BOS_SE.SEQ   |b8dda5d4   |b8dda5d4   |b8dda5d4  |     ✔️      |
|C2MBSE.SEQ     |bcea378b   |bcea378b   |bcea378b  |     ✔️      |
|C2SE.SEQ       |50dacdd6   |50dacdd6   |50dacdd6  |     ✔️      |
|C2ZAKOSE.SEQ   |189bc519   |189bc519   |189bc519  |     ✔️      |
|C4BGM.SEQ      |36b35068   |36b35068   |36b35068  |     ✔️      |
|C4MB_SE.SEQ    |e2adcfc0   |e2adcfc0   |e2adcfc0  |     ✔️      |
|C4SE.SEQ       |52f3386d   |52f3386d   |52f3386d  |     ✔️      |
|C7SE.SEQ       |55306147   |55306147   |55306147  |     ✔️      |
|C8BGM.SEQ      |107d9bb2   |107d9bb2   |107d9bb2  |     ✔️      |
|C8BOS_SE.SEQ   |797289dd   |797289dd   |797289dd  |     ✔️      |
|CAMPBGM.SEQ    |280ab704   |280ab704   |280ab704  |     ✔️      |
|CAMP_SE.SEQ    |805d426c   |805d426c   |805d426c  |     ✔️      |
|CARABGM.SEQ    |c1a442df   |c1a442df   |c1a442df  |     ✔️      |
|CARA_SE.SEQ    |255f11d5   |255f11d5   |255f11d5  |     ✔️      |
|COPY1BGM.SEQ   |e027cf89   |e027cf89   |e027cf89  |     ✔️      |
|COPY2BGM.SEQ   |e1cd2700   |e1cd2700   |e1cd2700  |     ✔️      |
|D2BGM.SEQ      |4136df32   |4136df32   |4136df32  |     ✔️      |
|D2BOS_SE.SEQ   |47aff28a   |47aff28a   |47aff28a  |     ✔️      |
|D2MBSE.SEQ     |82bee68b   |82bee68b   |82bee68b  |     ✔️      |
|D2SE.SEQ       |d92856e1   |d92856e1   |d92856e1  |     ✔️      |
|D3BGM.SEQ      |7475f743   |7475f743   |7475f743  |     ✔️      |
|D4BGM.SEQ      |04adef3f   |04adef3f   |04adef3f  |     ✔️      |
|D4MB_SE.SEQ    |29d3a3f8   |29d3a3f8   |29d3a3f8  |     ✔️      |
|D5BGM.SEQ      |fd6c1c84   |fd6c1c84   |fd6c1c84  |     ✔️      |
|DRG_SE.SEQ     |52719881   |52719881   |52719881  |     ✔️      |
|E128SE.SEQ     |e1fcece8   |e1fcece8   |e1fcece8  |     ✔️      |
|E14SE.SEQ      |f2cacd52   |f2cacd52   |f2cacd52  |     ✔️      |
|E22SE.SEQ      |1f21a4b3   |1f21a4b3   |1f21a4b3  |     ✔️      |
|E74SE.SEQ      |56aa4dde   |56aa4dde   |56aa4dde  |     ✔️      |
|E78BGM.SEQ     |ed2e2090   |ed2e2090   |ed2e2090  |     ✔️      |
|E78SE.SEQ      |8bc288dc   |8bc288dc   |8bc288dc  |     ✔️      |
|EDGE_SE.SEQ    |f904016d   |f904016d   |f904016d  |     ✔️      |
|EXCA_SE.SEQ    |2458a1a4   |2458a1a4   |2458a1a4  |     ✔️      |
|HANU_SE.SEQ    |ac0b7548   |ac0b7548   |ac0b7548  |     ✔️      |
|KOGATA.SEQ     |912fe2ce   |912fe2ce   |912fe2ce  |     ✔️      |
|MB01.SEQ       |61c58eb6   |61c58eb6   |61c58eb6  |     ✔️      |
|MB04BGM.SEQ    |d752225c   |d752225c   |d752225c  |     ✔️      |
|MB2BGM.SEQ     |848147b5   |848147b5   |848147b5  |     ✔️      |
|MB3BGM.SEQ     |047427a6   |047427a6   |047427a6  |     ✔️      |
|PAETBGM.SEQ    |a63cb054   |a63cb054   |a63cb054  |     ✔️      |
|PAET_SE.SEQ    |ef5d8d9e   |ef5d8d9e   |ef5d8d9e  |     ✔️      |
|RUINSE.SEQ     |616f4fef   |616f4fef   |616f4fef  |     ✔️      |
|SEEBGM.SEQ     |58316a4c   |58316a4c   |58316a4c  |     ✔️      |
|SEESE.SEQ      |cc02ee83   |cc02ee83   |cc02ee83  |     ✔️      |
|SYS_SE.SEQ     |77ad6db1   |77ad6db1   |77ad6db1  |     ✔️      |
|TITLE.SEQ      |477195e9   |477195e9   |477195e9  |     ✔️      |
|TOSE.SEQ       |a3f8f015   |a3f8f015   |a3f8f015  |     ✔️      |
|TOWNBGM.SEQ    |f965927d   |f965927d   |f965927d  |     ✔️      |
|TOWNSE.SEQ     |602c517a   |602c517a   |602c517a  |     ✔️      |
|AREAMAP.SND    |9bfd9840   |9bfd9840   |9bfd9840  |     ✔️      |
|SDDRVS.TSK     |cf5c1ff1   |cf5c1ff1   |cf5c1ff1  |     ✔️      |
|ANDRO.TXT*     |a65a6b6f   |________   |________  | Japan Only |
|AZEL_ABS.TXT*  |________   |e3b0c442   |e3b0c442  |English Only|
|AZEL_BIB.TXT*  |________   |e3b0c442   |e3b0c442  |English Only|
|AZEL_CPY.TXT*  |________   |28c60ac8   |28c60ac8  |English Only|



### Prototypes プロトタイプ

Checksum comparison in eight-character truncated SHA256 format of all files in the prototypes. 1917 files in total for all prototypes.

|Legend        |Occurences |
|--------------|-----------|
|👍 ====> All checksums are the same, consistent prototype|582        |
|‼️    ====> Latter two (2nd and 3rd) are similar checksums, unequal to first|470        |
|💤 ====> Absent in Proto-1, the first prototype|546        |
|🦖 ====> Absent in Proto-2, the second prototype|1          |
|💨 ====> Absent in Proto-3, the third prototype|1          |
|🧐 ====> Only in first prototype|221        |
|🥉 ====> Only in third prototype|1          |
|🤯 ====> Varied checksums in each Prototype|79         |
|👾 ====> Varied but absent on Proto-1|13         |
|🛸 ====> Varied but absent on Proto-2|1          |
|👽 ====> Varied but absent on Proto-3|2          |




|Filename      |Proto-1    |Proto-2    |Proto-3    |Changes|
|--------------|-----------|-----------|-----------|-------|
|Release Date  |16/Sep/1997|30/Nov/1997|22/Dec/1997|       |
|B6BOSS.BDB    |b7322e4c   |b7322e4c   |b7322e4c   |👍     |
|ENCAM.BDB     |b0192f0c   |b0192f0c   |b0192f0c   |👍     |
|RAHAB.BDB     |a79d99d6   |a79d99d6   |a79d99d6   |👍     |
|ZUSU.BDB      |c7f12acb   |c7f12acb   |c7f12acb   |👍     |
|A3BGM.BIN     |cb5aa8bc   |cb5aa8bc   |cb5aa8bc   |👍     |
|A3BGM2.BIN    |ec9f4b27   |ec9f4b27   |ec9f4b27   |👍     |
|A3BOSS.BIN    |864f532d   |864f532d   |864f532d   |👍     |
|A3SE.BIN    |0b2f284a   |6a48e06d   |6a48e06d   |‼️     |
|A3ZAKOSE.BIN|5d90c8c2   |11dbc556   |11dbc556   |‼️     |
|A5BGM.BIN     |53b75d20   |53b75d20   |53b75d20   |👍     |
|A5BOSBGM.BIN  |91d4f7a6   |91d4f7a6   |91d4f7a6   |👍     |
|A5BOSS.BIN    |1ddb9804   |1ddb9804   |1ddb9804   |👍     |
|A5SE.BIN    |05d0fd97   |1d7142de   |1d7142de   |‼️     |
|A5ZAKO.BIN    |2c75ad6c   |2c75ad6c   |2c75ad6c   |👍     |
|A7BGM.BIN     |1bb6ae75   |1bb6ae75   |1bb6ae75   |👍     |
|A7MB.BIN    |479058bd   |b1b61b74   |b1b61b74   |‼️     |
|A7SE.BIN      |0602a34b   |0602a34b   |0602a34b   |👍     |
|A7ZAKO.BIN  |aac9caca   |52c2ba87   |52c2ba87   |‼️     |
|AD_SE.BIN    |________   |d16ac640   |d16ac640   |💤     |
|ANTIBGM.BIN  |________   |433475b2   |433475b2   |💤     |
|ANTI_SE.BIN  |________   |cae2c62c   |cae2c62c   |💤     |
|B2BGM1.BIN  |3b980f1f   |8c10db91   |8c10db91   |‼️     |
|B2BGM2.BIN    |b1840cdf   |b1840cdf   |b1840cdf   |👍     |
|B2BOSBGM.BIN |99aae5d5   |________   |________   |🧐     |
|B2BOS_SE.BIN |________   |c710841f   |c710841f   |💤     |
|B2SE.BIN     |________   |c046e48f   |c046e48f   |💤     |
|B5BGM.BIN     |a81c10bd   |a81c10bd   |a81c10bd   |👍     |
|B5MB.BIN      |3a867001   |3a867001   |3a867001   |👍     |
|B5SE.BIN      |96cf563c   |96cf563c   |96cf563c   |👍     |
|B6BGM.BIN     |47ac992d   |47ac992d   |47ac992d   |👍     |
|B6BOSSE.BIN  |________   |4f78b553   |4f78b553   |💤     |
|B6SE.BIN      |351d2a36   |351d2a36   |351d2a36   |👍     |
|B6ZAKOSE.BIN |________   |dcfaa086   |dcfaa086   |💤     |
|BOS2BGM.BIN   |ad8b95df   |ad8b95df   |ad8b95df   |👍     |
|BOS3BGM.BIN   |30132a37   |30132a37   |30132a37   |👍     |
|BOS4BGM.BIN   |1b12ef62   |1b12ef62   |1b12ef62   |👍     |
|BOS5BGM.BIN  |________   |d504aae2   |d504aae2   |💤     |
|BTL1BGM.BIN   |30ec3509   |30ec3509   |30ec3509   |👍     |
|BTL2BGM.BIN   |dae4bf71   |dae4bf71   |dae4bf71   |👍     |
|C2BGM.BIN     |62748959   |62748959   |62748959   |👍     |
|C2BOS_SE.BIN |________   |c5542069   |c5542069   |💤     |
|C2MBSE.BIN   |________   |1ee7ddb1   |1ee7ddb1   |💤     |
|C2SE.BIN    |cdfbd470   |e7311796   |e7311796   |‼️     |
|C2ZAKOSE.BIN|1aa57f79   |cae98fd6   |cae98fd6   |‼️     |
|C4BGM.BIN    |________   |9235b549   |9235b549   |💤     |
|C4MB_SE.BIN  |________   |f06e9641   |f06e9641   |💤     |
|C4SE.BIN     |________   |b759c78a   |b759c78a   |💤     |
|C7SE.BIN     |________   |113d699a   |113d699a   |💤     |
|C8BGM.BIN    |________   |c911d2d9   |c911d2d9   |💤     |
|C8BOS_SE.BIN |________   |97c17e61   |97c17e61   |💤     |
|CAMPBGM.BIN |41aef6d1   |3d93bc5a   |3d93bc5a   |‼️     |
|CAMP_SE.BIN  |________   |2b88c262   |2b88c262   |💤     |
|CARABGM.BIN   |2d8b0161   |2d8b0161   |2d8b0161   |👍     |
|CARA_SE.BIN  |________   |462e3d9e   |462e3d9e   |💤     |
|COPY1BGM.BIN |________   |24ebd747   |24ebd747   |💤     |
|COPY2BGM.BIN |________   |eea4c5d7   |eea4c5d7   |💤     |
|D2BGM.BIN     |f3c7b709   |f3c7b709   |f3c7b709   |👍     |
|D2BOS_SE.BIN |________   |49b541ba   |49b541ba   |💤     |
|D2MBSE.BIN   |________   |3791b4df   |3791b4df   |💤     |
|D2SE.BIN     |________   |0ea3139e   |0ea3139e   |💤     |
|D3BGM.BIN    |________   |9e0644b5   |9e0644b5   |💤     |
|D4BGM.BIN    |________   |7424fa45   |7424fa45   |💤     |
|D4MB_SE.BIN  |________   |8475e0dd   |8475e0dd   |💤     |
|D5BGM.BIN    |________   |cc8c6930   |cc8c6930   |💤     |
|D5COEF.BIN   |________   |6d948c61   |6d948c61   |💤     |
|DRG1SE.BIN  |0ccbd957   |dbada0a9   |dbada0a9   |‼️     |
|E128SE.BIN   |________   |42b56fb8   |42b56fb8   |💤     |
|E14SE.BIN   |ebd7a99d   |2b8ea2aa   |2b8ea2aa   |‼️     |
|E22SE.BIN    |________   |e0109e58   |e0109e58   |💤     |
|E74SE.BIN    |________   |4c74d731   |4c74d731   |💤     |
|E78BGM.BIN  |6bfcad58   |25c763d0   |25c763d0   |‼️     |
|E78SE.BIN     |cff8cf2e   |cff8cf2e   |cff8cf2e   |👍     |
|EDGE_SE.BIN |09b1b23a   |e7c0bd40   |e7c0bd40   |‼️     |
|EDGE_SE2.BIN |________   |31606d2a   |31606d2a   |💤     |
|EXCA_SE.BIN  |________   |ec0b05f0   |ec0b05f0   |💤     |
|HANU_SE.BIN  |________   |07220e3c   |07220e3c   |💤     |
|KOGATA.BIN    |dd07e28d   |dd07e28d   |dd07e28d   |👍     |
|MB01.BIN      |f492749d   |f492749d   |f492749d   |👍     |
|MB04BGM.BIN  |________   |9c069fa1   |9c069fa1   |💤     |
|MB2BGM.BIN    |102d445e   |102d445e   |102d445e   |👍     |
|MB3BGM.BIN   |________   |00baca90   |00baca90   |💤     |
|MENUBK.BIN   |________   |80971be7   |80971be7   |💤     |
|MENUBK2.BIN  |________   |5512cdc3   |5512cdc3   |💤     |
|MENUEN.BIN   |________   |fc6fe34b   |fc6fe34b   |💤     |
|PAETBGM.BIN |faf091a2   |0481b88c   |0481b88c   |‼️     |
|PAET_SE.BIN  |________   |53935411   |53935411   |💤     |
|RUINSE.BIN   |________   |55d7e519   |55d7e519   |💤     |
|SEEBGM.BIN   |________   |8dc75148   |8dc75148   |💤     |
|SEESE.BIN    |________   |1bd62042   |1bd62042   |💤     |
|SYS_SE.BIN   |________   |c3474472   |c3474472   |💤     |
|TITLEBGM.BIN  |cb5aa8bc   |cb5aa8bc   |cb5aa8bc   |👍     |
|TOSE.BIN     |________   |15a66ae8   |15a66ae8   |💤     |
|TOWNBGM.BIN   |9ffcc190   |9ffcc190   |9ffcc190   |👍     |
|TOWNSE.BIN  |92e4af5d   |3891a0e8   |3891a0e8   |‼️     |
|A3CMN.CGB     |e9886261   |e9886261   |e9886261   |👍     |
|A5CMN.CGB   |4e8b717f   |9b84643a   |9b84643a   |‼️     |
|A7CMN.CGB   |0ab6a2d7   |da381ae8   |da381ae8   |‼️     |
|ABOMB2.CGB   |________   |9ae37791   |9ae37791   |💤     |
|AD.CGB      |f7575957   |c4b99001   |c4b99001   |‼️     |
|AD3.CGB     |e79dd3dc   |83eb035a   |83eb035a   |‼️     |
|AD_EFF.CGB   |________   |948dbfb1   |948dbfb1   |💤     |
|AIRBOMB.CGB   |f65237dc   |f65237dc   |f65237dc   |👍     |
|AJITOBJ.CGB   |214d2731   |214d2731   |214d2731   |👍     |
|AJITOMP0.CGB  |6484efa6   |6484efa6   |6484efa6   |👍     |
|AJITOMP1.CGB  |62a6f217   |62a6f217   |62a6f217   |👍     |
|ANAKAZU.CGB   |a23e6ba5   |a23e6ba5   |a23e6ba5   |👍     |
|ANTIDRA.CGB  |________   |84612ade   |84612ade   |💤     |
|ANTIDRAG.CGB |________   |bb4f59f1   |bb4f59f1   |💤     |
|ARSRO.CGB   |49d1fa16   |ad8c3a5a   |ad8c3a5a   |‼️     |
|ASLTHANU.CGB |________   |5f23fd20   |5f23fd20   |💤     |
|AWEN.CGB    |838c1da0   |47e37b7a   |47e37b7a   |‼️     |
|AZCT.CGB     |________   |b599afc5   |b599afc5   |💤     |
|AZEL.CGB    |f596fb97   |7d4e3fcb   |7d4e3fcb   |‼️     |
|AZELMP.CGB    |019bcbd2   |019bcbd2   |019bcbd2   |👍     |
|B2CMN.CGB     |ed75d480   |ed75d480   |ed75d480   |👍     |
|B5CMN.CGB     |2c9adee8   |2c9adee8   |2c9adee8   |👍     |
|B6BOSS.CGB  |e336d4e7   |6ad03273   |6ad03273   |‼️     |
|B6CMN.CGB     |44a26bf0   |44a26bf0   |44a26bf0   |👍     |
|B6EGG.CGB     |116709ee   |116709ee   |116709ee   |👍     |
|B6LARVA.CGB |db863685   |a3c9ec5f   |a3c9ec5f   |‼️     |
|B6MERN.CGB  |5cbe0aa9   |d5de2f33   |d5de2f33   |‼️     |
|B6MID.CGB   |7b85eb2e   |e702d3a8   |e702d3a8   |‼️     |
|B6RIO.CGB     |fdcbfa9f   |fdcbfa9f   |fdcbfa9f   |👍     |
|BARIOH.CGB  |09656dc5   |c92d3522   |c92d3522   |‼️     |
|BARISTA.CGB |743059a9   |9334cf42   |9334cf42   |‼️     |
|BARMP.CGB   |197ab43b   |6adfa67b   |6adfa67b   |‼️     |
|BATTLE.CGB  |134a92d7   |6a70b348   |6a70b348   |‼️     |
|BEMOS.CGB     |b5be0dc3   |b5be0dc3   |b5be0dc3   |👍     |
|BENITATE.CGB  |22387e87   |22387e87   |22387e87   |👍     |
|BLDAMP.CGB  |2a77927f   |3c8ac3e7   |3c8ac3e7   |‼️     |
|BM.CGB       |________   |8ca31f40   |8ca31f40   |💤     |
|BMP_A7_0.CGB|2359c833   |655ccac7   |655ccac7   |‼️     |
|BMP_B5_0.CGB  |98f73bf0   |98f73bf0   |98f73bf0   |👍     |
|BMP_B5_1.CGB  |98f73bf0   |98f73bf0   |98f73bf0   |👍     |
|BMP_C8_B.CGB |________   |c33a8087   |c33a8087   |💤     |
|BOMBLV3.CGB   |ec5129a9   |ec5129a9   |ec5129a9   |👍     |
|BTFALLA3.CGB  |51bbfcbd   |51bbfcbd   |51bbfcbd   |👍     |
|BUM.CGB     |99cf90a6   |9c80d62b   |9c80d62b   |‼️     |
|C22CMN.CGB    |ff0c805b   |ff0c805b   |ff0c805b   |👍     |
|C2CMN.CGB   |1d175a84   |da20d538   |da20d538   |‼️     |
|C4CMN.CGB   |11750c9e   |3caf7d8d   |3caf7d8d   |‼️     |
|C4PASS.CGB    |f19d8f0d   |f19d8f0d   |f19d8f0d   |👍     |
|C5CMN.CGB   |1d175a84   |0ff771f5   |0ff771f5   |‼️     |
|C8CMN.CGB   |4e01b83d   |475fd9fd   |475fd9fd   |‼️     |
|CADRO.CGB    |________   |cc22d338   |cc22d338   |💤     |
|CAMPMP1.CGB   |44b10d73   |44b10d73   |44b10d73   |👍     |
|CAMPMP2.CGB   |ce22c060   |ce22c060   |ce22c060   |👍     |
|CAMPMP3.CGB |68e5dfb3   |6149655    |6149655    |‼️     |
|CAMPMP4.CGB |0a02de86   |31b7c261   |31b7c261   |‼️     |
|CAMPMP5.CGB   |824328cd   |824328cd   |824328cd   |👍     |
|CAMPMP6.CGB |2b70def5   |6e482d97   |6e482d97   |‼️     |
|CAMPMP7.CGB |e56fb442   |7f4cdb7a   |7f4cdb7a   |‼️     |
|CAMPMP8.CGB |52bb9267   |748dec9f   |748dec9f   |‼️     |
|CAMPOBJ.CGB |4ce11e60   |f7e9e54e   |f7e9e54e   |‼️     |
|CARAVMP.CGB   |5ced767c   |5ced767c   |5ced767c   |👍     |
|CHARCMP0.CGB|1aa6d23f   |c664cafc   |c664cafc   |‼️     |
|CHARCMP1.CGB |________   |c664cafc   |c664cafc   |💤     |
|CHILDMP.CGB |9b602ede   |a6f919c7   |a6f919c7   |‼️     |
|COMMON3.CGB |663235d3   |189b0d23   |189b0d23   |‼️     |
|CORE.CGB    |32e951db   |20aa4f56   |20aa4f56   |‼️     |
|CYCLONE.CGB   |f39c5182   |f39c5182   |f39c5182   |👍     |
|C_DRA0.CGB    |7305990a   |7305990a   |7305990a   |👍     |
|D2CMN.CGB   |1d175a84   |3a1a356d   |3a1a356d   |‼️     |
|D4CMN.CGB    |________   |d8510f2d   |d8510f2d   |💤     |
|D5HANU.CGB   |________   |d7ed4006   |d7ed4006   |💤     |
|D5LAND.CGB   |________   |bf1813fb   |bf1813fb   |💤     |
|D5LDRA.CGB   |________   |2afff031   |2afff031   |💤     |
|D5MERU.CGB   |________   |295d4e82   |295d4e82   |💤     |
|D5NOOS.CGB   |________   |7c034a90   |7c034a90   |💤     |
|D5NURU.CGB   |________   |aaa50b73   |aaa50b73   |💤     |
|D5SHELL.CGB  |________   |20fa9d97   |20fa9d97   |💤     |
|D5TGD.CGB    |________   |ab289493   |ab289493   |💤     |
|DRAGON0.CGB |e3db6556   |5029651    |5029651    |‼️     |
|DRAGON1.CGB   |a53a13c7   |a53a13c7   |a53a13c7   |👍     |
|DRAGON2.CGB |cd956480   |6ca6dcef   |6ca6dcef   |‼️     |
|DRAGON3.CGB   |f1aa4d61   |f1aa4d61   |f1aa4d61   |👍     |
|DRAGON4.CGB |640ac9ce   |78c31e94   |78c31e94   |‼️     |
|DRAGON5.CGB   |d3ca73fb   |d3ca73fb   |d3ca73fb   |👍     |
|DRAGON6.CGB |1048a248   |2258702d   |2258702d   |‼️     |
|DRAGON7.CGB   |8221ce59   |8221ce59   |8221ce59   |👍     |
|DRAGONC0.CGB|d22bdf8d   |feaa228c   |feaa228c   |‼️     |
|DRAGONC1.CGB  |a53a13c7   |a53a13c7   |a53a13c7   |👍     |
|DRAGONC2.CGB|cd956480   |6ca6dcef   |6ca6dcef   |‼️     |
|DRAGONC3.CGB  |f1aa4d61   |f1aa4d61   |f1aa4d61   |👍     |
|DRAGONC4.CGB|640ac9ce   |78c31e94   |78c31e94   |‼️     |
|DRAGONM1.CGB  |9ad0cf29   |9ad0cf29   |9ad0cf29   |👍     |
|DRAGONM2.CGB|dcdfc645   |3e6f202f   |3e6f202f   |‼️     |
|DRAGONM3.CGB  |fa2f5320   |fa2f5320   |fa2f5320   |👍     |
|DRAGONM4.CGB|a70f48b4   |e4b8b49a   |e4b8b49a   |‼️     |
|DRAGONM5.CGB  |85cf6a3e   |85cf6a3e   |85cf6a3e   |👍     |
|DRAGONM7.CGB  |fa38fa67   |fa38fa67   |fa38fa67   |👍     |
|DRVA.CGB    |04a3d163   |e77deab3   |e77deab3   |‼️     |
|DYURA00.CGB  |________   |74016eb8   |74016eb8   |💤     |
|DYURA01.CGB  |________   |e8160c29   |e8160c29   |💤     |
|DYURA02.CGB  |________   |7cb88229   |7cb88229   |💤     |
|DYURA03.CGB  |________   |6d8386e5   |6d8386e5   |💤     |
|DYURA04.CGB  |________   |ae3cf684   |ae3cf684   |💤     |
|EDGE.CGB    |a545ec31   |f7ee1920   |f7ee1920   |‼️     |
|EVT011MP.CGB|295a9a82   |eefa7a45   |eefa7a45   |‼️     |
|EVT014MP.CGB  |1b12895b   |1b12895b   |1b12895b   |👍     |
|EVT021MP.CGB |________   |3af7112f   |3af7112f   |💤     |
|EVT057MP.CGB |74515a41   |________   |________   |🧐     |
|EVT059MP.CGB |bcffa953   |________   |________   |🧐     |
|EVT078.CGB   |51ec3c80   |________   |________   |🧐     |
|EVT078MP.CGB |9849bc72   |________   |________   |🧐     |
|EXCAVAMP.CGB|188c0e10   |c669402e   |c669402e   |‼️     |
|FBALL.CGB    |0ff771f5   |________   |________   |🧐     |
|FINAL.CGB    |________   |29249e40   |29249e40   |💤     |
|FIRE.CGB    |33e24a00   |bab3dd78   |bab3dd78   |‼️     |
|FLDCMN.CGB  |c0c44014   |d73f1a99   |d73f1a99   |‼️     |
|FLD_A3.CGB  |c30ec3e2   |4052b568   |4052b568   |‼️     |
|FLD_A3_0.CGB|39715030   |50c821fd   |50c821fd   |‼️     |
|FLD_A3_1.CGB  |0532f457   |0532f457   |0532f457   |👍     |
|FLD_A3_2.CGB  |9c873414   |9c873414   |9c873414   |👍     |
|FLD_A3_3.CGB  |28da960e   |28da960e   |28da960e   |👍     |
|FLD_A5.CGB  |2411e8a9   |296ceca3   |296ceca3   |‼️     |
|FLD_A5_0.CGB  |fec93fa9   |fec93fa9   |fec93fa9   |👍     |
|FLD_A5_2.CGB|dba9d3f7   |4af96b2c   |4af96b2c   |‼️     |
|FLD_A5_4.CGB|9e79e923   |fc1459dc   |fc1459dc   |‼️     |
|FLD_A5_7.CGB |________   |0e016183   |0e016183   |💤     |
|FLD_A5_8.CGB |________   |52468867   |52468867   |💤     |
|FLD_A5_9.CGB |________   |640d5ff0   |640d5ff0   |💤     |
|FLD_A5_B.CGB |________   |36af8074   |36af8074   |💤     |
|FLD_A7_0.CGB  |9adf48eb   |9adf48eb   |9adf48eb   |👍     |
|FLD_A7_1.CGB|ef463348   |d7fa79a0   |d7fa79a0   |‼️     |
|FLD_A7_2.CGB  |0cca967d   |0cca967d   |0cca967d   |👍     |
|FLD_B2.CGB    |7318c638   |7318c638   |7318c638   |👍     |
|FLD_B2_1.CGB|87415df7   |a43a1b2d   |a43a1b2d   |‼️     |
|FLD_B2_3.CGB|e0fe1ba6   |a994a4d6   |a994a4d6   |‼️     |
|FLD_B2_4.CGB  |60b1730d   |60b1730d   |60b1730d   |👍     |
|FLD_B5_0.CGB|ffbfd9a4   |050b140d   |050b140d   |‼️     |
|FLD_B5_1.CGB|27a121d1   |db452180   |db452180   |‼️     |
|FLD_B5_2.CGB|b12b59a4   |0f4f3bea   |0f4f3bea   |‼️     |
|FLD_B5_3.CGB  |bc298347   |bc298347   |bc298347   |👍     |
|FLD_B5_4.CGB|8ea3c4f6   |358b709f   |358b709f   |‼️     |
|FLD_B6.CGB    |8361d45c   |8361d45c   |8361d45c   |👍     |
|FLD_B6_0.CGB|f0266c8b   |9990d31b   |9990d31b   |‼️     |
|FLD_B6_1.CGB|6255ed06   |230ce932   |230ce932   |‼️     |
|FLD_B6_2.CGB|c0783d97   |bcc11888   |bcc11888   |‼️     |
|FLD_B6_3.CGB|249154f4   |ddd93406   |ddd93406   |‼️     |
|FLD_B6_4.CGB  |195b5dda   |195b5dda   |195b5dda   |👍     |
|FLD_B6_5.CGB|6674235f   |0692f912   |0692f912   |‼️     |
|FLD_B6_6.CGB|3f7eebb0   |5c053584   |5c053584   |‼️     |
|FLD_B6_8.CGB|26ea8cbd   |53278eaa   |53278eaa   |‼️     |
|FLD_B6_9.CGB  |a3228607   |a3228607   |a3228607   |👍     |
|FLD_C2_0.CGB|1af1e86a   |45daafec   |45daafec   |‼️     |
|FLD_C4.CGB  |e99c46fe   |ccd5213d   |ccd5213d   |‼️     |
|FLD_C4_0.CGB|7ce9e466   |47ff7067   |47ff7067   |‼️     |
|FLD_C4_1.CGB  |b3f24b18   |b3f24b18   |b3f24b18   |👍     |
|FLD_C4_2.CGB  |e68b46d9   |e68b46d9   |e68b46d9   |👍     |
|FLD_C4_3.CGB|7bca940c   |b2ab4053   |b2ab4053   |‼️     |
|FLD_C4_4.CGB  |aaf28fdd   |aaf28fdd   |aaf28fdd   |👍     |
|FLD_C4_5.CGB|ca4a04ba   |e4149490   |e4149490   |‼️     |
|FLD_C4_6.CGB|629615a0   |32f6fb53   |32f6fb53   |‼️     |
|FLD_D2_0.CGB|bc0f2f4a   |a891fb03   |a891fb03   |‼️     |
|FLD_D2_1.CGB|af07896b   |4327f35d   |4327f35d   |‼️     |
|FLD_D3_0.CGB|de58b6ce   |4f5534d8   |4f5534d8   |‼️     |
|FLD_D5_0.CGB|7c8f76ef   |1586f82d   |1586f82d   |‼️     |
|FLD_T0.CGB  |a2cdb9b3   |41bec2b9   |41bec2b9   |‼️     |
|FLD_T0_0.CGB|91c11366   |f60cc1d7   |f60cc1d7   |‼️     |
|FLD_T0_1.CGB|3ac4731e   |dd49285e   |dd49285e   |‼️     |
|FLD_T0_3.CGB|8272788f   |7bb04d0d   |7bb04d0d   |‼️     |
|FLD_T0_4.CGB|43e3f852   |26c70d19   |26c70d19   |‼️     |
|FLD_T0_5.CGB|ae7d7b8f   |75ee7df5   |75ee7df5   |‼️     |
|FLD_T1_0.CGB|265f6a5d   |13c784ce   |13c784ce   |‼️     |
|FLD_T1_1.CGB|83c84bfa   |d5ec1a94   |d5ec1a94   |‼️     |
|FLD_T2_0.CGB|c26f7046   |57ae9a7d   |57ae9a7d   |‼️     |
|FLD_T2_1.CGB|698c863b   |a98c8130   |a98c8130   |‼️     |
|FLD_T2_4.CGB|9b84cf86   |25c89958   |25c89958   |‼️     |
|FLD_T2_A.CGB|4da530d9   |80e57c3a   |80e57c3a   |‼️     |
|FLD_T2_D.CGB|70471c5e   |d1ad4e28   |d1ad4e28   |‼️     |
|FLD_T3_0.CGB|24d852e6   |395a14e8   |395a14e8   |‼️     |
|FLD_T3_1.CGB|737eb456   |e392f790   |e392f790   |‼️     |
|FLD_T4_0.CGB|bb9c8f50   |12fa8918   |12fa8918   |‼️     |
|FLD_T4_1.CGB|3816efa3   |78a1ea20   |78a1ea20   |‼️     |
|FLD_T4_2.CGB|11711ec3   |eed65ba7   |eed65ba7   |‼️     |
|GBOMB2.CGB   |________   |646988c0   |646988c0   |💤     |
|GERAKI.CGB  |38ed4b5d   |027a358d   |027a358d   |‼️     |
|GRDBOMB.CGB   |0a691194   |0a691194   |0a691194   |👍     |
|GRIGORIG.CGB|e5570e96   |a47a9553   |a47a9553   |‼️     |
|GUSH.CGB    |2f000b48   |3ea5511e   |3ea5511e   |‼️     |
|HANSA.CGB   |4c931092   |a959ee64   |a959ee64   |‼️     |
|HEBIMUSI.CGB  |b58f7bc6   |b58f7bc6   |b58f7bc6   |👍     |
|HEBISU.CGB    |b09b4d7d   |b09b4d7d   |b09b4d7d   |👍     |
|HEBI_TUR.CGB  |1cd0fe5b   |1cd0fe5b   |1cd0fe5b   |👍     |
|HIDINGMP.CGB  |8c75de31   |8c75de31   |8c75de31   |👍     |
|HUNTAMP0.CGB|9c72e530   |8de06da9   |8de06da9   |‼️     |
|HUNTAMP1.CGB |________   |8de06da9   |8de06da9   |💤     |
|HUNTDMP0.CGB|f738c57e   |ac73c7a5   |ac73c7a5   |‼️     |
|HUNTDMP1.CGB|34a4a3ea   |ff57228e   |ff57228e   |‼️     |
|IVASIVIA.CGB |________   |a7845d90   |a7845d90   |💤     |
|JINKOU.CGB    |8478236e   |8478236e   |8478236e   |👍     |
|JINKOUB5.CGB |________   |eb02aef6   |eb02aef6   |💤     |
|JIRO.CGB      |2f9486b8   |2f9486b8   |2f9486b8   |👍     |
|JUNKMP.CGB  |388fe1d2   |4f566b7d   |4f566b7d   |‼️     |
|KARA.CGB      |c7c90a26   |c7c90a26   |c7c90a26   |👍     |
|KARAA72.CGB  |________   |dfee07ff   |dfee07ff   |💤     |
|KARLA.CGB    |________   |4f8cf3ed   |4f8cf3ed   |💤     |
|KEIKOKU.CGB   |19007ea4   |19007ea4   |19007ea4   |👍     |
|KEI_BOSS.CGB|7f538454   |8dcd7bc0   |8dcd7bc0   |‼️     |
|KEYAEFF.CGB   |3eb9a704   |3eb9a704   |3eb9a704   |👍     |
|KHDRAGON.CGB |________   |53db3f45   |53db3f45   |💤     |
|KOJO.CGB      |1e390fc5   |1e390fc5   |1e390fc5   |👍     |
|KTEI.CGB      |8878ee20   |8878ee20   |8878ee20   |👍     |
|KURAGE.CGB    |e2b7d416   |e2b7d416   |e2b7d416   |👍     |
|LANQUER.CGB  |________   |7dce2e6d   |7dce2e6d   |💤     |
|LIBRAMP.CGB |53dd19ce   |b6ee2d35   |b6ee2d35   |‼️     |
|LODGEMP0.CGB|88c48157   |3f692ed2   |3f692ed2   |‼️     |
|LODGEMP1.CGB|6d2b6f44   |196c1fce   |196c1fce   |‼️     |
|LOLOS.CGB    |________   |7a031f7a   |7a031f7a   |💤     |
|LSHIP.CGB    |________   |53a614f0   |53a614f0   |💤     |
|MASAN.CGB     |169d2a40   |169d2a40   |169d2a40   |👍     |
|MENU.CGB    |0b1e51e8   |be374a9a   |be374a9a   |‼️     |
|MENUBK.CGB   |________   |7ff92ba2   |7ff92ba2   |💤     |
|MENUEN.CGB   |________   |efec54d7   |efec54d7   |💤     |
|MERN.CGB      |f12f16cd   |f12f16cd   |f12f16cd   |👍     |
|MERUKABA.CGB  |662fb260   |662fb260   |662fb260   |👍     |
|MPDRAGON.CGB |________   |bc7710f7   |bc7710f7   |💤     |
|MSHIP.CGB    |________   |308648a8   |308648a8   |💤     |
|MULT.CGB    |a5881d4a   |7c4522f1   |7c4522f1   |‼️     |
|MUR.CGB       |97df7e62   |97df7e62   |97df7e62   |👍     |
|MZUB.CGB     |________   |e8a37f2f   |e8a37f2f   |💤     |
|NAME_ENT.CGB|868565fb   |a8cb2adf   |a8cb2adf   |‼️     |
|NEW_BUM.CGB |b8ff703d   |f7fd84a6   |f7fd84a6   |‼️     |
|NULLY.CGB     |92fd16b6   |92fd16b6   |92fd16b6   |👍     |
|OKAFUGU.CGB   |fc93adfd   |fc93adfd   |fc93adfd   |👍     |
|OZL.CGB       |fd49e394   |fd49e394   |fd49e394   |👍     |
|PAET.CGB     |________   |c7f02f6d   |c7f02f6d   |💤     |
|PAETMP0.CGB |61a8924f   |c74a014d   |c74a014d   |‼️     |
|PAETMP1.CGB |b212247d   |aac19a3e   |aac19a3e   |‼️     |
|PARAORIG.CGB|0ff771f5   |140165e2   |140165e2   |‼️     |
|PGORAIAS.CGB |________   |c6e1b31d   |c6e1b31d   |💤     |
|POISON.CGB    |ce183e17   |ce183e17   |ce183e17   |👍     |
|PROBOMB.CGB   |522ccd0f   |522ccd0f   |522ccd0f   |👍     |
|PUP.CGB       |4a7488ac   |4a7488ac   |4a7488ac   |👍     |
|RAHAB.CGB   |04582a83   |2165a11b   |2165a11b   |‼️     |
|RANDORA.CGB  |________   |bf1813fb   |bf1813fb   |💤     |
|REUNA.CGB    |________   |ed8f085f   |ed8f085f   |💤     |
|RIO.CGB       |1bb4f4c9   |1bb4f4c9   |1bb4f4c9   |👍     |
|ROOMTEST.CGB  |f0b7a23d   |f0b7a23d   |f0b7a23d   |👍     |
|RUINMP.CGB    |893c5f02   |893c5f02   |893c5f02   |👍     |
|SABAKU02.CGB  |5f47e12f   |5f47e12f   |5f47e12f   |👍     |
|SABAKU04.CGB  |5f47e12f   |5f47e12f   |5f47e12f   |👍     |
|SABAKU_B.CGB  |19ec3f97   |19ec3f97   |19ec3f97   |👍     |
|SAVE.CGB     |________   |6590f93c   |6590f93c   |💤     |
|SCRBTLA5.CGB  |c829bc1a   |c829bc1a   |c829bc1a   |👍     |
|SDON.CGB      |17b0274b   |17b0274b   |17b0274b   |👍     |
|SEEKMP.CGB  |1b2b77c9   |41774e3f   |41774e3f   |‼️     |
|SEEKMP1.CGB |733d2289   |85f92d83   |85f92d83   |‼️     |
|SHOKU.CGB     |7d11267b   |7d11267b   |7d11267b   |👍     |
|SHRINE.CGB   |________   |a3175e90   |a3175e90   |💤     |
|SICKMP.CGB  |3b50e1eb   |57f18aa5   |57f18aa5   |‼️     |
|SKJKMP.CGB  |dc5cb6c1   |927279b4   |927279b4   |‼️     |
|SLIGHT.CGB    |9d8a74a2   |9d8a74a2   |9d8a74a2   |👍     |
|SNB.CGB       |d3ca3704   |d3ca3704   |d3ca3704   |👍     |
|SOMA.CGB      |b9374774   |b9374774   |b9374774   |👍     |
|SOUKOMP.CGB |1319d509   |4884d9ba   |4884d9ba   |‼️     |
|SOUKOMP1.CGB  |834ea655   |834ea655   |834ea655   |👍     |
|SOUKOMP2.CGB |________   |64626214   |64626214   |💤     |
|SRA.CGB      |________   |35672533   |35672533   |💤     |
|STK01.CGB   |27c44764   |f14b614c   |f14b614c   |‼️     |
|STK02.CGB   |bb691d97   |34ba9427   |34ba9427   |‼️     |
|STK03.CGB     |c70786c6   |c70786c6   |c70786c6   |👍     |
|STK12.CGB     |17207f86   |17207f86   |17207f86   |👍     |
|STOREMP.CGB |f49eefad   |2cf8dfbc   |2cf8dfbc   |‼️     |
|STUN.CGB      |b4e2d9de   |b4e2d9de   |b4e2d9de   |👍     |
|SURFHANU.CGB |________   |18dfc717   |18dfc717   |💤     |
|TAM.CGB       |d787078e   |d787078e   |d787078e   |👍     |
|TAMAMP.CGB  |a28a7524   |306509af   |306509af   |‼️     |
|TAMPRO.CGB    |f2148442   |f2148442   |f2148442   |👍     |
|TAPAS.CGB     |f9ffd271   |f9ffd271   |f9ffd271   |👍     |
|TARO.CGB      |fe9db634   |fe9db634   |fe9db634   |👍     |
|TAROJIRO.CGB |________   |35f0597f   |35f0597f   |💤     |
|TEF_MSL.CGB  |22e4ecdf   |________   |________   |🧐     |
|TENTSMMP.CGB|1465817e   |2b8d8734   |2b8d8734   |‼️     |
|TGD.CGB       |eda238b3   |eda238b3   |eda238b3   |👍     |
|TUP.CGB     |2288222e   |e809829b   |e809829b   |‼️     |
|TUTORIAL.CGB  |ba14f45b   |ba14f45b   |ba14f45b   |👍     |
|URUFIRE.CGB  |________   |9622cce5   |9622cce5   |💤     |
|URUGND.CGB    |86904b79   |86904b79   |86904b79   |👍     |
|URUGND_B.CGB  |b95dcbd8   |b95dcbd8   |b95dcbd8   |👍     |
|URUGND_M.CGB  |5944d0ef   |5944d0ef   |5944d0ef   |👍     |
|URUNURI.CGB   |aff95167   |aff95167   |aff95167   |👍     |
|URUTUP.CGB   |________   |0d507b34   |0d507b34   |💤     |
|URU_DAY.CGB   |aff95167   |aff95167   |aff95167   |👍     |
|URU_NGT.CGB   |aff95167   |aff95167   |aff95167   |👍     |
|URU_ROCK.CGB  |036ab537   |036ab537   |036ab537   |👍     |
|URU_YUU.CGB   |aff95167   |aff95167   |aff95167   |👍     |
|UZU.CGB       |7b6e3b7d   |7b6e3b7d   |7b6e3b7d   |👍     |
|VAJURA.CGB  |0ab2b9be   |d8dc5a64   |d8dc5a64   |‼️     |
|VALNA.CGB   |216fc238   |0ecb4b16   |0ecb4b16   |‼️     |
|VARAHA.CGB  |efba5f0d   |e2d69fb5   |e2d69fb5   |‼️     |
|VRITRA.CGB    |0517b9f1   |0517b9f1   |0517b9f1   |👍     |
|VRITRA1.CGB |83cf283c   |08fee6b5   |08fee6b5   |‼️     |
|VRITRA2.CGB |c675d0fa   |91f836cc   |91f836cc   |‼️     |
|VW_DAIOU.CGB |________   |02fd54c3   |02fd54c3   |💤     |
|VW_GRIG.CGB  |________   |cc2f7b97   |cc2f7b97   |💤     |
|VW_KISEI.CGB |________   |4d1b9f49   |4d1b9f49   |💤     |
|VW_LAS.CGB   |________   |6729325a   |6729325a   |💤     |
|VW_MIYAB.CGB |________   |aa6ecd84   |aa6ecd84   |💤     |
|VW_SU.CGB    |________   |4f07a391   |4f07a391   |💤     |
|VW_VARAH.CGB |________   |3b800efa   |3b800efa   |💤     |
|VW_VET.CGB   |________   |6722670f   |6722670f   |💤     |
|VW_ZUSU.CGB  |________   |02d9aed9   |02d9aed9   |💤     |
|WAVE.CGB     |________   |0781de8f   |0781de8f   |💤     |
|WEAK.CGB      |dea92dee   |dea92dee   |dea92dee   |👍     |
|WORLDMAP.CGB|f3b50dc7   |6bb4252e   |6bb4252e   |‼️     |
|X_A_AB.CGB  |e707cdad   |72bee4e9   |72bee4e9   |‼️     |
|X_A_AZ.CGB    |8934f93d   |8934f93d   |8934f93d   |👍     |
|X_A_BK.CGB    |d277a357   |d277a357   |d277a357   |👍     |
|X_A_BZ.CGB    |e20ec471   |e20ec471   |e20ec471   |👍     |
|X_A_CR.CGB  |09c8057a   |bcc0baf0   |bcc0baf0   |‼️     |
|X_A_CS.CGB    |38fe57e5   |38fe57e5   |38fe57e5   |👍     |
|X_A_EN.CGB    |768bf056   |768bf056   |768bf056   |👍     |
|X_A_JB.CGB    |a5fe0fa6   |a5fe0fa6   |a5fe0fa6   |👍     |
|X_A_LG.CGB    |301eb7a4   |301eb7a4   |301eb7a4   |👍     |
|X_A_LR.CGB    |a85bddb1   |a85bddb1   |a85bddb1   |👍     |
|X_A_MA.CGB    |fdcff0cb   |fdcff0cb   |fdcff0cb   |👍     |
|X_A_PR.CGB    |c0017547   |c0017547   |c0017547   |👍     |
|X_A_PT.CGB    |562d34d4   |562d34d4   |562d34d4   |👍     |
|X_A_QT.CGB    |d6e004db   |d6e004db   |d6e004db   |👍     |
|X_A_RB.CGB    |9ac98845   |9ac98845   |9ac98845   |👍     |
|X_A_RG.CGB    |9e01fa4d   |9e01fa4d   |9e01fa4d   |👍     |
|X_A_SM.CGB    |e1d02c48   |e1d02c48   |e1d02c48   |👍     |
|X_A_TA.CGB    |c92b58de   |c92b58de   |c92b58de   |👍     |
|X_A_TB.CGB    |0483a59e   |0483a59e   |0483a59e   |👍     |
|X_A_YD.CGB    |c72d0e08   |c72d0e08   |c72d0e08   |👍     |
|X_A_YR.CGB    |78762772   |78762772   |78762772   |👍     |
|X_A_ZD.CGB    |813f9c7d   |813f9c7d   |813f9c7d   |👍     |
|X_E_BM.CGB  |d02f58c2   |04441d1e   |04441d1e   |‼️     |
|X_E_DM.CGB    |23bd649f   |23bd649f   |23bd649f   |👍     |
|X_F_AB.CGB   |________   |072a3030   |072a3030   |💤     |
|X_F_LG.CGB   |________   |418219a1   |418219a1   |💤     |
|X_F_LR.CGB    |66980a06   |66980a06   |66980a06   |👍     |
|X_F_PR.CGB   |________   |08e15fa9   |08e15fa9   |💤     |
|X_F_QT.CGB   |________   |d7d0c0a2   |d7d0c0a2   |💤     |
|X_F_RB.CGB   |________   |9a389dab   |9a389dab   |💤     |
|X_F_SM.CGB    |8e42be53   |8e42be53   |8e42be53   |👍     |
|X_G_AZ.CGB    |2487d517   |2487d517   |2487d517   |👍     |
|X_G_LG.CGB    |d3e7690b   |d3e7690b   |d3e7690b   |👍     |
|X_X_EN.CGB    |4403dcef   |4403dcef   |4403dcef   |👍     |
|X_X_LG.CGB    |301eb7a4   |301eb7a4   |301eb7a4   |👍     |
|X_X_YD.CGB    |c72d0e08   |c72d0e08   |c72d0e08   |👍     |
|ZOAHMP0D.CGB|75ab54d6   |e228b51c   |e228b51c   |‼️     |
|ZOAHMP0N.CGB|75ab54d6   |380be3e0   |380be3e0   |‼️     |
|ZOAHMP1D.CGB|2982d598   |ed383843   |ed383843   |‼️     |
|ZOAHMP1N.CGB|cfb20df2   |ed383843   |ed383843   |‼️     |
|ZOAHOBJ0.CGB  |14ec7515   |14ec7515   |14ec7515   |👍     |
|ZOAHOBJ1.CGB  |5977353b   |5977353b   |5977353b   |👍     |
|ZOAH_OW.CGB   |94cb41a3   |94cb41a3   |94cb41a3   |👍     |
|ZUSU.CGB    |b9933848   |301a709d   |301a709d   |‼️     |
|Z_A_AR.CGB  |59249408   |a0665716   |a0665716   |‼️     |
|Z_A_AY.CGB    |d4ab4c7a   |d4ab4c7a   |d4ab4c7a   |👍     |
|Z_A_DM.CGB    |c3d7cace   |c3d7cace   |c3d7cace   |👍     |
|Z_A_EG.CGB    |5d11d366   |5d11d366   |5d11d366   |👍     |
|Z_A_EK.CGB    |3069542c   |3069542c   |3069542c   |👍     |
|Z_A_FE.CGB    |dd329802   |dd329802   |dd329802   |👍     |
|Z_A_GS.CGB  |1fa94fa9   |ecd5c223   |ecd5c223   |‼️     |
|Z_A_JR.CGB    |b7479c4d   |b7479c4d   |b7479c4d   |👍     |
|Z_A_KH.CGB  |d6664723   |11fa320f   |11fa320f   |‼️     |
|Z_A_LD.CGB    |6f9b8898   |6f9b8898   |6f9b8898   |👍     |
|Z_A_RD.CGB    |c80a199f   |c80a199f   |c80a199f   |👍     |
|Z_A_SF.CGB    |85eec9f9   |85eec9f9   |85eec9f9   |👍     |
|Z_A_SR.CGB    |1f954f9e   |1f954f9e   |1f954f9e   |👍     |
|Z_A_VZ.CGB  |91d63c2e   |f3c16143   |f3c16143   |‼️     |
|Z_B_RD.CGB    |5663a95f   |5663a95f   |5663a95f   |👍     |
|Z_E_AY.CGB    |bdfb45b1   |bdfb45b1   |bdfb45b1   |👍     |
|Z_E_GS.CGB    |06ddc3f2   |06ddc3f2   |06ddc3f2   |👍     |
|Z_F_AY.CGB    |b0098284   |b0098284   |b0098284   |👍     |
|Z_F_FE.CGB   |________   |9d5304fe   |9d5304fe   |💤     |
|ASCII.CGZ   |________   |1dfaa82d   |defdba99   |👾     |
|EVT000_1.CPK|1057574b   |04c5a063   |04c5a063   |‼️     |
|EVT000_2.CPK|9022a6b2   |f400677a   |f400677a   |‼️     |
|EVT000_3.CPK|c358a4b5   |b3fd4b6d   |b3fd4b6d   |‼️     |
|EVT000_4.CPK|3b6aec3c   |22aed057   |22aed057   |‼️     |
|EVT000_5.CPK|8d210249   |81842b1b   |81842b1b   |‼️     |
|EVT002.CPK   |________   |c4c5f6fd   |c4c5f6fd   |💤     |
|EVT004_1.CPK |________   |2d35b78f   |2d35b78f   |💤     |
|EVT004_2.CPK |________   |dcc9abe3   |dcc9abe3   |💤     |
|EVT008.CPK  |6bdd9240   |cdac723d   |cdac723d   |‼️     |
|EVT016_1.CPK |________   |a026e8f3   |a026e8f3   |💤     |
|EVT016_2.CPK|c72aee12   |bf4386e4   |bf4386e4   |‼️     |
|EVT016_3.CPK |________   |4c5f2fff   |4c5f2fff   |💤     |
|EVT029.CPK  |e8cf6dd8   |799c0d98   |799c0d98   |‼️     |
|MOVIE1.CPK    |3ad3381a   |3ad3381a   |3ad3381a   |👍     |
|SCENE002.CPK |a0f04ff8   |________   |________   |🧐     |
|SCENE004.CPK |f08002e9   |________   |________   |🧐     |
|SCENE016.CPK |fa4e1acf   |________   |________   |🧐     |
|SCENE204.CPK |0b6d826e   |________   |________   |🧐     |
|COMMON.DAT  |35a40995   |69bc519c   |0c2281b3   |🤯     |
|MOVIE.DAT   |a88fe0bd   |85ec1686   |2138991    |🤯     |
|E006.EPK     |________   |1ce5e2cf   |1ce5e2cf   |💤     |
|E011.EPK    |31564e8a   |b0ad6a31   |9544b810   |🤯     |
|E014.EPK    |2304aacf   |31e311f4   |15b39654   |🤯     |
|E021.EPK    |________   |e13e2a00   |28378112   |👾     |
|E022.EPK    |________   |fc6cedc9   |75b3a97c   |👾     |
|E024.EPK    |84e6b173   |72a6514c   |2bcef564   |🤯     |
|A3DSP1.EXB    |fd9e4d52   |fd9e4d52   |fd9e4d52   |👍     |
|A3DSP2.EXB    |250c3467   |250c3467   |250c3467   |👍     |
|A5BOSS.EXB    |250c3467   |250c3467   |250c3467   |👍     |
|A5DSP.EXB     |cb855ff9   |cb855ff9   |cb855ff9   |👍     |
|A7BOSS.EXB    |b1ac1de3   |b1ac1de3   |b1ac1de3   |👍     |
|A7DSP.EXB     |588d969a   |588d969a   |588d969a   |👍     |
|ANTI.EXB     |________   |fd9e4d52   |fd9e4d52   |💤     |
|B2BGM1.EXB   |a26083b9   |________   |________   |🧐     |
|B2BGM2.EXB   |fd9e4d52   |________   |________   |🧐     |
|B2BOSS.EXB    |ece0b2f1   |ece0b2f1   |ece0b2f1   |👍     |
|B2DSP1.EXB   |________   |fd9e4d52   |fd9e4d52   |💤     |
|B2DSP2.EXB   |________   |3ff47ca5   |3ff47ca5   |💤     |
|B5DSP.EXB     |bb336875   |bb336875   |bb336875   |👍     |
|B5DSP2.EXB    |fd9e4d52   |fd9e4d52   |fd9e4d52   |👍     |
|B5MBDSP.EXB   |bb336875   |bb336875   |bb336875   |👍     |
|B6DSP.EXB     |e64506fa   |e64506fa   |e64506fa   |👍     |
|BOSS3.EXB     |250c3467   |250c3467   |250c3467   |👍     |
|BOSS4.EXB     |fd9e4d52   |fd9e4d52   |fd9e4d52   |👍     |
|BTL1DSP.EXB   |b1ac1de3   |b1ac1de3   |b1ac1de3   |👍     |
|BTL2DSP.EXB   |bb336875   |bb336875   |bb336875   |👍     |
|C2DSP.EXB     |bb336875   |bb336875   |bb336875   |👍     |
|C4DSP.EXB    |________   |250c3467   |250c3467   |💤     |
|C8DSP.EXB    |________   |bb336875   |bb336875   |💤     |
|CAMPDSP.EXB   |bb336875   |bb336875   |bb336875   |👍     |
|CARAVAN.EXB   |13b95cbb   |13b95cbb   |13b95cbb   |👍     |
|COPY1.EXB    |________   |250c3467   |250c3467   |💤     |
|COPY2.EXB    |________   |bb336875   |bb336875   |💤     |
|D2DSP.EXB     |b1ac1de3   |b1ac1de3   |b1ac1de3   |👍     |
|D3DSP.EXB    |________   |eb49f3bb   |eb49f3bb   |💤     |
|D4DSP.EXB    |________   |bb336875   |bb336875   |💤     |
|D5DSP.EXB    |________   |588d969a   |588d969a   |💤     |
|E14DSP.EXB    |ae85e7aa   |ae85e7aa   |ae85e7aa   |👍     |
|E78DSP.EXB    |030ed2f7   |030ed2f7   |030ed2f7   |👍     |
|MB01.EXB      |fd9e4d52   |fd9e4d52   |fd9e4d52   |👍     |
|MB04.EXB     |________   |bb336875   |bb336875   |💤     |
|MB3.EXB      |________   |fd9e4d52   |fd9e4d52   |💤     |
|PAETDSP.EXB   |bb336875   |bb336875   |bb336875   |👍     |
|RUINDSP.EXB  |________   |e86a6926   |e86a6926   |💤     |
|SEEDSP.EXB   |________   |080a9293   |080a9293   |💤     |
|TITLE.EXB     |fd9e4d52   |fd9e4d52   |fd9e4d52   |👍     |
|TOWNDSP.EXB   |13b95cbb   |13b95cbb   |13b95cbb   |👍     |
|BTL_A3.FNT  |c1bd0f26   |5007723b   |5007723b   |‼️     |
|BTL_A32.FNT |33e80bf2   |33da8e22   |33da8e22   |‼️     |
|BTL_A5.FNT  |bf67d371   |f4938bbb   |00b47e2c   |🤯     |
|BTL_A52.FNT |c9200dae   |c6acf2b9   |75bece3d   |🤯     |
|BTL_A53.FNT |4c219412   |181dc0e5   |181dc0e5   |‼️     |
|BTL_A7.FNT  |abaa4736   |4b08d8d4   |4b08d8d4   |‼️     |
|BTL_A72.FNT |394b4f10   |84c80328   |7ea59194   |🤯     |
|BTL_B2.FNT  |84f49464   |ba0c0dfc   |61dd797a   |🤯     |
|BTL_B5.FNT  |f4c0b86a   |9e53b93f   |5414b0c8   |🤯     |
|BTL_B52.FNT |2f33cd49   |b002e9c5   |b002e9c5   |‼️     |
|BTL_B53.FNT |e7b60c64   |ec8fb2fe   |ec8fb2fe   |‼️     |
|BTL_B6.FNT  |2cfa1300   |8de66b95   |d8d8a003   |🤯     |
|BTL_B62.FNT |d2aa1cc6   |300d9466   |dca166f9   |🤯     |
|BTL_C2.FNT  |65f80f32   |5f2744de   |e12961a6   |🤯     |
|BTL_C22.FNT |6cc6a3ed   |b800a29a   |6b1b9978   |🤯     |
|BTL_C4.FNT  |15302c6b   |6ce3a3ee   |dd0b4285   |🤯     |
|BTL_C5.FNT  |cda448b7   |cea5fd28   |f9aa6ebe   |🤯     |
|BTL_C52.FNT |cceade5d   |4a648b19   |7e85309c   |🤯     |
|BTL_C8.FNT  |5d1ee462   |61c22187   |ff165f75   |🤯     |
|BTL_C82.FNT |3f887a14   |60044127   |2388704f   |🤯     |
|BTL_D2.FNT  |22787fea   |f7b5176c   |f7b5176c   |‼️     |
|BTL_D22.FNT |10a2b493   |ee9866f1   |f8d071bf   |🤯     |
|BTL_D4.FNT   |________   |68fe52ae   |68fe52ae   |💤     |
|BTL_D5.FNT   |________   |ad412877   |ad412877   |💤     |
|BTL_T0.FNT  |13b9a013   |e5221f29   |e5221f29   |‼️     |
|BTL_X0.FNT  |58e2f198   |0f70e9ab   |4856bc29   |🤯     |
|EVEEXPL.FNT |2ba5b6bc   |76a1d2d8   |76a1d2d8   |‼️     |
|EVT000_1.FNT|dedd5258   |e5a8b903   |e5a8b903   |‼️     |
|EVT000_2.FNT|67caef1b   |57c56eab   |57c56eab   |‼️     |
|EVT000_3.FNT|6b3585fa   |cbd08f06   |cbd08f06   |‼️     |
|EVT000_4.FNT|337e0689   |ba9dcdd0   |ba9dcdd0   |‼️     |
|EVT000_5.FNT|e8839229   |be7febcb   |be7febcb   |‼️     |
|EVT002.FNT  |d25e351a   |45d3ed28   |45d3ed28   |‼️     |
|EVT004_2.FNT|d240a27b   |e359f276   |e359f276   |‼️     |
|EVT008.FNT  |13702b86   |b68cba81   |b68cba81   |‼️     |
|EVT016_1.FNT|b72b127a   |f37e914f   |f37e914f   |‼️     |
|EVT016_2.FNT|8f1a757d   |c14253c0   |c14253c0   |‼️     |
|EVT016_3.FNT |________   |9bc5f186   |9bc5f186   |💤     |
|EVT029.FNT  |d7866f49   |5e606fe4   |5e606fe4   |‼️     |
|EVTCAMP.FNT |8e5d098d   |8bc7cd76   |8bc7cd76   |‼️     |
|EVTCARA.FNT |33ca9598   |b7738de7   |b7738de7   |‼️     |
|EVTEXCA.FNT |99d205d7   |21057d0e   |21057d0e   |‼️     |
|EVTRUIN.FNT |949c6337   |bc5c4ee7   |bc5c4ee7   |‼️     |
|EVTSEEK.FNT |d05a144e   |5fe3b60a   |5fe3b60a   |‼️     |
|EVTSMPL.FNT  |b51a16a0   |________   |________   |🧐     |
|EVTZOAH.FNT |c1fa467c   |327158cc   |327158cc   |‼️     |
|FLAGEDIT.FNT|879773aa   |81cc8397   |81cc8397   |‼️     |
|FLD_A3.FNT  |4eb4cc58   |28080ece   |262164d2   |🤯     |
|FLD_A5.FNT  |82b707a1   |35327431   |35327431   |‼️     |
|FLD_A7.FNT  |08b3fa93   |f3b72ca4   |f3b72ca4   |‼️     |
|FLD_B2.FNT  |85c402b6   |e5de6a8e   |e5de6a8e   |‼️     |
|FLD_B5.FNT  |ab19f35b   |d433bb91   |4e24c87a   |🤯     |
|FLD_B6.FNT  |4763ff61   |86aa1622   |86aa1622   |‼️     |
|FLD_C2.FNT  |9f358166   |a29376f3   |a29376f3   |‼️     |
|FLD_C4.FNT  |618aaf95   |0bd79a5c   |0bd79a5c   |‼️     |
|FLD_D2.FNT  |7cb02e81   |74887b0d   |9ddebb97   |🤯     |
|FLD_D3.FNT  |eae50960   |b9b49d35   |065d237b   |🤯     |
|FLD_D5.FNT   |________   |f79d4525   |f79d4525   |💤     |
|FLD_T0.FNT  |49bf97fa   |16b12c4c   |16b12c4c   |‼️     |
|FLOPPY.FNT  |44144ea6   |183a6c0b   |________   |👽     |
|ITEM.FNT    |8fd3da47   |c102e11f   |6970a8c9   |🤯     |
|MENU.FNT    |ef286ed1   |3a014d13   |3a014d13   |‼️     |
|MENUBK.FNT   |________   |2ee1ae47   |2ee1ae47   |💤     |
|MENUEN.FNT   |________   |c68c2aa2   |c68c2aa2   |💤     |
|MENUPM.FNT   |81e08d22   |________   |________   |🧐     |
|MENUTS.FNT   |00f48e94   |________   |________   |🧐     |
|SAVE.FNT     |________   |49fbe389   |49fbe389   |💤     |
|SCENARIO.FNT |2768af07   |________   |________   |🧐     |
|SHOP.FNT    |922690dc   |eceef1ed   |eceef1ed   |‼️     |
|WORLDMAP.FNT|5992b911   |d0e536a7   |d0e536a7   |‼️     |
|A3CMN.MCB     |d28b9885   |d28b9885   |d28b9885   |👍     |
|A5CMN.MCB   |2847a502   |ac31f7e6   |ac31f7e6   |‼️     |
|ABOMB2.MCB   |________   |a3043c18   |a3043c18   |💤     |
|AD.MCB      |5b2edc73   |a035c581   |a035c581   |‼️     |
|AD3.MCB     |a85b4682   |8fa19878   |8fa19878   |‼️     |
|AIRBOMB.MCB |6b325018   |a2250dda   |a2250dda   |‼️     |
|AJITOMP0.MCB|49eaaf11   |0012570d   |0012570d   |‼️     |
|AJITOMP1.MCB|1eb942ed   |dbec3191   |dbec3191   |‼️     |
|ANAKAZU.MCB   |8de948df   |8de948df   |8de948df   |👍     |
|ANTIDRA.MCB  |________   |4c33dd46   |4c33dd46   |💤     |
|ANTIDRAG.MCB |________   |261030e8   |261030e8   |💤     |
|ARSRO.MCB   |6a1cd40b   |8baf229a   |8baf229a   |‼️     |
|ASLTHANU.MCB |________   |f80bd09f   |f80bd09f   |💤     |
|AWEN.MCB    |8613eb6a   |d8514351   |d8514351   |‼️     |
|AZCT.MCB     |________   |c3592cf1   |c3592cf1   |💤     |
|AZEL.MCB    |fa5cbf10   |3557ef92   |3557ef92   |‼️     |
|AZELMP.MCB  |74ac540c   |36f8c2c3   |36f8c2c3   |‼️     |
|B6BOSS.MCB  |f4d7bcb1   |53d57760   |53d57760   |‼️     |
|B6CMN.MCB     |2a7543d0   |2a7543d0   |2a7543d0   |👍     |
|B6EGG.MCB     |06bc3e54   |06bc3e54   |06bc3e54   |👍     |
|B6LARVA.MCB |dc9633e3   |5b105afe   |5b105afe   |‼️     |
|B6MERN.MCB  |5be5bca3   |1dcc5352   |1dcc5352   |‼️     |
|B6MID.MCB   |647291d8   |2c068c68   |2c068c68   |‼️     |
|B6RIO.MCB   |11844b94   |1a069f7e   |1a069f7e   |‼️     |
|BARIOH.MCB  |d9b71a60   |d0fc8e56   |d0fc8e56   |‼️     |
|BARISTA.MCB |1e990d20   |7c1714ae   |7c1714ae   |‼️     |
|BARMP.MCB   |f24f138a   |3ed750e8   |3ed750e8   |‼️     |
|BATTLE.MCB  |9990ceb6   |feac8346   |feac8346   |‼️     |
|BEMOS.MCB   |02f80ead   |03ec4c4d   |03ec4c4d   |‼️     |
|BENITATE.MCB|cc835807   |04861d65   |04861d65   |‼️     |
|BLDAMP.MCB  |3cfd9f03   |11b39f46   |11b39f46   |‼️     |
|BMP_A7_0.MCB|1827c066   |9e0bf455   |9e0bf455   |‼️     |
|BMP_B5_0.MCB  |ae10f910   |ae10f910   |ae10f910   |👍     |
|BMP_B5_1.MCB  |ae10f910   |ae10f910   |ae10f910   |👍     |
|BMP_C8_B.MCB |________   |dd119b86   |dd119b86   |💤     |
|BOMBLV3.MCB   |dc2db74c   |dc2db74c   |dc2db74c   |👍     |
|BTFALLA3.MCB  |47cabba2   |47cabba2   |47cabba2   |👍     |
|BUM.MCB     |c39cd5a2   |c3b564af   |c3b564af   |‼️     |
|C22CMN.MCB    |1231afb3   |1231afb3   |1231afb3   |👍     |
|C2CMN.MCB   |13cff868   |54c3f1c1   |54c3f1c1   |‼️     |
|C4CMN.MCB   |b1bea20b   |2640bf38   |2640bf38   |‼️     |
|C4PASS.MCB  |85801b2e   |78ad5070   |78ad5070   |‼️     |
|C5CMN.MCB     |13cff868   |13cff868   |13cff868   |👍     |
|C8CMN.MCB   |a4da257d   |cc84d4fc   |cc84d4fc   |‼️     |
|CADRO.MCB    |________   |cdffd989   |cdffd989   |💤     |
|CAMPMP1.MCB   |e820dadb   |e820dadb   |e820dadb   |👍     |
|CAMPMP2.MCB |fed8ec30   |6ecf9a59   |6ecf9a59   |‼️     |
|CAMPMP3.MCB |c5463a2e   |58d56958   |58d56958   |‼️     |
|CAMPMP4.MCB |c7396a57   |f640aefa   |f640aefa   |‼️     |
|CAMPMP5.MCB   |6c39afd4   |6c39afd4   |6c39afd4   |👍     |
|CAMPMP6.MCB   |5119659f   |5119659f   |5119659f   |👍     |
|CAMPMP7.MCB |e9cf06e4   |2fdfa3fa   |2fdfa3fa   |‼️     |
|CAMPMP8.MCB |f748ead6   |6cea02dc   |6cea02dc   |‼️     |
|CAMPOBJ.MCB |d7136b66   |f359dcba   |f359dcba   |‼️     |
|CARAVMP.MCB |2e213ea8   |a657a9ae   |a657a9ae   |‼️     |
|CHARCMP0.MCB|28e5711d   |daf5ec8e   |daf5ec8e   |‼️     |
|CHARCMP1.MCB |________   |3d58fe52   |3d58fe52   |💤     |
|CHILDMP.MCB |91222c79   |dceda91e   |dceda91e   |‼️     |
|COMMON3.MCB |5d6b9b7d   |6737ec69   |6737ec69   |‼️     |
|CORE.MCB    |42ddea24   |af5ae482   |af5ae482   |‼️     |
|CYCLONE.MCB   |655359fb   |655359fb   |655359fb   |👍     |
|C_DRA0.MCB  |ddc3c420   |31954a56   |31954a56   |‼️     |
|C_DRA1.MCB  |faef0f57   |3ff50a4b   |3ff50a4b   |‼️     |
|C_DRA2.MCB  |b3c30d68   |05b89007   |05b89007   |‼️     |
|C_DRA3.MCB  |72a484ac   |b3cddf38   |b3cddf38   |‼️     |
|C_DRA4.MCB  |22001cb1   |e3afbbde   |e3afbbde   |‼️     |
|C_DRA5.MCB  |ee22f9de   |aab6dd72   |aab6dd72   |‼️     |
|C_DRA6.MCB  |bedc2c47   |8c31ab6b   |8c31ab6b   |‼️     |
|C_DRA7.MCB  |ff47183b   |a41b8fcc   |a41b8fcc   |‼️     |
|D2CMN.MCB   |13cff868   |09eee475   |09eee475   |‼️     |
|D4CMN.MCB    |________   |199ffcad   |199ffcad   |💤     |
|D5HANU.MCB   |________   |7a9a0c6a   |7a9a0c6a   |💤     |
|D5LAND.MCB   |________   |7faa5205   |7faa5205   |💤     |
|D5LDRA.MCB   |________   |464a3efb   |464a3efb   |💤     |
|D5MERU.MCB   |________   |26d15d9e   |26d15d9e   |💤     |
|D5NOOS.MCB   |________   |27a0f1d8   |27a0f1d8   |💤     |
|D5NURU.MCB   |________   |918f441d   |918f441d   |💤     |
|D5SHELL.MCB  |________   |9403e6c2   |9403e6c2   |💤     |
|D5TGD.MCB    |________   |06538b96   |06538b96   |💤     |
|DRAGON0.MCB |d9a08eac   |5b3ec75c   |5b3ec75c   |‼️     |
|DRAGON1.MCB |f9e15e49   |2a38cce1   |2a38cce1   |‼️     |
|DRAGON2.MCB |05be0e89   |b6689b0a   |b6689b0a   |‼️     |
|DRAGON3.MCB |fe45cafb   |8b036497   |8b036497   |‼️     |
|DRAGON4.MCB |8d2e6286   |f7cf9b37   |f7cf9b37   |‼️     |
|DRAGON5.MCB |a391b1e5   |1fc6dffd   |1fc6dffd   |‼️     |
|DRAGON6.MCB |04ac382f   |8adce155   |8adce155   |‼️     |
|DRAGON7.MCB |1e86d5fb   |b9a04667   |b9a04667   |‼️     |
|DRAGONC0.MCB|d2b173b1   |2c184aca   |2c184aca   |‼️     |
|DRAGONC1.MCB  |ab8aad6b   |ab8aad6b   |ab8aad6b   |👍     |
|DRAGONC2.MCB|c1c114d9   |317cc5a5   |317cc5a5   |‼️     |
|DRAGONC3.MCB  |3e4f84c7   |3e4f84c7   |3e4f84c7   |👍     |
|DRAGONC4.MCB|494d42c3   |eafa94d4   |eafa94d4   |‼️     |
|DRAGONM1.MCB  |c1c1857b   |c1c1857b   |c1c1857b   |👍     |
|DRAGONM2.MCB|2a514540   |cea1ae4b   |cea1ae4b   |‼️     |
|DRAGONM3.MCB|1d5436b5   |603c84b4   |603c84b4   |‼️     |
|DRAGONM4.MCB|0414cf20   |2c4264d3   |2c4264d3   |‼️     |
|DRAGONM5.MCB|862de18d   |d985562b   |d985562b   |‼️     |
|DRAGONM7.MCB|e137d6f4   |dad5ca31   |dad5ca31   |‼️     |
|DRVA.MCB    |5dcfe60b   |30dd9447   |d1eaa5a6   |🤯     |
|DYURA00.MCB  |________   |8de80b58   |8de80b58   |💤     |
|DYURA01.MCB  |________   |47c6a411   |47c6a411   |💤     |
|DYURA02.MCB  |________   |ab567e0a   |ab567e0a   |💤     |
|DYURA03.MCB  |________   |a360b8aa   |a360b8aa   |💤     |
|DYURA04.MCB  |________   |9c74a3b3   |9c74a3b3   |💤     |
|EDGE.MCB    |b81a2768   |0b4a1978   |0b4a1978   |‼️     |
|EVT011MP.MCB|5027bc61   |a7b4ec0a   |a7b4ec0a   |‼️     |
|EVT014MP.MCB  |afa48869   |afa48869   |afa48869   |👍     |
|EVT021MP.MCB |________   |01bb54d5   |01bb54d5   |💤     |
|EVT057MP.MCB |0627f49e   |________   |________   |🧐     |
|EVT059MP.MCB |53971621   |________   |________   |🧐     |
|EVT078.MCB   |401a7281   |________   |________   |🧐     |
|EVT078MP.MCB |06253ce3   |________   |________   |🧐     |
|EXCAVAMP.MCB|7c6304d2   |8616516c   |8616516c   |‼️     |
|FINAL.MCB    |________   |2c11ac85   |2c11ac85   |💤     |
|FIRE.MCB    |8605ea53   |c5e0366d   |c5e0366d   |‼️     |
|FLDCMN.MCB  |8c1e2148   |2ef533e6   |2ef533e6   |‼️     |
|FLD_A3.MCB  |5ceea1a5   |2c25aa28   |2c25aa28   |‼️     |
|FLD_A3_0.MCB|911ab069   |b749bdac   |b749bdac   |‼️     |
|FLD_A3_1.MCB  |d99d0935   |d99d0935   |d99d0935   |👍     |
|FLD_A3_2.MCB|3eb99d07   |19f3c3eb   |19f3c3eb   |‼️     |
|FLD_A3_3.MCB  |32141ea6   |32141ea6   |32141ea6   |👍     |
|FLD_A5.MCB  |799f95df   |321fa503   |321fa503   |‼️     |
|FLD_A5_0.MCB  |7d7ffea2   |7d7ffea2   |7d7ffea2   |👍     |
|FLD_A5_2.MCB|c72a995c   |2177Dec7   |2177Dec7   |‼️     |
|FLD_A5_4.MCB|8e674eb2   |4b10b59e   |4b10b59e   |‼️     |
|FLD_A5_7.MCB |________   |2bb87d04   |2bb87d04   |💤     |
|FLD_A5_8.MCB |________   |3bc8eedb   |3bc8eedb   |💤     |
|FLD_A5_9.MCB |________   |38ddb42b   |38ddb42b   |💤     |
|FLD_A5_B.MCB |________   |1e3e37c5   |1e3e37c5   |💤     |
|FLD_A7_0.MCB|516e77e4   |a11d6dfb   |a11d6dfb   |‼️     |
|FLD_A7_1.MCB|6833e619   |b6c0a1f0   |b6c0a1f0   |‼️     |
|FLD_A7_2.MCB|48e7f61f   |b9ca4343   |b9ca4343   |‼️     |
|FLD_B2_1.MCB|90af635c   |a6e4c391   |a6e4c391   |‼️     |
|FLD_B2_3.MCB|730e0be9   |0e1bf860   |0e1bf860   |‼️     |
|FLD_B2_4.MCB  |f5cd6387   |f5cd6387   |f5cd6387   |👍     |
|FLD_B5_0.MCB|ba82dc82   |683ad655   |683ad655   |‼️     |
|FLD_B5_1.MCB|beeee8f6   |f764a0a5   |f764a0a5   |‼️     |
|FLD_B5_2.MCB|27ef2cbf   |7921e915   |7921e915   |‼️     |
|FLD_B5_3.MCB|0785e637   |27b4e4e7   |27b4e4e7   |‼️     |
|FLD_B5_4.MCB|46bbdb20   |b2e2d4b2   |b2e2d4b2   |‼️     |
|FLD_B6.MCB    |7b5120be   |7b5120be   |7b5120be   |👍     |
|FLD_B6_0.MCB|039bf269   |b9c8add4   |b9c8add4   |‼️     |
|FLD_B6_1.MCB|740c249b   |0c5aaadc   |0c5aaadc   |‼️     |
|FLD_B6_2.MCB|c8e0760b   |a16d8056   |a16d8056   |‼️     |
|FLD_B6_3.MCB|3bdfd7cf   |4b1165a7   |4b1165a7   |‼️     |
|FLD_B6_4.MCB|e7f62683   |7c7b19bc   |7c7b19bc   |‼️     |
|FLD_B6_5.MCB|bac850ef   |8f40cf5d   |8f40cf5d   |‼️     |
|FLD_B6_6.MCB|9dca6d6e   |58c418d1   |58c418d1   |‼️     |
|FLD_B6_8.MCB|2733b296   |a79c2521   |a79c2521   |‼️     |
|FLD_B6_9.MCB|d3022ee9   |6f3b8c45   |6f3b8c45   |‼️     |
|FLD_C2_0.MCB|824482d0   |ec8e6b36   |ec8e6b36   |‼️     |
|FLD_C4_0.MCB|f4ba5fa5   |f8c8b256   |f8c8b256   |‼️     |
|FLD_C4_1.MCB|006daccb   |2686f7f1   |2686f7f1   |‼️     |
|FLD_C4_2.MCB  |fbbf2874   |fbbf2874   |fbbf2874   |👍     |
|FLD_C4_3.MCB|018130ff   |8e4852e9   |8e4852e9   |‼️     |
|FLD_C4_4.MCB|9eb4f82d   |263b27ad   |263b27ad   |‼️     |
|FLD_C4_5.MCB|805ddd12   |fde8bf28   |fde8bf28   |‼️     |
|FLD_C4_6.MCB|47c35ebe   |a1921bc7   |a1921bc7   |‼️     |
|FLD_D2_0.MCB|64c32866   |fba85d17   |fba85d17   |‼️     |
|FLD_D2_1.MCB|4508c8ec   |75176f48   |75176f48   |‼️     |
|FLD_D3_0.MCB|7f3ed641   |66da26a0   |66da26a0   |‼️     |
|FLD_D5_0.MCB|c97b5b23   |2674a0ab   |2674a0ab   |‼️     |
|FLD_T0.MCB  |34736222   |940e1991   |940e1991   |‼️     |
|FLD_T0_0.MCB|2ac877f3   |1ce0889f   |1ce0889f   |‼️     |
|FLD_T0_1.MCB|fa9a39fd   |23df0943   |23df0943   |‼️     |
|FLD_T0_3.MCB|520e3f43   |56da58fd   |56da58fd   |‼️     |
|FLD_T0_4.MCB|ebaa9efc   |ca6f7e7f   |ca6f7e7f   |‼️     |
|FLD_T0_5.MCB|047a0222   |3d20d575   |3d20d575   |‼️     |
|FLD_T1_0.MCB|c8d9c969   |50466d83   |50466d83   |‼️     |
|FLD_T1_1.MCB|16a2ed73   |abe7cfa7   |abe7cfa7   |‼️     |
|FLD_T2_0.MCB|a7e61b41   |7d18542f   |7d18542f   |‼️     |
|FLD_T2_1.MCB|02f42880   |f3435cf3   |f3435cf3   |‼️     |
|FLD_T2_4.MCB|23ab2889   |828d327c   |828d327c   |‼️     |
|FLD_T2_A.MCB|9b35b9eb   |f20175a1   |f20175a1   |‼️     |
|FLD_T2_D.MCB|5e369b20   |166f5479   |166f5479   |‼️     |
|FLD_T3_0.MCB|e2ef56d8   |42ab468b   |42ab468b   |‼️     |
|FLD_T3_1.MCB|ced6e52d   |ad37cb26   |ad37cb26   |‼️     |
|FLD_T4_0.MCB|b2c30b1e   |759a8184   |759a8184   |‼️     |
|FLD_T4_1.MCB|12d10231   |5c2e1235   |5c2e1235   |‼️     |
|FLD_T4_2.MCB|581d240e   |1ed24804   |1ed24804   |‼️     |
|GBOMB2.MCB   |________   |c0f370da   |c0f370da   |💤     |
|GERAKI.MCB  |b5732476   |ba3219ed   |ba3219ed   |‼️     |
|GRDBOMB.MCB |e0e9e345   |a34b76b0   |a34b76b0   |‼️     |
|GRIGORIG.MCB|029ef8ae   |4c4a5c95   |4c4a5c95   |‼️     |
|GUSH.MCB    |369e6fa0   |1e559545   |1e559545   |‼️     |
|HANSA.MCB   |13e91484   |273f61e0   |273f61e0   |‼️     |
|HEBIMUSI.MCB|b40ef909   |a22aa09a   |a22aa09a   |‼️     |
|HEBISU.MCB    |c6223a9a   |c6223a9a   |c6223a9a   |👍     |
|HEBI_TUR.MCB  |e54160ed   |e54160ed   |e54160ed   |👍     |
|HIDINGMP.MCB|f32a8b97   |561183ce   |561183ce   |‼️     |
|HUNTAMP0.MCB|c37ef9e8   |3cb05feb   |3cb05feb   |‼️     |
|HUNTAMP1.MCB |________   |c1edadcd   |c1edadcd   |💤     |
|HUNTDMP0.MCB|758dfeb4   |127739fa   |127739fa   |‼️     |
|HUNTDMP1.MCB|62bc7c6a   |8d382585   |8d382585   |‼️     |
|IVASIVIA.MCB |________   |671e2331   |671e2331   |💤     |
|JINKOU.MCB    |e7d9c813   |e7d9c813   |e7d9c813   |👍     |
|JINKOUB5.MCB |________   |77985a3c   |77985a3c   |💤     |
|JIRO.MCB      |e3b74b22   |e3b74b22   |e3b74b22   |👍     |
|JUNKMP.MCB  |5afe97d2   |888f0cce   |888f0cce   |‼️     |
|KARA.MCB    |6182752c   |e0c2c286   |1e04fe6f   |🤯     |
|KARAA72.MCB  |________   |1adb1270   |1adb1270   |💤     |
|KARLA.MCB    |________   |735fa336   |735fa336   |💤     |
|KEIKOKU.MCB   |c672d7da   |c672d7da   |c672d7da   |👍     |
|KEI_BOSS.MCB|5eaf1cb5   |2ef061e1   |2ef061e1   |‼️     |
|KHDRAGON.MCB |________   |3a4adc3e   |3a4adc3e   |💤     |
|KOJO.MCB      |e793edfd   |e793edfd   |e793edfd   |👍     |
|KTEI.MCB    |4654bc52   |e780532e   |e780532e   |‼️     |
|KURAGE.MCB    |8fff8d77   |8fff8d77   |8fff8d77   |👍     |
|LANQUER.MCB  |________   |97d6f8e5   |97d6f8e5   |💤     |
|LIBRAMP.MCB |bcf4d27a   |8e8d77ee   |8e8d77ee   |‼️     |
|LODGEMP0.MCB|05c0d1c8   |098dca9a   |098dca9a   |‼️     |
|LODGEMP1.MCB|6d05f9d2   |16e9a635   |16e9a635   |‼️     |
|LOLOS.MCB    |________   |7fd7104b   |7fd7104b   |💤     |
|LSHIP.MCB    |________   |b8bd382d   |b8bd382d   |💤     |
|MASAN.MCB   |602d7ae8   |421e8148   |421e8148   |‼️     |
|MDLCHG.MCB  |74562a81   |b22dffea   |b22dffea   |‼️     |
|MERN.MCB      |68a596f5   |68a596f5   |68a596f5   |👍     |
|MERUKABA.MCB  |420f0090   |420f0090   |420f0090   |👍     |
|MPDRAGON.MCB |________   |3a686c98   |3a686c98   |💤     |
|MSHIP.MCB    |________   |84e32c55   |84e32c55   |💤     |
|MULT.MCB    |a282fa07   |f40fa439   |f40fa439   |‼️     |
|MUR.MCB       |a6d0f8cb   |a6d0f8cb   |a6d0f8cb   |👍     |
|MZUB.MCB     |________   |3dfbed66   |3dfbed66   |💤     |
|NEW_BUM.MCB |292eb215   |00e13a3d   |00e13a3d   |‼️     |
|NULLY.MCB   |0a47d8fb   |80ce1fa0   |80ce1fa0   |‼️     |
|OKAFUGU.MCB |20640a72   |b2424728   |b2424728   |‼️     |
|OZL.MCB       |bb732006   |bb732006   |bb732006   |👍     |
|PAET.MCB     |________   |2612ffd7   |2612ffd7   |💤     |
|PAETMP0.MCB |d1b6f84a   |12c05f3a   |12c05f3a   |‼️     |
|PAETMP1.MCB |4db5eac6   |df853621   |df853621   |‼️     |
|PARAORIG.MCB|b6c8ec4f   |65be07b7   |65be07b7   |‼️     |
|PGORAIAS.MCB |________   |60a745ce   |60a745ce   |💤     |
|PROBOMB.MCB   |4a54c9f1   |4a54c9f1   |4a54c9f1   |👍     |
|PUP.MCB     |2f0206c6   |88d531e7   |88d531e7   |‼️     |
|RAHAB.MCB   |501b8995   |57215fbf   |57215fbf   |‼️     |
|RANDORA.MCB  |________   |7faa5205   |7faa5205   |💤     |
|REUNA.MCB    |________   |438b8a91   |438b8a91   |💤     |
|RIDER0.MCB    |a2571796   |a2571796   |a2571796   |👍     |
|RIO.MCB       |b00fd807   |b00fd807   |b00fd807   |👍     |
|ROOMTEST.MCB  |254746ea   |254746ea   |254746ea   |👍     |
|RUINMP.MCB  |35b72bfc   |d55b1f7f   |d55b1f7f   |‼️     |
|SABAKU02.MCB  |de876385   |de876385   |de876385   |👍     |
|SABAKU04.MCB  |de876385   |de876385   |de876385   |👍     |
|SABAKU_B.MCB  |3ab34361   |3ab34361   |3ab34361   |👍     |
|SDON.MCB      |3deb81d9   |3deb81d9   |3deb81d9   |👍     |
|SEEKMP.MCB  |bba4c087   |fdb1d5ee   |fdb1d5ee   |‼️     |
|SEEKMP1.MCB |b1cd98e5   |1c729716   |1c729716   |‼️     |
|SHOKU.MCB     |e0f940a8   |e0f940a8   |e0f940a8   |👍     |
|SHRINE.MCB   |________   |3a5d5cea   |3a5d5cea   |💤     |
|SICKMP.MCB  |ebfa0d84   |0ee0665e   |0ee0665e   |‼️     |
|SKJKMP.MCB  |be3ccc16   |575cbbf6   |575cbbf6   |‼️     |
|SLIGHT.MCB    |a1895479   |a1895479   |a1895479   |👍     |
|SNB.MCB       |b4f316b3   |b4f316b3   |b4f316b3   |👍     |
|SOMA.MCB    |28247c59   |c0b376ef   |c0b376ef   |‼️     |
|SOUKOMP.MCB |9d4cc8da   |cdd5c1c7   |cdd5c1c7   |‼️     |
|SOUKOMP1.MCB|0c1a8c65   |47767b76   |47767b76   |‼️     |
|SOUKOMP2.MCB |________   |a3de9e5f   |a3de9e5f   |💤     |
|SRA.MCB      |________   |c031cd5e   |c031cd5e   |💤     |
|STK01.MCB   |ad736031   |fe5dcd90   |fe5dcd90   |‼️     |
|STK02.MCB   |508a6a5f   |5839a3c0   |5839a3c0   |‼️     |
|STK03.MCB     |65a4d0b7   |65a4d0b7   |65a4d0b7   |👍     |
|STK12.MCB     |2b48ff1c   |2b48ff1c   |2b48ff1c   |👍     |
|STOREMP.MCB |8e6f2a58   |5c400acb   |5c400acb   |‼️     |
|SURFHANU.MCB |________   |e5c15688   |e5c15688   |💤     |
|TAM.MCB       |cf0b8592   |cf0b8592   |cf0b8592   |👍     |
|TAMAMP.MCB  |a605bd9f   |fcf28a8b   |fcf28a8b   |‼️     |
|TAMPRO.MCB    |9c256e0a   |9c256e0a   |9c256e0a   |👍     |
|TAPAS.MCB     |816f56ca   |816f56ca   |816f56ca   |👍     |
|TARO.MCB      |68958d68   |68958d68   |68958d68   |👍     |
|TAROJIRO.MCB |________   |855fc869   |855fc869   |💤     |
|TEF_MSL.MCB  |b951e5f2   |________   |________   |🧐     |
|TENTSMMP.MCB|c09459d9   |d5b096be   |d5b096be   |‼️     |
|TGD.MCB     |d80aa1fa   |3c50e66e   |3c50e66e   |‼️     |
|TUP.MCB     |d67482dc   |8685f54e   |8685f54e   |‼️     |
|URUFIRE.MCB  |________   |78259dd5   |78259dd5   |💤     |
|URUGND.MCB    |014b832b   |014b832b   |014b832b   |👍     |
|URUGND_B.MCB  |5f5b4caa   |5f5b4caa   |5f5b4caa   |👍     |
|URUGND_M.MCB  |b18dad3f   |b18dad3f   |b18dad3f   |👍     |
|URUNURI.MCB   |488bc7bc   |488bc7bc   |488bc7bc   |👍     |
|URUTUP.MCB   |________   |59138e75   |59138e75   |💤     |
|URU_DAY.MCB   |c9b4cc75   |c9b4cc75   |c9b4cc75   |👍     |
|URU_NGT.MCB   |a08d4fbe   |a08d4fbe   |a08d4fbe   |👍     |
|URU_ROCK.MCB  |fb998cb8   |fb998cb8   |fb998cb8   |👍     |
|URU_YUU.MCB   |488bc7bc   |488bc7bc   |488bc7bc   |👍     |
|UZU.MCB       |d8f9a12e   |d8f9a12e   |d8f9a12e   |👍     |
|VAJURA.MCB  |a8e09918   |39a0459f   |39a0459f   |‼️     |
|VALNA.MCB   |603ca0d8   |ebfb7edd   |ebfb7edd   |‼️     |
|VARAHA.MCB  |2bd1ba7c   |f0aa516c   |f0aa516c   |‼️     |
|VRITRA.MCB    |f267f6b4   |f267f6b4   |f267f6b4   |👍     |
|VRITRA1.MCB |ab2fa0cd   |0a8375d6   |0a8375d6   |‼️     |
|VRITRA2.MCB |6389d747   |57ec0a50   |57ec0a50   |‼️     |
|VW_DAIOU.MCB |________   |1a06bf35   |1a06bf35   |💤     |
|VW_GRIG.MCB  |________   |64a43955   |64a43955   |💤     |
|VW_KISEI.MCB |________   |e0a8188f   |e0a8188f   |💤     |
|VW_LAS.MCB   |________   |d2020ec0   |d2020ec0   |💤     |
|VW_MIYAB.MCB |________   |e4ab7093   |e4ab7093   |💤     |
|VW_SU.MCB    |________   |a500f832   |a500f832   |💤     |
|VW_VARAH.MCB |________   |06f696ab   |06f696ab   |💤     |
|VW_VET.MCB   |________   |d20b3fdd   |d20b3fdd   |💤     |
|VW_ZUSU.MCB  |________   |c56b132f   |c56b132f   |💤     |
|WAVE.MCB     |________   |bcdafd97   |bcdafd97   |💤     |
|WORLDMAP.MCB|f010082a   |481e9479   |481e9479   |‼️     |
|X_A_AB.MCB  |81230601   |b9c7632a   |b9c7632a   |‼️     |
|X_A_AZ.MCB    |8645538c   |8645538c   |8645538c   |👍     |
|X_A_BK.MCB    |67ab620b   |67ab620b   |67ab620b   |👍     |
|X_A_BZ.MCB    |1a734445   |1a734445   |1a734445   |👍     |
|X_A_CR.MCB  |0f3c8f5b   |1a0fe5e6   |1a0fe5e6   |‼️     |
|X_A_CS.MCB    |e49c0e52   |e49c0e52   |e49c0e52   |👍     |
|X_A_EN.MCB    |13a0acdf   |13a0acdf   |13a0acdf   |👍     |
|X_A_JB.MCB    |e55127a6   |e55127a6   |e55127a6   |👍     |
|X_A_LG.MCB    |c7b52a83   |c7b52a83   |c7b52a83   |👍     |
|X_A_LR.MCB    |23f0378d   |23f0378d   |23f0378d   |👍     |
|X_A_MA.MCB    |452a2279   |452a2279   |452a2279   |👍     |
|X_A_PR.MCB    |d7b9cf05   |d7b9cf05   |d7b9cf05   |👍     |
|X_A_PT.MCB    |a3bd5409   |a3bd5409   |a3bd5409   |👍     |
|X_A_QT.MCB    |532cf872   |532cf872   |532cf872   |👍     |
|X_A_RB.MCB    |950845a2   |950845a2   |950845a2   |👍     |
|X_A_RG.MCB    |ce8b8b8f   |ce8b8b8f   |ce8b8b8f   |👍     |
|X_A_SM.MCB    |70f732ca   |70f732ca   |70f732ca   |👍     |
|X_A_TA.MCB    |b3ca2a6b   |b3ca2a6b   |b3ca2a6b   |👍     |
|X_A_TB.MCB    |11c72877   |11c72877   |11c72877   |👍     |
|X_A_YD.MCB    |a0eba79c   |a0eba79c   |a0eba79c   |👍     |
|X_A_YR.MCB    |e2bfd024   |e2bfd024   |e2bfd024   |👍     |
|X_A_ZD.MCB    |b5ee4f35   |b5ee4f35   |b5ee4f35   |👍     |
|X_E_BM.MCB  |d9dae214   |2b8ccbbb   |2b8ccbbb   |‼️     |
|X_E_DM.MCB    |6a07e09c   |6a07e09c   |6a07e09c   |👍     |
|X_F_AB.MCB   |________   |44a91171   |44a91171   |💤     |
|X_F_LG.MCB   |________   |afc04cc1   |afc04cc1   |💤     |
|X_F_LR.MCB  |6df972a1   |4c5c9d6f   |4c5c9d6f   |‼️     |
|X_F_PR.MCB   |________   |b5c36eec   |b5c36eec   |💤     |
|X_F_QT.MCB   |________   |0958c4ca   |0958c4ca   |💤     |
|X_F_RB.MCB   |________   |451c5c9b   |451c5c9b   |💤     |
|X_F_SM.MCB    |323ad9fc   |323ad9fc   |323ad9fc   |👍     |
|X_G_AZ.MCB    |b8e00265   |b8e00265   |b8e00265   |👍     |
|X_G_LG.MCB  |d77858ab   |be92fe14   |be92fe14   |‼️     |
|X_X_EN.MCB  |de9649ec   |0528d86f   |0528d86f   |‼️     |
|X_X_LG.MCB    |1fe919b6   |1fe919b6   |1fe919b6   |👍     |
|X_X_YD.MCB    |43219f75   |43219f75   |43219f75   |👍     |
|ZOAHMP0D.MCB|d024a110   |e1a4e1dd   |e1a4e1dd   |‼️     |
|ZOAHMP0N.MCB|774ff51c   |c13695e1   |c13695e1   |‼️     |
|ZOAHMP1D.MCB|9a7bbeb1   |e287d915   |e287d915   |‼️     |
|ZOAHMP1N.MCB|04395b5f   |85f55517   |85f55517   |‼️     |
|ZOAHOBJ0.MCB  |2a698064   |2a698064   |2a698064   |👍     |
|ZOAHOBJ1.MCB|573508a1   |1d35569d   |1d35569d   |‼️     |
|ZOAH_OW.MCB   |fe5484e9   |fe5484e9   |fe5484e9   |👍     |
|ZUSU.MCB    |e049da92   |086e788c   |086e788c   |‼️     |
|Z_A_AR.MCB  |185f0444   |83584dfe   |83584dfe   |‼️     |
|Z_A_AY.MCB    |f19dc02b   |f19dc02b   |f19dc02b   |👍     |
|Z_A_DM.MCB    |3737cc0d   |3737cc0d   |3737cc0d   |👍     |
|Z_A_EG.MCB    |b7a510b4   |b7a510b4   |b7a510b4   |👍     |
|Z_A_EK.MCB    |bbf8e3d2   |bbf8e3d2   |bbf8e3d2   |👍     |
|Z_A_FE.MCB    |d6fca83e   |d6fca83e   |d6fca83e   |👍     |
|Z_A_GS.MCB  |473d1190   |3bf53e16   |3bf53e16   |‼️     |
|Z_A_JR.MCB    |2efebe94   |2efebe94   |2efebe94   |👍     |
|Z_A_KH.MCB  |1a14e89e   |47e2438c   |47e2438c   |‼️     |
|Z_A_LD.MCB    |4582dc17   |4582dc17   |4582dc17   |👍     |
|Z_A_RD.MCB    |b26d3e9c   |b26d3e9c   |b26d3e9c   |👍     |
|Z_A_SF.MCB    |9c4fa700   |9c4fa700   |9c4fa700   |👍     |
|Z_A_SR.MCB    |5a1717fc   |5a1717fc   |5a1717fc   |👍     |
|Z_A_VZ.MCB  |cb35621c   |87649c34   |87649c34   |‼️     |
|Z_B_RD.MCB    |44a5544a   |44a5544a   |44a5544a   |👍     |
|Z_E_AY.MCB    |49bfad1a   |49bfad1a   |49bfad1a   |👍     |
|Z_E_GS.MCB    |62ae31fc   |62ae31fc   |62ae31fc   |👍     |
|Z_F_AY.MCB    |8483f1f2   |8483f1f2   |8483f1f2   |👍     |
|Z_F_FE.MCB   |________   |3699bc90   |3699bc90   |💤     |
|B_A3_00.PCM  |550a230c   |________   |________   |🧐     |
|B_A3_01.PCM  |accb5ff4   |________   |________   |🧐     |
|B_A3_02.PCM   |0c3fbc96   |0c3fbc96   |0c3fbc96   |👍     |
|B_A5_00.PCM   |d896f7aa   |d896f7aa   |d896f7aa   |👍     |
|B_A5_01.PCM   |83b2f611   |83b2f611   |83b2f611   |👍     |
|B_A5_02.PCM  |788cfd72   |________   |________   |🧐     |
|B_A5_03.PCM   |0def2256   |0def2256   |0def2256   |👍     |
|B_A5_04.PCM  |5b3876a9   |________   |________   |🧐     |
|B_A5_05.PCM  |d4c4aef8   |________   |________   |🧐     |
|B_A5_06.PCM   |306935e9   |306935e9   |306935e9   |👍     |
|B_A5_07.PCM   |7f35e978   |7f35e978   |7f35e978   |👍     |
|B_A5_08.PCM   |b0922e91   |b0922e91   |b0922e91   |👍     |
|B_A5_09.PCM   |bc379c09   |bc379c09   |bc379c09   |👍     |
|B_A5_10.PCM  |bbed1947   |________   |________   |🧐     |
|B_A5_11.PCM  |54d53d92   |________   |________   |🧐     |
|B_A5_16.PCM  |a17b6121   |________   |________   |🧐     |
|B_A5_18.PCM   |0e4136cd   |0e4136cd   |0e4136cd   |👍     |
|B_A5_19.PCM  |7d626b4a   |________   |________   |🧐     |
|B_A5_20.PCM   |2233bea8   |2233bea8   |2233bea8   |👍     |
|B_A5_21.PCM   |7ef43fd5   |7ef43fd5   |7ef43fd5   |👍     |
|B_A5_22.PCM   |7bae9bb3   |7bae9bb3   |7bae9bb3   |👍     |
|B_A5_27.PCM  |d20b6d81   |________   |________   |🧐     |
|B_A5_28.PCM   |4aed1d22   |4aed1d22   |4aed1d22   |👍     |
|B_A5_29.PCM   |7b7a8a02   |7b7a8a02   |7b7a8a02   |👍     |
|B_A5_30.PCM  |2ddf5233   |________   |________   |🧐     |
|B_A5_31.PCM  |c60b59c7   |________   |________   |🧐     |
|B_A5_32.PCM  |16762165   |________   |________   |🧐     |
|B_A5_33.PCM   |85252112   |85252112   |85252112   |👍     |
|B_A5_34.PCM   |35c7bbcb   |35c7bbcb   |35c7bbcb   |👍     |
|B_A5_35.PCM   |0deec8e7   |0deec8e7   |0deec8e7   |👍     |
|B_A5_36.PCM  |013e8db4   |________   |________   |🧐     |
|B_A5_37.PCM  |dbaeb66a   |________   |________   |🧐     |
|B_A5_38.PCM   |57cdbb14   |57cdbb14   |57cdbb14   |👍     |
|B_A5_39.PCM   |9fca2eef   |9fca2eef   |9fca2eef   |👍     |
|B_A5_40.PCM   |21208c04   |21208c04   |21208c04   |👍     |
|B_A5_41.PCM  |________   |51552ec3   |51552ec3   |💤     |
|B_A5_42.PCM  |________   |7657473e   |7657473e   |💤     |
|B_A5_43.PCM  |________   |d1eab09c   |d1eab09c   |💤     |
|B_A5_44.PCM  |________   |840d6230   |840d6230   |💤     |
|B_A5_45.PCM  |________   |526f884a   |526f884a   |💤     |
|B_A5_46.PCM  |________   |a12a5952   |a12a5952   |💤     |
|B_A5_47.PCM  |________   |4267a641   |4267a641   |💤     |
|B_A5_48.PCM  |________   |e8b07660   |e8b07660   |💤     |
|B_A5_49.PCM  |________   |31f7c8d3   |31f7c8d3   |💤     |
|B_A7_00.PCM  |c269c6a5   |________   |________   |🧐     |
|B_A7_02.PCM  |e33cf569   |________   |________   |🧐     |
|B_A7_03.PCM  |0ca67f76   |________   |________   |🧐     |
|B_A7_05.PCM  |d3a9356f   |________   |________   |🧐     |
|B_A7_06.PCM  |3d8f8431   |________   |________   |🧐     |
|B_A7_07.PCM  |eb31f010   |________   |________   |🧐     |
|B_A7_08.PCM   |e4f43070   |e4f43070   |e4f43070   |👍     |
|B_A7_09.PCM  |f250db54   |________   |________   |🧐     |
|B_A7_10.PCM  |5714aa38   |________   |________   |🧐     |
|B_A7_11.PCM   |bb700c75   |bb700c75   |bb700c75   |👍     |
|B_A7_12.PCM  |21ee9aaa   |________   |________   |🧐     |
|B_A7_13.PCM   |7817a0d8   |7817a0d8   |7817a0d8   |👍     |
|B_A7_14.PCM  |c70b25b6   |________   |________   |🧐     |
|B_A7_16.PCM   |de84200b   |de84200b   |de84200b   |👍     |
|B_A7_22.PCM  |________   |f088d086   |f088d086   |💤     |
|B_A7_23.PCM  |________   |957240ba   |957240ba   |💤     |
|B_A7_24.PCM  |________   |61431ead   |61431ead   |💤     |
|B_A7_25.PCM  |________   |6d878ef4   |6d878ef4   |💤     |
|B_A7_26.PCM  |________   |7d3a0fb4   |7d3a0fb4   |💤     |
|B_A7_27.PCM  |________   |b2622f94   |b2622f94   |💤     |
|B_A7_28.PCM  |________   |c8605402   |c8605402   |💤     |
|B_A7_29.PCM  |________   |af25eb71   |af25eb71   |💤     |
|B_A7_30.PCM  |________   |61820133   |61820133   |💤     |
|B_A7_31.PCM  |________   |fb2c1a96   |fb2c1a96   |💤     |
|B_A7_32.PCM  |________   |55af050a   |55af050a   |💤     |
|B_A7_33.PCM  |________   |7518ba55   |7518ba55   |💤     |
|B_A7_34.PCM  |________   |267126d8   |267126d8   |💤     |
|B_A7_35.PCM  |________   |d68dfa74   |d68dfa74   |💤     |
|B_A7_36.PCM  |________   |9b8b3c05   |9b8b3c05   |💤     |
|B_A7_37.PCM  |________   |7b8f99ec   |7b8f99ec   |💤     |
|B_A7_38.PCM  |________   |e9580176   |e9580176   |💤     |
|B_A7_39.PCM  |________   |dfd11676   |dfd11676   |💤     |
|B_A7_40.PCM  |________   |93ba166c   |93ba166c   |💤     |
|B_A7_41.PCM  |________   |119bf668   |119bf668   |💤     |
|B_A7_42.PCM  |________   |2793ca25   |2793ca25   |💤     |
|B_A7_43.PCM  |________   |f64818e2   |f64818e2   |💤     |
|B_A7_44.PCM  |________   |96ea7d3e   |96ea7d3e   |💤     |
|B_A7_45.PCM  |________   |a1c0b251   |a1c0b251   |💤     |
|B_A7_46.PCM  |________   |099b3752   |099b3752   |💤     |
|B_A7_47.PCM  |________   |961f7c36   |961f7c36   |💤     |
|B_A7_48.PCM  |________   |a25e5690   |a25e5690   |💤     |
|EV01_1.PCM   |________   |e5afa596   |e5afa596   |💤     |
|EV01_2.PCM   |________   |50c7a83c   |50c7a83c   |💤     |
|EV01_3.PCM   |________   |c7d6eb5f   |c7d6eb5f   |💤     |
|EV01_4.PCM   |________   |e53e53eb   |e53e53eb   |💤     |
|EV01_5.PCM   |________   |9a688e74   |9a688e74   |💤     |
|EV01_6.PCM   |________   |017c7e39   |017c7e39   |💤     |
|EV02_1.PCM   |________   |3f8feee9   |3f8feee9   |💤     |
|EV02_2.PCM   |________   |bafdfd24   |bafdfd24   |💤     |
|EV02_3.PCM   |________   |c5a70ce6   |c5a70ce6   |💤     |
|EV03_1.PCM   |________   |55286790   |55286790   |💤     |
|EV04_1.PCM   |________   |7d124624   |7d124624   |💤     |
|EV04_2.PCM   |________   |4791b81b   |4791b81b   |💤     |
|EV04_3.PCM   |________   |42a5408c   |42a5408c   |💤     |
|EV04_4.PCM   |________   |bcfab9d8   |bcfab9d8   |💤     |
|EV04_5.PCM   |________   |0f528934   |0f528934   |💤     |
|EV18_1.PCM   |________   |b3d99ae3   |b3d99ae3   |💤     |
|EV18_2.PCM   |________   |6d76a521   |6d76a521   |💤     |
|EV18_3.PCM   |________   |8241f7d4   |8241f7d4   |💤     |
|EV30_1.PCM   |________   |44341d5d   |44341d5d   |💤     |
|EV30_2.PCM   |________   |61012e51   |61012e51   |💤     |
|EV30_3.PCM   |________   |b95fb148   |b95fb148   |💤     |
|EV30_4.PCM   |________   |a6e84031   |a6e84031   |💤     |
|EV30_5.PCM   |________   |d174919f   |d174919f   |💤     |
|F_A5_00.PCM |fdb40831   |2ac330b1   |2ac330b1   |‼️     |
|F_A5_01.PCM |6060b3f8   |11d18202   |11d18202   |‼️     |
|F_A5_02.PCM |97e40956   |a78b8483   |a78b8483   |‼️     |
|F_A5_03.PCM |e35f3ddd   |e814d44f   |e814d44f   |‼️     |
|F_A5_04.PCM |a9d3113e   |adf90d61   |adf90d61   |‼️     |
|F_A5_05.PCM |98680461   |fdaa1156   |fdaa1156   |‼️     |
|F_A5_06.PCM |ee014be2   |672d009b   |672d009b   |‼️     |
|F_A5_07.PCM |61d5b86f   |6e94b593   |6e94b593   |‼️     |
|F_A5_08.PCM |492e07c1   |f4b89b67   |f4b89b67   |‼️     |
|F_A5_09.PCM |f8bc59b8   |e926390e   |e926390e   |‼️     |
|F_A5_10.PCM |63720287   |e4d30e0a   |e4d30e0a   |‼️     |
|F_A5_11.PCM |e4d26a2e   |b50be6a7   |b50be6a7   |‼️     |
|F_A5_12.PCM |96d68a2a   |4c22798c   |4c22798c   |‼️     |
|F_A5_13.PCM |e0b46fe5   |0f5b3f31   |0f5b3f31   |‼️     |
|F_A5_14.PCM |94393630   |b20d0a43   |b20d0a43   |‼️     |
|F_A5_15.PCM |0adb90da   |c8ccd0c9   |c8ccd0c9   |‼️     |
|F_A5_16.PCM   |20aa269d   |20aa269d   |20aa269d   |👍     |
|F_A5_17.PCM |97cef4ed   |9f313c4b   |9f313c4b   |‼️     |
|F_A5_18.PCM |4ea6abf1   |129ecc23   |129ecc23   |‼️     |
|F_A5_19.PCM |2b245092   |ff11b6f7   |ff11b6f7   |‼️     |
|F_A5_20.PCM |e8d418bb   |9208e617   |9208e617   |‼️     |
|F_A5_21.PCM |e4d65c17   |957623df   |957623df   |‼️     |
|T_AB_001.PCM |b45cbc4f   |________   |________   |🧐     |
|T_AB_002.PCM |e697cebd   |________   |________   |🧐     |
|T_AB_003.PCM |efa9d4a7   |________   |________   |🧐     |
|T_AB_004.PCM |cb037171   |________   |________   |🧐     |
|T_AB_005.PCM |a2c7cd25   |________   |________   |🧐     |
|T_AB_006.PCM |d46ff7b4   |________   |________   |🧐     |
|T_AB_007.PCM |32617b8f   |________   |________   |🧐     |
|T_AB_008.PCM |e7a8f7eb   |________   |________   |🧐     |
|T_AR_001.PCM |d03c0dff   |________   |________   |🧐     |
|T_AR_002.PCM |a8aca0bd   |________   |________   |🧐     |
|T_AR_003.PCM |422d01d4   |________   |________   |🧐     |
|T_AR_004.PCM |274d2878   |________   |________   |🧐     |
|T_AR_005.PCM |730e42dd   |________   |________   |🧐     |
|T_AR_006.PCM |eba3078d   |________   |________   |🧐     |
|T_AR_007.PCM |063160dd   |________   |________   |🧐     |
|T_AR_042.PCM |f19f58f1   |________   |________   |🧐     |
|T_AY_001.PCM  |737d1c85   |737d1c85   |737d1c85   |👍     |
|T_AY_002.PCM  |ba8b849e   |ba8b849e   |ba8b849e   |👍     |
|T_AY_003.PCM  |c9aa7a31   |c9aa7a31   |c9aa7a31   |👍     |
|T_AY_004.PCM  |fcf6a0a6   |fcf6a0a6   |fcf6a0a6   |👍     |
|T_AY_005.PCM  |d56ef340   |d56ef340   |d56ef340   |👍     |
|T_AY_006.PCM  |fc164a8a   |fc164a8a   |fc164a8a   |👍     |
|T_AY_007.PCM  |6697a714   |6697a714   |6697a714   |👍     |
|T_AY_008.PCM  |3c073f7b   |3c073f7b   |3c073f7b   |👍     |
|T_AY_009.PCM  |374c54af   |374c54af   |374c54af   |👍     |
|T_AY_010.PCM  |c642e115   |c642e115   |c642e115   |👍     |
|T_BK_001.PCM  |87548dd8   |87548dd8   |87548dd8   |👍     |
|T_BK_002.PCM  |5fa006dd   |5fa006dd   |5fa006dd   |👍     |
|T_BK_003.PCM  |d83cca68   |d83cca68   |d83cca68   |👍     |
|T_BK_004.PCM |bfa4aeab   |________   |________   |🧐     |
|T_BK_005.PCM |826e6f04   |________   |________   |🧐     |
|T_BK_006.PCM |93b77a4f   |________   |________   |🧐     |
|T_BK_007.PCM |1df9f8bd   |________   |________   |🧐     |
|T_BK_008.PCM |c5fbf6ba   |________   |________   |🧐     |
|T_BK_009.PCM |b73b847c   |________   |________   |🧐     |
|T_BK_010.PCM |810d0866   |________   |________   |🧐     |
|T_BK_011.PCM |7cb34fd7   |________   |________   |🧐     |
|T_BK_012.PCM |2aaf913e   |________   |________   |🧐     |
|T_BK_013.PCM |8e8dd77c   |________   |________   |🧐     |
|T_BK_014.PCM |7c13b066   |________   |________   |🧐     |
|T_BK_015.PCM |4919ab85   |________   |________   |🧐     |
|T_BK_016.PCM |465eee67   |________   |________   |🧐     |
|T_BK_017.PCM |3bb67c4a   |________   |________   |🧐     |
|T_BK_018.PCM |0fdd520b   |________   |________   |🧐     |
|T_BK_019.PCM |ff70926c   |________   |________   |🧐     |
|T_BK_020.PCM  |082ec82b   |082ec82b   |082ec82b   |👍     |
|T_BK_021.PCM  |920e676e   |920e676e   |920e676e   |👍     |
|T_BK_022.PCM  |2bba8396   |2bba8396   |2bba8396   |👍     |
|T_BK_023.PCM  |5ac297bb   |5ac297bb   |5ac297bb   |👍     |
|T_BK_024.PCM  |e77a78af   |e77a78af   |e77a78af   |👍     |
|T_BK_025.PCM  |da0afd8d   |da0afd8d   |da0afd8d   |👍     |
|T_BK_026.PCM  |361bfb9e   |361bfb9e   |361bfb9e   |👍     |
|T_BK_027.PCM  |dcc16c12   |dcc16c12   |dcc16c12   |👍     |
|T_BK_048.PCM |8b63b832   |________   |________   |🧐     |
|T_BK_301.PCM |________   |6408b922   |6408b922   |💤     |
|T_BK_302.PCM |________   |66fc99ab   |66fc99ab   |💤     |
|T_BK_303.PCM |________   |796eb187   |796eb187   |💤     |
|T_BK_304.PCM |________   |2e1749d8   |2e1749d8   |💤     |
|T_BK_305.PCM |________   |c3efb5d4   |c3efb5d4   |💤     |
|T_BK_307.PCM |________   |457e1b5e   |457e1b5e   |💤     |
|T_BK_308.PCM |________   |9ed3f7f6   |9ed3f7f6   |💤     |
|T_BK_309.PCM |________   |93bfdc22   |93bfdc22   |💤     |
|T_BK_310.PCM |________   |8213bc2a   |8213bc2a   |💤     |
|T_EG_001.PCM |b07a351b   |________   |________   |🧐     |
|T_EG_002.PCM |e1a455af   |________   |________   |🧐     |
|T_EG_003.PCM |c4d72b43   |________   |________   |🧐     |
|T_EG_004.PCM |1127fe2a   |________   |________   |🧐     |
|T_EG_007.PCM  |ba5e2057   |ba5e2057   |ba5e2057   |👍     |
|T_EG_008.PCM  |33333559   |33333559   |33333559   |👍     |
|T_EG_009.PCM  |abbb2caf   |abbb2caf   |abbb2caf   |👍     |
|T_EG_010.PCM  |d250b983   |d250b983   |d250b983   |👍     |
|T_EG_011.PCM  |c21f6c02   |c21f6c02   |c21f6c02   |👍     |
|T_EG_012.PCM  |2bf71f18   |2bf71f18   |2bf71f18   |👍     |
|T_EG_013.PCM  |34f70105   |34f70105   |34f70105   |👍     |
|T_EG_018.PCM |ecaca1bb   |________   |________   |🧐     |
|T_EG_019.PCM |e55597ff   |________   |________   |🧐     |
|T_EG_020.PCM |6ec1a2c2   |________   |________   |🧐     |
|T_EG_021.PCM |371ea87b   |________   |________   |🧐     |
|T_EG_022.PCM |2b82f3f5   |________   |________   |🧐     |
|T_EG_023.PCM  |2327406f   |2327406f   |2327406f   |👍     |
|T_EG_024.PCM  |a44d5b1b   |a44d5b1b   |a44d5b1b   |👍     |
|T_EG_025.PCM  |45ba7805   |45ba7805   |45ba7805   |👍     |
|T_EG_029.PCM  |8b4d6fee   |8b4d6fee   |8b4d6fee   |👍     |
|T_EG_041.PCM |def49016   |________   |________   |🧐     |
|T_EG_042.PCM |d8ffea02   |________   |________   |🧐     |
|T_EG_043.PCM |f5903cbc   |________   |________   |🧐     |
|T_EG_044.PCM |0efe378b   |________   |________   |🧐     |
|T_EG_045.PCM |e7034584   |________   |________   |🧐     |
|T_EG_046.PCM |6dd19193   |________   |________   |🧐     |
|T_EG_047.PCM |aed78d8d   |________   |________   |🧐     |
|T_EG_048.PCM |d7857f10   |________   |________   |🧐     |
|T_EG_060.PCM  |e6995c89   |e6995c89   |e6995c89   |👍     |
|T_EG_061.PCM  |1d9471b5   |1d9471b5   |1d9471b5   |👍     |
|T_EG_062.PCM  |89b4a4a6   |89b4a4a6   |89b4a4a6   |👍     |
|T_EG_063.PCM  |13626032   |13626032   |13626032   |👍     |
|T_EG_064.PCM  |0b5de1fe   |0b5de1fe   |0b5de1fe   |👍     |
|T_EG_065.PCM  |b1a55574   |b1a55574   |b1a55574   |👍     |
|T_EG_066.PCM  |a2b4e162   |a2b4e162   |a2b4e162   |👍     |
|T_EG_070.PCM  |4ba945ab   |4ba945ab   |4ba945ab   |👍     |
|T_EG_181.PCM |________   |0bda08c0   |0bda08c0   |💤     |
|T_EG_182.PCM |________   |69b0eec3   |69b0eec3   |💤     |
|T_EG_183.PCM |________   |285af43b   |285af43b   |💤     |
|T_EG_310.PCM |________   |9fbf4fe7   |9fbf4fe7   |💤     |
|T_EG_311.PCM |________   |4c986b90   |4c986b90   |💤     |
|T_EG_312.PCM |________   |c02eb6fb   |c02eb6fb   |💤     |
|T_EG_313.PCM |________   |83d01419   |83d01419   |💤     |
|T_EG_314.PCM |________   |8608596e   |8608596e   |💤     |
|T_EG_315.PCM |________   |6267c010   |6267c010   |💤     |
|T_EG_316.PCM |________   |52c8e403   |52c8e403   |💤     |
|T_EG_317.PCM |________   |c1aa5520   |c1aa5520   |💤     |
|T_EG_318.PCM |________   |4fdd7984   |4fdd7984   |💤     |
|T_EG_340.PCM |________   |54e0b212   |54e0b212   |💤     |
|T_EG_341.PCM |________   |c245d77e   |c245d77e   |💤     |
|T_EK_001.PCM  |0c06d6ca   |0c06d6ca   |0c06d6ca   |👍     |
|T_EK_002.PCM  |ca6a0304   |ca6a0304   |ca6a0304   |👍     |
|T_EK_003.PCM  |b092d020   |b092d020   |b092d020   |👍     |
|T_EK_004.PCM  |ab270ba6   |ab270ba6   |ab270ba6   |👍     |
|T_EK_005.PCM  |cbd1578a   |cbd1578a   |cbd1578a   |👍     |
|T_EK_006.PCM  |4ea8a054   |4ea8a054   |4ea8a054   |👍     |
|T_FE_001.PCM  |f41c748c   |f41c748c   |f41c748c   |👍     |
|T_FE_002.PCM  |5e896e44   |5e896e44   |5e896e44   |👍     |
|T_FE_003.PCM  |a69e80f3   |a69e80f3   |a69e80f3   |👍     |
|T_FE_004.PCM  |e5be6b71   |e5be6b71   |e5be6b71   |👍     |
|T_FE_005.PCM  |46730009   |46730009   |46730009   |👍     |
|T_FE_006.PCM  |7cf7ca34   |7cf7ca34   |7cf7ca34   |👍     |
|T_FE_007.PCM  |3d2dec78   |3d2dec78   |3d2dec78   |👍     |
|T_FE_008.PCM  |f717e942   |f717e942   |f717e942   |👍     |
|T_FE_009.PCM  |6bf22218   |6bf22218   |6bf22218   |👍     |
|T_FE_047.PCM  |3c1e8ecc   |3c1e8ecc   |3c1e8ecc   |👍     |
|T_FE_048.PCM  |79b11a9a   |79b11a9a   |79b11a9a   |👍     |
|T_FE_049.PCM  |d0059fed   |d0059fed   |d0059fed   |👍     |
|T_FE_050.PCM  |97cbe4de   |97cbe4de   |97cbe4de   |👍     |
|T_FE_051.PCM  |5a090dd1   |5a090dd1   |5a090dd1   |👍     |
|T_FE_052.PCM  |7067f281   |7067f281   |7067f281   |👍     |
|T_GS_033.PCM |________   |2721fcb2   |2721fcb2   |💤     |
|T_GS_034.PCM |________   |cd1572d4   |cd1572d4   |💤     |
|T_GS_035.PCM |________   |d9179c06   |d9179c06   |💤     |
|T_GS_036.PCM |________   |37fa26d0   |37fa26d0   |💤     |
|T_GS_303.PCM |________   |aafb574f   |aafb574f   |💤     |
|T_GS_304.PCM |________   |f8cc689b   |f8cc689b   |💤     |
|T_GS_305.PCM |________   |a18b4a20   |a18b4a20   |💤     |
|T_GS_306.PCM |________   |0c53e70c   |0c53e70c   |💤     |
|T_GS_307.PCM |________   |aad2ed3f   |aad2ed3f   |💤     |
|T_GS_308.PCM |________   |8a6321f5   |8a6321f5   |💤     |
|T_GS_309.PCM |________   |c056c4f1   |c056c4f1   |💤     |
|T_GS_310.PCM |________   |3d22c7b8   |3d22c7b8   |💤     |
|T_GS_311.PCM |________   |11a29aa1   |11a29aa1   |💤     |
|T_GS_312.PCM |________   |e761256f   |e761256f   |💤     |
|T_GS_313.PCM |________   |ed85b190   |ed85b190   |💤     |
|T_GS_314.PCM |________   |fc959c9b   |fc959c9b   |💤     |
|T_GS_315.PCM |________   |d0e1b25b   |d0e1b25b   |💤     |
|T_GS_316.PCM |________   |58c59b6b   |58c59b6b   |💤     |
|T_GS_317.PCM |________   |e176d161   |e176d161   |💤     |
|T_GS_318.PCM |________   |edbe649b   |edbe649b   |💤     |
|T_GS_319.PCM |________   |2a3db039   |2a3db039   |💤     |
|T_GS_320.PCM |________   |ebff47c2   |ebff47c2   |💤     |
|T_GS_321.PCM |________   |01a18f29   |01a18f29   |💤     |
|T_GS_322.PCM |________   |e6b12272   |e6b12272   |💤     |
|T_GS_323.PCM |________   |fc68ad9a   |fc68ad9a   |💤     |
|T_GS_324.PCM |________   |9088e2ad   |9088e2ad   |💤     |
|T_GS_325.PCM |________   |67d872d7   |67d872d7   |💤     |
|T_GS_326.PCM |________   |587ead44   |587ead44   |💤     |
|T_GS_327.PCM |________   |559a16c6   |559a16c6   |💤     |
|T_GS_328.PCM |________   |f8c287a2   |f8c287a2   |💤     |
|T_GS_329.PCM |________   |d322a7dc   |d322a7dc   |💤     |
|T_GS_330.PCM |________   |336c5b13   |336c5b13   |💤     |
|T_GS_331.PCM |________   |3edd3af8   |3edd3af8   |💤     |
|T_GS_332.PCM |________   |02b628bd   |02b628bd   |💤     |
|T_GS_333.PCM |________   |9399be06   |9399be06   |💤     |
|T_GS_334.PCM |________   |618a47fa   |618a47fa   |💤     |
|T_GS_335.PCM |________   |2e1f2ef0   |2e1f2ef0   |💤     |
|T_GS_336.PCM |________   |f950dab1   |f950dab1   |💤     |
|T_GS_337.PCM |________   |c2dcca83   |c2dcca83   |💤     |
|T_GS_349.PCM |________   |6d10e048   |6d10e048   |💤     |
|T_JB_001.PCM |637d31ef   |________   |________   |🧐     |
|T_JB_003.PCM |b7c87a74   |________   |________   |🧐     |
|T_JB_004.PCM |fef03a18   |________   |________   |🧐     |
|T_JB_005.PCM |b9f678b0   |________   |________   |🧐     |
|T_JB_006.PCM |87bccbcb   |________   |________   |🧐     |
|T_JB_007.PCM |4e53e665   |________   |________   |🧐     |
|T_JB_008.PCM |072e74b9   |________   |________   |🧐     |
|T_JB_009.PCM |12121c73   |________   |________   |🧐     |
|T_JB_010.PCM |12258d94   |________   |________   |🧐     |
|T_JB_011.PCM |6b0e23ba   |________   |________   |🧐     |
|T_JB_012.PCM |ad1a3666   |________   |________   |🧐     |
|T_JB_013.PCM |e3e9221d   |________   |________   |🧐     |
|T_JB_014.PCM |bb1905ce   |________   |________   |🧐     |
|T_JB_015.PCM |a73250a3   |________   |________   |🧐     |
|T_JB_016.PCM |263aeac1   |________   |________   |🧐     |
|T_JB_017.PCM |85a26ea5   |________   |________   |🧐     |
|T_JB_022.PCM |8127afc8   |________   |________   |🧐     |
|T_JB_023.PCM |b6970243   |________   |________   |🧐     |
|T_JB_024.PCM |d563ca0d   |________   |________   |🧐     |
|T_JB_025.PCM |66e10b7e   |________   |________   |🧐     |
|T_JB_026.PCM |8c83f05a   |________   |________   |🧐     |
|T_JB_028.PCM |c1d8dabc   |________   |________   |🧐     |
|T_JB_031.PCM |373adeac   |________   |________   |🧐     |
|T_JB_032.PCM |8de04c79   |________   |________   |🧐     |
|T_JB_033.PCM |0bc3637a   |________   |________   |🧐     |
|T_JR_001.PCM |f409004f   |________   |________   |🧐     |
|T_JR_002.PCM |76109469   |________   |________   |🧐     |
|T_JR_007.PCM |4c1e8803   |________   |________   |🧐     |
|T_JR_008.PCM |c2f70f97   |________   |________   |🧐     |
|T_JR_012.PCM |c3b68ccd   |________   |________   |🧐     |
|T_JR_013.PCM |06c12e4a   |________   |________   |🧐     |
|T_KH_001.PCM  |136103bf   |136103bf   |136103bf   |👍     |
|T_KH_002.PCM  |ab4eee68   |ab4eee68   |ab4eee68   |👍     |
|T_KH_003.PCM  |292ba6c7   |292ba6c7   |292ba6c7   |👍     |
|T_KH_004.PCM  |ec3ba08a   |ec3ba08a   |ec3ba08a   |👍     |
|T_KH_005.PCM |7d4470cb   |________   |________   |🧐     |
|T_KH_006.PCM |5d0ce42a   |________   |________   |🧐     |
|T_KH_007.PCM |e800092d   |________   |________   |🧐     |
|T_KH_008.PCM  |b8007222   |b8007222   |b8007222   |👍     |
|T_KH_009.PCM  |8388facd   |8388facd   |8388facd   |👍     |
|T_KH_010.PCM  |839ab70d   |839ab70d   |839ab70d   |👍     |
|T_KH_011.PCM  |3fd69624   |3fd69624   |3fd69624   |👍     |
|T_KH_012.PCM  |585b61a2   |585b61a2   |585b61a2   |👍     |
|T_KH_013.PCM  |01ae095f   |01ae095f   |01ae095f   |👍     |
|T_KH_014.PCM  |0962fa36   |0962fa36   |0962fa36   |👍     |
|T_KH_015.PCM  |076afb37   |076afb37   |076afb37   |👍     |
|T_KH_016.PCM  |7fc46082   |7fc46082   |7fc46082   |👍     |
|T_KH_017.PCM  |1321ff32   |1321ff32   |1321ff32   |👍     |
|T_KH_018.PCM  |88379727   |88379727   |88379727   |👍     |
|T_KH_019.PCM  |8b4ce797   |8b4ce797   |8b4ce797   |👍     |
|T_KH_020.PCM  |e8a92d01   |e8a92d01   |e8a92d01   |👍     |
|T_KH_021.PCM  |9eae758c   |9eae758c   |9eae758c   |👍     |
|T_KH_022.PCM  |81acab72   |81acab72   |81acab72   |👍     |
|T_KH_023.PCM  |e4894fa8   |e4894fa8   |e4894fa8   |👍     |
|T_KH_301.PCM |________   |270eab51   |270eab51   |💤     |
|T_KH_302.PCM |________   |5f6b9d63   |5f6b9d63   |💤     |
|T_KH_303.PCM |________   |9a9b749c   |9a9b749c   |💤     |
|T_KH_304.PCM |________   |020473a8   |020473a8   |💤     |
|T_LG_001.PCM |09c4dc95   |________   |________   |🧐     |
|T_LG_002.PCM |f08c4f32   |________   |________   |🧐     |
|T_LG_003.PCM |bd1fcac0   |________   |________   |🧐     |
|T_LG_004.PCM |3086018a   |________   |________   |🧐     |
|T_LG_005.PCM |8f18ae6e   |________   |________   |🧐     |
|T_LG_006.PCM |fc7dc395   |________   |________   |🧐     |
|T_LG_007.PCM |4c97db06   |________   |________   |🧐     |
|T_LG_008.PCM |30ea26ac   |________   |________   |🧐     |
|T_LG_009.PCM |d7a44f53   |________   |________   |🧐     |
|T_LG_010.PCM |f67aa4e1   |________   |________   |🧐     |
|T_LG_011.PCM |9eaf68be   |________   |________   |🧐     |
|T_LG_012.PCM |7ef7af2c   |________   |________   |🧐     |
|T_LG_013.PCM |9fc2c1aa   |________   |________   |🧐     |
|T_LG_014.PCM |38a187fb   |________   |________   |🧐     |
|T_LG_015.PCM |44fe7130   |________   |________   |🧐     |
|T_LG_017.PCM |a19c3080   |________   |________   |🧐     |
|T_LG_018.PCM |8e2602b2   |________   |________   |🧐     |
|T_LG_019.PCM |a04c51e1   |________   |________   |🧐     |
|T_LG_020.PCM |d8261dbb   |________   |________   |🧐     |
|T_LG_021.PCM |a65c2ca9   |________   |________   |🧐     |
|T_LG_022.PCM |ba12bcf1   |________   |________   |🧐     |
|T_LG_023.PCM |e9b7cd28   |________   |________   |🧐     |
|T_LG_024.PCM |cc6236e5   |________   |________   |🧐     |
|T_LG_025.PCM |c9ed8757   |________   |________   |🧐     |
|T_LG_026.PCM |24ef039f   |________   |________   |🧐     |
|T_LG_027.PCM |8495e9df   |________   |________   |🧐     |
|T_LG_028.PCM |00d76342   |________   |________   |🧐     |
|T_LG_029.PCM |f344529d   |________   |________   |🧐     |
|T_LR_001.PCM  |24c73b2d   |24c73b2d   |24c73b2d   |👍     |
|T_LR_002.PCM  |956300b9   |956300b9   |956300b9   |👍     |
|T_LR_003.PCM  |1d92905e   |1d92905e   |1d92905e   |👍     |
|T_LR_004.PCM  |1d3b6092   |1d3b6092   |1d3b6092   |👍     |
|T_LR_005.PCM  |054dfdef   |054dfdef   |054dfdef   |👍     |
|T_LR_006.PCM  |1ddf3f56   |1ddf3f56   |1ddf3f56   |👍     |
|T_LR_007.PCM  |0c60e817   |0c60e817   |0c60e817   |👍     |
|T_LR_008.PCM  |41c5edb8   |41c5edb8   |41c5edb8   |👍     |
|T_LR_009.PCM  |89704bd4   |89704bd4   |89704bd4   |👍     |
|T_LR_010.PCM  |2ae2b570   |2ae2b570   |2ae2b570   |👍     |
|T_LR_011.PCM  |01b7a9de   |01b7a9de   |01b7a9de   |👍     |
|T_LR_012.PCM  |1a9a2b13   |1a9a2b13   |1a9a2b13   |👍     |
|T_LR_013.PCM  |0d9cb1f4   |0d9cb1f4   |0d9cb1f4   |👍     |
|T_LR_014.PCM  |a3e83a4c   |a3e83a4c   |a3e83a4c   |👍     |
|T_LR_015.PCM  |bca15361   |bca15361   |bca15361   |👍     |
|T_LR_016.PCM  |cb224e93   |cb224e93   |cb224e93   |👍     |
|T_LR_017.PCM  |875917b1   |875917b1   |875917b1   |👍     |
|T_QT_001.PCM |9affb4ca   |________   |________   |🧐     |
|T_QT_002.PCM |b75512d6   |________   |________   |🧐     |
|T_QT_007.PCM |1073df9f   |________   |________   |🧐     |
|T_QT_008.PCM |3f6af74e   |________   |________   |🧐     |
|T_SF_001.PCM |743cf0da   |________   |________   |🧐     |
|T_SF_002.PCM |a98f20fc   |________   |________   |🧐     |
|T_SF_005.PCM |7144ba25   |________   |________   |🧐     |
|T_SF_007.PCM |1d26c4f4   |________   |________   |🧐     |
|T_SF_008.PCM |e2593448   |________   |________   |🧐     |
|T_SR_011.PCM |370aa219   |________   |________   |🧐     |
|T_TA_001.PCM |a7dbacd0   |________   |________   |🧐     |
|T_TA_002.PCM |ff44d0b0   |________   |________   |🧐     |
|T_TA_003.PCM |27a71ae4   |________   |________   |🧐     |
|T_TA_004.PCM |de7abfe1   |________   |________   |🧐     |
|T_TA_005.PCM |68925cc4   |________   |________   |🧐     |
|T_TA_006.PCM |bf27b720   |________   |________   |🧐     |
|T_YR_001.PCM |dd9ba08a   |________   |________   |🧐     |
|T_YR_002.PCM |62369800   |________   |________   |🧐     |
|T_YR_003.PCM |7de694c5   |________   |________   |🧐     |
|T_YR_006.PCM |72394e46   |________   |________   |🧐     |
|T_YR_008.PCM |2bb11b7a   |________   |________   |🧐     |
|T_YR_025.PCM |3dd2e715   |________   |________   |🧐     |
|T_YR_026.PCM |91655075   |________   |________   |🧐     |
|T_YR_027.PCM |34861bec   |________   |________   |🧐     |
|T_YR_028.PCM |0f92e3a9   |________   |________   |🧐     |
|AJITOSCR.PNB  |b1adfe07   |b1adfe07   |b1adfe07   |👍     |
|AJITSCN1.PNB  |0838f016   |0838f016   |0838f016   |👍     |
|AJITSCN2.PNB  |0838f016   |0838f016   |0838f016   |👍     |
|BNS_ANTI.PNB |________   |4111638b   |4111638b   |💤     |
|BNS_D5.PNB   |________   |10ab0e92   |10ab0e92   |💤     |
|BNS_EF01.PNB |________   |28c81661   |28c81661   |💤     |
|BNS_EF02.PNB |________   |dba583ae   |dba583ae   |💤     |
|BNS_EF03.PNB |________   |dba583ae   |dba583ae   |💤     |
|BNS_EF04.PNB |________   |9ac52608   |9ac52608   |💤     |
|BNS_EF05.PNB |________   |dba583ae   |dba583ae   |💤     |
|BNS_EF06.PNB |________   |28c81661   |28c81661   |💤     |
|BNS_EF07.PNB |________   |dba583ae   |dba583ae   |💤     |
|BNS_EF08.PNB |________   |28c81661   |28c81661   |💤     |
|BNS_EF09.PNB |________   |c9b88657   |c9b88657   |💤     |
|BRS_A7_1.PNB |52972ea5   |________   |________   |🧐     |
|BRS_A7_2.PNB |3ee5a095   |________   |________   |🧐     |
|BRS_ANTI.PNB |________   |b1f114e2   |b1f114e2   |💤     |
|BTS_B5_D.PNB |b271a50c   |________   |________   |🧐     |
|BTS_B5_Y.PNB |5639a71d   |________   |________   |🧐     |
|CAMPSCR0.PNB  |15cf9383   |15cf9383   |15cf9383   |👍     |
|CAMPSCR1.PNB  |47223d11   |47223d11   |47223d11   |👍     |
|CAMPSCR2.PNB  |034cf1cc   |034cf1cc   |034cf1cc   |👍     |
|CAMPSCR3.PNB  |5878e12b   |5878e12b   |5878e12b   |👍     |
|CAMPSCR4.PNB  |aa0e35b8   |aa0e35b8   |aa0e35b8   |👍     |
|CAMPSCR5.PNB |________   |83905aef   |83905aef   |💤     |
|CAMPSCR6.PNB  |dfed89cf   |dfed89cf   |dfed89cf   |👍     |
|CAMPSCR7.PNB|99e782f2   |dac5f4bf   |dac5f4bf   |‼️     |
|CARASCN4.PNB |9b51aa7b   |________   |________   |🧐     |
|CARASCR0.PNB  |c11e7f75   |c11e7f75   |c11e7f75   |👍     |
|CARASCR1.PNB  |b0b06ac4   |b0b06ac4   |b0b06ac4   |👍     |
|CARASCR2.PNB  |3499fc55   |3499fc55   |3499fc55   |👍     |
|CARASCR3.PNB  |f458a941   |f458a941   |f458a941   |👍     |
|CARASCR4.PNB|f87627d9   |c345dad4   |c345dad4   |‼️     |
|CARASCR5.PNB  |78ed6a2b   |78ed6a2b   |78ed6a2b   |👍     |
|CHANGE.PNB   |________   |8edcacad   |8edcacad   |💤     |
|CHANGE2.PNB  |________   |e0c09b63   |e0c09b63   |💤     |
|CHANGE3.PNB  |________   |e0c09b63   |e0c09b63   |💤     |
|CHANGE4.PNB  |________   |e0c09b63   |e0c09b63   |💤     |
|DYURA00.PNB  |________   |217f6199   |217f6199   |💤     |
|DYURA01.PNB  |________   |7168296e   |7168296e   |💤     |
|DYURA02.PNB  |________   |d90b98a6   |d90b98a6   |💤     |
|DYURA03.PNB  |________   |15ad3fdb   |15ad3fdb   |💤     |
|DYURA04.PNB  |________   |17d0acdf   |17d0acdf   |💤     |
|ENDING.PNB   |f88c40a2   |________   |________   |🧐     |
|EVT011.PNB   |d42987a0   |________   |________   |🧐     |
|EVT014.PNB   |6f188a59   |________   |________   |🧐     |
|EVT021.PNB   |________   |d412c4b1   |d412c4b1   |💤     |
|EVT024N.PNB |________   |f81b80ea   |c4a572d0   |👾     |
|EVT057.PNB   |d9c1be76   |________   |________   |🧐     |
|EVT078N.PNB  |________   |80038d66   |80038d66   |💤     |
|EXCA_SCR.PNB  |d42987a0   |d42987a0   |d42987a0   |👍     |
|FNS_A3_0.PNB  |ee640b4a   |ee640b4a   |ee640b4a   |👍     |
|FNS_A5_0.PNB  |ff9d6400   |ff9d6400   |ff9d6400   |👍     |
|FNS_A5_7.PNB |________   |506ada59   |506ada59   |💤     |
|FNS_A7_0.PNB  |a81a0d20   |a81a0d20   |a81a0d20   |👍     |
|FNS_A7_1.PNB  |7aadd8da   |7aadd8da   |7aadd8da   |👍     |
|FNS_A7_2.PNB  |44215d0e   |44215d0e   |44215d0e   |👍     |
|FNS_B2_1.PNB  |05afd9ec   |05afd9ec   |05afd9ec   |👍     |
|FNS_B5_0.PNB  |9c1bbaa7   |9c1bbaa7   |9c1bbaa7   |👍     |
|FNS_B5_1.PNB  |d895527e   |d895527e   |d895527e   |👍     |
|FNS_B5_2.PNB  |9c1bbaa7   |9c1bbaa7   |9c1bbaa7   |👍     |
|FNS_C2_0.PNB  |5ecb8b5a   |5ecb8b5a   |5ecb8b5a   |👍     |
|FNS_C4_0.PNB|44215d0e   |2a549e05   |2a549e05   |‼️     |
|FNS_C4_4.PNB  |bfdd4207   |bfdd4207   |bfdd4207   |👍     |
|FNS_C4_5.PNB |________   |f724dd78   |f724dd78   |💤     |
|FNS_D2_0.PNB  |88048737   |88048737   |88048737   |👍     |
|FNS_D2_A.PNB  |6973d68f   |6973d68f   |6973d68f   |👍     |
|FNS_D2_B.PNB  |0ec71a4b   |0ec71a4b   |0ec71a4b   |👍     |
|FNS_D2_C.PNB|8f183360   |ebedef6a   |ebedef6a   |‼️     |
|FNS_D5_0.PNB |________   |bbaaeec2   |bbaaeec2   |💤     |
|FNS_D5_1.PNB |________   |326532c5   |326532c5   |💤     |
|FNS_D5_2.PNB |________   |286246dd   |286246dd   |💤     |
|FNS_WLD.PNB  |________   |927e1774   |927e1774   |💤     |
|FRS_A3_0.PNB  |e86adc90   |e86adc90   |e86adc90   |👍     |
|FRS_A5_0.PNB  |b8426709   |b8426709   |b8426709   |👍     |
|FRS_A5_7.PNB |________   |7b8f5919   |7b8f5919   |💤     |
|FRS_A7_0.PNB  |a51096c1   |a51096c1   |a51096c1   |👍     |
|FRS_A7_1.PNB  |f5f43ee3   |f5f43ee3   |f5f43ee3   |👍     |
|FRS_A7_2.PNB  |3ee5a095   |3ee5a095   |3ee5a095   |👍     |
|FRS_B2_1.PNB  |f5f43ee3   |f5f43ee3   |f5f43ee3   |👍     |
|FRS_B2_4.PNB  |1d3c3a9c   |1d3c3a9c   |1d3c3a9c   |👍     |
|FRS_B5_1.PNB  |33b73d08   |33b73d08   |33b73d08   |👍     |
|FRS_B5_5.PNB  |64b3ccc1   |64b3ccc1   |64b3ccc1   |👍     |
|FRS_B5_6.PNB  |3bbf2e5e   |3bbf2e5e   |3bbf2e5e   |👍     |
|FRS_B5_A.PNB|1393617    |1d065c62   |1d065c62   |‼️     |
|FRS_B5_B.PNB|5639a71d   |0cda3b06   |0cda3b06   |‼️     |
|FRS_B5_C.PNB|1f9f6d4e   |15e52dc7   |15e52dc7   |‼️     |
|FRS_B5_D.PNB|1393617    |1d065c62   |1d065c62   |‼️     |
|FRS_B5_E.PNB|5639a71d   |0cda3b06   |0cda3b06   |‼️     |
|FRS_B5_F.PNB|1f9f6d4e   |15e52dc7   |15e52dc7   |‼️     |
|FRS_B6_1.PNB  |94da18c6   |94da18c6   |94da18c6   |👍     |
|FRS_B6_2.PNB  |4fb79c3e   |4fb79c3e   |4fb79c3e   |👍     |
|FRS_C2_0.PNB|0aba3e0f   |11ca5861   |11ca5861   |‼️     |
|FRS_C2_1.PNB |________   |3f298615   |3f298615   |💤     |
|FRS_C2_2.PNB |________   |4b6af5f1   |4b6af5f1   |💤     |
|FRS_C4_0.PNB|f673f5fe   |7601bce9   |7601bce9   |‼️     |
|FRS_C4_4.PNB  |eb5464a1   |eb5464a1   |eb5464a1   |👍     |
|FRS_C4_5.PNB|2f3036af   |4033787e   |4033787e   |‼️     |
|FRS_C4_6.PNB  |8df08d2b   |8df08d2b   |8df08d2b   |👍     |
|FRS_C4_7.PNB |________   |3ee5a095   |3ee5a095   |💤     |
|FRS_C4_T.PNB|ba6ee7d5   |52a16621   |52a16621   |‼️     |
|FRS_D2_0.PNB|483f5e5e   |b83ec0a5   |b83ec0a5   |‼️     |
|FRS_D2_1.PNB  |5b9f731b   |5b9f731b   |5b9f731b   |👍     |
|FRS_D5_0.PNB |________   |9da9bb97   |9da9bb97   |💤     |
|FRS_D5_1.PNB |________   |e4f26974   |e4f26974   |💤     |
|FRS_T0_0.PNB  |35b6243e   |35b6243e   |35b6243e   |👍     |
|FRS_T1_0.PNB  |5efef321   |5efef321   |5efef321   |👍     |
|FRS_T4_0.PNB |________   |e7f8dd48   |e7f8dd48   |💤     |
|FRS_TEST.PNB |cef3e127   |________   |________   |🧐     |
|FRS_WLD.PNB  |________   |f95d7ff6   |f95d7ff6   |💤     |
|GRIG_KSN.PNB  |44215d0e   |44215d0e   |44215d0e   |👍     |
|GRIG_SCR.PNB  |2eff71c8   |2eff71c8   |2eff71c8   |👍     |
|HELPE.PNB    |4d37c99f   |________   |________   |🧐     |
|HELPEB.PNB   |05b02b1d   |________   |________   |🧐     |
|HELPJ.PNB    |05b02b1d   |________   |________   |🧐     |
|HELPJB.PNB   |4d37c99f   |________   |________   |🧐     |
|MAP_A20.PNB  |________   |598cf635   |598cf635   |💤     |
|MAP_A30.PNB  |________   |12845f09   |12845f09   |💤     |
|MAP_A32.PNB  |________   |dc915192   |dc915192   |💤     |
|MAP_A33.PNB  |________   |b30b5f8d   |b30b5f8d   |💤     |
|MAP_A50.PNB  |________   |7b7db963   |7b7db963   |💤     |
|MAP_A52.PNB  |________   |7b5e808e   |7b5e808e   |💤     |
|MAP_A54.PNB  |________   |904e09e0   |904e09e0   |💤     |
|MAP_A70.PNB  |________   |9d7c0a70   |9d7c0a70   |💤     |
|MAP_B11.PNB  |________   |9b45e4e5   |9b45e4e5   |💤     |
|MAP_B21.PNB  |________   |10e70207   |10e70207   |💤     |
|MAP_B50.PNB  |________   |799aea9e   |799aea9e   |💤     |
|MAP_B51.PNB  |________   |5705f876   |5705f876   |💤     |
|MAP_B52.PNB  |________   |52a8620e   |52a8620e   |💤     |
|MAP_B53.PNB  |________   |747a29b1   |747a29b1   |💤     |
|MAP_B54.PNB  |________   |747a29b1   |747a29b1   |💤     |
|MAP_B60.PNB  |________   |2ca47617   |2ca47617   |💤     |
|MAP_B61.PNB  |________   |c40d59ac   |c40d59ac   |💤     |
|MAP_B62.PNB  |________   |d8745826   |d8745826   |💤     |
|MAP_B63.PNB  |________   |748b2589   |748b2589   |💤     |
|MAP_B64.PNB  |________   |b7f51859   |b7f51859   |💤     |
|MAP_B65.PNB  |________   |b3837306   |b3837306   |💤     |
|MAP_B66.PNB  |________   |7bbdb2d4   |7bbdb2d4   |💤     |
|MAP_B67.PNB  |________   |fd474e4f   |fd474e4f   |💤     |
|MAP_B68.PNB  |________   |36206149   |36206149   |💤     |
|MAP_B69.PNB  |________   |e314ea09   |e314ea09   |💤     |
|MAP_C20.PNB  |________   |bfdb3cff   |bfdb3cff   |💤     |
|MAP_C21.PNB  |________   |ea157d85   |ea157d85   |💤     |
|MAP_C22.PNB  |________   |262b63b9   |262b63b9   |💤     |
|MAP_D20.PNB  |________   |2d125a20   |2d125a20   |💤     |
|MAP_D30.PNB  |________   |33b687bb   |33b687bb   |💤     |
|MAP_T01.PNB  |________   |cab81f96   |cab81f96   |💤     |
|MAP_T03.PNB  |________   |f86c3cef   |f86c3cef   |💤     |
|MAP_T04.PNB  |________   |1e4b68e7   |1e4b68e7   |💤     |
|MAP_T05.PNB  |________   |92c3ecb4   |92c3ecb4   |💤     |
|MAP_T11.PNB  |________   |f83cfe46   |f83cfe46   |💤     |
|MAP_T12.PNB  |________   |bde8145d   |bde8145d   |💤     |
|MAP_T21.PNB  |________   |5b81a3a0   |5b81a3a0   |💤     |
|MAP_T24.PNB  |________   |ff4aab2a   |ff4aab2a   |💤     |
|MAP_T2A.PNB  |________   |a60d3a77   |a60d3a77   |💤     |
|MAP_T2D.PNB  |________   |c1498286   |c1498286   |💤     |
|MAP_T31.PNB  |________   |661ec3db   |661ec3db   |💤     |
|MAP_T32.PNB  |________   |a68db6f1   |a68db6f1   |💤     |
|MAP_T41.PNB  |________   |a68db6f1   |a68db6f1   |💤     |
|MAP_T42.PNB  |________   |1c8e8074   |1c8e8074   |💤     |
|MAP_T45.PNB  |________   |445c776e   |445c776e   |💤     |
|MAP_TOU.PNB  |________   |abc1ce11   |abc1ce11   |💤     |
|RUINSCR.PNB   |4f8dfb58   |4f8dfb58   |4f8dfb58   |👍     |
|SCBTLA31.PNB  |36721e4c   |36721e4c   |36721e4c   |👍     |
|SCBTLA32.PNB  |90f79051   |90f79051   |90f79051   |👍     |
|SCBTL_A3.PNB  |e5523c1b   |e5523c1b   |e5523c1b   |👍     |
|SCRBTLA5.PNB  |5bcabf74   |5bcabf74   |5bcabf74   |👍     |
|SEEKSCR.PNB |e1442be6   |5d05fc73   |5d05fc73   |‼️     |
|SPACE.PNB     |3597f572   |3597f572   |3597f572   |👍     |
|TGD_SKY.PNB   |b99ca842   |b99ca842   |b99ca842   |👍     |
|TITLEE.PNB  |42e84c1f   |________   |e0c09b63   |🦖     |
|TITLEJ.PNB   |e0c09b63   |e0c09b63   |________   |💨     |
|TOWN2.PNB     |676c889e   |676c889e   |676c889e   |👍     |
|URUGND_B.PNB|7dd580a6   |b22133d2   |b22133d2   |‼️     |
|VARAHA.PNB  |482ae240   |4b6af5f1   |4b6af5f1   |‼️     |
|WARNING.PNB  |________   |e83ce692   |e83ce692   |💤     |
|ZOAH.PNB    |25130bc1   |8af36264   |8af36264   |‼️     |
|1ST_READ.PRG|a9e37a80   |602b76a1   |ea53dbaf   |🤯     |
|BTL_A3.PRG  |34388831   |3c520e0d   |c3e65abc   |🤯     |
|BTL_A3_2.PRG|87bfad2f   |55bc767f   |7b438b21   |🤯     |
|BTL_A5.PRG  |080babfd   |08bad29b   |669320c9   |🤯     |
|BTL_A5_2.PRG|47795628   |460217b1   |57dbcba7   |🤯     |
|BTL_A5_3.PRG|a88567c2   |39648e05   |ab1e60ea   |🤯     |
|BTL_A7.PRG  |a69f86a7   |756489b7   |7e4f8a4c   |🤯     |
|BTL_A7_2.PRG|f0cc4d34   |d401f57a   |b83a9257   |🤯     |
|BTL_B2.PRG  |7c4394b5   |26d67fa4   |f1197f8f   |🤯     |
|BTL_B5.PRG  |3be52400   |cd6b37d8   |1ca61e9f   |🤯     |
|BTL_B5_2.PRG|cc6bab50   |a84d3cdc   |0933208b   |🤯     |
|BTL_B5_3.PRG|d9bfea1e   |5ae995f4   |cb4638f7   |🤯     |
|BTL_B6.PRG  |6c32fada   |0c6d96da   |d06851b0   |🤯     |
|BTL_B6_2.PRG|753c9346   |9dd4cfac   |85a035b9   |🤯     |
|BTL_C2.PRG  |edc75d59   |1d6150c0   |571b713d   |🤯     |
|BTL_C2_2.PRG|bf9cce4b   |9f16f29f   |93d0bf87   |🤯     |
|BTL_C4.PRG  |4f0380a5   |e0148fd6   |55cd78db   |🤯     |
|BTL_C5.PRG  |a72d4acd   |a0466295   |6b28fa63   |🤯     |
|BTL_C5_2.PRG|5083b950   |1a1b36f5   |8176bff7   |🤯     |
|BTL_C8.PRG  |c26e6561   |75f0919f   |51125e86   |🤯     |
|BTL_C8_2.PRG|d38a0f15   |fa0ba2c8   |52d6328e   |🤯     |
|BTL_D2.PRG  |25616c9c   |aa6b9f85   |75e063a8   |🤯     |
|BTL_D2_2.PRG|d443bc6e   |5d989a8f   |9963ed58   |🤯     |
|BTL_D4.PRG  |________   |00a4fe87   |99cb7cb9   |👾     |
|BTL_D5.PRG  |________   |16d23987   |3d1be617   |👾     |
|BTL_T0.PRG  |6b04619a   |35c13009   |587117a5   |🤯     |
|BTL_X0.PRG  |2a960d1e   |66937580   |7d7218ab   |🤯     |
|CHANGE.PRG  |________   |d1ce9c53   |8b6602ba   |👾     |
|FLAGEDIT.PRG|58e60f03   |c4511624   |113946a7   |🤯     |
|FLD_A3.PRG  |0426174e   |3db7df17   |de056f8b   |🤯     |
|FLD_A5.PRG  |2fdb5681   |75025a3a   |6f823971   |🤯     |
|FLD_A7.PRG  |87576880   |758cadfa   |6034783b   |🤯     |
|FLD_B2.PRG  |8154781b   |27256582   |35d6d302   |🤯     |
|FLD_B5.PRG  |79bee3fd   |e8b109da   |f892e1a4   |🤯     |
|FLD_B6.PRG  |15b94ab7   |67fea2fa   |c894fb08   |🤯     |
|FLD_C2.PRG  |facf27fc   |e5712cf9   |92c6af15   |🤯     |
|FLD_C4.PRG  |b768fdfd   |07e3d73f   |680decdf   |🤯     |
|FLD_C8.PRG  |ec9fd1e7   |4fe6f113   |a4984acd   |🤯     |
|FLD_D2.PRG  |58d92ce1   |00aa6299   |18b12ec8   |🤯     |
|FLD_D3.PRG  |73b803af   |42f81540   |a77f5ef2   |🤯     |
|FLD_D5.PRG  |________   |9d841443   |8e0831b9   |👾     |
|MENUEN.PRG  |________   |e121a3f8   |928cb891   |👾     |
|MOVIE.PRG   |36ee05c8   |46d1ec9f   |fa988f7d   |🤯     |
|SEGALOGO.PRG|c97aa5a4   |5e097bb6   |e31927b9   |🤯     |
|SNDTEST.PRG |26ee5fb9   |9b7e7767   |62e9d924   |🤯     |
|TITLE.PRG   |ec4bfd59   |ce5a3008   |51540c92   |🤯     |
|TWN_CAMP.PRG|d116fc99   |8b2e5556   |b342a4bf   |🤯     |
|TWN_CARA.PRG|483b3900   |d7fcb0d1   |d8df1041   |🤯     |
|TWN_DRA.PRG  |a8f6e62a   |________   |________   |🧐     |
|TWN_E006.PRG|________   |17f97034   |13e49d1f   |👾     |
|TWN_E011.PRG|b6586345   |d435e8f7   |e5bb44d6   |🤯     |
|TWN_E014.PRG|782e586e   |7d5fc2ae   |29973d2a   |🤯     |
|TWN_E021.PRG|________   |076877a3   |23ef5e5a   |👾     |
|TWN_E022.PRG|________   |51edb93e   |ec2e6086   |👾     |
|TWN_E057.PRG |eec39976   |________   |________   |🧐     |
|TWN_E059.PRG |2a8482e2   |________   |________   |🧐     |
|TWN_EXCA.PRG|5a81724b   |3feb958e   |2f5b961c   |🤯     |
|TWN_JIRI.PRG|9ede5b5b   |53480012   |facf58bc   |🤯     |
|TWN_RUIN.PRG|91935f49   |7f54a4fe   |7ac50303   |🤯     |
|TWN_SEEK.PRG|4fa3b8cf   |bcdbb001   |70d7ea0d   |🤯     |
|TWN_ZOAH.PRG|7bc52a00   |9e46ab34   |94bfcfae   |🤯     |
|WORLD.PRG   |501646c3   |f255f25b   |333e02e6   |🤯     |
|AJITOSCR.SCB  |aac6f9e1   |aac6f9e1   |aac6f9e1   |👍     |
|AJITSCN1.SCB  |41eadeda   |41eadeda   |41eadeda   |👍     |
|AJITSCN2.SCB  |dfeabc54   |dfeabc54   |dfeabc54   |👍     |
|BNS_ANTI.SCB |________   |53f64754   |53f64754   |💤     |
|BNS_D5.SCB   |________   |2d65abdd   |2d65abdd   |💤     |
|BNS_EF01.SCB |________   |23acfcb0   |23acfcb0   |💤     |
|BNS_EF02.SCB |________   |9bea4874   |9bea4874   |💤     |
|BNS_EF03.SCB |________   |7da13c80   |7da13c80   |💤     |
|BNS_EF04.SCB |________   |4518760d   |4518760d   |💤     |
|BNS_EF05.SCB |________   |a6dea61e   |a6dea61e   |💤     |
|BNS_EF06.SCB |________   |960ebc95   |960ebc95   |💤     |
|BNS_EF07.SCB |________   |7d77a731   |7d77a731   |💤     |
|BNS_EF08.SCB |________   |6e4251f9   |6e4251f9   |💤     |
|BNS_EF09.SCB |________   |35ce2e3e   |35ce2e3e   |💤     |
|BRS_A7_1.SCB |a898362a   |________   |________   |🧐     |
|BRS_A7_2.SCB |67c4e94f   |________   |________   |🧐     |
|BRS_ANTI.SCB |________   |b7be4ff3   |b7be4ff3   |💤     |
|BTS_B5_D.SCB |256fdb2b   |________   |________   |🧐     |
|BTS_B5_Y.SCB |67c20c8b   |________   |________   |🧐     |
|CAMPSCR0.SCB  |f5c47beb   |f5c47beb   |f5c47beb   |👍     |
|CAMPSCR1.SCB  |b387ffef   |b387ffef   |b387ffef   |👍     |
|CAMPSCR2.SCB  |80431798   |80431798   |80431798   |👍     |
|CAMPSCR3.SCB  |1d25419e   |1d25419e   |1d25419e   |👍     |
|CAMPSCR4.SCB  |2f4e2dc0   |2f4e2dc0   |2f4e2dc0   |👍     |
|CAMPSCR5.SCB |________   |0b73f414   |0b73f414   |💤     |
|CAMPSCR6.SCB  |7c07938f   |7c07938f   |7c07938f   |👍     |
|CAMPSCR7.SCB|6b70e593   |2c4806bf   |2c4806bf   |‼️     |
|CARASCN4.SCB |2636c06c   |________   |________   |🧐     |
|CARASCR0.SCB  |80431798   |80431798   |80431798   |👍     |
|CARASCR1.SCB  |2d2b15f4   |2d2b15f4   |2d2b15f4   |👍     |
|CARASCR2.SCB  |2f4e2dc0   |2f4e2dc0   |2f4e2dc0   |👍     |
|CARASCR3.SCB  |7229795c   |7229795c   |7229795c   |👍     |
|CARASCR4.SCB|d609fd74   |4681247e   |4681247e   |‼️     |
|CARASCR5.SCB  |60bd70ec   |60bd70ec   |60bd70ec   |👍     |
|CHANGE.SCB   |________   |8d362e95   |8d362e95   |💤     |
|CHANGE2.SCB  |________   |db7389cc   |db7389cc   |💤     |
|CHANGE3.SCB  |________   |c079d6fb   |c079d6fb   |💤     |
|CHANGE4.SCB  |________   |67a94253   |67a94253   |💤     |
|DYURA00.SCB  |________   |7813d64b   |7813d64b   |💤     |
|DYURA01.SCB  |________   |2e35acaa   |2e35acaa   |💤     |
|DYURA02.SCB  |________   |70cce364   |70cce364   |💤     |
|DYURA03.SCB  |________   |f9c1dbe6   |f9c1dbe6   |💤     |
|DYURA04.SCB  |________   |8f7e5152   |8f7e5152   |💤     |
|ENDING.SCB   |993ef61d   |________   |________   |🧐     |
|EVT011.SCB   |cfe1a2e9   |________   |________   |🧐     |
|EVT011N.SCB   |a74efa6a   |a74efa6a   |a74efa6a   |👍     |
|EVT014.SCB   |660357ea   |________   |________   |🧐     |
|EVT021.SCB   |________   |7da45a1d   |7da45a1d   |💤     |
|EVT024N.SCB |________   |e2acf8d9   |260d3646   |👾     |
|EVT057.SCB   |c9e25437   |________   |________   |🧐     |
|EVT057N.SCB  |154d4952   |________   |________   |🧐     |
|EVT078N.SCB  |________   |b327bb4f   |b327bb4f   |💤     |
|EXCA_SCR.SCB  |cfe1a2e9   |cfe1a2e9   |cfe1a2e9   |👍     |
|FNS_A3_0.SCB  |007bc104   |007bc104   |007bc104   |👍     |
|FNS_A5_0.SCB  |39205734   |39205734   |39205734   |👍     |
|FNS_A5_7.SCB |________   |9abeb19f   |9abeb19f   |💤     |
|FNS_A7_0.SCB  |225d8775   |225d8775   |225d8775   |👍     |
|FNS_A7_1.SCB  |789a8e2c   |789a8e2c   |789a8e2c   |👍     |
|FNS_A7_2.SCB  |60cb1413   |60cb1413   |60cb1413   |👍     |
|FNS_B2_1.SCB  |5675e816   |5675e816   |5675e816   |👍     |
|FNS_B5_0.SCB  |91d963bd   |91d963bd   |91d963bd   |👍     |
|FNS_B5_1.SCB  |215c8881   |215c8881   |215c8881   |👍     |
|FNS_B5_2.SCB  |91d963bd   |91d963bd   |91d963bd   |👍     |
|FNS_C2_0.SCB  |3e6b4859   |3e6b4859   |3e6b4859   |👍     |
|FNS_C4_0.SCB|60cb1413   |880176f3   |880176f3   |‼️     |
|FNS_C4_4.SCB  |fe2056e4   |fe2056e4   |fe2056e4   |👍     |
|FNS_C4_5.SCB |________   |fe2056e4   |fe2056e4   |💤     |
|FNS_D2_0.SCB  |8fc3fc85   |8fc3fc85   |8fc3fc85   |👍     |
|FNS_D2_A.SCB  |5b7940ac   |5b7940ac   |5b7940ac   |👍     |
|FNS_D2_B.SCB  |67ca4312   |67ca4312   |67ca4312   |👍     |
|FNS_D2_C.SCB|8fc3fc85   |4253411c   |4253411c   |‼️     |
|FNS_D5_0.SCB |________   |12364e05   |12364e05   |💤     |
|FNS_D5_1.SCB |________   |ddcf5733   |ddcf5733   |💤     |
|FNS_D5_2.SCB |________   |53f64754   |53f64754   |💤     |
|FNS_WLD.SCB  |________   |c5e48e9c   |c5e48e9c   |💤     |
|FRS_A3_0.SCB  |1ef69573   |1ef69573   |1ef69573   |👍     |
|FRS_A5_0.SCB  |785730fe   |785730fe   |785730fe   |👍     |
|FRS_A5_7.SCB |________   |677aad12   |677aad12   |💤     |
|FRS_A7_0.SCB|d075c4a2   |471c2a78   |471c2a78   |‼️     |
|FRS_A7_1.SCB  |74e049cd   |74e049cd   |74e049cd   |👍     |
|FRS_A7_2.SCB  |67c4e94f   |67c4e94f   |67c4e94f   |👍     |
|FRS_B2_1.SCB  |4da21854   |4da21854   |4da21854   |👍     |
|FRS_B2_4.SCB  |23c2b8f1   |23c2b8f1   |23c2b8f1   |👍     |
|FRS_B5_1.SCB  |647db4e6   |647db4e6   |647db4e6   |👍     |
|FRS_B5_5.SCB  |47261ef4   |47261ef4   |47261ef4   |👍     |
|FRS_B5_6.SCB  |173ab84a   |173ab84a   |173ab84a   |👍     |
|FRS_B5_A.SCB|76bddb88   |f61f5682   |f61f5682   |‼️     |
|FRS_B5_B.SCB|67c20c8b   |eeecd535   |eeecd535   |‼️     |
|FRS_B5_C.SCB|4b8c9674   |5c1aabde   |5c1aabde   |‼️     |
|FRS_B5_D.SCB|76bddb88   |f61f5682   |f61f5682   |‼️     |
|FRS_B5_E.SCB|67c20c8b   |eeecd535   |eeecd535   |‼️     |
|FRS_B5_F.SCB|4b8c9674   |5c1aabde   |5c1aabde   |‼️     |
|FRS_B6_1.SCB  |1830557b   |1830557b   |1830557b   |👍     |
|FRS_B6_2.SCB  |07bf6014   |07bf6014   |07bf6014   |👍     |
|FRS_C2_0.SCB|b096efe5   |c10292e1   |c10292e1   |‼️     |
|FRS_C2_1.SCB |________   |e176b251   |e176b251   |💤     |
|FRS_C2_2.SCB |________   |a8f7aad7   |a8f7aad7   |💤     |
|FRS_C4_0.SCB|41d94c08   |e503519a   |e503519a   |‼️     |
|FRS_C4_4.SCB  |2c793bc9   |2c793bc9   |2c793bc9   |👍     |
|FRS_C4_5.SCB|fe2056e4   |5df0622d   |5df0622d   |‼️     |
|FRS_C4_7.SCB |________   |14ff13ff   |14ff13ff   |💤     |
|FRS_D2_0.SCB|8ed0ea18   |0566c342   |0566c342   |‼️     |
|FRS_D2_1.SCB  |9df31fbd   |9df31fbd   |9df31fbd   |👍     |
|FRS_D5_0.SCB |________   |c01beaf1   |c01beaf1   |💤     |
|FRS_D5_1.SCB |________   |b7be4ff3   |b7be4ff3   |💤     |
|FRS_T0_0.SCB  |73f9339d   |73f9339d   |73f9339d   |👍     |
|FRS_T1_0.SCB  |87c6fc2c   |87c6fc2c   |87c6fc2c   |👍     |
|FRS_T4_0.SCB |________   |9e79bcd7   |9e79bcd7   |💤     |
|FRS_TEST.SCB |c582855d   |________   |________   |🧐     |
|FRS_WLD.SCB  |________   |284d8c2f   |284d8c2f   |💤     |
|GRIG_KSN.SCB  |60cb1413   |60cb1413   |60cb1413   |👍     |
|GRIG_SCR.SCB  |a23131ad   |a23131ad   |a23131ad   |👍     |
|HELPE.SCB    |89ec7975   |________   |________   |🧐     |
|HELPEB.SCB   |53143aac   |________   |________   |🧐     |
|HELPJ.SCB    |67cfd921   |________   |________   |🧐     |
|HELPJB.SCB   |cb828730   |________   |________   |🧐     |
|MAP_A20.SCB  |________   |f70adc33   |f70adc33   |💤     |
|MAP_A30.SCB |ad635466   |0dc020c7   |0dc020c7   |‼️     |
|MAP_A31.SCB  |cc7fea24   |________   |________   |🧐     |
|MAP_A32.SCB |66fdad9e   |d216a892   |d216a892   |‼️     |
|MAP_A33.SCB  |________   |145da0f9   |145da0f9   |💤     |
|MAP_A50.SCB |a9243204   |847535e7   |847535e7   |‼️     |
|MAP_A52.SCB |21940e89   |4373a053   |4373a053   |‼️     |
|MAP_A54.SCB |9088d30a   |1e14e873   |1e14e873   |‼️     |
|MAP_A70.SCB  |________   |179bf935   |179bf935   |💤     |
|MAP_B11.SCB  |________   |70012ff4   |70012ff4   |💤     |
|MAP_B21.SCB  |________   |0b5651d5   |0b5651d5   |💤     |
|MAP_B50.SCB  |________   |29c77c14   |29c77c14   |💤     |
|MAP_B51.SCB  |________   |ed6860db   |ed6860db   |💤     |
|MAP_B52.SCB  |________   |3eec7869   |3eec7869   |💤     |
|MAP_B53.SCB  |________   |452167ed   |452167ed   |💤     |
|MAP_B54.SCB  |________   |5792939b   |5792939b   |💤     |
|MAP_B60.SCB  |________   |ca1ef5f7   |ca1ef5f7   |💤     |
|MAP_B61.SCB  |________   |074ec4ab   |074ec4ab   |💤     |
|MAP_B62.SCB  |________   |7309ffe6   |7309ffe6   |💤     |
|MAP_B63.SCB  |________   |f3ab6796   |f3ab6796   |💤     |
|MAP_B64.SCB  |________   |212df4ad   |212df4ad   |💤     |
|MAP_B65.SCB  |________   |4b9e9d18   |4b9e9d18   |💤     |
|MAP_B66.SCB  |________   |0f8ff5e2   |0f8ff5e2   |💤     |
|MAP_B67.SCB  |________   |4ffbb657   |4ffbb657   |💤     |
|MAP_B68.SCB  |________   |f0e935fb   |f0e935fb   |💤     |
|MAP_B69.SCB  |________   |8a7f02a3   |8a7f02a3   |💤     |
|MAP_C20.SCB  |________   |2922ab30   |2922ab30   |💤     |
|MAP_C21.SCB  |________   |27781661   |27781661   |💤     |
|MAP_C22.SCB  |________   |a4e53ec9   |a4e53ec9   |💤     |
|MAP_D20.SCB  |________   |b907b2c8   |b907b2c8   |💤     |
|MAP_D30.SCB  |________   |52990022   |52990022   |💤     |
|MAP_T01.SCB  |________   |c67e16ed   |c67e16ed   |💤     |
|MAP_T03.SCB  |________   |8a8dff6d   |8a8dff6d   |💤     |
|MAP_T04.SCB  |________   |059ae110   |059ae110   |💤     |
|MAP_T05.SCB  |________   |c5730e5a   |c5730e5a   |💤     |
|MAP_T11.SCB  |________   |ef09b7bd   |ef09b7bd   |💤     |
|MAP_T12.SCB  |________   |867bb675   |867bb675   |💤     |
|MAP_T21.SCB  |________   |f5d55643   |f5d55643   |💤     |
|MAP_T24.SCB  |________   |d4a469eb   |d4a469eb   |💤     |
|MAP_T2A.SCB  |________   |29897248   |29897248   |💤     |
|MAP_T2D.SCB  |________   |0e825d71   |0e825d71   |💤     |
|MAP_T31.SCB  |________   |fbc68f3f   |fbc68f3f   |💤     |
|MAP_T32.SCB  |________   |78c95451   |78c95451   |💤     |
|MAP_T41.SCB  |________   |daef3424   |daef3424   |💤     |
|MAP_T42.SCB  |________   |ecc7eda6   |ecc7eda6   |💤     |
|MAP_T45.SCB  |________   |5e0e3ec3   |5e0e3ec3   |💤     |
|MAP_TOU.SCB  |________   |8b51a0c1   |8b51a0c1   |💤     |
|MENU.SCB     |________   |f847da9e   |f847da9e   |💤     |
|NAME_ENT.SCB  |c868d9a3   |c868d9a3   |c868d9a3   |👍     |
|PLAYMENU.SCB |c1ac4cc7   |________   |________   |🧐     |
|RUINSCR.SCB   |774485d8   |774485d8   |774485d8   |👍     |
|SAVE.SCB     |________   |fae6ef06   |fae6ef06   |💤     |
|SCBTLA31.SCB  |9330d567   |9330d567   |9330d567   |👍     |
|SCBTLA32.SCB  |eaff7b12   |eaff7b12   |eaff7b12   |👍     |
|SCRBTLA5.SCB  |89cd5add   |89cd5add   |89cd5add   |👍     |
|SEEKSCR.SCB |6207df30   |328bf742   |328bf742   |‼️     |
|SHOP.SCB      |96678a83   |96678a83   |96678a83   |👍     |
|TGD_SKY.SCB   |cf264150   |cf264150   |cf264150   |👍     |
|TITLEE.SCB  |d51afbda   |________   |a3637501   |🛸     |
|TITLEJ.SCB  |b4236d98   |22a54139   |________   |👽     |
|TOWN2.SCB     |22e47f6c   |22e47f6c   |22e47f6c   |👍     |
|URUGND_B.SCB|e9334dbd   |a4a8d60c   |a4a8d60c   |‼️     |
|VARAHA.SCB  |1543d393   |a8f7aad7   |a8f7aad7   |‼️     |
|WARNING.SCB  |________   |18dfd87b   |18dfd87b   |💤     |
|ZOAH.SCB    |c66aa525   |d8e0afe0   |d8e0afe0   |‼️     |
|A3BGM1_1.SEQ  |c91dd2dc   |c91dd2dc   |c91dd2dc   |👍     |
|A3BGM1_2.SEQ  |5c36afea   |5c36afea   |5c36afea   |👍     |
|A3BGM2.SEQ    |3ed31f3b   |3ed31f3b   |3ed31f3b   |👍     |
|A3BOSS.SEQ    |c228df17   |c228df17   |c228df17   |👍     |
|A3SE.SEQ    |8dd83a63   |73a31721   |73a31721   |‼️     |
|A3ZAKOSE.SEQ|d7ec00a9   |12dd71cd   |12dd71cd   |‼️     |
|A5BGM.SEQ     |2299a5be   |2299a5be   |2299a5be   |👍     |
|A5BOSBGM.SEQ  |d845d392   |d845d392   |d845d392   |👍     |
|A5BOSS.SEQ    |44dd8002   |44dd8002   |44dd8002   |👍     |
|A5SE.SEQ      |d257a2cf   |d257a2cf   |d257a2cf   |👍     |
|A5ZAKO.SEQ    |8201f03f   |8201f03f   |8201f03f   |👍     |
|A7BGM.SEQ     |c0b0c7ba   |c0b0c7ba   |c0b0c7ba   |👍     |
|A7MB.SEQ    |aea22656   |e0062cc7   |e0062cc7   |‼️     |
|A7SE.SEQ      |0c64d323   |0c64d323   |0c64d323   |👍     |
|A7ZAKO.SEQ  |8d4b5503   |7bf49039   |7bf49039   |‼️     |
|AD_SE.SEQ    |________   |20efaf10   |20efaf10   |💤     |
|ANTIBGM.SEQ  |________   |b1c30c12   |b1c30c12   |💤     |
|ANTI_SE.SEQ  |________   |a0c29067   |a0c29067   |💤     |
|B2BGM1.SEQ  |fef37bcb   |0fe4290f   |0fe4290f   |‼️     |
|B2BGM2.SEQ    |715b3d28   |715b3d28   |715b3d28   |👍     |
|B2BOSBGM.SEQ |849d3923   |________   |________   |🧐     |
|B2BOS_SE.SEQ |________   |c5871d62   |c5871d62   |💤     |
|B2SE.SEQ     |________   |85243375   |85243375   |💤     |
|B5BGM.SEQ     |c9c38af0   |c9c38af0   |c9c38af0   |👍     |
|B5MB.SEQ      |5ff432e8   |5ff432e8   |5ff432e8   |👍     |
|B5SE.SEQ      |100b6817   |100b6817   |100b6817   |👍     |
|B6BGM.SEQ     |59d7cd7d   |59d7cd7d   |59d7cd7d   |👍     |
|B6BOSSE.SEQ  |________   |472dbc12   |472dbc12   |💤     |
|B6SE.SEQ    |780a8061   |8ee9acf6   |8ee9acf6   |‼️     |
|B6ZAKOSE.SEQ |________   |c761e9c1   |c761e9c1   |💤     |
|BOS2BGM.SEQ   |722cabb1   |722cabb1   |722cabb1   |👍     |
|BOS3BGM.SEQ   |159f9030   |159f9030   |159f9030   |👍     |
|BOS4BGM.SEQ   |3dd6dcb7   |3dd6dcb7   |3dd6dcb7   |👍     |
|BOS5BGM.SEQ  |________   |849d3923   |849d3923   |💤     |
|BOSS01_2.SEQ  |91bdaafa   |91bdaafa   |91bdaafa   |👍     |
|BTL1BGM.SEQ   |ab69798c   |ab69798c   |ab69798c   |👍     |
|BTL2BGM.SEQ   |246d7a22   |246d7a22   |246d7a22   |👍     |
|C2BGM.SEQ     |e5085d41   |e5085d41   |e5085d41   |👍     |
|C2BOS_SE.SEQ |________   |b8dda5d4   |b8dda5d4   |💤     |
|C2MBSE.SEQ   |________   |bcea378b   |bcea378b   |💤     |
|C2SE.SEQ    |6b72ed15   |50dacdd6   |50dacdd6   |‼️     |
|C2ZAKOSE.SEQ|41920f79   |189bc519   |189bc519   |‼️     |
|C4BGM.SEQ    |________   |36b35068   |36b35068   |💤     |
|C4MB_SE.SEQ  |________   |e2adcfc0   |e2adcfc0   |💤     |
|C4SE.SEQ     |________   |52f3386d   |52f3386d   |💤     |
|C7SE.SEQ     |________   |55306147   |55306147   |💤     |
|C8BGM.SEQ    |________   |107d9bb2   |107d9bb2   |💤     |
|C8BOS_SE.SEQ |________   |797289dd   |797289dd   |💤     |
|CAMPBGM.SEQ |57d3df28   |280ab704   |280ab704   |‼️     |
|CAMP_SE.SEQ  |________   |805d426c   |805d426c   |💤     |
|CARABGM.SEQ   |c1a442df   |c1a442df   |c1a442df   |👍     |
|CARA_SE.SEQ  |________   |255f11d5   |255f11d5   |💤     |
|COPY1BGM.SEQ |________   |e027cf89   |e027cf89   |💤     |
|COPY2BGM.SEQ |________   |e1cd2700   |e1cd2700   |💤     |
|D2BGM.SEQ     |4136df32   |4136df32   |4136df32   |👍     |
|D2BOS_SE.SEQ |________   |47aff28a   |47aff28a   |💤     |
|D2MBSE.SEQ   |________   |82bee68b   |82bee68b   |💤     |
|D2SE.SEQ     |________   |d92856e1   |d92856e1   |💤     |
|D3BGM.SEQ    |________   |7475f743   |7475f743   |💤     |
|D4BGM.SEQ    |________   |04adef3f   |04adef3f   |💤     |
|D4MB_SE.SEQ  |________   |29d3a3f8   |29d3a3f8   |💤     |
|D5BGM.SEQ    |________   |fd6c1c84   |fd6c1c84   |💤     |
|DRG_SE.SEQ  |358e4c6c   |52719881   |52719881   |‼️     |
|E128SE.SEQ   |________   |e1fcece8   |e1fcece8   |💤     |
|E14SE.SEQ     |f2cacd52   |f2cacd52   |f2cacd52   |👍     |
|E22SE.SEQ    |________   |1f21a4b3   |1f21a4b3   |💤     |
|E74SE.SEQ    |________   |56aa4dde   |56aa4dde   |💤     |
|E78BGM.SEQ  |48c1b7c1   |ed2e2090   |ed2e2090   |‼️     |
|E78SE.SEQ     |8bc288dc   |8bc288dc   |8bc288dc   |👍     |
|EDGE_SE.SEQ |d4675e15   |f904016d   |f904016d   |‼️     |
|EXCA_SE.SEQ  |________   |2458a1a4   |2458a1a4   |💤     |
|HANU_SE.SEQ  |________   |ac0b7548   |ac0b7548   |💤     |
|KOGATA.SEQ    |912fe2ce   |912fe2ce   |912fe2ce   |👍     |
|MB01.SEQ      |61c58eb6   |61c58eb6   |61c58eb6   |👍     |
|MB04BGM.SEQ  |________   |d752225c   |d752225c   |💤     |
|MB2BGM.SEQ    |848147b5   |848147b5   |848147b5   |👍     |
|MB3BGM.SEQ   |________   |047427a6   |047427a6   |💤     |
|PAETBGM.SEQ |379b568f   |a63cb054   |a63cb054   |‼️     |
|PAET_SE.SEQ  |________   |ef5d8d9e   |ef5d8d9e   |💤     |
|RUINSE.SEQ   |________   |616f4fef   |616f4fef   |💤     |
|SEEBGM.SEQ   |________   |58316a4c   |58316a4c   |💤     |
|SEESE.SEQ    |________   |cc02ee83   |cc02ee83   |💤     |
|SYS_SE.SEQ   |________   |77ad6db1   |77ad6db1   |💤     |
|TITLE.SEQ     |477195e9   |477195e9   |477195e9   |👍     |
|TOSE.SEQ     |________   |a3f8f015   |a3f8f015   |💤     |
|TOWNBGM.SEQ   |f965927d   |f965927d   |f965927d   |👍     |
|TOWNSE.SEQ  |4554ea46   |602c517a   |602c517a   |‼️     |
|AREAMAP.SND |cc8ebb71   |9bfd9840   |9bfd9840   |‼️     |
|COMMON.SND   |1649016    |________   |________   |🧐     |
|COMMON2.SND  |605aa9be   |________   |________   |🧐     |
|SDDRVS.TSK    |cf5c1ff1   |cf5c1ff1   |cf5c1ff1   |👍     |
|ANDRO.TXT    |________   |________   |a65a6b6f   |🥉     |
