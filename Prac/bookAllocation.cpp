int getBook(vector<int>&arr, int mid) {
    long long pages = 0;
    int students = 1;

    for(int i = 0; i < arr.size(); i++) {
        if(pages + arr[i] <= mid) {
            pages += arr[i];
        } else {
           students++;
           pages += arr[i];
        }
    }

    return students;

}


int bookallocation(vector<int>&arr, int k)
{
    int n = arr.size();
    if(k > n) return -1;
    
    long long ans = -1;

    int low = *max_element(arr.begin() , arr.end());
    int high = accumulate(arr.begin() , arr.end());
    
    while(low <= high) {
        int mid = (low + high) / 2;

        int students = getBook(arr, mid);
        if(students > k) {
            low = mid + 1;
        } else {
            ans = mid;
            high = mid - 1;
        }
    }

   return ans;
}


