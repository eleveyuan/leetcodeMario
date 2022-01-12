#include "plus.h"

void visit(ElemType e) {
    std::cout << e << ' ';
};

ListNode* create_head(ElemType* arr, int len) {
    ListNode* p = (ListNode*)malloc(sizeof(ListNode));  // head node
    p->next = nullptr;  // must init to a null pointer
    for (int i = 0; i < len; i ++) {
        ListNode* q = (ListNode*)malloc(sizeof(ListNode));
        q->val = arr[i];
        q->next = p->next;
        p->next = q;
    }
    return p;
}

ListNode* create_tail(ElemType* a, int len) {
    ListNode* p = (ListNode*)malloc(sizeof(ListNode));  // head node
    ListNode* hp = p;  // head pointer

    for (int i = 0; i < len; i ++) {
        ListNode* q = (ListNode*)malloc(sizeof(ListNode));
        q->val = a[i];
        q->next = nullptr;
        hp->next = q;
        hp = hp->next;
    }
    return p;
}


int get_linklist_len(ListNode* a) {
    ListNode* hp = a;
    int len = 0;
    while (hp->next) {
        len += 1;
        hp = hp->next;
    }
    return len;
}


ListNode* linklist_add(ListNode* a, ListNode* b) {
    int a_len = get_linklist_len(a), b_len = get_linklist_len(b);
    ListNode *p, *hp;
    ListNode* q;
 
    if (a_len >= b_len) { p = a; hp = a; q = b; } 
    else { p = b; hp = b; q = a; }

    if (a_len < b_len) {
        int tmp = b_len;
        b_len = a_len;
        a_len = tmp;
    }
    std::cout << a_len << b_len << std::endl;

    int inter=0, quotient=0, remainder=0;
    int i = 0;
    while(p->next || q->next) {
        p = p->next;
        if (i < b_len) q = q->next;
        p->val = p->val + quotient;

        if (i < b_len) inter = p->val + q->val;
        else inter = p->val;

        quotient = inter / 10;
        remainder = inter % 10;
        if (quotient) { p->val = remainder; }
        else p->val = inter;
        i ++;
    }
    if (quotient) {
        p->next = (ListNode*)malloc(sizeof(ListNode));
        p = p->next;
        p->val = quotient;
        p->next = nullptr;
    }
    return hp;
}