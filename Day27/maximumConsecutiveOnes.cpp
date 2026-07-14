#include<bits/stdc++.h>
using namespace std;

int maximumConsecutiveOnes(int arr[],int n) {
    int count = 0;
    int maxcount = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == 1) {
            count++;
            maxCount = max(count,maxCount);
        } else {
            count = 0;
        }
    }

    return maxCount;
}

//O(n)
//SC :- O(1)


