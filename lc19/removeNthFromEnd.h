#ifndef __removenthfromend_h
#define __removenthfromend_h

#include <iostream>

using namespace std;

typedef int ElemType;

// 链表节点结构体
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    /**
     * 链表基本操作
     */
    ListNode* create_head(ElemType* arr, int len);  // 头插法
    ListNode* create_tail(ElemType* arr, int len);  // 尾插法
    void traverseLinkList(ListNode* ll);

    ListNode* removeNthFromEnd(ListNode* head, int n);
};

#endif 