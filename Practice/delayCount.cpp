long long delayCount(vector<int>&arr) {
   int n = arr.size();
   vector<int>ans(n,0);
   vector<int>freq(10000 + 1,0);


   for(int i = n - 1; i >= 0; i--) {
      
      int t  =  i + delay + 1;
       if( t < n) {
        freq[arr[t]]++;
       }

       ans[i] = freq[arr[i]];
   }

   return ans;
}

