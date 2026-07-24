#include<bits/stdc++.h>
using namespace std;


void makeRow(int row,vector<vector<int>>&matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();

    for(int i = 0; i < m; i++) {
       matrix[row][i] = 0;
    }

}


void makeColumn(int coulmn,vector<vector<int>>&matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    for(int i = 0; i < n; i++) {
        matrix[i][column] = 0;
    }
}


void zeroFill(vector<vector<int>>&matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    
    vector<vector<int>>temp(m,vector<int>(n,0));

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] == 0){
                temp[i][j] = 1;
            }
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(temp[i][j] == 1) {
                makeRow(i,matrix);
                makeCol(j,matrix);
            }
        }
    }
}


//O(n^3) TCCCCCCCCCCCCCCCCCCCCCCCCCc
SC ;- O(m X n)


