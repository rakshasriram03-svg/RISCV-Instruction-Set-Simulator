#include <iostream>
#include "../include/cpu.h"
#include "../include/register_file.h"
#include "../include/instruction_memory.h"
#include "../include/decoder.h"
#include "../include/execute.h"
#include "../include/memory.h"

int main()
{
    std::cout << "====================================\n";
    std::cout << " RISC-V Instruction Set Simulator\n";
    std::cout << "====================================\n\n";

    // Create CPU components
    CPU cpu;
    RegisterFile registers;
    InstructionMemory instructionMemory;
    Decoder decoder;
    Execute execute;
    Memory memory;

    // Load sample instructions
    instructionMemory.loadInstruction("addi x1,x0,5");
    instructionMemory.loadInstruction("addi x2,x0,10");
    instructionMemory.loadInstruction("add x3,x1,x2");

    std::cout << "Instructions Loaded: "
              << instructionMemory.getInstructionCount()
              << "\n\n";

    // Fetch first instruction
    std::string instruction =
        instructionMemory.fetchInstruction(cpu.getPC());

    std::cout << "Fetched Instruction: "
              << instruction
              << std::endl;

    // Decode
    decoder.decode(instruction);

    // Demonstrate execution
    registers.writeRegister(1,5);
    registers.writeRegister(2,10);

    int result =
        execute.add(
            registers.readRegister(1),
            registers.readRegister(2));

    registers.writeRegister(3,result);

    std::cout << "\nExecution Result\n";
    std::cout << "x1 = "
              << registers.readRegister(1)
              << std::endl;

    std::cout << "x2 = "
              << registers.readRegister(2)
              << std::endl;

    std::cout << "x3 = "
              << registers.readRegister(3)
              << std::endl;

    cpu.incrementPC();

    std::cout << "\nProgram Counter = "
              << cpu.getPC()
              << std::endl;

    return 0;
}