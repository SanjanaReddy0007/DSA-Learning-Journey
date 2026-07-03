#include<bits/stdc++.h>
using namespace std;




void backtrack(vector<vector<int>>&ans, vector<int>v,vector<int>&arr, int target, int start) {
     if(target < 0) {return;}

     if(target == 0) {
        ans.push_back(v);
     }
    

     for(int i = start; i < arr.size(); i++) {
         if(start > n && arr[i - 1] === arr[i]) {
            continue;
         }

         v.push_back(arr[i]);
         backtrack(ans,v,arr,target - arr[i],i + 1);
         v.pop_back();

     }
}


vector<vector<int>>findUniqueCombinations(vector<int>&arr,int n,int target) {
    sort(arr.begin() , arr.end());
    vector<int>v;
    vector<vector<int>>ans;
    backtrack(ans,v,arr,target,0);
}




