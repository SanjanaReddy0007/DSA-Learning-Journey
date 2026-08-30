
int keyelement(vector<int>&arr , int T) {
   int n = arr.size();
   long long longSum = 0;
   vector<long long>key;

   if(arr > T) {
     key.push_back(arr[n - 1]);
   }

   for(int i = n - 2; i >= 0; i--) {
      longSum += arr[i + 1];
      if(arr[i] - longSum > T) {
         key.push_back(arr[i]);
      }
   }

   reverse(key.begin() , key.end());
   return reverse;
}

