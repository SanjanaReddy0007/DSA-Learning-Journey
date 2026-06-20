#include<bits/stdc++.h>
using namespace std;



char findCharacter(long long n,long long unsigned k) {
        if( k % 2 == 0) {
            return '1';
        return '0';
        }
}

//it is like a pattern r(n-1) + invert(reverse(r(n-1)))
//so instead of all calculation binary and shift and all and find kth position so find the kth value here directly from here............

//TC:- O(n)

