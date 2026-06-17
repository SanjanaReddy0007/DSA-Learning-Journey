#include<bits/stdc++.h>
using namespace std;


long long cuntMarbles(int totalMarbles,int maxMarbles) {
    int ans = 0;

    for(int i = 0; i <= maxMarbles; i++) {
        for(int j = 0; j <= maxMarbles; j++) {
            for(int k = 0; j <= maxMarbles; k++) {
                if(i+j+k === totalMarbles) {
                    ans++;
                }
            }
        }
    }

    return ans;
}



TC:- O(M^3)


//Problem says that without exceeding max given marbles making adjusting fir into each 3 marbles in each box 



