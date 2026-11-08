
int largestRectangleInHistogram(vector<int>&arr) {
    int n = arr.size();
    stack<int>stk;

    for(int i = 0; i < n; i++) {
        while(!stk.empty() && arr[stk.top()] >= arr[i]) {
            int x = arr[stk.top()];
            stk.pop();

            if(!stk.empty()) {
                ans = max(ans , x *(i - stk.top() - 1));
            } else {
                ans = max(ans , x * i);
            }
        }
           stk.push(i);
    }


    while(!stk.empty()) {
        int x = stk.top();
        stk.pop();

        if(!stk.empty()) {
            ans = max(ans , x *(n - stak.top() - 1));
        } else {
            ans = max(ans , x * (n));
        }
    }

    return ans;
}


