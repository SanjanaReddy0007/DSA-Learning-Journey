#include<bits/stdc++.h>
using namespace std;


vector<int> rotatedSortedArr (vector<int>&arr1, vector<int>&arr2) {
   unordered_map<int,int>countMap;
   vector<int>result;
   vector<int>remaining;

   for(int num : arr2) {
    countMap[num] = 0;
   }

   for(int num :arr1) {
    if(countMap.find(num) != countMap.end()) {
        countMap[num]++;
    }else{
        remaining.push_back(num);
    }
   }


   sort(remaining.begin(),remaining.end());


   for(int num :arr2) {
    for(int i=0;i<countMap[num];i++) {
        result.push_back(num);
    }
   }



   for(int num : remaining) {
        result.push_back(num);
   }
      
   return result;

}


//O(n+m+nlogn)




