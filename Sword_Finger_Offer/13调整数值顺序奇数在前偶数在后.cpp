class Solution {
public:
    void reOrderArray(vector<int> &array) {
        int length = array.size();
        for (int index = 0; index < length; index++) {
            for (int i = length - 1; i > index; i--) {
                if (array[i] % 2 == 1 && array[i - 1] % 2 == 0) {
                    int temp = array[i];
                    array[i] = array[i - 1];
                    array[i - 1] = temp;
                }
            }
        }
    }
};