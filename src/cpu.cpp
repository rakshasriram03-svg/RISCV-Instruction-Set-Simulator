#include "../include/cpu.h"

CPU::CPU()
{
    programCounter = 0;
}

void CPU::reset()
{
    programCounter = 0;
}

void CPU::incrementPC()
{
    programCounter += 4;
}

void CPU::branch(int offset)
{
    programCounter += offset;
}

int CPU::getPC() const
{
    return programCounter;
}