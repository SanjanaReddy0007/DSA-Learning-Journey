#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
       int rows,cols;
      
       bool backtrack(vector<int>& mat, string s, int row,int col,int index) {
           if(index == s.size()) return true;

           if(row < 0 || row > rows || col < 0 || col >= cols || mat[row][col] != s[index]) {
            return false;
           }

           int temp = mat[row][col];
           mat[row][col] = '#';

           int rowOffset[4] = {0,1,0,-1};
           int colOffset = {1,0,-1,0};

           for(int d = 0; d < 4; d++) {
            if(backtrack(mat,s,row+rowOffset[d] ,col + colOffset[d], index + 1)) {
                return true;
             }
        }

        mat[row][col] = temp;
        return false;
       }



       bool wordSearch(vector<int>& mat, string s) {
          if(mat.size() == 0 || mat[0].size() == 0) return false;

          rows = mat.size(), cols = mat[0].size();
          if(s.size() > rows*cols) return false;

          for(int row = 0; row < rows; row++) {
            for(int col = 0; col < cols; col++) {
                if(backtrack(mat,s,row,col,0)) {
                    return true;
                }
            }
          }

          return false;
       }

}


//TC :- O(n*m 3^k)
//SC :- O(k)

