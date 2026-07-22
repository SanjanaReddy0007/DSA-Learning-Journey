#include<bits/stdc++.h>
using namespace std;


int majorityusing hashmap(vector<int>&arr)
{
    int n  = arr.size();
    unorderedmap<int,int>mp;

    for(int i = 0; i < n; i++) {
        mp[arr[i]] += 1;
    }

    for(auto x : mp) {
        if(x.second > n/2) {
            return x.first;
        }
    }

    return -1;
}

//O(nlogn) TC
//SC :- O(n)

