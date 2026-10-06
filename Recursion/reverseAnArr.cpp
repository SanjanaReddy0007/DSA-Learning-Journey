
void RecursiveArray(int arr[] , int n) {
    int i = 0, j = n - 1;

    while(j < n) {
        swap(arr[i] , arr[n - 1]);
        i++;
        j--;
    }

}

