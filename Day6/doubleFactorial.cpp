#include<bits/stdc++.h>
using namespace std;


int doubleFactorial(int n) {
   if(n == 1 || n == 2) {
    return n;
   }

   return n * doubleFactorial(n - 2);
}


//if odd, multiply all the numbers from 1 to n.
//if even same ""

//TC :- O(n)

