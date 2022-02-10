#ifndef __uniquepaths_h
#define __uniquepaths_h

#include <iostream>

using namespace std;

class Solution {
public:
    int ret = 0;
    int uniquePaths(int m, int n); // 不同的路径
    void walkPath(int right, int down, int m, int n); // 递归walk路径

    int uniquePaths_dp(int m, int n);  // 不同的路径动态规划
};

#endif 
