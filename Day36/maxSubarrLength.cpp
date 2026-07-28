#include<bits/stdc++.h>
using namespace std;


int maxLengthsubarrSumToZero(vector<int>& nums)
{
    int n = nums.size();
    int maxLength = 0;

    unordered_map<int,int>findSum;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];

        if(sum == 0) {
            maxLength = i + 1;
        }

       if(findSum.find(sum) != findSum.end()) {
          maxLength = max(maxLength, i - findSum(sum));
       } else {
         findSum[sum] = i;
       }
    }

    return maxLength;
}

//O(n)
//O(1)
