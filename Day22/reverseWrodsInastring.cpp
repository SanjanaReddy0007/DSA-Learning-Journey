#include<bits/stdc++.h>
using namespace std;


string reverseWord(string text){
   stringstream ss;
   string word;
   vector<string>words;
  
   for(ss >> word) {
    words.push_back(word);
   }

   int n = text.size();
   string ans = "";

   for(int i = n - 1; i >= 0; i--) {
    ans += words[i] + "";
   }

   ans.pop_back();
   return ans;

}

//TC:- O(n) for extracting of string and then reversing runs in linear realtiveamount of time.....
//SC:- O(n) string ans required space for the word......

