#include<bits/stdc++.h>
using namespace std;

int eventDigits(int n) {
    int lastdit = 0;
    int count=0;
    int eventdigits=0;

    while(n != 0) {
        last_ditgit = n % 10;

        if(last_ditgit % 2 == 0) {
           eventDigits++;
        }
        count++;

        if(count == eventDigits) {
            return true;
        }else{
            return false;
        }
    }
}


//TC:- O(logn)
