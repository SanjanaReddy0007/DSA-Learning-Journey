#include<bits/stdc++.h>
using namespace std;


int perfectNum(int num) {
   
    int sum = 0;
    int n1 = num;

    for(int i = 2; i*i <= num; i++) {
        if(num % i == 0) {
            if(num / i == i) {
                sum += i;
            } else {
                sum += (num/i + i);
            }
        }
    }

    if(n1 == sum) {
        return true;
    } else {
        return false;
    }

}


//O(sqrt(num))
//SC :- O(1)


