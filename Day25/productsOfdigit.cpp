#include<bits/stdc++.h>
using namespace std;


int productOfDigits(int num) {
   
   int product = 1;

   for(int i = 0; i < n; i++) {
       product *= n % 10;
       n /= 10;
   }
    
   return product;

}


//TC:- O(logn) bcs od n/10

