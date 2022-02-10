#include <iostream>

#include "uniquepaths.h"

using namespace std;

int main() {
    int m = 3, n = 7;
    Solution sol;
    cout << sol.uniquePaths_dp(m, n) << endl;

    return 0;
}