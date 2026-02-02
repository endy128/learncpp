#include <iostream>

#include "luhn.h"
#include <algorithm>
#include <cctype>

namespace luhn {

    bool valid(std::string code)
    {
        int acc = 0;
        int digit_count = 0;
        bool double_digit = false;

        for (auto it = code.rbegin(); it != code.rend(); ++it) {
            char ch = *it;
            if (std::isspace(ch))
                continue;
            if (!std::isdigit(ch))
                return false; // Found a letter? Invalid!

            int n = ch - '0';
            if (double_digit) {
                n *= 2;
                if (n > 9)
                    n -= 9;
            }
            acc += n;

            double_digit = !double_digit; // Flip the switch
            digit_count++;
        }

        return digit_count > 1 && (acc % 10 == 0);
    }
} // namespace luhn

int main()
{
    std::cout << luhn::valid("4539 3195 0343 6467") << std::endl;
    std::cout << luhn::valid("059") << std::endl;
    std::cout << luhn::valid("066 123 478") << std::endl;
    // std::cout << luhn::valid("4539 3195 0343 6467") << std::endl;
}


/*
1. Header Hygiene
You are using std::isdigit and std::isblank. In C++, these are defined in the <cctype> header. While some compilers include this automatically inside <algorithm> or <string>, you should always include it explicitly to ensure your code works on all platforms.

2. Efficiency: The "One-Pass" Mindset
Currently, your code does three passes over the data:

Pass 1: Create string s (allocates memory and copies).

Pass 2: std::reverse(s) (swaps elements).

Pass 3: Loop through s to sum.

In production code, we try to avoid unnecessary memory allocations (creating s) and extra passes. You can actually do all of this in one pass by iterating through the original string backward.

3. Argument Passing
You are passing std::string code by value: bool valid(std::string code)

This creates a full copy of the input string when the function is called. Since you aren't modifying the original input (you're creating a new one called s), it's better to pass by const reference: bool valid(const std::string& code)

4. A "Toggle" instead of Modulo
Using i % 2 == 1 is perfectly correct. However, if you iterate backward and skip spaces on the fly, your index i becomes unreliable. A common pattern is to use a simple bool toggle.
*/
