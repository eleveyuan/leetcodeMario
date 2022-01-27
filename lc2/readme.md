题目还是比较简单的，因为直接使用链表即可，主要是考虑进位问题，空间我考虑的是用长的链表直接存结果。

等长部分：

1. 对相加结果部分，直接求商，求余
2. 当前循环把余数存入链表
3. 下次循环，把商值加上

超出部分

1. 考虑等长部分最后的进位是否影响后续部分，即进位后，超出部分是否有‘9’的情况
2. 最后一个超出数据如果加上进位会等于10，需要开辟新空间存数字‘1’
3. 在c/c++ 中，开辟新空间的next指针置为空(NULL/nullptr)，否则会有不想看到的情况出现

``` c
/** * Definition for singly-linked list. * struct ListNode { *     int val; *     struct ListNode *next; * }; */
int get_linklist_len(struct ListNode* a) {    
    struct ListNode* hp = a;    
    int len = 0;    
    while (hp->next) {        
        len += 1;        
        hp = hp->next;    
    }    
    return len;
}

struct ListNode* addTwoNumbers(struct ListNode* a, struct ListNode* b) {    
    int a_len = get_linklist_len(a), b_len = get_linklist_len(b);    
    struct ListNode *p, *hp;    
    struct ListNode *q, *tail;    

    if (a_len >= b_len) { p = a; hp = a; q = b; }     
    else { p = b; hp = b; q = a; }   

    if (a_len < b_len) {        
        int tmp = b_len;        
        b_len = a_len;        
        a_len = tmp;    
    }    

    int inter=0, quotient=0, remainder=0;    
    int i = 0;    
    while(p != NULL || q != NULL) {        
        // printf("%d>%d %d %d \n", i, inter, quotient, remainder);       
        p->val = p->val + quotient;        
        if (i <= b_len) inter = p->val + q->val;        
        else inter = p->val;    
                 
        quotient = inter / 10;        
        remainder = inter % 10;        
        if (quotient) { p->val = remainder; }        
        else p->val = inter;                
        if (p) { tail = p; p = p->next;}        
        if (i <= b_len && q) q = q->next;        
        i ++;                   
    }       
    //printf("%d-%d \n", quotient, remainder);    
    if (quotient) {        
        tail->next = (struct ListNode*)malloc(sizeof(struct ListNode));        
        tail = tail->next;        
        tail->val = quotient;        
        tail->next = NULL;    
    }    
    return hp;
}
```

leetcode 链表结构与自己本地设计的不一样，这是提交到leetcode代码
``` c
int get_linklist_len(struct ListNode* a) {
    struct ListNode* hp = a;
    int len = 0;
    while (hp->next) {
        len += 1;
        hp = hp->next;
    }
    return len;
}

struct ListNode* addTwoNumbers(struct ListNode* a, struct ListNode* b) {
    int a_len = get_linklist_len(a), b_len = get_linklist_len(b);
    struct ListNode *p, *hp;
    struct ListNode *q, *tail;
 
    if (a_len >= b_len) { p = a; hp = a; q = b; } 
    else { p = b; hp = b; q = a; }

    if (a_len < b_len) {
        int tmp = b_len;
        b_len = a_len;
        a_len = tmp;
    }
    // std::cout << a_len << b_len << std::endl;

    int inter=0, quotient=0, remainder=0;
    int i = 0;
    while(p != NULL || q != NULL) {
        // printf("%d>%d %d %d \n", i, inter, quotient, remainder);
        p->val = p->val + quotient;

        if (i <= b_len) inter = p->val + q->val;
        else inter = p->val;

        quotient = inter / 10;
        remainder = inter % 10;
        if (quotient) { p->val = remainder; }
        else p->val = inter;
        
        if (p) { tail = p; p = p->next;}
        if (i <= b_len && q) q = q->next;
        i ++;
    }
    //printf("%d-%d \n", quotient, remainder);
    if (quotient) {
        tail->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        tail = tail->next;
        tail->val = quotient;
        tail->next = NULL;
    }
    return hp;
}
```