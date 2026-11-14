
int f(vector<int>&arr, int amt, vector<int>&dp) {
    int n = arr.size();
    int mini = INT_MAX;

   if(amt == 0) return 0;
   if(amt < 0) return -1;
   
   for(int i = 0; i < n; i++) {
      int count = f(arr,amt - arr[i],dp);
      if(count != -1) {
         mini = min(mini,count + 1);
      }
   }

   dp[amt] = (mini != INT_MAX) ? mini : -1;
   return dp[amt];
}

int minimumCoins(vector<int>&arr, int amt){
    vector<int>dp(amt + 1, -2);
    return f(arr,amt,dp);
}

