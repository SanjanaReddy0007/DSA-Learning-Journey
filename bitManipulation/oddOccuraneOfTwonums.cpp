vector<int>OddOccurancesOfTwoNumbers(vector<int>&nums) {
    int n = nums.size();

    map<int,int>m;
    vector<int>ans;

    for(int i = 0; i < n; i++) {
        m[arr[i]]++;
    }

    for(auto it : m) {
        if(it.second % 2) {
            ans.push_back(it.first);
        }
    }
    
    if(ans[0] < ans[1]) {
        swap(ans[0] , ans[1]);
    }

    return ans;
}


