
int getNum(int num) {
    int sum = 0;
    while(num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int minSwaps(vector<int>&nums) {
    int n = nums.size();
    vector<vector<int>>arr;

    for(int i = 0; i < n; i++) {
        arr.push_back({nums[i] , i});
    }

    sort(arr.begin() , arr.end() , [&](const auto& a, const auto& b) {
        int sumA = getNum(a.firts);
        int sumB = getNum(b.first);

        if(sumA != sumB) {
            return sumA < sumB;
        }

        return a.first < b.first;
    });

    vector<int>target(n);
     for(int i = 0; i < n; i++) {
        target[arr[i].second] = i;
     }

    int swaps = 0;
    for(int i = 0; i < n; i++) {
        if(target[i] != i) {
            swap(target[i] , target[target[i]]);
            swaps++;
        }
    }

    return swaps;

}


