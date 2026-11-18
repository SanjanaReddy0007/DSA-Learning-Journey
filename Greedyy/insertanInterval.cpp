
int insertInterval(vector<vector<int>>&t, vector<vector<int>>&new) {
    int n = t.size();
    vector<vector<int>>ans;
    
    int i = 0;
    while(i < n && t[i][1] < new[0]) {
        ans.push_back(t[i]);
        i++;
    }

    int start = INT_MAX, end = -1;
    while(i < n && t[i][0] < new[1]) {
        if(start == INT_MAX) {
            start = t[i][0];
        }
        end = t[i][1];
        i++;
    }

    start = min(start, new[0]);
    end = max(end, new[1]);
    ans.push_back({start,end});

    while(i < n) {
        ans.push_back(new[i]);
    }

    return ans;

}

