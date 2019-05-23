class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        int length = array.size();
        if (length == 1)
            return array[0];
        int max_value = INT8_MIN;
        int pre_sum = 0;
        for (int i = 0; i < length; i++) {
            if (pre_sum > 0) {
                pre_sum = pre_sum + array[i];
            } else {
                pre_sum = array[i];
            }
            if (pre_sum > max_value)
                max_value = pre_sum;
        }
        return max_value;
    }
};