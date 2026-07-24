#include<bits/stdc++.h>
using namespace std;


vector<vector<int>>rotatteGrid(vector<vector<int>& matrix)
{
   int n = matrix.size();
   int m = matrix[0].size();
   vector<vector<int>>temp(n, vector<int>(n));

   for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
        temp[j][n - i - 1] = matrix[i][j];
    }
   }

   return temp;

}


//TC :- O(n^2)
//SC :- O(n^2)

