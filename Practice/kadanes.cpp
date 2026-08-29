int kadanesMaxSubarr(vector<int>&arr) {
  int n = arr.size();
  int maxSum = INT_MIN;
  int cur = 0;

  for(int i = 0; i < n; i++) {
     cur += arr[i];
     maxSum = max(cur, maxSum);

     if(cur < 0) {
        cur = 0;
     }
  }

  return maxSum;
}

