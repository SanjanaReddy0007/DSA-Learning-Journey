#include <bits/stdc++.h>
using namespace std;

int countPairs(vector<int>& pairs)
{
    int n = pairs.size();
    int count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(pairs[j] > pairs[i]*2L) {
                count++;
            }
        }
    }

    return count;
}

//TC :- O(n^2)
//SC :- O(1)



