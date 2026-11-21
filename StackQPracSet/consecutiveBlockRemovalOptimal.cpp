
int findLuminary(vector<vecotr<int>>&inter, int n) {
    int strat = 0,end = n - 1;

    while(start < end) {
        if(knows(inter,start,end,n)) {
            start++;
        } else {
            end--;
        }
    }
    int p = start;

    for(int i = 0 ;i < n; i++) {
         if(i != p && inter[p[i]] == 1) {
            return -1;
         }
    }

    for(int o = 0; i < n; i++) {
        if(i != p && inter[i][p] == 0) {
            return -1;
        }
    }

    return p;

}

