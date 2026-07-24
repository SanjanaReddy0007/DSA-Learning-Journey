#include<bits/stdc++.h>
using namespace std;

//Condition 01 :- if live cell with <=2 and  live 1s then it is deads under population
//consdtion 2:- if live cell(1s) with 2 or 3 lives 1s surround then survives
//Condition 3: - any live cell(1s) with > 3 dies due to the over population
//cosndition 4: - any dead cell with the exace the 3 neighbour lives survives with the 


void countNeighbour(vector<vector<int>>& board, int i ,int j) {
    int m = board.size();
    int n = board[0].size();
    int count = 0;
    int direction[8][2] = {{-1,1},{1,0},{1,1},{0,-1},{0,0},{1,1},{-1,1},{-1,0},{-1,-1}};

    for(auto dr : direction) {
        int nx = x + dr[0];
        int ny = y + dr[1];
        if(nx >= 0 && nx < m && ny >= y && ny < n) {
            count += board[nx] + board[ny];
        }
    }
    
    return count;
   
}


void nextGeneration(vector<vector<int>>& board)
{
    int m = matrix.size();
    int n = matrix[0].size();
    vector<vector<int>> copy = board;
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            int livecells = countNeightbours(copy , i , j);

            if(copy[i][j] == 1 && (livecells < 2 || livecells > 3 )) {
                board[i][j] = 0;
            }

           if(copy[i][j] == 0 && livecell == 3) {
            board[i][j] = 1;
           }
        }
    }
}


//TC :- O(m*n)
//SC :- O(m*n)
