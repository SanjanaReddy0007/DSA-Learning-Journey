
bool isfind(vector<int>&grid, int target) {
    int low = 0, high = grid.size() - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == target) {
            return target;
        } else if(arr[mid] > target) {
           high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return false;

}

bool searchIn2DSortedMatrix(vector<int>&arr, int target) {
    int n = grid.size() , m = grid[0].size();

    for(int i = 0; i < n; i++) {
    if(grid[i][0] < target  && target < grid[i][m - 1]) {
        return isfind(grid[i], target);
    }
  }

}

