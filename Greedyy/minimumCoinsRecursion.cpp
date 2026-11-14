
int f(vector<int>&arr, int amount) {
    int n = arr.size();
    if(amount == 0) return 0;
    if(amount < 0) return -1;
    
    int mini = INT_MAX;
    for(int i =0 ; i < n; i++) {
        int count = f(arr,amount - arr[i]);
        if(count != -1) {
            mini = min(mini,1 + count);
        }
    }

    if(mini != INT_MAX) return mini;
    return -1;

}

int minimucoins(vector<int>&arr, int amount) {
    return f(arr,amount);
}

