#include<bits/stdc++.h>
using namespace std;


long long countLongSections(vector<int>& values)
{
   int n = values.size();
   int ans = 0;

   for(int i = 0; i < n; i++) {
    for(int j = i ; j < n; j++) {
        bool isIncreasing = true;
        for(int k = i; k <= j; k++) {
            if(values[k] <= values[k - 1]) {
                isIncreasing = false;
                break;
            }
        }

        if(isIncreasing) ans++;
        else break;
    }
   }

   return ans;
}


//TC :- O(n^3)
//SC :- O(1)

