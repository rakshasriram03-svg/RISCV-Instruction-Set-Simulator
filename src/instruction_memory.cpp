#include "../include/instruction_memory.h"

void InstructionMemory::addInstruction(std::string instruction)
{
    instructions.push_back(instruction);
}

std::string InstructionMemory::fetch(int pc)
{
    if(pc>=0 && pc<instructions.size())
        return instructions[pc];

    return "";
}

int InstructionMemory::size()
{
    return instructions.size();
}