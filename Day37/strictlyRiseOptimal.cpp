#include<bits/stdc++.h>
using namespace std;

int strcitlyIncreasing(vector<int>& values)
{
    int start = 0; //for resetting
    long long ans = 0;

    for(int i = 1; i < n; i++) {
        if(values[i] <= values[i - 1]) {
            ans += 1;
            start = i;
        } else {
            ans += (i - start + 1);
        }
    }

    return ans;
}

//O(n)
//SC :- O(1)


