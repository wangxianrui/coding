class Solution {
public:
    void FindNumsAppearOnce(vector<int> data, int *num1, int *num2) {
        int bit_or = 0;
        for (auto i : data)
            bit_or ^= i;

        int index_of_1 = 0;
        while (!bit_end_1(bit_or, index_of_1))
            index_of_1++;

        *num1 = 0, *num2 = 0;
        for (auto i : data) {
            if (bit_end_1(i, index_of_1))
                *num1 ^= i;
            else
                *num2 ^= i;
        }
    }

    bool bit_end_1(int num, int len) {
        return (num >> len) & 1;
    }
};
