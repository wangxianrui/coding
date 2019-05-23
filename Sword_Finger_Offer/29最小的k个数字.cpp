class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        int length = input.size();
        if (length < k)
            return {};
        if (length == k)
            return vector<int>(input);
        sort(input.begin(), input.end());
        return vector<int>(input.begin(), input.begin() + k);
    }

};

/*
class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        int length = input.size();
        if (length <= k)
            return vector<int>(input.begin(), input.end());
        vector<int> heap(input.begin(), input.begin() + k);\
        max_heap(heap, k);
        for (int i = k; i < length; i++) {
            if (input[i] < heap[0]) {
                heap[0] = input[i];
                adjust_heap(heap, 0, k);
            }
        }
        return heap;
    }

    void max_heap(vector<int> &heap, int length) {
        for (int i = length / 2; i >= 0; i--)
            adjust_heap(heap, i, length);
    }

    void adjust_heap(vector<int> &heap, int parent, int length) {
        int left = 2 * parent + 1;
        int right = 2 * parent + 2;
        int max_index = parent;
        if (left < length && heap[max_index] < heap[left])
            max_index = left;
        if (right < length && heap[max_index] < heap[right])
            max_index = right;
        if (max_index != parent) {
            swap(heap[max_index], heap[parent]);
            adjust_heap(heap, max_index, length);
        }
    }
};
*/