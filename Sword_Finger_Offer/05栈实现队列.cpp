#include <iostream>
#include <vector>
#include <stack>

using namespace std;


class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int length = rotateArray.size();
        if (length == 0) return 0;
        if (length == 1) return rotateArray[0];
        int left = 0, right = length - 1, mid;
        while (left < right) {
            mid = (left + right) / 2;
            if (rotateArray[mid] > rotateArray[right])
                left = ++mid;
            else if (rotateArray[mid] < rotateArray[right])
                // pay attention
                right = mid;
            else
                right--;
        }
        // left == right
        return rotateArray[left];
    }
};

