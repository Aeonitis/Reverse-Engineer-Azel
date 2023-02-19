<p align="center">
  <img src="https://i.imgur.com/1Wkha31.png">
</p>

# Reverse-Engineering Azel RPG
Why? 

Well, the article [Sega's Missing Masterpiece](https://www.theringer.com/2018/1/29/16940902/1998-video-games-panzer-dragoon-saga-missing-masterpiece) probably makes the case for me.

The NSA's Ghidra (Generic Hexadecimal Integrated Decompiling Reverse-Engineering Architecture) added [support](https://github.com/NationalSecurityAgency/ghidra/pull/715) from v9.1 onwards for the SH-2 processor, and I was interested to learn!


## Project Overview

Project [Wiki](https://github.com/Aeonitis/Reverse-Engineer-Azel/wiki)

- Day one of progress? 
  - Disassembled [MENUEN.PRG](https://github.com/Aeonitis/Reverse-Engineer-Azel/blob/main/AZEL%20Disc%201/PRG/MENUEN.PRG.md)
- Interesting finds/easter eggs in progress? Go to [ANOMALIES.MD](https://github.com/Aeonitis/Reverse-Engineer-Azel/blob/main/ANOMALIES.MD)
- Disc Analysis: File info [@AZEL#I.MD](https://github.com/Aeonitis/Reverse-Engineer-Azel/blob/main/AZEL%20Disc%201/AZEL%23I.md)
- Assembly Code: [01000011](https://github.com/Aeonitis/Reverse-Engineer-Azel/blob/main/01000011/ASSEMBLY.md)
- Strange words & terms found [@GLOSSARY.MD](https://github.com/Aeonitis/Reverse-Engineer-Azel/blob/main/GLOSSARY.MD)
- My Journey in Reverse Engineering [@Solo Logs](https://github.com/Aeonitis/Reverse-Engineer-Azel/wiki/Logs-%5BSolo%5D)

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
- Understand the Sega Saturn hardware: In order to reverse engineer a game for the Sega Saturn, it's important to have a solid understanding of the hardware architecture of the console. This includes knowledge of the CPU, graphics hardware, sound hardware, and other system components. Having a good understanding of the hardware can help us identify how the game code is interacting with the system and how it is implementing certain features.
- Understanding the common Saturn file formats, gathering Saturn documentation.
- Look for documentation on the Saturn boot process
  - Know which file in the ISO is the main binary that it's going to run
  - Figure out how the CD-ROM's SH-1 gets its instructions (find when it's trying to read a specific file). 
- Use a debugger: A debugger is a software tool that allows us to step through the game code and analyze how it is executing. This can be an incredibly useful tool for reverse engineering a game, as it allows us to see how the code is working in real-time and identify key functions and data structures.
- Patterns & Structures: When reverse engineering a game, it's important to look for patterns and structures in the code and data. This includes identifying repeating code blocks, data tables, and other patterns that can provide insight into how the game is working. Once you identify these patterns, we can start to map out the game logic and data structures.
- Disassemble: Disassembling the game code involves converting the compiled machine code into assembly language. This can be a time-consuming process, but it can provide a deeper understanding of how the game code is working and how it is interacting with the Sega Saturn hardware.
- Patience & Persistence = Learning whilst discovering more of one of best games ever!


## Documentation:

### SH-2 (and other Saturn subsystems)
- [SH-2 GCC C COMPILER](https://github.com/SaturnSDK/Saturn-SDK-GCC-SH2)
- [Renesas SH Instruction Set Summary](http://shared-ptr.com/sh_insns.html)
- [Renesas SH Instruction Set Project](https://github.com/shared-ptr/sh_insns)
- [Renesas SuperH disassembler](https://github.com/logic/sh2dis)
- [SuperH RISC Engine SH-2 Programming Manual [1996]](https://antime.kapsi.fi/sega/files/h12p0.pdf)
- [Sega Saturn Emulated Hardware](https://github.com/FCare/Kronos)
- [Game Modification Utilities](https://www.zophar.net/utilities/mod.html)
- [SH-2 CPU (Memory Map)](https://wiki.yabause.org/index.php5?title=SH-2CPU)

### Panzer Dragoon Saga
- [Panzer Dragoon Saga - The Cutting Room Floor](https://tcrf.net/Panzer_Dragoon_Saga)

### Emulation
- [uoYabause Blogs](http://www.uoyabause.org/blogs)
- [uoYabause Tutorial](https://fantasyanime.com/emuhelp/uoyabause)
- [YSS Loader](https://github.com/cyberwarriorx/yssloader)
- [Yabause Wiki](https://wiki.yabause.org)

### Saturn tools
- [Ghidra Releases](https://github.com/NationalSecurityAgency/ghidra/releases)
- [Ghidra Sega Saturn Loader](https://github.com/VGKintsugi/Ghidra-SegaSaturn-Loader)
- [Sega Master System/Game Gear Loader](https://github.com/VGKintsugi/Ghidra-SegaMasterSystem-Loader)
- [Jo-Engine (2D and 3D game engine)](https://github.com/johannes-fetz/joengine)
- [Save-Game Copier](https://github.com/slinga-homebrew/Save-Game-Copier)
- [Blender-to-Saturn-Model-Exporter](https://github.com/polygon-studio/Blender-to-Saturn-Model-Exporter)


### Reverse Engineering
- [Beginner Learning Materials on Reverse Engineering Video Games](https://github.com/kovidomi/game-reversing)
- [Decompilation Projects](https://www.resetera.com/threads/decompilation-projects-ot-free-next-gen-update-for-your-favorite-classics-a-link-to-the-past-pc-port-out-now.682687/#post-100662691)

### SuperH Family (not SH-2 processor)
- [SH2A [SH7211] Group Hardware Manual](https://www.renesas.com/us/en/document/mah/sh7211-group-hardware-manual)
- [SH3 [SH7706] Group Hardware Manual](https://www.renesas.com/us/en/document/mah/sh7706-group-hardware-manual)
