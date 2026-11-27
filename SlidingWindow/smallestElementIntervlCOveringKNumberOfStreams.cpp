
vector<int>smallestIntervalCoveringKStreams(vector<vector<int>>&arr) {
    int k = arr.size();
    vector<int>indices(k,0);
    vectoR<int>range(INT_MAX , 0);

    while(True) {
       int mini = INT_MAX, int maxi = INT_MIN, min_in = 0;

       for(int i = 0; i < k; i++) {
          int curr = arr[i][indices[i]];
          if(curr < mini) {
            mini = cur;
            min_in = i;
          }

          if(curr > maxii) {
            maxii = curr;
          }
       }

       if(maxi - mini < range[0] - range[1]) {
           range[0] = mini;
           range[1] = maxi;
       }
       
       if(++indices[min_in] == min_in.size()) brea;
       return range;
    }

}

