#include<bits/stdc++.h>
using namespace std;


int thirdHighest(vector<int>&readings) {
   set<int>s sort(readings.begin() , readings.end());
    int n = readings.size();
    
    if(n < 3) return *s.rbegin();
    auto it = *s.rbegin();
    advance(it,2);
    return *it;

}


//O(nlogn) becuse insertion into set takes time of this much
//Sc:- O(n) set of arr take sthis much space in the worst case... 



