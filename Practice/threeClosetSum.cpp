vector<int>ClosetSum(vector<int>&arr, int target) {
   int n = arr.size();
   int closetsum = INT_MAN / 2;

   for(int i = 0; i < n - 2; i++) {
    for(int j = i + 1; j < n - 1; j++) {
        for(int k = j + 1; k < n; k++) {
            int currsum = arr[i] + arr[j] + arr[k];
            if(abs(currentSum - target) < abs(closetSum - target)) {
                closetsum = currSum;
            }
        }
    }
   }

   return closetSum;
}

