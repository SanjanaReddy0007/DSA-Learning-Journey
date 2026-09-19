int firstOccur(int arr[],int n, int k) {
    int low = 0, high = n - 1;
    int ans = 0;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == k) {
            ans = arr[mid];
            high = mid - 1;
        } else if(arr[mid] > k) {
            high = mid - 1;
        } else{
            low = mid + 1;
        }
    }

    return ans;
}

int lastOccur(int arr[],int n, int k) {
    int low = 0, high = n - 1;
    int ans = 0;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == k) {
            ans = arr[mid];
            low = mid + 1;
        } else if(arr[mid] > k) {
            high = mid - 1;
        } else{
            low = mid + 1;
        }
    }

    return ans;
}

int noOfOccurance(int arr[],int n, int k) {
    int first = firstOcc(arr,n,k);

    if(first == -1) return 0;
    int last = lastOccur(arr,n,k); 

    return last - first + 1;
}

