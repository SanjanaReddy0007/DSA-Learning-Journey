#include<bits/stdc++.h>
using namespace std;



int countRepetateiveDigits(int num) {
    int ans = 0;
    int count[10]  = {0};
      
    while(num != 0) {
        int last = num / 10;
        count[last]++;
        n /= 10;
    }

    for(int i = 0; i < 10; i++) {
        if(count[i] > 1) {
            ans++;
        }
    }
  
     return ans;

}


//O(n) .for each digit extraction takes O(logn) of time... the arr iterative takes O(n) of time...


