#include<bits/stdc++.h>
using namespace std;


void merge(vecor<int>&arr2,int m, vector<int>& arr2, int n)
{
   int p1 = m - 1;
   int p2 = n - 1;
   int p = m - n - 1;


   while(p1 >= 0 && p2 >= 0) {
     if(arr1[p1] > arr2[p2]) {
        arr1[p] = arr1[p1];
        p1--;
     } else {
        arr1[p] = arr2[p2];
        p2--;
     }
     p--;
   }


   while(p2 >= 0) {
     arr1[p] = arr2[p2];
     p2--;
     p--;
   }

}


//TC :- O(m + n)
//SC :- O(n)
