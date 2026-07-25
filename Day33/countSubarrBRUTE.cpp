#include<bits/stdc++.h>
using namespace std;


int countSubarray(vector<int>&arr)
{
    int n = arr.size();
    int count = 0;
    
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++ ) {
            int sum = 0;
            for(int k = i; k <= j; k++) {
                sum += arr[k];
            }

            if(sum == target) count++;

        }
    }

    return count;
}

//TC :- O(n^3)
//SC :- O(1)
