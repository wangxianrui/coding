//
// Created by wangxr337 on 2019/5/24.
//

class Solution {
public:
    int binarySearch(vector<int> &nums, int target) {
        if (nums.empty())
            return -1;
        int length = nums.size();
        int left = 0, right = length - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return -1;
    }
};