//
// Created by wangxr337 on 2019/5/23.
//

class Solution {
public:
    bool canJump(vector<int> &nums) {
        int length = nums.size();
        if (length < 2)
            return true;
        for (int i = length - 2; i >= 0; i--) {
            if (nums[i] > 0)
                continue;
            if (!judge(nums, i))
                return false;
        }
        return true;
    }

    bool judge(vector<int> &nums, int i) {
        for (int j = i - 1; j >= 0; j--) {
            if (nums[j] > i - j)
                return true;
        }
        return false;
    }
};