vector<vector<int>> threeSum(vector<int>& arr) {

     set<vector<int>>S;
     int n = arr.size();

     for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
               if(arr[i] + arr[j] + arr[k] == 0) {
                  vector<int>temp = {arr[i],arr[j],arr[k]};
                  sort(temp.begin() , temp.end());
                  S.insert(temp);
               }
            }
        }
     }

    vector<vector<int>>ans;
     for(int i : S) {
        ans.push_back(i);
     }

     return ans;

}

