#include "binary_search.h"
#include <cstddef>
#include <iostream>
#include <stdexcept>

int binary_search(const std::vector<int> &arr, int num)
{
    int lo{0};
    int hi{static_cast<int>(arr.size())};

    if (arr.empty()) {
        throw std::domain_error("Vector is empty");
    }
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        if (num == arr[mid]) {
            return mid;
        }
        if (num < arr[mid]) {
            hi = mid;
        }
        if (num > arr[mid]) {
            lo = mid + 1;
        }
    }
    throw std::domain_error("Number not found");
}

int main()
{
    const std::vector<int> arr{1,2,3,4,5,6,7,8,9,10};
    int num{0};
    std::cout << "Enter a number between 0-13: ";
    std::cin >> num;
    int ans{binary_search(arr, num)};
    if (ans >= 0) {
        std::cout << "Found it: " << ans << '\n';
    }
    else {
        std::cout << "Not found, return code: " << ans << '\n';
    }

    return 0;
}
