
void reversearraySections(int arr[] , int left , int right) {
    if(left >= right) return;

    swap(arr[left] , arr[right]);
    reversearraySections(arr , left + 1, right - 1);
}


