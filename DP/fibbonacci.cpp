
vector<int>fib(int n) {
    vector<long long>dp(n + 1, -1);
    return fib(n , dp);
}

int fibonnacci(int n, vector<int>&dp) {
    if(n == 0) return 0;
    if(n == 1) return 1;

    dp[1] = 1;
    dp[0] = 0;
    if(dp[n] != -1) {
        return dp[n];
    }

    dp[n] = fibbonnacci(n - 1) + fibbonacci(n - 2);
    return dp[n];
}


