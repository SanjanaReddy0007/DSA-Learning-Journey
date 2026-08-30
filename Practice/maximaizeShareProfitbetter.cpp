int maxProfit(vector<int>&arr) {
   int n = arr.size();
   int min = arr[0];
   int maxProfit = 0;

   for(int i = 1; i < n; i++) {
      int profit = arr[i] - min;
      maxProfit = max(maxProfit , profit);
      min = min(arr[i] , min);
   }

   return maxProfit;

}

