
int isForms(int arr[] , int k, int m, int mid) {
    int count = 0;
    int bouquet = 0;

    for(int i = 0; i < n; i++) {
       if(arr[i] <= mid) {
          count++;
          if(count == k) {
             bouquet++;
             count = 0;
          }
       } else {
        count = 0;
       }
    }

    return bouquet;

}



int bouquetFormation(int arr[] , int k, int m) {
    int low = *min_element(arr,arr+n);
    int high = *max_element(arr,arr+n);
    int ans = high;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(isForms(arr,mid,n,k) >= m) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;

}


