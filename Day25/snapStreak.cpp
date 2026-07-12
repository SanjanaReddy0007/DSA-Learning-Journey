#include<bits/stdc++.h>
using namespace std;


int longestStreak(string s) {
    int longest = 0;
    int current = 0;

    for(char c : s) {
        if(c == '1') {
            current++;
            longest = max(current,longest);
        } else {
            current = 0; //restes as current =0
        }
    }
   return longest;
}


//O(n) from 1 to n each char is processed in constnt time
//SC : O(1)


