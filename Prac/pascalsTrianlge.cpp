vector<vector<int>>PascalsTrianlge(int n)
{
    if(n == 1) {
        return {{1}};
    }

    if(n == 2) return {{1},{1,1}};
    vector<vector<int>>ans = {{1},{1,1}};
    vector<int>prev = {1,1};

    for(int i = 3; i <= n; i++) {
        vector<int>cur(i);
        cur[i] = 1;
        cur[i - 1] = 1;
        for(int j = 1; j <= i; j++) {
            cur[i] = prev[j] + prev[ j - 1];
        }
        ans.push_back(cur);
        cur = prev;
    }

    return ans;

}



