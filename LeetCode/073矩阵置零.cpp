//
// Created by wangxr337 on 2019/5/23.
//

class Solution {
public:
    void setZeroes(vector <vector<int>> &matrix) {
        set<int> row_index, col_index;
        int row = matrix.size();
        int col = matrix[0].size();
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (matrix[i][j] == 0) {
                    row_index.insert(i);
                    col_index.insert(j);
                }
            }
        }
        for (auto index : row_index) {
            for (int i = 0; i < col; i++) {
                matrix[index][i] = 0;
            }
        }
        for (auto index : col_index) {
            for (int i = 0; i < row; i++) {
                matrix[i][index] = 0;
            }
        }
    }
};