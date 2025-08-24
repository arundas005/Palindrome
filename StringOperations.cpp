#include "StringOperations.h"

bool StringOperations::isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        char l = std::tolower(str[left]);
        char r = std::tolower(str[right]);
        if (l != r) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
