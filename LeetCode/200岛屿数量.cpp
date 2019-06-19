//
// Created by wangxr337 on 2019/5/23.
//

class Solution {
public:
    int numIslands(vector<vector<char>> &grid) {
        if (grid.empty())
            return 0;
        int result = 0;
        int m = grid.size(), n = grid[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    result++;
                    dfs(grid, i, j, m, n);
                }
            }
        }
        return result;
    }

    void dfs(vector<vector<char>> &grid, int i, int j, int m, int n) {
        if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == '0')
            return;
        grid[i][j] = '0';
        dfs(grid, i, j + 1, m, n);
        dfs(grid, i, j - 1, m, n);
        dfs(grid, i - 1, j, m, n);
        dfs(grid, i + 1, j, m, n);
    }
};