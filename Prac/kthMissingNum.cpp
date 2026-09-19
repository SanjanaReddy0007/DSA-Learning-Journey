int kthMissingNum(vector<int>&num, int k) {
    int n = num.size();
    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] - mid - 1 < k) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return low + k;

}


