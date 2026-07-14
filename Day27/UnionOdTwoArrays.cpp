#include<bits/stdc++.h>
using namespace std;


vector<int>getUnion(vector<int>&arr1,vector<int>&arr2)
 {
   set<int>s;
   for(int i = 0; i < arr1.size(); i++) {
    s.insert(arr1[i]);
   }

   for(int i = 0; i < arr2.size(); i++) {
    s.insert(arr2[i]);
   }
   
   vector<int>ans(s.begin(),s.end());
 }


 //using set
 //TC:- O(m+n + O(log M+ n))
 //SC :- O(m + n)



