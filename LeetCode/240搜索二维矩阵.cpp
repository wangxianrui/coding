//
// Created by wangxr337 on 2019/5/23.
//

class Solution {
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target) {
        if (matrix.empty())
            return false;
        int i = matrix.size() - 1;
        int j = 0;
        while (i >= 0 && j < matrix[0].size()) {
            if (target == matrix[i][j])
                return true;
            else if (target < matrix[i][j])
                i--;
            else
                j++;
        }
        return false;
    }
};
