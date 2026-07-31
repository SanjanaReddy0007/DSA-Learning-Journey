#include<bits/stdc++.h>
using namespace std;


long long countPeakPistonTotal(vector<int>&levels, int limit, string moment)
{
   int n = levels.size();
   int cycle = 2*limit;
   vector<int>pos = levels;
   string dir = moments;
   long long current;

   for(int x : levels) {
      current += x;
   }

   int ans = current;
   for(int i = 0; i < cycle; i++) {
    for(int j = 0; j < n; j++) {
        if(pos[i] == 0) {
            dir[i] = 'U';
        } else if(pos[i] == limit){
            dir[i] = 'D';
        }

        if(dir[i] == 'U') {
            pos[i]++;
            current++;
        } else {
            pos[i]--;
            current--;
        }
    }

    ans = max(current,ans);
   }

   return ans;
}

//TC :- O(n * limit)
//SC :- O(n)

