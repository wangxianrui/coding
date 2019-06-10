//
// Created by wangxr337 on 2019/5/23.
//

class Solution {
public:
    bool search(vector<int> &nums, int target) {
        if (nums.empty())
            return false;
        int i = 0, j = nums.size() - 1;
        while (i <= j) {
            int mid = i + (j - i) / 2;
            if (nums[mid] == target)
                return true;
            if (nums[mid] > nums[j]) {
//                sorted left
                if (nums[i] <= target && nums[mid] > target)
                    j = mid - 1;
                else
                    i = mid + 1;
            } else if (nums[mid] < nums[j]) {
//                sorted right
                if (nums[mid] < target && nums[j] >= target)
                    i = mid + 1;
                else
                    j = mid - 1;
            } else
                j--;
        }
        return false;
    }
};