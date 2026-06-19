#include<bits/stdc++.h>
using namespace std;




int printEven(int i,int n) {
    if(i >= n){
        return;
    }
   if(i % 2 == 0) {
      cout<<i<<" ";
   }

   printEven(i + 1,n);

}



int printOdd(int n){
    if (n == 0){
        return;
    }

    if(i % 2 == 1) {
        cout<<i<<" ";
    }

    printOdd(i - 1, n);
}


int EvenOdd(int n) {
    printEven(1,n);
    printOdd(n);
}


//TC: - O(n)



