
void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
    
    for(int i = 1; i < n; i++) {
        arr1[i + m] = arr2[i];
    }

    sort(arr1.begin() , arr1.end());
    return arr1;
}

