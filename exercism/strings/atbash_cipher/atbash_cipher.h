#ifndef ATBASH_CIPHER_H
#define ATBASH_CIPHER_H

#include <string>

namespace atbash_cipher {

    std::string encode (std::string str);
    std::string decode (std::string str);
    std::string cipher (std::string str);
    std::string split(std::string str);

}  // namespace atbash_cipher

#endif
