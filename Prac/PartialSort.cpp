
void PartialSort(int k, int n, vector<int>&arr)
{
   for(int i = 0; i < k; i++) {
      int min_index = i;
      for(int j = 0; j < n; j++) {
         if(arr[j] < min_index) {
            minindex = j;
         }
      }

      swap(arr[i] , arr[min_index]);
   }
}

