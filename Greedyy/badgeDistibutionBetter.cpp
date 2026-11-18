
int badgeDistribution(vector<int>&arr) {
    int n = arr.size();
    vector<int>left(n , 1);

    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[i - 1]) {
            left[i] = left[i - 1] + 1;
        } else {
            left[i] = 1;
        }
    }

    int cur;
    int prev = 1;
    int ans = max(left[n - 1] , 1);

    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] > arr[i + 1]) {
            cur = prev + 1;
        } else {
            cur = 1;
        }

        ans += max(ans , cur);
        cur = prev;
    }

    return ans;

}
