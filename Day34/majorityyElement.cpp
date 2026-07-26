#include<bits/stdc++.h>
using namespace std;

bool checksubaarraysum(ivector<int>&arr)
{
   int sum = arr[0];

   for(int i = 1; i < arr.size(); i++) {
      if(arr[i - 1] == 0 && arr[i] == 0) {
        return true;
      }

      sum += arr[i];
      if(sum % m == 0) return true;

      int tempsum = sum;
      int j = 0;

      while((i - j) > 1 && tempsum >= m) {
        tempsum -= arr[j];
        j++;


        if(tempsum % m == 0) {
            return true;
        }
      }
   }

   return false;
}


//TC :- O(n^2) 
//SC :- O(1) for using constant variables
//For every ending index i, first check the entire subarray from the beginning to i. If that doesn't work, move the left boundary forward one element at a time, subtracting the removed elements from the sum, and check every smaller subarray that ends at i.


