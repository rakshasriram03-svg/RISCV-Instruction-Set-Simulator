#include "../include/cpu.h"

#include <iostream>

CPU::CPU()
{
    pc = 0;

    rf.write(1,10);
    rf.write(2,20);
    memory.write(100,999);
    memory.write(200,555);
}

void CPU::loadInstruction(std::string instruction)
{
    im.addInstruction(instruction);
}

void CPU::run()
{
    while(pc < im.size())
    {
        std::string instruction = im.fetch(pc);

        DecodedInstruction d = decoder.decode(instruction);

        int value1 = rf.read(d.rs1);

int value2;

if(d.isImmediate)
{
    value2 = d.immediate;
}
else
{
    value2 = rf.read(d.rs2);
}

       if(d.opcode=="LW")
{
    int value = memory.read(d.address);

    rf.write(d.rd,value);
}
else if(d.opcode=="SW")
{
    memory.write(d.address,rf.read(d.rs1));
}
else
{
    int result = alu.execute(d,value1,value2);

    rf.write(d.rd,result);
}

std::cout<<"Executing: "<<instruction<<std::endl;

pc++;
    }

    std::cout<<"\nFinal Register State\n";

    rf.dump();
}