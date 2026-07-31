#ifndef DECODER_H
#define DECODER_H

#include <string>

struct DecodedInstruction
{
  
    std::string opcode;

    int rd;
    int rs1;
    int rs2;

    int immediate;
    bool isImmediate;

    int address;

};

class Decoder
{
public:
    DecodedInstruction decode(std::string instruction);
};

#endif