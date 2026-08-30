int maxPairSum(vector<int>&arr, int n) {
   if(n < 2) return -1;

   int res = arr[0] + arr[1];
   for(int i = 1; i < n - 1; i++) {
     res = max(res, arr[i] + arr[i + 1]);
   }

   return res;
}

