#include<bits/stdc++.h>
using namespace std;

int maximumCollinearity(vector<vector<int>>&arrayPoints) {
    int maxPoints = 2;
    int n = arrayPoints.size();
    if(n < 2) return n;
    
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            int count = 2;
            long long x1 = arrayPoints[i][0] - arrayPoints[j][0];
            long long y1 = arrayPoints[i][1] - arrayPoints[j][1];

           
            
        for(int k = 0; k < n; k++) {
           if(k == i || k == j) continue;

            long long x2 = arrayPoints[k][0] - arrayPoints[i][0];
            long long y2 = arrayPoints[k][1] - arrayPoints[i][1];

            if(x1*y2 === x2*y1) count++;
        }

          maxPoints = max(maxPoints,count);
      }
    }


     return maxPoints;

}


//TC:- O(n*3)




