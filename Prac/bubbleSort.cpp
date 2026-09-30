
void bubbleSort(int n , vector<int>&arr)
{
    for(int i = n; i >= 1; i--) {
        bool is_sort = true;
        for(int j = 0; j <= i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                is_sort = false;
            }
        }
        if(is_sort) break;
    }
}

