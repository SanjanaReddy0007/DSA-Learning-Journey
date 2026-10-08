
bool Subsequence(int i, vector<int>&v, int sum,int arr[] , int n,int k) {
    if(i >= n) {
        return sum == k;
    }

    v.push_back(arr[i]);
    if(Subsequence(i + 1, v,sum + arr[i], arr,n,k)) rteurn true;

    v.pop_back();
    if(Subsequence(i + 1, v , sum, arr,n,k)) return false;

}


 vector<int> findSubSequencesWithSumK(int arr[], int n, int k) {
        vector<int>v;
        return Subsequence(i,arr,sum,v,k);
 }



