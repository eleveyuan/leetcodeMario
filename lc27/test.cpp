#include <iostream>
#include <vector>

#include "removeelement.h"


int main() {
    std::vector<int> a = {3, 3, 2, 2, 3};
    int n = 3;

    Solution sol;
    int m = sol.removeElement(a, 3);
    std::cout << m << std::endl;

    for (int i = 0; i < a.size(); i ++) {
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}