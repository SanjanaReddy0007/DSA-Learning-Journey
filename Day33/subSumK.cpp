#include<bits/stdc++.h>
using namespace std;


int usbarrsumK(vector<int>&arr,int target)
{
    unordered_map<int,int>m;
    int n = arr.size();
    int count = 0;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
        if(sum == target) count++;

        count += m[sum - target];
        m[sum]++;
    }

    return count;

}

//O(n^2) in words t case when use dunorderd map
//O(nlong ) when used th orderd map 

