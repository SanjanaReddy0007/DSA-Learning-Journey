int countValidSegments(string s)
{
    int n = s.size();
    int ans = 0;
    for(int i = 0; i < n; i++) {
        vector<int>freq(26,0);
        for(int j = i; j < n ; j++) {
            freq[s[j] - 'a']++;
            if(freq[s[j] - 'a'] > 1) break;
            ans++;
        }
    }
    return ans;
}

//O(n^2)
//O(1)