
vector<vector<int>>RotatteGrid(vector<vector<int>>&grid) {
    int m = grid.size();
    int n = grid[0].size();

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < i; j++) {
            swap(grid[i][j] , grid[j][i]);
        }
    }

    for(int i = 0; i < n; i++) {
        reverse(grid[i].begin() , grid[i],end());
    }

    return grid;

}

