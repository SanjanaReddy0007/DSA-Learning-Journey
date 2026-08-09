#include<bits/stdc++.h>
using namespace std;

class hugeArray{
    public:
       HugeArray(vector<int>& values);
       int valueAt(long long indx);
       long long length();
}

class Solution{
    public:
      int countsegments(HugeArray* data) {
         int n = data -> length();
         int index = 0;
         int blocks = 0;

         while(index < n) {
            int low = index;
            int high = n - 1;
            int currentIndex = data -> valueAt(index);
            long long lastSame = index;

            while(low <= high) {
                long long mid = low + (high - low) / 2;
                if(data->valueAt(mid) == currentIndex) {
                    lastSame = mid;
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }

            blocks++;
            index = lastSame + 1;
         }
      }

      return blocks;
}





