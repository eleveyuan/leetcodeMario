暴力破解方法

也可以使用kmp算法

注意的点：

1）

https://stackoverflow.com/questions/3901630/performance-issue-for-vectorsize-in-a-loop-in-c

for循环里面调用size()每次循环都会被调用一次

2）

使用size有一个坑，size()方法返回的是一个unsigned类型的数值，所以，如果再循环中，使用i<size()-n这种判断条件的时候，一定要注意，如果size()返回的值，小于n。
此时做减法，会返回一个很大的数字，因为，unsigned没有负数，所以会从最大值继续往下减。所以，一定要先转成int在减n。