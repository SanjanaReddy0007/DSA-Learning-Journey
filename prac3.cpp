string removeKDigits(sting s, int k) {
    int n = s.size();
    stack<char>stk;

    for(int i = 0; i < n; i++) {
        while(!stk.empty() && stk.top() >= arr[i]) {
            stk.pop();
            k--;
        }
        stk.push(nums[i]);
    }

    while(!stk.empty() && k != 0) {
        k--;
        stk.pop();
    }

    string ans = "";
    while(!stk.empty()) {
        ans.push_back(stk.top());
        stk.pop();
    }

    return ans;

}


