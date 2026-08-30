int keyElement(vector<int>&arr , int T) {
   int n = arr.size();
   vector<long long>Keyelements;

   for(int i = 0; i < n - 1; i++) {
      int rightSum = 0;
      for(int j = i + 1; j < n; j++) {
         rightsum += arr[j];
      } 
      if(arr[i] - rightSum > T) {
        keyelements.push_back(arr[i]);
      }
   }

   keyelements.push_back(arr[n - 1]);
   return keyelements;
}

