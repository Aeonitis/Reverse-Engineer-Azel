# Memory
- 1 MiB SDRAM as work RAM for both SH-2 CPUs (faster)
- 1 MiB DRAM as work RAM for both SH-2 CPUs (slower)
- 512 KiB VDP1 SDRAM for 3D graphics (Texture data for polygon/sprites and drawing command lists)
- 2x 256 KiB VDP1 SDRAM for 3D graphics (Two frame-buffers for double-buffered polygon/sprite rendering)
- 512 KiB VDP2 SDRAM for 2D graphics (Texture data for the background layers and display lists)
- 4 KiB VDP2 SRAM for color palette data and rotation coefficient data (local, on-chip SRAM)
- 512 KiB DRAM for sound. (Multiplexed as sound CPU work RAM, SCSP DSP RAM, and SCSP wavetable RAM)
- 512 KiB DRAM as work RAM for the CD-ROM subsystem's SH-1 CPU
- 32 KiB SRAM with battery back-up for data retention.
- 512 KiB Mask ROM for the SH-2 BIOS

[SH2-Cache (Blog)](http://www.uoyabause.org/blogs/57)

## Memory Map

|Start Address|End Address|Size     |Mirror         |Description                                      |
|-------------|-----------|---------|---------------|-------------------------------------------------|
|0x00000000   |0x000FFFFF |512 kb   |Every 512 kb   |Boot ROM                                         |
|0x00100000   |0x0017FFFF |128 bytes|Every 128 bytes|SMPC registers                                   |
|0x00180000   |0x001FFFFF |64 kb    |Every 64 kb    |Backup RAM [1]                                   |
|0x00200000   |0x002FFFFF |1 mb     |N/A            |Work RAM Low                                     |
|0x00300000   |0x003FFFFF |N/A      |N/A            |Random data on every read (mostly $00)           |
|0x00400000   |0x007FFFFF |N/A      |N/A            |Always returns $0000.                            |
|0x00800000   |0x00FFFFFF |N/A      |N/A            |Always returns $00000001000200030004000500060007.|
|0x01000000   |0x01FFFFFF |N/A      |N/A            |Always returns $FFFF. [2]                        |
|0x02000000   |0x03FFFFFF |N/A      |N/A            |A-Bus CS0                                        |
|0x04000000   |0x04FFFFFF |N/A      |N/A            |A-Bus CS1                                        |
|0x05000000   |0x057FFFFF |N/A      |N/A            |A-Bus Dummy                                      |
|0x05800000   |0x058FFFFF |N/A      |N/A            |A-Bus CS2 [3]                                    |
|0x05900000   |0x059FFFFF |N/A      |N/A            |Lockup when read                                 |
|0x05A00000   |0x05AFFFFF |512 kb   |See notes      |68000 Work RAM [4]                               |
|0x05B00000   |0x05BFFFFF |4 kb     |Every 4 kb     |SCSP registers                                   |
|0x05C00000   |0x05C7FFFF |512 kb   |N/A            |VDP1 VRAM                                        |
|0x05C80000   |0x05CFFFFF |256 kb   |Every 256 kb   |VDP1 Framebuffer [5]                             |
|0x05D00000   |0x05D7FFFF |N/A      |N/A            |VDP1 Registers [6]                               |
|0x05D80000   |0x05DFFFFF |N/A      |N/A            |Lockup when read                                 |
|0x05E00000   |0x05EFFFFF |512 kb   |Every 512 kb   |VDP2 VRAM                                        |
|0x05F00000   |0x05F7FFFF |4 kb     |Every 4 kb     |VDP2 CRAM [7]                                    |
|0x05F80000   |0x05FBFFFF |512 bytes|Every 512 bytes|VDP2 registers                                   |
|0x05FC0000   |0x05FDFFFF |N/A      |N/A            |Always returns $000E0000                         |
|0x05FE0000   |0x05FEFFFF |256 bytes|Every 256 bytes|SCU registers                                    |
|0x05FF0000   |0x05FFFFFF |256 bytes|Every 256 bytes|Unknown registers [8]                            |
|0x06000000   |0x07FFFFFF |1 mb     |Every 1 mb     |Work RAM High                                    |


The CS0 and CS1 regions of the A-bus are mapped to the cartridge port. These areas are set up differently depending on what kind of cart is used. More information is provided on the respective cartridge's page.

Memory regions that return a constant value do so at all addresses within that region, in units of whatever size was specified.

Notes:

1. ↑ Has 32K of battery backed RAM mapped to odd bytes only, even bytes return $FF. Writing to even bytes is the same as writing to odd ones.


2. ↑ The SCU manual says $01000000 is the MINIT region and $01800000 is the SINIT region. More specifically:

   The Dual CPU User's Guide says that the on-chip Free Running Timer (FRT) input capture signal of each SH-2 are connected to this region:

   0x01000000-0x017FFFFF : Data written goes to slave SH-2 FRT
   0x01800000-0x01FFFFFF : Data written goes to master SH-2 FRT 
The data size is 16-bits, and the area is write-only. When data is written, the corresponding SH-2's FRT will set a status flag and optionally (if programmed to) cause an interrupt. The SH-2 can wait for interrupts or poll the FRT to see when data is available.

    This feature is primarily used for communication between the two CPUs.


3. ↑ The CD-ROM registers are mapped here, in 64 byte units mirrored every 64 bytes. 


4. ↑ If MEM4MB is cleared (bit 9 of $05B00400) the first 256K of work RAM is mirrored four times throughout the 05A00000-05AFFFFF range.

    Normally this bit should be set, which maps all 512K of work RAM to addresses 05A00000-05A7FFFF. The 05A80000-05AFFFFF region returns random data when read, some of which are words from the work RAM.

    This is possibly whatever data was last left on the data bus, though that can be generated by several sources (DRAM refresh, 68000 fetches, and SCSP accesses).


5. ↑ The framebuffer that isn't being displayed is mapped to this region. On power-up it is filled with the value $55555AAAAA, though the BIOS will clear the upper-left 352x240 area.


6. ↑ Apart from the read-only registers at 05D00010-05D00017, all locations return garbage data which is usually $55AA on power-up.


7. ↑ Doing byte writes to even addresses overwrites the odd byte of the same word with a garbage value. Byte writes to odd addresses overwrite the even byte of the same word with a garbage value. Byte reads work normally.

 
8. ↑ These registers are not mirrors of the SCU registers and are for something different. Not sure exactly what.


---


The SH7604 has a 32-bit address space. Of this, the lower 27 bits are mapped to the address bus, which give it a 128MB physical address space. Bits 28,27 are not used, and bits 31-29 select special memory regions, which are as follows:

|31 |30 |29 |Description                                                  |
|---|---|---|-------------------------------------------------------------|
|0  |0  |0  |Cache used (only if CE bit in CCR is set, otherwise no cache)|
|0  |0  |1  |Cache not used                                               |
|0  |1  |0  |Associative purge area (Always returns $2312)                |
|0  |1  |1  |Direct access to cache addresses (1K data, mirrored every 1K)|
|1  |0  |0  |Same as Cxxxxxxx                                             |
|1  |0  |1  |Same as 2xxxxxxx                                             |
|1  |1  |0  |Direct R/W access to cache data (4K data mirrored every 4K)  |
|1  |1  |1  |On-chip registers                                            |


The on-chip register area is officially located at 0xFFFFFE00-0xFFFFFFFF. The actual layout of the on-chip register area is as follows:

```
MSB                                 LSB
111x ???? ???? ???? ?1?x ???r rrrr rrrr
```

```
x : See table below
r : On-chip register offset
? : Bit value doesn't matter
```

|28 |12 |Description                                         |
|---|---|----------------------------------------------------|
|0  |0  |On-chip register offsets 0-255 map to garbage data. |
|0  |1  |On-chip register offsets 0-255 map to garbage data. |
|1  |0  |On-chip register offsets 0-255 map to garbage data. |
|1  |1  |On-chip register offsets 0-255 map to the registers.|


Offsets 256-511 always map to their respective registers regardless of the two above bits.

The garbage data is $00000001000200030004000500060007. If bit 14 is cleared the SH-2 locks up when accessing this address.


---


## How to communicate with the Slave SH2
First you need to stop any existing slave sh2 code from running. This can be done by issuing 0x03 to the SMPC COMREG register. After the command completes you can then set your function via the set sh2 interrupt bios function. Then all you have to do is restart the Slave SH2.

In your Slave SH2 main function, make sure it can't return by using an endless loop. Reset the interrupt registers(mainly IRPA and IRPB) and set SR to 0xF. To receive commands from master cpu, setup a shared variable that receives commands from Master SH2. Remember to add 0x20000000 to address of variable so it doesn't get cached. Then do a word write to Input Capture at 0x21000000. This should set the Input Capture Flag on the Slave SH2. You can check the Input Capture Flag on the Slave SH2 by checking bit 7 of FTCSR register. To send a command back repeat the process with master/slave operations swapped but for the Input Capture write to 0x21800000.


---


## Coding examples
### Slave SH2 communication:

```
#define SMPC_CMD_SSHON                          0x02
#define SMPC_CMD_SSHOFF                         0x03

volatile u32 slave_func_s;
#define slave_func_m    *(volatile u32 *)((u32)&slave_func_s+0x20000000)

void slavesh2_main()
{
   // Disable interrupts
   interrupt_set_level_mask(0xf);
   SH2_REG_IPRA = 0x0000;
   SH2_REG_IPRB = 0x0000;

   // Disable FRT Input Capture interrupt
   SH2_REG_TIER = 0x01;

   // Wait for further instructions
   for (;;)
   {
      // Poll ICF and see if there's a command
      if((SH2_REG_FTCSR & 0x80))
      {
         // Clear flag
         SH2_REG_FTCSR = 0x00;

         // Execute given function
         ((void (*)())slave_func_s)();
         slave_func_s = NULL;
      }
   }
}

void slavesh2_init()
{
   int i;

   // Turn off Slave SH2
   smpc_wait_till_ready();
   smpc_issue_command(SMPC_CMD_SSHOFF);
   smpc_wait_till_ready();
   for(i = 0 ; i < 1000; i++); // rest delay

   // Set Slave SH2 Main function
   bios_set_sh2_interrupt(0x94, (void *)&slavesh2_main);
   slave_func_s = NULL;

   // Restart Slave SH2
   smpc_issue_command(SMPC_CMD_SSHON);
   smpc_wait_till_ready();
}

void slave_run()
{
   slavesh2_init();

   // Setup our function queue
   slave_func_m = (u32)&my_slave_func;
   // Writing to the Input Capture will set the ICF on Slave SH2
   SH2_REG_M_FRT_IC = 0xFFFF;
}
```


---


## Caveats
Any data shared between Master and Slave SH2 in work ram should be read/written using cache-through addresses(0x26000000/0x20200000) and not cache. Otherwise the read data by the CPU would be the last cached data if it's stored in cache instead of the actual data.