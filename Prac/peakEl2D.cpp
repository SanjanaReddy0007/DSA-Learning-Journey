
int getMaxIndex(vector<vector<int>>&grid,int row, int col, int mid) {
    int maxVal = -1;
    int maxrIndex = -1;

    for(int i = 0; i < row; i++) {
        if(grid[i][mid] > maxVal) {
            maxVal = grid[i][mid];
            maxrIndex = i;
        }
    }

    return maxrIndex;

}


vector<int>PeakElement(vector<vector<int>>&grid) {

    int row = grid.size() , col = grid[0].size();
    int low = 0, high = col - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        int maxRowIndex = getMaxIndex(grid,row,col,mid);
        int left = mid - 1 >= 0 ? grid[maxRowIndex][mid - 1] : -1;
        int right = mid + 1 < col ? grid[maxrowIndex][mid + 1] : -1;

        if(grid[maxRowIndex][mid] > left && gird[maxrowIndex][mid] > right) {
            return {maxRowIndex , mid};
        } else if(grid[maxRowIndex][mid] < left) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return {-1,-1};

}


