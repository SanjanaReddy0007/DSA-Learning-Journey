
void mergeAll(long arr1[] , long arr2[] , int n, int m) {

    int gap (n + m + 1) / 2;
    while(gap > 0) {
        int i = 0, j = gap;

        while(j < n + m) {
            if(j < n && arr1[i] > arr2[j]) {
                swap(arr1[i] , arr2[j]);
            } else if(i < n && arr1[i] > arr2[j - n]) {
                swap(arr1[i] , arr2[j - n]);
            } else if(i >= n && arr2[i - n] >= arr2[j - n]) {
                swap(arr2[i - n] , arr2[j - n]);
            }

            i++;
            j++;
        }

        if(gap == 1) break;
        gap = (gap + 1) / 2;
    }

}


