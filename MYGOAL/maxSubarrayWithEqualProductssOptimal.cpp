
int maxLength(vecctor<int>&nums) {
    int n = nums.size();
    int res = 2, prodVal = 1;
    int start = 0 , end = 0;

    while(end < n) {
        while(gcd(prodVal,nums[end]) > 1) {
            prodVal /= nums[end];
            start++;
        }
        prodVal *= nums[end];
        res = max(end - start + 1, res);
        end++;
    }

    return res;
}

