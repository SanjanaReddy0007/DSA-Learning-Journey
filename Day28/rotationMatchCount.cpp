#include<bits/stdc++.h>
using namespace std;

int highestCount(vector<int>&current, vector<int>& reference)
{
   int n = current.size();
   int match = 0;
   int answer = 0;
   
   for(int shift = 0; shift < n; shift++) {
      int originalIndex = (i - shift + n) % n;
      for(int i = 0; i < n; i++) {
        if (current[originalIndex] == reference[i] ) {
            match++;
        }
      }
      
       answer = max(answer,match);
   }

   return answer;

}


//O(n ^ 2) TC for 2 loops
//SC :- O(1)


