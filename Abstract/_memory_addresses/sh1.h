#ifndef SH1_MEMORY_H
#define SH1_MEMORY_H
/*
SH1 (256 memory locations)
The 256 memory locations include both the memory address registers and the memory data registers.
The SH1 has a total of 32 memory address registers and 32 memory data registers, each occupying a 32-bit memory location,
so that adds up to 64 of the 256 memory locations. The remaining 192 memory locations are used for various registers and data storage.

Note: In some cases, The actual size and configuration  will depend on the specific hardware implementation.
*/

// Internal RAM (64KB) (0x00000000 - 0x0000FFFF): This 64KB region includes the on-chip memory of the SH1 CPU.
#define SH1_INTERNAL_RAM_START 0x00000000 // Internal RAM start address
#define SH1_INTERNAL_RAM_END   0x0000FFFF // Internal RAM end address

// External RAM (Assuming a maximum of 2GB of addressable RAM) (0x00010000 - 0x7FFFFFFF)
// This large region is reserved for any external RAM that can be connected to the SH1 CPU.
#define SH1_EXTERNAL_RAM_START 0x00010000 // External RAM start address
#define SH1_EXTERNAL_RAM_END   0x7FFFFFFF // External RAM end address

// Peripheral Registers (Assuming a maximum of 512MB of addressable peripheral registers) (0x80000000 - 0x9FFFFFFF)
// This area is reserved for the peripheral registers of the SH1 CPU, such as timers, interrupt controllers, and serial communication interfaces. 
// The exact addresses of these registers will depend on the specific SH1 model used.
#define SH1_PERIPHERAL_REGS_START 0x80000000 // Peripheral registers start address
#define SH1_PERIPHERAL_REGS_END   0x9FFFFFFF // Peripheral registers end address

// Timer Registers
#define SH1_TCOR0 0xFFFFFE00 // Timer constant register 0
#define SH1_TCNT0 0xFFFFFE04 // Timer counter register 0
#define SH1_TCR0  0xFFFFFE08 // Timer control register 0

#define SH1_TCOR1 0xFFFFFE10 // Timer constant register 1
#define SH1_TCNT1 0xFFFFFE14 // Timer counter register 1
#define SH1_TCR1  0xFFFFFE18 // Timer control register 1

#define SH1_TCOR2 0xFFFFFE20 // Timer constant register 2
#define SH1_TCNT2 0xFFFFFE24 // Timer counter register 2
#define SH1_TCR2  0xFFFFFE28 // Timer control register 2

// Interrupt Controller Registers
#define SH1_IPRA  0xFFFFFFD0 // Interrupt priority register A
#define SH1_IPRB  0xFFFFFFD4 // Interrupt priority register B
#define SH1_IPRC  0xFFFFFFD8 // Interrupt priority register C
#define SH1_IPRD  0xFFFFFFDC // Interrupt priority register D

#define SH1_ICR   0xFFFFFEE0 // Interrupt control register
#define SH1_PINTER 0xFFFFFEE4 // Interrupt pending register

// Serial Communication Interface Registers
#define SH1_SCI_SMR  0xFFFFF800 // Serial mode register
#define SH1_SCI_BRR  0xFFFFF801 // Bit rate register
#define SH1_SCI_SCR  0xFFFFF802 // Serial control register
#define SH1_SCI_TDR  0xFFFFF803 // Transmit data register
#define SH1_SCI_SSR  0xFFFFF804 // Serial status register
#define SH1_SCI_RDR  0xFFFFF805 // Receive data register

// External I/O (Assuming a maximum of 512MB of addressable external I/O) (0xA0000000 - 0xBFFFFFFF)
// This region is reserved for interfacing with external I/O devices, such as storage devices or display controllers.
#define SH1_EXTERNAL_IO_START 0xA0000000 // External I/O start address
#define SH1_EXTERNAL_IO_END   0xBFFFFFFF // External I/O end address

// Internal ROM (1MB) (0xC0000000 - 0xC00FFFFF)
// This 1MB region contains the internal ROM of the SH1 CPU, which typically includes the boot code and other firmware.
#define SH1_INTERNAL_ROM_START 0xC0000000 // Internal ROM start address
#define SH1_INTERNAL_ROM_END   0xC00FFFFF // Internal ROM end address

// External ROM (Assuming a maximum of 1007MB of addressable external ROM) (0xC0100000 - 0xFFFFFFFF)
// This area is reserved for any external ROM that can be connected to the SH1 CPU. 
#define SH1_EXTERNAL_ROM_START 0xC0100000 // External ROM start address
#define SH1_EXTERNAL_ROM_END   0xFFFFFFFF // External ROM end address

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

#endif // SH1_MEMORY_H