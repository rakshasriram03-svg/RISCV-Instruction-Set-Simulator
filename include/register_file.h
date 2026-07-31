#ifndef REGISTER_FILE_H
#define REGISTER_FILE_H

#include <iostream>

class RegisterFile {
private:
    int reg[32];

public:
    RegisterFile();

    int read(int index);

    void write(int index, int value);

    void dump();
};

#endif