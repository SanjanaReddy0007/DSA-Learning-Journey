int missingNumber(vector<int>&arr) {
   int n = arr.size();
   int xor1 = n;

   for(int i = 0; i < n; i++) {
      xor1 ^= i ^ arr[i];
   }

   return xor1;
}

