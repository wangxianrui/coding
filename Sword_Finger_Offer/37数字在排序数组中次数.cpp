class Solution {
public:
    int GetNumberOfK(vector<int> data, int k) {
        int length = data.size();
        if (!length)
            return 0;
        int start_index = mid_search(data, 0, length - 1, k);
        if (start_index < 0)
            return 0;
        int count = 0;
        while (start_index < length && data[start_index] == k) {
            start_index++;
            count++;
        }
        return count;
    }

    int mid_search(vector<int> data, int left, int right, int k) {
        if (left > right)
            return -1;
        int mid = left + (right - left) / 2;
        if (data[mid] < k) {
            return mid_search(data, mid + 1, right, k);
        } else if (data[mid] > k) {
            return mid_search(data, left, mid - 1, k);
        } else if (mid > 0 && data[mid - 1] == k) {
            return mid_search(data, left, mid - 1, k);
        } else
            return mid;
    }
};
