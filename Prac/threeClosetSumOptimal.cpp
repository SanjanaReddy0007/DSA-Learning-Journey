
vector<int>Closetsum(vector<int>&arr, int T) {
    int n = arr.size();
    int closetsum = INT_MAX / 2;

    for(int i = 0; i < n; i++) {
        int left = i + 1 ,right = n - 1;

    while(left < right) {
         int cur = arr[i] + arr[left] + arr[right];

         if(abs(cur - T) < abs(closetsum - T)) {
            closetsum = cur;
         }


         if(cur < T)  {
            left++;
         } else if(cur > T) {
            right--;
         } else {
            return cur;
         }
    }

    return closetsum;

}


