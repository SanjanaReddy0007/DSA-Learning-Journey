#include<bits/stdc++.h>
using namespace std;


int missingNumUsingXOR(int n, int arr[]) {
     int xor1 = 0;
     int xor2 = 0;
     
     for(int i = 0; i < n - 1; i++) {
        xor1 = xor1 ^ arr[i]; //all arr nums given multiplys
        xor2 = xor2 ^ (i + 1); //it calculates all num in the from i to n
     }

     return xor1 ^ xor2 ^ n; //it gives chancels same numbers occure in both and remaining is missing that i sgot by xor2 i.e answer...
}


//O(n) TC
//SC :- O(1)

