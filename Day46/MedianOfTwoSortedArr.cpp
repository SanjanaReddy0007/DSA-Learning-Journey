#include<bits/stdc++.h>
using namespace std;

double medianOfTwoSortedArray(vectot<int>&arr1, vector<int>&arr2)
{
  vector<int>merged = arr1;
  merged.insert(merged.end(),arr2.begin() , arr2.end());

  sort(merged.begin() , merged.end());
  int total = merged.size();

  if(total%2 == 1) {
     merged[total/2];
  } else {
    int mid1 = merged[total/2 - 1];
    int mid2 = merged[total/2];
     return (mid1 + mid2) % 2.0;
  }
}


//O((n + m)  log(n + m))
//O(n + m)
