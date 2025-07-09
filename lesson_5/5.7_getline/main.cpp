#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name); // read the full line of the text into name

    std::cout << "Enter your favourite color: ";
    std::string color{};
    std::getline(std::cin >> std::ws, color); // read the full line of text into color

    std::cout << "Your name is " << name << " and your favourite color is " << color << '\n';

    return 0;
}


// If using std::getline() to read strings, use std::cin >> std::ws input
// manipulator to ignore leading whitespace. This needs to be done for each
// std::getline() call, as std::ws is not preserved across calls.
// https://www.learncpp.com/cpp-tutorial/introduction-to-stdstring/
