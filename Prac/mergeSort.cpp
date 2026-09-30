
void merge(int arr[] , int left , int mid, int right) {
    int left = 0;
    int right = mid + 1;
    int n = left + right - 1;
    int k = 0;
    int new_arr[n];

    while(i <= mid && j <= right) {
        if(arr[i] < arr[j]) {
            new_arr[k] = arr[i];
            i++;
            k++;
        } else {
            new_arr[k] = arr[j];
            j++;
            k++;
        }
    }

    while(i <= mid) {
        new_arr[k] = arr[i];
        i++;
        k++;
    }

    while(j <= right) {
        new_arr[k] = arr[j];
        j++;
        k++;
    }

    for(int c = 0; c < n; c++) {
        new_arr[left + c] = new_arr[c];
    }

}


void mergeSortRec(int arr[] , int left, int right) {
    if(left == right) return;
    int mid = (left + right) / 2;

    merge(arr,left,mid);
    merge(arr,mid + 1, right);
    merge(arr, left , mid , right);

}

void mergeSort(int arr[] , int n) {
     return mergeSortRec(arr , 0 ,n - 1);
}

