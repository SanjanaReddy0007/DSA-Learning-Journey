bool subarrmaxTo(vector<int>&arr, int m) {
   
    int n = arr.size();
     unordered_map<int,int>modSeen;
     modSeen[0] = -1;
    int prefix = 0;

   for(int i = 0; i < n; i++) {
      prefix = (prefix + arr[i]) % m;

      if(modSeen.find(prefix) != modSeen.end()) {
         if(i - modSeen[prefix] > 1) {
             return true;
         }
      } else{
        modseen[prefix] = i;
      }
   }

   return false;
}


