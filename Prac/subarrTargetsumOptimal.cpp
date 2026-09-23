  int countSubarrays(vector<int>& arr, int target) {
        //Write your code here..
      unordered_map<int,int>m;
      int count = 0;int sum = 0;

      for(int i = 0; i < n; i++) {
         sum += arr[i];

         if(sum == target) {
            count++;
         }

         count += m[sum - target];
         m[sum]++;
      }

      return  count;
  }

