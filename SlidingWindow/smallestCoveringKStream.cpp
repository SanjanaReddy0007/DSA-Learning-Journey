#include <bits/stdc++.h>
using namespace std;

class solution {
  public:
  vector<int> findSmallestIntervalCoveringKStreams(vector<vector<int>>& arr) { 
      int k = arr.size();
      vector<int>indices(k,0);
      vector<int>range = {INT_MAX,0};

      while(true) {
           int currMin = INT_MAX, currMAx = INT_MIN;
          int smallIndex = 0;

      for(int i = 0; i < k; i++) {
          int currentEl = arr[i][indices[i]];
          if(currentEl < currMin) {
            currMin = currentEl;
            smallIndex = i;
          }

          if(currentEl > currentMax) {
             currMax = currentEl;
          }
      }

      if(currMax - currMin < range[1] - range[0]) {
         range[0] = currMin;
         range[1] = currMax;
      }

      if(++indices[smallIndex] == arr[minIndex]) break;
  }
   return range;
  }
};
//O(k*m)
//O(k)

