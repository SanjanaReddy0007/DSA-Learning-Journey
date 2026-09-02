long long countValidTriplets(vector<int>&nums,int m) {
     int n = nums.size();
     long long ans = 0;
     unordered_map<int,int>fm;

     for(int j = 0; j < n; j++) {
        for(int k = j + 1; k < n; k++) {
            int rem = (nums[j] + nums[k]) % m;
            long long need = (m - rem) % m;
            fm[need]++;
        }
        fm[nums[j] % m]++;
     }

     return ans;
    }
