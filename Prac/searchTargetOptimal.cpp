bool searchTarget(vector<vector<int>>&grid, int target)
{
    int n = grid.size() , m = grid[0].size();
    int low = 0, high = n * m - 1;

    while(low <= high) {
        int mid = (low + high) / 2;
        int row = mid / m;
        int col = mid % m;
        
        if(grid[row][col] == target) {
            return true;
        } else if(grid[row][col] > target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return false;

}

