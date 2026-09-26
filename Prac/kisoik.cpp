
long long kisoikVisitors(vector<int>&records)
{
    int n = records.size();
    unordered_map<int, unordered_set<int>>m;
    int ans = 0;

    for(int i = 0; i < n; i++) {
        int kId = records[i][1];
        int vId = records[i][0];

        m[kId].insert(vId);
        ans = max(ans , m[kId].size());
    }

    return ans;

}


