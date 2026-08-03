#include <bits/stdc++.h>
using namespace std;


long long increasingSubarr(vector<int>& pairs) {
    int n = pairs.size();
    long long ans = 1;
    int start = 0;

    for(int i = 1; i < n; i++) {
        if(pairs[i] <= pairs[ i - 1]) {
            ans = += 1;
            start = i;
        } else {
            ans += (i - start + 1);
        }
    }
    return ans;
}


//TC :- O(n)
//SC :- O(1)
