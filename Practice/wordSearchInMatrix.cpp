
bool backtrack(int row,int col, string s, vector<vector<int>>&mat, int index) {
    if(index.size() == s.size()) return true;

    if(row < 0 || row >= rows || col < 0 || col >= cols || mat[row][col] != s[index]) {
        return false;
    }

    char temp = mat[row][col];
    mat[row][col] = '#';

    int rowOffset = {0,1,0,-1};
    int colOffset = {1,0,-1,0};

    for(int d = 0; d < 4; d++) {
        if(backtrack(row + rowOffset[d] ,col + colOffset[d],s,mat,index + 1)) {
            temp = mat[row][col];
            return true;
        }
    }

    mat[row][col] = temp;
    return false;
}

bool wordSearch(vector<vector<int>>&matrix, string s) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    if(s.size() > rows*cols) return false;

    for(int row = 0; row < rows; row++) {
        for(int col = 0; col < cols; col++) {
            if(backtrack(row,col,s,mat,0)) {
                return true;
            }
        }
    }

    return false;
}

