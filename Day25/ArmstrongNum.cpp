#include<bits/stdc++.h>
using namespace std;


bool ArmStrongNum(int num) {
    int n1 = num;
    int n = int(log10) num + 1;
    int sum = 0;
    

    while(num != 0) {
        int last = num % 10;
        sum += pow(last , n);
        num / 10;
    }

    if(n1 == sum) {
        return true;
    }else{
        return false;
    }

}


//Armstrong num :-  a num which is equal to the raise to the power of total num of digits of sum
//TC :- O(logn(n)) for extract and divide of number...

