int uniqueElement(vector<int>&nums) {
    int n = nums.size();
    
    unordered_map<int,int>mp;
    for(auto n : nums) {
        mp[nums[n]]++;
    }

    for(auto k :m) {
        if(k.second == 1) {
            return k.first;
        }
    }

    return -1;
}

