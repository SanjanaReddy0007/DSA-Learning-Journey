
long long summingRangesWithinSubarrays(vector<int>&arr) {
    int n = arr.size();
    long long sum = 0;

    for(int i = 0; i < n; i++) {
        int mini = INT_MAX;
        int maxi = INT_MIN;

        for(int j = i ; j  < n; j++) {
            mini = min(mini , arr[j]);
            maxi = max(maxi,arr[j]);
            sum += (maxi - mini);
        }
    }

    return sum;
}

