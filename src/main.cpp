
#include "../include/cpu.h"
#include <iostream>
#include <string>

int main()
{
    CPU cpu;

    int n;

    std::cout << "=============================\n";
    std::cout << "   RISC-V Instruction Simulator\n";
    std::cout << "=============================\n\n";

    std::cout << "Enter number of instructions: ";
    std::cin >> n;

    std::cin.ignore();

    for(int i = 0; i < n; i++)
    {
        std::string instruction;

        std::cout << "Instruction " << i + 1 << ": ";

        std::getline(std::cin, instruction);

        cpu.loadInstruction(instruction);
    }

    std::cout << "\nExecuting Program...\n\n";

    cpu.run();

    return 0;
}
