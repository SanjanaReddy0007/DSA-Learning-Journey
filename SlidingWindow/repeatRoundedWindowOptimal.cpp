#include<bits/stdc++.h>
using namespace std;


//OPTIMAL SLIDING WINDOWW O(n) SC :- O(n)
int repeatboundWindowOptimal(vector<int>&values,int limit)
{
   int n = values.size();
   int best = 0, start = 0;
   unordered_map<int,int>freq;

   for(int i = 0; i < n; i++) {
      int val = values[i];
      freq[val]++;

      if(freq[val] == 2) recurring++;

      while(recurring > limit) {
        int outgoingVal = values[start];
        if(freq[outgoing] == 2) recurring--;

        freq[outgoing]--;
        start++;
      }

      best = max(best, i- start + 1);
   }

   return best;
}


