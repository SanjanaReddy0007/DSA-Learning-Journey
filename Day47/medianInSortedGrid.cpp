#include<bits/stdc++.h>
using namespace std;

int derivedMediand(vector<vector<int>>& matrix)
{
    int n = grid.size() ,  m = grid[0].size();
    vector<int>ans;

    for(int i = 0; i  < n; i++) {
        for(int j = 0; j < n; j++) {
           ans.push_back(matrix[i][j]);
        }
    }

    sort(ans.begin() , ans.end());
    return arr[arr.size() / 2];
}


//O(m * n log(m*n))
//O(1)
