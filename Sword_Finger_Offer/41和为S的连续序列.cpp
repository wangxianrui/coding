class Solution {
public:
    vector <vector<int>> FindContinuousSequence(int sum) {
        int max_n = sqrt(2.0 * sum);
        vector <vector<int>> result;
        for (int i = max_n; i > 1; i--) {
            if ((i % 2 == 1 && sum % i == 0) || (i % 2 == 0 && (sum % i) * 2 == i)) {
                vector<int> temp;
                int start = ceil(double(sum) / i) - (i / 2);
                for (int j = start; j < start + i; j++)
                    temp.push_back(j);
                result.push_back(temp);
            }
        }
        return result;
    }
};
