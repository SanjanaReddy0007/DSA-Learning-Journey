
int minEnergy(int n, int k, int height) {
    vector<int>dp(n,0);
    dp[0] = 0;

    for(int i = 1; i < n; i++) {
       int min_energy = INT_MAX;

       for(int j = 1; j <= k; j++) {
         if(i - j >= 0) {
             int energy = abs(height[i] - height[i - j]) + dp[i - j];
             min_energy = min(min_energy , energy);
          }
       }

       dp[i] = min_energy;
    }

    return dp[n - 1];

}


