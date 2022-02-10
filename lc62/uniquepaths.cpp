#include "uniquepaths.h"

int Solution::uniquePaths(int m, int n) {
    int right = 1, down = 1;
    walkPath(right, down, m, n);
    return ret;
}

// 62个测试用例，过到第41个就超时了
void Solution::walkPath(int right, int down, int m, int n) {
    // int ret;
    
    if (right < n && down < m) {
        walkPath(right+1, down, m, n);
        walkPath(right, down+1, m, n);
    } else {
        ret ++;
    }
}

// 动态规划求解
int Solution::uniquePaths_dp(int m, int n) {
    // 动态申请数组，存储在堆空间
    // C++中一般是不能使用变量作为一个数组的长度的，必须使用常量。
    // 这是因为数组作为C++的内置数据类型，其空间分配在栈内存中，这部分空间的大小在编译时就要确定，
    // 不能等到运行时再分配。常量的值在编译时就能得到，而变量的值在运行时才能确定。
    int **status; 
    status = new int*[m];
    for(int i = 0; i < m; i ++) status[i] = new int[n];

    for (int i = 0; i < m; i ++) status[i][0] = 1;
    for (int j = 0; j < n; j ++) status[0][j] = 1;

    for (int i = 1; i < m; i ++) {
        for (int j = 1; j < n; j ++) {
            status[i][j] = status[i-1][j] + status[i][j-1];
        }
    }
    return status[m-1][n-1];
}