#include "removeNthFromEnd.h"

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

ListNode* Solution::removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummy = new ListNode(0, head);  // 用于在链表只有一个元素的情况下
    ListNode *p, *q;
    p = dummy;
    q = head;
    for (int i = 0; i < n; i++) {
        q = q->next;
    } 
    while(q) {
        p = p->next;
        q = q->next;
    } 
    p->next = p->next->next;
    return dummy->next;
}