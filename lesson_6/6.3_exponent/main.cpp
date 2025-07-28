// Write a program that asks the user to input an integer, and tells the user
// whether the number is even or odd. Write a constexpr function called isEven()
// that returns true if an integer passed to it is even, and false otherwise.
// Use the remainder operator to test whether the integer parameter is even.
// Make sure isEven() works with both positive and negative numbers.

#include <iostream>

constexpr bool isEven(int num)
{
    // if x % 2 == 0, 2 divides evenly into our number, which means it must be an even number
    return (num % 2) == 0;
}

int main()
{
    int num{};
    std::cout << "Enter an integer: ";
    std::cin >> num;
    if (isEven(num)) {
        std::cout << num << " is even" << '\n';
    }
    else {
        std::cout << num << " is odd" << '\n';
    }

    return 0;
}
