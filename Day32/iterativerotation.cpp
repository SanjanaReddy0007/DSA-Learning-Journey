#include<bits/stdc++.h>
using namespace std;


bool findrotation(vector<int>&start, vector<int>& end, int n)
{
    if(start == end) {
        return true;
    }

   int deg = 3;

   while(deg--) {

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            swap(start[i][j],start[j][i]);
        }
    }

    for(int i = 0; i < n; i++) {
        revser(start[i].begin() , start[i].end());
    }

    if(start == end) return true;

   }

   return false;

}


//O(n^2)
//SC :- O(1)

