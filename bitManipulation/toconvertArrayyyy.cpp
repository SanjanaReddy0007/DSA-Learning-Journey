
int helper(int start , int goal, vector<int>& ans)
{
    int count = 0;
    int n = start ^ goal;

    while(n != 0) {
        count++;
        n = n & (n - 1);
    }

    ans.push_back(count);

}


int minBitFlipsToConvertAnArray(vector<int>&arr, vector<int>&arr2, int n)
{
    vector<int>ans;
    for(int i = 0; i < n; i++) {
        helper(arr1[i] , arr2[i], ans);
    }
    return ans;
}


