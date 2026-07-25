#include<bits/stdc++.h>
using namespace std;


int countSubarr(vector<int>&arr)
{
    int n = arr.size();
    int count = 0;

    for(int i = 0; i < n; i++) {
        int sum = 0;

        for(int j = i; j < n; j++) {
            sum += arr[j];

            if(sum == target) count++;
        }
    }

    return count;
}

//TC :- O(N^2)
//SC :- O(1)
