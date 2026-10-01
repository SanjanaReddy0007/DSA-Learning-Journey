
int partition(int arr[] , int low, int high) {
    int i = low, j = hgihg;
    int pivot = arr[low];

    while(i < j) {
        while(arr[i] <= arr[pivot] && i <= high - 1) {
            i++;
        }

        while(j >= low + 1 && arr[j] > pivot) {
            j--;
        }
        
        if(i < j) {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low], arr[j]);
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

