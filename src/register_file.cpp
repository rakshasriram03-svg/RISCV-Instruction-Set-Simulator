#include "../include/register_file.h"

RegisterFile::RegisterFile()
{
    for(int i=0;i<32;i++)
        reg[i]=0;
}

int RegisterFile::read(int index)
{
    return reg[index];
}

void RegisterFile::write(int index,int value)
{
    if(index!=0)
        reg[index]=value;
}

void RegisterFile::dump()
{
    std::cout<<"------ Registers ------"<<std::endl;

    for(int i=0;i<32;i++)
        std::cout<<"x"<<i<<" = "<<reg[i]<<std::endl;
}