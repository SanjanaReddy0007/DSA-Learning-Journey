
void Recursee(int i , int arr[] , int n) {
   if(i >= n / 2) return;

   swap(arr[i] , arr[n - i - 1]);
   Recursee(i + 1, arr, n);

}

void Reversee(int arr[] , int n) {
     return Recursee(0,arr,n);
}

