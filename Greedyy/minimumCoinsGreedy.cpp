

int minimumCoins(vector<int>&arr , int amount) {
    int n = arr.size();
    int count = 0;

     sort(arr.begin() , arr.end());

    for(int i = 0; i < n; i++) {
        if(amount >= arr[i]) {
           count += (amount / arr[i]);
           amount -= (amount / arr[i]) * arr[i];
        }
    }

    if(amount != 0) {
        return -1;
    }

    return count;

}

