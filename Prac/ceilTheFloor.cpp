int ceilOfVal(int arr[] , int n, int k) {
    int low = 0, high = n - 1;
    int ceilVal = -1;

    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] >= k) {
            ceilVal = arr[mid];
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ceilVal;

}

int floorValue(int arr[] , int n,int x)
{
    int low = 0, high = n - 1;
    int floorVal = -1;

    while(low <= high) {
        int mid = (low  + high) / 2;
       if(arr[mid] <= k) {
           floorVal = arr[mid];
           low = mid + 1;
       } else {
           high = mid - 1;
       }
    }

    return floorVal;

}

