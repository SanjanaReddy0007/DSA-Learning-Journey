#include<bits/stdc++.h>
using namespace std;

int maxsubarray(vector<int>& arr)
{
    int n = arr.size();
    double ans = INT_MIN; 
    double suffix = 1;
    double prefix = 1;

    for(int i = 0; i < n; i++) {
        if(prefix == 0 ) prefix = 1;
        if(suffix == 0) suffix = 1;
        prefix *= arr[i];
        suffix *= arr[n - i - 1];

        ans = max(ans, max(prefix,suffix));
    }

    return (int)ans;
}

//TC :- O(n)
//SC :- O(1) space complexity is linear not need much

