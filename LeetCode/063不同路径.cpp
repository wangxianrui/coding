//
// Created by wangxr337 on 2019/5/23.
//

class Solution {
public:
    int uniquePathsWithObstacles(vector <vector<int>> &obstacleGrid) {
        int row = obstacleGrid.size();
        int col = obstacleGrid[0].size();
//        int fill overflow
        long dp[row][col];
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (obstacleGrid[i][j] == 1)
                    dp[i][j] = 0;
                else {
                    if (i == 0 && j == 0)
                        dp[i][j] = 1;
                    else if (i == 0)
                        dp[i][j] = dp[i][j - 1];
                    else if (j == 0)
                        dp[i][j] = dp[i - 1][j];
                    else
                        dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                }
            }
        }
        return dp[row - 1][col - 1];
    }
};