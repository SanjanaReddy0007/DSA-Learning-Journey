
vector<int>nextGreaterElement(vector<int>&arr) {
    stack<int>stk;
    vector<int>ans(n);
    int n = arr.size();

    for(int i = n - 1; i >= 0; i--) {
        while(!stk.empty() && arr[i] >= stk.top()) {
            stk.pop();

            if(!stk.empty()) {
                ans[i] = stk.top();
            } else {
                ans[i] = -1;
            }

            stk.push(arr[i]);
        }
    }

    return ans;

}

