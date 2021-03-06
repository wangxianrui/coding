//
// Created by wangxr337 on 2019/5/23.
//

class Solution {
public:
    /**
     * 指定路径方向为左上到右下, 不必使用图的最短路径, 动态规划即可
     * @param grid
     * @return
     */
    int minPathSum(vector <vector<int>> &grid) {
        int row = grid.size();
        int col = grid[0].size();
        int dp[row][col];
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (i == 0 && j == 0)
                    dp[i][j] = grid[i][j];
                else if (i == 0)
                    dp[i][j] = dp[i][j - 1] + grid[i][j];
                else if (j == 0)
                    dp[i][j] = dp[i - 1][j] + grid[i][j];
                else
                    dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
            }
        }
        return dp[row - 1][col - 1];
    }
};