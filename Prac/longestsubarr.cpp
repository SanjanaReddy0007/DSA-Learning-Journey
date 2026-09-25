int longestSubarrSumToZero(vector<int>&nums)
{
    int n = nums.size();
    unordered_map<int,int>m;
    int sum = 0;
    int maxLen = INT_MIN;

    for(int i = 0; i < n; i++) {
         sum += nums[i];

         if(sum == 0) {
            maxLen = i + 1;
         }

         if(m.find(sum) != m.end()) {
            maxLen = max(maxLen , i - m[sum]);
         } else {
            m[sum] = i;
         }
    }

    return maxLen;

}


