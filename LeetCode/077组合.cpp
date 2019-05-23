//
// Created by wangxr337 on 2019/5/23.
//
/**
 * 给定两个整数 n 和 k，返回 1 ... n 中所有可能的 k 个数的组合。
 */
class Solution {
public:
    vector <vector<int>> combine(int n, int k) {
        vector<int> nums;
        for (int i = 1; i <= n; i++)
            nums.push_back(i);
        comb(nums, k, 0);
        return result;
    }

    // 使用引用传参， 减少参数复制
    void comb(vector<int> &nums, int k, int index) {
        if (temp.size() == k) {
            result.push_back(temp);
            return;
        }
        for (int i = index; i < nums.size(); i++) {
            temp.push_back(nums[i]);
            comb(nums, k, i + 1);
            temp.pop_back();
        }
    }

private:
    vector <vector<int>> result;
    vector<int> temp;
};
