#include<bits/stdc++.h>
using namespace std;


void helper(int i,vector<int>&v,int sum,int arr[],vector<vector<int>>ans,int n,int k) {
    if(i >= n) {
        if(sum == k) {
           ans.push_back(v);
        }
        return;
    }

    
    v.push_back(arr[i]);
    helper(i+1,v,sum,arr,ans,n,k);

    v.pop_back();
    helper(i + 1,v,sum,arr,ans,n,k);


}



vector<vector<int>> findSubsequenceWithSumK(int arr[], int n, int k) {
    vector<vector<int>>ans;
    vector<int>v;
    helper(0,v,0,arr,ans,n,k);
    return ans;
}


TC:- O(n*2^n)

