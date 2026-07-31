#include "../include/instruction_memory.h"

void InstructionMemory::loadInstruction(const std::string& instruction) {
    instructions.push_back(instruction);
}

std::string InstructionMemory::fetchInstruction(int pc) {
    int index = pc / 4;

    if (index >= 0 && index < instructions.size()) {
        return instructions[index];
    }

    return "";
}

int InstructionMemory::getInstructionCount() const {
    return instructions.size();
}