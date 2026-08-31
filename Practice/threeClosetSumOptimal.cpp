

vector<int>closetSum(vector<int>&arr, int target) {
    int n = arr.size();
    sort(arr.begin() , arr.end());

    for(int i = 0; i < n; i++) {
        int left = i + 1, right = n - 1;

        while(left < right) {
            int currSum = arr[i] + arr[left] + arr[right];

            if(abs(currSum - target) < abs(closetSum - target)) {
                closetSum = currSum;
            }

            if(currSum < target) {
                left++;
            } else if(currSum > target) {
                right--;
            } else {
                return currSum;
            }
        }
    }
    return closetsum;
}

