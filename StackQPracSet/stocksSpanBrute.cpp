
vector<int>spanStock(vecotr<int>&sp, int m) {
    vector<int>ans;

    for(int i = 0;  i < m; i++) {
        int cur = 0;
        for(int j = i; j >= 0; j--) {
            if(sp[j] <= sp[i]) {
                cur++;
            } else {
                break;
            }
        }
        ans[i] = cur;
    }

    return cur;

}

