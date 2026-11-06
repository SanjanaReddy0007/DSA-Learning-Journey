
vector<int>nextGreaterelementCirculrII(vector<int>&nums) {
    int n = nums.szie();
    vector<int>ans(n , -1);
    stack<int>stk;

    for(int i = 2*n - 1; i >= 0; i--) {
        while(!stk.empty() && arr[i % n] >= stk.top()) {
            stk.pop();
        }

       if(!stk.empty()) {
          ans[i] = arr[i%n];
       }
     
       stk.push(arr[i%n]);
    }
    return ans;

}

//TC & SC :- O(n)

