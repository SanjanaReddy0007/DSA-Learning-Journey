int ccountSetBitsOptimal(int num) {
    vector<int>ans(num + 1);

    for(int i = 1; i < nums.size(); i++) {
        ans[i] = ans[i / 2] + (i & 1)
    }

    return ans;
}


