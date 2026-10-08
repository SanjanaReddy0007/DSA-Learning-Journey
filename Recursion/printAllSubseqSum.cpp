void Subsequence(int i, vector<int>&v,int sum, vector<vector<int>>&ans,int arr[] , int n, int k) {
    if(i >= n) {
        if(sum == k) {
        ans.push_back(n);
        return;
    }
 }

    v.push_back(arr[i]);
    Subsequence(i + 1, v, sum + arr[i], ans, arr,n);

    v.pop_back();
    Subsequence(i + 1, v , ans, arr,n);

}


vector<vector<int>>findsubseq(vector<int>&arr , int n), int k {
    vector<vector<int>>ans;
    vector<int>v;
    Subsequence(0,v,0,ans,arr,n,k);
    return ans;
}

