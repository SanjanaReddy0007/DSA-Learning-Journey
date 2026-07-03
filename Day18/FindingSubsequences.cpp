#include<bits/stdc++.h>
using namespace std;



void subsequences(int i,vector<int>&v,int arr[],int n,int ans) {
    if(i == n) {
      ans.push_back(v);
      return;
    }

    v.push_back(arr[i]);
    subsequences(i + 1,v,arr,n,ans);

   v.pop_back();
   subsequences(i + 1,v,arr,n,ans);


}



vector<vector<int>findingAll(int arr[],int n) {
    vector<int>v;
    vector<vector<int>>ans;
    subsequences(0,v,arr,n,ans);
}



