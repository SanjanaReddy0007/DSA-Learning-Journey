int maximaizeShareProfit(vector<int>&arr) {
   int n = arr.size();
   int maxProfit = 0;

   for(int i = 0; i < n - 2; i++) {
    for(int j = i + 1; j < n - 1; j++) {
        int profit = arr[j] - arr[i];
        maxProfit = max(maxProfit, profit);
    }
   }

   return maxProfit;

}

