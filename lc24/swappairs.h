#ifndef __swappairs_h
#define __swappairs_h

#include <iostream>

using namespace std;

typedef int ElemType; 

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
    
    ListNode* swapPairs(ListNode* head); // 两两交换链表中的节点
};

#endif