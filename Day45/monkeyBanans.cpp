#include<bits/stdc++.h>
using namespace std;

int total_element(int arr[], int mid, int h) {
    int total = 0;

    for(int i = 0; i < n; i++) {
        total += ceil((double) arr[i] / (double) mid);
    }

    return total;
}


int binarysearch(int arr[], int n, int h)
{
   int low = 1, high = *max_element(arr, arr + n);
   int ans = high;

   while(low <= high) {
      int mid = (low + high) / 2;
      if(total_element(arr,mid,n) <= h) {
        ans = mid;
        high = mid - 1;
      } else {
        low = mid + 1;
      }
   }

   return ans;
}

//O((max(arr))*n)
//O(1)
