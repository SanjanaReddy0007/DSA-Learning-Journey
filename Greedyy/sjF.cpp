
int shortestJOBFIRST(vector<int>&arr) {
    int n = arr.size();
    sort(arr.begin() , arr.end());
    int t = 0, wait = 0;

    for(int i = 0 ; i < n; i++) {
        wait += t;
        t += arr[i];
    }

    return wait / n;

}

