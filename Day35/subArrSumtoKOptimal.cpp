#include<bits/stdc++.h>
using namespace std;


long long subarraySumToK(vector<int> & arr, int k)
{
    if(k <= 1) return 0;

   int n = arr.size();
   long long product = 1;
   long long count = 0;

   int left = 0;
   for(int right = 0; right < n; i++) {
        product *= arr[right];
        
        while(product >= k) {
            product /= arr[left];
            left++;
        }

        count += right - left + 1;
   }

   return count;
}

//TC :- O(n)
//SC :- O(1)


