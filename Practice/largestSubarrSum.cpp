int largestsubarraySum(vector<int>&arr){
   int n = arr.size();
   int ans = INT_MAX;

   for(int i = 0; i < n; i++) {
    for(int j = i; j < n; j++) {
        int sum = 0;

        for(int k=i;k<=j;k++) {
            sum += arr[k];
        }
        ans = max(ans,sum);
    }
   }

   return ans;
}

