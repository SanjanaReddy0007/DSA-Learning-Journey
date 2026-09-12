int missingNum(vector<int>&nums) {
    int n = nums.size();
   
     unordered_map<int,int>m;

     for(int i = 0; i < n; i++) {
        m[arr[i]]++;
     }

     for(int i = 0; i < n; i++) {
        if(m.find(i) == m.end()) {
            return i;
        }
     }

     return 0;
}
