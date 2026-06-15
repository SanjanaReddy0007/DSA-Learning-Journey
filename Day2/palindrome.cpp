#include<bits/stdc++.h>
using namespace std;

int Palindrome(int n) {
    int S = n;
    int x = 0;
    int last_ditgit = 0;

    while(n != 0) {
        last_ditgit = n%10;
        x = x*10+last_ditgit;
        n /= 10;
    }
    
    if(x == S) {
        return "Palindrome";
    }else{
        "not";
    }
}




//TC:- O(n)
