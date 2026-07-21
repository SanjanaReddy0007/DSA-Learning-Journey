#include<bits/stdc++.h>
using namespace std;

//USINGGG 3 POINTERSSSSSSSSSSS
//TC :- o(N) SC:- o(1)


void ColorsArrange(vector<int>&arr)
{
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while(mid <= high) {
        if(arr[mid] == 0) {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        } else if(arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid] , arr[high]);
            high--;
        }
    }
}


//TC :- O(n)
//SC :- O(1)
// WORKS IN A SINGLE PASSS HERE ........................

