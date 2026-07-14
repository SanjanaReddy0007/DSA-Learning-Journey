#include<bits/stdc++.h>
using namespace std;


int DuplicateZeroes(int n,int arr[])
{
   vector<int>newarr;
   for(int i = 0; i <n; i++) {
    if(arr[i] == 0) {
        newarr.push_back(0);
        newarr.push_back(0);
    } else {
        newarr.push_back(arr[i]);
    }
   }

  
   for(int i = 0; i < n; i++) {
      arr[i] = newarr[i];
   }

   return newarr;
}

//TC :- O(n)
//SC :_ O(n)


