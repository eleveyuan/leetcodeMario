#include <iostream>
#include <string>

#include "addBinary.h"

using namespace std;

int main() {
    string a = "1010", b = "1011";

    Solution sol;

    cout << sol.addBinary(a, b) << endl;

    return 0;
}