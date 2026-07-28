#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
       int rows,cols;


     bool backtrack(vecto<vector<char>>& mat, string s, int row, int col, int index) {
        if(index == s.size()) {
            return true;
        }

        if(row < 0 || row >= rows || col < 0 || col >= cols || mat[row][col] != s[index]) {
            return false;
        }

          int temp = mat[row][col];
          mat[row][col] = '#';

        int rowIndex[4] = {0,1,0,-1};
        int colIndex[4] = {1,0,-1,0};
       

        for(int d = 0; d < 4; d++) {
            if(backtrack(mat,s,row + rowIndex[d] , col + colIndex[d],index + 1)) {
                return true;
            }
        }

        temp = mat[row][col];
        return false;

     }


    bool wordSearch(vector<vector<char>>mat, string s) {
        if(mat.empty() || mat[0].empty()) {
            return false;
        }

        rows = mat.size();
        cols = mat[0].size();

        if(s.size() > rows*cols) {
            return false;
        }
        
        for(int row = 0; row < rows.size(); row++) {
            for(int col = 0; col < cols.size(); col++) {
                if(backtrack(mat,s,row,col,0)) {
                    return true;
                }
            }
        }
        
        return false;
    }
}


//O(n*m*3^L)
//O(L)

