#include<bits/stdc++.h>
using namespace std;


int maxShareProfit(vector<int>&arr)
{
   int n = arr.size();
   int maxProfit = 0;
   int mini = arr[0];


   for(int i = 0; i < n; i++) {
       int profit = arr[i] - mini;
       maxProfit = max(profit, maxProfit);
       mini = min(mini, arr[i]);
   }

   return maxProfit;

}


//TC :- O(n)
//SC :- O(1)
