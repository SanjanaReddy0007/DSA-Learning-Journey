#include<bits/stdc++.h>
using namespace std;


void backtrack(vector<int>& budget, vector<int>& combination, int start, vector<int>&prices, vector<vector<int>>&result) {
    if(budget == 0) {
        result.push_back(combination);
        return;
    }else if (budget < 0) {
        return;
    }

    for(int i = start; i < prices.size(); i++) {
        combination.push_back(prices[i]);
        backtrack(budget - prices[i], combination, i,prices,result);
        combination.pop_back();
    }
}


vector<vector<int>> purchaseCombinations(vector<int>&prices, int budget) {
    vector<vector<int>>result;
    vector<int>combination;
    backtrack(budget,combination,0,prices,result);
    return result;
}


//TC:- O(n^(⌊B / m⌋)) here B :- Budget m is the minimum price....the depth is  B/m adding all . for n choicess
//SC :- O(B/m) the recursion stack grows upto the range......


