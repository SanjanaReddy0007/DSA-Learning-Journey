int maxCandiesGroup(int maximu, vector<int>&arr) {
  int n = arr.size();
  int count = 0;
  int product = 1;

  int start = 0;
  for(int end = 0; end < n; end++) {
     product *= arr[end];

     while(product >= maximum && start <= end) {
        product /= arr[start];
        start++;
     }

     count += (end - start + 1);
  }
     return count;
}


