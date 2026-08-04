#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int k) {
   int n = arr.size();
   int left = 0, right = arr.size();

   while(left < right) {
    int mid = (left + right) / 2;

     if(arr[mid] >= k) {
         right = mid;
     } else {
        left = mid + 1;
     }
   }

   return left;
}


bool finelement(vector<int>& arr, int k)
{
    binarySearch(arr,k);
    binarySearch(arr,k+1);
    return right - left + 1;
}


//O(nlogn)
//SC :- O(1)
