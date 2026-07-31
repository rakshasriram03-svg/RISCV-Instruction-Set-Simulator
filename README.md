# RISC-V Instruction Set Simulator

![C++](https://img.shields.io/badge/C++-17-blue)
![RISC-V](https://img.shields.io/badge/Architecture-RISC--V-green)
![Status](https://img.shields.io/badge/Status-Month%201-orange)
![License](https://img.shields.io/badge/License-Educational-lightgrey)
# RISC-V Instruction Set Simulator

A modular **RISC-V Instruction Set Simulator** developed in **C++** to understand the fundamentals of computer architecture and processor design.

This project simulates the execution of basic RISC-V instructions by implementing the core CPU components such as the Register File, Instruction Memory, Data Memory, Decoder, Execution Unit (ALU), and Program Counter.

---

## Features

- Modular CPU architecture
- Register File with 32 general-purpose registers
- Instruction Memory
- Data Memory
- Instruction Decoder
- Arithmetic Logic Unit (ALU)
- Program Counter (PC)
- Fetch → Decode → Execute → Write Back cycle
- Immediate instruction support
- Memory read/write support

---

## Supported Instructions

### Arithmetic
- ADD
- SUB
- ADDI

### Logical
- AND
- OR
- XOR

### Memory
- LW
- SW

---

## Project Structure

```
RISCV-Instruction-Set-Simulator/
│
├── include/
│   ├── cpu.h
│   ├── decoder.h
│   ├── execute.h
│   ├── instruction_memory.h
│   ├── memory.h
│   └── register_file.h
│
├── src/
│   ├── cpu.cpp
│   ├── decoder.cpp
│   ├── execute.cpp
│   ├── instruction_memory.cpp
│   ├── memory.cpp
│   ├── register_file.cpp
│   └── main.cpp
│
├── diagrams/
├── docs/
├── report/
├── presentation/
├── README.md
└── CMakeLists.txt
```

---

## CPU Architecture

The simulator consists of the following modules:

- CPU
- Register File
- Instruction Memory
- Data Memory
- Decoder
- Execute Unit (ALU)
- Program Counter

Execution Flow:

```
Instruction Memory
        │
        ▼
      Decoder
        │
        ▼
 Register File
        │
        ▼
      ALU
        │
        ▼
 Data Memory (LW/SW)
        │
        ▼
 Register Write Back
```

---

## Build Instructions

### Using G++

```bash
g++ -Iinclude src/*.cpp -o riscv_simulator.exe
```

Run:

```bash
./riscv_simulator.exe
```

---

## Sample Program

```cpp
cpu.loadInstruction("ADD x3,x1,x2");
cpu.loadInstruction("SUB x4,x3,x1");
cpu.loadInstruction("ADDI x8,x1,50");
cpu.loadInstruction("SW x3,300");
cpu.loadInstruction("LW x9,300");
cpu.loadInstruction("AND x5,x3,x2");
cpu.loadInstruction("OR x6,x1,x2");
cpu.loadInstruction("XOR x7,x1,x2");
```

---

## Sample Output

```
Executing: ADD x3,x1,x2
Executing: SUB x4,x3,x1
Executing: ADDI x8,x1,50
Executing: SW x3,300
Executing: LW x9,300
Executing: AND x5,x3,x2
Executing: OR x6,x1,x2
Executing: XOR x7,x1,x2

Final Register State

x1 = 10
x2 = 20
x3 = 30
x4 = 20
x5 = 20
x6 = 30
x7 = 30
x8 = 60
x9 = 30
```

---

## Learning Outcomes

Through this project, the following concepts were explored:

- Computer Architecture
- CPU Design
- RISC-V Instruction Set
- Instruction Fetch Cycle
- Instruction Decode Cycle
- Execution Pipeline Concepts
- Register File Design
- Memory Management
- Object-Oriented Programming in C++
- Modular Software Design

---

## Future Enhancements

- BEQ (Branch if Equal)
- BNE (Branch if Not Equal)
- JAL (Jump and Link)
- JALR
- Shift Instructions (SLL, SRL, SRA)
- Comparison Instructions (SLT, SLTI)
- Multiplication and Division Instructions
- File-based Assembly Program Loader
- Five-Stage Pipeline Simulation
- Cache Memory Simulation
- Branch Prediction
- Performance Statistics
- Interactive Command-Line Interface

---

## Technologies Used

- C++
- Object-Oriented Programming
- Git
- GitHub
- MSYS2 MinGW (G++)
- VS Code

---

## Author

**Raksha Melarkode S**

Electronics and Communication Engineering

M. S. Ramaiah University of Applied Sciences

Valen Labs Research Internship (Month 1)

---

## License

This project is intended for educational and research purposes.
