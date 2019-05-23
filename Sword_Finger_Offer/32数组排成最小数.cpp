class Solution {
public:

    static bool compare(int a, int b) {
        string str_a = to_string(a);
        string str_b = to_string(b);
        return (str_a + str_b) < (str_b + str_a);
    }

    string PrintMinNumber(vector<int> numbers) {
        sort(numbers.begin(), numbers.end(), compare);
        string result = "";
        for (auto n : numbers)
            result += to_string(n);
        return result;
    }
};