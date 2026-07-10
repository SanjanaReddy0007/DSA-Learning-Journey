#include<bits/stdc++.h>
using namespace std;


string isDominant(int P, int Q, int R) {
    if(P > Q + R || Q > P + R || R > P + Q) {
        return "YES"
    }else{
        return "NO"
    }
}


//O(1) bcs only three comaprison done by the one itme...........
