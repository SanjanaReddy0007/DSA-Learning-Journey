
int countSegments(hugeArray* data) {
    
   int n = data->length();
   long long index = 0;
   int blocks = 0;

   while(index < n) {
      int low = index;
      int high = n - 1;
      int currIndex = data->valueAt(index);
      int lastSame = index;

      while(low <= high) {
         int mid = (low + high) / 2;
         if(data->valueAt(mid) == currentIndex) {
            lastSame = mid;
            low = mid + 1;
         } else {
            high = mid - 1;
         }
      }
      
     blocks++;
     index = lastsame + 1;
   }

   return blocks;

}

