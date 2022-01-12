
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