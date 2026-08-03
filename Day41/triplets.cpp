#include <bits/stdc++.h>
using namespace std;


int countTriplets(vector<int>& pairs, int m)
{
    int n = pairs.size();
    int count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i+ 1; j < n; j++) {
            for(int k = j + 1; j < n; k ++) {
                int sum = pairs[i] + pairs[j] + pairs[k];
                if(sum % m == 0) {
                    count++;
                }
            }
        }
    }
    return count;
}

//O(n^3)
//O(1)