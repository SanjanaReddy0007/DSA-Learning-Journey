#include<bits/stdc++.h>
using namespace std;

bool searchIn2DMatrix(vector<vector<int>>&matrix, int target)
{
    int n = matrix.size(), m = matrix[0].size();
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] == target) {
                return true;
            }
        }
    }

    return false;
}

//o(n*m) 
//O(1)


//better
int row = 0, col = grid[0].size();
 while (row < grid.size() && col >= 0) {

   if(grid[row][col] == 1) {
       return true;
   } 
   
   if(grid[row][col] < target) {
       row++;
   } else {
       col--;
   }
}

return false;

//O(m + n)
//O(1)


