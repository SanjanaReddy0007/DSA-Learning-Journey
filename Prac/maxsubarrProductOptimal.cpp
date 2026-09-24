int maxProduct(vector<int>&arr)
{
    int n = arr.size();
    double ans = INT_MIN;
    int pref = 1;
    int suf = 1;

    for(int i = 0; i < n; i++) {
        if(pref == 0) pref = 1;
        if(suf == 0) suf = 1;
        pref *= arr[i];
        suf *= arr[n - i - 1];
        ans = max(ans,max(pref , suf));
    }

    return ans;

}

