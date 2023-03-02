#ifndef SH2_0_MEMORY_H
#define SH2_0_MEMORY_H

/*
Header file containing definitions for various registers, memory addresses, and control registers specifically for the SH2-0 CPU.

To improve this, we need to:
1. Double-check the SH2 CPU documentation: Ensure that we've thoroughly examined the documentation or datasheet for the SH2 CPU, 
    as it will provide us with the necessary information regarding memory addresses and control registers.
    
2. Compare with other SH2 CPU implementations: Comparing our header file with other SH2 CPU implementations or libraries can help identify any missing/incorrect addresses.

System Control Registers  --------------------------------------------------------------------
Control the behavior of the saturn, rather than holding data or addresses.
*/
#define SH2_CPU0_STBCR 0xFF000000 // Standby Control Register (control the power management of the SH2 CPU)

/*
Memory address registers --------------------------------------------------------------------
They hold the memory addresses of the interrupt control registers, which can be read or written to by accessing these addresses.

Addresses at 0x00000000, 0x06000000 are in the memory-mapped I/O space and are used for accessing the SH2 CPU's internal registers
related to system control, interrupt handling, memory management, timers, sound processing unit, and cache control.

The internal registers (R0-R15, SR, and PC) are located at memory address 0x00000000 to 0x0000003F
*/

// General-purpose registers
#define SH2_CPU0_R0 0x00000000  // General-purpose register 0
#define SH2_CPU0_R1 0x00000004  // General-purpose register 1
#define SH2_CPU0_R2 0x00000008  // General-purpose register 2
#define SH2_CPU0_R3 0x0000000C  // General-purpose register 3
#define SH2_CPU0_R4 0x00000010  // General-purpose register 4
#define SH2_CPU0_R5 0x00000014  // General-purpose register 5
#define SH2_CPU0_R6 0x00000018  // General-purpose register 6
#define SH2_CPU0_R7 0x0000001C  // General-purpose register 7
#define SH2_CPU0_R8 0x00000020  // General-purpose register 8
#define SH2_CPU0_R9 0x00000024  // General-purpose register 9
#define SH2_CPU0_R10 0x00000028 // General-purpose register 10
#define SH2_CPU0_R11 0x0000002C // General-purpose register 11
#define SH2_CPU0_R12 0x00000030 // General-purpose register 12
#define SH2_CPU0_R13 0x00000034 // General-purpose register 13
#define SH2_CPU0_R14 0x00000038 // General-purpose register 14
#define SH2_CPU0_R15 0x0000003C // General-purpose register 15

// Cache Control Registers
#define SH2_CPU0_CCR 0x40000020  // Cache Control Register
#define SH2_CPU0_ICR 0x40000024  // Instruction Cache Control Register
#define SH2_CPU0_DACR 0x40000028 // Data Cache Control Register

// Interrupt Control Registers
#define SH2_CPU0_IPRA 0x40000080 // Interrupt Priority Register A
#define SH2_CPU0_IPRB 0x40000084 // Interrupt Priority Register B
#define SH2_CPU0_VCR 0x40000088  // Vector Control Register

// Timer Registers (Specify the memory addresses of the Timer registers)
#define SH2_CPU0_TSTR 0x40000200 // Timer Start Register
#define SH2_CPU0_TCR0 0x40000210 // Timer Control Register 0
#define SH2_CPU0_TCR1 0x40000214 // Timer Control Register 1
#define SH2_CPU0_TCR2 0x40000218 // Timer Control Register 2
#define SH2_CPU0_TCR3 0x4000021C // Timer Control Register 3

/*
Although the internal registers R0-R15, PC, and SR are physically located at addresses 0x00000000 to 0x0000003F within the CPU,
 they are also mapped to higher-level addresses in the memory map to make them accessible to other parts of the system.

The memory-mapped addresses are typically in the range of 0x06000000 to 0x06FFFFFF for SH2 CPU 0.
*/

// Program counter
#define SH2_CPU0_PC 0x06000000 // Program counter (points to the current instruction)
// Status register
#define SH2_CPU0_SR 0x06000002 // Status register (contains CPU status flags)

// Interrupt Control Registers
#define SH2_CPU0_INTEVT 0x06000000 // Controls the interrupt handling for the SH2 CPU.
#define SH2_CPU0_INTCYC 0x06000004 // Controls the number of CPU cycles between interrupts.
#define SH2_CPU0_INTMOD 0x06000008 // Specifies the interrupt mode used by the SH2 CPU.
#define SH2_CPU0_INTMSK 0x0600000C // Controls which interrupts are enabled or disabled.

// System Control Registers (addresses where the corresponding system control registers can be accessed)
#define SH2_CPU0_SCBASR 0x06000010    // Specifies the base address of the SCU register set.
#define SH2_CPU0_SMERALERT 0x06000018 // Controls the SMER alert system.
#define SH2_CPU0_SMERDISP 0x0600001C  // Controls the SMER display system.
#define SH2_CPU0_SCRC 0x06000080      // Address register for the system control register
#define SH2_CPU0_RTCNT 0x06000084     // Address register for the real-time clock counter
#define SH2_CPU0_RTCSR 0x06000088     // Address register for the real-time clock control/status register
#define SH2_CPU0_MCR 0x060000C0       // Address register for the memory control register
#define SH2_CPU0_CCR 0x060000C4       // Address register for the cache control register
#define SH2_CPU0_SCR 0x060000C8       // Address register for the sound processing unit control register
#define SH2_CPU0_SFR 0x060000CC       // Address register for the sound processing unit status register

// Memory management unit control registers
#define SH2_CPU0_TCR 0x06000030   // Address register for the translation control register
#define SH2_CPU0_PTEH 0x06000034  // Address register for the page table entry high register
#define SH2_CPU0_PTEL 0x06000038  // Address register for the page table entry low register
#define SH2_CPU0_MMUCR 0x0600003C // Address register for the memory management unit control register

// Interrupt control registers
#define SH2_CPU0_VCR 0x06000060   // Address register for the vector base address register
#define SH2_CPU0_GBR 0x06000068   // Address register for the global base register
#define SH2_CPU0_DBR 0x0600006C   // Address register for the debug base register
#define SH2_CPU0_ICR 0x06000070   // Address register for the interrupt controller register
#define SH2_CPU0_IPRA 0x06000074  // Address register for the interrupt priority register A
#define SH2_CPU0_IPRB 0x06000078  // Address register for the interrupt priority register B
#define SH2_CPU0_TIER 0x06000090  // Address register for the timer interrupt enable register
#define SH2_CPU0_TSR 0x06000094   // Address register for the timer status register
#define SH2_CPU0_TCNT0 0x06000098 // Address register for timer 0 counter
#define SH2_CPU0_TCNT1 0x0600009C // Address register for timer 1 counter
#define SH2_CPU0_TCNT2 0x060000A0 // Address register for timer 2 counter
#define SH2_CPU0_TCOR0 0x060000A4 // Address register for timer 0 comparator
#define SH2_CPU0_TCOR1 0x060000A8 // Address register for timer 1 comparator
#define SH2_CPU0_TCOR2 0x060000AC // Address register for timer 2 comparator
#define SH2_CPU0_TCPR2 0x060000B0 // Address register for timer 2 prescaler

// Cache Control Registers
#define SH2_CPU0_ICACHE_CONTROL 0xFF800000 // Controls the instruction cache operations.
#define SH2_CPU0_DCACHE_CONTROL 0xFF800008 // Controls the data cache operations.

// Memory Control Registers (used in the address translation process)
#define SH2_CPU0_PTEH 0xFF000000 // Specifies the high 32 bits of the page table entry address.
#define SH2_CPU0_PTEL 0xFF000004 // Specifies the low 32 bits of the page table entry address.
#define SH2_CPU0_TTB 0xFF000008  // Specifies the base address of the page table.

// Timer Registers (Hold addresses of the timer registers and control the access to them.)
#define SH2_CPU0_TSTR 0xFFD90000  // Timer Start Register
#define SH2_CPU0_TCOR0 0xFFD90004 // Timer Constant Register 0
#define SH2_CPU0_TCR0 0xFFD9000C  // Timer Control Register 0
#define SH2_CPU0_TCOR1 0xFFD90010 // Timer Constant Register 1
#define SH2_CPU0_TCR1 0xFFD90018  // Timer Control Register 1
#define SH2_CPU0_TCOR2 0xFFD9001C // Timer Constant Register 2
#define SH2_CPU0_TCR2 0xFFD90024  // Timer Control Register 2


/*
Memory data registers --------------------------------------------------------------------
*/

// System Registers
#define SH2_CPU0_SR 0x40000000    // System Register
#define SH2_CPU0_GBR 0x40000004   // Global Base Register
#define SH2_CPU0_VBR 0x40000008   // Vector Base Register
#define SH2_CPU0_SGR 0x4000000C   // Scatter/Gather Register
#define SH2_CPU0_FPSCR 0x40000010 // Floating-Point Status and Control Register
#define SH2_CPU0_PR 0x40000014    // Procedure Register
#define SH2_CPU0_MACL 0x40000018  // Multiply-Accumulate Low Register
#define SH2_CPU0_MACH 0x4000001C  // Multiply-Accumulate High Register

// DMA Registers (Transfer data between devices and memory without involving the CPU)
#define SH2_CPU0_DRCR0 0x40000100 // DMA Request Control Register 0
#define SH2_CPU0_DRCR1 0x40000104 // DMA Request Control Register 1
#define SH2_CPU0_DRCR2 0x40000108 // DMA Request Control Register 2
#define SH2_CPU0_DRCR3 0x4000010C // DMA Request Control Register 3
#define SH2_CPU0_SAR0 0x40000110  // Source Address Register 0
#define SH2_CPU0_SAR1 0x40000114  // Source Address Register 1
#define SH2_CPU0_SAR2 0x40000118  // Source Address Register 2
#define SH2_CPU0_SAR3 0x4000011C  // Source Address Register 3
#define SH2_CPU0_DAR0 0x40000120  // Destination Address Register 0
#define SH2_CPU0_DAR1 0x40000124  // Destination Address Register 1
#define SH2_CPU0_DAR2 0x40000128  // Destination Address Register 2
#define SH2_CPU0_DAR3 0x4000012C  // Destination Address Register 3
#define SH2_CPU0_TCR0 0x40000130  // Transfer Count Register 0
#define SH2_CPU0_TCR1 0x40000134  // Transfer Count Register 1
#define SH2_CPU0_TCR2 0x40000138  // Transfer Count Register 2
#define SH2_CPU0_TCR3 0x4000013C  // Transfer Count Register 3
#define SH2_CPU0_CHCR0 0x40000140 // Channel Control Register 0
#define SH2_CPU0_CHCR1 0x40000144 // Channel Control Register 1
#define SH2_CPU0_CHCR2 0x40000148 // Channel Control Register 2
#define SH2_CPU0_CHCR3 0x4000014C // Channel Control Register 3
#define SH2_CPU0_DMAOR 0x40000180 // DMA Control Register

// Direct Memory Access Registers
#define SH2_CPU0_DMA0SAR 0x06000020  // Specifies the source address for a DMA transfer operation.
#define SH2_CPU0_DMA0DAR 0x06000024  // Specifies the destination address for a DMA transfer operation.
#define SH2_CPU0_DMA0TCR 0x06000028  // Controls the parameters of a DMA transfer operation, such as transfer size and direction.
#define SH2_CPU0_DMA0CHCR 0x0600002C // Controls the operation of the DMA channel.

// Timer Registers
#define SH2_CPU0_TIMCR0 0x06000008    // Controls the operation of Timer 0.
#define SH2_CPU0_TIMCR1 0x0600000C    // Controls the operation of Timer 1.
#define SH2_CPU0_TIMINT 0x06000014    // Controls the interrupt handling for the timers.
#define SH2_CPU0_TIMINTCLR 0x0600001C // Clears the timer interrupt flag.

// Memory Control Registers
#define SH2_CPU0_MCR 0x06000014  // Controls the memory management operations for the SH2 CPU.
#define SH2_CPU0_ABRA 0x06000034 // Specifies the base address of the ABUS register set.

// Cache Control Registers
#define SH2_CPU0_CCR 0x06000018 // Controls the cache operations for the SH2 CPU.

// Sound Processing Unit Registers
#define SH2_CPU0_SPUSTAT 0x06200000     // Provides status information about the sound processing unit.
#define SH2_CPU0_SPUCNTL 0x06200002     // Controls the operation of the sound processing unit.
#define SH2_CPU0_SPUPITCHMOD 0x06200004 // Specifies the pitch and modulation of the sound output.
#define SH2_CPU0_SPUREVTIME 0x06200006  // Specifies the reverb time of the sound output.

// DMA Registers (Specify source and destination addresses for the transfer, as well as the number of bytes to transfer and various control parameters)
#define SH2_CPU0_DRCR 0xFFA00000   // DMA Request Control Register
#define SH2_CPU0_DSEAR 0xFFA00004  // DMA Source Extended Address Register
#define SH2_CPU0_DDAR 0xFFA00008   // DMA Destination Address Register
#define SH2_CPU0_DSAR 0xFFA0000C   // DMA Source Address Register
#define SH2_CPU0_DTCR 0xFFA00010   // DMA Transfer Control Register
#define SH2_CPU0_CHCR0 0xFFA00014  // DMA Channel Control Register 0
#define SH2_CPU0_TCR0 0xFFA00018   // DMA Transfer Count Register 0
#define SH2_CPU0_CHCR1 0xFFA0001C  // DMA Channel Control Register 1
#define SH2_CPU0_TCR1 0xFFA00020   // DMA Transfer Count Register 1
#define SH2_CPU0_SAR0 0xFFA00024   // DMA Source Address Register 0
#define SH2_CPU0_DAR0 0xFFA00028   // DMA Destination Address Register 0
#define SH2_CPU0_SAR1 0xFFA0002C   // DMA Source Address Register 1
#define SH2_CPU0_DAR1 0xFFA00030   // DMA Destination Address Register 1
#define SH2_CPU0_SAR2 0xFFA00034   // DMA Source Address Register 2
#define SH2_CPU0_DAR2 0xFFA00038   // DMA Destination Address Register 2
#define SH2_CPU0_SAR3 0xFFA0003C   // DMA Source Address Register 3
#define SH2_CPU0_DAR3 0xFFA00040   // DMA Destination Address Register 3
#define SH2_CPU0_DMATCR 0xFFA00048 // DMA Trigger Control Register
#define SH2_CPU0_DMATSR 0xFFA0004C // DMA Trigger Status Register


// Interrupt Registers (Store interrupt priority levels and request levels)
#define SH2_CPU0_IPRA 0xFFFFFEE0  // Interrupt Priority Register A
#define SH2_CPU0_IPRB 0xFFFFFEE2  // Interrupt Priority Register B
#define SH2_CPU0_IPRC 0xFFFFFEE4  // Interrupt Priority Register C
#define SH2_CPU0_IPRD 0xFFFFFEE6  // Interrupt Priority Register D
#define SH2_CPU0_IPRE 0xFFFFFEE8  // Interrupt Priority Register E
#define SH2_CPU0_IPRF 0xFFFFFEEA  // Interrupt Priority Register F
#define SH2_CPU0_IPRG 0xFFFFFEEC  // Interrupt Priority Register G
#define SH2_CPU0_IPRH 0xFFFFFEEE  // Interrupt Priority Register H
#define SH2_CPU0_IPRJ 0xFFFFFEF0  // Interrupt Priority Register J
#define SH2_CPU0_IPRK 0xFFFFFEF2  // Interrupt Priority Register K
#define SH2_CPU0_IPRL 0xFFFFFEF4  // Interrupt Priority Register L
#define SH2_CPU0_IPRM 0xFFFFFEF6  // Interrupt Priority Register M
#define SH2_CPU0_IPRN 0xFFFFFEF8  // Interrupt Priority Register N
#define SH2_CPU0_IPRP 0xFFFFFEFA  // Interrupt Priority Register P
#define SH2_CPU0_IPRQ 0xFFFFFEFC  // Interrupt Priority Register Q
#define SH2_CPU0_IPRR 0xFFFFFEFE  // Interrupt Priority Register R
#define SH2_CPU0_IRLVL 0xFFFFFDF0 // Interrupt Request Level Register

// Timer Registers (Hold current count value for each timer)
#define SH2_CPU0_TCNT0 0xFFD90008 // Timer Counter Register 0
#define SH2_CPU0_TCNT1 0xFFD90014 // Timer Counter Register 1
#define SH2_CPU0_TCNT2 0xFFD90020 // Timer Counter Register 2

#endif // SH2_0_MEMORY_H