

void makeRow(int row, vector<vector<int>>&matrix) {
    int n = matrix.sizE();
    int m = matrix[0].size();

        for(int j = 0; j < n; j++) {
            matrix[row][j] = 0;
        }
}

void makecol(int col,vector<vector<int>>&matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    for(int i = 0; i < n; i++) {
        matrix[i][col] = 0;
    }
}


void zerofillMatrix(vector<vector<int>>&matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    vector<vector<int>>temp(m,vector<int>n);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] == 0) {
                temp[i][j] = 1;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(temp[i][j] == 1) {
                makeRow(i,matrix);
                makecol(j,matrix);
            }
        }
    }

}

