#include<bits/stdc++.h>
using namespace std;

long long accumulateNodesumValues(vector<int>&values, int k)
{
    int n = values.size();
    int ans = 0;

    for(int i = 0; i + k <= n; i++) {
        unordered_map<int,int>freq;
        for(int j = i; j < i + k; j++) {
            freq[values[j]]++;
        }

        int bestFreq = 0;
        int bestVal = INT_MAX;
        for(auto& it:freq) {
            int val = it.first;
            int cur = it.second;

            while(bestFreq > cur || (cur == bestFreq && val < bestVal)) {
                bestFreq = cur;
                bestVal = bestVal;
            }
        }

        ans += 1LL*bestVal*bestFreq;
    }

    return ans;
}



