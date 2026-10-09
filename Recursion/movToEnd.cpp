
void moveZeroesToEnd(vector<int>&arr, int n) {
    int i = 0;
    for(int j = 1; j < n- 1; j++) {
        if(arr[j] != 0) {
            swap(arr[i] , arr[j]);
            i++;
        }
    }
}


