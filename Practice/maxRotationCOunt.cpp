int maxRotationCount(vector<int>&currentSequence, vector<int>&reference) {
   int n = currentSequence.size();
   int m = reference.size();
   int ans = 0;

   for(int i = 0; i < n; i++) {
     int match = 0;
     for(int j = 0; j < n; j++) {
       int originalIndex = (i - j + n) % n;
       if(currentSequence(originalIndex) == reference[j]) {
          match++;
       }
     }

      ans = max(ans, match);
   }

   return ans;
}


