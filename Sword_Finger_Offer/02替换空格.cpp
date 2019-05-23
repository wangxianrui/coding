#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void replaceSpace(char *str, int length) {
        if (str == NULL)
            return;
        int oldLength = 0;
        int spaceLength = 0;
        while (str[oldLength] != '\0') {
            if (str[oldLength] == ' ')
                spaceLength++;
            oldLength++;
        }
        int newLength = oldLength + 2 * spaceLength;
        if (newLength > length) {
            return;
        }
        char *pStr1 = str + oldLength;
        char *pStr2 = str + newLength;
        while (pStr1 < pStr2) {
            if (*pStr1 == ' ') {
                *pStr2-- = '0';
                *pStr2-- = '2';
                *pStr2-- = '%';
            } else {
                *pStr2-- = *pStr1;
            }
            pStr1--;
        }
    }
};