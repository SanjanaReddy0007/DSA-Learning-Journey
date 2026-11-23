
vector<int>visiblePeopleInaLine(vector<int>&arr) {
    int n = arr.size();
    vector<int>ans(n,0);

    for(int i = 0; i < n; i++) {
        int maxii = arr[i + 1];
        int count = 1;
        for(int j = i + 2; j < n; j++) {
            if(min(arr[i] , arr[j]) > maxii) {
               count++;
            }
            ans[i] = count;
            maxii = max(maxii , arr[j]);
        }
        if(i == n -2) ans[i] = count;
    }

    return ans;
}

