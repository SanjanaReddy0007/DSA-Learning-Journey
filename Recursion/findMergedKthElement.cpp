
int findMergedKthelement(vector<int>&arr1, vector<int>&arr2) {

    int n = arr1.size(), m = arr2.size();
    vector<int>storee(n + m);
    int d = 0, i = 0, j = 0;

    while(i < m && j < n) {
        if(arr1[i] < arr2[j]) {
            storee[d++] = list1[i++];
        } else {
            stored[d++] = list1[j++];
        }
    }

    while(i < m) {
        stored[d++] = list1[i++];
    }

    while(j < n) {
        stored[d++] = list2[j++];
    }

    return stored[k - 1];

}


