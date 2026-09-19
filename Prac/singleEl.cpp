//Linear search
int singleEl(int arr[], int n)
{
    if(n == 1) return arr[0];
    if(arr[0] == arr[1]) return arr[0];
    if(arr[n - 1] == arr[n - 2]) return arr[n - 1];

    for(int i = 1; i <= n - 2; i++) {
        if(arr[i] != arr[i - 1] || arr[i] != arr[i + 1]) {
            return arr[i];
        }
    }

    return 0;

}


//Binary SEARCHHHH
int singleElement(int arr[] , int n) {

    if(n == 1) return arr[0];
    if(arr[n - 1] == arr[n - 2]) return arr[n - 1];
    if(arr[0] == arr[1]) return arr[0];

    int low = 1, high = n - 2;
    while(low <= high) {
        
        int mid = (low + high) / 2;
        if(arr[mid] != arr[mid - 1] || arr[mid] != arr[mid + 1]) {
            return arr[mid];
        }

        if((mid % 2 == 1 && arr[mid] == arr[mid + 1]) || (mid % 2 == 1 && arr[mid] == arr[mid - 1])) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return 0;
}



