int majorityElementII(vector<int>&arr) {
   
    int n = arr.size();
     set<int>s;

     for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) count++;
        }

        if(count > n/3) s.insert(arr[i]); 
     }

     return ans;
}

