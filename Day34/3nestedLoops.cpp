#include<bits/stdc++.h>
using namespace std;

int threeClosetSum(int target,vector<int>& arr)
{
  int n = arr.size();
  int closetSum = INT_MIN / 2;

  for(int i = 0; i < n-2; i++) {
    for(int j = i + 1; j < n - 1; j++) {
        for(int k = j + 1; k < n; k++) {
            int currentsum = arr[i] + arr[j] + arr[k];
            if(abs(currentsum - target) < abs(closetSum - target)) {
                closetSum = currentSum;
            }
        }
    }
  }

  return closetsum;
}

//TC :- O(n^3)
//SC :- O(1)

