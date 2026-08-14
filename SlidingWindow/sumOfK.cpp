#include<bits/stdc++.h>
using namespace std;

//BRUTE m*n

int maxSumSubarr(vector<int>&arr, int k)
{
    int n = arr.size();
    int maxSum = 0;

  for(int i = 0; i < k; i++) {
    int sum = 0;
    for(int j = i; j < n; j++) {
        sum += arr[j];
    }

        if(sum > maxSum) {
            maxSum = sum;
        }
    
  }
  return maxSum;
}


//OPTIMAL
int maxSumSubarr(vector<int>&arr , int k)
{
    int n = arr.size();
    int maxSum = 0;
int sum = 0;

for(int i = 0; i < k; i++) {
    sum += arr[i];
}

    maxSum = sum;
    for(int i = k; i < n; i++) {
        sum += sum[i] - sum[i - k];
        maxsum = max(sum , maxSum);
    }

    return maxSum;
}

//O(n)
//O(1)
