#ifndef EXECUTE_H
#define EXECUTE_H

#include "decoder.h"

class Execute
{
public:

    int execute(DecodedInstruction instruction, int value1, int value2);
};

#endif