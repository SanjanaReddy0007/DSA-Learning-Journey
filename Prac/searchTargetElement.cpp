
int Majorityelement(vector<int>&arr , int k) {
    int n = arr.size();
    
    int left = 0, right = n - 1;
    while(left < right ) {
        int mid = (left + right) / 2;

        if(arr[mid] >= target) {
            right = mid;
        } else {
            low = mid + 1;
        }
    }

    return low;

}


bool searhchTargetEl(vector<int>&arr , int k) {
    int n = arr.size();
    int left = MajorityElement(arr, k);
    int right = MajorityElement(arr , k + 1);
    return left - right > arr.size() / 2;
}

