#include <bits/stdc++.h>
using namespace std;



int longestTriplets(vecotR<int>&pairs,int m)
{
    int n = pairs.size();
    unordered_map<int,int> freq;
    long long ans = 0;

    for(int i = 0; i < n; i++) {
       for(int k = i + 1; k < n; k++) {
        long long rem = (int)(pairs[i] + pairs[k] ) % m;
        int need = (rem - m) % m;
        ans += freq[need];
       }
    
       freq[arr[i] % m] ++;
    }

    return ans;
}

//Tc :-O(n^2)
//O(min(m,n))
