#include <bits/stdc++.h>
using namespace std;


int maxProfit(vector<int>& arr)
{
    int n = arr.size();
    int maxProfit = 0;
    int profit = 0

    for(int i = 0; i < n-1; i++) {
        for(int j = i + 1; j < n; j++) {
            profit = arr[j] - arr[i];
            maxProfit = max(maxProfit,prodit);
        }
    }

    return maxProfit;
}

//O(n^2) SC :- O(1)


//OPTIMAL APPROACHHHHHH TC :O(n) SC :- O(1)
int maxProfit(vector<int>& arr)
{
  int n = arr.size();
  int maxProfit  = 0;
  int mini = arr[0];

  for(int i = 0; i < n; i++) {
     int profit = arr[i] - mini;
     maxProfit = max(maxProfit, profit);
     mini = min(mini,arr[i]);
  }

  return maxProfit;
}



