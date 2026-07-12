#include<bits/stdc++.h>
using namespace std;


//A square of its num if ends in same last digit i.e Automorphicc

int AutoMorphic(int num) {
    
    int square = num * num;

    while(num != 0) {
        if(num % 10 != square % 10) return false;
        num /= 10;
        square /= 10;
    }
 
    return true;
}


//TC :- O(logn(n)) for digit extraatcion and square of all
//Sc:- O(1)
