int minimumOperationsToMkaeArrayK(vector<int>&nums,int k) {
   int xorr = 0;
   int n =nums.size();

   for(int i = 0; i < n; i++) {
      xor ^= nums[i];
   }

   xor ^= k;
   int count = 0;

   while(xor != 0) {
      count++;
      xor = xor & (xor - 1);
   }

   return count;
}

