#include<bits/stdc++.h>
using namespace std;


int factorial(int n) {
    if(n == 1 || n == 0) {
        return 1;
    }

    return n*factorial(n - 1);
}


int sumOfFactorialOfNumbers(int n) {
     if( n == 1) return 1;
     return factorial(n % 10) + sumOfFactorialOfNumbers(n / 10);
}


//TC:- O(n * m)

