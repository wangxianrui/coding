//
// Created by wangxr337 on 2019/5/23.
//

class Solution {
    static bool compare(const int &a, const int &b) {
        string str_a = to_string(a);
        string str_b = to_string(b);
        return (str_a + str_b) > (str_b + str_a);
    }

public:
    string largestNumber(vector<int> &nums) {
        if (nums.empty())
            return "";
        sort(nums.begin(), nums.end(), compare);
        string result;
        for (int i = 0; i < nums.size(); i++)
            result += to_string(nums[i]);
        return result[0] == '0' ? "0" : result;
    }
};