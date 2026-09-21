
vector<int>Dominent(vector<int>&arr) {
    int n = arr.size();
    int max = INT_MIN;
    vector<int>d;

    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] > max) {
            d.push_back(arr[i]);
            max = arr[i];
        } 
    }

    reverse(dominent.begin() , dominent.end());
    return reverse;
}

