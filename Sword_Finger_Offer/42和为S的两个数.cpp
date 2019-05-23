class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array, int sum) {
        int length = array.size();
        if (!length)
            return {};
        int i = 0, j = length - 1;
        while (i < j) {
            if (array[i] + array[j] == sum)
                return {array[i], array[j]};
            else if (array[i] + array[j] < sum)
                i++;
            else
                j--;
        }
        return {};
    }
};