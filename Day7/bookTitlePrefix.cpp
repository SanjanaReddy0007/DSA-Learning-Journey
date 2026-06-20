#include<bits/stdc++.h>
using namespace std;


vector<string>genertaeString(string text) {
    vector<string>result;

    for(int i = 1; i < text.size(); i++) {
        result.push_back(text.substr(0,i));
    }
    return result;
}

//return result in form of b
// ba
//bal
//ball
//like thi line by line so store in resylt form aof a vecctor string s can substr push and print tahts it simple

//TC :- O(n^2)



