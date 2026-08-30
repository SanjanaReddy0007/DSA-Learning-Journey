
void zeroFill(vector<vector<int>>&matrix)
{
  int m = matrix.size();
  int n = matrix[0].size();

  int firstRow = -1, firstcol = -1;

  for(int i = 0; i < n; i++) {
    if(matrix[0][i] == 0) {
        firstRow = 0;
    }
  }

  for(int j = 0; j < m; j++) {
    if(matrix[j][0] == 0) {
        firstCol = 0;
    }
  }


  for(int i = 1; i < n; i++) {
    for(int j = 1; j < m; j++) {
        if(matrix[i][j] == 0) {
            matrix[i][0] = 0;
            matrix[0][j] = 0;
        }
    }
  }

  for(int i = 1; i < n; i++) {
    for(int j = 1; j < m; j++) {
        if(matrix[i][0] || matrix[j][0]) {
            matrix[i][j] = 0;
        }
    }
  }

  if(firstRow == 0) {
    for(int i = 0; i < n; i++) {
        matrix[0][i] = 0;
    } 
  }

  if(firstcol == 0) {
    for(int j = 0; j < n; j++) {
        matrix[j][0] = 0;
    }
  }


}


