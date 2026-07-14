#include<bits/stdc++.h>
using namespace std;

//TC :- O(n)
//SC :- O(1)


int SingleNumber(int n,int arr[])
{
    int xor1 = 0;
    for(int i = 0; i < n; i++) {
        xor1 = xor1 ^ arr[i];
    }

    return xor1; //chancels sma number returns remaining nuber
}

