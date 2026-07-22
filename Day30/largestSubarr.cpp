#include<bits/stdc++.h>
using namespace std;

int maxSubarray(vector<int> &arr)
{
    int n = arr.size();
    int ans = INT_MIN;

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int sum = 0;
            for(int k = i; k <= j; k++) {
                sum += arr[i];
            }

            ans = max(ans, sum);
        }
    }

    return ans;
}

//TC :- O(n^3)
//SC :- O(1)

