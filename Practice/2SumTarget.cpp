vector<int>TwoSumTarget(vector<int>&arr, int target)
{
    int n = arr.size();
    int right = n - 1, left = 0;

    while(left < right) {
        int sum = arr[left] + arr[right];

        if(sum == target) {
            return {left + 1, right + 1};
        }

        if(sum < target) {
            left++;
        } else {
            right--;
        }
    }

    return {-1,-1};
}


