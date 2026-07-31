#ifndef INSTRUCTION_MEMORY_H
#define INSTRUCTION_MEMORY_H

#include <vector>
#include <string>

class InstructionMemory
{
private:
    std::vector<std::string> instructions;

public:
    void addInstruction(std::string instruction);

    std::string fetch(int pc);

    int size();
};

#endif