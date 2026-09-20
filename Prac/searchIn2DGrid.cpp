int searchIn2DGrid(vector<vector<int>>&grid, int target)
{
    int row = 0, col = grid[0].size();
    
    while(row < grid.size() && col >= 0 ) {
        if(grid[row][col] == target) {
            return true;
        }

        if(grid[row][col] < target) {
            row++;
        } else {
            col--;
        }
    }

    return false;

}


