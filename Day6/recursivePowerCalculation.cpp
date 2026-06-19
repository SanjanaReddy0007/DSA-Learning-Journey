#include<bits/stdc++.h>
using namespace std;


int Power(int a,int b) {
    if(b == 1) {
        return a;
    }
    
    return a * Power(b - 1);
}





//O(b)



