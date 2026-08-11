#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(vector<int>& arr)
{
  int n = arr.size();
  int left  = 0, right = 0, longest = 0, zeroes = 0;

  while(right < n) {
     if(arr[right] == 0) zeroes++;

     while(zeroes > 1) {
        if(arr[left] == 0) {
           zeroes--;
        }

        left++;
     }

     longest = max(longest, right - left + 1);
  }

  return longest;
}
//O(n)
//O(1)

