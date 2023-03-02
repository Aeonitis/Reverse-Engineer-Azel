#ifndef SEGA_SATURN_ADDRESS_H
#define SEGA_SATURN_ADDRESS_H

/*
Knowing memory addresses when reverse engineering a game can be useful for several reasons. 

For example, we can:
- Find and modify values such as health points, ammo, score, etc. by using a memory scanner or a debugger.
- Understand how the game structures its data and logic by analyzing the executable sections, headers, functions, etc.
- Patch or inject code into the game to change its behavior or add new features.

Trying to capture the all saturn addresses if possible, offsets and accuracy of variables are a secondary concern at the moment...

Check other memory addresses here https://wiki.yabause.org
Start	    End	Name	Description
0x00	    0x000FFFFF	Boot ROM	Repets every 512 kb
0x00100000	0x0017FFFF	SMPC registers
0x00180000	0x001FFFFF	Backup RAM
0x00200000	0x002FFFFF	Work RAM Low
0x00300000	0x003FFFFF	Random data	Random on every read (mostly 0x00)
0x00400000	0x007FFFFF	Zero	Always returns 0x0000
0x00800000	0x00FFFFFF	Unknown	Always returns 0x00000001000200030004000500060007
0x01000000	0x017FFFFF	Master Init (MINIT)	Data written goes to Master SH-2 Free Running Timer. Section is Write Only.
0x01800000	0x01FFFFFF	Slave Init (SINIT)	Data written goes to Slave SH-2 Free Running Timer. Section is Write Only.
0x02000000	0x03FFFFFF	CS0	Cartridge 0
0x04000000	0x04FFFFFF	CS1	Cartridge 1
0x05000000	0x057FFFFF	Dummy
0x05800000	0x058FFFFF	CD-ROM registers (CS2)	Repeats every 64 Bytes
0x05900000	0x059FFFFF	Unknown	It will lockup the saturn when read
0x05A00000	0x05AFFFFF	68000 Audio Work RAM	Stores audio data that will be played
0x05B00000	0x05BFFFFF	SCSP registers
0x05C00000	0x05C7FFFF	VDP1 VRAM	Video RAM for the 3D VDP1
0x05C80000	0x05CFFFFF	VDP1 Framebuffer	Current Image Buffer for the VDP1 to render to
0x05D00000	0x05D7FFFF	VDP1 Registers	VDP1 variables that change the functionality of how the VDP1 operates
0x05D80000	0x05DFFFFF	Lockup when read
0x05E00000	0x05EFFFFF	VDP2 VRAM	Video Display Processor 2 (Background) Video RAM - Repeats every 512 kb
0x05F00000	0x05F7FFFF	VDP2 CRAM	VDP2 Color RAM - Basically the background Palette - Repeats every 4kb
0x05F80000	0x05FBFFFF	VDP2 registers	VDP2 variables that change the functionality of how the VDP2 operates - Repeats every 512 bytes
0x05FC0000	0x05FDFFFF	Unknown	Always returns 0x000E0000
0x05FE0000	0x05FEFFFF	SCU registers	Repeats every 256 bytes
0x05FF0000	0x05FFFFFF	Unknown registers	Repeats every 256 bytes
0x06000000	0x07FFFFFF	Work RAM High

Different registers, Same address?
In some cases e.g. SH1_WTCNT and SH1_DVSR1, they are two separate registers with different functions, but they are both mapped to the same memory address 0x25A00280.
When the SH1 processor accesses that memory address, it knows which register to read or write based on the offset within that memory address.

More memory locations than expected?
Some may define symbolic names for memory addresses used by the components, and the number of symbolic names defined may exceed the numbers of memory locations provided by the processor.
It's also possible that some of the symbolic names defined in the file are not actually used in the game's code, but were included for completeness or for potential future use.
*/

/*
SH1 (256 memory locations)
The 256 memory locations include both the memory address registers and the memory data registers.
The SH1 has a total of 32 memory address registers and 32 memory data registers, each occupying a 32-bit memory location,
so that adds up to 64 of the 256 memory locations. The remaining 192 memory locations are used for various registers and data storage.
*/

// Memory address registers
#define SH1_PDTA 0x25A10000 // Program data table address register
#define SH1_SDTA 0x25A10004 // Stack data table address register
#define SH1_GDTA 0x25A10008 // Global data table address register
#define SH1_ADRC 0x25A1000C // Address compare register
#define SH1_SR 0x25A10010   // Status register
#define SH1_SAR0 0x25A10014 // Segment address register 0
#define SH1_SAR1 0x25A10018 // Segment address register 1
#define SH1_DBR 0x25A1001C  // Debug register

// Memory data registers
#define SH1_R0 0x25A00000         // General-purpose register R0
#define SH1_R1 0x25A00004         // General-purpose register R1
#define SH1_R2 0x25A00008         // General-purpose register R2
#define SH1_R3 0x25A0000C         // General-purpose register R3
#define SH1_R4 0x25A00010         // General-purpose register R4
#define SH1_R5 0x25A00014         // General-purpose register R5
#define SH1_R6 0x25A00018         // General-purpose register R6
#define SH1_R7 0x25A0001C         // General-purpose register R7
#define SH1_R8 0x25A00020         // General-purpose register R8
#define SH1_R9 0x25A00024         // General-purpose register R9
#define SH1_R10 0x25A00028        // General-purpose register R10
#define SH1_R11 0x25A0002C        // General-purpose register R11
#define SH1_R12 0x25A00030        // General-purpose register R12
#define SH1_R13 0x25A00034        // General-purpose register R13
#define SH1_R14 0x25A00038        // General-purpose register R14
#define SH1_R15 0x25A0003C        // General-purpose register R15
#define SH1_MACH 0x25A00040       // Multiply-Accumulate High register
#define SH1_MACL 0x25A00044       // Multiply-Accumulate Low register
#define SH1_PR 0x25A00048         // Procedure register
#define SH1_FPUL 0x25A0004C       // Floating-point control/status register
#define SH1_FVAL 0x25A00050       // Floating-point operand value register
#define SH1_FCR 0x25A00054        // Floating-point control/status register
#define SH1_FR0 0x25A00060        // Floating-point register 0
#define SH1_FR1 0x25A00064        // Floating-point register 1
#define SH1_FR2 0x25A00068        // Floating-point register 2
#define SH1_FR3 0x25A0006C        // Floating-point register 3
#define SH1_FR4 0x25A00070        // Floating-point register 4
#define SH1_FR5 0x25A00074        // Floating-point register 5
#define SH1_FR6 0x25A00078        // Floating-point register 6
#define SH1_FR7 0x25A0007C        // Floating-point register 7
#define SH1_XF0 0x25A00080        // Extended floating-point register 0
#define SH1_XF1 0x25A00088        // Extended floating-point register 1
#define SH1_XF2 0x25A00090        // Extended floating-point register 2
#define SH1_XF3 0x25A00098        // Extended floating-point register 3
#define SH1_XF4 0x25A000A0        // Extended floating-point register 4
#define SH1_XF5 0x25A000A8        // Extended floating-point register 5
#define SH1_XF6 0x25A000B0        // Extended floating-point register 6
#define SH1_XF7 0x25A000B8        // Extended floating-point register 7
#define SH1_DMACR 0x25A000C0      // DMA control register
#define SH1_DMAOR 0x25A000C4      // DMA operation register
#define SH1_DMAAD 0x25A000C8      // DMA address register
#define SH1_DMATCR 0x25A000CC     // DMA transfer count register
#define SH1_IOCR 0x25A000D0       // Input/output control register
#define SH1_IOCRB 0x25A000D4      // Input/output control register B
#define SH1_SAR2 0x25A000D8       // Segment address register 2
#define SH1_SAR3 0x25A000DC       // Segment address register 3
#define SH1_SAR4 0x25A000E0       // Segment address register 4
#define SH1_SAR5 0x25A000E4       // Segment address register 5
#define SH1_SAR6 0x25A000E8       // Segment address register 6
#define SH1_SAR7 0x25A000EC       // Segment address register 7
#define SH1_SAR8 0x25A000F0       // Segment address register 8
#define SH1_SAR9 0x25A000F4       // Segment address register 9
#define SH1_SAR10 0x25A000F8      // Segment address register 10
#define SH1_SAR11 0x25A000FC      // Segment address register 11
#define SH1_DSTAT 0x25A00100      // DMA status register
#define SH1_BUSERR 0x25A00104     // Bus error address register
#define SH1_UMR 0x25A00108        // User mode register
#define SH1_PMR 0x25A0010C        // Programmable mode register
#define SH1_TCR 0x25A00110        // Timer control register
#define SH1_TCOR 0x25A00114       // Timer constant register
#define SH1_TCNT 0x25A00118       // Timer counter register
#define SH1_TSTR 0x25A0011C       // Test register
#define SH1_CHCR0 0x25A00120      // Channel control register 0
#define SH1_CHCR1 0x25A00124      // Channel control register 1
#define SH1_CHCR2 0x25A00128      // Channel control register 2
#define SH1_CHCR3 0x25A0012C      // Channel control register 3
#define SH1_CHCR4 0x25A00130      // Channel control register 4
#define SH1_CHCR5 0x25A00134      // Channel control register 5
#define SH1_CHCR6 0x25A00138      // Channel control register 6
#define SH1_CHCR7 0x25A0013C      // Channel control register 7
#define SH1_EXISEL 0x25A00140     // External interrupt input selection register
#define SH1_EXIPR 0x25A00144      // External interrupt priority register
#define SH1_TIER 0x25A00148       // Timer interrupt enable register
#define SH1_TSR 0x25A0014C        // Timer interrupt status register
#define SH1_IRQ 0x25A00150        // Interrupt request register
#define SH1_IRM 0x25A00154        // Interrupt mask register
#define SH1_NMICR 0x25A00158      // NMI control register
#define SH1_NMIPR 0x25A0015C      // NMI priority register
#define SH1_NMIFLG 0x25A00160     // NMI flag register
#define SH1_TRACE 0x25A00164      // Trace register
#define SH1_PADR0L 0x25A00168     // Port A data register 0 low byte
#define SH1_PADR0H 0x25A0016A     // Port A data register 0 high byte
#define SH1_PADR1L 0x25A0016C     // Port A data register 1 low byte
#define SH1_PADR1H 0x25A0016E     // Port A data register 1 high byte
#define SH1_PADR2L 0x25A00170     // Port A data register 2 low byte
#define SH1_PADR2H 0x25A00172     // Port A data register 2 high byte
#define SH1_PADR3L 0x25A00174     // Port A data register 3 low byte
#define SH1_PADR3H 0x25A00176     // Port A data register 3 high byte
#define SH1_PADR4L 0x25A00178     // Port A data register 4 low byte
#define SH1_PADR4H 0x25A0017A     // Port A data register 4 high byte
#define SH1_PADR5L 0x25A0017C     // Port A data register 5 low byte
#define SH1_PADR5H 0x25A0017E     // Port A data register 5 high byte
#define SH1_PADR6L 0x25A00180     // Port A data register 6 low byte
#define SH1_PADR6H 0x25A00182     // Port A data register 6 high byte
#define SH1_PADR7L 0x25A00184     // Port A data register 7 low byte
#define SH1_PADR7H 0x25A00186     // Port A data register 7 high byte
#define SH1_PADR8L 0x25A00188     // Port A data register 8 low byte
#define SH1_PADR8H 0x25A0018A     // Port A data register 8 high byte
#define SH1_PADR9L 0x25A0018C     // Port A data register 9 low byte
#define SH1_PADR9H 0x25A0018E     // Port A data register 9 high byte
#define SH1_PADR10L 0x25A00190    // Port A data register 10 low byte
#define SH1_PADR10H 0x25A00192    // Port A data register 10 high byte
#define SH1_PADR11L 0x25A00194    // Port A data register 11 low byte
#define SH1_PADR11H 0x25A00196    // Port A data register 11 high byte
#define SH1_PADR12L 0x25A00198    // Port A data register 12 low byte
#define SH1_PADR12H 0x25A0019A    // Port A data register 12 high byte
#define SH1_PADR13L 0x25A0019C    // Port A data register 13 low byte
#define SH1_PADR13H 0x25A0019E    // Port A data register 13 high byte
#define SH1_PADR14L 0x25A001A0    // Port A data register 14 low byte
#define SH1_PADR14H 0x25A001A2    // Port A data register 14 high byte
#define SH1_PADR15L 0x25A001A4    // Port A data register 15 low byte
#define SH1_PADR15H 0x25A001A6    // Port A data register 15 high byte
#define SH1_PAAR 0x25A001A8       // Port A address register
#define SH1_PADIR 0x25A001AA      // Port A direction register
#define SH1_PASCR 0x25A001AC      // Port A special control register
#define SH1_PBCR 0x25A001B0       // Port B control register
#define SH1_PBDR 0x25A001B2       // Port B data register
#define SH1_PBDMR 0x25A001B4      // Port B data mask register
#define SH1_PCCR 0x25A001B6       // Port C control register
#define SH1_PCDR 0x25A001B8       // Port C data register
#define SH1_PCFR 0x25A001BA       // Port C function register
#define SH1_PCR 0x25A001BC        // Port control register
#define SH1_SAR0 0x25A001C0       // DMA source address register 0
#define SH1_SAR1 0x25A001C4       // DMA source address register 1
#define SH1_SAR2 0x25A001C8       // DMA source address register 2
#define SH1_SAR3 0x25A001CC       // DMA source address register 3
#define SH1_DAR0 0x25A001D0       // DMA destination address register 0
#define SH1_DAR1 0x25A001D4       // DMA destination address register 1
#define SH1_DAR2 0x25A001D8       // DMA destination address register 2
#define SH1_DAR3 0x25A001DC       // DMA destination address register 3
#define SH1_TCR0 0x25A001E0       // DMA transfer count register 0
#define SH1_TCR1 0x25A001E2       // DMA transfer count register 1
#define SH1_TCR2 0x25A001E4       // DMA transfer count register 2
#define SH1_TCR3 0x25A001E6       // DMA transfer count register 3
#define SH1_CHCR0 0x25A001E8      // DMA channel control register 0
#define SH1_CHCR1 0x25A001EA      // DMA channel control register 1
#define SH1_CHCR2 0x25A001EC      // DMA channel control register 2
#define SH1_CHCR3 0x25A001EE      // DMA channel control register 3
#define SH1_DMAOR 0x25A001F0      // DMA operation register
#define SH1_SDMACR 0x25A001F4     // Sub-DMA control register
#define SH1_SF 0x25A001F8         // Serial mode control register
#define SH1_SIE 0x25A001FC        // Serial mode interrupt enable register
#define SH1_SBUF 0x25A001FE       // Serial mode transmit/receive data buffer
#define SH1_RTCNT 0x25A00200      // Real-time clock count register
#define SH1_FR0 0x25A00200        // Floating-point register 0
#define SH1_RTCOR 0x25A00204      // Real-time clock constant register
#define SH1_FR1 0x25A00204        // Floating-point register 1
#define SH1_RTCR 0x25A00208       // Real-time clock control register
#define SH1_FR2 0x25A00208        // Floating-point register 2
#define SH1_TSTR 0x25A0020C       // Test register
#define SH1_WTCSR 0x25A00210      // Watchdog timer control/status register
#define SH1_WTCNT 0x25A00212      // Watchdog timer counter register
#define SH1_WTCSR_EXT 0x25A00214  // Watchdog timer control/status register extension
#define SH1_INT2IVL 0x25A00220    // Interrupt request 2 input interval setting register
#define SH1_INT4IVL 0x25A00224    // Interrupt request 4 input interval setting register
#define SH1_INT6IVL 0x25A00228    // Interrupt request 6 input interval setting register
#define SH1_INT8IVL 0x25A0022C    // Interrupt request 8 input interval setting register
#define SH1_INTAIVL 0x25A00230    // Interrupt request A input interval setting register
#define SH1_INTCIVL 0x25A00234    // Interrupt request C input interval setting register
#define SH1_INT0IC 0x25A00240     // Interrupt request 0 input control register
#define SH1_INT0IC_CLR 0x25A00240 // Interrupt request 0 input control register (clearing)
#define SH1_INT0IC_SET 0x25A00241 // Interrupt request 0 input control register (setting)
#define SH1_INT1IC 0x25A00242     // Interrupt request 1 input control register
#define SH1_INT1IC_CLR 0x25A00242 // Interrupt request 1 input control register (clearing)
#define SH1_INT1IC_SET 0x25A00243 // Interrupt request 1 input control register (setting)
#define SH1_INT2IC 0x25A00244     // Interrupt request 2 input control register
#define SH1_INT2IC_CLR 0x25A00244 // Interrupt request 2 input control register (clearing)
#define SH1_INT2IC_SET 0x25A00245 // Interrupt request 2 input control register (setting)
#define SH1_INT3IC 0x25A00246     // Interrupt request 3 input control register
#define SH1_INT3IC_CLR 0x25A00246 // Interrupt request 3 input control register (clearing)
#define SH1_INT3IC_SET 0x25A00247 // Interrupt request 3 input control register (setting)
#define SH1_INT4IC 0x25A00248     // Interrupt request 4 input control register
#define SH1_INT4IC_CLR 0x25A00248 // Interrupt request 4 input control register (clearing)
#define SH1_INT4IC_SET 0x25A00249 // Interrupt request 4 input control register (setting)
#define SH1_INT5IC 0x25A0024A     // Interrupt request 5 input control register
#define SH1_INT5IC_CLR 0x25A0024A // Interrupt request 5 input control register (clearing)
#define SH1_INT5IC_SET 0x25A0024B // Interrupt request 5 input control register (setting)
#define SH1_INT6IC 0x25A0024C     // Interrupt request 6 input control register
#define SH1_INT6IC_CLR 0x25A0024C // Interrupt request 6 input control register (clearing)
#define SH1_INT6IC_SET 0x25A0024D // Interrupt request 6 input control register (setting)
#define SH1_INT7IC 0x25A0024E     // Interrupt request 7 input control register
#define SH1_INT7IC_CLR 0x25A0024E // Interrupt request 7 input control register (clearing)
#define SH1_INT7IC_SET 0x25A0024F // Interrupt request 7 input control register (setting)
#define SH1_INT8IC 0x25A00250     // Interrupt request 8 input control register
#define SH1_INT8IC_CLR 0x25A00250 // Interrupt request 8 input control register (clearing)
#define SH1_INT8IC_SET 0x25A00251 // Interrupt request 8 input control register (setting)
#define SH1_INT9IC 0x25A00252     // Interrupt request 9 input control register
#define SH1_INT9IC_CLR 0x25A00252 // Interrupt request 9 input control register (clearing)
#define SH1_INT9IC_SET 0x25A00253 // Interrupt request 9 input control register (setting)
#define SH1_INTAIC 0x25A00254     // Interrupt request A input control register
#define SH1_INTAIC_CLR 0x25A00254 // Interrupt request A input control register (clearing)
#define SH1_INTAIC_SET 0x25A00255 // Interrupt request A input control register (setting)
#define SH1_INTCIC 0x25A00256     // Interrupt request C input control register
#define SH1_INTCIC_CLR 0x25A00256 // Interrupt request C input control register (clearing)
#define SH1_INTCIC_SET 0x25A00257 // Interrupt request C input control register (setting)
#define SH1_INTDIC 0x25A00258     // Interrupt request D input control register
#define SH1_INTDIC_CLR 0x25A00258 // Interrupt request D input control register (clearing)
#define SH1_INTDIC_SET 0x25A00259 // Interrupt request D input control register (setting)
#define SH1_INTEIC 0x25A0025A     // Interrupt request E input control register
#define SH1_INTEIC_CLR 0x25A0025A // Interrupt request E input control register (clearing)
#define SH1_INTEIC_SET 0x25A0025B // Interrupt request E input control register (setting)
#define SH1_INTFIC 0x25A0025C     // Interrupt request F input control register
#define SH1_INTFIC_CLR 0x25A0025C // Interrupt request F input control register (clearing)
#define SH1_INTFIC_SET 0x25A0025D // Interrupt request F input control register (setting)
#define SH1_INTPRI00 0x25A00260   // Interrupt priority level register 00
#define SH1_INTPRI01 0x25A00261   // Interrupt priority level register 01
#define SH1_INTPRI02 0x25A00262   // Interrupt priority level register 02
#define SH1_INTPRI03 0x25A00263   // Interrupt priority level register 03
#define SH1_INTPRI04 0x25A00264   // Interrupt priority level register 04
#define SH1_INTPRI05 0x25A00265   // Interrupt priority level register 05
#define SH1_INTPRI06 0x25A00266   // Interrupt priority level register 06
#define SH1_INTPRI07 0x25A00267   // Interrupt priority level register 07
#define SH1_INTPRI08 0x25A00268   // Interrupt priority level register 08
#define SH1_INTPRI09 0x25A00269   // Interrupt priority level register 09
#define SH1_INTPRI0A 0x25A0026A   // Interrupt priority level register 0A
#define SH1_INTPRI0B 0x25A0026B   // Interrupt priority level register 0B
#define SH1_INTPRI0C 0x25A0026C   // Interrupt priority level register 0C
#define SH1_INTPRI0D 0x25A0026D   // Interrupt priority level register 0D
#define SH1_INTPRI0E 0x25A0026E   // Interrupt priority level register 0E
#define SH1_INTPRI0F 0x25A0026F   // Interrupt priority level register 0F
#define SH1_INTPRI10 0x25A00270   // Interrupt priority level register 10
#define SH1_INTPRI11 0x25A00271   // Interrupt priority level register 11
#define SH1_INTPRI12 0x25A00272   // Interrupt priority level register 12
#define SH1_INTPRI13 0x25A00273   // Interrupt priority level register 13
#define SH1_INTPRI14 0x25A00274   // Interrupt priority level register 14
#define SH1_INTPRI15 0x25A00275   // Interrupt priority level register 15
#define SH1_INTPRI16 0x25A00276   // Interrupt priority level register 16
#define SH1_INTPRI17 0x25A00277   // Interrupt priority level register 17
#define SH1_FFPRX 0x25A00277      // FIFO port X data receive register
#define SH1_ICTBR 0x25A00278      // Interrupt controller test register
#define SH1_FFPTX 0x25A00278      // FIFO port X data transmit register
#define SH1_FFPRY 0x25A00279      // FIFO port Y data receive register
#define SH1_FFPTY 0x25A0027A      // FIFO port Y data transmit register
#define SH1_FFPON 0x25A0027B      // FIFO port control register
#define SH1_FFPOF 0x25A0027C      // FIFO port status register
#define SH1_EXLEVT 0x25A0027D     // External event interrupt factor register
#define SH1_TSR 0x25A0027E        // Timer status register
#define SH1_WTCNTL 0x25A0027F     // Watchdog timer control register
#define SH1_WTCNT 0x25A00280      // Watchdog timer counter register
#define SH1_DVSR1 0x25A00280      // Division quotient 1 register
#define SH1_DBR 0x25A00281        // Debug register
#define SH1_CPUCNT 0x25A00282     // CPU control register
#define SH1_CPSW 0x25A00283       // CPU software interrupt register
#define SH1_WTCLR 0x25A00284      // Watchdog timer clear register
#define SH1_FR4 0x25A00285        // Floating-point register 4
#define SH1_DDMAR1 0x25A00288     // DMA destination address 1 register
#define SH1_FR5 0x25A00289        // Floating-point register 5
#define SH1_DSAR1 0x25A0028C      // DMA source address 1 register
#define SH1_FR6 0x25A0028D        // Floating-point register 6
#define SH1_DTLR1 0x25A00290      // DMA transfer length 1 register
#define SH1_FR7 0x25A00291        // Floating-point register 7
#define SH1_DCR1 0x25A00294       // DMA control 1 register
#define SH1_FR8 0x25A00295        // Floating-point register 8
#define SH1_FR9 0x25A00299        // Floating-point register 9
#define SH1_FR10 0x25A0029D       // Floating-point register 10
#define SH1_DIVAR 0x25A002A0      // Division address register
#define SH1_FR11 0x25A002A1       // Floating-point register 11
#define SH1_FR12 0x25A002A5       // Floating-point register 12
#define SH1_FR13 0x25A002A9       // Floating-point register 13
#define SH1_FR14 0x25A002AD       // Floating-point register 14
#define SH1_DVCR2 0x25A002B0      // Division control 2 register
#define SH1_FR15 0x25A002B1       // Floating-point register 15
#define SH1_CCR 0x25A002B5        // Condition code register
#define SH1_EXPEVT 0x25A002B8     // Exception event register
#define SH1_DVSR2 0x25A002B8      // Division quotient 2 register
#define SH1_INTEVT 0x25A002BC     // Interrupt event register
#define SH1_TRATE 0x25A002C0      // Task rate register
#define SH1_MACH 0x25A002C0       // Multiply-A accumulate High register
#define SH1_PRCR 0x25A002C4       // Processor control register
#define SH1_MACL 0x25A002C4       // Multiply-A accumulate Low register
#define SH1_PC 0x25A002C8         // Program counter
#define SH1_PR 0x25A002C8         // Program counter register
#define SH1_SR 0x25A002CC         // Status register
#define SH1_SGR 0x25A002CC        // Stack pointer (R15) general register
#define SH1_GBR 0x25A002D0        // Global base register
#define SH1_FPUL 0x25A002D0       // Floating point unit control register
#define SH1_VBR 0x25A002D4        // Vector base register
#define SH1_FPSCR 0x25A002D4      // Floating point status and control register
#define SH1_MACH 0x25A002D8       // Multiply-Accumulate High register
#define SH1_FPEPC 0x25A002D8      // Floating point exception program counter register
#define SH1_MACL 0x25A002DC       // Multiply-Accumulate Low register
#define SH1_FPINTR 0x25A002DC     // Floating point exception interrupt register
#define SH1_PR 0x25A002E0         // Procedure register
#define SH1_MMUCR 0x25A002E0      // MMU control register
#define SH1_FPSR 0x25A002E4       // Floating-point status register
#define SH1_MMUDR 0x25A002E4      // MMU data register
#define SH1_FPCR 0x25A002E8       // Floating-point control register
#define SH1_CCR 0x25A002E8        // Cache control register
#define SH1_FPUL 0x25A002EC       // Floating-point unimplemented register
#define SH1_RAMCR 0x25A002EC      // RAM control register
#define SH1_MMUCR 0x25A002F0      // MMU control register
#define SH1_COSCR 0x25A002F0      // Cache and write buffer operations status control register
#define SH1_TR 0x25A002F4         // Test register
#define SH1_WTBUF 0x25A002F4      // Write buffer register
#define SH1_ASR 0x25A002F8        // Access Status Register
#define SH1_SF 0x25A002F8         // Status flag register
#define SH1_PTEH 0x25A002FC       // Page Table Entry High register
#define SH1_GBR 0x25A002FC        // Global base register
#define SH1_PTEL 0x25A00300       // Page Table Entry Low register

// CD Block
#define CD_BLOCK_REG_BASE 0x25A00000     // CD block register base address
#define CD_BLOCK_STATUS 0x25A00000       // CD block status register
#define CD_BLOCK_DATA 0x25A00004         // CD block data register
#define CD_BLOCK_ERR_CODE 0x25A00008     // CD block error code register
#define CD_BLOCK_FAD 0x25A0000C          // CD block current FAD (Frame Address) register
#define CD_BLOCK_TRK_POS 0x25A00010      // CD block current track position register
#define CD_BLOCK_TRK_NUM 0x25A00014      // CD block current track number register
#define CD_BLOCK_SECTOR_SIZE 0x25A00018  // CD block sector size register
#define CD_BLOCK_SECTOR_COUNT 0x25A0001C // CD block sector count register
#define CD_BLOCK_CD_CMD 0x25A00020       // CD block command register
#define CD_BLOCK_CD_PARAM1 0x25A00024    // CD block command parameter 1 register
#define CD_BLOCK_CD_PARAM2 0x25A00028    // CD block command parameter 2 register
#define CD_BLOCK_CD_PARAM3 0x25A0002C    // CD block command parameter 3 register
#define CD_BLOCK_CD_PARAM4 0x25A00030    // CD block command parameter 4 register
#define CD_BLOCK_CD_PARAM5 0x25A00034    // CD block command parameter 5 register
#define CD_BLOCK_CD_RESULT1 0x25A00038   // CD block command result 1 register
#define CD_BLOCK_CD_RESULT2 0x25A0003C   // CD block command result 2 register
#define CD_BLOCK_CD_RESULT3 0x25A00040   // CD block command result 3 register
#define CD_BLOCK_CD_RESULT4 0x25A00044   // CD block command result 4 register
#define CD_BLOCK_CD_RESULT5 0x25A00048   // CD block command result 5 register
#define CD_BLOCK_CD_INT_MASK 0x25A0004C  // CD block interrupt mask register
#define CD_BLOCK_CD_INT_STAT 0x25A00050  // CD block interrupt status register
#define CD_BLOCK_CD_INT_ACK 0x25A00054   // CD block interrupt acknowledge register


/*
SH-2 Offsets
The memory-mapped registers in the SH2 1 CPU of the Sega Saturn are largely the same as those in the SH2 0 CPU, 
with the main difference being that the base addresses for the registers on the SH2 1 CPU are offset by a fixed amount. 
Specifically, the base address for SH2 1 CPU registers is 0x06004000, which is 0x4000 higher than the base address for SH2 0 CPU registers (0x06000000).

SH-2 Master (CPU 0)/Slave (CPU 1)
CPU 0, the master CPU controls all external devices and initiates transactions with the slave CPU. 
CPU 1, the slave CPU responds to those transactions and performs tasks assigned by the master CPU. 
However, both CPUs share the same programs and reset vector.

Memory pointers
In general, the SH2 memory addresses in the Sega Saturn console are represented as (volatile unsigned int*) pointers. 
However, there may be some memory-mapped registers or memory addresses that are represented differently depending on the 
specific use cases or the requirements of the hardware being accessed.

E.g. there may be cases where certain registers or memory addresses require different data types or pointer types depending on how 
they are accessed or the specific hardware that is being used to access them. 
In these cases, the memory addresses may be represented using a different pointer type or data type to ensure proper access and handling of the data.
*/

/* SH-2 CPU 0 */
#define SH2_CPU0_IRL0 0xFFFFFF60 // Interrupt request level 0 register for CPU 0
#define SH2_CPU0_IRL1 0xFFFFFF62 // Interrupt request level 1 register for CPU 0
#define SH2_CPU0_IRL2 0xFFFFFF64 // Interrupt request level 2 register for CPU 0
#define SH2_CPU0_IRL3 0xFFFFFF66 // Interrupt request level 3 register for CPU 0
#define SH2_CPU0_IRL4 0xFFFFFF68 // Interrupt request level 4 register for CPU 0
#define SH2_CPU0_IRL5 0xFFFFFF6A // Interrupt request level 5 register for CPU 0
#define SH2_CPU0_IRL6 0xFFFFFF6C // Interrupt request level 6 register for CPU 0
#define SH2_CPU0_IRL7 0xFFFFFF6E // Interrupt request level 7 register for CPU 0
#define SH2_CPU0_ITC    0xFFFFFF90  // Interrupt acknowledge and timer control register for CPU 0
#define SH2_CPU0_SR 0xFFFF0000   // Status register for CPU 0

/* SH-2 CPU 1 */
#define SH2_CPU1_IRL0 0xFFFFFEE0 // Interrupt request level 0 register for CPU 1
#define SH2_CPU1_IRL1 0xFFFFFEE2 // Interrupt request level 1 register for CPU 1
#define SH2_CPU1_IRL2 0xFFFFFEE4 // Interrupt request level 2 register for CPU 1
#define SH2_CPU1_IRL3 0xFFFFFEE6 // Interrupt request level 3 register for CPU 1
#define SH2_CPU1_IRL4 0xFFFFFEE8 // Interrupt request level 4 register for CPU 1
#define SH2_CPU1_IRL5 0xFFFFFEEA // Interrupt request level 5 register for CPU 1
#define SH2_CPU1_IRL6 0xFFFFFEEC // Interrupt request level 6 register for CPU 1
#define SH2_CPU1_IRL7 0xFFFFFEEE // Interrupt request level 7 register for CPU 1
#define SH2_CPU1_ITC 0xFFFFFEF0  // Interrupt acknowledge and timer control register for CPU 1
#define SH2_CPU1_SR 0xFFFF1000   // Status register for CPU 1

/* System Control Unit (SCU) */
#define SCU_GENDISPSW 0x25F80000   // General display screen enable/disable register
#define SCU_DISPMODE 0x25F80004    // Display mode register
#define SCU_DISPFRAME 0x25F80008   // Display frame buffer start address
#define SCU_DISPFBRIGHT 0x25F8000C // Display frame buffer brightness control register
#define SCU_TVMR 0x25F80010        // TV mode register
#define SCU_SYNCSTAT 0x25F80014    // Sync status register
#define SCU_EXTENB 0x25F80014      // External interrupt enable register
#define SCU_TVSTAT 0x25F80018      // TV status register
#define SCU_DSPSTART 0x25F8001C    // DSP start address register
#define SCU_DSPSRAM 0x25F80020     // DSP SRAM start address register
#define SCU_DSPEND 0x25F80024      // DSP SRAM end address register
#define SCU_DSPSTAT 0x25F8002C     // DSP status register
#define SCU_EXTDMA 0x25F80030      // External DMA start address register
#define SCU_D0AD 0x25F80030        // DMA Level-0 Address Destination Register
#define SCU_DMACTRL 0x25F80034     // DMA control register
#define SCU_D0MD 0x25F80034        // DMA Level-0 Mode Destination Register
#define SCU_DMASAR 0x25F80038      // DMA source address register
#define SCU_D0EN 0x25F80038        // DMA Level-0 Enable Destination Register
#define SCU_DMADAR 0x25F8003C      // DMA destination address register
#define SCU_DMALWR 0x25F80040      // DMA length/width register
#define SCU_DMACHCR 0x25F80044     // DMA channel control register
#define SCU_VDP2ID 0x25F80048      // VDP2 ID register
#define SCU_SYSRES 0x25F8004C      // System reset register
#define SCU_PADREGS 0x25F80060     // PAD control registers
#define SCU_IST 0x25F80060         // Interrupt Status Register
#define SCU_AIACK 0x25F80064       // Interrupt Acknowledge Register
#define SCU_ASBV 0x25F80068        // Auto Sound Buffer Address Register
#define SCU_RSEL 0x25F8006C        // Reset Select Register
#define SCU_PADOUT 0x25F80080      // PAD output enable register
#define SCU_JOYREPEAT 0x25F80088   // JOY auto-repeat register
#define SCU_JOYCTRL 0x25F80090     // JOY control register
#define SCU_JOYSTAT 0x25F800A0     // JOY status register
#define SCU_INTCTRL0 0x25F80100    // Interrupt Control Register 0
#define SCU_INTCTRL1 0x25F80104    // Interrupt Control Register 1
#define SCU_INTCTRL2 0x25F80108    // Interrupt Control Register 2
#define SCU_CACHECTRL0 0x25F80120  // Cache Control Register 0
#define SCU_CACHECTRL1 0x25F80124  // Cache Control Register 1
#define SCU_CACHECTRL2 0x25F80128  // Cache Control Register 2
// TBC #define SCU_BUSERR              0x25F801

// Sound DSP
#define SOUND_DSP_CONTROL 0x25C00000      // Control register for the DSP sound processor
#define SOUND_DSP_VOL_L 0x25C00004        // Left channel volume control
#define SOUND_DSP_VOL_R 0x25C00008        // Right channel volume control
#define SOUND_DSP_EFCT 0x25C00100         // Effect control register
#define SOUND_DSP_EFCT_LO 0x25C00104      // Effect control register (low 16 bits)
#define SOUND_DSP_EFCT_HI 0x25C00108      // Effect control register (high 16 bits)
#define SOUND_DSP_EFCT_END 0x25C0010C     // Effect control end address
#define SOUND_DSP_EFCT_ADR 0x25C00110     // Effect control current address
#define SOUND_DSP_EFCT_LOOP 0x25C00114    // Effect control loop address
#define SOUND_DSP_EFCT_NUM 0x25C00118     // Effect control number
#define SOUND_DSP_EFCT_RAM 0x25C00120     // Effect control RAM start address
#define SOUND_DSP_EFCT_RAM_END 0x25C00160 // Effect control RAM end address
#define SOUND_DSP_IRQCTL 0x25C00200       // IRQ control register
#define SOUND_DSP_BFCTL 0x25C00204        // Bus fault control register
#define SOUND_DSP_RGNCTL 0x25C00208       // Region control register
#define SOUND_DSP_SMPCMCTL 0x25C0020C     // PCM control register for SMPC (System Manager and Peripheral Controller)
#define SOUND_DSP_SMPCME 0x25C00210       // Enable register for SMPC and DSP communication
#define SOUND_DSP_SMPCMD 0x25C00214       // Command register for SMPC and DSP communication
#define SOUND_DSP_SMPCADR 0x25C00218      // Address register for SMPC and DSP communication
#define SOUND_DSP_SMPCLEN 0x25C0021C      // Length register for SMPC and DSP communication
#define SOUND_DSP_SMPCDAT 0x25C00220      // Data register for SMPC and DSP communication
#define SOUND_DSP_SDST 0x25C00800         // Start address for sound data transfer
#define SOUND_DSP_SDBR 0x25C00804         // Sound data block read
#define SOUND_DSP_SDBA 0x25C00808         // Sound data block address
#define SOUND_DSP_SDCA 0x25C0080C         // Sound data current address
#define SOUND_DSP_SDMA 0x25C00810         // Sound data memory address
#define SOUND_DSP_SDML 0x25C00814         // Sound data memory length
#define SOUND_DSP_SDMR 0x25C00818         // Sound data memory refresh
#define SOUND_DSP_SDCV 0x25C0081C         // Sound data CD volume
#define SOUND_DSP_SDRT 0x25C00820         // Sound data repeat
#define SOUND_DSP_SDIF 0x25C00824         // Sound data interrupt flag

// SH2
#define SH2_INTERNAL_RAM 0x00000000
#define SH2_SCRATCHPAD_RAM 0x02000000
#define SH2_WORK_RAM_L 0x06000000
#define SH2_WORK_RAM_H 0x06080000
#define SH2_WORK_RAM 0x06000000
#define SH2_INTERRUPT_REG 0x06000300

/* SMPC (System Management Processor with Cache) */

#define SMPC_SF 0x20100000         // Internal Work RAM (256 bytes)
#define SMPC_FRT 0x20100004        // Free-Running Timer
#define SMPC_CSR 0x20100006        // Control/Status Register
#define SMPC_CR 0x20100007         // Command Register
#define SMPC_RCYC 0x20100008       // ROM/RAM Cycle Register
#define SMPC_BANKSEL 0x2010000C    // Bank Selection Register
#define SMPC_IREG 0x20100010       // Interrupt Request Flags
#define SMPC_IR_MASK 0x20100012    // Interrupt Request Mask
#define SMPC_HARDTEST 0x20100014   // Hardware Test Register
#define SMPC_EXT_RAM 0x00200000    // External Work RAM (128 KB)
#define SMPC_BACKUP 0x00C00000     // Backup RAM (32 KB)
#define SMPC_BACKUP_END 0x00C07FFF // End of Backup RAM
#define SMPC_CACHE 0x20000000      // Cache RAM (8 KB)
#define SMPC_CACHE_TAG 0x20108000  // Cache RAM Tag Array (256 bytes)
#define SMPC_CACHE_DATA 0x20108400 // Cache RAM Data Array (8 KB)
/* Additional SMPC addresses */
#define SMPC_VERSION 0x25800001  // SMPC Version Register
#define SMPC_SNDON 0x2580000F    // Sound On Register
#define SMPC_SNDOUT 0x25800011   // Sound Output Register
#define SMPC_SYSRES 0x2580001F   // System Reset Register
#define SMPC_PADR 0x25800023     // Parallel Port A Data Register
#define SMPC_PDTA 0x25800025     // Parallel Port Data Register
#define SMPC_COMMFLAG 0x25800029 // Communication Flag Register

/*
The valid memory addresses assigned to registers in the SCU
Sourced from "SCU User's Manual Third Version (1994)(Sega)" are listed below:
*/
#define SCU_GBR 0x25F80000   // General Bus Register
#define SCU_VCR 0x25F80004   // VDP1 Control Register
#define SCU_RAMCR 0x25F80008 // Internal Work RAM Control Register
#define SCU_SFPR 0x25F8000C  // System Font Pointer Register
#define SCU_TA 0x25F80014    // Timekeeper Control Register
#define SCU_TVMR 0x25F80018  // TV Mode Register
#define SCU_VIMR 0x25F8001C  // Video Interrupt Mask Register
#define SCU_VCTP 0x25F80020  // Video Coordinate Transfer Pointer Register
#define SCU_VCTW 0x25F80024  // Video Coordinate Transfer Write Register
#define SCU_VCTR 0x25F80028  // Video Coordinate Transfer Read Register
#define SCU_DSTA 0x25F8002C  // DMA Status Address Register
#define SCU_D0AD 0x25F80030  // DMA Level-0 Address Destination Register
#define SCU_D0MD 0x25F80034  // DMA Level-0 Mode Destination Register
#define SCU_D0EN 0x25F80038  // DMA Level-0 Enable Destination Register
#define SCU_D1AD 0x25F80040  // DMA Level-1 Address Destination Register
#define SCU_D1MD 0x25F80044  // DMA Level-1 Mode Destination Register
#define SCU_D1EN 0x25F80048  // DMA Level-1 Enable Destination Register
#define SCU_D2AD 0x25F80050  // DMA Level-2 Address Destination Register
#define SCU_D2MD 0x25F80054  // DMA Level-2 Mode Destination Register
#define SCU_D2EN 0x25F80058  // DMA Level-2 Enable Destination Register
#define SCU_IST 0x25F80060   // Interrupt Status Register
#define SCU_AIACK 0x25F80064 // Interrupt Acknowledge Register
#define SCU_ASBV 0x25F80068  // Auto Sound Buffer Address Register
#define SCU_RSEL 0x25F8006C  // Reset Select Register

/* System Control Unit (SCU) */
#define SCU_GENDISPSW 0x25F80000  // General display screen enable/disable register
#define SCU_TA 0x25F80010         // Timekeeper control register
#define SCU_TVMR 0x25F80010       // TV mode register
#define SCU_EXTENB 0x25F80014     // External interrupt enable register
#define SCU_BANK_REG 0x25F80020   // Bank control register
#define SCU_DSPSRAM 0x25F80020    // DSP SRAM start address register
#define SCU_DSPEND 0x25F80024     // DSP SRAM end address register
#define SCU_DSPCTRL 0x25F80028    // DSP control register
#define SCU_DSPSTAT 0x25F8002C    // DSP status register
#define SCU_EXPMODA 0x25F80030    // Expansion area mode register A
#define SCU_EXPMODB 0x25F80034    // Expansion area mode register B
#define SCU_SDRRC 0x25F80038      // SDRAM refresh control register
#define SCU_PADCTRL1 0x25F80040   // PAD control register 1
#define SCU_PADCTRL2 0x25F80044   // PAD control register 2
#define SCU_PADCTRL3 0x25F80048   // PAD control register 3
#define SCU_PADCTRL4 0x25F8004C   // PAD control register 4
#define SCU_PADCTRL5 0x25F80050   // PAD control register 5
#define SCU_PADCTRL6 0x25F80054   // PAD control register 6
#define SCU_PADCTRL7 0x25F80058   // PAD control register 7
#define SCU_PADCTRL8 0x25F8005C   // PAD control register 8
#define SCU_SMPCON 0x25F80060     // SMPCON register
#define SCU_SMPCOM 0x25F80064     // SMPCOM register
#define SCU_SMPCSTAT 0x25F80068   // SMPCSTAT register
#define SCU_IREGS 0x25F8006C      // Internal register block start address
#define SCU_BANKSELECT 0x25F80070 // Bank select register
#define SCU_EXPMODE 0x25F80074    // Expansion area mode register
#define SCU_PADOUT 0x25F80080     // PAD output enable register
#define SCU_MPRX 0x25F80080       // Mapped port read register
#define SCU_MPST 0x25F80084       // Mapped port status register
#define SCU_MPWRITE 0x25F80088    // Mapped port write register
#define SCU_JOYCTRL 0x25F80090    // Input of the Sega Saturn joypad (TBC)
#define SCU_SDRCNTL 0x25F80090    // SDRAM control register
#define SCU_SDREF 0x25F80094      // SDRAM refresh register
#define SCU_SDBASE 0x25F80098     // SDRAM base register
#define SCU_SDRTST 0x25F8009C     // SDRAM refresh test register
#define SCU_PDR1 0x25F800A0       // Parallel data register 1
#define SCU_PDR2 0x25F800A4       // Parallel data register 2
#define SCU_PDR3 0x25F800A8       // Parallel data register

/*
Notes:
There is a difference between SCU_TVMR (TV Mode Register) and SCU_TA (Timekeeper Control Register), despite them sharing the same memory address (0x25F80010).
SCU_TVMR is used to configure the video output mode of the Sega Saturn, including screen resolution, refresh rate, and synchronization signals.
It controls how the SCU (System Control Unit) generates the video signals and how they are output to the TV.
On the other hand, SCU_TA is used to configure the RTC (Real-Time Clock) of the Sega Saturn, which is used to keep track of the current date and time.
It controls various settings related to the RTC, such as enabling or disabling the clock, setting the time and date, and configuring the alarm.
So while both registers share the same memory address, they serve different purposes and are used for different functions within the Sega Saturn system.
*/

/*
Diff between:
#define SCU_PADOUT              0x25F80080 // PAD output enable register
#define SCU_MPRX                0x25F80080 // Mapped port read register
SCU_PADOUT is a register that enables or disables the output of the Sega Saturn’s joypad. It has bits that indicate which ports are enabled for output.
SCU_MPRX is a register that reads the mapped port data of the Sega Saturn45. It has bits that indicate the values of the mapped port pins.
*/

/*
Diff between:
#define SCU_JOYCTRL             0x25F80090
#define SCU_SDRCNTL             0x25F80090 // SDRAM control register
SCU_JOYCTRL is a register that controls the input of the Sega Saturn’s joypad. It has bits that indicate which buttons are pressed or released on the controller.
SCU_SDRCNTL is a register that controls the SDRAM (synchronous dynamic random-access memory) of the Sega Saturn456.
It has bits that indicate the refresh rate, access mode and wait state of the memory.
*/


#endif //SEGA_SATURN_ADDRESS_H