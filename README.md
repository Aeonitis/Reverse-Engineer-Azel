<p align="center">
  <img src="https://i.imgur.com/1Wkha31.png">
</p>

# Reverse-Engineering Azel RPG
Why? Well the article [Sega's Missing Masterpiece](https://www.theringer.com/2018/1/29/16940902/1998-video-games-panzer-dragoon-saga-missing-masterpiece) probably makes the case for me.
Also, the NSA added [support](https://github.com/NationalSecurityAgency/ghidra/pull/715) from Ghidra v9.1 onwards for the SH-2 processor, and I was interested to learn!

## Specs (Disc One)
Day one of progress? Disassembled [MENUEN.PRG](https://github.com/Aeonitis/Reverse-Engineer-Azel/blob/main/AZEL%20Disc%201/PRG/MENUEN.PRG/DefinedDataDetailed.md)

Got data but no code yet :'(

Opened ROM, 1695 files - [fullFileListOfDiscOne.txt](https://github.com/Aeonitis/Reverse-Engineer-Azel/blob/main/AZEL%20Disc%201/fullFileListOfDiscOne.txt)

## Wanna contribute?
You're welcome! 

I have a per-file discussion issue under the [focus on file](https://github.com/Aeonitis/Reverse-Engineer-Azel/labels/focus%20on%20file) label & you can get started on any file you like!

Any assembly genius info you have? Feel free to share on the [Issues](https://github.com/Aeonitis/Reverse-Engineer-Azel/issues) section as a comment :)

# Sega Saturn
Processor type: SH-2 (32-bit, 62 supported instructions) from SuperH family

[Specs](https://www.copetti.org/writings/consoles/sega-saturn)

# Panzer Dragoon Saga 
Panzer Dragoon Saga (PDS) a.k.a. Azel: Panzer Dragoon RPG (アゼル ―パンツァードラグーンRPG―) is an awesome game!
- [The Appeal of Panzer](https://venturebeat.com/2012/01/11/the-appeal-of-panzer-dragoon-saga/)
- [Fan-Wiki](https://panzerdragoon.fandom.com/wiki/Panzer_Dragoon_Saga)

## Goals
- A good place to start if I want to reverse engineer Saturn games is to probably learn Hitachi Super-H SH-2 assembly language (I don't know of any SH-2 decompiler out there yet).
- Understanding the files, SH2 instructions and finding Saturn documentation.
- Learning whilst discovering more of one of my fav games ever!


### Additional info:

General
- https://github.com/NationalSecurityAgency/ghidra/releases
- https://github.com/VGKintsugi/Ghidra-SegaSaturn-Loader
- https://github.com/VGKintsugi
- https://github.com/FCare/Kronos
- https://en.wikipedia.org/wiki/SuperH#SH-1_and_SH-2
- https://segaxtreme.net
- https://github.com/logic/sh2dis
- https://github.com/NationalSecurityAgency/ghidra/issues/608

Yabause:
- https://fantasyanime.com/emuhelp/uoyabause
- https://wiki.yabause.org/index.php5?title=SH-2CPU
- https://github.com/cyberwarriorx/yssloader
- https://wiki.yabause.org

Models:
- https://github.com/polygon-studio/Blender-to-Saturn-Model-Exporter