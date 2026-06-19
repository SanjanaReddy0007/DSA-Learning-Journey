#include<bits/stdc++.h>
using namespace std;


string Palindrome(int i,string s) {
    int n = s.size();

    if( i >= n/2) {
        return true;
    }
   
    if(s[i] != s[n - i -1]) {
        return false;
    }

    Palindrome(i + 1, s) ;

}


string SameStirng(string s) {
    return Palindrome(0,s);
}



//TC :- O(n)


