#include<bits/stdc++.h>
using namespace std;


int maximumsubarr(vecto<int> & arr)
{
    int n = arr.size();
    double ans = INT_MIN;

    for(int i = 0; i < n; i++) {

        for(int j = i; j < n; j++) {
             double product = 1;

            for(int k = j; k < n; k++) {
                product *= arr[k];
            }

            ans = max(ans,product);
        }
    }

    return (int)ans;
}


//O(n^3)
//SC :- O(1) constant space
