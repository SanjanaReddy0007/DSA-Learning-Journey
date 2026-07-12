#include<bits/stdc++.h>
using namespace std;


bool harshedNum(int num) {
   int sum  = 0;
   int n1 = num;
   
   while(n != 0) {
      sum  += n % 10;
      n /= 10;
   }
   
   if(num % sum == 0) {
      return true;
   } else {
    return false;
   }


}



//HARSHED NUM :- NUM which is divisible by the sum of it's num.......
//TC :- O(logn)



