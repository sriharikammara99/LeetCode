class Solution {
public:
    int nthUglyNumber(int n) {
         vector<int> dp(n);
        dp[0] = 1;

        int i = 0, j = 0, k = 0;

        for (int x = 1; x < n; x++) {
            int a = dp[i] * 2;
            int b = dp[j] * 3;
            int c = dp[k] * 5;

            dp[x] = min({a, b, c});

            if (dp[x] == a) i++;
            if (dp[x] == b) j++;
            if (dp[x] == c) k++;
        }

        return dp[n - 1];
    }
};