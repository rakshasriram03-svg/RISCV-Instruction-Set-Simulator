#include "../include/execute.h"

int Execute::execute(DecodedInstruction instruction, int value1, int value2)
{
    if(instruction.opcode=="ADD")
        return value1+value2;

    if(instruction.opcode=="SUB")
        return value1-value2;

    if(instruction.opcode=="AND")
        return value1 & value2;

    if(instruction.opcode=="OR")
        return value1 | value2;

    if(instruction.opcode=="XOR")
        return value1 ^ value2;
        
    if(instruction.opcode=="ADDI")
    return value1 + instruction.immediate;

    return 0;
}