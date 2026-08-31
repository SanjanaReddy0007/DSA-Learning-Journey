int maxSubarrProduct(vector<int>&arr) {
  int n = arr.size();
  int ans = INT_MIN;

  for(int i = 0; i < n; i++) {
    for(int j = i; j < n ; j++) {
        double product = 1;
        for(int k = j; k < n; k++) {
           product *= arr[k];
        }

        ans = max(ans,  product)
    }
  }

  return ans;

}

