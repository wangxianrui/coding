//
// Created by wangxr337 on 2019/5/23.
//

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result = {{}};
        int pre_len = 0;
        int start;

        for (int k = 0; k < nums.size(); k++) {
            int length = result.size();
            if (k > 0 && nums[k] == nums[k - 1])
                start = pre_len;
            else
                start = 0;
            pre_len = length;
            for (int i = start; i < length; i++) {
                vector<int> temp(result[i]);
                temp.push_back(nums[k]);
                result.push_back(temp);
            }
        }
        return result;
    }
};