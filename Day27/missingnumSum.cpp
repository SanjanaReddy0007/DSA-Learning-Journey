#include<bits/stdc++.h>
using namespace std;

int MissingNumUsingSumm(int n,int arr[])
 {
    int sum1 = 0;
    for(int i = 0; i < n - 1; i++) {
        sum1 += arr[i];
    }
    
    int sum2 = 0;
    sum2 = (n * (n + 1) / 2);
    return sum2 - sum1;
 }

//O(n) TC
//SC :- O(1)



