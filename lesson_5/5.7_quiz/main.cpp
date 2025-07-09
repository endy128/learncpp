#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    int age{};
    std::cout << "Enter your age: ";
    std::cin >> age;

    int nameLen{age + static_cast<int>(std::ssize(name))};
    std::cout << "Your age + length of name is: " << nameLen << '\n';

    return 0;
}
