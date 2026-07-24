#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> gridRotation(vector<vector<int>>& matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            swap(matrix[i][j] , matrix[j][i]);
        }
    }


    for(int i = 0; i < n; i++) {
        reverse(matrix.begin() , matrix.end());
    }


    return matrix;

}


//TC :- O(n^2)
//SC :- O(1)

