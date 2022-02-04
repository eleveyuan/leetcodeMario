#include <iostream>
#include <vector>

#include "countGoodRectangles.h"

using namespace std;

int main() {
    Solution sol;
    // vector<vector<int> > vec(3, vector<int>(2));  // 初始化二维vector: 3*2
    vector<vector<int> > vec = {
        {5,8},
        {3,9},
        {5,12},
        {16,5}
    };  // 这种初始化方式需要c++11

    cout << sol.countGoodRectangles(vec) << endl;
    return 0;
}