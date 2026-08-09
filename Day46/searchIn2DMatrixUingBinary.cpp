#include<bits/stdc++.h>
using namespace std;

bool searchGridTarget(vector<int>&matrix ,int target)
{
    int m = matrix.size() , n = matrix[0].size();
    int low = 0, high = m * n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;
        int row = mid / m;
        int col = mid % m;

        if(grid[row][col] == target) {
           return true;
        } else if(grid[row][col] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return false;
}


//O(log(n*m))
//O(1)

