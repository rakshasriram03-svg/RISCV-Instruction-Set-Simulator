#ifndef REGISTER_FILE_H
#define REGISTER_FILE_H

class RegisterFile {
private:
    int registers[32];

public:
    RegisterFile();

    int readRegister(int index);

    void writeRegister(int index, int value);

    void reset();
};

#endif