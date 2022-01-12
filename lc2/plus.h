#ifndef _plus_h
#define _plus_h

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
ListNode* create_tail(ElemType* arr, int len);  // 尾插法
int get_linklist_len(ListNode* a);
ListNode* linklist_add(ListNode* a, ListNode* b);
void insert_node(ListNode* a, int val, int pos);
void delete_node(ListNode* a, int pos);
int query_node(ListNode* a, int val);
ListNode* get_node(ListNode* a, int pos);
void traverse_linklist(ListNode* a);

// 链表加法
ListNode* linklist_add(ListNode* a, ListNode* b, int a_len, int b_len);

#endif