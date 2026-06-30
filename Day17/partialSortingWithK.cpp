#include<bits/stdc++.h>
using namespace std;


void partialSoritngWithK(vector<int>&arr,int k) {
      for(int i=0; i < k; i++) {
        int min_index;
        for(int j = i; j < arr.size(); j++) {
            if(arr[j] < ar[min_index]) {
                min_index = j;
            }
        }

        swap(arr[i] , arr[min_index]);
      }
}

//O(k*n)



