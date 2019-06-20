//
// Created by wangxr337 on 2019/5/23.
//

class Solution {
public:
    int numSquares(int n) {
        vector<int> result(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            int min_val = INT8_MAX;
            for (int j = 1; j * j <= i; j++) {
                min_val = min(min_val, result[i - j * j]);
            }
            result[i] = min_val + 1;
        }
        return result[n];
    }
};