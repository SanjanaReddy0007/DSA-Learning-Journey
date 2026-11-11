
vector<int>firstNegativeNumber(vector<int>&num, int len, int m) {
    vecctor<int>ans;
    deque<int>DQ;

    for(int i = 0; i < m; i++) {
        if(arr[i] < 0) {
            DQ.push_back(i);
        }
    }

    for(int i = m; i < len; i++) {
        if(!DQ.empty()) {
            ans.push_back(arr[DQ.front()]);
        } else {
            ans.push_back(0);
        }

        while(!DQ.empty() && DQ.front() < (i - m + 1)) {
            DQ.pop_front();
        }
        if(arr[i] < 0) {
            DQ.push_back(i);
        }
    }

    if (!Dq.empty()) {
        ans.push_back(arr[DQ.front()]);
    } else {
        ans.push_back(0);
    }

    return ans;

}

