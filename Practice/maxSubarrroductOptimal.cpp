
int mazSubarrProduct(vector<int>&arr) {
  int n = arr.size();
  int ans = INT_MIN;

  double prefix = 1;
  double suffix = 1;

  for(int i = 0; i < n; i++) {
    if(prefix == 0) prefix = 1;
    if(sufix == 0) suffix = 1;

    prefix *= arr[i];
    suffix *= arr[n - i - 1];

    ans = max(ans, max(prefix,suffix));
  }

  return (int)ans;
}

