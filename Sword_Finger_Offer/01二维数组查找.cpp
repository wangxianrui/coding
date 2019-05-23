#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool Find(int target, vector<vector<int>> array) {
        int rowLen = array.size();
        int colLen = array[0].size();
        int row = rowLen - 1, col = 0;
        while (row >= 0 && col < colLen) {
            if (array[row][col] == target)
                return true;
            else if (array[row][col] < target)
                ++col;
            else
                --row;
        }
        return false;
    }
};