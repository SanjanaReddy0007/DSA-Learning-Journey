#include<bits/stdc++.h>
using namespace std;

string reversestring(string text) {
    stringstream ss;
    vector<string>words;
    string word = 0;
   
    for(ss >> word) {
        words.push_back(word);
    }

    int n = words.size();
    string ans = "";

    for(int i = n - 1; i > 0 ; i--) {
          ans += words[i]+ "";
    }
    
    ans.pop_back();
    return ans;


}



//TC:- O(n)




