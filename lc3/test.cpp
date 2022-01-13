#include <iostream>
#include "longestsubstring.h"

int main() {
    string s("abcbdaefcb"); // aaaab
    int len = lengthOfLongestSubstring(s);
    std::cout << len << std::endl;
    return 0;
}