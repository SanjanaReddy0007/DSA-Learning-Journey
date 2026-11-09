
string removalChars(string s,int k) {
    int n = s.length();
    stack<pair<char,int>>stk;

    for(int i = 0; i < n; i++) {
        if(!stk.empty() && st.top().first == s[i]) {
            stk.top().second++;
        } else {
            stk.push({s[i] , 1});
        }

        if(stk.top().second == k) {
           stk.pop();
        }
    }

    string res = "";
    while(!stk.empty()) {
        int count = stk.top().second;
        while(count--) {
            res.push_back(stk.top().first);
        }
        stk.pop();
    }
    
    return res;
}

