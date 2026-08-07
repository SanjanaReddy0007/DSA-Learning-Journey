#include <bits/stdc++.h>
using namespace std;

int threeClosetSumOptimal(vector<int>&num, int target)
{
    int n = num.size();
    sort(num.begin() , num.end());

    int closetSum = INT_MAX / 2;

    for(int i = 0; i < n; i++) {
       int left = i + 1, right = arr.size() - 1;
       
       while(left < right) {
         int currentSum = arr[i] + arr[left] + arr[right];

         if(abs(currentSum - target) < abs(closetsum - target)) {
            closetsum = currentSum;
         }
     
         if(currentSum < target) {
            left++;
         } else if(currentsum > target) {
            right--;
         } else {
            return currentSum;
         }
       }
    }

    return closetSum;
}


//O(nn^2)
//O(1)

