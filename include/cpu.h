#ifndef CPU_H
#define CPU_H

class CPU {
private:
    int programCounter;

public:
    CPU();

    void reset();

    void incrementPC();

    void branch(int offset);

    int getPC() const;
};

#endif