#include<bits/stdc++.h>
using namespace std;

int sumOfSubArr(vector<int>& arr)
{
   int n = arr.size();
   int ans = INT_MIN;

   for(int i = 0; i < n; i++) {
    int sum = 0;
    for(int j = i + 1; j < n; j++) {
        sum += arr[j];
        ans = max(ans, sum);
     }
  }
  
  return ans;

}

//O(n^2)
//SC :- O(1)
