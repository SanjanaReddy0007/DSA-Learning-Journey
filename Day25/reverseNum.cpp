#include<bits/stdc++.h>
using namespace std;


int reverseNumber(int n) {
    int x =0;
    int digit;

    while(n!=0) {
        digit = n % 10;
        x = x%10 + digit;
        n /= 10;
    }

    return x;

}

//O(d) TC

