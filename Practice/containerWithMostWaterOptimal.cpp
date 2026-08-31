
int containerwithMostWaterOptimal(vector<int>&arr) {
   int n = arr.size();
   int i = 0, j = n - 1;
   int maxWater = 0;

   while(i < j) {
      int water = (j - i) * min(arr[i] , arr[j]);
      maxWater = max(water,maxWater);

      if(arr[i] < arr[j]) {
        i++;
      } else {
        j--;
      }
   }

   return maxWater;

}

