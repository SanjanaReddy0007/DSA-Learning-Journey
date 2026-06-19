#include<bits/stdc++.h>
using namespace std;


int reversingarraySections(vector<int>&arr, int left , int right) {
     if(left >= right) {
        return;
     }

     swap(arr[left] , arr[right]);
     reversingarraySections(arr,left + 1, right - 1);

}


//given left right part have to reverse upto there only in the arr part

//O(n)
