vector<vector<int>>RotatteGrid(vector<vector<int>>&grid) {
    int m = grid.size();
    int n = grid[0].size();

    vector<vector<int>>temp = grid;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < i; j++) {
            temp[i][n - i - 1] = matrix[i][j];
        }
    }

    return temp;

}

