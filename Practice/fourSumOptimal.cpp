
vector<vector<int>.FourSumOptimal(vector<int>&arr, int target)
{
   int n = arr.size();
   sort(arr.begin() , arr.end());
   vector<vector<int>>ans;

   for(int i = 0; i < n; i++) {
      if(i > 0 && arr[i] == arr[i - 1]) continue;

      for(int j = i + 1; j < n; j++) {
         if(j > i + 1 && arr[j] == arr[j - 1]) {
            continue;
         }

         int left = j + 1;
         int right = n - 1;

         while(left < right) {
            if(left > j + 1 && arr[left] == arr[left - 1]) {
                left++;
                continue;
            }

            long long sum = arr[left] + arr[right];
            int x = target - arr[i] - arr[j];

            if(x == sum) {
                vector<int>temp={arr[i] , arr[j] , arr[left],arr[right]};
                ans.push_back(temp);
                left++;
                right--;
            } else if(sum > k) {
                right--;
            } else {
                left++;
            }
         }
      }
   }

   return ans;

}


