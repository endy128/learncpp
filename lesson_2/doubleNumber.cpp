#include <iostream>

int doubleNumber(int x) 
{ 
    return 2 * x; 
}

int getNumber() 
{ 
    int input{};
    std::cout << "Enter an interger: ";
    std::cin >> input;

    return input;
}

int main() 
{
    std::cout << doubleNumber(getNumber()) << '\n';
    return 0;
}
