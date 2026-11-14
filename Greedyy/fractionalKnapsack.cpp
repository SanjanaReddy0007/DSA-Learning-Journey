
double fractionalKnapsack(vector<int>&profit, vector<int>&weights, int capacity) {
    int n = profit.size();
    double ans = 0.0;
    vector<pair<double,int>>kg_profits(n);
    
    for(int i = 0; i < n; i++) {
        kg_profits[i].first = (double)profit[i] / (double)weights[i];
        capacity -= (weights[i]);
    }

    sort(kg_profits.rbegin() , kg_profits.rend());

    for(int i = 0; i < n; i++) {
        if(kg_profits[i].second <= capacity) {
            ans += (kg_profits[i].first) * (kg_profits[i].second);
            capacity -= kg_profits[i].second;
        } else {
            ans += (kg_profits[i].first) * capacity;
            break;
        }
    }

    return ans;

}

//O(nlogn) :- TC
//Sc :- O(n)
