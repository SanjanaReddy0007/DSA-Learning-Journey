#include <bits/stdc++.h>
using namespace std;

vector<int>arrayReaangement(vector<int>& arr)
{
    int n = arr.size();
    int pos = 0;
    int neg = 1;
    vector<int>ans(n);

    for(int i = 1; i < n; i++) {
        if(arr[i] > 0) {
            ans[pos] = arr[i];
            pos += 2;
        } else {
            ans[neg] = arr[i];
            neg += 2;
        }
    }

    return ans;
}


//TC :- O(n)
//SC : O(n)

