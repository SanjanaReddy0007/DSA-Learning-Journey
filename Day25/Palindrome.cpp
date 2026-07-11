#include<bits/stdc++.h>
using namespace std;


int palindrome(int n) {
      
    int n1 = n;
    int digit;
    int x = 0;

    while(n != 0) {
        digit = n % 10;
        x = x * 10 + digit;
        n /= 10;
    }

    if(n1 == n) {
        return "YESS";
    }else{
        return "NO";
    }

}



