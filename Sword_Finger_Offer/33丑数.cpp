class Solution {
public:
    int GetUglyNumber_Solution(int index) {
        if (index == 0)
            return 0;
        vector<int> result(index);
        result[0] = 1;
        int t2 = 0, t3 = 0, t5 = 0;
        for (int i = 1; i < index; i++) {
            result[i] = min(result[t2] * 2, min(result[t3] * 3, result[t5] * 5));
            // 这里有可能出现重复，所以3个都要判断
            if (result[i] == result[t2] * 2)
                t2++;
            if (result[i] == result[t3] * 3)
                t3++;
            if (result[i] == result[t5] * 5)
                t5++;
        }
        return result.back();
    }
};