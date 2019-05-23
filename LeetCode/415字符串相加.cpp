//
// Created by wangxr337 on 2019/5/23.
//

class Solution {
public:
    string addStrings(string num1, string num2) {
        int length1 = num1.size();
        int length2 = num2.size();
        int length = max(length1, length2);
        num1.insert(0, length - length1, '0');
        num2.insert(0, length - length2, '0');

        string result(length, '0');
        int flag = 0;
        for (int i = length - 1; i >= 0; i--) {
            int sum = num1[i] - '0' + num2[i] - '0' + flag;
            result[i] = sum % 10 + '0';
            flag = sum / 10;
        }
        if (flag)
            result.insert(0, 1, flag + '0');
        return result;
    }
};