#include "sumOfUnique.h"


int Solution::sumOfUnique(vector<int>& nums) {
    int ret = 0, len = nums.size(); 
    unordered_map<int, int> kv;
    for (int i = 0; i < len; i ++) {
        if (kv[nums[i]] == 0) {
            ret += nums[i];
            kv[nums[i]] = 1;
        } else if (kv[nums[i]] == 1) {
            ret -= nums[i];
            kv[nums[i]] = 2;
        }
    }
    return ret;
}