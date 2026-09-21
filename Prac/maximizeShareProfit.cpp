
int maximaizeShareProfit(vector<int>&profit) {
    int n = profit.size();
    int maxi = 0;
    int mini = arr[0];

    for(int i = 1; i < n; i++) {
        int profit = arr[i] - mini;
        maxi = max(maxi , profit);
        mini = min(min, arr[i]);
    }

    return maxi;

}
