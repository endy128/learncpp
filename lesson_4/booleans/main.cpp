#include <iostream>

int main() {
    std::cout << true << '\n'; // true evaluates to 1
    std::cout << !true << '\n'; // !true evaluates to 0

    bool b {false};
    std::cout << b << '\n'; // b is false, evaluates to 0
    std::cout << !b << '\n'; // !b is true, evaluates to 1

    std::cout << true << '\n';
    std::cout << false << '\n';

    std::cout << std::boolalpha; // print bools as true or false

    std::cout << true << '\n';
    std::cout << false << '\n';

    std::cout << std::noboolalpha; // print bools as 1 or 0

    std::cout << true << '\n';
    std::cout << false << '\n';

    std::cout << std::boolalpha; // print bools as true or false
    bool b1 = 4; // copy initialization allows implicit conversion from int to bool
    std::cout << b1 << '\n'; // prints true

    bool b2 = 0; // copy initialization allows implicit conversion from int to bool
    std::cout << b2 << '\n'; // prints false    

    return 0;
}
