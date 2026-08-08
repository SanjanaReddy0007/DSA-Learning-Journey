#include<bits/stdc++.h>
using namespace std;

int no_of_bouquets(int arr[],int mid, int k) {
    int bouquet = 0, count = 0;
    for(int i = 0; i < n; i++ ) {
        if(arr[i] <= mid) {
            count++;
            if(count == k) {
                bouquet++;
                count = 0;
            }
        } else {
            count = 0;
        }
    } 
    return bouquet;
}


int bouquet_Formation(int arr[],int n, int k, int m)
{
    if(m*k > n) return -1;

  int low = *min_element(arr,arr+n);
  int high = *max_element(arr,arr+n);
  int ans = high;

  while(low <= high) {
    int mid = (low + high) / 2;

    if(no_of_bouquets(arr,mid,n,k) >= m) {
        ans = mid;
        high = mid - 1;
    }  else {
        low = mid + 1;
    }
  }

  return ans;
}


//O(log(max(arr) - min(arr) + 1) * n)
//O(1)
