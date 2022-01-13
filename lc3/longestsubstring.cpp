#include "longestsubstring.h"
#include <string>

using namespace std;

int lengthOfLongestSubstring(string s) {
    if (s == "") return 0;
    map<char, int> char2idx;
    int res = 1, left = 0, right = 0;
    while (left < s.size() && right < s.size()) {
        // std::cout << "before: " << left << "--" << right << ' ' << res << std::endl;   
        if (char2idx.find(s[right]) == char2idx.end()) {
            // map中不存在key
            char2idx.insert(pair<char, int>(s[right], right));
        } else {
            // 处理已经路过的值，即索引小于left, 进行更新value，但是不更新left
            if (char2idx[s[right]] >= left) {
                // map中已存在key, 修改left索引值
                left = char2idx[s[right]] + 1;
            } 
            // 更新map的value
            char2idx[s[right]] = right;
        }
        right ++;
        res = max(right-left, res);
        // std::cout << "after: " << left << "--" << right << ' ' << res << std::endl << std::endl;   
    }
    return res;
}