
void helper(int arr[] , int left , int right) {
    if(left >= right) return true;

    if(arr[left] != arr[right]) {
        return false;
    }

    helper(arr , left + 1, right - 1);

}

void recursion(int arr[]) {
    return helper(arr, 0 , n - 1);
}

