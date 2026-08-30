vector<int>spiralMatrix(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    vector<int>ans;
    vector<int>rowDelta = {0,1,0,-1};
    vector<int>colDelta = {1,0,-1,0};

    int row = 0;
    int col = 0;
    int pos = 0;
    
    while(ans.size() != m*n) {
        ans.push_back(matrix[row][col]);
        matrix[row][col] = 1000000;

        int nextrow = row +  rowDelta[pos];
        int nextcol =  col + colDelta[pos];

        if(nextrow >= m || nextrow < 0 || nextcol >= n || nextrow < 0 || matrix[row][col] == 1000000) {
            pos = (pos + 1) % 4;
        }

        row += rowDelta[pos];
        col += colDelta[pos];
    }

    return ans;
}
