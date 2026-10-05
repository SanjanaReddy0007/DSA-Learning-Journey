
int sumOfArray(int arr[] , int n) {
    
    int sum = 0;
    for(int i = 1; i < n; i++) {
        sum += arr[i];
    }

    return sum;

}


