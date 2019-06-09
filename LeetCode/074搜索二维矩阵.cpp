//
// Created by wangxr337 on 2019/5/23.
//

class Solution {
public:
    bool searchMatrix(vector <vector<int>> &matrix, int target) {
        if (matrix.empty())
            return false;
        int row = matrix.size();
        int col = matrix[0].size();
        int length = row * col;
        int i = 0, j = length - 1;
        while (i <= j) {
            int mid = i + (j - i) / 2;
            if (matrix[mid / col][mid % col] == target)
                return true;
            else if (matrix[mid / col][mid % col] > target)
                j = mid - 1;
            else
                i = mid + 1;
        }
        return false;
    }
};