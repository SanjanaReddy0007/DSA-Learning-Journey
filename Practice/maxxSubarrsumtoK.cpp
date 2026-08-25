int maxSubarrSumToK(vector<int>&arr, int k) {
  int n = arr.size();
  long long sum = 0;
  int maxLen = 0;
  int i = 0;

  for(int j = 0; j < n; j++) {
    sum += arr[j];

    while(i <= j && sum > k )
         sum -= arr[i];
        i++;
    }

    if(sum == k) {
      maxLen = max(maxLen , j - i + 1);
    }

    return maxLen;
}


