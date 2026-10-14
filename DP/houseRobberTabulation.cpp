
int f(int arr[] , int n)
{
    if(n == 0) return arr[0];
    if(n == 1) return max(arr[0] , arr[1]);
    vector<int>dp(n);

    dp[0] = arr[0];
    dp[1] = max(arr[0] , arr[1]);

    for(int i = 2; i <= n - 1; i++) {
        int pick = arr[i] + dp[i - 2];
        int non = dp[i - 1];
        dp[i] = max(pick,non);
    }

    return dp[n - 1];

}

