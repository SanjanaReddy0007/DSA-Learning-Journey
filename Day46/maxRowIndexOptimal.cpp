#include<bits/stdc++.h>
using namespace std;

int maxrowWIthOne(vector<int>&matrix)
{
  int numRows = matrix.size();
  int numCols = matrix[0].size();
  int row = 0;
  int col = numCols - 1;
  int maxRowIndex = -1;

  if(col >= 0 && row < numRows) {
      if(matrix[row][col] == 1) {
        maxRowIndex = row;
        col--;
      } else {
        row++;
      }
  }

  return maxRowIndex;
}


//O(n + m)
//O(1)
