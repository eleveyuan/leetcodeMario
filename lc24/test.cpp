#include <iostream>

#include "swappairs.h"

using namespace std;

int main() {
    int a[] = {1,2,3,4,5};
    Solution sol;
    ListNode* ll1 = sol.create_tail(a, 5);
    sol.traverseLinkList(ll1);

    ll1 = sol.swapPairs(ll1);
    sol.traverseLinkList(ll1);

    return 0;
}