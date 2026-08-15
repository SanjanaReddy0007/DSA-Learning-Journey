#include<bits/stdc++.h>
using namespace std;

int minWindowSubstring(string s, string target)
{
   int n = s.size();
   int i = 0, j = 0;
   unordered_map<char,int>m;
   int startIndex = -1, count = 0;
   int length = 0;

   for(char ch : target) {
     m[ch]++;
   }

   while(j < n) {
       if(m[s[j]] > 0) count++;
       m[s[j]]--;

       while(count == target.size()) {
          if(j - i + 1 < length) {
            length = j - i + 1;
            start = i;
          }

          m[s[i]]++;
          if(m[s[i]] > 0) count--;
          i++;
       }

       j++;
   }

   return (start == -1) ? "" : s.substr(start, length);
}


//O(m+n)
//O(1) constanct space for it.........


