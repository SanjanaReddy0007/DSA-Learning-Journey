
int climbingStairs(int n , vector<int>&dp) {
    if(n <= 1) return 1;
     if(dp[n] != -1) {
        return dp[n];
     }

     return dp[n] = climbingstairs(n - 1, dp) + climbingStairs(n - 2, dp);

}

int numOfWays(int n) {
    vector<int>dp(n + 1 , 0);
    return climbingStairs(n , dp);
}

