#ifndef __integerreplacement_h
#define __integerreplacement_h

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
private:
    unordered_map<int, int> memo;
public:
    bool is_odd(int n);
    int integerReplacement(int n);  // 最长快乐字符串
};

#endif 