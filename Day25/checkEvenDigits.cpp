#include<bits/stdc++.h>
using namespace std;


bool checkEvenDigits(int n) {
    int count = 0;
    int evenDigit = 0;

    while(n != 0) {
        int last = n % 10;
        
        if(n % last == 0) {
            count++;
            evenDigit++;
            n /= 10;
        }
    }
    
    if(count == evenDigit) {
        return true;
    } else {
        return false;
    }

}

//TC:- O(logn) for dividing half and checking even
//SC:- O(1) no extra sapce needed



