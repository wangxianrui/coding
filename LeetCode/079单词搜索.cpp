//
// Created by wangxr337 on 2019/5/23.
//

class Solution {
public:
    /**
     * careful with range of 'char'
     * @param board
     * @param word
     * @return
     */
    bool exist(vector <vector<char>> &board, string word) {
        if (board.empty())
            return false;
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (dfs(board, word, i, j, 0))
                    return true;
            }
        }
        return false;
    }

    bool dfs(vector <vector<char>> &board, string &word, int i, int j, int index) {
        if (index == word.size())
            return true;
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[index])
            return false;
        board[i][j] += 26;
        bool result = dfs(board, word, i + 1, j, index + 1) ||
                      dfs(board, word, i, j + 1, index + 1) ||
                      dfs(board, word, i - 1, j, index + 1) ||
                      dfs(board, word, i, j - 1, index + 1);
        board[i][j] -= 26;
        return result;
    }
};
