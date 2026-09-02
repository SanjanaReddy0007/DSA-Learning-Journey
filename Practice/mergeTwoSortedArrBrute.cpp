void mergeTwoSortedArr(int arr1,int arr2,int m,int n) {
   
    for(int i = 0; i < m; i++) {
        arr1[m + i] = arr2[i];
    }

    sort(arr1.begin(),arr1.end());
}

