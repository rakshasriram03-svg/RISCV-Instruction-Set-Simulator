#include "../include/cpu.h"

CPU::CPU() {
    programCounter = 0;
}

void CPU::reset() {
    programCounter = 0;
}

void CPU::incrementPC() {
    programCounter += 4;
}

int CPU::getPC() const {
    return programCounter;
}