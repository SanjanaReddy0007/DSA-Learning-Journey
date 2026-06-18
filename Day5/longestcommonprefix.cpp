#include<bits/stdc++.h>
using namespace std;


string longestCommonPrefix(vector<vector<string>>& words) {
  int n = words.size();
  if(n == 0) return "";
  if(n==1) return words[0];

  int k = 0;
  while(true) {
  for(int i = 0;i <n;i++) {
    if(k == words[0].size() && k == words[i].size()) return words[0].substr(0,k);
    if(words[i][k] != words[0][i]) return words[0].substr(0,k);
  }

  k++; 
 } 
}

//O(N*M)











