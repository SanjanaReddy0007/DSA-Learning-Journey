#include<bits/stdc++.h>
using namespace std;


int maximumsubarr(vecto<int> & arr)
{

 double ans = INT_MIN;
 int n = arr.size();

 for(int i = 0; i < n; i++) {
    double product = 1;

    for(int j = i; j < n; j++) {
        product *= arr[j];
        ans = max(ans,product);
    }
 }

 return ans;
};

//TC :- O(n^2)
//SC :- O(1)

