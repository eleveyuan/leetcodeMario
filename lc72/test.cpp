#include <iostream>
#include <string>

#include "minDistance.h"

using namespace std;

int main() {
    string s1 = "hello";
    string s2 = "ella";

    Solution sol;
    cout << sol.minDistance(s1, s2) << endl;

    return 0;
}