


bool searchIn2DSortedMatrix(vector<int>&arr, int target) {
    int n = arr.size();
    int m = arr[0].size();

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr[i][j] == 1) {
                return true;
            }
        }
    }

    return false;
}


