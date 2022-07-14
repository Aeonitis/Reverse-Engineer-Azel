<p align="center">
  <img src="https://i.imgur.com/YcYqawq.png">
</p>

[//]: # (<img src="https://i.imgur.com/1VVvIKP.png" width="400" height="180">)
# Assembly
Each time the SH2 accesses a global variable, a 32-bit absolute address must be loaded into a register (from a literal a 32-bit absolute address must be loaded into a register (from a literal
pool). Only then can the memory location (variable) be accessed. 


## Processors
- Two Hitachi SuperH-2 7604 32-bit RISC processors at 28.63 MHz (25 MIPS)—each has 4 kB on-chip cache (4-way associative), of which 2 kB can alternatively be used as directly addressable Scratchpad RAM
- Hitachi VDP 1 32-bit video display processor (running at 28.63 MHz on NTSC and PAL Systems) for sprites/polygons
- Yamaha VDP 2 32-bit video display processor (running at 28.63 MHz on NTSC and PAL Systems) for backgrounds/video out
- Yamaha System Control Unit (SCU) with DSP for geometry processing and DMA controller (running at 14.3 MHz)
- Motorola 68EC000 sound controller (running at 11.3 MHz / 1.5 MIPS)
- Yamaha FH1 DSP sound processor, "Saturn Custom Sound Processor" (SCSP), running at 22.6 MHz
- SH-1 32-bit RISC microcontroller (for the CD-ROM and CD security checks; uses preprogrammed embedded ROM, not programmable by software)
- Hitachi 4-bit MCU, "System Manager & Peripheral Control" (SMPC)


## Memory
- 1 MiB SDRAM as work RAM for both SH-2 CPUs (faster)
- 1 MiB DRAM as work RAM for both SH-2 CPUs (slower)
- 512 KiB VDP1 SDRAM for 3D graphics (Texture data for polygon/sprites and drawing command lists)
- 2x 256 KiB VDP1 SDRAM for 3D graphics (Two framebuffers for double-buffered polygon/sprite rendering)
- 512 KiB VDP2 SDRAM for 2D graphics (Texture data for the background layers and display lists)
- 4 KiB VDP2 SRAM for color palette data and rotation coefficient data (local, on-chip SRAM)
- 512 KiB DRAM for sound. (Multiplexed as sound CPU work RAM, SCSP DSP RAM, and SCSP wavetable RAM)
- 512 KiB DRAM as work RAM for the CD-ROM subsystem's SH-1 CPU
- 32 KiB SRAM with battery back-up for data retention.
- 512 KiB Mask ROM for the SH-2 BIOS


## Instruction Set
Below are the Classifications of CPU instructions which apply to both the Saturn's SH-2 & SH-DSP.
```
Note:
* (Not applicable to SH-1 processor)
** (DSP Only)
```
This distinction in interactions with or without the DSP may hopefully help us eventually find the _opcode-to-component_ relationship at times.

### Data Transfer
■ Data: MOV, MOVA, SWAP, XTRCT

(5 Types/OpCodes, 39 instructions)


- **MOV**
  - Data transfer
  - Immediate data transfer
  - Peripheral module data transfer
  - Structure data transfer
- **MOVA** Effective address transfer.
- **MOVT** T-bit transfer.
- **SWAP** Swap of upper and lower bytes.
- **XTRCT** Extraction of the middle of registers connected.
---
### Arithmetic Operations
(21 Types/OpCodes, 33 instructions)

■ Math: ADD(C/V), CMP/cond, DIVxx, DT, EXTx

■ Multiply: MULS/U, MUL, DMULS/U, MAC

- **ADD** Binary addition
- **ADDC** Binary addition with carry
- **ADDV** Binary addition with overflow check
- **CMP/cond** Comparison
- **DIV1** Division
- **DIV0S** Initialization of signed division
- **DIV0U** Initialization of unsigned division
- **DMULS** Signed double-length multiplication*
- **DMULU** Unsigned double-length multiplication*
- **DT** Decrement and test*
- **EXTS** Sign extension
- **EXTU** Zero extension
- **MAC** Multiply/accumulate Double-length multiply*
- **MUL** Double-length multiplication(32 × 32 bits)*
- **MULS** Signed multiplication (16 × 16 bits)
- **MULU** Unsigned multiplication (16 × 16 bits)
- **NEG** Negation
- **NEGC** Negation with borrow
- **SUB** Binary subtraction
- **SUBC** Binary subtraction with carry
- **SUBV** Binary subtraction with underflow check

---
### Logic Operations
(6 Types/OpCodes, 14 instructions)

■ Logic: NOT, AND, OR, XOR, TST, TAS*

- **AND** Logical AND 
- **NOT** Bit inversion 
- **OR** Logical OR 
- **TAS** Memory test and bit set 
- **TST** Logical AND & T-bit set 
- **XOR** Exclusive OR

---
### Shifts
(10 Types/OpCodes, 14 instructions)

■ Shifts: ROT(C)L/R, SHAR/L, SHLR/L 1,2,8,16 bits

- **ROTCL** One-bit left rotation with T-bit 
- **ROTCR** One-bit right rotation with T-bit 
- **ROTL** One-bit left rotation 
- **ROTR** One-bit right rotation 
- **SHAL** One-bit arithmetic left shift 
- **SHAR** One-bit arithmetic right shift 
- **SHLL** One-bit logical left shift
- **SHLLn** n-bit logical left shift
- **SHLR** One-bit logical right shift
- **SHLRn** n-bit logical right shift



---
### Branches
(9 Types/OpCodes, 11 instructions)

■ Branch: BF, BT, BF/S, BT/S, BRA(F), BSR(F), JMP, JSR, RTS

- **BF** 
  - Conditional branch (T = 0)
  - Conditional branch with delay -
- **BT** 
  - Conditional branch (T = 1)
  - Conditional branch with delay —  
- **BRA** Unconditional branch 
- **BRAF** Unconditional branch —
- **BSR** Branch to subroutine procedure
- **BSRF** Branch to subroutine procedure —
- **JMP** Unconditional branch
- **JSR** Branch to subroutine procedure
- **RTS** Return from subroutine procedure

---
### System Controls
(14 Types/OpCodes, 71 instructions)

■ System: RTE, LDC, STC, LDS, STS, CLRMAC, NOP

- **CLRMAC** MAC register clear
- **CLRT** T bit clear 
- **LDC** Load to control register 
- **LDRE** Load to repeat end register **
- **LDRS** Load to repeat start register **
- **LDS** Load to system register 
- **NOP** No operation 
- **RTE** Return from exception processing 
- **SETRC** Set number of repeats **
- **SETT** T bit set 
- **SLEEP** Shift into power-down state 
- **STC** Storing control register data 
- **STS** Storing system register data 
- **TRAPA** Trap exception handling


## Translations
- ```mov.l @(disp,PC), r1 @(disp,PC), r1``` ;get address from literal pool 
- ```mov.l @r1,r2``` ;get global variable in r2
- ```mov.l r2,@r1``` ;store global
- ```add #4,r2``` ;global=global+4


## Address Mode
■ Direct; Indirect: ```Rn; @Rn```

■ Post-inc.; Pre-dec.: ```@Rn+; @-Rn```

■ Indirect plus disp.: ```@(disp:4,Rn)```

■ Indirect indexed: ```@(R0,Rn)```

■ Indirect GBR plus dis.: ```@(disp:8,GBR)```

■ Indirect indexed GBR: ```@(R0,GBR)```

■ PC relative plus disp.: ```@(disp:8,PC)```

■ PC relative: ```disp:8; disp:12```

■ Immediate: ```#data:8 (extended)```

■ Displacements multiplied by size of access.





## Architecture

‘C’ source generally compiles into small objects, thanks to the SH’s 16- ‘C’ source generally compiles into small object, thanks to the SH’s 16-bit instructions (i.e. smaller than x86, 680x0, MIPS, ARM) bit instructions (i.e. smaller than x86, 680x0, MIPS, ARM)

[Forum Discussions](https://www.sega-16.com/forum/archive/index.php/t-17176.html)


