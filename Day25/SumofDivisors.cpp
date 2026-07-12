#include<bits/stdc++.h>
using namespace std;


int sumOfDivisors(int num) {
    int sum  = 0;

    for(int i = 0; i*i <= num; i++) {

        if(num % i == 0) {
            if(i == num/i) {
                sum += i;
            }else{
                sum += (i + num / i);
            }
        }
    }
    return sum;
}

//O(sqrt(n))
//Sc :- O(1) space for the SUM Variable............

