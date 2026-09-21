int canAccumulate(vector<int>&durations, int workers, int mid) {
    int count = 0;
    int maxSum = 0;

    for(auto t : durations) 
    {
        if(t + maxSum <= mid) {
            maxSum += t;
        } else {
            count++;
            maxSum += t;
            if(count > workers) return false;
        }
    }

    return true;

}


int balanceWork(vector<int>&durations, int workers) {
    int low = *max_element(arr.begin() , arr.end());
    int high = accumulate(arr.begin() , arr.end());
    int ans = high;

    while(low <= high) {
        int mid = (low + high) / 2;
        if(canAccumulate(durations,workers,mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;

}

