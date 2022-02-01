#include <iostream>
#include "removeNthFromEnd.h"

using namespace std;

int main() {
    int a[] = {1,2,3,4,5};
    Solution sol;
    ListNode* ll1 = sol.create_tail(a, 5);
    sol.traverseLinkList(ll1); 

    ListNode* ll2 = sol.removeNthFromEnd(ll1, 2);
    sol.traverseLinkList(ll2);

    return 0;
}