
int SJF(vector<int&arr) {
    int n = arr.size();
    sort(arr.begin() , arr.end());
 
    long long t = 0, waiting_time = 0;
    for(int i = 0; i < n; i++) {
        waiting_time += t;
        t += arr[i];
    }

    return waiting_time / n;

}

