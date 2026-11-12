
int longestRisingSubarrayy(vector<int>&arr) {
    int n = arr.size();
    int maxLen =1;
    int incLen = 1, decLen = 1;

    for(int i = 0; i < n; i++) {
        if(arr[i + 1] > arr[i]) {
            incLen++;
            decLen = 1;
        } else if(arr[i + 1] < arr[i]) {
            decLen++;
            incLen = 1;
        } else {
            incLen = 1;
            decLen = 1;
        }
        maxLen = max(maxLen , max(incLen,decLen));
    }

    return maxLen;
}

