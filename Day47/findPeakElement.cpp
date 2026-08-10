#include<bits/stdc++.h>
using namespace std;

int currentIndex(vector<vector<int>>& matrix, int mid, int row, int cols) {
    int maxVal = -1;
    int rowIndex = -1;
    for(int i = 0; i < row; i++) {
        if(matrix[i][mid] > maxVal) {
            maxVal = matrix[i][mid];
            rowIndex = i;
        }
    }

    return rowIndex;
}


vector<int>findPeakElement(vector<vector<int>>& matrix)
{
    int row = matrix.size() , cols = matrix[0].size();
    int low = 0, high = cols - 1;

    while(low <= high) {
        int mid = (low + high) / 2;
        int maxIndex = currentIndex(matrix,mid,row,cols);
        int left = mid - 1 >= 0 ? matrix[maxIndex][mid - 1] : -1;
        int right = mid + 1 <= 0 ? matrix[maxIndex][mid + 1] : -1;

        if(matirx[maxIndex][mid] > left && matrix[maxIndex][mid] > right) {
            return {maxIndex , mid};
        }

        else if(matrix[maxIndex][mid]  < left) high = mid - 1;
       else low = mid + 1;
    }

    return {-1,-1};
}


//O(n*logm)
//O(1)

