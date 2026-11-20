
int goodPlaylists(int k, vector<int>& A) {
    
    vector<long long>freq(k , 0);
    long long ans = 0;

    for(auto x : A) {
        int r = x % k;
        rem = (k - r) % k;
        ans +=  freq[rem];
       freq[r]++;
    }

    return ans;

}

