class Solution {
public:
    int pascalTriangleI(int r, int c) {
        long long res = 1;

        int n = r - 1;
        int k = c - 1;

        for (int i = 0; i < k; i++) {
            res = res * (n - i) / (i + 1);
        }

        return (int)res;
    }
};
