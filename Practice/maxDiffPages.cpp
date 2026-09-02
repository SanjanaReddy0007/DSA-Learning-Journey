
int maxDiffPagesToK(vector<int>&arr , int k ) {
   int n = arr.size();
   vector<int>PairSum(n-1);

   for(int i = 0; i < n-1; i++) {
       PairSum[i] = arr[i] + arr[i + 1];
   }

   int ans = 0;
   sort(pairSum.begin() , pairSum.end());

   for(int i = 0; i < k; i++) {
      ans += pairSum[n - 2 - i] - pairSum[i];
    }

    return ans;
}

