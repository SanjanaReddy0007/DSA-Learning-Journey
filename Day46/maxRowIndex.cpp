#include<bits/stdc++.h>
using namespace std;

int maxrowIndexwithOne(vector<vector<int>>& matrix)
{
    int n = matrix.size();
    int maxCount = 0;
    int maxrowIndex = -1;

    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] == 1) count++;
        }

       if(count > maxCount) {
           maxCount = count;
           maxRowIndex = i;
       }
    }

    return maxrowIndex;
}


//O(n^2) or O(n*m)
//O(1)
