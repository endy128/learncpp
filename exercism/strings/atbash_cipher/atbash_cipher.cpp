#include <iostream>
#include "atbash_cipher.h"


namespace atbash_cipher {
    std::string split(std::string str) {
        std::string split_str{};
        int count{0};
    
        for (char& c : str) {
            if (count == 5) {
                split_str += ' ';
                count = 0;
            }
            split_str += c;
            count++;
        }
        return split_str;
    }

    std::string cipher (std::string str) {
        const int RANGE_SUM = 97 + 122; // 219
        std::string enc_str{};

        // loop though and reverse the string
        for (char& c : str) {
            c = tolower(c);
            if (isdigit(c)) {
                enc_str += c;
            } else if (isalpha(c)) {
            c = RANGE_SUM - c;
            enc_str += c;
            }
        }
        return enc_str;
    }

    std::string encode (std::string str) {
        return split(cipher(str));
    }

    std::string decode (std::string str) {
        return cipher(str);
    }

}  // namespace atbash_cipher

int main(){
    std::cout << atbash_cipher::encode("ABCDEFghij88888klmnopqrstuvwxyz...") << '\n';
    std::cout << atbash_cipher::encode("zyxwvutsrqpon...mlkjihgfedcba") << '\n';
    std::cout << atbash_cipher::decode("vcvix rhn") << '\n';
    return 0;
}
