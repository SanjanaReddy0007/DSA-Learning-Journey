vector<int>SortedSquare(vector<int>&arr)
{
    int n = arr.size();
    vector<int>result(n);
    int left = 0, right = n - 1;

    for(int i = n-1; i >= 0; i--) {
        if(arr[left] > arr[right]) {
            result[i] = arr[left] * arr[left]; 
            left++;
        } else {
            result[i] = arr[right] * arr[right];
            right--;
        }
    }

    return result;

}
