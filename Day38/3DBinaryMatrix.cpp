#include<bits/stdc++.h>
using namespace std;


class Matrix3D{
    public:
       vector<vector<vector<int>>> mat;

       matrix3D(int n) {
         mat = vector<vector<vector<int>>>(n, vector<vector<int>>(n,vector<int>(n,0)));
       }

       void setCell(int x,int y, int z) {
         mat[x][y][z] = 1;
       }

       void unSetCell(int x, int y, int z) {
         mat[x][y][z] = 0;
       }

       int largestMatrix() {
         priority_queue<pair<int,int>> pq;
         for(int k = 0; k < mat.size(); k++) {
            int count = 0;
            for(int i = 0; i < mat[k].size(); i++) {
                for(int j = 0; j < mat[k][i].size(); j++) {
                    if(mat[i][j][k] == 1) {
                        count++;
                    }
                }
            }

            pq.push({count, k});
         }

         return pq.top().second; //returns shelf 
       }
}

//O(1) fro sset and unset
//O(n^3) + O(nlogn) for largematrix


