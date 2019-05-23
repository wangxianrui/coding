class Solution {
public:
    int rectCover(int number) {
        int f[2] = {1, 2};
        if (number < 3)
            return f[number - 1];
        for (int i = 3; i <= number; i++) {
            f[(i - 1) % 2] = f[0] + f[1];
        }
        return f[(number - 1) % 2];
    }
};