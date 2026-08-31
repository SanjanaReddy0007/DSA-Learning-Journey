vector<vector<int>>threeSum(vector<int>&arr) {
   int n = arr.size();
   set<vector<int>>s;
   vector<vector<int>>ans;

   for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
        for(int k = j + 1; k < n; k++) {
            if(arr[i] + arr[j] + arr[k] == 0) {
                vector<int>temp = {arr[i] , arr[j] , arr[k]};
                sort(temp.begin() , temp.end());
                s.insert(temp);
            }
        }
    }
   }

   for(auto x : s) ans.push_back(x);
   return ans;
}

