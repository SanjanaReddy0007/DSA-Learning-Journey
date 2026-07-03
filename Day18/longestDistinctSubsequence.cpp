#include<bits/stdc++.h>
using namespace std;



int findSitinctSubsequence(int n,int arr[]) {
    unordered_set<int>hashSet;
    
    for(int i = 0; i < n; i++) {
        hashSet.push_back(i);
    }

    return hashSet.size();

}


//TC:- O(n) for start to end set takes O(1) for insertion all average
//SC :- O(n) for the  in worst case can hold O(n) kind of valuesssss




