
int countSwaps(int n, vector<int>&arr) {
    
    int swaps = 0;
    for(int i = 1; i <= n - 1; i++) {
        int j = i;
        while(j >= 1 && arr[j - 1] > arr[j]) {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            swaps++;
            j--;
        }
    }

    return swaps;

}

