
int maxPairInsubarr(vector<int>&arr, int n) {
    if(n < 2) return -1;

    int ans = INT_MIN;
    for(int i = 0; i < n; i++) {
        ans = max(ans , arr[i] + arr[i + 1]);
    }

    return ans;

}


