int maxNumberOfKisoik(vector<vector<int>>&records) {
   int n = records.size();
   unordered_map<unordered_set<int>>kisoikVisitors;
   int ans = 0;

   for(int i = 0; i < n; i++) {
    int kisoik = records[i][1];
    int visitor = records[i][0];
    kisoikVisitors.[kisoik].insert(visitor);
    ans = max(ans , (int)kisoikVisitors[kisoik].size());
   }

   return ans;
}

