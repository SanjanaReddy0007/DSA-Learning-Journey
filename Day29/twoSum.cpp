#include<bits/stdc++.h>
using namespace std;

vector<int>TwoSum(vector<int>&arr , int k)
{
    int n = arr.size();
    unordered_map<int,int>mp;
    
    for(int i = 0; i < n;; i++) {
        int x = arr[i] - k;
        if(m.find(x) != m.end()) {
            return {m[x] , i};
        } else {
            return m[arr[i]] = i;
        }
    }

    return {-1,-1};
}

//TC :- O(n) 
//SC :- O(1)
