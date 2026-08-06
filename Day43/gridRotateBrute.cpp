#include <bits/stdc++.h>
using namespace std;


vector<vector<int>>gridrotation(vector<vector<int>>& matrix)
{
  int n = matrix.size();
  vector<vector<int>>temp;(n, vector<int>(n,0));

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < i; j++) {
        temp[j][n - i - 1] = matrix[i][j];
    }
  }

  return temp;
}
//O(n^2) both


