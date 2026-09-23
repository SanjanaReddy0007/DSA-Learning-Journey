
vector<int>Closetsum(vector<int>&arr, int T) {
    int n = arr.size();
    int closetsum = INT_MAX / 2;

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            for(int k = j; k < n; k++) {
                int curSum = arr[i] + arr[j] + arr[k];
                if(curSum < closetsum) {
                    closetsum = curSum;
                }
            }
        }
    }
 
    return closetsum;

}

