#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(vector<int>&arr)
{
    int n = arr.size();
    int maxLen = 0;

    for(int i = 0; i < n; i++) {
        int zeroes = 0;
        for(int j = i; j < n; j++) {
            if(arr[j] == 0) zeroes++;
        }

        if(zeroes <= 1) maxLen = max(maxLen, j - i + 1);
    }

    return maxLen;
}

//O(n^2) O(1)

//OPTIMAL
int maxConsecutiveOnes(vector<int>&arr)
{
   int n = arr.size();
   int longest = 0;
   int left = 0, right = 0;
   int zeroes = 0;
   
   while(right < n) {
      if(arr[right] == 0) zeroes++;

      while(zeroes > 1) {
         if(arr[left] == 0) zeroes--;
         left++;
      }
      
      longest = max(longest, left - right + 1);
   }

   return longest;
}
//O(n) O(1)

