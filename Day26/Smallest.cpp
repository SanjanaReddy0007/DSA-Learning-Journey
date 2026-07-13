#include<bits/stdc++.h>
using namespace std;

int smallestInArr(int n, int arr[]) {

    int small = arr[0];
    for(int i = 0; i < n; i++) {
       if(arr[i] < small) {
         small = arr[i];
       }
    }

    cout<<small;
}


//O(n)

