#include<bits/stdc++.h>
using namespace std;

int maconsecutiveOnes(vector<int>&arr,int k)
{
    int n = arr.size();
    int left = 0, right = 0, longest = 0;
    int zeroes = 0;
    
    while(right < n) {
        if(arr[right] == 0) zeroes++;

        while(zeroes > k) {
          if(arr[left] == 0) {
             zeroes--;
          }

          left++;
        }

        longest = max(longest, left - right + 1);
    }

    return longest;
}

//O(n)
//O(1)

