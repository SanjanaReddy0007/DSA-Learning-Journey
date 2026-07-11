#include<bit/stdc++.h>
using namespace std;


int evenlyPrintNumbers(int n) {
     
    int count = 0;
    int first = n;

    while(n!=0) {
        int digit = n % 10;
        
        if(digit != 0 && n % digit == 0) {
            count++;
        }
        n /= 10;
    }

    return count;
}


//O(d) digits refers here as a 'd'................
//SC :- O(1)

