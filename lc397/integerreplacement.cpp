#include "integerReplacement.h"

bool Solution::is_odd(int n) {
    return n % 2 == 0 ? false : true;
}


// 无法通过样例
int Solution::integerReplacement(int n) {
    int ret = 0, m = 0;
    if (n == 1) {
        return ret;
    }
    if (is_odd(n)) {
        n += 1;
        ret = 1;
    }
    while (!(n == 1)) {
        n = n / 2;
        m = n & 1;
        n += m;
        ret ++;
    }
    return ret;
}