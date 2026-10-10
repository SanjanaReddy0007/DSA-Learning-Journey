
int longetsSubarrSumToK(int arr[] , int k, int n) {
    
    unordered_map<long long, int>findMap;
    long long sum = 0;
    maxLen = 0;

    findMap[0] = -1;
    for(int i = 0; i < n; i++) {
        sum += arr[i];

        if(findMap.find(sum - k) != findMap.end()) {
            int len = i - findMap[sum - k];
            maxLen = max(maxLen , len);
        } else {
            findMap[sum] = i;
        }
    }

    return maxLen;

}


