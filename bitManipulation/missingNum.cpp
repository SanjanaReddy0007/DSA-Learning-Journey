int missingNumber(vector<int>&arr) {
    int n = arr.size();
    int sum = (n * (n + 1) )/ 2;

    for(int i = 0; i < n; i++) {
        int actual += arr[i];
    }

    return sum - actual;
}

