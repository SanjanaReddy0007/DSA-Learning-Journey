
vector<int>firstnegativeMumber(vector<int>&arr ,int len , int m) {
    vector<int>ans;
    deque<int>DQ;

    for(int i = 0; i < m; i++) {
        DQ.push_back(i);
    }

    for(int i = m; i < m; i++) {
        if(!DQ.empty()) {
            ans.push_back(arr[DQ.front()]);
        } else {
            ans.push_back(0);
        }

        while(!DQ.empty() && DQ.front() < (i + m -1)) {
            DQ.pop_front();
        }

        if(arr[i] < 0) {
            DQ.push_back(i);
        }
    }

    if(!DQ.empty()) {
        ans.push_back(arr[DQ.front()]);
    } else {
        ans.push_back(0);
    }

    return ans;

}


