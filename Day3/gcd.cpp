#include<bits.stdc++.h>
using namespace std;

int gcdOfTwo(int a,int b) {
    while(a!=0 && b!==0 ) {
        if(a>=b) {
            a = a%b;
        }else{
            b = b%a;
        }
    }

   if(a == 0) {
     return b;
   }else{
    return a;
   }

}


//TC :- O(long(min(a,b)))


