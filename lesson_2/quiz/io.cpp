#include "io.h"
#include <iostream>

int readNumber()
{
    std::cout << "Enter an integer: ";

    int input{};
    std::cin >> input;

    return input;
}

void writeNumber(int x)
{
    std::cout << x << '\n';
}
