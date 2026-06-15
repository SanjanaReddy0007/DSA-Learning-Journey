#include<bits/stdc++.h>
using namespace std;


int PerfecNum(int n) {
    int sum = 1;
    int num = n;
    for(int i=2;i*i<=n;i++) {
        if(n % i == 0){
            if(n% i ==i ){
                sum += i;
            }else{
                sum += (n/i,i);
            }
        }
    }

    if(num == sum) {
        return true;
    }else{
        return false;
    }
}


