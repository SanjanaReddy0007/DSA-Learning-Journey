#include<bits/stdc++.h>
using namespace std;


void zeroFilledMatrixes(vector<vector<int>>& matrix)
{
   int m = matrix.size();
   int n = matrix[0].size();
    int firstRow = -1;
    int firstColumn = -1;
    

    for(int i = 0; i < m; i++) {
        if(matrix[0][i] == 0) {
            firstRow=0;
        }
    }

    for(int j = 0; j < n; j++) {
        if(matrix[j][0] == 0) {
            firstColumn = 0;
        }
    }

   
    for(int i = 1; i < m; i++) {
        for(int j = 1; j < n; j++) {
            if(matrix[i][j] == 0) {
                matrix[0][i] = 0;
                matrix[j][0] = 0;
            }
        }
    }


    for(int i = 1; i < m; i++) {
        for(int j = 1; j < n; j++) {
            if(matrix[0][i] || matrix[j][0]) {
                matrix[i][j] = 0;
            }
        }
    }


    if(firstRow == 0) {
        for(int i = 0; i < m; i++) {
           matrix[0][i] = 0;
        }
    }

    if(firstColumn == 0) {
        for(int j = 0; j < n; j++) {
            matrix[j][0] = 0;
        }
    }


}



//O(m*n)
//SC :_ O(1) bcs here used constant space for frst row and firstcol to store thats it
