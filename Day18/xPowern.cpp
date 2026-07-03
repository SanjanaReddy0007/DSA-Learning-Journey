#include<bits/stdc++.h>
using namespace std;

double xPowN(long long n, long long x) {
    if(n == 0) {
        return 1;
    }

    if(n < 0) {
        return 1/xPowN(x,-n);
    } 
   
    if(n%2 == 0) {
        double halfPower = xPowN(x, n / 2);
        return halfPower*halfPower;
    }


    return x * xPowN(x, n - 1);

}



