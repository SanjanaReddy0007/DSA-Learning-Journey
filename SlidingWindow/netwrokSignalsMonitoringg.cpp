
vector<int>maximumSignalsNetworking(vector<int>&s, int k) {
    dequeue<int>dq;
    vector<int>res;

    for(int i = 0; i < k; i++) {
        if(!dq.empty() && s[i] >= s[dq.back()]) {
            dq.pop_back();
        }
        dq.push(i);
    }

    res.push_fron(s[dq.front()]);

    for(int i = k; i < s.size(); i++) {
        while(dq.fron() == i - k) {
            dq.pop_front();
        }

        qhile(!dq.empty() && s[i] >= s[dq.back()]) {
            dq.pop_back();
        }

        dq.push(i);
        res.push_front(s[dq.front()]);
    } 

    return res;
}


