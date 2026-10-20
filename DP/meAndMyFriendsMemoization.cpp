
int solve(int i, int j1, int j2, vector<vector<int>> &grid, vector<vector<vector<int>>> &dp) {
        int m = grid.size();
        int n = grid[0].size();

        if (j1 < 0 || j2 < 0 || j1 >= n || j2 >= n) return INT_MIN;

        if (i == m - 1) {
            if (j1 == j2) return grid[i][j1];
            return grid[i][j1] + grid[i][j2];
        }

        if (dp[i][j1][j2] != -1) return dp[i][j1][j2];

        int grid_value = (j1 == j2) ? grid[i][j1] : grid[i][j1] + grid[i][j2];

        int maxi = INT_MIN;

        for (int dj1 = -1; dj1 <= 1; dj1++) {
            for (int dj2 = -1; dj2 <= 1; dj2++) {
                maxi = max(maxi, solve(i + 1, j1 + dj1, j2 + dj2, grid, dp));
            }
        }

        return dp[i][j1][j2] = grid_value + maxi;
    }

    int maxChocolates(int m, int n, vector<vector<int>>& grid) {
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(n, -1)));
        return solve(0, 0, n - 1, grid, dp);
    }


