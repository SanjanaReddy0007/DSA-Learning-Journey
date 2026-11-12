

int longestStrictlyRisingSubarray(vector<int>&arr) {
    int n = arr.size();
    int maxii = 0;

    for(int i = 0; i < n; i++) {
        int curLen = 1;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[j - 1]) {
                curLen++;
            } else {
                break;
            }
        }
        maxii = max(maxii,curLen);
    }

    for(int i = 0; i < n; i++) {
        int curLen = 1;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[j - 1]) {
                curLen++;
            } else {
                break;
            }
        }
        maxii = max(maxii,curLen);
    }

    return maxii;

}



