
void selectionSort(int n) {

    int minindex;
    for(int i = 0; i <= n - 2; i++) {
        min_index = i;
        for(int j = 0; j <= n - 1; j++) {
            if(arr[j] < min_index) {
                min_index = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

}

