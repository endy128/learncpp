#include <iostream>

#include "hexadecimal.h"

namespace hexadecimal {

    int convert(std::string hex)
    {
        int acc{};
        int exp{0};
        // loop backwards through the string
        for (auto it = hex.rbegin(); it != hex.rend(); ++it) {
            char ch = *it;

            // guardrail
            if (ch > 'f') return 0;

            // convert each char to the relevant number
            // and multiply it by its power of 16
            if (ch > '9') {
                acc +=  (ch - 'a' + 10) * (pow(16, exp));
            }
            else {
                acc +=  (ch - '0') * (pow(16, exp));
            }
            exp ++;
        }
        return acc;
    }

} // namespace hexadecimal


// Check out this bad boy though: https://exercism.org/tracks/cpp/exercises/hexadecimal/solutions/serpensta
int main()
{
    std::cout << hexadecimal::convert("1") << '\n'; // 1
    std::cout << hexadecimal::convert("c") << '\n'; // 12
    std::cout << hexadecimal::convert("10") << '\n'; // 16
    std::cout << hexadecimal::convert("af") << '\n'; // 175
    std::cout << hexadecimal::convert("100") << '\n'; // 256

    // hexadecimal::convert("1"); // 1
    // hexadecimal::convert("c"); // 12
    // hexadecimal::convert("10"); // 16
    // hexadecimal::convert("af"); // 175
    // hexadecimal::convert("c"); // 256
}
