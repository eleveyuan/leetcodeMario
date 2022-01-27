#ifndef __mergetwolinklist_h
#define __mergetwolinklist_h

#include <iostream>
#include <stdio.h>

typedef int ElemType;

// 链表节点
typedef struct ListNode {
    int val;
    struct ListNode* next;
} ListNode;
typedef struct ListNode *LinkList;

void visit(ElemType e);
/**
 * 链表基本操作
 */
ListNode* create_head(ElemType* arr, int len);  // 头插法
ListNode* create_tail(ElemType* arr, int len);  // 尾插法-第一个node不参与存值
ListNode* create_tail_without_placehold_node(ElemType* arr, int len); // 尾插法-第一个元素参与存值
ListNode* merge2linklist(ListNode* arr1, ListNode* arr2);  // 合并两个链表

#endif 
