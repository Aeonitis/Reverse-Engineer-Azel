## Glossary

> This glossary will apply for all reverse-engineering, Assembly, Sega-Saturn, & SH-2 info.

### Execution Environment

#### **Absolute Addresses**

As with word and long-word literals, absolute addresses must also be stored in a table in main memory.
The value of the absolute address is transferred to a register and the
operand access is specified by indexed register-indirect addressing, with the absolute address
loaded (like word and long-word immediate data) during instruction execution.
16-Bit and 32-Bit Displacements: In the same way, 16-bit and 32-bit displacements also must be
stored in a table in main memory. Exactly like absolute addresses, the displacement value is
transferred to a register and the operand access is specified by indexed register-indirect addressing,
loading the displacement (like word and long-word immediate data) during instruction execution.

---

#### **Data Length**

The instruction set is implemented with fixed-length 16-bit wide instructions
executed in a pipelined sequence with single-cycle execution for most instructions.
All operations are executed in 32-bit long-word units. Memory can be accessed in
8-bit byte, 16-bit word, or 32- bit long-word units,
with byte or word units sign-extended into 32-bit long-words. Literals are
sign-extended in arithmetic operations (MOV, ADD, and CMP/EQ instructions) and
zero-extended in logical operations (TST, AND, OR, and XOR instructions).

---

#### **Delayed Branching**

Unconditional branching is implemented as delayed branch operations.
Pipeline disruptions due to branching are minimized by the execution of the instruction following
the delayed branch instruction prior to branching. Conditional branch instructions are of two
kinds, delayed and normal.

```
BRA TRGET
ADD R1, R0 ;        ADD is executed prior to branching to TRGET
```

---

#### **Load/Store Architecture**

The load-store architecture is used, so basic operations are executed by
the registers. Operations requiring memory access are executed in registers following register
loading, except for bit-manipulation operations such as logical AND functions, which are executed
directly in memory.

---

#### **Literals**

Byte-length literals are inserted directly into the instruction code as immediate data. To
maintain the 16-bit fixed-length instruction code, word or long-word literals are stored in a table in
main memory rather than inserted directly into the instruction code. The memory table is accessed
by the MOV instruction using PC-relative addressing with displacement, as follows:

```MOV.W @(disp, PC), R0```

---

#### **SH-2** (Hitachi SH-2 CPU)

The SH-2 is a 32-bit RISC architecture with a 16-bit fixed instruction length for high code density and features a
hardware multiply–accumulate (MAC) block for DSP algorithms and has a five-stage pipeline.
The SH-2 has a cache on all ROM-less devices.
It provides 16 general-purpose registers, a vector-base register, global-base register, and a procedure register.
Today the SH-2 family stretches from 32 KB of on-board flash up to ROM-less devices. It is used in a variety of
different devices with differing peripherals such as CAN, Ethernet, motor-control timer unit, fast ADC and others.

---

#### **T-bit**

The T bit in the status register (SR) is used to indicate the result of compare operations, and
is read as a TRUE/FALSE condition determining if a conditional branch is taken or not. To
improve processing speed, the T bit logic state is modified only by specific operations. An
example of how the T bit may be used in a sequence of operations is shown below.

```
ADD #1, R0 ;        T bit not modified by ADD operation
CMP/EQ R1, R0 ;     T bit set to 1 when R0 = 0
BT TRGET ;          branch taken to TRGET when T bit = 1 (R0 = 0)
```

---



