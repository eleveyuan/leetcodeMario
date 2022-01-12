#include <iostream>
#include "plus.h"

int main() {
    int a[] = {2,4,9,9,9};
    int b[] = {5,6,4};
    ListNode* ll1 = create_tail(a, 5);
    ListNode* ll2 = create_tail(b, 3);
    ListNode* tmp = ll1;
    while (tmp->next) {
        tmp = tmp->next;
        visit(tmp->val);
    }
    std::cout << std::endl;
    tmp = ll2;
    while (tmp->next) {
        tmp = tmp->next;
        visit(tmp->val);
    }
    std::cout << std::endl;

    ListNode* p = linklist_add(ll1, ll2);
    
    while (p->next) {
        p = p->next;
        visit(p->val);
    }
    return 0;
}