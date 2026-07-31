#include "../include/decoder.h"
#include <sstream>

DecodedInstruction Decoder::decode(std::string instruction)
{
    DecodedInstruction d;

    d.isImmediate = false;
    d.immediate = 0;
    d.address = 0;

    for(char &c : instruction)
        if(c==',')
            c=' ';

    std::stringstream ss(instruction);

    ss >> d.opcode;

    if(d.opcode=="LW")
    {
        std::string rd;

        ss >> rd;
        ss >> d.address;

        d.rd = std::stoi(rd.substr(1));

        return d;
    }

    if(d.opcode=="SW")
    {
        std::string rs;

        ss >> rs;
        ss >> d.address;

        d.rs1 = std::stoi(rs.substr(1));

        return d;
    }

    std::string rd, rs1, rs2;

    ss >> rd;
    ss >> rs1;
    ss >> rs2;

    d.rd = std::stoi(rd.substr(1));
    d.rs1 = std::stoi(rs1.substr(1));

    if(rs2[0]=='x')
    {
        d.rs2 = std::stoi(rs2.substr(1));
    }
    else
    {
        d.isImmediate = true;
        d.immediate = std::stoi(rs2);
        d.rs2 = -1;
    }

    return d;
}