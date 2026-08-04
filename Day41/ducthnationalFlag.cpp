#include <bits/stdc++.h>
using namespace std;

//O(n^2) SC :- O(n)
void arrnegColorInOrder(vector<int>&arr)
{
    sort(arr.begin() , arr.end());
}


//OPTIMAL
void arrnegColorsInOrder(vector<int>& arr)
{
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int high = n - 1;

    for(int i = 0; i < n; i++) {
        if(arr[mid] == 0) {
            swap(arr[low] , arr[mid]);
            low++;
            mid++;
        } else if(arr[mid] == 1) {
            mid++;
        } else if(arr[mid] == 1){
           swap(arr[mid],arr[high]);
           high--;
        }
    }
}

//O(n)
//O(1)
