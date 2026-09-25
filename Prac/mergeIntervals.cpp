vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &nums) {
        //Write your code here...
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
      vetor<vector<int>>ans;
      int start = nums[0][0];
      int end = nums[0][1];

      for(int i = 1; i < n; i++) {
         if(end > nums[i][0]) {
            end = max(end , nums[i][1]); 
         } else {
            ans.push_back({start,end});
            start = nums[i][0];
            end = nums[i][1];
         }
      }

      ans.push_back({start,end});
      return ans;

}

