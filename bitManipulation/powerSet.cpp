vector<vector<int>>powerSet(vector<int>&arr) {
   int n = arr.size();
   vector<vector<int>>ans;

   for(int num = 0; num < (1 << n); num++) {
      vetor<int>temp;
      for(int i = 0; i < n; i++) {
        if(num & (1 << i)) {
            temp.push_back(arr[i]);
        }
      }

      ans.push_back(temp);
   }

   return ans;
}

//TC :- O(n * 2^n) both tc & sc

