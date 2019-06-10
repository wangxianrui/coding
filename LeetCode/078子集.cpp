//
// Created by wangxr337 on 2019/5/23.
//

class Solution {
public:
    vector<vector<int>> subsets(vector<int> &nums) {
        vector<vector<int>> result = {{}};
        for (auto n : nums) {
            int length = result.size();
            for (int i = 0; i < length; i++) {
                vector<int> temp(result[i]);
                temp.push_back(n);
                result.push_back(temp);
            }
        }
        return result;
    }
};