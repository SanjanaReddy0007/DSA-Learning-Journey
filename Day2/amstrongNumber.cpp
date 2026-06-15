#include<bits/stdc++.h>
using namespace std;


int amstrongNumber(int num) {
    int n = (int)log10(num) + 1;
    int last_ditgit=0;
    int x = num;
    int ans = 0;

    while( num != 0) {
        last_ditgit = num % 10;
        ans = pow(last_ditgit,n);
        num /= 10;
    }

    if(ans == x) {
        return true;
    }else{
        return false;
    }
}


TC:- O(logn)





