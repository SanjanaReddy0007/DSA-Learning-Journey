#include <bits/stdc++.h>
using namespace std;

int maxCountSubarr(vector<int>& pairs)
{
    int n = pairs.size();
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            bool isincrease = true;
            for(int k = i + 1; k <= j; k++) {
                if(pairs[k] <= pairs[k - 1]) {
                    isIncrease = false;
                    break;
                }
            }

            if(isIncrease) ans++;
            else break;
        }
    }

    return ans;
}

//TC :- O(n^2)
//SC :- O(1)
