#include <gtest/gtest.h>
#include "StringOperations.h"

TEST(StringOperationsTest, PalindromeTrue) {
    StringOperations ops;
    EXPECT_TRUE(ops.isPalindrome("madam"));
    EXPECT_TRUE(ops.isPalindrome("racecar"));
    EXPECT_TRUE(ops.isPalindrome("a"));
    EXPECT_TRUE(ops.isPalindrome("") );
}

TEST(StringOperationsTest, PalindromeFalse) {
    StringOperations ops;
    EXPECT_FALSE(ops.isPalindrome("hello"));
    EXPECT_FALSE(ops.isPalindrome("world"));
    EXPECT_FALSE(ops.isPalindrome("palindrome"));
}
