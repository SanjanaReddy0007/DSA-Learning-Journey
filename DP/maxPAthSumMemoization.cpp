
int path_sum(int i,int j, vector<vector<int>>&grid,int m,int n,vector<vector<int>>&dp) {
    if(j < 0 || j > n - 1) {
        return INT_MIN;
    }
    if(i == m - 1) {
        return grid[m - 1][j];
    }
    if(dp[i][j] != -1) {
        return dp[i][j];
    }
    
    int left = path_sum(i + 1, j - 1,grid,m,n,dp);
    int down = path_sum(i + 1,j,grid,m,n,dp);
    int right = path_sum(i+1,j+1,grid,m,n,dp);
    int temp = max(left,down);
    int maxii = max(temp,right);
    return dp[i][j] =  grid[i][j] + maxii;
}

int max_path(int m, int n, vector<vector<int>>&grid) {
    int ans = INT_MIN;
    vector<vector<int>>dp(m,vector<int>(n,-1));
    for(int j = 0; j <= n - 1; j++) {
        int x = path_sum(0,j,grid,m,n,dp);
        if(x > ans) {
            ans = x;
        }
    }
    return ans;
}

int main() {
  int m,n;
  cin>>m>>n;
  vector<vector<int>>grid(m,vector<int>(n));
  for(int i = 0; i < m;i++) {
      for(int j = 0; j < n; j++) {
          int temp;
          cin>>temp;
          grid[i][j] = temp;
      }
  }
  cout<<max_path(m,n,grid);
  return 0;
}

