#include<bits/stdc++.h>
using namespace std;


int longestConsecutive(vector<int>&arr)
{
    int n = arr.size();
    unordered_set<int>S;

   for(int i = 0; i < n; i++) {
    S.insert(arr[i]);
   }

   int count = 1;
   int ans = 0;

   for(auto x:S) {
    if(S.find(x - 1) == S.end()) {
         count = 1;
         int next = x + 1;
        while(S.find(next) != S.end()) {
            count++;
            next++;
        }
         ans = max(ans,count);
     }
   }
    
   return ans;

}


//TC :- O(n)
//SC :- O(n)


