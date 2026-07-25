#include<bits/stdc++.h>
using namespace std;


vector<int>SpiralMatrix(vector<vector<int>>&matrix)
{
   int m = matrix.size();
   int n = matrix[0].size();

   int pos = 0;
   int row = 0;
   int col = 0;
   vector<int>ans;
   vector<int>row_delta(0,1,0,-1);
   vector<int>col_delta(1,0,-1,0);


   while(ans != m*n) {
     ans.push_back(matrix[row][col]);
     matrix[row][col] = 1000;
     int next_row = row_delta[row];
     int next_col = col_delta[col];
     
     if(next_row >= m || next_row < 0 || next_col >= n || next_col < 0 || matrix[next_row][next_col] == 1000) {
        pos = (pos + 1) % 4;
     }
      
     row += row_delta[pos];
     col += col_delta[pos];
   }

   return ans;

}

//TC :- O(m*n)
//SC :- O(1)


