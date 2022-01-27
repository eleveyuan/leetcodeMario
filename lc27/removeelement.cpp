#include "removeelement.h"

int Solution::removeElement(vector<int>& nums, int val) {
    int len = nums.size();
    int left = 0;
    for (int right = 0; right < len; right ++) {
        if (nums[right] != val) {
            nums[left] = nums[right];
            left ++;
        }
    }
    return left;
}