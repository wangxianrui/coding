//
// Created by wangxr337 on 2019/5/23.
//

class Solution {
public:
    int maxProduct(vector<int> &nums) {
        int max_res = 1, min_res = 1;
        int result = INT8_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0)
                swap(max_res, min_res);
            max_res = max(max_res * nums[i], nums[i]);
            min_res = min(min_res * nums[i], nums[i]);
            result = max(max_res, result);
        }
        return result;
    }
};
