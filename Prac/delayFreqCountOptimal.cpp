
int delayFrequecycount(vector<int>&arr, int delay)
{
    int n = arr.size();
    int maxv = 10000;
    vector<int>freq(maxv + 1, 0);
    vector<int>ans;

    for(int i = n - 1; i >= 0; i--) {
        int t = delay + i + 1;
        if(t < n) {
            freq[arr[t]]++;
        }
        ans[i] = freq[arr[i]];
    }

    return ans;

}


