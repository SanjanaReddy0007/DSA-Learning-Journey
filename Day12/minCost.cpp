#include<bits/stdc++.h>
using namespace std;


int minCost(int n,int c,vector<int>&a) {
    sort(a.rbegin() , a.rend());
    int saved = 0;

    for(x : a) {
        int currentWeight  = x * (1LL << saved);
        if(currentWeight <= c) {
            saved++;
        }
    }

    return n - saved; //this return that the no.of coins required i sit for free or require coins ...........

}

//actually core of pribelm is if bag weight of trash  > c it needs to destroy charge of coin
//else it free of cost saved tells based on thta 





