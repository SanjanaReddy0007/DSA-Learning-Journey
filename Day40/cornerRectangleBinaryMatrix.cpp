#include <bits/stdc++.h>
using namespace std;
class solution {
public:

   long long cornerRectangleGirdMAtrix(vector<int>& grid)
{
    int m = grid.size();
    if(m == 0) return 0;

    int n = grid[0]size();
    int count = 0;

    for(int r1 = 0; r1 < m; r1++) {
        for(int r2 = 0; r2 < n; r2++) {
            int common = 0;

            for(int c = 0; c < n; c++) {
                if(grid[r1][c] == 1 && grid[r2][c] == 1) {
                    common++;
                }
            }
            count += common * (common - 1) / 2;
        }
    }

    return count;
}
};

//TC :- O(n^2 * m) 
//SC :- O(1)


