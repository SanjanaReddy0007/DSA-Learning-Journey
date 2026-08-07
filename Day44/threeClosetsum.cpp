#include <bits/stdc++.h>
using namespace std;

int closetsum(vector<int>&arr, int target)
{
    int n = arr.size();
    int closetSum = INT_MAX / 2;

    for(int i = 0; i < n - 2; i++) {
        for(int j = i + 1; j < n - 1; j++) {
            for(int k = j + 1; k < n; k++) {
                int sum = arr[i] + arr[j] + arr[k];
                if(abs(sum - target) < abs(closetSum - target)) {
                    closetSum = sum;
                }
            }
        }
    }

    return closetSum;
}

//TC :- O(n^2)
//SC :- O(1)
