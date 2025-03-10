#include <iostream>

bool isPrime(int x)
{
    // A prime number is a whole number greater than 1
    // that can only be divided evenly by 1 and itself.
    if (x <= 1) {
        return false;
    }

    for (int i{2}; i <= x / 2; ++i) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}

int main()
{
    int x{};
    std::cout << "Enter a positive integer: ";
    std::cin >> x;

    if (isPrime(x)) {
        std::cout << x << " is a prime number\n";
    }
    else {
        std::cout << x << " is not a prime number\n";
    }

    return 0;
}
