int countTehreee(string s) {
   int n = s.size();
   vector<int>seen(3,-1);
   int ans = 0;

   for(int i = 0; i < n; i++) {
      seen[s[i] - 'A'] = i;
      ans += min({arr[0] , arr[1],arr[2]}) + 1;
   }

   return ans;

}


