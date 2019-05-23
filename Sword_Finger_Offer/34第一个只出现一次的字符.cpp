class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        unordered_map<char, int> umap;
        for (auto ch : str)
            umap[ch]++;
        for (int i = 0; i < str.size(); i++) {
            if (umap[str[i]] == 1)
                return i;
        }
        return -1;
    }
};