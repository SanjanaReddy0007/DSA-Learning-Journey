#include<bits/stdc++.h>
using namespace std;

//BRUTE
//O(n^2)
//SC :- O(n)


int singleElement(int n,int arr[])
{
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count == 1) return arr[i];
    }

    return -1;
}

