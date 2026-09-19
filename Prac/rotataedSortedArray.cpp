
int searchInRotatedSortedArray(int arr[], int x, int n) {
    int low = 0, high = n - 1;
    while(low <= high) {
        if(arr[mid] == k) {
            return arr[mid];
        }
        else if(arr[low] <= arr[mid]) {
            if(arr[low] <= x && x <= arr[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } else if(arr[mid] <= arr[high]) {
            if(arr[mid] <= x && x <= arr[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }

return -1;

}


