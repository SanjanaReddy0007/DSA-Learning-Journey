int maximumKisoiks(vector<vector<int>>&records) {
    int n = records.size();
    int ans = 0;

    for(int i = 0; i < n; i++) {
        int kisoik = records[i][1];
        unordered_set<int>visitor;
        for(int j = 0; j < n; j++) {
            if(kisoik == records[j][1]) 
            {
               ans = max(ans, (int)visitor.size());
            }
        }
    }
    return ans;
}