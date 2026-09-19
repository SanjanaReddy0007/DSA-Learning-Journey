
int peakelement(int arr[] , int n) {

    if(arr[0] > arr[1]) return arr[0];
    if(arr[n - 1] > arr[n - 2]) return arr[n - 1];
    if(n == 0) return arr[0];

    int low = 1, high = n - 2;
    while(low <= high) {

        int mid = (low + high) / 2;
        if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
            return mid;
        }

        if(arr[mid] > arr[mid + 1]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;

}


