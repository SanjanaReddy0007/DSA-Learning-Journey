
int delayFrequecycount(vector<int>&arr, int delay)
{
    int n = arr.size();
    vector<int>ans(n , 0);

    for(int i = 0; i < n; i++) {
        int cnt = 0;
        for(int j = i + delay + 1; j < n ; j++) {
            if(arr[j] == arr[i]) {
                cnt++;
            }
        }
        ans[i] = cnt;
    }

    return ans;

}

