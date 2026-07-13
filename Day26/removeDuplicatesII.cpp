#include<bits/stdc++.h>
using namespace std;


int removeDuplicatesII(vector<int>&arr) {
   int n = arr.size();
   if(arr.empty()) {
    return 0;
   }

   int i = 1;
   int count = 1;
   
   for(int j = 1; j < n; j++) {
     if(arr[j] == arr[j + 1]) {
        count++;
     } else {
        count = 1;
     }

   if(count <= 2) {
      arr[i] = arr[j];
      i++;
   }
 }

   return i;
}


//O(n) TC array traves 1 to n 
//SC :- O(1)


