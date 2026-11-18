
vector<vector<int>>combineIntervals(vector<vector<int>>&arr) {
    int n = arr1.size();
    sort(arr1.begin() , arr1.end());
    int start = arr[0][0] , end = arr[0][1];
    vector<vector<int>>ans;

    for(int i = 1; i <= n; i++) {
        if(end >= arr1[i][1]) {
             end = max(end, arr[i][1]);
        } else {
            ans.push_back({start,end});
            start = arr[i][0];
            end = arr[i][1];
        }
    }

    ans.push_back({start,end});
    return ans;

}
