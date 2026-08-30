intlongestsequence(vector<int>&arr)
{
    int n = arr.size();
    unordered_set<int>s;

    for(int i = 0; i < n; i++) {
        s.insert(arr[i]);
    }

    int count = 1;
    int ans = 0;
    for(int x : s) {
        if(s.find(x - 1) == s.end()) {
            count = 1;
            int next = x + 1;
            while(s.find(next) != s.end()) {
                count++;
                next++;
            }

            ans = max(ans,count);
        }
    }
    
    return ans;
}

