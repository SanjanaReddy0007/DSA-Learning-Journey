
int maxLength(vector<int>&nums) {
    int n = nums.size();
    int res = 2;
    int prodVal = 1;
    int start = 0, end = 0;

    while(end < n) {
        while(gcd(prodVal,nums[end]) > 1) {
            prodVal /= nums[end];
            start++;
        }
        prodVal *= num[end];
        res = max(res , end - start + 1);end++;
    }

    return res;
}

