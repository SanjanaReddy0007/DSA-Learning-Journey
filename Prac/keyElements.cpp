
vector<int>Keyelements(vector<int>&arr , int T) {
    int n = arr.size();
    int rightSum = 0;
    vector<int>keyEl;
 
    if(n > 0) {
        keyEl.push_back(arr[n - 1]);
    }

    for(int i = n - 2; i >= 0; i--) {
        rightSum += arr[i + 1];
        if(arr[i] - rightsum > T) {
            keyEl.push_back(arr[i]);
        }
    }

   reverse(keyel.begin() , keyEl.end());
     return keyEl;
}

