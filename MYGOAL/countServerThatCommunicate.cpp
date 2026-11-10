
int countServer(vector<vector<int>>&grid) {
    int n = grid[0].size() , m = grid.size();
    vector<int>row(m) , col(n);

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
           row[i] += grid[i][j];
           col[j] += grid[i][j];
        }
    }

    int ans = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(grid[i][j] && row[i] + col[j] > 2) {
                ans++;
            }
        }
    }

    return ans;
}


