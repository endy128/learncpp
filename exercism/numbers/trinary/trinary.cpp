#include "trinary.h"
#include <iostream>

namespace trinary {

    int to_decimal(std::string str)
    {
        int result{0};
        for (int i = 0; i < str.length(); i++) {
            // Return 0 if the first item isn't a number
            if (!isdigit(str.at(i)))
                return 0;

            int n{int(str.at(i)) - '0'}; // Adjust for ASCII value
            int exponent{static_cast<int>(str.length() - i - 1)};
            for (int j = 0; j < exponent; j++) {
                n *= 3;
            }
            result += n;
        }
        return result;
    }

} // namespace trinary

int main()
{
    std::cout << trinary::to_decimal("102012") << std::endl;
}
