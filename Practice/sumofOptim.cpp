vector<int>TwoSumOptimal(vector<int>&arr , int k) {
   int n = arr.size();
   unordered_map<int,int>m;

   for(int i = 0; i < n; i++) {
      int x = k - arr[i];
      if(m.find(x) != m.end()) {
         return {m[x],i};
      } else {
         m[arr[i]] = i;
      }
   }
 return {-1,-1};
}
