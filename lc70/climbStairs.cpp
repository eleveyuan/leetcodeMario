#include "climbStairs.h"

int Solution::climbStairs(int n) {
    int ret=1;
    int f_1 = 0, f_2 = 0; // f(n-1), f(n-2)
    for (int i = 0; i < n; i ++) {
        f_2 = f_1;
        f_1 = ret;
        ret = f_1 + f_2;
    }
    return ret;
}