# Assembly
Each time the SH2 accesses a global variable, a 32-bit absolute address must be loaded into a register from a literal a 32-bit absolute address must be loaded into a register (from a literal
pool). Only then can the memory location (variable) be accessed.

> Note: Even though the SH-2 is the main CPU, be aware that the Saturn is an 8-processor monster e.g. the disk reading is handles by an SH-1.

<p align="center">
  <img src="https://i.imgur.com/YcYqawq.png">
</p>

[//]: # (<img src="https://i.imgur.com/1VVvIKP.png" width="400" height="180">)

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


## Memory Addresses
The Sega Saturn has separate memory address registers and memory data registers. The memory address registers are used to specify the address location in memory where data should be read from or written to, while the memory data registers are used to hold the actual data being read from or written to memory.

Examples of memory address and memory data registers on the Sega Saturn:

The SH-2 processor on the Sega Saturn has eight 32-bit general-purpose registers (R0-R7), which can be used as both memory address and memory data registers.

The VDP1 (Video Display Processor 1) on the Sega Saturn has several memory address and memory data registers, including the command list address register, the VRAM address register, the framebuffer address register, and the color RAM data register.

The VDP2 (Video Display Processor 2) on the Sega Saturn also has several memory address and memory data registers, including the VRAM address register, the CRAM data register, and the backdrop color data register.

There are also other types of addresses used on the Sega Saturn, such as:
- Register addresses: These are used to access the various hardware registers on the Sega Saturn, such as the control registers for the SH-2 processor or the VDP1 and VDP2.
- Peripheral addresses: These are used to access the various peripheral devices connected to the Sega Saturn, such as the CD-ROM drive or the controller ports.
- ROM addresses: These are used to access the ROM (Read-Only Memory) on the Sega Saturn, which contains the system BIOS and game code.
- RAM addresses: These are used to access the RAM (Random Access Memory) on the Sega Saturn, which is used for storing game data, save files, and other temporary information.


### Assembly Code Examples


The SH-2 processor's general-purpose registers (R0-R7) can be used as memory address and memory data registers. 
For example, to read a 32-bit value from memory address 0x06000000:
```
MOV.L @R0, R1  ; Load the memory address into R0
MOV.L @R1, R2  ; Load the 32-bit value from the memory address into R2
```
#### VDP1
The VDP1's command list address register is located at memory address 0x25F80000. 
To set the command list address to 0x06010000:
```
MOV.L #0x06010000, R0    ; Load the command list address into R0
MOV.L R0, 0x25F80000     ; Store the command list address into the VDP1 register
```
The Sega Saturn's VDP1 control port is located at memory address 0x25F80000.
To set the display mode to bitmap mode with a resolution of 352x240:
```
MOV.L #0x00000001, R0    ; Load the display mode value into R0
MOV.L R0, 0x25F80000     ; Set the display mode to bitmap mode
MOV.L #0x000000C0, R0    ; Load the resolution value into R0
MOV.L R0, 0x25F80004     ; Set the display resolution to 352x240
```



#### VDP2
The VDP2's VRAM address register is located at memory address 0x25F80104.
To set the VRAM address to 0x06020000:
```
MOV.L #0x06020000, R0    ; Load the VRAM address into R0
MOV.L R0, 0x25F80104     ; Store the VRAM address into the VDP2 register
```

The CD-ROM drive's status register is located at memory address 0x25800021. 
To check if the CD-ROM drive is ready:
```
MOV.B 0x25800021, R0    ; Load the CD-ROM status register into R0
AND #0x01, R0           ; Mask off all but the ready bit
CMP #0x01, R0           ; Compare the ready bit to 1
BEQ CD_READY            ; If the ready bit is 1, jump to CD_READY
```

#### DSP (Digital Signal Processor)

The DSP's communication port is located at memory address 0x25F80180. To send data to the DSP, we would write the data to this address. To receive data from the DSP, we would read from this address. 
To send a command to the DSP to start playing a sound effect:
```
MOV.L #0x80000000, R0    ; Load the DSP command word into R0
MOV.L R0, 0x25F80180     ; Send the command word to the DSP
```
In this example, the DSP command word is a 32-bit value that specifies the type of command to be executed. The most significant bit (bit 31) is set to indicate that this is a command, rather than data. The remaining bits of the command word are used to specify the specific command, such as starting or stopping a sound effect. When the DSP receives this command word, it will execute the corresponding command and send a response back to the Sega Saturn, which can be read from the communication port address.


#### SCSP (Saturn Custom Sound Processor)

The SCSP's voice control register for voice 0 is located at memory address 0x25F801A0. 
To set the volume of voice 0 to maximum (63):
```
MOV.B #63, 0x25F801A0    ; Set the volume of voice 0 to 63
```
The SCSP's FM register for channel 0 is located at memory address 0x25F801C0. 
To set the frequency of FM channel 0 to 440Hz (A4):
```
MOV.L #0x06002820, R0    ; Load the frequency value for A4 into R0
MOV.L R0, 0x25F801C0     ; Set the frequency of FM channel 0 to A4
```
> Note: The frequency value for A4 is a 32-bit value that has been pre-calculated and stored in memory at address 0x06002820.


#### SCU (System Control Unit)

The SCU's interrupt enable register is located at memory address 0x1FFFFF80.
To enable interrupts from the VDP1, VDP2, and timer 0:
```
MOV.L #0x00000003, R0    ; Load the interrupt mask value into R0
MOV.L R0, 0x1FFFFF80     ; Enable interrupts from VDP1, VDP2, and timer 0
```
The SCU's DMA control register for DMA channel 0 is located at memory address 0x25F80020.
To start a DMA transfer from address 0x06000000 to address 0x22000000 with a length of 1024 bytes:
```
MOV.L #0x06000000, R0    ; Load the source address into R0
MOV.L #0x22000000, R1    ; Load the destination address into R1
MOV.L #1023, R2          ; Load the transfer length into R2
MOV.L #0x000000C0, R3    ; Load the DMA control value into R3
MOV.L R3, 0x25F80020     ; Set the DMA control value for DMA channel 0
MOV.L R0, 0x25F80024     ; Set the DMA source address for DMA channel 0
MOV.L R1, 0x25F80028     ; Set the DMA destination address for DMA channel 0
MOV.L R2, 0x25F8002C     ; Set the DMA transfer length for DMA channel 0
```
> Note: The DMA control value (0x000000C0) specifies that the transfer should use incrementing addressing mode for both the source and destination addresses, and that the transfer should be triggered by software. The transfer length is specified as 1023 because the DMA controller automatically adds 1 to the transfer length, so a value of 1023 will result in a transfer of 1024 bytes.


#### SMPC
The SMPC's register for reading the state of the controller inputs is located at memory address 0x20100001.
To read the state of the controller inputs:
```
MOV.B #0x01, 0x20100000  ; Set the controller read command
NOP                      ; Wait for command to complete
MOV.B @0x20100001, R0    ; Read the controller state from register
```
> Note: The controller read command is sent to address 0x20100000, and the state of the controller inputs can be read from the data register at address 0x20100001.


#### SH-2
The SH-2's internal cache control register is located at memory address 0xFF00006C.
To enable the instruction cache:
```
MOV.L #0x00000001, R0    ; Load the cache control value into R0
MOV.L R0, 0xFF00006C     ; Enable the instruction cache
```
Each of the two SH-2 processors in a Sega-Saturn console has its own internal RAM that can be accessed through the data bus at different memory addresses.

The internal RAM for SH-2 0 is also located at memory address 0x06000000.
To write a value of 0x5678 to the first byte of SH-2 0's internal RAM:
```
MOV.B #0x56, 0x06000000  ; Write the first byte of SH-2 0's RAM
```
The internal RAM for SH-2 1 is located at memory address 0x06040000.
To write a value of 0x9ABC to the first byte of SH-2 1's internal RAM:
```
MOV.B #0x9A, 0x06040000  ; Write the first byte of SH-2 1's RAM
```


#### Data-bus
The data bus is used for communication between the processors and memory, as well as between other hardware components like the VDP1. The Sega Saturn's internal RAM is located at memory address 0x06000000.
To write a value of 0x1234 to the first byte of the internal RAM:

```
MOV.B #0x12, 0x06000000  ; Write the first byte of RAM
```

#### Use Case 1: (Writing to Save files)
To write data to a save file on the Sega Saturn, you would need to use the CD block's File control commands. Here's an example of how to write a single byte (0x55) to a file called "SAVEDATA.DAT" located in the root directory of the CD:
```
MOV.L #0x20150000, R1    ; Load the memory address of the data to write
MOV.L #0x00000001, R2    ; Load the number of bytes to write
MOV.L #0x00000000, R3    ; Load the destination file ID (0 for root directory)
MOV.L #0x53415645, R4    ; Load the file name "SAVEDATA.DAT" in ASCII
MOV.L #0x44415441, R5
MOV.L #0x00000000, R6    ; Load the command (write to file)
TRAPA #4                  ; Call the CD block's File control function
```
> Note: This example assumes that the data to write is located at memory address 0x20150000. We could modify the code to write more bytes or to write from a different memory location.


#### Use Case II: (Writing a small square to the screen)
To draw a small square on the screen using the Sega Saturn's VDP1, we would need to configure the VDP1's command list and vertex data.
To draw with a width and height of 32 pixels:
```
; Configure the VDP1 command list
MOV.L #0x00000000, R0    ; Load the address of the VDP1 command list
MOV.W #0x8000, R1        ; Set the command list header
MOV.W #0x4000, R2        ; Set the end of list header
MOV.W #0x8000, R3        ; Set the polygon header
MOV.W #0x0000, R4        ; Set the polygon attributes (none)
MOV.W #0x0000, R5        ; Set the color palette (none)
MOV.W #0x0000, R6        ; Set the shading table (none)
MOV.W #0x0000, R7        ; Set the texture mapping (none)
MOV.W #0x0000, R8        ; Set the polygon data (none)
MOV.W #0x0000, R9        ; Set the vertex data (none)
MOV.W #0x0000, R10       ; Set the end of polygon header
MOV.W #0x4000, R11       ; Set the end of command list header
MOV.L #0x06000000, R12   ; Load the address of the VDP1 registers
MOV.W R0, @R12           ; Write the command list header to the VDP1 registers
ADD #0x0E, R12           ; Set the address of the polygon header
MOV.W R3, @R12           ; Write the polygon header to the VDP1 registers
ADD #0x08, R12           ; Set the address of the end of polygon header
MOV.W R10, @R12          ; Write the end of polygon header to the VDP1 registers
ADD #0x02, R12           ; Set the address of the end
```

#### Use Case III: (Display a 2D sprite via VDP1)
We would need to create a texture map in a supported format and upload it to the system's VRAM. Here's a rough example of how we could load a texture map into VRAM and display it using VDP1:
```
; Load the texture map into VRAM
MOV.L #0x25F80000, R1        ; Set the address of the VDP1 control port
MOV.L #0x06000000, R2        ; Set the address of the VDP1 registers
MOV.L #0x00000000, R3        ; Set the VRAM address (e.g., 0x0000)
MOV.L #0x00200000, R4        ; Set the main memory address of the texture map
MOV.W #0x0080, R5            ; Set the texture map width (e.g., 128 pixels)
MOV.W #0x0080, R6            ; Set the texture map height (e.g., 128 pixels)
MOV.W #0x0000, R7            ; Set the texture map horizontal position (e.g., 0 pixels)
MOV.W #0x0000, R8            ; Set the texture map vertical position (e.g., 0 pixels)
MOV.W #0x0000, R9            ; Set the texture map priority (e.g., 0)
MOV.W #0x1000, R10           ; Set the texture map format (e.g., 16-bit RGB)
MOV.W #0x0001, R11           ; Set the texture map mode (e.g., transparent)
MOV.W #0x0000, R12           ; Set the texture map Gouraud shading (e.g., off)
MOV.W #0x0000, R13           ; Set the texture map Mosaic (e.g., off)
MOV.L #0x00020000, R14       ; Set the texture map control flags (e.g., enable)
MOV.W #0x8000, R15           ; Set the enable flag
MOV.L #0x01000000, R0        ; Set the control word
MOV.L R0, @R1                ; Write the control word to the VDP1 control port

; Wait for the texture map to finish loading
WAIT_LOOP:
  MOV.L @(R2, 0x000E), R0    ; Read the VDP1 status register
  BTST #0, R0                ; Check if the texture map is still loading
  BF WAIT_LOOP               ; If it is, wait and try again

; Display the texture map on the screen
MOV.L #0x25F80000, R1        ; Set the address of the VDP1 control port
MOV.L #0x06000000, R2        ; Set the address of the VDP1 registers
MOV.W #0x0001, R3            ; Set the number of objects to display (e.g., 1)
MOV.L #0x00010000, R4        ; Set the color mode (e.g., 256-color)
MOV.L #0x00000000, R5        ; Set the pattern name table address (e.g., 0x0000)
MOV.W #0x0000, R6            ; Set the cell horizontal position (e.g., 0 pixels)
MOV.W #0x0000, R7            ; Set the cell vertical position (e.g., 0 pixels)
MOV.W #0x0080, R8            ; Set the texture map width (e.g., 128 pixels)
MOV.W #0x0080, R9            ; Set the texture map height (e.g., 128 pixels)
MOV.W #0x0000, R10           ; Set the texture map priority (e.g., 0)
MOV.W #0x0000, R11           ; Set the texture map horizontal flip (e.g., off)
MOV.W #0x0000, R12           ; Set the texture map vertical flip (e.g., off)
MOV.W #0x0000, R13           ; Set the texture map palette number (e.g., 0)
MOV.L #0x00020000, R14       ; Set the texture map control flags (e.g., enable)
MOV.W #0x8000, R15           ; Set the enable flag
MOV.L #0x02000000, R0        ; Set the control word
MOV.L R0, @R1                ; Write the control word to the VDP1 control port

; Wait for the texture map to finish displaying
WAIT_LOOP2:
    MOV.L @(R2, 0x000E), R0   ; Read the VDP1 status register
    BTST #0, R0               ; Check if the texture map is still displaying
    BF WAIT_LOOP2             ; If it is, wait and try again

MOV.L R15, @(R2, 0x001C)     ; Write the display enable flag to the VDP1 registers



```



```

```




## F.A.Q.

**Does the SH2 have delayed instructions, and how does that work?**

Also  known as "delayed branching", which allows certain instructions to be executed after a branch instruction has been executed, instead of immediately before.

The purpose of delayed branching is to reduce the number of cycles that are lost due to pipeline stalls caused by a branch instruction. When a branch instruction is executed, the processor must first determine the target address of the branch and then flush the pipeline, since the instructions that follow the branch may not be the ones that were originally fetched. 

This allows certain instructions to execute after a branch instruction, instead of immediately before.

Delayed branching works by allowing certain instructions to be executed after a branch instruction has been executed, instead of immediately before. For example, if a branch instruction is followed by an instruction that sets a flag or updates a register, the processor can execute the instruction before it calculates the target address of the branch. 

This helps to hide the latency of the branch instruction and keep the pipeline full, reducing the number of cycles that are lost due to pipeline stalls.


## Architecture

‘C’ source generally compiles into small objects, thanks to the SH’s 16- ‘C’ source generally compiles into small object, thanks to the SH’s 16-bit instructions (i.e. smaller than x86, 680x0, MIPS, ARM) bit instructions (i.e. smaller than x86, 680x0, MIPS, ARM)

[Forum Discussions](https://www.sega-16.com/forum/archive/index.php/t-17176.html)
[Video @GameHut - Coding for the World's Trickiest Chip – SEGA's Saturn DSP](https://youtu.be/n8plen8cLro)
[Discussion - Coding for the World's Trickiest Chip – SEGA's Saturn DSP](https://news.ycombinator.com/item?id=18637179)


Dev/Rev on Sega Saturn games
- [Saturn Hacking notes](https://segaxtreme.net/threads/saturn-hacking-notes.4934)
- [Mick West - 1995 Programming on the Sega Saturn](https://cowboyprogramming.com/2010/06/03/1995-programming-on-the-sega-saturn)
- [Mick West - Coding practices in 1991](https://cowboyprogramming.com/2008/11/15/my-coding-practices-in-1991)
- [Fan Reverse-Engineers Saturn Version of Quake for PC Port](https://www.segasaturnshiro.com/2022/07/21/fan-reverse-engineers-saturn-version-of-quake-for-pc-port)
- [Dev on Quake Saturn](http://richwhitehouse.com/index.php?postid=68#sect_32_2)

