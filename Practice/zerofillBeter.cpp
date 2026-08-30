void zerofillMatrix(vector<vector<int>>&matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int>rows(n,0);
    vector<int>cols(m,0);

 for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
        if(matrix[i][j] == 0) {
            matrix[i] = 1;
            matrix[j] = 1;
        }
    }
}


for(int i = 0; i < n; i++) {
    for(int j = 0; j < m ;j++) {
        if(rows[i] || cols[j]) {
            matrix[i][j] = 0;
        }
    }
}

}   

