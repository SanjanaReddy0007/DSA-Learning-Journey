
int minimumSubarraysum(vector<int>&arr) {
    int n = arr.size();
    vector<int>nse(n , -1);
    int m = (int)1e8;
    stack<int>stk;
   
    for(int i = n - 1; i >= 0; i--) {
        while(!stk.empty() && arr[stk.top()] >= arr[i]) {
            stk.pop();
        }
        if(!stk.empty()) {
            nse[i] = stk.top();
        } else {
            nse[i] = n;
        }
        stk.push(i);
    }

    vector<int>prev(n);
    if(!stk.empty()) stk.pop();

    for(int i = 0; i < n; i++) {
        while(!stk.empty() && arr[stk.top()] > arr[i]) {
            stk.pop();
        }
        if(!stk.empty()) {
            prev[i] = stk.top(); 
        }else {
            prev[i] = -1;
        }
        stk.push(i);
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        long long num = (nse[i] - i) * (i - prev[i]);
        sum = (sum + num * arr[i]) % m;
    }
    return sum;
}


