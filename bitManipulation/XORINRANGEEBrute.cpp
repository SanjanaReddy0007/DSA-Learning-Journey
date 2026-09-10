int xorInrange(int left, int right) {
   
    int ans = 1;
    for(int left = 0; left <= right; left++) {
        ans = ans ^ left;
    }

    return ans;
}

//O(left - right)
//O(1)