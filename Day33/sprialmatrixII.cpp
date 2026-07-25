#include<bits/stdc++.h>
using namespace std;

//bg iven n create whle matrix i.e <= n*n here 

vector<vector<int>>generateMatrix(int n) {
    int left = 0, right = n - 1;
    int top = 0, bottom = n - 1;
    vector<vector<int>> matrix(n, vector<int>(n,0));
    int num = 1;

    while(num <= n*n) {

        //top right fill sma erow diff col so i at col place
        for(int i = left; i <= right; i++) {
            matrix[top][i] = num++;
        }
        top++;

        //i = top bcs here chahing row so top to bottom
        for(int i = top; i <= bottom; i++ ) { 
            matrix[right][i] = num++;
        }
        right--;

        //bottom left
        if(top <= bottom) {
            for(int i = right; i >= bottom; i--) {
                matrix[bottom][i] = num++;
            }
           bottom--;
        }


        if(left <= right) {
           for(int i = bottom; i >= top; i--) {
                matrix[left][i] = num++;
           }
           left++;
        }

    }

    return matrix;


}




//TC :- O(n^2)
//SC :- O(n^2)

