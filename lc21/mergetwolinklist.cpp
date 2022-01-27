#include "mergetwolinklist.h"

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
    // 不保留第一个空节点，也即create_tail_without_placehold_node
    // return p->next;
}

ListNode* create_tail(ElemType* arr, int len) {
    ListNode* p = (ListNode*)malloc(sizeof(ListNode));  // head node
    ListNode* hp = p;  // head pointer

    for (int i = 0; i < len; i ++) {
        ListNode* q = (ListNode*)malloc(sizeof(ListNode));
        q->val = arr[i];
        q->next = nullptr;
        hp->next = q;
        hp = hp->next;
    }
    return p;
    // 不保留第一个空节点，也即create_tail_without_placehold_node
    // return p->next;
}

ListNode* create_tail_without_placehold_node(ElemType* arr, int len) {
    ListNode* p = (ListNode*)malloc(sizeof(ListNode));
    p->val = arr[0];
    ListNode* hp = p;  // head pointer
    for (int i = 1; i < len; i ++) {
        ListNode* q = (ListNode*)malloc(sizeof(ListNode));
        q->val = arr[i];
        q->next = nullptr;
        hp->next = q;
        hp = hp->next;
    }
    return p;
}

ListNode* merge2linklist(ListNode* arr1, ListNode* arr2) {
    ListNode* hp = (ListNode*)malloc(sizeof(ListNode));
    ListNode* h = hp;
    while (arr1 && arr2) {
        if(arr1->val > arr2->val) {
            h->next = arr2;
            arr2 = arr2->next;
        } else {
            h->next = arr1;
            arr1 = arr1->next;
        }
        h = h->next;
    }
    if (arr1) {
        h->next = arr1;
    } else {
        h->next = arr2;
    }

    return hp->next;
}
