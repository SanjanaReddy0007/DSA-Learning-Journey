#include<bits/stdc++.h>
using namespace std;




bool validPalindrome(string s) {
    int left = 0 ,right = s.length() - 1;
    while(left <= right) {
        if(s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}




void backtrack(string s,int start,vector<string>&current, vector<vector<string>>&result) {
    if(s.length() === start) {
        result.push_back(current);
    }

   for(int end=start+1;end<=start;end++) {
     string substringg = s.substr(start,end - start);
     if(validPalindrome(substringg)) {
        current.push_back(substringg);
        backtrack(s,end,current,result);
        current.pop_back();
     }
   }

}


vector<vector<string>>splitsPalindrome(string text) {
    vector<vector<string>>result;
    vector<string>current;
    backtrack(text,0,current,result);
    return result;
}




//O(2^n * n) TC:- in worst case substring can lead to this tc of include exclude part,.generting all partition and checking leads to this tc and N is len of str


