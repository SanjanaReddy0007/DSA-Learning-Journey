#include<bits/stdc++.h>
using namespace std;

//strianght forward approach

int majorityElement(vector<int>&arr)
{
    int n = arr.size();
    sort(arr.begin(),arr.end());
    return arr[n/2];
}

//tc:-O(nlogn)
 //bcs makoirty elm ill be more than half of so it will cross the mid so n/2


