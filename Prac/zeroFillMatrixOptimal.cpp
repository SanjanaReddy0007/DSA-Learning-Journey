void zeroFillMatrix(vector<vector<int>>&matrix) {
    int firstRow = -1, firstCol = -1;

    int m = matrix.size(), n = matrix[0].size();
    for(int i = 0; i < n; i++) {
        if(matrix[0][i] == 0) {
            firstRow = 0;
        }
    }

    for(int j = 0; j < n; j++) {
        if(matrix[j][0] == 0) {
            firstCol = 0;
        }
    }

    for(int i = 1; i < m; i++) {
        for(int j = 1; j < n; j++) {
            if(matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    for(int i = 1; i < m; i++) {
        for(int j = 1; j < n; j++) {
            if(matrix[i][0] || matrix[j][0]) {
                matrix[i][j] == 0;
            }
        }
    }

    if(firstRow == 0) {
        for(int i = 0; i < n; i++) {
            natrix[0][i] = 0;
        }
    }


    if(firstCol == 0) {
        for(int j = 0; j < m; j++) {
            matrix[j][0] = 0;
        }
    }

}

