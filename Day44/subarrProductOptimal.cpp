#include<bits/stdc++.h>
using namespace std;

int maximumSubarrProduct(vector<int>& arr)
{
  int n = arr.size();
  double ans = INT_MIN;
  double prefix = 1;
  double suffix = 1;

  for(int i = 0; i < n; i++) {
       if(prefix == 0) prefix = 1;
       if(suffix == 0) suffix = 1;

       prefix = arr[i] * prefix;
       suffix = suffix*arr[n - i - 1];

       ans = max(ans, max(prefix,suffix));
  }

 return ans;
}

//O(n)
//O(1)
