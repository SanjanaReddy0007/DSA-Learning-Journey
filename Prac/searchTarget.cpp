bool searchTarget(vector<vector<int>>&arr, int target) {
     int n = arr.size();
     int rows = grid.size(), cols = grid[0].size();

     for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] == target) {
                return true;
            }
        }
     }

     return false;

}


