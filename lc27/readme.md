题目主要需要考虑两个
1. 引用传值
2. 常量内存

这意味只能动原始的传递进来的数组

“删除”的方法则是通过覆盖将不同的数据覆盖到前面的位置。然后返回最终不同的数据的长度，通过长度控制访问

需要用到双指针，一个用来walk，寻找需要移除的，一个用来移动进行覆盖前面的元素