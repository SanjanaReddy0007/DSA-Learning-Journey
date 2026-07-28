#include<bits/stdc++.h>
using namespace std;

int atrapRainWater(vector<int>& arr)
{
    int n = arr.size();vector<int> suffix(n),prefix(n);
    int water = 0;

    if(n == 0) {
        return 0;
    }

    prefix[0] = arr[0];
    for(int i = 1; i < n; i++) {
        prefix[i] = max(prefix[i - 1] , arr[i]);
    }

    suffix[n - 1] = arr[n - 1];
    for(int i = n-2; i >= 0; i--) {
        suffix[i] = max(suffix[i + 1] , arr[i]);
    } 

    for(int i = 0; i < n; i++) {
        water += min(prefix[i],suffix[i]) - arr[i];
    }

   return water;

}

//O(3n)
//SC :- O(2n)


