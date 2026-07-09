#include<bits/stdc++.h>
using namespace std;


string longestCommonPrefix(vector<string>&words) {
    int n = words.size();
    
    int k = 0;
    if(n == 0) return "";
    if(n == 1) return words[0];

    while(true) {
    for(int i = 1; i < n; i++) {
        if(k == words[0].size() && k == words[i].size()) {
            return words[0].substr(0,k);
        }
        if(words[i][k] != words[0][k]) {
            return words[0].substr(0,k);
        }
    }

    k++;
  }
} 



