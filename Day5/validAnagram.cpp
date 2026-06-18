#include<bits/stdc++.h>
using namespace std;



string validAnagram(string s1,string s2) {
    if(s1.length() != s2.length()) {
        return false;
    }

   unordered_map<char,int>CountS;
   unordered_map<char,int>CountT;

    for(int i = 0; i < s1.size() ; i++) {
       CountS[s1[i]]++;
       CountT[s2[i]]++;
    }

    return CountS == CountT;

}


//TC:- O(n+m)




