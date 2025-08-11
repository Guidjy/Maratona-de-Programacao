#include <iostream>
# include "test.h"


int main() {
    std::cout << "Enter a number: ";
    int input;
    std::cin >> input;
    std::cout << "Input: " << input << std::endl;

    test();

    return 0;
}