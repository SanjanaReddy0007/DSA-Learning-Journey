#include<bits/stdc++.h>
using namespace std;


//first method
int sumofBetweennums(int n1,int n2) {
      
    int sum = 0;

    for(int i = n1; i <= n2; i++) {
        int num = i;
        
        while(num != 0) {
           sum += num % 10;
           num /= 10;
        }
    }

    return sum;

}

//2nd method


int sumOfdigits(int n) {
    int sum = 0;
    while(n != 0) {
       sum += n % 10;
       n /= 10;
    }

  return sum;
}


int sumofBetweennums(int n1,int n2) {
    int totalSum = 0;

    for(int i = n1; i <= n2; i++) {
          totalSum += sumOfdigits(i);
    }

    return totalSum;

}

//TC 2nd:- O((n2 - n1) *d)






