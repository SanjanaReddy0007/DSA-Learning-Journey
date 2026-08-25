
vector<int>intersectionOfTwoArray(vector<int>&arr1, vector<int>&arr2) {
    int m = arr1.size();
    int n = arr2.size();
    int i = 0, j = 0;
    vector<int>ans;
    
    while(i < m && j < n) {
        if(arr[i] == arr[j]) {
           ans.push_back(arr[i]);
           i++;
           j++;
        } else if(arr[i] < arr[j]) {
            i++;
        } else {
            j++;
        }
    }

    return result;

}


