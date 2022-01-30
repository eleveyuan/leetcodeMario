#include "searchinsert.h"

int Solution::searchInsert(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        if (target <= nums[(left + right) / 2]) {
            right = (left + right) / 2 - 1;
        } else {
            left = (left + right) / 2 + 1;
        }
    }
    
    return left;
}

