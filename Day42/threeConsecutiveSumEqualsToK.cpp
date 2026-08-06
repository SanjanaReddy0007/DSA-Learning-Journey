#include <bits/stdc++.h>
using namespace std;

vector<int>threeconsecutivesumToK(int K)
{
    if(K == 0) return {-1,0,1};

    for(int i = 0; i <= k - 2; i++) {
        if(arr(i) + (i + 1) + (i + 2) == k) {
            return {i, i + 1, i + 2};
        }
    }

return {-1,-1};
}


//O(k) SC ;- O(1)


