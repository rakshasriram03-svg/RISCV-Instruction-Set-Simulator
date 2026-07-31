#include "../include/cpu.h"

int main()
{
    CPU cpu;

    cpu.loadInstruction("ADD x3,x1,x2");
    cpu.loadInstruction("SUB x4,x3,x1");
    cpu.loadInstruction("ADDI x8,x1,50");

    cpu.loadInstruction("SW x3,300");
    cpu.loadInstruction("LW x9,300");

    cpu.loadInstruction("AND x5,x3,x2");
    cpu.loadInstruction("OR x6,x1,x2");
    cpu.loadInstruction("XOR x7,x1,x2");

    cpu.run();

    return 0;
}