<p align="center">
  <img src="https://i.imgur.com/1Wkha31.png">
</p>

# Reverse-Engineering Azel RPG
Why? 

Well the article [Sega's Missing Masterpiece](https://www.theringer.com/2018/1/29/16940902/1998-video-games-panzer-dragoon-saga-missing-masterpiece) probably makes the case for me.

The NSA's Ghidra (Generic Hexadecimal Integrated Decompiling Reverse-Engineering Architecture) added [support](https://github.com/NationalSecurityAgency/ghidra/pull/715) from v9.1 onwards for the SH-2 processor, and I was interested to learn!


## Project Overview
- Day one of progress? 
  - Disassembled [MENUEN.PRG](https://github.com/Aeonitis/Reverse-Engineer-Azel/blob/main/AZEL%20Disc%201/PRG/MENUEN.PRG/DefinedDataDetailed.md)
- Project [Wiki](https://github.com/Aeonitis/Reverse-Engineer-Azel/wiki)
- My [Solo Diary](https://github.com/Aeonitis/Reverse-Engineer-Azel/wiki/Logs-%5BSolo%5D)

Opened ROM, 1695 files - [fullFileListOfDiscOne.txt](https://github.com/Aeonitis/Reverse-Engineer-Azel/blob/main/AZEL%20Disc%201/fullFileListOfDiscOne.txt)

## Wanna contribute?
You're welcome!

I have a per-file discussion issue under the [focus on file](https://github.com/Aeonitis/Reverse-Engineer-Azel/labels/focus%20on%20file) label & you can get started on any file you like!

Any assembly genius info you have? Feel free to share on the [Issues](https://github.com/Aeonitis/Reverse-Engineer-Azel/issues) section as a comment :)

# Sega Saturn
Processor type: SH-2 (SuperH-2, 32-bit, 62 supported instructions) from SuperH family

Specs (e.g. VA15 Sega Saturn)
- Main CPU: Hitachi SH-2 (Model #**SH7604**) Dual CPU @28.6MHz. Two Hitachi 32-bit RISC processors at 28.63 MHz (25 MIPS)—each has 4 kB on-chip cache (4-way associative), of which 2 kB can alternatively be used as directly addressable Scratchpad RAM
- RAM: 2MB RAM, 1.5MB VRAM with slot for external expansion
- CD Drive: JVC HQA-001A HQ100002-002 610-6294-20 (Sanyo 610-6294-30)
- Sound Processor: Yamaha SCSP (Saturn Custom Sound Processor) YMF292
- Sound CPU: Motorola 68EC000


- [Technical Specs](https://gamicus.fandom.com/wiki/Saturn)
- [Specs](https://www.copetti.org/writings/consoles/sega-saturn)
- [Hardware revisions](https://segaretro.org/Sega_Saturn/Hardware_revisions)


# Panzer Dragoon Saga 
Panzer Dragoon Saga (PDS) a.k.a. Azel: Panzer Dragoon RPG (アゼル ―パンツァードラグーンRPG―) is an awesome game!
- [The Appeal of Panzer](https://venturebeat.com/2012/01/11/the-appeal-of-panzer-dragoon-saga/)
- [Fan-Wiki](https://panzerdragoon.fandom.com/wiki/Panzer_Dragoon_Saga)

## Goals
- A good place to start if I want to reverse engineer Saturn games is to probably learn Hitachi Super-H SH-2 assembly language (To make lemonade from the SH-2 decompiler).
- Understanding the files, SH2 instructions and finding Saturn documentation.
- Learning whilst discovering more of one of my fav games ever!


### Additional info:

General
- [SH-2 GCC C COMPILER](https://github.com/SaturnSDK/Saturn-SDK-GCC-SH2)
- [Renesas SuperH disassembler](https://github.com/logic/sh2dis)
- [SuperH RISC Engine SH-2 Programming Manual [1996]](https://antime.kapsi.fi/sega/files/h12p0.pdf)
- [Ghidra Sega Saturn Loader](https://github.com/VGKintsugi/Ghidra-SegaSaturn-Loader)
- [Sega Saturn Emulated Hardware](https://github.com/FCare/Kronos)
- [Game Modification Utilities](https://www.zophar.net/utilities/mod.html)
- [Ghidra Releases](https://github.com/NationalSecurityAgency/ghidra/releases)


### Emulation
- https://fantasyanime.com/emuhelp/uoyabause
- https://wiki.yabause.org/index.php5?title=SH-2CPU
- https://github.com/cyberwarriorx/yssloader
- https://wiki.yabause.org

### Saturn tools
- [Jo-Engine (2D and 3D game engine)](https://github.com/johannes-fetz/joengine)
- [Save-Game Copier](https://github.com/slinga-homebrew/Save-Game-Copier)
- [Blender-to-Saturn-Model-Exporter](https://github.com/polygon-studio/Blender-to-Saturn-Model-Exporter)

SuperH Family (not SH-2 processor)
- [SH2A [SH7211] Group Hardware Manual](https://www.renesas.com/us/en/document/mah/sh7211-group-hardware-manual)
- [SH3 [SH7706] Group Hardware Manual](https://www.renesas.com/us/en/document/mah/sh7706-group-hardware-manual)