#include<bits/stdc++.h>
using namespace std;


int FruitsAndBAskets(vector<int>&arr)
{
    int n = arr.size();
    int ans  = 0;

for(int i = 0; i < n; i++) {
    unordered_map<int,int>m;
    for(int j = i; j < n; j++) {
         m[arr[j]]++;

         if(m.size() > 2) {
            break;
         }
         ans = max(ans, j - i + 1);
    }
}
  return ans;
}

//O(n^2)
//O(1)