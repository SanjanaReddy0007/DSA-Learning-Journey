
int contestAuthor(vector<int>&arr, long long k) {
    
   int n = arr.size();
   sort(arr.begin() , arr.end());
   
   int cnt = 1, ans = 1;
   for(int i = 1; i < n; i++) {
    if(arr[i] - arr[i - 1] > k) {
        cnt = 1;
    } else {
        cnt++;
        ans = max(ans, cnt);
    }
  }

  return n - ans;

}

