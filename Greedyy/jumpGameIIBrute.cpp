
int helper(int indx , int jumps, vector<int>&steps) {
    int n = steps.size();
    if(indx >= n - 1) return jumps;
    if(steps[indx] == 0) return INT_MAX;
    
    int min_steps=  INT_MAX;
    for(int i = 1; i < n; i++) {
       min_steps = min(min_steps , helper(steps,jumps + 1, indx + i));
    }
    
    return min_steps;
     
}

int jumpGameII(vector<int>&steps) {
    int res = helper(0,0,steps);
    return res == INT_MAX ? -1 : res;
}

