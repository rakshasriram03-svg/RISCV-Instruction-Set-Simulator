#ifndef CPU_H
#define CPU_H

#include "register_file.h"
#include "instruction_memory.h"
#include "decoder.h"
#include "execute.h"
#include "memory.h"

class CPU
{
private:
    RegisterFile rf;
    InstructionMemory im;
    Decoder decoder;
    Execute alu;
    Memory memory;

    int pc;

public:
    CPU();

    void loadInstruction(std::string instruction);

    void run();
};

#endif