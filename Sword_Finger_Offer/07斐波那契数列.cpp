class Solution {
public:
    int Fibonacci(int n) {
        int f[2] = {0, 1};
        if (n < 2)
            return f[n];
        for (int i = 2; i <= n; i++) {
            f[i % 2] = f[0] + f[1];
        }
        return f[n % 2];
    }
};
