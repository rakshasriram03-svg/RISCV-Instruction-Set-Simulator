#include "../include/memory.h"

Memory::Memory()
{
    for(int i=0;i<1024;i++)
        mem[i]=0;
}

void Memory::write(int address,int value)
{
    if(address>=0 && address<1024)
        mem[address]=value;
}

int Memory::read(int address)
{
    if(address>=0 && address<1024)
        return mem[address];

    return 0;
}