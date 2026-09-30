
void seletionSort(int n) {
    int max_index;
    for(int i = 0; i <= n - 2; i++) {
        max_index = i;
        for(int j = 0; j <= n - 1; j++) {
            if(arr[j] > max_index) {
                max_index = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[max_index];
        arr[max_index] = temp;
    }
}

