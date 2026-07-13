#include<bits/stdc++.h>
using namespace std;


int secondSmallest(int n,int arr[]) {
    int smallest = INT_MAX;
    int secondSmall = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(arr[i] < small) {
            secondSmall = small;
            small = arr[i];
        } else if(arr[i] > small && arr[i] < secondSmall) {
            secondSmall =arr[i];
        }
    }
return secondSmall;

}

//TC:- O(n)


