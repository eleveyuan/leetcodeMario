#include "swappairs.h"

ListNode* Solution::create_head(ElemType* arr, int len) {
    ListNode* p = (ListNode*)malloc(sizeof(ListNode));  // head node
    p->next = nullptr;  // must init to a null pointer
    for (int i = 0; i < len; i ++) {
        ListNode* q = (ListNode*)malloc(sizeof(ListNode));
        q->val = arr[i];
        q->next = p->next;
        p->next = q;
    }
    return p->next;
}

ListNode* Solution::create_tail(ElemType* a, int len) {
    ListNode* p = (ListNode*)malloc(sizeof(ListNode));  // head node
    ListNode* hp = p;  // head pointer

    for (int i = 0; i < len; i ++) {
        ListNode* q = (ListNode*)malloc(sizeof(ListNode));
        q->val = a[i];
        q->next = nullptr;
        hp->next = q;
        hp = hp->next;
    }
    return p->next;
}

void Solution::traverseLinkList(ListNode* ll) {
    while (ll) {
        cout << ll->val << ' ';
        ll = ll->next;
    }
    cout << endl;
}

ListNode* Solution::swapPairs(ListNode* head) {
    ListNode* dhead = new ListNode(0);
    dhead->next = head;
    ListNode* tmp = dhead;
    while(tmp->next && tmp->next->next) {
        ListNode* p = tmp->next;
        ListNode* q = tmp->next->next;
        tmp->next = q;
        p->next = q->next;
        q->next = p;
        tmp = p;
    }
    return dhead->next;
}