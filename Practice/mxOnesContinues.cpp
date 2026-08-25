

int maxconsecutiveOnes(vector<int>&arr, int n) {
   int curr = 0;
   int maxx = 0;

   for(int i = 0; i < n; i++) {
      if(arr[i] == 1) {
        cur++;

      if(curr > max) {
        max = cur;
      }
    } else {
        cur = 0;
    }
   }

   return max;
}
//O(n)
