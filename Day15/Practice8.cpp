#include<bits/stdc++.h>
using namespace std;



bool checkConsecutiveSequence(vector<int>& identifiers) {
    sort(identifiers.begin(),identifiers.end());
    int n = identifiers.size();
   
    for(int i=0;i<n;i++) {
        if(identifiers[i] + 1 != identifiers[i+1]) {
            return false;
        }

    }
        return true;

}



//O(nlogn)
//SC :- O(1)




