int bySellmaxProfit(vector<int>&arr , int n) {
   int aheadTobuy = 0;
   int aheadNotToBuy = 0;

   for(int i = n - 1; i >= 0; i--) {
     int currNotBuy = max(arr[i] + aheadToBuy , aheadNottoBuy);
     int curBuy = max(-arr[i] + aheadNottoBuy, aheadToBuy);
     aheadTobuy = curNotBuy;
     aheadNotToBuy = curBy;
   }

   return aheadToBuy;
}

