#include<bits/stdc++.h>
using namespace std;

int reverseAnumber(int N) {
    int x = 0;
    int last_ditgit = 0;
    while(N != 0) {
        last_ditgit = N % 10;
        N /= 10;
         x = x*10 + last_ditgit;
    }
    return x;
}




//tc is :- O(n)


