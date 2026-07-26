#include<bits/stdc++.h>
using namespace std;

//set bcs only stores ingle element........in the ans 
set<int>majorityElement(vector<int>&arr)
{
    int n = arr.size();
    set<int>ans;

    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) count++;
        }

        if(count > n/3) ans.push_back(arr[i]);
    }

    return ans;
}

//TC :- O(n^2)
//SC :- O(1)

