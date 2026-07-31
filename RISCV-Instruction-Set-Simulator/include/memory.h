#ifndef MEMORY_H
#define MEMORY_H

#include <vector>

class Memory {
private:
    std::vector<int> dataMemory;

public:
    Memory();

    void storeWord(int address, int value);

    int loadWord(int address);
};

#endif
