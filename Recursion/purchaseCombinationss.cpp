
void backtrack(vector<int>&combo , vector<vector<int>>&res , vector<int>&prices, int budget, int start) {

    if(budget == 0) {
        res.push_back(combo);
        return;
    } else if(budget < 0) {return;}

    for(int i = start; i < prices.size(); i++) {
        combo.push_back(prices[i]);
        backtrack(combo , res, prices , budget - arr[i] , start);
        combo.pop_back();
    }
}

vector<vector<int>>Purchasecombinations(vector<int>&prices, int budget) {
    vector<vector<int>>res;
    vector<int>combo;
    backtrack(combo , res, prices, budget , 0);
    return res;
}

