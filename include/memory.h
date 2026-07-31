#ifndef MEMORY_H
#define MEMORY_H

class Memory
{
private:
    int mem[1024];

public:
    Memory();

    void write(int address, int value);

    int read(int address);
};

#endif