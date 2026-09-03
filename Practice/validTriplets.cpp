 long long countValidTriplets(vector<int>&nums,int m) {
     int n = nums.size();
     int ans = 0;

     for(int i = 0; i < n; i++) {
        for(int j=i+1;j<n;j++) {
            for(int k = j + 1; k < n; k++) {
                long long sum = nums[i] + nums[j] + nums[k]
                if(sum % m == 0) {
                    ans++;
                }
            }
        }
     }

     return ans;
}
