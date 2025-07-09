// Question #4

// Write a program that asks for the name and age of two people, then prints which person is older.

// Here is the sample output from one run of the program:

// Enter the name of person #1: John Bacon
// Enter the age of John Bacon: 37
// Enter the name of person #2: David Jenkins
// Enter the age of David Jenkins: 44
// David Jenkins (age 44) is older than John Bacon (age 37).

#include <iostream>
#include <string>
#include <string_view>

std::string getName(int num)
{
    std::cout << "Enter the name of person #" << num << ": ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    return name;
}

int getAge(std::string_view sv)  // can use string_view as the string is not destroyed while sv is in use
{
    std::cout << "Enter the age of " << sv << ": ";
    int age{};
    std::cin >> age;
    return age;
}

void printOlder(std::string_view name1, int age1, std::string_view name2, int age2)
{
    if (age1 >= age2) {
        std::cout << name1 << " (age " << age1 << ") is older than " << name2 << " (age " << age2 << ")." << '\n';
    }
    else {
        std::cout << name2 << " (age " << age2 << ") is older than " << name1 << " (age " << age1 << ")." << '\n';
    }
}

int main()
{
    std::string name1{getName(1)};
    int age1{getAge(name1)};

    std::string name2{getName(2)};
    int age2{getAge(name2)};

    printOlder(name1, age1, name2, age2);

    return 0;
}
