//
// Created by wangxr337 on 2019/5/24.
//

class Solution {
public:
    void insert_sort(vector<int> &nums) {
        int length = nums.size();
        if (length < 2)
            return;
        for (int i = 1; i < length; i++) {
            int key = nums[i];
            int j;
            for (j = i - 1; j >= 0; j--) {
                if (nums[j] > key) {
                    nums[j + 1] = nums[j];
                } else
                    break;
            }
            nums[j + 1] = key;
        }
    }

    void bubble_sort(vector<int> &nums) {
        int length = nums.size();
        if (length < 2)
            return;
        for (int i = 0; i < length; i++) {
            bool change = false;
            for (int j = 0; j < length - 1 - i; j++) {
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                    change = true;
                }
            }
            if (!change)
                return;
        }
    }

    void quick_sort(vector<int> &nums, int left, int right) {
        if (left >= right)
            return;
        int i = left, j = right;
        int key = nums[left];
        while (i < j) {
            // pay attention to i < j and >= <=
            if (i < j && nums[j] >= key)
                j--;
            nums[i] = nums[j];
            if (i < j && nums[i] <= key)
                i++;
            nums[j] = nums[i];
        }
        nums[i] = key; // i == j
        quick_sort(nums, left, i - 1);
        quick_sort(nums, i + 1, right);
    }

    void quick_sort(vector<int> &nums) {
        int length = nums.size();
        if (length < 2)
            return;
        quick_sort(nums, 0, length - 1);
    }

    void max_heap(vector<int> &nums, int length) {
        for (int i = length / 2; i >= 0; i--) {
            adjust_heap(nums, i, length);
        }
    }

    void adjust_heap(vector<int> &nums, int parent, int length) {
        int left = 2 * parent + 1;
        int right = 2 * parent + 2;
        int max_index = parent;
        if (left < length && nums[left] > nums[max_index])
            max_index = left;
        if (right < length && nums[right] > nums[max_index])
            max_index = right;
        if (max_index != parent) {
            swap(nums[max_index], nums[parent]);
            adjust_heap(nums, max_index, length);
        }
    }

    void heap_sort(vector<int> &nums) {
        int length = nums.size();
        if (length < 2)
            return;
        max_heap(nums, length);
        for (int i = length - 1; i > 0; i--) {
            swap(nums[i], nums[0]);
            adjust_heap(nums, 0, i);
        }
    }
};
