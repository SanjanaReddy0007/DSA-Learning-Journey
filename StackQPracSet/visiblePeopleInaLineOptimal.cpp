
vector<int>visiblePeopleInALine(vector<int>&arr) {
    int n = arr.size();
    stack<int>stk;vector<int>ans(n,0);

    for(int i = n - 1; i >= 0; i--) {
        while(!stk.empty() && arr[i] > stk.top()) {
            ans[i]++;
            stk.pop();
        }
        if(!stk.empty()) {
            ans[i]++;
        }
        stk.push(arr[i]);
    }

    return ans;

}

