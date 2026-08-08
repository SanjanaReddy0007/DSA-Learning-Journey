#include<bits/stdc++.h>
using namespace std;

int findSqrt( int n) {
   int low = 0, high = n - 1;
   int ans = -1;

   while(low <= high) {
      int mid = (low + high) / 2;
      if(mid * mid <= n)  {
         ans = mid;
         low = mid + 1;
      } else {
         high = mid - 1;
      }
   }

   return -1;
}

//O(nlogn)
//O(1)
