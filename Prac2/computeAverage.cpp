
int computeAverage(int arr[] , int n) {
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int avg = sum / n;
    return avg;
}


