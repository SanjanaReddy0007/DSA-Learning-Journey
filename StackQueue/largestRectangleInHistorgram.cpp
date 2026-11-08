
int largestRectanglInHistogram(vector<int>&arr) {
    int n = arr.size();
    vector<int>nse(n) , pse(n);
    stack<int>Stk;

    for(int i = n - 1; i >= 0; i--) {
        while(!stk.empty() && arr[stk.top()] >= arr[i]) {
            stl.pop();
        }
        if(!stk.empty()) {
            nse[i] = stk.top();
        } else {
            nse[i] = n;
        }
        stk.push(i);
    }

    while(!stk.empty()) stk.pop();

    for(int i = 0; i < n; i++) {
        while(!stk.empty() && arr[stk.top()] >= arr[i]) {
            stk.pop();
        }
        if(!stk.empty()) {
            pse[i] = stk.top();
        } else {
            pse[i] = -1;
        }
        stk.push(i);
    }

    int ans = -1;
    for(int i = 0; i < n; i++) {
        ans = max(ans , arr[i] *(nse[i] - pse[i] -1));
    }

    return ans;
}


