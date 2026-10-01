
vector<int>RelativeOrderSort(vector<int>&arr1, vector<int>&arr2) {
    vector<int>result;
    unordered_map<int,int>countMap;
    vector<int>remain;

    for(int num : arr2) {
        countMap[num] = 0;
    }

    for(int num : arr1) {
        if(countMap.find(num) != countMap.end()) {
            countMap[num]++;
        } else {
            remain.push_back(num);
        }
    }

    sort(remain.begin() , remain.end());

    for(int num : arr2) {
        for(int i = 0; i < countMap[num]; i++) {
            result.push_back(num);
        }
    }

    for(int num : remain) {
        result.push_back(num);
    }

    return result;
}

