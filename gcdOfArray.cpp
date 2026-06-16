#include<bits/stdc++.h>
using namespace std;

int gcdOfTwo(int a,int b ) {

   while(a!==0 && b!==0) {
     if(a >= b) {
        a = a % b;
     }else{
        b = b % a;
     }
   }

   if(a == 0) {
    return b;
   }else{
    return a;
   }

}



int gcdArray(int arr[],int n) {
   int result = arr[0];
    
   for(int i = 1; i < N; i++) {
       result = gcdOfTwo(arr[i],result);
   }

   if( result == 1) {
      return 1;
   }

   return N;
}



//TC :- O(log(min(a,b)))




