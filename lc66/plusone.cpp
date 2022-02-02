#include "plusone.h"


vector<int> Solution::plusOne(vector<int>& digits) {
    int len = digits.size();
    int inter=0, quotient=1, remainder=0;
    for (int i = len - 1; i >= 0 ; i --) {
        inter = digits[i] + quotient;
        quotient = inter / 10;  // 熵
        remainder = inter % 10; // 余数
        if (quotient  == 1) digits[i] = remainder;
        else digits[i] = inter;
    }
    if (quotient) {
        vector<int> ans(len + 1);
        ans[0] = 1;
        return ans;
    }
    return digits;
}