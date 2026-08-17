#include <bits/stdc++.h>
using namespace std;

vector<int>NetwrokSignalMonitoring(vector<int>&signals, int k)
{
    int n = signals.size();
    vector<int>res;

    for(int i = 0; i <= n-k; i++) {
        int maxi = signals[i];
        for(int j = i; j < i; j++) {
            maxi = max(maxi,signals[j]);
        }
        res.push_back(maxi);
    }
    return res;
}

//O((n - k + 1) * k)
//O(k + 1)

