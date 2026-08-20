#include<bits/stdc++.h>
using namespace std;

int measuredAlignedWinodw(string typed,string reference)
{
    int n = typed.size();
    int m = reference.size();
    int ans = 0;

    for(int skip=-1;skip<n;skip++) {
          int i=0,j=0;

          while(i < n && j < m) {
            if(i == skip) {
                i++;
                continue;
            }

            if(typed[i] != reference[j]) {
                break;
            }

            i++;
            j++;
          }

          ans = max(ans,j);
    }
    return ans;

}

