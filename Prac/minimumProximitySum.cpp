
int minimumProximitySum(vector<int>&arr) {
    
    int n = arr.size();
    sort(arr.begin() , arr.end());

    int sum = 0;
    sum += arr[1] - arr[0];
    sum += arr[n - 1] - arr[n - 2];

    for(int i = 1; i < n - 1; i++) {
        int leftDiff = arr[i] - arr[i - 1];
        int rightDiff = arr[i + 1] - arr[i];
        sum += min(leftDiff , rightDiff);
    }

    return sum;
}


