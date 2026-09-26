int isPossible(vector<int>&arr, int mid, int c) {
    
    int cnt = 1;
    int last = arr[0];
    for(int i = 1; i < arr.size(); i++) {
        if(arr[i] - last >= mid) {
           cnt++;
           last = arr[i];
        }
        if(cnt >= c) return true;
    }

    return false;
}

//
int agressiveCows(vector<int>&arr, int c) {
    int n = arr.size();
    int low = 0;
    int high = arr[arr.size() - 1] - arr[0];

    while(low <= high) {
        int mid = (low + high) / 2;

        if(isPossible(arr,mid,c)) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return high;
}


