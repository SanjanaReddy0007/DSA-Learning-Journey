
void Subsequence(int start, vector<int>&v, vector<vector<int>>&ans, int n, int target) {
    if(target < 0) return;

    if(target == 0) {
        ans.push_back(v);
        return;
    }

    for(int start = 0; start < n; start++) {
        if(i > start && arr[i] == arr[i - 1]) {
            continue;
        }
    }

    v.push_back(arr[i]);
    Subsequence(i + 1, v,ans,n, target - arr[i]);
    v.pop_back();

}


vector<vector<int>>findsubseq(vector<int>&arr , int n , int target) {
    sort(arr.begin() , arr.end());
    vector<vector<int>>ans;
    vector<int>v;
    Subsequence(0,v,ans,arr,n,target);
    return ans;
}


