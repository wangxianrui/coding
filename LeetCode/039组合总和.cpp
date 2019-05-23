//
// Created by wangxr337 on 2019/5/23.
//
/**
 * 给定一个无重复元素的数组 candidates 和一个目标数 target ，找出 candidates 中所有可以使数字和为 target 的组合。
 * candidates 中的数字可以无限制重复被选取。
 */
class Solution {
public:
    vector <vector<int>> combinationSum(vector<int> &candidates, int target) {
        if (candidates.empty())
            return {};
        comb(candidates, target, 0);
        return result;
    }

    void comb(vector<int> &candidates, int target, int start) {
        if (!target) {
            result.push_back(temp);
            return;
        }
        if (target < 0)
            return;
        for (int i = start; i < candidates.size(); i++) {
            temp.push_back(candidates[i]);
            comb(candidates, target - candidates[i], i);
            temp.pop_back();
        }
    }

private:
    vector <vector<int>> result;
    vector<int> temp;
};