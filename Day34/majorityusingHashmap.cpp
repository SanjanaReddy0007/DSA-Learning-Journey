#include<bits/stdc++.h>
using namespace std;


vector<int>majorityUsingHashMap(vector<int>&arr)
{
    int n = arr.size();
    vector<int>ans;
    unordered_map<int,int>m;

    for(int i = 0;i < n; i++) {
        m[arr[i]]++;
        if(arr[i] > n/3 + 1) {
            ans.push_back(arr[i]);
        }

    if(ans.size() > 2) break;

 }

    return ans;

}

//O(n) 
//O(n)

