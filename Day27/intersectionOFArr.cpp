#include<bits/stdc++.h>
using namespace std;


vector<int>IntersectionOfArr(vector<int>&arr1,vector<int>&arr2) {
    int i = 0;
    int j = 0;
    int m = arr1.size();
    int n = arr2.size();
    vector<int>result;
   
    while(i < m && j < n) {
        if(arr1[i] == arr2[j]) {
           result.push_back(arr1[i]);
           i++;
           j++;
        } else if(arr1[i] < arr2[j]) {
            i++;
        }else{
            j++;
        }
    }

    return result;

}


//O(n + m) 
//O(min(n,m)) for SC

