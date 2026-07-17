#include<bits/stdc++.h>
using namespace std;

vector<int>TwoSum(vector<int>arr, int k)
{
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i][j] == k) {
                return {i,j};
            }
        }
    }

    return {-1,-1};
}


//TC :- O(n*n)
//SC :- O(1)

