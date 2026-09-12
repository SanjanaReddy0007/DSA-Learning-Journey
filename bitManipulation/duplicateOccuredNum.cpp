int duplicateOccuredNum(vector<int>&num) {
    int n = nums.size();

    unordered_map<int,int>m;

    for(int i = 0; i < n; i++) {
        if(m[nums[i]]++) {
            return nums[i];
        }
    }
    return -1;
}

