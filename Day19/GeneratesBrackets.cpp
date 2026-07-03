#include<bits/stdc++.h>
using namespace std;



void backtrack(string current,int openCount,int closeCount,int m,vector<string>&result) {
    if(current.length() == 2*m) {
        result.push_back(current);
        return;
    }


   if(openCount < m) {
    current.push_back("[");
    backtrack(current,openCount + 1,closeCount,m,result);
    current.pop_back();
   }


   if(closeCount < openCount) {
    current.push_back(']');
    backtrack(current,openCount,closeCount + 1,m,result);
    current.pop_back();
   }


}




vector<string>generatesBrackets(int m) {
    vector<string>result;
    string current = "";
    backtrack(current,0,0,m,result);
    return result;
}




