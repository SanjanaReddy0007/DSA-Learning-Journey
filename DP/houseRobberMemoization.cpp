
int f(int arr[] , int n, vector<int>&dp) {
    if(i == 0) return arr[0];
    if(i == 1) return max(arr[0] , arr[1]);
    
    if(dp[i] != -1) {
        return dp[i];
    }

    int pick = arr[i] + f(i - 2 , arr,dp);
    int non_pick = f(i - 1 , arr , dp);

    return dp[i] = max(pick , non_pick);

}

