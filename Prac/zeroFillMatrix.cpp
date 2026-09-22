
void rowMatrix(int row, vector<vector<int>>&matrix) {
    for(int i = 0; i < n; i++) {
        matrix[row][i] = 0;
    }
}

void colMatrix(int col, vector<vector<int>>&matrix) {
    for(int i = 0; i < n; i++) {
        matrix[i][col] = 0;
    }
}

void zeroFillMatrix(vector<vector<int>>&matrix) {
    int n = matrix.size();
    vector<vector<int>>temp(n,0);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] == 0) {
                temp[i][j] = 1;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(temp[i][j] == 1) {
                rowMatrix(i,matrix);
                colMatrix(j,matrix);
            }
        }
    }


}

