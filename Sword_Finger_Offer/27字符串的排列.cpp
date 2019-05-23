class Solution {
public:
    vector <string> Permutation(string str) {
        if (str.empty())
            return {};
        perm(str, 0);
        return vector<string>(result.begin(), result.end());
    }

    void swap(string &str, int i, int j) {
        char ch = str[i];
        str[i] = str[j];
        str[j] = ch;
    }

    void perm(string str, int start) {
        if (start == str.size())
            result.insert(str);
        for (int i = start; i < str.size(); i++) {
            swap(str, i, start);
            perm(str, start + 1);
            swap(str, i, start);
        }
    }

private:
    set <string> result;
};