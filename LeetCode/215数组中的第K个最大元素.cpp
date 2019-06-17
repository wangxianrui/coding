//
// Created by wangxr337 on 2019/5/23.
//

class Solution {
public:
    int findKthLargest(vector<int> &nums, int k) {
        vector<int> heap(nums.begin(), nums.begin() + k);
        buildMinHeap(heap, k);
        for (int i = k; i < nums.size(); i++) {
            if (nums[i] > heap[0]) {
                heap[0] = nums[i];
                adjustHeap(heap, 0, k);
            }
        }
        return heap[0];
    }

    void buildMinHeap(vector<int> &heap, int length) {
        for (int i = length / 2; i >= 0; i--) {
            adjustHeap(heap, i, length);
        }
    }

    void adjustHeap(vector<int> &heap, int parent, int length) {
        int left = 2 * parent;
        int right = 2 * parent + 1;
        int min_index = parent;
        if (left < length && heap[left] < heap[min_index])
            min_index = left;
        if (right < length && heap[right] < heap[min_index])
            min_index = right;
        if (min_index != parent) {
            swap(heap[min_index], heap[parent]);
            adjustHeap(heap, min_index, length);
        }
    }
};