#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> SpiralMatrix(vector<vector<int>>& matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int pos = 0;
    vector<int> rowDelta = {0,1,0,-1}, vector<int>colDelta={1,0,-1,0};
    int row = 0;
    int col = 0;
  vector<int>ans;

  while(ans.size() != m*n) {
    ans.push(matrix[row][col]);
    matrix[row][col] = 1000;
    int next_row = row + rowDelta[pos];
    int next_col = col + colDelta[pos];

    if(next_row >= m || next_row < 0 || next_col >= n || next_col < 0 || matrix[next_row][next_col] == 10000 ) {
        pos = (pos + 1) % 4;
    }

    row += rowDelta[pos];
    col += colDelta[pos];
  }


  return ans;
}


//O(m*n)
//O(1) // O(m*n)


