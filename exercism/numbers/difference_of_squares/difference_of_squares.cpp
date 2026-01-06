#include <iostream>

#include "difference_of_squares.h"

namespace difference_of_squares {

    constexpr int square_of_sum(int n) {
        // Gaussian formula for sum of 1 to n
        int sum = n * (n + 1) / 2;
        return sum * sum;
    }

    constexpr int sum_of_squares(int n) {
        // Standard formula for sum of squares
        return n * (n + 1) * (2 * n + 1) / 6;
    }

    constexpr int difference(int n) {
        return square_of_sum(n) - sum_of_squares(n);
    }

}  // namespace difference_of_squares

int main(){
    std::cout << difference_of_squares::square_of_sum(5) << std::endl;
    std::cout << difference_of_squares::sum_of_squares(5) << std::endl;
    std::cout << difference_of_squares::difference(5) << std::endl;
}
