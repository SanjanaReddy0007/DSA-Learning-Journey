
int maxPairThreshold(vector<int>&arr , int threshold) {
    int n = arr.size();
    sort(arr.begin() , arr.end());

    int ans = -1;
    int left = 0, right = n - 1;
    while(left < right) {
        int sum = arr[left] + arr[right];

        if(sum > threshold) {
            right--;
        } else{
            ans = max(ans, sum);
            left++;
        }
    }

    return ans;

}

