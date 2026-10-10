

void findIt(vector<vector<int>>&grid, int row, int mid) {
    int maxVal = -1;
    int rowIndex = -1;
    
    for(int i = 0; i < grid.size(); i++) {
        if(grid[i][mid] > maxVal) {
            maxVal = grid[i][mid];
            rowIndex = i;
        }
    }

    return rowIndex;

}

vector<int>PeakElement(vector<vector<int>>&grid) {
    int row = grid.size() , cols = grid[0].size();
    int low = 0 , high = cols - 1;

    while(low <= high) {
        int mid = (low + high) / 2;
        
        int maxRowIndex = findIt(grid, mid,row);
        int left = mid - 1 >= 0 ? grid[maxRowIndex][mid - 1] : -1;
        int right = mid + 1 < cols ? grid[maxRowIndex][mid + 1] : -1;
       
        if(grid[maxRowIndex][mid] > left && grid[maxrowIndex][mid] > right) {
            return {maxRowIndex};
        } else if(grid[maxRowIndex][mid] < left) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return {-1,-1};
}


