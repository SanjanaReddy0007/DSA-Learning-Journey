
int removeSpecificElement(int arr[] , int target) {
    int n = arr.size();

    int pos = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] != target) {
            arr[pos] = arr[i];
            pos++;
        }
    }

    return pos;

}


