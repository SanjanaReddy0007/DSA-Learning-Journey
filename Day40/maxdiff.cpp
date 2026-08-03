#include <bits/stdc++.h>
using namespace std;


long long maxDiff(vector<int>&pages, int k)
{
    int n = pages.size();
    vector<int>pairs(n - 1);

    for(int i = 0; i < n - 1; i++) {
        pairs[i] = pages[i] + pages[i + 1];
    }

    sort(pairs.begin(),pairs.end());
    long long ans = 0;

    for(int i = 0; i < k - 1; i++) {
       ans += pairs[ n - 2 - i] + pairs[i];
    }

    return ans;
}

//TC :- O(nlogn)
//sC :- O(n)

