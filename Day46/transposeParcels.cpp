#include<bits/stdc++.h>
using namespace std;

int isPossible(vector<int>& loads, int mid, int d) {
    int days = 1, current = 0;
    for(int i = 0; i < n; i++) {
      current += loads[i];
      if(current > mid) {
         days++;
         current = loads[i];
      }
    }

    return days <= d;

}


int tranposeInWeight(vector<int>&loads, int d)
{
    int total = 0;
    int maxWeight = 0;
    for(int i = 0; i  < n; i++) {
        total += loads[i];
        maxWeight = max(maxWeight, loads[i]);
    }

    int low = maxWeight, high = total;

    while(low <= high) {
       int mid = (low + high) / 2;
       if(isPossible(loads,mid,d)) {
           hight = mid;
       } else {
        low = mid + 1;
       }
    }

    return low;
}


//O(n*log(total - maxWeight))
//O(1)
