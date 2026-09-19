
int rowsWithMaxOnes(vector<vector<int>>&matrix)
{
    int numRows = matrix.size();
    int numCols = matrix[0].size();
    int row = 0, col = numCols - 1;
    int maxIndex = -1;

    while(row < numRows && col >= 0) {
        if(arr[row][col] == 1) {
            maxIndex = row;
            col--;
        } else {
            row++;
        }
    }

    return maxIndex;

}



