
int solve(int i, int height[] , int k, vector<int>&dp) {
    if(i == 0) return 0;
    
    if(dp[i] != -1) {
        return dp[i];
    }

    int minEnergy = INT_MAX;

    for(int j = 1; j <= k; j++) {
        if(i - j >= 0) {
            int energy = abs(height[i] - height[i - j]) + solve(i - j, height,k,dp);
            minEnergy = min(minEnergy, energy);
        }
    }

    dp[i] = minEnergy;
    return dp[i];

}

int frogJump(int n, int k, int height[]) {
    vector<int>dp(n,-1);
    return solve(n - 1, height, k, dp);
}

