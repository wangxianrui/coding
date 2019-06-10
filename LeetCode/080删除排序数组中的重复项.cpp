//
// Created by wangxr337 on 2019/5/23.
//

class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        if (nums.size() < 3)
            return nums.size();
        int i = 0;
        while (i < nums.size()) {
            while (i + 2 < nums.size() && nums[i] == nums[i + 2]) {
                nums.erase(nums.begin() + i + 2);
            }
            i++;
        }
        return nums.size();
    }
};