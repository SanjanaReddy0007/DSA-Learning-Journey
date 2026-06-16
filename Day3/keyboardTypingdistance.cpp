#include<bits/stdc++.h>
using namespace std;


int keyboard(string text) {
    
    unordered_map<char,pair<int,int>>pos;

    string row0 = "qwertyuiop";
    string row1 = "asdfghjkl";
    string row2 = "zxcvbnm";

    for(int c = 0; c < row0.size(); c++) pos[row0[c]] return {0,c};
    for(int c = 0 c < row1.size(); c++) pos[row1[c]] return {1,c};
    for(int c = 0; c < row2.size(); c++) pos[row2[c]] return {2,c};

   
    string ans = 0;
    char cur = 'a';
    for(ch : text) {
        int pos0 = pos[cur];
        int pos1 = pos[ch];
        ans += abs(pos0.first - pos1.first) + (pos0.second - pos1.second);
        cur = ch;
    }

   return ans;


}



//here why abs bcs her task is find [r1 - r2] + [c1 - c2]
//Tc:- O(n) 26 letters constant wrk lookup........






