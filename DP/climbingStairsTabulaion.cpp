
nt climbingStairs(int n) {
    vector<int>dp(n + 1, 0);
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

//OPTIMIZE
int last1 = 1;
int last2 = 1;
int cur = 0;

for(int i = 2; i <= n; i++) {
    cur = last1 + last2;
    last2 = last1;
    last1 = cur;
}

return cur;
