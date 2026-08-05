#include <bits/stdc++.h>
using namespace std;


int longestsubsequence(vector<int>&arr)
{
    int n = arr.size();
    unordered_set<int>s;

    for(int i = 0; i < n; i++) {
        s.insert(arr[i]);
    }

    int count = 0;
    int next = 1;

    for(auto x : s) {
        if(x.find(x - 1) == x.end()) {
            count = 1;
            int next = x + 1;
            while(x.find(next) != x.end()) {
                count++;
                next++;
            }
            ans = max(ans,count);
        } 
    }

    return ans;
}

//TC :- O(n) SC :- O(n)

