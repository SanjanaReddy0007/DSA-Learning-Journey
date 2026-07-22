#include<bits/stdc++.h>
using namespace std;

int maxSumProfit(vector<int>&arr)
{
    int maxProfit = 0;
    int n = arr.size();

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n; j++) {
            int profit = arr[i] - arr[j];
            maxProfit = max(profit, maxProfit);
        }
    }

    return maxProfit;
}


//TC :- O(n)
//SC :- O(1)

