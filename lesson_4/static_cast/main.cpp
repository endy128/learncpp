#include <cstdint>
#include <iostream>

int main() {
    std::cout << "Enter a single character: ";
    char ch{};
    std::cin >> ch;

    std::cout << "The ASCII value of " << ch << " is " << static_cast<int>(ch) << '\n';

    return 0;

}
