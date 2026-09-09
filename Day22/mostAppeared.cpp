
int mostFrequent(int n, vector<int>&nums) {
    unordered_map<int,int>freq;

    int maxFreq = 0;
    int num = nums[0];

    for(int num : nums) {
        freq[num]++;

        if(freq[num] > maxFreq) {
            maxFreq = freq[num];
            ans = num;
        }
    }

    return ans;
}


