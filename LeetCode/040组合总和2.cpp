//
// Created by wangxr337 on 2019/5/23.
//
/**
 * 给定一个数组 candidates 和一个目标数 target ，找出 candidates 中所有可以使数字和为 target 的组合。
 * candidates 中的每个数字在每个组合中只能使用一次。
 */
class Solution {
public:
    vector <vector<int>> combinationSum2(vector<int> &candidates, int target) {
        if (candidates.empty())
            return {};
        sort(candidates.begin(), candidates.end());
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
            // 去除重复项, 需要数组有序
            if (i > start && candidates[i] == candidates[i - 1])
                continue;
            temp.push_back(candidates[i]);
            comb(candidates, target - candidates[i], i + 1);
            temp.pop_back();
        }
    }

private:
    vector <vector<int>> result;
    vector<int> temp;
};
