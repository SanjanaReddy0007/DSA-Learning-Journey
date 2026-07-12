#include<bits/stdc++.h>
using namespace std;


int sumOfdigits(int num) {
    if(num == 0) {
        return 0;
    return (num % 9 == 0) ? 9 : (num % 9);
    }
}

//TC:- O(1)
//SC:- O(1)


