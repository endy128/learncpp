#include <iostream>

int main() {

    std::cout << "Enter an integer: ";
    int a{};
    std::cin >> a;

    std::cout << "Enter another integer: ";
    int b{};
    std::cin >> b;

    std::cout << a << " + " << b << " is " << a + b << ".\n";
    std::cout << a << " - " << b << " is " << a - b << ".\n";

    return 0;
}
