#include<bits/stdc++.h>
using namespace std;

bool isSortedArray(int n, int arr[]) {
    for(int i = 0; i <= n - 2; i++) {
        if(arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

//O(n)


