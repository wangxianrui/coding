class Solution {
public:
    string LeftRotateString(string str, int n) {
        int length = str.size();
        if (!length)
            return str;
        int index = n % length;
        string left_str(str, 0, index);
        string right_str(str, index, length - index);
        return right_str + left_str;
    }
};
