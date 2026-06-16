#include<bits/stdc++.h>
using namespace std;


int gcdHelper(int a, int b) {
    if(b == 0) {
        return a;

    gcdHelper(b , a%b);
    }
}


int lcmOfArray(vector<int>&arr) {
    int n = arr.size();
    int lcm = arr[0];
    
    for(int i=1;i<N;i++) {
        int a = lcm;
        int b = arr[i];
        int gcd = gcdHelper(a,b);
        lcm = 1LL*(a / gcd) * b; 
    }

    return lcm;

}



//O(n * log(max(a,b)))




