
 vector<int> nearestSmallerElement(vector<int> arr) {
        // Write your code here...
        int n = arr.size();
        stack<int>stk;
        vector<int>ans(n , -1);
        
        for(int i = 0; i < n; i++) {
            while(!stk.empty() && stk.top() >= arr[i]) {
                stk.pop();
            }
            if(!stk.empty()) {
                ans[i] = stk.top();
            }
            stk.push(arr[i]);
        }
        
        return ans;
        
    }

