
#include<bits/stdc++.h>
using namespace std;



bool helper(int i,vector<int>v,int arr[],int n,int k) {
    if(i >= n) {
        return sum==k;
    }

    v.push_back(arr[i]);
    if(helper(i+1,v,arr,n,k))return true;

    v.pop_back();
    if(helper(i+1,v,arr,n,k)) return true;

    return false;
}




vector<int> findSubSequencesWithSumK(int arr[], int n, int k) {
        //Write your code here...
        vector<int>v;
        helper(0,v,0,arr,n,k);
        return v;
    }



    BESTCASE :-O(n) if the absence of element detect early
    O(2^n) worst:- exponential time arises when loop through 2 factor branch...


