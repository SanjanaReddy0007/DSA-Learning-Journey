
int calLivve(vector<vector<int>>&grid, int x , int y) {
    int m = grid.size();
    int n = grid[0].size();

    int directions[8][2] = {{1,0},{1,1},{1,-1},{0,1},{0,-1},{-1,0},{-1,1},{-1,-1}};
    int count = 0;

    for(auto dr : directions) {

        int nx = x + dr[0];
        int ny = y + dr[1];
        if(nx >= 0 && nx < m && ny >= 0 && ny < n) {
            count += dr[nx][ny];
        }
    }

}


void nextGenGrid(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();

    vector<vector<int>>copy = grid;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(canLivve(grid , i , j)) {
                
                if(copy[i][j] == 1 && (calLivve > 2 || canLivve > 3)) {
                    grid[i][j] = 0;
                }

                if(copy[i][j] = 0 && canLivve > 3) {
                    grid[i][j] = 1;
                }

            }
        }
    }

}


