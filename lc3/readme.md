这题首先想到的是蛮办法，借助空间对匹配的数据进行在匹配一遍，耗时耗力。

解决问题的方法就是：
1. 怎么在匹配失败的时候，移动左指针：我的处理简单的就是移动至不匹配的下一位
2. 怎么存储已经存在的字符：使用map进行存储，key为字符，value为索引，在遇到重复的进行更新(这里还可以改进，因为随着字符串增加map会增大，可以使用set只存遇到过的字符，或者map在匹配失败时去除重复的字符)