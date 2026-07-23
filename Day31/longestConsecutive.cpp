#include<bits/stdc++.h>
using namespace std;


int longestConsecutive(vector<int>&arr)
{
    int n = arr.size();
    if(n == 0) return 0;
    if(n == 1) return 1;

  sort(arr.begin() , arr.end());
     int count = 1;
     int ans  = 1;


  for(int i = 0; i < n; i++) {
     if(arr[i] + arr[i - 1] == 1) {
         count++;
         ans = max(ans,count);
     } else if(arr[i] + arr[i - 1] == 0) {
        continue;
     } else {
        count=1; //reset count to 1
     }
  }

   return ans;

}

//TC :- O(nlogn)
//SC :- O(1)

