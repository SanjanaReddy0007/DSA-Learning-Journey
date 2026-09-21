
int largestSubarrsum(vector<int>&arr) {
    int n = arr.size();
    int sum = 0;
    int maxSum = INT_MIN;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
        maxSum = max(sum , maxSum);
       
        if(sum < 0) {
            sum = 0;
        }
    }

    return maxSum;
}


