# NSC-8 Architecture: Extended SAP-1 Microarchitecture

**Nolan’s Simple Calculator-8 (NSC-8)** is an expanded version of the **SAP-1 architecture** (by Malvino & Brown) that adds five new instructions to the original five. This project demonstrates how to integrate these extensions through additional control logic and timing cycles.

---

## Table of Contents

- [Overview](#overview)  
- [Features](#features)  
- [Instruction Set](#instruction-set)  
- [Architecture Components](#architecture-components)  
- [Timing & Control Logic](#timing--control-logic)  
- [Testing](#testing)  
- [Getting Started](#getting-started)  

---

## Overview

The **NSC-8 architecture** retains the core of SAP-1—such as the program counter, memory, registers, and control logic—while adding new instructions (`LDAI`, `STA`, `ADDI`, `SUBI`, `JUMP`) for more instructional flexibility and functionality. This README outlines the design, logic, and usage of NSC-8. Report and circuit files can be found in the documentation folder.

---

## Features

- All original SAP-1 instructions: `LDA`, `ADD`, `SUB`, `OUT`, `HLT`.  
- **New instructions added**:
  - `LDAI` – Load immediate value into accumulator A  
  - `STA` – Store accumulator A to memory  
  - `ADDI` – Add immediate value to accumulator A  
  - `SUBI` – Subtract immediate value from accumulator A  
  - `JUMP` – Unconditional branch to a given address

---

## Instruction Set

Each instruction is 8 bits: upper 4 bits for opcode, lower 4 bits for operand.

| Instruction | Opcode | Operand    | Description                     |
|-------------|--------|------------|---------------------------------|
| LDA         | 0000   | Address    | Load from RAM to A              |
| ADD         | 0001   | Address    | Load to B, add to A             |
| SUB         | 0010   | Address    | Load to B, subtract from A      |
| LDAI        | 0011   | Immediate  | Load immediate to A             |
| STA         | 0100   | Address    | Store A to memory               |
| ADDI        | 0101   | Immediate  | Add immediate to A              |
| SUBI        | 0110   | Immediate  | Subtract immediate from A       |
| JUMP        | 0111   | Immediate  | Set PC with operand             |
| OUT         | 1110   | —          | Output A’s value                |
| HLT         | 1111   | —          | Halt execution                  |

---

## Architecture Components

The architecture retains the ten foundation components of SAP-1:

- Program Counter (PC) – 4-bit modulo-16 counter  
- Memory Address Register (MAR) – 4-bit register  
- RAM – 16 × 8 (two 16 × 4 units)  
- Instruction Register (IR) – 4-bit opcode + 4-bit operand  
- Controller/Sequencer – Uses a 6-state JK ring counter for timing  
- Accumulator A (A) – Holds operands/output  
- B Register – Holds second operand for ALU  
- Adder/Subtractor – Performs arithmetic  
- Output Register – Displays A’s value  
- 8-bit Bus – Shared communication channel

---

## Timing & Control Logic

Every cycle starts with the **fetch phase** (T1–T3):

1. **T1**: PC → bus → MAR (`EP`, `LM_LOW`)  
2. **T2**: Increment PC (`CP`)  
3. **T3**: RAM → bus → IR (`CE_LOW`, `LI_LOW`); opcode sent to controller

Instruction-specific logic follows in T4–T6. Detailed timing and circuit diagrams are available in the PDF with the full report.

---

## Testing

- Each instruction was tested individually with regression checks to ensure all SAP-1 behavior is preserved.  
- Sample programs executed:
  - **Original instruction sequence**: LDA, ADD, SUB, OUT, HLT  
  - **Extended instruction sequence**: LDAI, ADDI, ADDI, SUBI, JUMP, STA, OUT, HLT  

Refer to the full report for machine code details and expected results.

---

## Getting Started

Logisim:
- Download Logisim Version 3.9.0
- Download and Open NSC-8.circ File
- Download preloaded ram content
- right click on each RAM Component and upload the respective upper and lower bit sets from either the original architecture or added architecture.
- ensure the clock is currently a 0
- Make the first bit of the 6 bit ring counter a 1, the ring counter should display 100000.
- ensure clock ticks are enabled and run the program
- compare with documented test results in the PDF Report.

Verilog Code:
- Download the Source and testbench files
- open the tb_NS8.sv File
- run the following commands in the terminal
# 1. **Compile your design and testbench**
iverilog -g2012 -o tb_NSC8.vvp Source/*.v Testbench/tb_NSC8.sv

# 2. **Run the simulation (produces VCD by default)**
vvp tb_NSC8.vvp

# 3. **Launch the waveform viewer**
gtkwave tb_NSC8.vcd
