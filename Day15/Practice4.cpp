#include<bits/stdc++.h>
using namespace std;


int minCost(int n,int c, vector<int>& a) {
    sort(a.begin(),a.end());
    int saved = 0;

    for(int x:a) {
        int currentWeight = 1LL*x*(1LL<<saved);
        if(currentWeight <= c) {
            saved++;
        }
    }

    return n - saved;


}







