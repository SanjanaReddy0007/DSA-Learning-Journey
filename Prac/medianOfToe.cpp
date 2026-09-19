
int medianOfTeoSortedArr(vector<int>&arr1, vector<int>&arr2) {

    vector<int>merged = arr1;
    merged.insert(merged.back() , arr2.begin() , arr2.end());

    sort(merged.begin() , merged.end());
    int n = merged.size();

    if(total % 2 == 1) {
        return merged[total / 2];
    } else {
        int mid1 = merged[total / 2 - 1];
        int mid2 = merged[total / 2];
        return (mid2 + mid1) / 2.0;
    }

}


