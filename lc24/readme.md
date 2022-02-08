## 两两交换链表中的节点

遇到的问题是：

没有考虑使用**重新定义声明**来重置

即如下，这样需要多些两个转换
``` c++
p->next = q->next;
q->next = p;
```

使用一个tmp用来更新p和q的指向，减少两个指针转换
``` c++
ListNode* p = tmp->next;
ListNode* q = tmp->next->next;
```
