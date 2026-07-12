#include<bits/stdc++.h>
using namespace std;


int kthDigit(int A, int B, int K) {
     long long power = 1;

     for(int i = 0; i < B; i++) {
        power *= A;
     }

     for(int i = 1; i < k; i++) {
        power /= 10;
     }

     return power % 10;

}

//ex:- A = 5 B= 2 K = 2
//ans :- 2 that is remove one last digit i.e 2nd give firts so created another loop to remove /10 i.e removes last onessss
//5*5 = 25 power /= 10 is gives 5and next power remiander % 10 is gives only the remaining 2 value...


//TC:- O(B + K) B for multiplication and K for the removing digit.......


