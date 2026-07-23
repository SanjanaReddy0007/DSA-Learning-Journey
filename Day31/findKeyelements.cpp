#include<bits/stdc++.h>
using namespace std;


vector<long long>findkeyelements(vector<int>&arr, int T)
{
   int n = arr.size();
   long long rightsum = 0;
   vector<long long>keyElements;

   if(n > 0) {
       keyElements.push_back(arr[n-1]);
   }

   for(int i = n-2; i >= 0; i--) {
       rightsum += arr[i + 1];
       if(arr[i] > rightSum) {
          keyElements.push_back(arr[i]);
       }
   }

   reverse(keyelements.begin() , keyElements.end());
   return keyElements;

}


//TC :- O(n)
//SC :- O(n)
