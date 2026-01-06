#include <iostream>
#include "rotational_cipher.h"

namespace rotational_cipher {

    std::string rotate(std::string str, int key)
    {
        std::string cipher{};
        for (char c : str) {
            if (isalpha(c)) {
                char base{(islower(c)) ? 'a' : 'A'};
                cipher.push_back((c - base + key + 26) % 26 + base);
            } else {
                cipher.push_back(c);
            }
        }
        return cipher;
    }

} // namespace rotational_cipher

int main()
{
    std::cout << rotational_cipher::rotate("The quick brown fox jumps over the lazy dog.", 13);
}
