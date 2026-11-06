
int minSubarryaSum(vector<int>&arr) {
    int n = arr.size();
    vector<int>ans(n);
    int m = (int)1e8;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        int mini = INT_MAX;
        for(int j = i + 1; j < n; j++) {
            mini = min(min , arr[j]);
            sum = (sum + mini) % m;
        }
    }

    return sum;
}

//TC :- O(n^2)
//SC :- O(1)

