#include<bits/stdc++.h>
using namespace std;


int lateDelayCharges(vector<int>& delays)
{
    int total = 0;

   for(int days : delays) {
    if(days == 1) {
        total += 1;
     } else if(days <= 5) {
        total += days * 2;
     } else {
        total += 3 * days;
     }
 }

   return total;

}


//O(n) TC
//O(1) SC


