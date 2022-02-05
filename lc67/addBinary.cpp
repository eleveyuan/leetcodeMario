#include "addBinary.h"

string Solution::addBinary(string a, string b) {
    string ans;
    reverse(a.begin(), a.end()); // 翻转string
    reverse(b.begin(), b.end());

    int n = max(a.size(), b.size()), round = 0; // round用于进位
    for (size_t i = 0; i < n; ++i) {
        round += i < a.size() ? (a[i] == '1') : 0;
        round += i < b.size() ? (b[i] == '1') : 0;
        ans.push_back((round % 2) ? '1' : '0');
        round /= 2;
    }

    if (round) {
        ans.push_back('1');
    }
    reverse(ans.begin(), ans.end());

    return ans;
}