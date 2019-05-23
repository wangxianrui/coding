//
// Created by wangxr337 on 2019/5/23.
//

class Solution {
public:
    vector <vector<int>> combinationSum3(int k, int n) {
        vector<int> nums;
        for (int i = 1; i <= 9; i++)
            nums.push_back(i);
        comb(nums, n, k, 0);
        return result;
    }

    // 使用引用传参， 减少参数复制
    void comb(vector<int> &nums, int n, int k, int start) {
        if (!n && !k) {
            result.push_back(temp);
            return;
        }
        if (!n || !k)
            return;
        for (int i = start; i < nums.size(); i++) {
            temp.push_back(nums[i]);
            comb(nums, n - nums[i], k - 1, i + 1);
            temp.pop_back();
        }
    }

private:
    vector <vector<int>> result;
    vector<int> temp;
};
