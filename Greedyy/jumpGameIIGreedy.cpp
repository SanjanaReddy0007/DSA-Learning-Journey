
int jumpGameII(vector<int>&steps) {
    int n = steps.size();
    int l = 0, r = 0, count = 0;
  
    while(r < n - 1) {
        int maxi = -1;
        for(int i = l; i <= r; i++) {
            maxi = max(maxi , i + steps[i]);
        }
        count++;
        l = r + 1;
         r= maxi;
    }
 
    return count;

}

