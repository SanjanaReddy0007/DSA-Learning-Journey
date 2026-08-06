#include <bits/stdc++.h>
using namespace std;

bool matrixRotationMAtch(vector<vector<int>>&start, vector<vector<int>>&end, int n)
{
    if(start == goal) return true;

    int degree = 3;
    while(degree -- ){
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                swap(start[i][j] , start[j][i]);
            }
        }


        for(int i = 0; i < n; i++) {
            reverse(start[i].begin() , start[i].end());
        }

        if(start == goal) {
            return true;
        }
    }

    return false;
}

//TC :- O(n^2)
//SC :- O(1)

