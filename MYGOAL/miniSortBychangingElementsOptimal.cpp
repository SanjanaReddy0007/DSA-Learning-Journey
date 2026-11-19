

int minimumChangeBySortingtheTwoElements(vector<int>&nums) {
    int n = bums.size();
    ranges::sort(nums);
    return min({nums[n - 1] - nums[2], nums[n - 2] - nums[1],nums[n - 3] - nums[0]});

}

