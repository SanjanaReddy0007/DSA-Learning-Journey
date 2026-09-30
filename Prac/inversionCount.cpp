
int mergee(int arr[] , int left , int right , int mid) {
    int i = left;
    int j = mid + 1;
    int k = left;
    long inv_count;

    vector<int>neww(right - left + 1);

    while(i <= mid && j <= right) {
         if(arr[i] <= arr[j]) {
            neww[k - left] = arr[i];
            i++;
         } else {
            neww[k - left] = arr[j];
            inv_count += (mid - i + 1);
            j++;
         }
         k++;
    }

    while(i <= mid) {
        neww[k - left] = arr[i];
        i++;
        k++;
    }

    while(j <= right) {
        neww[k - left] = arr[j];
        j++;
        k++;
    }

    for(int i = left; i <= right; i++) {
        arr[i] = neww[i - left];
    }

    return inv_count;

}

int merge(int arr[] , int left , int right) {
    if(left == right) return;
    int mid = (left + right) / 2;

    int inv_count += mergee(arr, left, mid);
    inv_count += mergee(arr , mid + 1, right);
    inv_count += mergee(arr , left , mid, right);
    
    return inv_count;
}

void mergeSort(int arr[] , int n) {
    return merge(arr,  0, n - 1);
}

