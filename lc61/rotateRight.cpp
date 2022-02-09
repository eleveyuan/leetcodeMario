#include "rotateRight.h"

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

ListNode* Solution::rotateRight(ListNode* head, int k) {
    if (k == 0 || head == nullptr || head->next == nullptr) {
        return head;
    }
    ListNode* p = head;
    ListNode* q = head;
    int len = 1; // 链表长度

    while (q->next) {
        q = q->next;
        len ++;
    }
    q->next = p;  // 形成闭环

    int step = len - (k % len);
    for (int i = 0; i < step; i ++) {
        p = p->next;
        q = q->next;
    }
    q->next = nullptr;
    head = p;
    return head;
}