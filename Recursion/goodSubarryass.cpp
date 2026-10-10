
int goodSubarrays(vector<int>&arr, int k) {
    int n = arr.size();
   
    int oddCount = 0, validCount = 0;
    int left = 0, ans = 0;

    for(int right = 0; right < n; right++) {
        if(arr[right] % 2 == 1) {
            oddCount++;
            validCount = 0;
        }
   
        if(oddCount == k) {
            validCount++;

            if(arr[left] % 2 == 1) {
                oddCount--;
                left++;
            }
        }

        ans += validCount;
    }

    return ans;

}

