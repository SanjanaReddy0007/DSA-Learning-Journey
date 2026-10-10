
int ismonkey(int arr[] , int mid, int n) {
    long long ans = 1;
    for(int i = 0; i < n; i++) {
        ans += ceil(double(arr[i]) / double(mid));
    }

    return ans;
}

int monkeyEatingBananas(int arr[] , int h) {
    int low = 0, high = max(arr , arr + n);
    int ans = high;
   
    while(low <= high) {
        int mid = (low + high) / 2;

        if(ismonkey(arr,mid,n)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;

}

