
#include <iostream>
#include <string>
#include "StringOperations.h"

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    StringOperations ops;
    if (ops.isPalindrome(input)) {
        std::cout << "It is a palindrome." << std::endl;
    } else {
        std::cout << "It is not a palindrome." << std::endl;
    }
    return 0;
}
