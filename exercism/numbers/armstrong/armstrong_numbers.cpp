#include <iostream>

#include "armstrong_numbers.h"

namespace armstrong_numbers {

    bool is_armstrong_number(int a){
        int acc{0};
        std::string arms{std::to_string(a)};
        for (size_t i = 0; i < arms.length(); i++) {
            acc += pow(arms[i] - '0', arms.length());
        }
        return acc == a;
    }

}  // namespace armstrong_numbers


int main(){
    std::cout << armstrong_numbers::is_armstrong_number(9) << '\n';
    std::cout << armstrong_numbers::is_armstrong_number(10) << '\n';
    std::cout << armstrong_numbers::is_armstrong_number(153) << '\n';
    std::cout << armstrong_numbers::is_armstrong_number(154) << '\n';
    return 0;
}
