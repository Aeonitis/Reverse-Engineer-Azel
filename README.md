<p align="center">
  <img src="https://i.imgur.com/1Wkha31.png">
</p>

# Reverse-Engineering Azel RPG
Why? 

Well the article [Sega's Missing Masterpiece](https://www.theringer.com/2018/1/29/16940902/1998-video-games-panzer-dragoon-saga-missing-masterpiece) probably makes the case for me.

The NSA's Ghidra (Generic Hexadecimal Integrated Decompiling Reverse-Engineering Architecture) added [support](https://github.com/NationalSecurityAgency/ghidra/pull/715) from v9.1 onwards for the SH-2 processor, and I was interested to learn!


## Project Overview
- Day one of progress? 
  - Disassembled [MENUEN.PRG](https://github.com/Aeonitis/Reverse-Engineer-Azel/blob/main/AZEL%20Disc%201/PRG/MENUEN.PRG.md)

- Project [Wiki](https://github.com/Aeonitis/Reverse-Engineer-Azel/wiki)
- My [Solo Diary](https://github.com/Aeonitis/Reverse-Engineer-Azel/wiki/Logs-%5BSolo%5D)
- Disc Overview: 1695 files in [AZEL#I.md](https://github.com/Aeonitis/Reverse-Engineer-Azel/blob/main/AZEL%20Disc%201/AZEL#I.md)

## Progress

### PRGs

Filename | Percentage | Decompiled (bytes) | Total (bytes)
---|------------|--------------------|---
1ST_READ.PRG | 74.70%     | 1,908              | 2,554
BTL_A3.PRG | 8.65%      | 3,256              | 37,660
BTL_A3_2.PRG | 8.39%      | 3,240              | 38,606
MENUEN.PRG | 54.39%     | 26,624             | 48,944
TWN_CAMP.PRG | 62.39%     | 18,655             | 29,899
WORLD.PRG | 21.66%     | 829                |3827

## Wanna contribute?
You're welcome!

I have a per-file discussion issue under the [focus on file](https://github.com/Aeonitis/Reverse-Engineer-Azel/labels/focus%20on%20file) label & you can get started on any file you like!

Any assembly genius info you have? Feel free to share on the [Issues](https://github.com/Aeonitis/Reverse-Engineer-Azel/issues) section as a comment :)


# Panzer Dragoon Saga
Panzer Dragoon Saga (PDS) a.k.a. Azel: Panzer Dragoon RPG (アゼル ―パンツァードラグーンRPG―) is an awesome game!
- [The Appeal of Panzer](https://venturebeat.com/2012/01/11/the-appeal-of-panzer-dragoon-saga/)
- [Fan-Wiki](https://panzerdragoon.fandom.com/wiki/Panzer_Dragoon_Saga)

## Goals
- A good place to start if I want to reverse engineer Saturn games is to probably learn Hitachi Super-H SH-2 assembly language (To make lemonade from the SH-2 decompiler).
- Understanding the common Saturn file formats, gathering Saturn documentation.
- Attack from as many vectors as possible, detect which patterns are likely to be used.
- Look for documentation on the Saturn boot process
  - Know which file in the ISO is the main binary that it's going to run
  - Figure out how the CD-ROM's SH-1 gets its instructions (find when it's trying to read a specific file). 
- Seeing the patterns of reads as we go through levels might help understand which files are used at different times.
  - Give us a starting point for finding their purposes. 
  - Provide context for when you're trying to figure out how the formats work.
- Learning whilst discovering more of one of my fav games ever!


### Additional info:

General
- [SH-2 GCC C COMPILER](https://github.com/SaturnSDK/Saturn-SDK-GCC-SH2)
- [Renesas SH Instruction Set Summary](http://shared-ptr.com/sh_insns.html)
- [Renesas SuperH disassembler](https://github.com/logic/sh2dis)
- [SuperH RISC Engine SH-2 Programming Manual [1996]](https://antime.kapsi.fi/sega/files/h12p0.pdf)
- [Ghidra Sega Saturn Loader](https://github.com/VGKintsugi/Ghidra-SegaSaturn-Loader)
- [Sega Master System/Game Gear Loader](https://github.com/VGKintsugi/Ghidra-SegaMasterSystem-Loader)
- [Sega Saturn Emulated Hardware](https://github.com/FCare/Kronos)
- [Game Modification Utilities](https://www.zophar.net/utilities/mod.html)
- [SH-2 CPU (Memory Map)](https://wiki.yabause.org/index.php5?title=SH-2CPU)
- [Ghidra Releases](https://github.com/NationalSecurityAgency/ghidra/releases)

### Emulation
- [uoYabause Blogs](http://www.uoyabause.org/blogs)
- [uoYabause Tutorial](https://fantasyanime.com/emuhelp/uoyabause)
- [YSS Loader](https://github.com/cyberwarriorx/yssloader)
- [Yabause Wiki](https://wiki.yabause.org)

### Saturn tools
- [Jo-Engine (2D and 3D game engine)](https://github.com/johannes-fetz/joengine)
- [Save-Game Copier](https://github.com/slinga-homebrew/Save-Game-Copier)
- [Blender-to-Saturn-Model-Exporter](https://github.com/polygon-studio/Blender-to-Saturn-Model-Exporter)

SuperH Family (not SH-2 processor)
- [SH2A [SH7211] Group Hardware Manual](https://www.renesas.com/us/en/document/mah/sh7211-group-hardware-manual)
- [SH3 [SH7706] Group Hardware Manual](https://www.renesas.com/us/en/document/mah/sh7706-group-hardware-manual)

Other
- [Renesas SH Instruction Set Project](https://github.com/shared-ptr/sh_insns)