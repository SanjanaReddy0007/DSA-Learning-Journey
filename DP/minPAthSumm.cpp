int f( int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp)
{
    if(i < 0 || j<0)
        return INT_MAX; 
        
    if(i==0 && j==0)
        return grid [0][0];
        
    if(dp[i][j] != -1)
        return dp[i][j];
        
    int down = f(i-1,j,grid, dp);
    int right = f(i,j-1, grid, dp);
    
    return dp[i][j] = grid[i][j] + min (down, right);
}


