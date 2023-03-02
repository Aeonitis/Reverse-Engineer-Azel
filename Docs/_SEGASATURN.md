# Sega Saturn
Processor type: SH-2 (SuperH-2, 32-bit, 62 supported instructions) from SuperH family

Specs (e.g. VA15 Sega Saturn)
- Main CPU: Hitachi SH-2 (Model #**SH7604**) Dual CPU @28.6MHz. Two Hitachi 32-bit RISC processors at 28.63 MHz (25 MIPS)—each has 4 kB on-chip cache (4-way associative), of which 2 kB can alternatively be used as directly addressable Scratchpad RAM
- RAM: 2MB RAM, 1.5MB VRAM with slot for external expansion
- CD Drive: JVC HQA-001A HQ100002-002 610-6294-20 (Sanyo 610-6294-30)
- Sound Processor: Yamaha SCSP (Saturn Custom Sound Processor) YMF292
- Sound CPU: Motorola 68EC000

## Processors
- Two Hitachi SuperH-2 7604 32-bit RISC processors at 28.63 MHz (25 MIPS)—each has 4 kB on-chip cache (4-way associative), of which 2 kB can alternatively be used as directly addressable Scratchpad RAM
- Hitachi VDP1 32-bit video display processor (running at 28.63 MHz on NTSC and PAL Systems) for sprites/polygons
- Yamaha VDP2 32-bit video display processor (running at 28.63 MHz on NTSC and PAL Systems) for backgrounds/video out
- Yamaha System Control Unit (SCU) with DSP for geometry processing and DMA controller (running at 14.3 MHz)
- Motorola 68EC000 sound controller (running at 11.3 MHz / 1.5 MIPS)
- Yamaha FH1 DSP sound processor, "Saturn Custom Sound Processor" (SCSP), running at 22.6 MHz
- SH-1 32-bit RISC microcontroller (for the CD-ROM and CD security checks; uses pre-programmed embedded ROM, not programmable by software)
- Hitachi 4-bit MCU, "System Manager & Peripheral Control" (SMPC)


## Console Overviews
[Sega Saturn: The Beginner's Guide](https://www.racketboy.com/retro/sega-saturn-101-beginners-guide)

## Translation
Sega Saturn seems to use the [Shift-JIS](https://en.wikipedia.org/wiki/Shift_JIS) character encoding system. I have what I believe to be the file/table used for translation, the [sjis.tbl](https://github.com/Aeonitis/Reverse-Engineer-Azel/blob/main/Abstract/Resources/sjis.tbl)

- [Discussion on Translation](https://www.romhacking.net/forum/index.php?topic=24835.0)
- [Tips for pulling Japanese script from Sega Saturn games?](https://www.romhacking.net/forum/index.php?topic=30489.0)
- [Bulk Slash English Localization Dev Blog #1: New beginnings and the trouble with subtitles](https://www.segasaturnshiro.com/2021/12/17/bulk-slash-english-localization-dev-blog-1-new-beginnings-and-the-trouble-with-subtitles)
- [Bulk Slash English Localization Dev Blog #2: One character at a time](https://www.segasaturnshiro.com/2021/12/31/bulk-slash-english-localization-dev-blog-2-one-character-at-a-time)
- [DF Retro Live stream: Bulk Slash English Translation @15 Sept 2021](https://www.youtube.com/watch?v=wRqWM-gUMOE)
- [Shift-JIS Kanji Table](http://www.rikai.com/library/kanjitables/kanji_codes.sjis.shtml)


## Technical Specs

- [Best write-up on Specs](https://www.copetti.org/writings/consoles/sega-saturn)
- [Technical Specs](https://gamicus.fandom.com/wiki/Saturn)
- [Hardware revisions](https://segaretro.org/Sega_Saturn/Hardware_revisions)
- [Sega-Saturn projects](https://segaxtreme.net/threads/collect-saturn-github-projects.24265)
- [Other Sega-Saturn projects](https://www.reddit.com/r/SegaSaturn/comments/ud3yry/list_of_sega_saturn_fan_translations)
- [Saturn Tools/Resources](https://segaxtreme.net/resources/syutokou_97-syutoko-battle-97-drift-king-97.129)
- [How to do Sega Saturn development in Visual Studio Code](https://www.infochunk.com/saturn/vscode.html)

## Interesting Discussions

- [Sega Saturn Programming Difficulty](https://www.reddit.com/r/retrogaming/comments/dn275r/sega_saturn_programming_difficulty)
- [Sega Saturn Homebrew with Game BASIC](https://flybacklabs.com/sega-saturn-homebrew-with-game-basic)