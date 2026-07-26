#include<bits/stdc++.h>
using namespace std;

int subarraysum(vector<int>&arr , int m)
{
    int prefixmode = 0;
    unordered_map<int,int> modSeen;
    
    modSeen[0] = -1;

    for(int i = 0; i < arr.size(); i++) {
        prefixmode = (prefixmode + i) % m;


        if(modSeen.find(prefixmode) != modSeen.end()) {
            if(i - modSeen(prefixmode) > 1) {
                return true;
            } 
        }else {

            modSeen[prefixmode] = i;
        }
    }

    return false;

}


//TC :- O(n)
//SC :- O(1)
