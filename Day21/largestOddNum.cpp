#include<bits.stdc++.h>
using namespace std;


string LongestOddNumbers(string s) {
    
    int n = s.size();
    for(int i = n - 1; i >= 0; i--) {
        if((s[i] - '0' ) % 2 != 0){
            return s.substr(0,i + 1);
        }
    }
   
    return "";

}

//O(n) in worst case have to scan from the righttttooo leftttt...........
//O(1) SC no extra space is used...auxilary sc is this is 




