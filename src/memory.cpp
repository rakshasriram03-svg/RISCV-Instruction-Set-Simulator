#include "../include/memory.h"

Memory::Memory()
{
    dataMemory.resize(1024, 0);
}

void Memory::storeWord(int address, int value)
{
    if (address >= 0 && address < 1024)
    {
        dataMemory[address] = value;
    }
}

int Memory::loadWord(int address)
{
    if (address >= 0 && address < 1024)
    {
        return dataMemory[address];
    }

    return 0;
}
