//
// Created by wangxr337 on 2019/5/23.
//

class Solution {
    static bool compare(vector<int> &a, vector<int> &b) {
        if (a[0] != b[0])
            return a[0] < b[0];
        else
            return a[1] < b[1];
    }

public:
    vector <vector<int>> merge(vector <vector<int>> &intervals) {
        int length = intervals.size();
        if (length < 2)
            return intervals;
        vector <vector<int>> result;
        sort(intervals.begin(), intervals.end(), compare);
        for (int i = 0; i < length; i++) {
            if (result.empty() || intervals[i][0] > result.back()[1])
                result.push_back(intervals[i]);
            else {
                result.back()[0] = min(result.back()[0], intervals[i][0]);
                result.back()[1] = max(result.back()[1], intervals[i][1]);
            }
        }
        return result;
    }
};