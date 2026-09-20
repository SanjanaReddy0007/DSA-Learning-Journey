int findMedianOfVal(vector<vector<int>>&grid, int r, int c) {

    int minVal = INT_MAX, maxVal = INT_MAX;
    for(int i = 0 ; i < r; i++) {
        if(grid[i][0] < minVal) {
            minVal = grid[i][0];
        }

        if(grid[i][c - 1] > maxVal) {
            maxVal = grid[i][c - 1];
        }
    }

    int desirePos = (r * c + 1) / 2;
    while(minVal < maxval) {

        int mid = (minval + maxVal) / 2;
        int count = 0;

        for(int i = 0; i < r; i++) {
            count += upper_bound(grid[i].begin() , grid[i].end, midVal) - grid[i].begin();
        }

        if(count < desirePos) {
            minVal = mid + 1;
        } else {
            maxVal = mid;
        }
    }

    return minVal;

}

