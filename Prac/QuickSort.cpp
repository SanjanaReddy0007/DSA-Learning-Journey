
  int  partititon(int arr[] ,int low, int high) {
    int i = 0, j = high;

    while(i < j) {
        while(arr[i] < arr[low] && i < high) {
            i++;
        }

        while(arr[j] > arr[low] && j > low) {
            j--;
        }

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}


void Quick(int arr[] , int low,int high) {
    if(low < high) {
        int j = partition(arr , low,high);
        Quick(arr, low , j - 1);
        Qucik(arr , j + 1, high);
    }
}

void QuickSort(int arr[], int n) {
    return Quick(arr,0,n - 1);

}

