
void reverseArray(int arr[] , int k) {
    int k = k % n;
    reverse(arr , arr+ k);
    reverse(arr + k , arr + n);
    reverse(arr , arr + n);
}


