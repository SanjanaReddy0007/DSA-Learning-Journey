#include<bits/stdc++.h>
using namespace std;


void moveZeroesToEnd(int n,int arr[]) {
    vector<int>i;

    for(int i = 0; i <= n-1; i++) {
     if(arr[i] != 0) {
        v.push_back(i);
     }
}
     int j = 0;
     for(auto k : v) {
        arr[j] = k;
        j++;
     }

    for(int i = v.size(); i <= n - 1; i++) {
          arr[i] = 0;
    }
}

//O(n) tc and sc for this type


//TWO POINTER O(n) SC:- O(1)

void moveZeroesToEnd(int n,int arr[]) {
    int i = 0;
    for(int j = 0; j <= n - 1; j++) {
        if(arr[j] != 0) {
            swap(arr[i],arr[j]);
            i++;
        }
    }
}





