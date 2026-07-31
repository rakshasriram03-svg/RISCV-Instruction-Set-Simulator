#include "../include/execute.h"

int Execute::add(int a, int b)
{
    return a + b;
}

int Execute::sub(int a, int b)
{
    return a - b;
}

int Execute::andOp(int a, int b)
{
    return a & b;
}

int Execute::orOp(int a, int b)
{
    return a | b;
}

int Execute::xorOp(int a, int b)
{
    return a ^ b;
}

int Execute::addi(int a, int imm)
{
    return a + imm;
}