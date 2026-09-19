int isPossible(int arr[] , int mid, int d) {
    
    int daysN = 1, currW = 0;
    for(int i = 0; i < n; i++) {
        currW += loads[i];
        if(currW > mid) {
            daysN++;
            currW += loads[i];
        }
    }

    return daysN <= d;

}

int loads(vector<int>&loads, int d) {
    int n = loads.size();
    int total = 0, currW = 0;
    
    for(int i = 0; i < n; i++) {
        total += loads[i];
        currW = max(currW , loads[i]);
    }

    int low = currW , high = total;
    while(low <= high) {
        int mid = (low + high) / 2;

        if(isPossible(loads, mid, d)) {
            high = mid; 
        } else {
            low = mid + 1;
        }
    }
    
    return low;

}


