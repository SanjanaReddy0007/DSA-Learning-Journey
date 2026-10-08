
void Subsequence(int i, vector<int>&v, vector<vector<int>>&ans,int arr[] , int n) {
    if(i == n) {
        ans.push_back(n);
        return;
    }

    v.push_back(arr[i]);
    Subsequence(i + 1, v, ans, arr,n);

    v.pop_back();
    Subsequence(i + 1, v , ans, arr,n);

}


vector<vector<int>>findsubseq(vector<int>&arr , int n) {
    vector<vector<int>>ans;
    vector<int>v;
    Subsequence(0,v,ans,arr,n);
    return ans;
}

