
int firstOccurance(int arr[] , int n, int k)
{
   int low = 0, high = n - 1;
   int ans = -1;

   while(low <= high) {
      int mid = (low + high) / 2;

      if(arr[mid] == k) {
         ans = arr[mid];
         high = mid - 1;
      } else if(arr[mid] > k) {
         high = mid - 1;
      } else {
        low = mid + 1;
      }
   }

   return ans;
}




//lastoccurance
int lastOcuurance(int arr[] , int n, int k) {

    int low = 0, high = n - 1;
    int ans = -1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == k) {
            ans = arr[mid];
            low = mid + 1;
        } else if(arr[mid] > k) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;

}


