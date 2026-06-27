#include<bits/stdc++.h>
using namespace std;


int findMaximumPair(vector<int>&weights, int threshold) {
   int n = weights.size();
   
   sort(weights.begin() , weights.end());
   int ans = INT_MAX;

   int left = 0, right = weights.size() - 1;
   while(left < right) {
     int sum += weights[left] + weights[right];

     if(sum < threshold) {
        ans = max(ans,sum);
        left++:
     }else{
        right--;
     }
   }

   return sum;

}


//TC:- O(nlong)
//SC:- O(1)



