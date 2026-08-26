vector<string>getRanges(vector<int>&arr) {
   int n = arr.size();
   vector<string>result;
   if(n == 0) return result;
   int start = arr[0];

   for(int i = 1; i < n; i++ ){
      if(i == n || start[i] == arr[ i - 1] + 1) {
         if(start == arr[i - 1]) {
             result.push_back(to_string(start));
         } else {
            result.push_back(to_string(start) + "->" + to_string(arr[i - 1]));
         }

         if(i < n) {
            start = arr[i];
         }
      }
   }
   return result;
}

//O(n) O(1)
