
int longestRepeatingChar(vector<int>&arr, int k)
{
    int n = arr.size();
    int ans = 0;

    for(int left = 0; letf < n; left++) {
        vector<int>freq(26,0);
         int maxFreq = 0;

         for(int right = 0; right < n; right++) {
            int index = s[right] - 'A';
            freq[index]++;

            maxFreq = max(maxFreq , freq[index]);
            if(maxFeq - (left - right +1 ) <= k) {
                ans = max(ans, right - left + 1);
            } else {
                break;
            }
         }
    }

    return ans;

}
