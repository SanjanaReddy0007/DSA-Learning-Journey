int majorityel(vector<int>&arr)
{
    int n = arr.size();
    vector<int>nums=arr;
    sort(nums.begin(), nums.end());

    return nums[n / 2];
}


int mjorityEl(vector<int>&arr) {
    int n = arr.size();

    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > n / 2) {
            return arr[i];
        }
    }

    return -1;

}


