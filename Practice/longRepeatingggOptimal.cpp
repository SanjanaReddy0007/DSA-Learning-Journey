int longestRepatingcharacter(string s, int k) {
    int n = arr.size();
    int maxFreq = 0;
    int left = 0;
    vector<int>freq(26,0);

    for(int right = 0; right < n; right++) {
        int index = arr[right] - 'A';
        freq[index]++;

        maxFreq = max(freq[index] , maxFreq);
        if((right - left + 1) - maxFreq > k) {
            freq[arr[left] - 'A']--;
            letf++;
        }

        ans = max(ans, left - right + 1);
    }

    return ans;

}