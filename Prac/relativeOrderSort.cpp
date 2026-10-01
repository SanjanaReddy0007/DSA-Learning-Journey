
vector<int>RelativeOrderSort(vector<int>&arr1, vector<int>&arr2) {
    vector<int>result;

    for(int num :arr2) {
        for(int i = 0; i < arr1.size(); i++) {
            if(arr1[i] == num) {
                result.push_back(arr[i]);
                arr1[i] = -1
            }
        }
    }

    sort(arr1.begin() , arr1.end());

    for(int num : arr1) {
        if(arr1[i] > 0) {
            result.push_back(arr[i]);
        }
    }

    return result;
}


