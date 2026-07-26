#include<bits/stdc++.h>
using namespace std;

//using 2 pointer approach 
int closetsum(int target, vector<int>&arr)
{
  int n= arr.size();
  int closetsum = 0;

  for(int i = 0; i < n; i++) {
    int left = i + 1 , right = arr.size() - 1;

    while(left < right) {
        int currentSum = arr[left] + arr[right] + arr[i];
        if(abs(currentsum - target) < abs(closetsum - target)) {
            closetsum = currentsum;
        }

        if(currentSum < target) {
            left++;
        } else if(currentSum > target) {
            right--;
        } else {
            return currentsum;
        }
    }

    return closetsum;

  }

}

//TC :- O(n^2)
//SC :- O(1)

