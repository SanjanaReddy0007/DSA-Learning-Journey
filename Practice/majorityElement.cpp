int majorityyElement(vector<int>&arr) {
  int n = arr.size();

  for(int i = 0; i < n; i++) {
     int majority = 0;

    for(int j = i + 1; j < n; j++) {
        if(arr[i] == arr[j]) {
            majority++;
        }
    }

    if(majority > n / 2) {
        return arr[i];
    }
  }
   
  return -1;
}
