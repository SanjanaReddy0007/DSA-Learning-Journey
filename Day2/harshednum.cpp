#include<bits/stdc++.h>
using namespace std;


int harsshedNum(int num){
    int sum = 0;
    int n = num;

  while(num != 0) {
     sum += num % 10;
     num /= 10;
  }

  if(num % sum ) {
    return"YESS";
  }else{
    "NOOOO";
  }

}




