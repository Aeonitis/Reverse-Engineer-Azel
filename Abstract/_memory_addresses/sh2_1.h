#ifndef SH2_1_MEMORY_H
#define SH2_1_MEMORY_H

/*
Header file containing definitions for various registers, memory addresses, and control registers specifically for the SH2-1 CPU.

To improve this, we need to:
1. Double-check the SH2 CPU documentation: Ensure that we've thoroughly examined the documentation or datasheet for the SH2 CPU, 
    as it will provide us with the necessary information regarding memory addresses and control registers.
    
2. Compare with other SH2 CPU implementations: Comparing our header file with other SH2 CPU implementations or libraries can help identify any missing/incorrect addresses.
*/

// Interrupt Control Registers
#define REG_INTEVT 0x06004000 // Controls the interrupt handling for the SH2 CPU.
#define REG_INTCYC 0x06004004 // Controls the number of CPU cycles between interrupts.
#define REG_INTMOD 0x06004008 // Specifies the interrupt mode used by the SH2 CPU.
#define REG_INTMSK 0x0600400C // Controls which interrupts are enabled or disabled.

// Direct Memory Access Registers
#define REG_DMA0SAR 0x06004020 // Specifies the source address for a DMA transfer operation.
#define REG_DMA0DAR 0x06004024 // Specifies the destination address for a DMA transfer operation.
#define REG_DMA0TCR 0x06004028 // Controls the parameters of a DMA transfer operation, such as transfer size and direction.
#define REG_DMA0CHCR 0x0600402C // Controls the operation of the DMA channel.

// System Control Registers
#define REG_SCBASR 0x06004010 // Specifies the base address of the SCU register set.
#define REG_SMERALERT 0x06004018 // Controls the SMER alert system.
#define REG_SMERDISP 0x0600401C // Controls the SMER display system.

// Timer Registers
#define REG_TIMCR0 0x06004008 // Controls the operation of Timer 0.
#define REG_TIMCR1 0x0600400C // Controls the operation of Timer 1.
#define REG_TIMINT 0x06004014 // Controls the interrupt handling for the timers.
#define REG_TIMINTCLR 0x0600401C // Clears the timer interrupt flag.

// Memory Control Registers
#define REG_MCR 0x06004014 // Controls the memory management operations for the SH2 CPU.
#define REG_ABRA 0x06004034 // Specifies the base address of the ABUS register set.
#define REG_PTEH 0xFF004000 // Specifies the high 32 bits of the page table entry address.
#define REG_PTEL 0xFF004004 // Specifies the low 32 bits of the page table entry address.
#define REG_TTB 0xFF004008 // Specifies the base address of the page table.

// Cache Control Registers
#define REG_CCR 0x06004018 // Controls the cache operations for the SH2 CPU.
#define REG_ICACHE_CONTROL 0xFF804000 // Controls the instruction cache operations.
#define REG_DCACHE_CONTROL 0xFF804008 // Controls the data cache operations.

// Sound Processing Unit Registers
#define REG_SPUSTAT 0x06204000 // Provides status information about the sound processing unit.
#define REG_SPUCNTL 0x06204002 // Controls the operation of the sound processing unit.
#define REG_SPUPITCHMOD 0x06204004 // Specifies the pitch and modulation of the sound output.
#define REG_SPUREVTIME 0x06204006 // Specifies the reverb time of the sound output.
#define REG_SPUSRC 0x06204008 // Controls the source of the sound data.
#define REG_SPUDST 0x0620400A // Controls the destination of the sound data.
#define REG_SPUKEYON 0x0620400C // Specifies which channels should begin playing sound.
#define REG_SPUKEYOFF 0x0620400E // Specifies which channels should stop playing sound.
#define REG_SPUALGO 0x06204010 // Specifies the algorithm used

#endif // SH2_1_MEMORY_H