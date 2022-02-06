#include <iostream>
#include <vector>

#include "sumOfUnique.h"

using namespace std;

int main() {
    Solution sol;
    vector<int> t = {1, 1, 1, 1}; // {1, 2, 3, 4, 5}

    cout << sol.sumOfUnique(t) << endl;

    return 0;
}