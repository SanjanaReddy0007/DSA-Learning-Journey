#include <bits/stdc++.h>
using namespace std;


vector<int>delaycount(vector<int>& arr, int delay)
{
    int n = arr.size();
    vector<int>ans(n,0);
    const int MAXV = 100000;
    vector<int>freq(MAXV + 1,0);

    for(int i = n - 1; i >= 0; i--) {
        int t = delay + i + 1;
        if(t < n) {
            freq[arr[t]]++;
        }

        ans[i] = freq[arr[i]];
    }

return ans;
}


//TC :- O(n)
//SC :- O(1)

