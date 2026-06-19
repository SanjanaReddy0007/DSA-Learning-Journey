#include<bits/stdc++.h>
using namespace std;


int sumOfNnumbers(int n) {
    if(n == 1) return 1;
    return sumOfNnumbers(n - 1) + n;
}



//TC :- O(n)


