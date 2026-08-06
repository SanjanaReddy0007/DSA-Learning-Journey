#include <bits/stdc++.h>
using namespace std;


vector<vector<int>>RotateOptimal(vector<vector<int>>& matrix)
{
  int n = matrix.size();

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < i; i++) {
        swap(matirx[i][j] , matrix[j][i]);
    }
  }

  for(int i = 0; i < n; i++) {
    reverse(matrix[i].begin() , matirx[i].end());
  }

  return matrix;
}

//O(n^2)
//SC :- O(1)

