#include<bits/stdc++.h>
using namespace std;


int totalMoves(vector<vector<int>>&placements) {
   int n = placements.size();
   
   vector<int>rows,cols;

   for(int i=0;i<n;i++) {
    rows.push_back(placements[i][0]);
    cols.push_back(placements[i][1]);
   }


   sort(rows.begin(),rows.end());
   sort(cols.begin(),cols.end());

   long long  moves = 0;
   for(int i = 0; i < n; i++) {
      moves += abs(rows[i],i);
      moves += abs(cols[i],i);
   }

   return moves;

}



//TC:-O(nlogn) for soting



