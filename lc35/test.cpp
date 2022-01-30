#include <iostream>
#include <vector>
#include "searchinsert.h"

using namespace std;

int main() {
    vector<int> a = {1,3};  // 这种初始化方式c++11才能编译通过
    int target = 2;
    Solution sol;
    cout << sol.searchInsert(a, target) << endl;

    return 0;
}