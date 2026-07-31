#include "../include/register_file.h"

RegisterFile::RegisterFile() {
    reset();
}

void RegisterFile::reset() {
    for (int i = 0; i < 32; i++) {
        registers[i] = 0;
    }
}

int RegisterFile::readRegister(int index) {
    return registers[index];
}

void RegisterFile::writeRegister(int index, int value) {
    if (index != 0) {
        registers[index] = value;
    }
}