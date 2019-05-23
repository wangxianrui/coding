class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        int length = numbers.size();
        if (!length)
            return 0;
        int num = numbers[0], count = 1;
        for (int i = 1; i < length; i++) {
            if (numbers[i] == num)
                count++;
            else
                count--;
            if (count == 0) {
                num = numbers[i];
                count = 1;
            }
        }
        count = 0;
        for (int i = 0; i < length; i++) {
            if (numbers[i] == num)
                count++;
        }
        if (count > length / 2)
            return num;
        return 0;
    }
};