#include<bits/stdc++.h>
using namespace std;


void merge(vecor<int>&arr2,int m, vector<int>& arr2, int n)
{
     for(int i = 0; i < n; i++) {
        arr1[m + i] = arr2[i];
     }

     sort(arr1.begin() , arr1.end());
}

//TC :- O((m + n) log(m + n))
//SC :- O(1)


