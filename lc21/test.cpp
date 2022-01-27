#include "mergetwolinklist.h"
#include <iostream>

int main() {
    int a[] = {2,4,9,9,9};
    int b[] = {5,6,8};
    ListNode* ll1 = create_tail_without_placehold_node(a, 5);
    ListNode* ll2 = create_tail_without_placehold_node(b, 3);
    ListNode* tmp = ll1;
    while (tmp) {
        visit(tmp->val);
        tmp = tmp->next;
    }
    std::cout << std::endl;
    
    tmp = ll2;
    while (tmp) {
        visit(tmp->val);
        tmp = tmp->next;
    }
    std::cout << std::endl;

    tmp = merge2linklist(ll1, ll2);
    while (tmp) {
        visit(tmp->val);
        tmp = tmp->next;
    }
    return 0;
}