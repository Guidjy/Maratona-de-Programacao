#include <iostream>
#include "test.h"

int main(int, char**){
    std::cout << "Hello, from main!\n";

    int n;
    std::cout << "Type a number: ";
    std::cin >> n;
    std::cout << "number: " << n << std::endl;

    test();
}
