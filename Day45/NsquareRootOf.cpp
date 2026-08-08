#include<bits/stdc++.h>
using namespace std;

int power(int mid, int m,int n) {
     long long ans = 1;
     for(int i = 0; i < n; i++) {
        ans = ans * mid;

        if(ans > m) {
            return 1;
        }
     }

     if(ans == m) return 0;
     return -1;
}

int sqyareRootOfN(int n,int m)
{
  int low = 1, high = m;
  while(low <= high) {
    int mid = (low + high) / 2;
    int x = power(mix,n,m);

    if(x == 0) {
        return mid;
    }
    if(x == -1) {
        low = mid + 1;
    } else {
        high = mid - 1;
    }
  }

  return -1;
}

//O(nlogn)
//O(1)
