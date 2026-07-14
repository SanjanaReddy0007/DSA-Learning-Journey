#include<bits/stdc++.h>
using namespace std;

vector<int>SquareOfOrderArr(vector<int>&arr) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        arr[i] = arr[i] * arr[i];
    }

    sort(arr.begin(),arr.end());
    return arr;
}


//TC :- O(nlogn)
//SC :- O(1)

